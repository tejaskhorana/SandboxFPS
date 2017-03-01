using UnityEngine;
using System.Collections;

public class PlayerAnimations : MonoBehaviour {

	public Animator anim;
	bool crouchStatus;

	void Start() {
		crouchStatus = false;
		anim.updateMode = AnimatorUpdateMode.UnscaledTime; 
		anim = GetComponent<Animator>();
	}

	// Update is called once per frame
	void Update ()
	{	

		//when cleaning code, merge with PlayerNetworkMover!
		bool sprinting = Input.GetKey (KeyCode.LeftShift);
		bool aim = Input.GetButton ("Fire2");


		if (aim)
			sprinting = false;

		if (sprinting) {
			anim.SetInteger("Sprint", 1);
		} else {
			anim.SetInteger("Sprint", 0);
		}

		if (aim) {
			
			anim.SetInteger("Aim", 1);
		} else {
			anim.SetInteger("Aim", 0);
		}

	}
}
