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

		int feedButtonSize = Kidoz.getFeedButtonDefaultSize();
		Kidoz.addFeedButton(0, 0,feedButtonSize);

		Kidoz.addPanelToView (Kidoz.PANEL_TYPE.BOTTOM, Kidoz.HANDLE_POSITION.CENTER);

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
}
