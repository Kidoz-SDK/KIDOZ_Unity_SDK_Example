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

		public void setupCallbacks () {

			Debug.Log ("Init android interface:");
			///get activity
			using (AndroidJavaClass activityClass = new AndroidJavaClass ("com.unity3d.player.UnityPlayer")) {
				activityContext = activityClass.GetStatic<AndroidJavaObject> ("currentActivity");
			}

			string kidoz_name = KidozSDK.Kidoz.Instance.gameObject.name;

			//init Kidoz
			using (var kidozBridgeClass = new AndroidJavaClass ("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {

				kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject> ("getInstance", activityContext);

				kidozBridgeObject.Call ("setMainSDKEventListeners", kidoz_name, "initSuccessCallback", "initErrorCallback");

				kidozBridgeObject.Call ("setInterstitialEventListener", kidoz_name, "interstitialOpenCallBack", "interstitialCloseCallBack", "interstitialReadyCallBack", "interstitialOnLoadFailCallBack", "interstitialOnNoOffersCallBack");

				kidozBridgeObject.Call ("setRewardedVideoEventListener", kidoz_name, "onRewardedCallBack", "onRewardedVideoStartedCallBack", "rewardedOpenCallBack", "rewardedCloseCallBack", "rewardedReadyCallBack", "rewardedOnLoadFailCallBack", "rewardedOnNoOffersCallBack");

				kidozBridgeObject.Call ("setBannerEventListener", kidoz_name, "bannerReadyCallBack", "bannerCloseCallBack", "bannerErrorCallBack", "bannerNoOffersCallBack");


			}
		}

		public void init(string developerID, string securityToken)
		{
			//kidozBridgeObject.Call ("initialize", new object [] { activityContext, developerID, securityToken });

			Debug.Log ("Init android interface:");
			///get activity
			using (AndroidJavaClass activityClass = new AndroidJavaClass ("com.unity3d.player.UnityPlayer")) {
				activityContext = activityClass.GetStatic<AndroidJavaObject> ("currentActivity");
			}

			string kidoz_name = KidozSDK.Kidoz.Instance.gameObject.name;

			//init Kidoz
			using (var kidozBridgeClass = new AndroidJavaClass ("com.kidoz.sdk.api.platforms.KidozUnityBridge")) {

				kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject> ("getInstance", activityContext);

				kidozBridgeObject.Call ("initialize", new object [] { activityContext, developerID, securityToken });

				kidozBridgeObject.Call ("setMainSDKEventListeners", kidoz_name, "initSuccessCallback", "initErrorCallback");

				kidozBridgeObject.Call ("setInterstitialEventListener", kidoz_name, "interstitialOpenCallBack", "interstitialCloseCallBack", "interstitialReadyCallBack", "interstitialOnLoadFailCallBack", "interstitialOnNoOffersCallBack");

				kidozBridgeObject.Call ("setRewardedVideoEventListener", kidoz_name, "onRewardedCallBack", "onRewardedVideoStartedCallBack", "rewardedOpenCallBack", "rewardedCloseCallBack", "rewardedReadyCallBack", "rewardedOnLoadFailCallBack", "rewardedOnNoOffersCallBack");

				kidozBridgeObject.Call ("setBannerEventListener", kidoz_name, "bannerReadyCallBack", "bannerCloseCallBack", "bannerErrorCallBack", "bannerNoOffersCallBack");


			}

		}

		public bool isInitialised(){
			if (kidozBridgeObject == null) {
				return false;
			}

			return kidozBridgeObject.Call<bool>("isInitialised");
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
