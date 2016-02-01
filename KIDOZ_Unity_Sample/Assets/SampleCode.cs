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

		Kidoz.addFeedButton(0, 0);

		Kidoz.addPanelToView (Kidoz.PANEL_TYPE.RIGHT, Kidoz.HANDLE_POSITION.CENTER);

		Kidoz.addBannerToView (Kidoz.BANNER_POSITION.BOTTOM);

		Kidoz.addFlexiView (true, Kidoz.FLEXI_VIEW_POSITION.MID_CENTER);

	}
	
	// Update is called once per frame
	void Update () {

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
}
