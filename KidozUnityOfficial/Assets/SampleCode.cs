using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using KidozSDK;

public class SampleCode : MonoBehaviour {
	
	//sample Unity button
	public Button mButton;
	
	
	
	#if UNITY_IOS
	#elif UNITY_ANDROID
	#else
	#endif
	#if !UNITY_IOS
	#endif
	
	// Use this for initialization
	void Start () {

		Kidoz.SetiOSAppPauseOnBackground (true);

		//Delegates
		Kidoz.initSuccess += onKidozInitSuccess;
		Kidoz.initError += onKidozInitError;
		
		Kidoz.interstitialOpen += interstitialOpen;
		Kidoz.interstitialClose += interstitialClose;
		Kidoz.interstitialReady += interstitialReady;
		Kidoz.interstitialOnLoadFail += interstitialOnLoadFail;
		Kidoz.interstitialOnNoOffers += interstitialOnNoOffers;
		
		Kidoz.onRewardedDone += onRewardedDone;
		Kidoz.onRewardedVideoStarted += onRewardedVideoStarted;
		Kidoz.rewardedOpen += rewardedOpen;
		Kidoz.rewardedClose += rewardedClose;
		Kidoz.rewardedReady += rewardedReady;
		Kidoz.rewardedOnLoadFail += rewardedOnLoadFail;
		Kidoz.rewardedOnNoOffers += rewardedOnNoOffers;
		
		Kidoz.bannerReady += bannerReady;
		Kidoz.bannerClose += bannerClose;
		Kidoz.bannerError += bannerError;
		Kidoz.bannerNoOffers +=bannerNoOffers;
		
		#if !UNITY_IOS
		
		Kidoz.panelExpand += panelExpand;
		Kidoz.panelCollapse += panelCollapse;
		Kidoz.panelReady += panelReady;
		Kidoz.playerOpen += playerOpen;
		Kidoz.playerClose += playerClose;
		
		
		
		//Show sample Ads on Start()
		Kidoz.addPanelToView (Kidoz.PANEL_TYPE.BOTTOM, Kidoz.HANDLE_POSITION.START);
		
		#endif
		
	}
	
	void Update () {	
	}
	
	void OnGUI() {
		double factor = Screen.width / 335.0;
		GUIStyle myStyle = new GUIStyle (GUI.skin.GetStyle("label"));
		
		int width = (int)(100 * factor);
		int height = (int) (50 * factor);
		int btnHeight = height;
		
		//Change font for Title
		myStyle.fontSize = (int)(16 * factor);
		myStyle.normal.textColor = Color.white;
		
		//Add label
		GUI.Label(new Rect(width, btnHeight, width, height), "Kidoz Unity Sample", myStyle);
		btnHeight += height;
		
		//Change font size for buttons
		myStyle.fontSize = (int)(12 * factor);
		myStyle.normal.textColor = Color.yellow;
		
		//Add buttons
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Load Interstitial",myStyle)) 
		{
			Kidoz.loadInterstitialAd(false);
		}
		
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Load Rewarded",myStyle)) 
		{
			Kidoz.loadRewardedAd(false);
		}
		
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Show Interstitial",myStyle)) 
		{
			Kidoz.showInterstitial();
		}
		
		btnHeight += height;
		
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Show Rewarded",myStyle)) 
		{
			Kidoz.showRewarded();
		}
		
		
		
		
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Load&Show Banner", myStyle)) 
		{
			Kidoz.loadBanner (true, Kidoz.BANNER_POSITION.TOP_CENTER);
		}
		
		
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Load Banner", myStyle)) 
		{
			Kidoz.loadBanner (false, Kidoz.BANNER_POSITION.BOTTOM_CENTER);
			//Kidoz.loadBanner (true, Kidoz.BANNER_POSITION.BOTTOM_CENTER);
			
		}
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Show Banner", myStyle)) 
		{
			Kidoz.showBanner ();
		}
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Hide Banner", myStyle)) 
		{
			Kidoz.hideBanner ();
		}
		
		
		
		
		btnHeight += height;
		
		if (GUI.Button (new Rect (width, btnHeight, width, height), "Check Init", myStyle)) 
		{
			bool isKidozInit = Kidoz.isInitialised();
			Kidoz.printToastMessage ("KidozInitialized = " + isKidozInit);
			print ("SampleCode | KidozInitialized = " + isKidozInit);
		}
		
		
		
	}
	
