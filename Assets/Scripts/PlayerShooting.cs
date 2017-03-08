using UnityEngine;
using System.Collections;

/* graphical effects, physics, impacts of shooting */
public class PlayerShooting : MonoBehaviour {

	public ParticleSystem muzzleFlash;
	public Animator anim;
	public GameObject impactPrefab;
	public AudioSource audioSource;
	public AudioClip gunShotClip;
	public AudioClip meleeClip;

	GameObject[] impacts;
	int currentImpact = 0;
	int maxImpacts = 5;
	float damage = 5f;

	bool shooting = false;
	bool meleeing = false;

	// Use this for initialization
	void Start ()
	{
		impacts = new GameObject[maxImpacts];
		for (int i = 0; i < maxImpacts; i++) {
			impacts[i]=(GameObject)Instantiate(impactPrefab);
		}
		//no need for click and drag now, removes clutter
		//anim = GetComponentInChildren<Animator>();

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Input.GetKeyDown (KeyCode.F) && !Input.GetKey (KeyCode.LeftShift)) {
			anim.SetTrigger("Fire");
			playGunShotClip ();
			muzzleFlash.Play();
			shooting = true;
		} else if (Input.GetKeyDown (KeyCode.G) && !Input.GetKey (KeyCode.LeftShift)) {
			anim.SetTrigger("Melee");
			playMeleeClip();
			meleeing = true;
		}
	}

	void playMeleeClip ()
	{
		audioSource.clip = meleeClip;
		audioSource.Play();
	}

	void playGunShotClip() {
			audioSource.clip = gunShotClip;
			audioSource.Play();
	}

	//do all physics in here
	void FixedUpdate ()
	{
		if (shooting) {
			shooting = false;
			RaycastHit hit;
			if (Physics.Raycast (transform.position, transform.forward, out hit, 100f)) {
				if (hit.transform.tag == "Enemy") {
					//KEY TO SUCCESSFUL SHOOTING ON NETWORK
					//run on computer of person shooting
					hit.transform.GetComponent<PhotonView> ().RPC ("GetHit", PhotonTargets.All, damage, PhotonNetwork.player.NickName);
				}
				impacts [currentImpact].transform.position = hit.point;
				impacts [currentImpact].GetComponent<ParticleSystem> ().Play ();
				if (++currentImpact >= maxImpacts) {
					currentImpact = 0;
				}
			}
		} else if (meleeing) {
			meleeing = false;
			RaycastHit hit;
			if (Physics.Raycast (transform.position, transform.forward, out hit, 2.3f)) {
				if (hit.transform.tag == "Enemy") {
					//KEY TO SUCCESSFUL SHOOTING ON NETWORK
					//run on computer of person shooting
					hit.transform.GetComponent<PhotonView> ().RPC ("GetHit", PhotonTargets.All, damage*8, PhotonNetwork.player.NickName);
				}

			}
		}
	}





}
