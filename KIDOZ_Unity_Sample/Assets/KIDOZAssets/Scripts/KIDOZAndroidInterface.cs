using System;
using KIDOZNativeInterface;
using System.Runtime.InteropServices;
using System.Collections;
using UnityEngine; 
using UnityEngine.UI;
namespace KIDOZAndroidInterface {
	#if UNITY_ANDROID 	
	public class KIDOZAndroidInterface : KIDOZNativeInterface.KIDOZNativeInterface
	{

		private static AndroidJavaObject kidozBridgeObject = null;
		private AndroidJavaObject activityContext = null;
		
		public KIDOZAndroidInterface()
		{
		}
		public void testFunction()
		{

		}
		
		public void init(string developerID, string securityToken)
		{
			Debug.Log ("oooOri init android interface:" );
			///get activity
			using(AndroidJavaClass activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
				activityContext = activityClass.GetStatic<AndroidJavaObject>("currentActivity");
			}

			//init the Kidoz SDK
			using (var pluginSDKClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozSDK")) {
				pluginSDKClass.CallStatic("initialize",new object[] { activityContext, developerID, securityToken}); 

			}

			//init Kidoz SDK API module
			using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {

				kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

				kidozBridgeObject.Call("setFeedViewEventListeners", "KidozObject","showCallBack","closeCallBack","feedReadyCallBack");

				kidozBridgeObject.Call("setPanelViewEventListeners", "KidozObject","panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");

				kidozBridgeObject.Call("setBannerEventListeners", "KidozObject","bannerReadyCallBack","bannerShowCallBack","bannerHideCallBack","bannerContentLoadedCallBack","bannerContentLoadFailedCallBack");

				kidozBridgeObject.Call("setFlexiViewEventListener", "KidozObject","flexiViewReadyCallBack","flexiViewShowCallBack","flexiViewHideCallBack");

				kidozBridgeObject.Call("setPlayersEventListener", "KidozObject","playerOpenCallBack","playerCloseCallBack");

				kidozBridgeObject.Call("setInterstitialEventListener", "KidozObject","interstitialOpenCallBack","interstitialCloseCallBack","interstitialReadyCallBack","interstitialOnLoadFailCallBack");
				Debug.Log ("oooOri init android interface: end of listeners" );
			}
		}
		
		public void addFeedButton(int x, int y)
		{
			Debug.Log ("oooOri addFeedButton android interface: " + kidozBridgeObject);
			kidozBridgeObject.Call("addFeedButton",x,y);
		}
		
		public void addFeedBUtton(int x, int y, int size)
		{
			kidozBridgeObject.Call("addFeedButton",x,y,size);
		}
		
		public void changeFeedButtonVisibility(bool visible)
		{
			kidozBridgeObject.Call("changeFeedButtonVisibility",visible);
		}
		
		public void addPanelToView(int panelType, int handle_position)
		{
			kidozBridgeObject.Call("addPanelToView",(int)panelType,(int)handle_position);
		}
		
		public void addPanelToView(int panel_type, int handle_position, float startDelay, float duration)
		{
			kidozBridgeObject.Call("addPanelToView",(int)panel_type,(int)handle_position,startDelay,duration);
		}

		public void changePanelVisibility(bool visible)
		{
			kidozBridgeObject.Call("changePanelVisibility",visible);
		}
		
		public void expandPanelView()
		{
			kidozBridgeObject.Call("expandPanelView");
		}
		
		public void collapsePanelView()
		{
			kidozBridgeObject.Call("collapsePanelView");
		}
		
		public bool getIsPanelExpended()
		{
			//oooTODO: implement missing function
			return false;
		}
		public void setPanelViewColor(string color)
		{
			kidozBridgeObject.Call("setPanelViewColor",color);
		}
		
		public int getFeedButtonSize()
		{
			//oooTODO: implement missing function
			//Kidoz tempObject = getInstance ();
			//AndroidJavaObject con = tempObject.getContext ();
			//int size = kidozBridgeObject.Call<int>("getFeedButtonSize");
//			return size;
			return 0;
		}
		
		public void showFeedView()
		{
			kidozBridgeObject.Call("showFeedView");
		}
		
		public void dismissFeedView()
		{
			kidozBridgeObject.Call("dismissFeedView");
		}
		
		public void addBannerToView(int position)
		{
			kidozBridgeObject.Call("addBannerToView",(int)position);
		}
		
		public void showBanner()
		{
			kidozBridgeObject.Call("showBanner");
		}
		
		public void hideBanner()
		{
			kidozBridgeObject.Call("hideBanner");
		}
		
		public void changeBannerPosition(int position)
		{
			kidozBridgeObject.Call("changeBannerPosition",(int)position);
		}
		
		public void addFlexiView(bool autoShow, int position)
		{
			kidozBridgeObject.Call("addFlexiView",autoShow, (int)position);
		}
		
		public void hideFlexiView()
		{
			kidozBridgeObject.Call("hideFlexiView");
		}
		
		public void showFlexiView()
		{
			kidozBridgeObject.Call("showFlexiView");
		}
		
		public bool getIsFlexiViewVisible()
		{
			bool res = kidozBridgeObject.Call<bool>("getIsFlexiViewVisible");
			return res;
		}
		
		public void setFlexiViewDraggable(bool dragable)
		{
			kidozBridgeObject.Call("setFlexiViewDraggable",dragable);
		}
		
		public void setFlexiViewClosable(bool closable)
		{
			kidozBridgeObject.Call("setFlexiViewClosable",closable);
		}
		
		public void loadInterstitialAd(bool autoShow)
		{
			kidozBridgeObject.Call("loadInterstitialAd",autoShow);
		}
		
		public void showInterstitial()
		{
			kidozBridgeObject.Call("showInterstitial");
		}
		
		public bool getIsInterstitialLoaded()
		{
			return kidozBridgeObject.Call<bool>("getIsInterstitialLoaded");
		}
		
		public void logMessage(string message)
		{
			kidozBridgeObject.Call("printToastLog",message); 
		}
	}
#endif
}
