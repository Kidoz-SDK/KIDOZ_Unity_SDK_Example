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
#else
using KIDOZDummyInterface;
#endif

namespace KidozSDK
{
	
	
	
	public class Kidoz :MonoBehaviour
	{
		
		public enum PANEL_TYPE
		{
			BOTTOM = 0, TOP = 1, LEFT = 2, RIGHT = 3
		};
		
		public enum HANDLE_POSITION
		{
			START, CENTER, END
		};
		
		
		public enum BANNER_POSITION
		{
			[ObsoleteAttribute ( "Use TOP_CENTER" )]
			TOP = 0,
			[ObsoleteAttribute ( "Use BOTTOM_CENTER" )]
			BOTTOM = 1,
			TOP_CENTER = 0,
			BOTTOM_CENTER = 1,
			TOP_LEFT = 2,
			TOP_RIGHT = 3,
			BOTTOM_LEFT = 4,
			BOTTOM_RIGHT = 5
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
		
		public static event Action<string> panelExpand;
		
		public static event Action<string> panelCollapse;
		
		public static event Action<string> panelReady;
		
		public static event Action<string> bannerContentLoaded;
		
		public static event Action<string> bannerContentLoadFailed;
		
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
		
		
		//banner
		public static event Action<string> bannerReady;
		
		public static event Action<string> bannerClose;
		
		public static event Action<string> bannerError;
		
		public static event Action<string> bannerNoOffers;
		
		
		public string PublisherID;
		public string SecurityToken;
		
		static private bool initFlag = false;
		static private bool mPause = false;
		
		#if UNITY_IOS
		private static KIDOZiOSInterface.KIDOZiOSInterface kidozin = new KIDOZiOSInterface.KIDOZiOSInterface();
		#elif UNITY_ANDROID
		private static KIDOZAndroidInterface.KIDOZAndroidInterface kidozin = new KIDOZAndroidInterface.KIDOZAndroidInterface();
		#else
		private static KIDOZDummyInterface.KIDOZDummyInterface kidozin = new KIDOZDummyInterface.KIDOZDummyInterface ( );
		#endif
		
		
		public const string KIDOZ_OBJECT_NAME = "KidozObject";
		
		
		#region Singelton
		
		static private Kidoz instance = null;
		
		public static Kidoz Instance
		{
			get
			{
				if (instance == null)
				{
					SetInstance ( Create ( ) );
				}
				return instance;
			}
		}
		
		
		static void SetInstance (Kidoz _instance)
		{
			instance = _instance;
			DontDestroyOnLoad ( instance.gameObject );
		}
		
		void Awake ()
		{
			if (instance == null)
			{
				SetInstance ( this );
				if (!string.IsNullOrEmpty ( PublisherID ) && !string.IsNullOrEmpty ( SecurityToken ))
				{
					init ( PublisherID, SecurityToken );
				}
			}
			else
			{
				print ( "Kidoz | not allowed multiple instances" );
				Destroy ( gameObject );
			}
		}
		
		public static Kidoz Create ()
		{
			if (instance == null)
			{
				GameObject singleton = new GameObject ( KIDOZ_OBJECT_NAME );
				return singleton.AddComponent<Kidoz> ( );
			}
			return null;
		}
		
		#endregion
		
		
		public static void SetiOSAppPauseOnBackground(Boolean pause){
			mPause = pause;
		}
		
		public static void init (string developerID, string securityToken)
		{
			if (initFlag == true)
			{
				return;
			}
			initFlag = true;
			print ( "Kidoz | in init function -->" );
			if (instance == null)
			{
				print ( "Kidoz | in init function ==> instance == null" );
				SetInstance ( Create ( ) );
				//instance.PublisherID = developerID;
				//instance.SecurityToken = securityToken;
			}
			else
			{
				print ( "Kidoz | in init function ==> instance != null" );
			}
			print ( "Kidoz | init:" + developerID + "," + securityToken /*+ "," + "-->" + instance.PublisherID + "," + instance.SecurityToken*/ );
			kidozin.init ( developerID, securityToken );
		}
		
		
		public static bool isInitialised ()
		{
			if (kidozin == null)
			{
				return false;
			}
			return kidozin.isInitialised ( );
		}
		
		public static void testFunction ()
		{
			kidozin.testFunction ( );
		}
		
