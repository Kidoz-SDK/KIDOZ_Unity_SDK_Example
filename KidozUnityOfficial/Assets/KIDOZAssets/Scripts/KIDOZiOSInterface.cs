using System;
using AOT;
using KIDOZNativeInterface;
using System.Runtime.InteropServices;

namespace KIDOZiOSInterface {
#if UNITY_IOS
	public class KIDOZiOSInterface : KIDOZNativeInterface.KIDOZNativeInterface
	{
		
		enum KidozSDKEvents {
			SDK_INIT_SUCCESS, SDK_INIT_ERROR,
			INTERSTITIAL_READY,INTERSTITIAL_OPENED,INTERSTITIAL_CLOSED,INTERSTITIAL_NO_OFFERS,INTERSTITIAL_LOAD_FAILED,
			REWARDED_READY,REWARDED_OPENED,REWARDED_CLOSED,REWARDED_NO_OFFERS,REWARDED_LOAD_FAILED,REWARDED_VIDEO_STARTED,REWARDED_DONE,
			BANNER_READY,BANNER_CLOSED,BANNER_ERROR,BANNER_NO_OFFERS
		};
		
		[DllImport("__Internal")]
		private static extern void KidozInit(string developerID ,string securityToken ,DelegateMessage callback);
		
		[DllImport("__Internal")]
		private static extern bool KidozIsInitialised();
		
		[DllImport("__Internal")]
		private static extern void KidozLog(string message);
		
		[DllImport("__Internal")]
		private static extern void KidozLoadInterstitialAd(bool autoShow);
		
		[DllImport("__Internal")]
		private static extern void KidozShowInterstitial();
		
		[DllImport("__Internal")]
		private static extern bool KidozGetIsInterstitialLoaded();
		
		[DllImport("__Internal")]
		private static extern void KidozLoadRewardedAd(bool autoShow);
		
		[DllImport("__Internal")]
		private static extern void KidozShowRewarded();
		
		[DllImport("__Internal")]
		private static extern bool KidozGetRewardedLoaded();
		
		[DllImport("__Internal")]
		private static extern void KidozLoadBannerAd(bool autoShow,int position);
		
		[DllImport("__Internal")]
		private static extern void KidozSetBannerPosition(int position);
		
		[DllImport("__Internal")]
		private static extern void KidozShowBanner();
		
		[DllImport("__Internal")]
		private static extern void KidozHideBanner();
		
		
		private delegate void DelegateMessage(int number);
		
		[MonoPInvokeCallback(typeof(DelegateMessage))] 
		private static void delegateMessageReceived(int number) {
			
			switch((KidozSDKEvents)number){
				
			case KidozSDKEvents.SDK_INIT_SUCCESS:
				KidozSDK.Kidoz.Instance.initSuccessCallback("");
				break;
				
			case KidozSDKEvents.SDK_INIT_ERROR:
				KidozSDK.Kidoz.Instance.initErrorCallback("");
				break;
				
			case KidozSDKEvents.INTERSTITIAL_READY:
				KidozSDK.Kidoz.Instance.interstitialReadyCallBack("");
				break;
				
			case KidozSDKEvents.INTERSTITIAL_OPENED:
				KidozSDK.Kidoz.Instance.interstitialOpenCallBack("");
				break;
				
			case KidozSDKEvents.INTERSTITIAL_CLOSED:
				KidozSDK.Kidoz.Instance.interstitialCloseCallBack("");
				break;
				
			case KidozSDKEvents.INTERSTITIAL_NO_OFFERS:
				KidozSDK.Kidoz.Instance.interstitialOnNoOffersCallBack("");
				break;
				
			case KidozSDKEvents.INTERSTITIAL_LOAD_FAILED:
				KidozSDK.Kidoz.Instance.interstitialOnLoadFailCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_READY:
				KidozSDK.Kidoz.Instance.rewardedReadyCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_OPENED:
				KidozSDK.Kidoz.Instance.rewardedOpenCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_CLOSED:
				KidozSDK.Kidoz.Instance.rewardedCloseCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_NO_OFFERS:
				KidozSDK.Kidoz.Instance.rewardedOnNoOffersCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_LOAD_FAILED:
				KidozSDK.Kidoz.Instance.rewardedOnLoadFailCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_VIDEO_STARTED:
				KidozSDK.Kidoz.Instance.onRewardedVideoStartedCallBack("");
				break;
				
			case KidozSDKEvents.REWARDED_DONE:
				KidozSDK.Kidoz.Instance.onRewardedCallBack("");
				break;
				
			case KidozSDKEvents.BANNER_READY:
				KidozSDK.Kidoz.Instance.bannerReadyCallBack("");
				break;
				
			case KidozSDKEvents.BANNER_CLOSED:
				KidozSDK.Kidoz.Instance.bannerCloseCallBack("");
				break;
				
			case KidozSDKEvents.BANNER_ERROR:
				KidozSDK.Kidoz.Instance.bannerErrorCallBack("");
				break;
				
			case KidozSDKEvents.BANNER_NO_OFFERS:
				KidozSDK.Kidoz.Instance.bannerNoOffersCallBack("");
				break;
				
			}
			
		}
		
		
		public KIDOZiOSInterface()
		{
			
		}
		
		public bool isInitialised()
		{
			return KidozIsInitialised();
		}
		
		public void init(string developerID, string securityToken)
		{
			KidozInit(developerID,securityToken,delegateMessageReceived);
			
		}
		
		//***********************************//
		//***** INTERSTITIAL & REWARDED *****//
		//***********************************//
		
		
		public void generateInterstitial()
		{
			KidozLoadInterstitialAd(false);
		}
		
		public void loadInterstitialAd(bool autoShow)
		{
			KidozLoadInterstitialAd(autoShow);
		}
		
		
		public void showInterstitial()
		{
			KidozShowInterstitial();
		}
		
		public bool getIsInterstitialLoaded()
		{
			return  KidozGetIsInterstitialLoaded();
		}
		
		public void generateRewarded()
		{
			KidozLoadRewardedAd (false);
		}
		
		public void loadRewardedAd(bool autoShow)
		{
			KidozLoadRewardedAd(autoShow);
		}
		
		
		public void showRewarded()
		{
			KidozShowRewarded();
		}
		
		public bool getIsRewardedLoaded()
		{
			return KidozGetRewardedLoaded();
		}
		
		//***********************************//
		
		//************ BANNER ***************//
		
		public void setBannerPosition (int position)
		{	
			KidozSetBannerPosition(position);
		}
		
		public void loadBanner(bool autoShow, int position)
		{	
			KidozLoadBannerAd(autoShow,position);
			
		}
		
		public void showBanner()
		{
			KidozShowBanner();
		}
		
		public void hideBanner()
		{
			KidozHideBanner();
		}
		
		//***********************************//
		
		public void logMessage(string message)
		{
			KidozLog (message);
		}
		
		public void testFunction()
		{
		}
		
	    public void setupCallbacks ()
		{
		}
		
	}
	
#endif
}