	private void onKidozInitSuccess(string value)
	{
		print ("SampleCode | KidozInitSuccess");
		Kidoz.printToastMessage ("KidozInitSuccess");
		
	}
	
	private void onKidozInitError(string value)
	{
		string errMsg = "KidozInitError: " + value;
		print ("SampleCode | " + errMsg);
		Kidoz.printToastMessage (errMsg);
	}
	
	
	
	private void panelExpand(string value)
	{
		print ("SampleCode | panel view opened");
	}
	
	private void panelCollapse(string value)
	{
		print ("SampleCode | panel view closed");
	}
	private void panelReady(string value)
	{
		print ("SampleCode | panel ready");
		
		//Kidoz.changePanelVisibility(false);	
	}
	
	
	private void playerOpen(string value)
	{
		print ("SampleCode | playerOpen");
		
	}
	private void playerClose(string value)
	{
		print ("SampleCode | playerClose");
		
	}
	
	private void interstitialOpen(string value)
	{
		Kidoz.loadInterstitialAd (false);
		Kidoz.printToastMessage ("SampleCode | interstitialOpen");
	}
	
	private void interstitialClose(string value)
	{
		Kidoz.printToastMessage ("SampleCode | interstitialClose");
	}
	
	private void interstitialReady(string value)
	{
		Kidoz.printToastMessage ("SampleCode | interstitialReady");
	}
	
	private void interstitialOnLoadFail(string value)
	{
		print("SampleCode |interstitialOnLoadFail");
		Kidoz.printToastMessage ("SampleCode | interstitialOnLoadFail");
	}
	
	private void interstitialOnNoOffers(string value)
	{
		print ("SampleCode |interstitialOnNoOffers");
		Kidoz.printToastMessage ("SampleCode | interstitialOnNoOffers");
	}
	
	private void onRewardedDone(string value)
	{
		print("SampleCode |onRewardedDone");
		Kidoz.printToastMessage ("SampleCode | onRewardedDone");
	}
	
	private void onRewardedVideoStarted(string value)
	{
		print ("SampleCode |onRewardedVideoStarted");
		Kidoz.printToastMessage ("SampleCode | onRewardedVideoStarted");
	}
	
	private void rewardedOpen(string value)
	{
		Kidoz.printToastMessage ("SampleCode | rewardedOpen");
	}
	
	private void rewardedClose(string value)
	{
		Kidoz.printToastMessage ("SampleCode | rewardedClose");
	}
	
	private void rewardedReady(string value)
	{
		Kidoz.printToastMessage ("SampleCode | rewardedReady");
	}
	
	private void rewardedOnLoadFail(string value)
	{
		print("SampleCode | rewardedOnLoadFail");
		Kidoz.printToastMessage ("SampleCode | rewardedOnLoadFail");
	}
	
	private void rewardedOnNoOffers(string value)
	{
		print ("SampleCode | rewardedOnNoOffers");
		Kidoz.printToastMessage ("SampleCode | rewardedOnNoOffers");
	}
	
	private void bannerReady(string value)
	{
		print ("SampleCode | bannerReady");
		Kidoz.printToastMessage ("SampleCode | bannerReady");
	}
	
	private void bannerClose(string value)
	{
		print ("SampleCode | bannerHide");
		Kidoz.printToastMessage ("SampleCode | bannerHide");
	}
	
	private void bannerError(string value)
	{
		print ("SampleCode | bannerError: " + value);
		Kidoz.printToastMessage ("SampleCode | bannerError: " + value);
	}
	
	private void bannerNoOffers(string value)
	{
		print ("SampleCode | bannerNoOffers");
		Kidoz.printToastMessage ("SampleCode | bannerNoOffers");
	}
	
}
