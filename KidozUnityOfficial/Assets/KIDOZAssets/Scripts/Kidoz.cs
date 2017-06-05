using UnityEngine;
#if UNITY_4_6 || UNITY_5
using UnityEngine.EventSystems;
#endif
using System;
using System.Collections;

#if UNITY_IOS
using KIDOZiOSInterface;
#elif UNITY_ANDROID
using KIDOZAndroidInterface;
#endif

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

		public enum INTERSTITIAL_AD_MODE
		{
			NORMAL = 0,
			REWARDED = 1
		}

		public const int NO_GAME_OBJECT = -1;
		public const int PLATFORM_NOT_SUPPORTED = -2;

		public static event Action<string> initSuccess;

		public static event Action<string> initError;

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

		public static event Action<string> interstitialOnNoOffers;

		public static event Action<string> onRewardedDone;

		public static event Action<string> onRewardedVideoStarted;

		public static event Action<string> rewardedOpen;
		
		public static event Action<string> rewardedClose;
		
		public static event Action<string> rewardedReady;
		
		public static event Action<string> rewardedOnLoadFail;
		
		public static event Action<string> rewardedOnNoOffers;

		public static event Action<string> videoUnitReady;

		public static event Action<string> videoUnitOpen;

		public static event Action<string> videoUnitClose;

		public string PublisherID;
		public string SecurityToken;

		static private Kidoz instance = null;
		static private bool initFlag = false;
#if UNITY_IOS

		private static KIDOZiOSInterface.KIDOZiOSInterface kidozin = new KIDOZiOSInterface.KIDOZiOSInterface();



#elif UNITY_ANDROID 
		private static KIDOZAndroidInterface.KIDOZAndroidInterface kidozin = new KIDOZAndroidInterface.KIDOZAndroidInterface();
#endif

		void Awake() 
		{
			if (instance == null) 
			{
				
//				

				if (GameObject.Find("KidozObject") != null)
				{
					instance = this;
					init(PublisherID,SecurityToken);
				}

			}
		}

		public static Kidoz Create() {
			//			if( instance == null ) {
			//				GameObject singleton = new GameObject();
			//				singleton.name = "Kidoz";
			//				instance = singleton.AddComponent<Kidoz>();
			//				
			//				
			//				
			//			}
			//
			return null;
		}

		public static void init(string developerID, string securityToken)
		{
			if (initFlag == true) 
			{
				return;
			}
			initFlag = true;
			print ("Kidoz | in init function -->");
			if (instance == null) {
				print ("Kidoz | in init function ==> instance == null");
				GameObject singleton = new GameObject ();
				singleton.name = "KidozObject";
				instance = singleton.AddComponent<Kidoz> ();
				instance.PublisherID = developerID;
				instance.SecurityToken = securityToken;


			} else 
			{
				print ("Kidoz | in init function ==> instance != null");
			}
			print ("Kidoz | init:" + developerID + "," + securityToken + "," + "-->" + instance.PublisherID + "," + instance.SecurityToken);
			kidozin.init (developerID, securityToken);

		}

		public static bool isInitialised(){
			if (kidozin == null) {
				return false;
			}
			return kidozin.isInitialised();
		}

		public static void testFunction()
		{
			kidozin.testFunction();
		}

		//Basic function creation function.
		//Since Kidoz SDK should be activated only once use this function to create 
		//a game object. If Kidoz game object was added to the scene there is no need to call this function

		
		// Description: Add feed button in the selected location.
		// Parameters: 
		// 		int xPos - the x position of the left top left corner of the button image.
		//		int yPos - the y postion of the left top left corner of the button image.
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addFeedButton(int xPos, int yPos)
		{
			kidozin.addFeedButton (xPos, yPos);
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
			kidozin.addFeedBUtton (xPos, yPos, size);
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
			kidozin.changeFeedButtonVisibility (visible);
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
			kidozin.addPanelToView ((int)panel_type, (int)handle_position);
			
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

			//TODO: implement function
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
			kidozin.changePanelVisibility (visible);
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
			kidozin.expandPanelView ();
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
			kidozin.collapsePanelView ();
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
			kidozin.setPanelViewColor (panelColor);
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
			return kidozin.getFeedButtonSize ();
		}
		
		// Description: Display the feed view. 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showFeedView()
		{
			kidozin.showFeedView ();

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
			kidozin.dismissFeedView ();
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
//			kidozin.addBannerToView ((int)position);
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
//			kidozin.showBanner ();
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
//			kidozin.hideBanner ();
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
//			kidozin.changeBannerPosition ((int)position);
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
			kidozin.addFlexiView (isAutoShow, (int)position);
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
			kidozin.hideFlexiView ();
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
			kidozin.showFlexiView ();
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
			if (kidozin.getIsFlexiViewVisible ()) {
				return 1;
			}
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
			kidozin.setFlexiViewDraggable (draggable);
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
			kidozin.setFlexiViewClosable (Closable);
			return 0;
		}

		public static bool getIsPanelExpanded()
		{
			//			return kidozin.getIsPanelExpended (); //TODO: WHY?
			return false;
		}





		//***********************************//
		//***** INTERSTITIAL & REWARDED *****//
		//***********************************//





		// Description: Load interstitial add ---- this function is deprecated 
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int loadInterstitialAd( bool isAutoShow)
		{
			kidozin.loadInterstitialAd (isAutoShow);
			return 0;
		}

		public static int loadRewardedAd( bool isAutoShow)
		{
			kidozin.loadRewardedAd (isAutoShow);
			return 0;
		}

		// Description: generate the interstitial object
		// Parameters: 
		// 		 
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int generateInterstitial( )
		{
			kidozin.generateInterstitial ();
			return 0;
		}

		public static int generateRewarded( )
		{
			kidozin.generateRewarded ();
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
			kidozin.showInterstitial ();
			return 0;
		}

		public static int showRewarded( )
		{
			kidozin.showRewarded ();
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
			return kidozin.getIsInterstitialLoaded ();
			
		}
		
		public static bool getIsRewardedLoaded( )
		{
			return kidozin.getIsRewardedLoaded ();
			
		}



		public static void printToastMessage(String message)
		{
			kidozin.logMessage (message); 
		}

		public static void showVideoUnit()
		{
			kidozin.showVideoUnit ();
			
		}

