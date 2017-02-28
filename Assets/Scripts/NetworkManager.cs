using UnityEngine;
using System.Collections;
using UnityEngine.UI;
//use Queues for messages
using System.Collections.Generic;

/* initialize lobby, connect to game room, spawn player and maintain state, username, choose room, pick from rooms avail, manages network */
public class NetworkManager : MonoBehaviour {

	//available in editor, but private
	[SerializeField] Text connectionText;
	[SerializeField] Transform[] spawnPoints;
	[SerializeField] Camera sceneCamera;

	[SerializeField] GameObject serverWindow;
	[SerializeField] InputField username;
	[SerializeField] InputField roomName;
	[SerializeField] InputField roomList;

	[SerializeField] InputField messageWindow;

	//maintains THIS game's player
	GameObject player;
	Queue<string> messages;
	const int messageCount = 6;
	PhotonView photonView;

	// Use this for initialization
	void Start () {

		photonView = GetComponent<PhotonView>();
		messages = new Queue<string>(messageCount);

		//use verbose logging, so I can see all problems.
		//SHOW ME EVERYTHING!
		PhotonNetwork.networkingPeer.DebugOut = ExitGames.Client.Photon.DebugLevel.ALL;
		PhotonNetwork.logLevel = PhotonLogLevel.Full;
		PhotonNetwork.autoJoinLobby = true;

		//Connect!, only ppl with same version of game can play each other, right now parameter arbitrary b/c only one version
		PhotonNetwork.ConnectUsingSettings("0.1");
		StartCoroutine("UpdateConnectionString");
	}

	// Update is called once per frame
	IEnumerator UpdateConnectionString ()
	{
		
		//update text while coroutine is running
		while (true) {
			connectionText.text = PhotonNetwork.connectionStateDetailed.ToString();
			yield return null;
		}
	}

	void OnJoinedLobby ()
	{
		serverWindow.SetActive(true);
	}

	void OnReceivedRoomListUpdate ()
	{
		//roomList.text = "";

		//only works in lobby
		RoomInfo[] rooms = PhotonNetwork.GetRoomList();
		Debug.Log(rooms.Length);

		foreach (RoomInfo room in rooms) {
			roomList.text = roomList.text + room.Name + "\n";
		} 
		Debug.Log(roomList.text);
	}


	public void JoinRoom ()
	{
		PhotonNetwork.player.NickName = username.text;
		RoomOptions roomOptions = new RoomOptions() {IsVisible = true, MaxPlayers = 10};
		PhotonNetwork.JoinOrCreateRoom(roomName.text, roomOptions, TypedLobby.Default);
	}

	//built in function from photon, we will use it to start spawn process
	void OnJoinedRoom ()
	{
		serverWindow.SetActive(false);
		StartCoroutine("UpdateConnectionString");
		//text disappears once connected to room!
		connectionText.text = "";
		StartSpawnProcess(0f);
	}

	void StartSpawnProcess (float respawnTime)
	{
		//lobby camera while waiting :) 
		sceneCamera.enabled = true;
		StartCoroutine("SpawnPlayer", respawnTime);
	}

	//coroutine that instantiates player on network, allows us to vary how long wait. LAST STEP IN RESPAWN!
	IEnumerator SpawnPlayer(float respawnTime) {
		//when starts, it waits some time to respawn
		yield return new WaitForSeconds(respawnTime);
		int index = Random.Range(0, spawnPoints.Length);
		//everyone must know its made!!, so photoninstantiator, can only instantiate by name if it resources folder. 
		player = PhotonNetwork.Instantiate("FPSPlayer", spawnPoints[index].position, spawnPoints[index].rotation, 0);
		//subscribe!
		player.GetComponent<PlayerNetworkMover>().RespawnMe += StartSpawnProcess;
		player.GetComponent<PlayerNetworkMover>().SendNetworkMessage += AddMessage;
		sceneCamera.enabled = false;

		AddMessage("Spawned player : " + PhotonNetwork.player.NickName);
	}


	void AddMessage (string message)
	{
		photonView.RPC("AddMessage_RPC", PhotonTargets.All, message);
	}

	[PunRPC]
	void AddMessage_RPC (string message)
	{
		messages.Enqueue (message);
		if (messages.Count > messageCount) {
			messages.Dequeue ();
		}
		messageWindow.text = "";
		foreach (string m in messages) {
			messageWindow.text += m+ "\n";
		}
	}

}
