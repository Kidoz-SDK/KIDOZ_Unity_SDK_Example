using UnityEngine;
#if UNITY_4_6 || UNITY_5
using UnityEngine.EventSystems;
#endif
using System;
using System.Collections;


namespace KidozSDK {



	public class Kidoz: MonoBehaviour {

		public enum PANEL_TYPE
		{
			BOTTOM =0, TOP = 1, LEFT =2 , RIGHT =3
		};
		
		public enum HANDLE_POSITION
		{
			START, CENTER, END
		} ;

		public const int NO_GAME_OBJECT = -1;
		public const int PLATFORM_NOT_SUPPORTED = -2;
#if UNITY_4_6 || UNITY_5
		public static event Action<string> viewOpened;

		public static event Action<string> viewClosed;

		public static event Action<string> panelExpand;
		
		public static event Action<string> panelCollapse;

		public static event Action<string> panelReady;
#endif
		public string PublisherID;
		public string SecurityToken;

		static private Kidoz instance = null;



#if UNITY_ANDROID && !UNITY_EDITOR
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



		// Description: Add panel to view 
		// Parameters: 
		// 		PANEL_TYPE panel_type - The panel type (where the panel will be located)
		//		HANDLE_POSITION handle_position - the place where to place the handle for the panel
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addPanelToView(PANEL_TYPE panel_type, HANDLE_POSITION handle_position)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}

			kidozBridgeObject.Call("addPanelToView",(int)panel_type,(int)handle_position);
			
			return 0;
		}

		// Description: Change the panel button visibility 
		// Parameters: 
		// 		bool visible - true the panel will appear. false the button will be hidden
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int changePanelVisibility(bool visible)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("changePanelVisibility",visible);
			return 0;
		}

		// Description: Expand the panel view 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int expandPanelView()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("expandPanelView");
			return 0;
		}

		// Description: Collapse the panel view 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int collapsePanelView()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("expandPanelView");
			return 0;
		}

		// Description: set panel color
		// Parameters: 
		// 		string panelColor - the panel color as hex string with # sign
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setPanelColor(String panelColor)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("setPanelViewColor",panelColor);
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
#if UNITY_4_6 || UNITY_5
			if (viewOpened != null) {

				viewOpened(message);
			}
#endif
		}
		
		private void closeCallBack(string message){
#if UNITY_4_6 || UNITY_5
			if (viewClosed != null) {
				viewClosed(message);
			}
#endif
		} 

		private  void panelExpandCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (panelExpand != null) {
				
				panelExpand(message);
			}
			#endif
		}
		
		private void panelCollapseCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (panelCollapse != null) {
				panelCollapse(message);
			}
			#endif
		} 

		private void panelReadyCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (panelReady != null) {
				panelReady(message);
			}
			#endif
		} 

		public AndroidJavaObject getContext(){
			return activityContext;
		}
		static public Kidoz getInstance(){
			return instance;
		}
		public static void printToastMessage(String message)
		{
			kidozBridgeObject.Call("printToastLog",message); 
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
				using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {
					kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

					kidozBridgeObject.Call("setFeedViewEventListeners", this.gameObject.name,"showCallBack","closeCallBack");
					kidozBridgeObject.Call("setPanelViewEventListeners", this.gameObject.name,"panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");



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

		// Description: Add panel to view 
		// Parameters: 
		// 		bool visible - true the button will appear. false the button will be hidden
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addPanelToView(PANEL_TYPE panel_type, HANDLE_POSITION handle_position)
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: Change the panel button visibility 
		// Parameters: 
		// 		bool visible - true the panel will appear. false the button will be hidden
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int changePanelVisibility(bool visible)
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: Expand the panel view 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int expandPanelView()
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: set panel color
		// Parameters: 
		// 		string panelColor - the panel color as hex string with # sign
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setPanelColor(String panelColor)
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: Collapse the panel view 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int collapsePanelView()
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		private  void showCallBack(string message){

		}
		
		private void closeCallBack(string message){

		} 

		private  void panelExpandCallBack(string message){

		}
		
		private void panelCollapseCallBack(string message){

		} 

		private void panelReadyCallBack(string message){

		} 

		public static void printToastMessage(String message)
		{
			 
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
