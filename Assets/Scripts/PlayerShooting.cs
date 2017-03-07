using UnityEngine;
using System.Collections;

/* graphical effects, physics, impacts of shooting */
public class PlayerShooting : MonoBehaviour {

	public ParticleSystem muzzleFlash;
	public Animator anim;
	public GameObject impactPrefab;
	public AudioSource audioSource;
	public AudioClip gunShotClip;

	GameObject[] impacts;
	int currentImpact = 0;
	int maxImpacts = 5;
	float damage = 5f;

	bool shooting = false;

	// Use this for initialization
	void Start ()
	{
		impacts = new GameObject[maxImpacts];
		for (int i = 0; i < maxImpacts; i++) {
			impacts[i]=(GameObject)Instantiate(impactPrefab);
		}
		//no need for click and drag now, removes clutter
		anim = GetComponentInChildren<Animator>();

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (Input.GetKeyDown(KeyCode.F) && !Input.GetKey (KeyCode.LeftShift)) {
			playGunShotClip();
			muzzleFlash.Play();
			anim.SetTrigger("Fire");
			shooting = true;
		}
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
					hit.transform.GetComponent<PhotonView>().RPC("GetShot", PhotonTargets.All, damage, PhotonNetwork.player.NickName);
				}

				impacts[currentImpact].transform.position = hit.point;
				impacts[currentImpact].GetComponent<ParticleSystem>().Play();


				if (++currentImpact >= maxImpacts) {
					currentImpact=0;
				}

			}
		}
	}





}
