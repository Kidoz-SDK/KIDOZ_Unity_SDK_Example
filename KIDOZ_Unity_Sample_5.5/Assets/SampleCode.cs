using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using KidozSDK;
public class SampleCode : MonoBehaviour {

	//sample Unity button
	public Button mButton;

	// Use this for initialization
	void Start () {

		Kidoz.viewOpened += viewOpened;
		Kidoz.viewClosed += viewClosed;
		Kidoz.panelExpand += panelExpand;
		Kidoz.panelCollapse += panelCollapse;
		Kidoz.panelReady += panelReady;


		Kidoz.flexiViewReady += flexiReady;
		
		Kidoz.flexiViewShow += flexiShow;
		
		Kidoz.flexiViewHide += flexiHide;

		Kidoz.playerOpen += playerOpen;
		
		Kidoz.playerClose += playerClose;

		Kidoz.interstitialOpen += interstitialOpen;
		
		Kidoz.interstitialClose += interstitialClose;
		
		Kidoz.interstitialReady += interstitialReady;

		Kidoz.interstitialOnLoadFail += interstitialOnLoadFail;

		Kidoz.addFeedButton(0, 0);

		Kidoz.addPanelToView (Kidoz.PANEL_TYPE.BOTTOM, Kidoz.HANDLE_POSITION.START);

		Kidoz.addBannerToView (Kidoz.BANNER_POSITION.BOTTOM);

		Kidoz.addFlexiView (true, Kidoz.FLEXI_VIEW_POSITION.MID_CENTER);

		Kidoz.onRewardedDone += onRewardedDone; 
		
		Kidoz.onRewardedVideoStarted += onRewardedVideoStarted;

		Kidoz.generateInterstitial();

	}
	
	// Update is called once per frame
	void Update () {

	}
	void OnGUI() {

		double factor = Screen.width / 320.0;
		GUIStyle myStyle = new GUIStyle (GUI.skin.GetStyle("label"));
		myStyle.fontSize = (int)(15 * factor);


		int width = (int)(100 * factor);
		int height = (int) (100 * factor);

		if (GUI.Button (new Rect (width, height*1, width, height), "load interstitial",myStyle)) 
		{
			Kidoz.requestInterstitialAd(Kidoz.INTERSTITIAL_AD_MODE.NORMAL);
			
			
		}

		if (GUI.Button (new Rect (width, height*2, width, height), "load rewarded",myStyle)) 
		{
			Kidoz.requestInterstitialAd(Kidoz.INTERSTITIAL_AD_MODE.REWARDED);
			
			
		}

		if (GUI.Button (new Rect (width, height*3, width, height), "show interstitial",myStyle)) 
		{
			Kidoz.showInterstitial();
			
			
		}
	}

	public void btnPress()
	{
		Kidoz.showFeedView ();
	}

	private void viewOpened(string value)
	{
		print ("Feed view opened");
	}

	private void viewClosed(string value)
	{
		print ("Feed view closed");
	}

	private void panelExpand(string value)
	{
		print ("panel view opened");
	}
	
	private void panelCollapse(string value)
	{
		print ("panel view closed");
	}
	private void panelReady(string value)
	{
		print ("panel ready");

	}
	private void bannerReady(string value)
	{
		print ("bannerReady ready");

	}
	
	private void bannerShow(string value)
	{
		print ("bannerShow");

	}
	private void bannerHide(string value)
	{
		print ("bannerHide");

	}
	private void bannerContentLoaded(string value)
	{
		print ("bannerContentLoaded");

	}
	private void bannerContentLoadedFailed(string value)
	{
		print ("bannerContentLoadedFailed");

	}

	private void flexiReady(string value)
	{
		print ("flexiview ready");

	}
	
	private void flexiShow(string value)
	{
		print ("flexishow");

	}
	private void flexiHide(string value)
	{
		print ("flexihide");

	}

	private void playerOpen(string value)
	{
		print ("playerOpen");

	}
	private void playerClose(string value)
	{
		print ("playerClose");

	}

	private void interstitialOpen(string value)
	{
		Kidoz.printToastMessage ("interstitialOpen");
	}
	
	private void interstitialClose(string value)
	{
		Kidoz.printToastMessage ("interstitialClose");
	}
	
	private void interstitialReady(string value)
	{
		Kidoz.printToastMessage ("interstitialReady");
//				Kidoz.showInterstitial();
	}

	private void interstitialOnLoadFail(string value)
	{
		print("interstitialOnLoadFail");
		Kidoz.printToastMessage ("interstitialOnLoadFail");
		//		Kidoz.showInterstitial();
	}

	private void onRewardedDone(string value)
	{
		print("onRewardedDone");
		Kidoz.printToastMessage ("onRewardedDone");
	}
	
	private void onRewardedVideoStarted(string value)
	{
		print ("onRewardedVideoStarted");
		Kidoz.printToastMessage ("onRewardedVideoStarted");
	}
}
