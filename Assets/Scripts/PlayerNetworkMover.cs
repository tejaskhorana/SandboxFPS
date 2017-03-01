using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityStandardAssets.Characters.FirstPerson;

public class PlayerNetworkMover : Photon.MonoBehaviour {

	//delegate & event system to allow PNM to tll playermanager when dead. 
	public delegate void Respawn(float time);
	public event Respawn RespawnMe;
	public delegate void SendMessage(string MessageOverlay);
	public event SendMessage SendNetworkMessage;

	public Texture enemyTexture;


	//public Slider healthSlider;
	public float currentHealth = 100f;
	public float health = 100f;
	public float flashSpeed = 5f;
	public Color flashColor = new Color(1f, 0f, 0f, 0.1f);
	public Slider healthSlider;

	public GameObject visibilityCapsule;

	//things to sync
	Vector3 position;
	Quaternion rotation;
	Animator anim;

	//crouch
	Vector3 scale;

	float smoothing = 10f;

	//if unsynced, SAME player must shoot x times to kill rather than multiple. Better to sync

	int aim = 0;
	int sprint = 0;
	bool initialLoad = true;


	// Use this for initialization
	void Start ()
	{
		GameObject healthbargo = GameObject.Find ("HUD");
		healthbargo.SetActive(true);
		if (healthbargo != null) {
			healthSlider = healthbargo.GetComponentInChildren<Slider>();
		}
		healthSlider.value = currentHealth/health;
		

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


			transform.Find("VisibilityCapsule").gameObject.tag = "Ally";
			transform.gameObject.tag = "Ally";
			transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane").gameObject.layer = 8;
			transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane/Sights").gameObject.layer = 8;
			transform.Find ("FirstPersonCharacter/GunCamera/Candy-Cane/Shockwave").gameObject.layer = 8;

		} else {
			 //access and change identifier on minimap! EDIT!
			 transform.Find("MapViewCam/Identifier").GetComponent<MeshRenderer>().material.mainTexture = enemyTexture; 
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

			//crouch
			transform.localScale = scale;
			//GetComponent<CharacterController>().height = height;
			//GameObject.Find("VisibilityCapsule").transform.localScale = visibleScale;
		}
		//every frame smoothly moes dummy player where currently is to where should be, updates all enemies!
		while (true) {
			transform.position = Vector3.Lerp(transform.position, position, Time.deltaTime * smoothing);
			transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * smoothing);
			anim.SetInteger("Aim", aim);
			anim.SetInteger("Sprint", sprint);

			//crouch
			transform.localScale = scale;
			//GetComponent<CharacterController>().height = height;
			//GameObject.Find("VisibilityCapsule").transform.localScale = visibleScale;

			//visibilityCapsule.transform.localScale
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
			stream.SendNext (currentHealth);
			stream.SendNext(anim.GetInteger("Aim"));
			stream.SendNext(anim.GetInteger("Sprint"));

			//crouch
			stream.SendNext(transform.localScale);
			//stream.SendNext(GetComponent<CharacterControwller>().height);
			//stream.SendNext(visibilityCapsule.transform.localScale);
		} else {
			//reading from stream, update position of all players
			position = (Vector3) stream.ReceiveNext();
			rotation = (Quaternion) stream.ReceiveNext();
			currentHealth = (float)stream.ReceiveNext();
			aim = (int)stream.ReceiveNext();
			sprint = (int)stream.ReceiveNext();

			//crouch
			//height = (float)stream.ReceiveNext();
			//visibleScale = (Vector3)stream.ReceiveNext();
			scale = (Vector3)stream.ReceiveNext();

			//goes on to update after that! :)

		}
	}


	//rpc remote procedure call, must be called on everything!!!. synced across network!
	[PunRPC]
	public void GetShot (float damage, string enemyName)
	{
		currentHealth -= damage;

		if (photonView.isMine) {
			healthSlider.value = currentHealth/health;

			//playHitSound();
			//healthImage.color = flashColor; check update!
		}

		//only owner can remove self!
		if (currentHealth <= 0 && photonView.isMine) {
			if (SendNetworkMessage != null)
				//run on computer of person being shot
				SendNetworkMessage (PhotonNetwork.player.NickName + " was killed by " + enemyName);
			if (RespawnMe != null) {
				//transform.position = Vector3.Lerp(transform.position, new Vector3(transform.position.x, transform.position.y - 100, transform.position.z), Time.deltaTime * smoothing);
				RespawnMe (3f);
			}
			PhotonNetwork.Destroy(gameObject);
		}
	}
	/*
	void playHitSound ()
	{
		if (!audioSource.isPlaying) {
			audioSource.clip = hitSound;
			audioSource.Play();
		}
	}
	*/


}
