using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;


namespace KidozSDK {



	public class Kidoz: MonoBehaviour {

		
		public const int NO_GAME_OBJECT = -1;
		public const int PLATFORM_NOT_SUPPORTED = -2;

		public static event Action<string> viewOpened;

		public static event Action<string> viewClosed;

		public string PublisherID;
		public string SecurityToken;

		static private Kidoz instance = null;



#if UNITY_ANDROID
		private static AndroidJavaObject kidozBridgeObject = null;
		private AndroidJavaObject activityContext = null;

		//Basic function creation function.
		//Since Kidoz SDK should be activated only once use this function to create 
		//a game object. If Kidoz game object was added to the scene there is no need to call this function
		public static Kidoz Create() {
			if( instance == null ) {
				GameObject singleton = new GameObject();
				singleton.name = "Kidoz";
				instance = singleton.AddComponent<Kidoz>();
			

			}

			return instance;
		}

		// Description: Add feed button in the selected location.
		// Parameters: 
		// 		int xPos - the x position of the left top left corner of the button image.
		//		int yPos - the y postion of the left top left corner of the button image.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addFeedButton(int xPos, int yPos)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("addFeedButton",xPos,yPos);
			return 0;
		}

		// Description: Add feed button in the selected location.
		// Parameters: 
		// 		int xPos - the x position of the left top left corner of the button image.
		//		int yPos - the y postion of the left top left corner of the button image.
		//		int size - the requested button size. Since the button is square the width and height are the same.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addFeedButton(int xPos, int yPos, int size)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("addFeedButton",xPos,yPos,size);
			return 0;
		}

		// Description: Remove the feedview btton from memory
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int removeFeedButton()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("removeFeedButton");
			return 0;
		}
		// Description: Change the feed button visibility 
		// Parameters: 
		// 		bool visible - true the button will appear. false the button will be hidden
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int changeFeedButtonVisibility(bool visible)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("changeFeedButtonVisibility",visible);
			return 0;
		}

		// Description: returns the default feed button size. 
		// Parameters: 
		// 		bool visible - true the button will appear. false the button will be hidden
		// return:
		//		>0 	- the button size. since the button is square the returned value is for both width and height. 
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int getFeedButtonDefaultSize()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			Kidoz tempObject = getInstance ();
			AndroidJavaObject con = tempObject.getContext ();
			int size = kidozBridgeObject.Call<int>("getFeedButtonDefaultSize",con);
			return size;
		}

		// Description: Display the feed view. 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showFeedView()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("showFeedView");
			return 0;
		}
		// Description: close the feed view. 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int dismissFeedView()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("dismissFeedView");
			return 0;
		}

		private  void showCallBack(string message){
			if (viewOpened != null) {
				viewOpened(message);
			}
		}
		
		private void closeCallBack(string message){
			if (viewClosed != null) {
				viewClosed(message);
			}
		} 

		public AndroidJavaObject getContext(){
			return activityContext;
		}
		static public Kidoz getInstance(){
			return instance;
		}

		void Awake() {
			// Limit the number of instances to one
			if(instance == null) {

				instance = this;
				DontDestroyOnLoad(gameObject);

				///get activity
				using(AndroidJavaClass activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
					activityContext = activityClass.GetStatic<AndroidJavaObject>("currentActivity");
				}

				//init the Kidoz SDK
				using (var pluginSDKClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozSDK")) {
					pluginSDKClass.CallStatic("initialize",new object[] { activityContext, PublisherID, SecurityToken}); 
				}

				//init Kidoz SDK API module
				using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozUnityBridge")) {
					kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

					kidozBridgeObject.Call("setFeedViewEventListeners", this.gameObject.name,"showCallBack","closeCallBack");

				}

			}
			else {
				// duplicate
				Destroy(gameObject);
			}
		}

		void OnDestroy() {
			if(this == instance)
			{
				instance = null;

			}
		}


#else 
		public static Kidoz Create() {
		
			return instance;
		}

		// Description: Add feed button in the selected location.
		// Parameters: 
		// 		int xPos - the x position of the left top left corner of the button image.
		//		int yPos - the y postion of the left top left corner of the button image.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int addFeedButton(int xPos, int yPos)
		{

			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: Add feed button in the selected location.
		// Parameters: 
		// 		int xPos - the x position of the left top left corner of the button image.
		//		int yPos - the y postion of the left top left corner of the button image.
		//		int size - the requested button size. Since the button is square the width and height are the same.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int addFeedButton(int xPos, int yPos, int size)
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: Remove the feedview btton from memory
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int removeFeedButton()
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		// Description: Change the feed button visibility 
		// Parameters: 
		// 		bool visible - true the button will appear. false the button will be hidden
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int changeFeedButtonVisibility(bool visible)
		{

			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: returns the default feed button size. 
		// Parameters: 
		// 		bool visible - true the button will appear. false the button will be hidden
		// return:
		//		>0 	- the button size. since the button is square the returned value is for both width and height. 
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int getFeedButtonDefaultSize()
		{

			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: Display the feed view. 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int showFeedView()
		{

			return PLATFORM_NOT_SUPPORTED;
		}
		// Description: close the feed view. 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		//		PLATFORM_NOT_SUPPORTED	- the SDK doesn't support this platform
		public static int dismissFeedView()
		{

			return PLATFORM_NOT_SUPPORTED;
		}


		
		private  void showCallBack(string message){

		}
		
		private void closeCallBack(string message){

		} 
		
		void Awake() {

			// Limit the number of instances to one
			if(instance == null) {

				instance = this;
				DontDestroyOnLoad(gameObject);
				

				
			}
			else {
				// duplicate
				Destroy(gameObject);
			}
		}
		
		void OnDestroy() {
			if(this == instance)
			{
				instance = null;
				
			}
		}
#endif

	}
	
}
