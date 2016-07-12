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

		public enum BANNER_POSITION 
		{
			TOP =0,
			BOTTOM = 1,
			TOP_LEFT = 2,
			TOP_RIGHT = 3,
			BOTTON_LEFT = 4,
			BOTTOM_RIGHT = 5,
		}

		public enum FLEXI_VIEW_POSITION
		{
			TOP_START = 0,
			TOP_CENTER = 1,
			TOP_END = 2,
			MID_START = 3,
			MID_CENTER = 4,
			MID_END = 5,
			BOTTOM_START = 6,
			BOTTOM_CENTER = 7,
			BOTTOM_END = 8
		}
		public const int NO_GAME_OBJECT = -1;
		public const int PLATFORM_NOT_SUPPORTED = -2;
#if UNITY_4_6 || UNITY_5
		public static event Action<string> viewOpened;

		public static event Action<string> viewClosed;

		public static event Action<String> feedReady;

		public static event Action<string> panelExpand;
		
		public static event Action<string> panelCollapse;

		public static event Action<string> panelReady;

		public static event Action<string> bannerReady;

		public static event Action<string> bannerShow;

		public static event Action<string> bannerHide;

		public static event Action<string> bannerContentLoaded;

		public static event Action<string> bannerContentLoadFailed;

		public static event Action<string> flexiViewReady;
		
		public static event Action<string> flexiViewShow;
		
		public static event Action<string> flexiViewHide;

		public static event Action<string> playerOpen;

		public static event Action<string> playerClose;

		public static event Action<string> interstitialOpen;

		public static event Action<string> interstitialClose;

		public static event Action<string> interstitialReady;

		public static event Action<string> interstitialOnLoadFail;
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

		// Description: Add panel to view which will be opened automatically for the requested duration 
		// Parameters: 
		// 		PANEL_TYPE panel_type - The panel type (where the panel will be located)
		//		HANDLE_POSITION handle_position - the place where to place the handle for the panel
		//		float startDelay				- the selected time in seconds before the panel will be opened. -1 will disable this feature
		//		float duration					- the selected time in seconds for the panel to stay open. -1 the panel will not be closed.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addPanelToView(PANEL_TYPE panel_type, HANDLE_POSITION handle_position, float startDelay, float duration)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			
			kidozBridgeObject.Call("addPanelToView",(int)panel_type,(int)handle_position,startDelay,duration);
			
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
			kidozBridgeObject.Call("collapsePanelView");
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
			int size = kidozBridgeObject.Call<int>("getFeedButtonSize");
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

		// Description: add Banner to view 
		// Parameters: 
		// 		int - banner position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addBannerToView(BANNER_POSITION position)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("addBannerToView",(int)position);
			return 0;
		}

		// Description: show the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showBanner()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("showBanner");
			return 0;
		}

		// Description: hide the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int hideBanner()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("hideBanner");
			return 0;
		}

		// Description: change the panel position 
		// Parameters: 
		// 		int - banner position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int changeBannerPosition(BANNER_POSITION position)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("changeBannerPosition",(int)position);
			return 0;
		}


		// Description: add flexiView
		// Parameters: 
		// 		boolean - automatic show
		//		int - initial position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addFlexiView(bool isAutoShow, FLEXI_VIEW_POSITION position )
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("addFlexiView",isAutoShow, (int)position);
			return 0;
		}

		// Description: hide flexiView
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int hideFlexiView()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("hideFlexiView");
			return 0;
		}

		// Description: show flexiView
		// Parameters: 
		// 		boolean - automatic show
		//		int - initial position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showFlexiView( )
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("showFlexiView");
			return 0;
		}

		// Description: get if the flexi view is visible
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int getIsFlexiViewVisible()
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("getIsFlexiViewVisible");
			return 0;
		}


		// Description: Disable/enable dragging the flexiview
		// Parameters: 
		// 		boolean - true the flexi will be draggable 
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setFlexiViewDraggable( bool draggable)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("setFlexiViewDraggable",draggable);
			return 0;
		}

		// Description: Disable/enable closing the flexiview
		// Parameters: 
		// 		boolean - true the flexi will be closeable 
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setFlexiViewClosable( bool Closable)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("setFlexiViewClosable",Closable);
			return 0;
		}

		// Description: Load interstitial add
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int loadInterstitialAd( bool isAutoShow)
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("loadInterstitialAd",isAutoShow);
			return 0;
		}

		// Description: show the interstitial add that was loaded
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showInterstitial( )
		{
			if (instance == null) {
				return NO_GAME_OBJECT;
			}
			kidozBridgeObject.Call("showInterstitial");
			return 0;
		}

		// Description: return if an interstitial add was loaded
		// Parameters: 
		// 		
		// return:
		//		0 	- interstitial add was not loaded
		//		NO_GAME1_OBJECT	- there is no Kidoz gameobject 
		public static bool getIsInterstitialLoaded( )
		{
			if (instance == null) {
				return false;
			}
			return kidozBridgeObject.Call<bool>("getIsInterstitialLoaded");

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

		private void feedReadyCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (feedReady != null) {
				feedReady(message);
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
		public static bool getIsPanelExpanded()
		{
			return kidozBridgeObject.Call<bool>("getIsPanelExpanded");
		}



		private void bannerReadyCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (bannerReady != null) {
				bannerReady(message);
			}
			#endif
		} 
		private void bannerShowCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (bannerShow != null) {
				bannerShow(message);
			}
			#endif
		} 
		private void bannerHideCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (bannerHide != null) {
				bannerHide(message);
			}
			#endif
		} 
		private void bannerContentLoadedCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (bannerContentLoaded != null) {
				bannerContentLoaded(message);
			}
			#endif
		} 
		private void bannerContentLoadFailedCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (bannerContentLoadFailed != null) {
				bannerContentLoadFailed(message);
			}
			#endif
		} 


		private void flexiViewReadyCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (flexiViewReady != null) {
				flexiViewReady(message);
			}
			#endif
		} 
		private void flexiViewShowCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (flexiViewShow != null) {
				flexiViewShow(message);
			}
			#endif
		} 
		private void flexiViewHideCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (flexiViewHide != null) {
				flexiViewHide(message);
			}
			#endif
		} 

		private void playerOpenCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (playerOpen != null) {
				playerOpen(message);
			}
			#endif
		} 
		private void playerCloseCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (playerClose != null) {
				playerClose(message);
			}
			#endif
		} 

		private void interstitialOpenCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (interstitialOpen != null) {
				interstitialOpen(message);
			}
			#endif
		} 

		private void interstitialCloseCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (interstitialClose != null) {
				interstitialClose(message);
			}
			#endif
		} 

		private void interstitialReadyCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (interstitialReady != null) {
				interstitialReady(message);
			}
			#endif
		} 

		private void interstitialOnLoadFailCallBack(string message){
			#if UNITY_4_6 || UNITY_5
			if (interstitialOnLoadFail != null) {
				interstitialOnLoadFail(message);
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

					kidozBridgeObject.Call("setFeedViewEventListeners", this.gameObject.name,"showCallBack","closeCallBack","feedReadyCallBack");

					kidozBridgeObject.Call("setPanelViewEventListeners", this.gameObject.name,"panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");

					kidozBridgeObject.Call("setBannerEventListeners", this.gameObject.name,"bannerReadyCallBack","bannerShowCallBack","bannerHideCallBack","bannerContentLoadedCallBack","bannerContentLoadFailedCallBack");

					kidozBridgeObject.Call("setFlexiViewEventListener", this.gameObject.name,"flexiViewReadyCallBack","flexiViewShowCallBack","flexiViewHideCallBack");

					kidozBridgeObject.Call("setPlayersEventListener", this.gameObject.name,"playerOpenCallBack","playerCloseCallBack");

					kidozBridgeObject.Call("setInterstitialEventListener", this.gameObject.name,"interstitialOpenCallBack","interstitialCloseCallBack","interstitialReadyCallBack","interstitialOnLoadFailCallBack");

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

		// Description: Add panel to view which will be opened automatically for the requested duration 
		// Parameters: 
		// 		PANEL_TYPE panel_type - The panel type (where the panel will be located)
		//		HANDLE_POSITION handle_position - the place where to place the handle for the panel
		//		float startDelay				- the selected time in seconds before the panel will be opened. -1 will disable this feature
		//		float duration					- the selected time in seconds for the panel to stay open. -1 the panel will not be closed.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addPanelToView(PANEL_TYPE panel_type, HANDLE_POSITION handle_position, float startDelay, float duration)
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

		// Description: Set Automatically show panel on being added to view
		// Parameters: 
		// 		float startDelay - time in seconds before automaticly opening the panel
		//		float showPeriod - time in seconds for the panel to stay open
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setPanelAutoExpend(float startDelay, float showPeriod)
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

		// Description: add Banner to view 
		// Parameters: 
		// 		int - banner position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addBannerToView(BANNER_POSITION position)
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: show the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showBanner()
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: hide the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int hideBanner()
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: change the panel position 
		// Parameters: 
		// 		int - banner position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int changeBannerPosition(BANNER_POSITION position)
		{
			return PLATFORM_NOT_SUPPORTED;
		}


		// Description: add flexiView
		// Parameters: 
		// 		boolean - automatic show
		//		int - initial position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addFlexiView(bool isAutoShow, FLEXI_VIEW_POSITION position )
		{
			return PLATFORM_NOT_SUPPORTED;
		}


		// Description: Disable/enable closing the flexiview
		// Parameters: 
		// 		boolean - true the flexi will be closeable 
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setFlexiViewClosable( bool Closable)
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
		public static bool getIsPanelExpanded()
		{
			return false;
		}

		// Description: hide flexiView
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int hideFlexiView()
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: show flexiView
		// Parameters: 
		// 		boolean - automatic show
		//		int - initial position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showFlexiView( )
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: get if the flexi view is visible
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int getIsFlexiViewVisible()
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: Disable/enable dragging the flexiview
		// Parameters: 
		// 		boolean - true the flexi will be draggable 
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setFlexiViewDraggable( bool draggable)
		{
			return PLATFORM_NOT_SUPPORTED;
		}

		// Description: Load interstitial add
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int loadInterstitialAd(bool isAutoShow )
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: show the interstitial add that was loaded
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showInterstitial( )
		{
			return PLATFORM_NOT_SUPPORTED;
		}
		
		// Description: return if an interstitial add was loaded
		// Parameters: 
		// 		
		// return:
		//		0 	- interstitial add was not loaded
		//		NO_GAME1_OBJECT	- there is no Kidoz gameobject 
		public static bool getIsInterstitialLoaded( )
		{
			return false;
			
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