		//Basic function creation function.
		//Since Kidoz SDK should be activated only once use this function to create 
		//a game object. If Kidoz game object was added to the scene there is no need to call this function
		
		
		
		
		// Description: Add panel to view 
		// Parameters: 
		// 		PANEL_TYPE panel_type - The panel type (where the panel will be located)
		//		HANDLE_POSITION handle_position - the place where to place the handle for the panel
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int addPanelToView (PANEL_TYPE panel_type, HANDLE_POSITION handle_position)
		{
			kidozin.addPanelToView ( (int) panel_type, (int) handle_position );
			
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
		public static int addPanelToView (PANEL_TYPE panel_type, HANDLE_POSITION handle_position, float startDelay, float duration)
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
		public static int changePanelVisibility (bool visible)
		{
			kidozin.changePanelVisibility ( visible );
			return 0;
		}
		
		// Description: Expand the panel view 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int expandPanelView ()
		{
			kidozin.expandPanelView ( );
			return 0;
		}
		
		// Description: Collapse the panel view 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int collapsePanelView ()
		{
			kidozin.collapsePanelView ( );
			return 0;
		}
		
		// Description: set panel color
		// Parameters: 
		// 		string panelColor - the panel color as hex string with # sign
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setPanelColor (String panelColor)
		{
			kidozin.setPanelViewColor ( panelColor );
			return 0;
		}
		
		
		public static bool getIsPanelExpanded ()
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
		public static int loadInterstitialAd (bool isAutoShow)
		{
			kidozin.loadInterstitialAd ( isAutoShow );
			return 0;
		}
		
		public static int loadRewardedAd (bool isAutoShow)
		{
			kidozin.loadRewardedAd ( isAutoShow );
			return 0;
		}
		
		// Description: generate the interstitial object
		// Parameters: 
		// 		 
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int generateInterstitial ()
		{
			kidozin.generateInterstitial ( );
			return 0;
		}
		
		public static int generateRewarded ()
		{
			kidozin.generateRewarded ( );
			return 0;
		}
		
		// Description: show the interstitial add that was loaded
		// Parameters: 
		// 		
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showInterstitial ()
		{
			kidozin.showInterstitial ( );
			return 0;
		}
		
		public static int showRewarded ()
		{
			kidozin.showRewarded ( );
			return 0;
		}
		
		// Description: return if an interstitial add was loaded
		// Parameters: 
		// 		
		// return:
		//		0 	- interstitial add was not loaded
		//		NO_GAME1_OBJECT	- there is no Kidoz gameobject 
		public static bool getIsInterstitialLoaded ()
		{
			return kidozin.getIsInterstitialLoaded ( );
			
		}
		
		public static bool getIsRewardedLoaded ()
		{
			return kidozin.getIsRewardedLoaded ( );
			
		}
		
		
		//******************//
		//***** BANNER *****//
		//******************//
		
		
		
		
		
		
		// Description: add Banner to view 
		// Parameters: 
		// 		int - banner position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int loadBanner (bool isAutoShow, BANNER_POSITION position)
		{
			kidozin.loadBanner ( isAutoShow, (int) position );
			return 0;
		}
		
		// Description: set Banner Position 
		// Parameters: 
		// 		int - banner position
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int setBannerPosition (BANNER_POSITION position)
		{
			kidozin.setBannerPosition ( (int) position );
			return 0;
		}
		
		
		// Description: show the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showBanner ()
		{
			kidozin.showBanner ( );
			return 0;
		}
		
		// Description: hide the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int hideBanner ()
		{
			kidozin.hideBanner ( );
			return 0;
		}
		
		
		
		
		public static void printToastMessage (String message)
		{
			kidozin.logMessage ( message );
		}
		
		///listeners calls backs
		////////////////////////////////////
		public void initSuccessCallback (string message)
		{
			if (initSuccess != null)
			{
				initSuccess ( message );
			}
		}
		
		public void initErrorCallback (string message)
		{
			if (initError != null)
			{
				initError ( message );
			}
		}
		
		
		private void panelExpandCallBack (string message)
		{
			if (panelExpand != null)
			{
				panelExpand ( message );
			}
		}
		
		private void panelCollapseCallBack (string message)
		{
			if (panelCollapse != null)
			{
				panelCollapse ( message );
			}
		}
		
		private void panelReadyCallBack (string message)
		{
			if (panelReady != null)
			{
				panelReady ( message );
			}
		}
		
		public void bannerReadyCallBack (string message)
		{
			if (bannerReady != null)
			{
				bannerReady ( message );
			}
		}
		
		public void bannerCloseCallBack (string message)
		{
			if (bannerClose != null)
			{
				bannerClose ( message );
			}
		}
		
		public void bannerErrorCallBack (string message)
		{
			if (bannerError != null)
			{
				bannerError ( message );
			}
		}
		
		public void bannerNoOffersCallBack (string message)
		{
			if (bannerNoOffers != null)
			{
				bannerNoOffers (message);
			}
		}
		
		
		
		
		private void playerOpenCallBack (string message)
		{
			if (playerOpen != null)
			{
				playerOpen ( message );
			}
		}
		private void playerCloseCallBack (string message)
		{
			if (playerClose != null)
			{
				playerClose ( message );
			}
		}
		
		
		
		//***********************************//
		//***** INTERSTITIAL & REWARDED *****//
		//***********************************//
		
		public void interstitialOpenCallBack (string message)
		{
			
			#if UNITY_IOS
			if(mPause){
				Time.timeScale = 0;
				AudioListener.pause = true;
			}
			#endif
			
			if (interstitialOpen != null)
			{
				interstitialOpen ( message );
			}
		}
		
		public void interstitialCloseCallBack (string message)
		{
			#if UNITY_IOS
			if(mPause){
				Time.timeScale = 1;
				AudioListener.pause = false;
			}
			#endif
			
			if (interstitialClose != null)
			{
				interstitialClose ( message );
			}
		}
		
		public void interstitialReadyCallBack (string message)
		{
			if (interstitialReady != null)
			{
				interstitialReady ( message );
			}
		}
		
		public void interstitialOnLoadFailCallBack (string message)
		{
			if (interstitialOnLoadFail != null)
			{
				interstitialOnLoadFail ( message );
			}
		}
		
		public void interstitialOnNoOffersCallBack (string message)
		{
			if (interstitialOnNoOffers != null)
			{
				interstitialOnNoOffers ( message );
			}
		}
		
		public void onRewardedCallBack (string message)
		{
			if (onRewardedDone != null)
			{
				onRewardedDone ( message );
			}
		}
		
		public void onRewardedVideoStartedCallBack (string message)
		{
			if (onRewardedVideoStarted != null)
			{
				onRewardedVideoStarted ( message );
			}
		}
		
		public void rewardedOpenCallBack (string message)
		{
			
			#if UNITY_IOS
			if(mPause){
				Time.timeScale = 0;
				AudioListener.pause = true;
			}
			#endif
			
			if (rewardedOpen != null)
			{
				rewardedOpen ( message );
			}
		}
		
		public void rewardedCloseCallBack (string message)
		{
			
			#if UNITY_IOS
			if(mPause){
				Time.timeScale = 1;
				AudioListener.pause = false;
			}
			#endif
			
			if (rewardedClose != null)
			{
				rewardedClose ( message );
			}
		}
		
		public void rewardedReadyCallBack (string message)
		{
			if (rewardedReady != null)
			{
				rewardedReady ( message );
			}
		}
		
		public void rewardedOnLoadFailCallBack (string message)
		{
			if (rewardedOnLoadFail != null)
			{
				rewardedOnLoadFail ( message );
			}
		}
		
		public void rewardedOnNoOffersCallBack (string message)
		{
			if (rewardedOnNoOffers != null)
			{
				rewardedOnNoOffers ( message );
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
		public static int loadBanner(bool isAutoShow, BANNER_POSITION position)
		{
			kidozin.loadBanner (isAutoShow, (int)position);
			return 0;
		}
		
		// Description: show the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int showBanner()
		{ flexi
			kidozin.showBanner ();
			return 0; flexi
		}
		
		// Description: hide the banner 
		// Parameters: 
		// 		N/A
		// return:
		//		0 	- the function worked correctly
		//		NO_GAME_OBJECT	- there is no Kidoz gameobject 
		public static int hideBanner()
		{
			kidozin.hideBanner ();
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
				
				string obj_name = this.gameObject.name;
				
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
					
					KidozBridgeObject.Call("setMainSDKEventListeners", obj_name, "initSuccessCallback", "initErrorCallback");
					
					kidozBridgeObject.Call("setFeedViewEventListeners", obj_name,"showCallBack","closeCallBack","feedReadyCallBack");
					
					kidozBridgeObject.Call("setPanelViewEventListeners", obj_name,"panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");
					
					kidozBridgeObject.Call("setBannerEventListeners", obj_name,"bannerReadyCallBack","bannerShowCallBack","bannerHideCallBack","bannerContentLoadedCallBack","bannerContentLoadFailedCallBack");
					
					kidozBridgeObject.Call("setFlexiViewEventListener", obj_name,"flexiViewReadyCallBack","flexiViewShowCallBack","flexiViewHideCallBack");
					
					kidozBridgeObject.Call("setPlayersEventListener", obj_name,"playerOpenCallBack","playerCloseCallBack");
					
					kidozBridgeObject.Call("setInterstitialEventListener", obj_name,"interstitialOpenCallBack","interstitialCloseCallBack","interstitialReadyCallBack","interstitialOnLoadFailCallBack", "interstitialOnNoOffersCallBack");
					
					kidozBridgeObject.Call("setRewardedVideoEventListener", obj_name,"onRewardedCallBack","onRewardedVideoStartedCallBack","rewardedOpenCallBack","rewardedCloseCallBack","rewardedReadyCallBack","rewardedOnLoadFailCallBack", "rewardedOnNoOffersCallBack");
					
					kidozBridgeObject.Call("setBannerEventListener", obj_name, "bannerReadyCallBack", "bannerCloseCallBack", "bannerErrorCallBack");
					
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