///listeners calls backs
////////////////////////////////////
	private void initSuccessCallback(string message){
			if (initSuccess != null) {
				initSuccess(message);
			}
	}

	private void initErrorCallback(string message){
		if (initError != null) {
			initError(message);
		}
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
	
	private void feedReadyCallBack(string message){
		if (feedReady != null) {
			feedReady(message);
		}
	}
	
	
	private  void panelExpandCallBack(string message){
		if (panelExpand != null) {
			panelExpand(message);
		}
	}
	
	private void panelCollapseCallBack(string message){
		if (panelCollapse != null) {
			panelCollapse(message);
		}
	} 
	
	private void panelReadyCallBack(string message){
		if (panelReady != null) {
			panelReady(message);
		}
	}
	
	private void bannerReadyCallBack(string message){
		if (bannerReady != null) {
			bannerReady(message);
		}
	} 
	private void bannerShowCallBack(string message){
		if (bannerShow != null) {
			bannerShow(message);
		}
	} 
	private void bannerHideCallBack(string message){
		if (bannerHide != null) {
			bannerHide(message);
		}
	} 
	private void bannerContentLoadedCallBack(string message){
		if (bannerContentLoaded != null) {
			bannerContentLoaded(message);
		}
	} 
	private void bannerContentLoadFailedCallBack(string message){
		if (bannerContentLoadFailed != null) {
			bannerContentLoadFailed(message);
		}
	} 
	
	
	private void flexiViewReadyCallBack(string message){
		if (flexiViewReady != null) {
			flexiViewReady(message);
		}
	} 
	private void flexiViewShowCallBack(string message){
		if (flexiViewShow != null) {
			flexiViewShow(message);
		}
	} 
	private void flexiViewHideCallBack(string message){
		if (flexiViewHide != null) {
			flexiViewHide(message);
		}
	} 
	
	private void playerOpenCallBack(string message){
		if (playerOpen != null) {
			playerOpen(message);
		}
	} 
	private void playerCloseCallBack(string message){
		if (playerClose != null) {
			playerClose(message);
		}
	} 
	
	private void videoUnitReadyCallBack(string message){
		if (videoUnitReady != null) {
			videoUnitReady(message);
		}
	}
	
	private void videoUnitOpenCallBack(string message){
		if (videoUnitOpen != null) {
			videoUnitOpen(message);
		}
	}
	
	private void videoUnitCloseCallBack(string message){
		if ( videoUnitClose != null) {
			videoUnitClose(message);
		}
	}


	//***********************************//
	//***** INTERSTITIAL & REWARDED *****//
	//***********************************//

	private void interstitialOpenCallBack(string message){
		if (interstitialOpen != null) {
			interstitialOpen(message);
		}
	} 
	
	private void interstitialCloseCallBack(string message){
		if (interstitialClose != null) {
			interstitialClose(message);
		}
	} 
	
	private void interstitialReadyCallBack(string message){
		if (interstitialReady != null) {
			interstitialReady(message);
		}
	} 
	
	private void interstitialOnLoadFailCallBack(string message){
		if (interstitialOnLoadFail != null) {
			interstitialOnLoadFail(message);
		}
	}

	private void interstitialOnNoOffersCallBack(string message){
		if (interstitialOnNoOffers != null) {
			interstitialOnNoOffers(message);
		}
	}

	private void onRewardedCallBack(string message){
		if (onRewardedDone != null) {
			onRewardedDone(message);
		}
	}

	private void onRewardedVideoStartedCallBack(string message){
		if (onRewardedVideoStarted != null) {
			onRewardedVideoStarted(message);
		}
	}
	
	private void rewardedOpenCallBack(string message){
		if (rewardedOpen != null) {
			rewardedOpen(message);
		}
	} 
	
	private void rewardedCloseCallBack(string message){
		if (rewardedClose != null) {
			rewardedClose(message);
		}
	} 
	
	private void rewardedReadyCallBack(string message){
		if (rewardedReady != null) {
			rewardedReady(message);
		}
	} 
	
	private void rewardedOnLoadFailCallBack(string message){
		if (rewardedOnLoadFail != null) {
			rewardedOnLoadFail(message);
		}
	}
	
	private void rewardedOnNoOffersCallBack(string message){
		if (rewardedOnNoOffers != null) {
			rewardedOnNoOffers(message);
		}
	}



#if __OOO___ //UNITY_ANDROID && !UNITY_EDITOR
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

		public static bool isInitialised(){
			if (kidozin == null) {
				return false;
			}
			return kidozin.isInitialised();
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

				//init Kidoz SDK
				using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {

					kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

					kidozBridgeObject.Call("initialize", new object[] { activityContext, developerID, securityToken});

					KidozBridgeObject.Call("setMainSDKEventListeners", this.gameObject.name, "initSuccessCallback", "initErrorCallback");

					kidozBridgeObject.Call("setFeedViewEventListeners", this.gameObject.name,"showCallBack","closeCallBack","feedReadyCallBack");

					kidozBridgeObject.Call("setPanelViewEventListeners", this.gameObject.name,"panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");

					kidozBridgeObject.Call("setBannerEventListeners", this.gameObject.name,"bannerReadyCallBack","bannerShowCallBack","bannerHideCallBack","bannerContentLoadedCallBack","bannerContentLoadFailedCallBack");

					kidozBridgeObject.Call("setFlexiViewEventListener", this.gameObject.name,"flexiViewReadyCallBack","flexiViewShowCallBack","flexiViewHideCallBack");

					kidozBridgeObject.Call("setPlayersEventListener", this.gameObject.name,"playerOpenCallBack","playerCloseCallBack");

					kidozBridgeObject.Call("setInterstitialEventListener", this.gameObject.name,"interstitialOpenCallBack","interstitialCloseCallBack","interstitialReadyCallBack","interstitialOnLoadFailCallBack", "interstitialOnNoOffersCallBack");

					kidozBridgeObject.Call("setRewardedVideoEventListener", "KidozObject","onRewardedCallBack","onRewardedVideoStartedCallBack","rewardedOpenCallBack","rewardedCloseCallBack","rewardedReadyCallBack","rewardedOnLoadFailCallBack", "rewardedOnNoOffersCallBack");

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

#endif

	}

}
