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
		Kidoz.bannerReady += bannerReady;
		Kidoz.bannerShow += bannerShow;
		Kidoz.bannerHide += bannerHide;
		Kidoz.bannerContentLoaded += bannerContentLoaded;
		Kidoz.bannerContentLoadFailed += bannerContentLoadedFailed;

		Kidoz.flexiViewReady += flexiReady;
		
		Kidoz.flexiViewShow += flexiShow;
		
		Kidoz.flexiViewHide += flexiHide;

		Kidoz.playerOpen += playerOpen;
		
		Kidoz.playerClose += playerClose;

		Kidoz.interstitialOpen += interstitialOpen;
		
		Kidoz.interstitialClose += interstitialClose;
		
		Kidoz.interstitialReady += interstitialReady;

		Kidoz.addFeedButton(0, 0);

		Kidoz.addPanelToView (Kidoz.PANEL_TYPE.BOTTOM, Kidoz.HANDLE_POSITION.START,0.0f,0.0f);

		Kidoz.addBannerToView (Kidoz.BANNER_POSITION.BOTTOM);

		Kidoz.addFlexiView (true, Kidoz.FLEXI_VIEW_POSITION.MID_CENTER);

	}
	
	// Update is called once per frame
	void Update () {

	}
	void OnGUI() {
		if (GUI.Button (new Rect (500, 100*5, 200, 100), "load interstitial")) 
		{
			Kidoz.loadInterstitialAd(false);
			
			
		}
		
		if (GUI.Button (new Rect (500, 100*7, 200, 100), "show interstitial")) 
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
		//		Kidoz.showInterstitial();
	}
}
