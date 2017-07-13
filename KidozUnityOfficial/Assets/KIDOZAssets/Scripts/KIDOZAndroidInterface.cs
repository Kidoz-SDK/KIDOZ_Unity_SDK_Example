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

			//init Kidoz
			using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {
				
				kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

				kidozBridgeObject.Call("initialize", new object[] { activityContext, developerID, securityToken});

				kidozBridgeObject.Call("setMainSDKEventListeners", "KidozObject", "initSuccessCallback", "initErrorCallback");

				kidozBridgeObject.Call("setFeedViewEventListeners", "KidozObject","showCallBack","closeCallBack","feedReadyCallBack");

				kidozBridgeObject.Call("setPanelViewEventListeners", "KidozObject","panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");		

				kidozBridgeObject.Call("setFlexiViewEventListener", "KidozObject","flexiViewReadyCallBack","flexiViewShowCallBack","flexiViewHideCallBack");

				kidozBridgeObject.Call("setPlayersEventListener", "KidozObject","playerOpenCallBack","playerCloseCallBack");

				kidozBridgeObject.Call("setInterstitialEventListener", "KidozObject","interstitialOpenCallBack","interstitialCloseCallBack","interstitialReadyCallBack","interstitialOnLoadFailCallBack", "interstitialOnNoOffersCallBack");
										
				kidozBridgeObject.Call("setRewardedVideoEventListener", "KidozObject","onRewardedCallBack","onRewardedVideoStartedCallBack","rewardedOpenCallBack","rewardedCloseCallBack","rewardedReadyCallBack","rewardedOnLoadFailCallBack", "rewardedOnNoOffersCallBack");

				kidozBridgeObject.Call("setVideoUnitEventListener", "KidozObject","videoUnitReadyCallBack","videoUnitOpenCallBack","videoUnitCloseCallBack");

				kidozBridgeObject.Call("setBannerEventListener", "KidozObject", "bannerReadyCallBack", "bannerCloseCallBack", "bannerHideCallBack");

				Debug.Log ("oooOri init android interface: end of listeners" );
			}
		}

		public bool isInitialised(){
			if (kidozBridgeObject == null) {
				return false;
			}

			return kidozBridgeObject.Call<bool>("isInitialised");
		}
		
		public void addFeedButton(int x, int y)
		{
			Debug.Log ("oooOri addFeedButton android interface: " + kidozBridgeObject);
			kidozBridgeObject.Call("addFeedButton",x,y,-1);
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

		public void showVideoUnit()
		{
			kidozBridgeObject.Call("showVideoUnit");
		}


		//***********************************//
		//***** INTERSTITIAL & REWARDED *****//
		//***********************************//

		public void loadInterstitialAd(bool autoShow)
		{
			kidozBridgeObject.Call("loadInterstitialAd",autoShow);
		}

		public void generateInterstitial()
		{
			kidozBridgeObject.Call("loadInterstitialAd",false);
		}

		public void showInterstitial()
		{
			kidozBridgeObject.Call("showInterstitial");
		}
		
		public bool getIsInterstitialLoaded()
		{
			return kidozBridgeObject.Call<bool>("getIsInterstitialLoaded");
		}

		public void loadRewardedAd(bool autoShow)
		{
			kidozBridgeObject.Call("loadRewardedAd",autoShow);
		}
		
		public void generateRewarded()
		{
			kidozBridgeObject.Call("loadRewardedAd",false);
		}
		
		public void showRewarded()
		{
			kidozBridgeObject.Call("showRewarded");
		}
		
		public bool getIsRewardedLoaded()
		{
			return kidozBridgeObject.Call<bool>("getIsRewardedLoaded");
		}


		//******************//
		//***** BANNER *****//
		//******************//

		public void loadBanner(bool autoShow, int position)
		{
			kidozBridgeObject.Call("loadBannerAd", autoShow, position);
		}

		public void showBanner()
		{
			kidozBridgeObject.Call ("showBannerAd");
		}

		public void hideBanner()
		{
			kidozBridgeObject.Call ("hideBannerAd");
		}




		public void logMessage(string message)
		{
			kidozBridgeObject.Call("printToastLog",message); 
		}
	}
#endif
}
