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

			string kidoz_name = KidozSDK.Kidoz.Instance.gameObject.name;

			//init Kidoz
			using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {
				
				kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

				kidozBridgeObject.Call("initialize", new object[] { activityContext, developerID, securityToken});

				kidozBridgeObject.Call("setMainSDKEventListeners", kidoz_name, "initSuccessCallback", "initErrorCallback");

				kidozBridgeObject.Call("setPanelViewEventListeners", kidoz_name,"panelExpandCallBack","panelCollapseCallBack","panelReadyCallBack");		

				kidozBridgeObject.Call("setPlayersEventListener", kidoz_name,"playerOpenCallBack","playerCloseCallBack");

				kidozBridgeObject.Call("setInterstitialEventListener", kidoz_name,"interstitialOpenCallBack","interstitialCloseCallBack","interstitialReadyCallBack","interstitialOnLoadFailCallBack", "interstitialOnNoOffersCallBack");
										
				kidozBridgeObject.Call("setRewardedVideoEventListener", kidoz_name,"onRewardedCallBack","onRewardedVideoStartedCallBack","rewardedOpenCallBack","rewardedCloseCallBack","rewardedReadyCallBack","rewardedOnLoadFailCallBack", "rewardedOnNoOffersCallBack");

				kidozBridgeObject.Call("setBannerEventListener", kidoz_name, "bannerReadyCallBack", "bannerCloseCallBack", "bannerHideCallBack");

				Debug.Log ("init android interface: end of listeners" );
			}
		}

		public bool isInitialised(){
			if (kidozBridgeObject == null) {
				return false;
			}

			return kidozBridgeObject.Call<bool>("isInitialised");
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

		public void setBannerPosition(int position)
		{
			kidozBridgeObject.Call("setBannerPosition", position);
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
