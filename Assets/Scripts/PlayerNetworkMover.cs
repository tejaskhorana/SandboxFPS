using UnityEngine;
using System.Collections;
using UnityStandardAssets.Characters.FirstPerson;

public class PlayerNetworkMover : Photon.MonoBehaviour {

	//delegate & event system to allow PNM to tll playermanager when dead. 
	public delegate void Respawn(float time);
	public event Respawn RespawnMe;

	public delegate void SendMessage(string MessageOverlay);
	public event SendMessage SendNetworkMessage;

	//things to sync
	Vector3 position;
	Quaternion rotation;
	Animator anim;

	float smoothing = 10f;

	//if unsynced, SAME player must shoot x times to kill rather than multiple. Better to sync
	float health = 100f;
	int aim = 0;
	int sprint = 0;
	bool initialLoad = true;


	// Use this for initialization
	void Start ()
	{
		//anim = transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane").GetComponent<Animator>();
		//anim.GetComponentInChildren<Animator>();
		anim = GetComponentInChildren<Animator>();

		PhotonView photonView = (PhotonView)GetComponent<PhotonView> ();
		if (photonView.isMine) {
			GetComponent<Rigidbody>().useGravity = true;
			GetComponent<FirstPersonController> ().enabled = true;
			GetComponentInChildren<AudioListener> ().enabled = true;
			GetComponentInChildren<PlayerShooting> ().enabled = true;
			GetComponentInChildren<PlayerAnimations> ().enabled = true;

			foreach (Camera cam in GetComponentsInChildren<Camera>())
				cam.enabled = true;

			transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane").gameObject.layer = 8;
			transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane/Sights").gameObject.layer = 8;
			transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane/Shockwave").gameObject.layer = 8;
		} else {
			 StartCoroutine("UpdateData");
		}
	}

	IEnumerator UpdateData ()
	{
		//first time data loads, move exactly to where they're supposed to be. Prevents jittering. 
		if (initialLoad) {
			initialLoad = false;
			transform.position = position;
			transform.rotation = rotation;
		}
		//every frame smoothly moes dummy player where currently is to where should be, updates all enemies!
		while (true) {
			transform.position = Vector3.Lerp(transform.position, position, Time.deltaTime * smoothing);
			transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * smoothing);
			anim.SetInteger("Aim", aim);
			anim.SetInteger("Sprint", sprint);
			//happens every frame, but doesn't allow frame to advance til done!
			yield return null;

		}
	}

	//from Photon, how sync data between
	void OnPhotonSerializeView (PhotonStream stream, PhotonMessageInfo info)
	{
		//currently ready or writing to stream?
		if (stream.isWriting) {
			stream.SendNext (transform.position);
			stream.SendNext (transform.rotation);
			stream.SendNext (health);
			stream.SendNext(anim.GetInteger("Aim"));
			stream.SendNext(anim.GetInteger("Sprint"));

		} else {
			//reading from stream, update position of all players
			position = (Vector3) stream.ReceiveNext();
			rotation = (Quaternion) stream.ReceiveNext();
			health = (float)stream.ReceiveNext();
			aim = (int)stream.ReceiveNext();
			sprint = (int)stream.ReceiveNext();

			//goes on to update after that! :)

		}
	}

	//rpc remote procedure call, must be called on everything!!!. synced across network!
	[PunRPC]
	public void GetShot (float damage, string enemyName)
	{
		health -= damage;
		//only owner can remove self!
		if (health <= 0 && photonView.isMine) {

			if (SendNetworkMessage != null)
				//run on computer of person being shot
				SendNetworkMessage (PhotonNetwork.player.NickName + " was killed by " + enemyName);
			Debug.Log ("respawn?");
			if (RespawnMe != null) {
				Debug.Log("respawn!");
				RespawnMe (3f);
			}
			PhotonNetwork.Destroy(gameObject);

		}
	}

}
