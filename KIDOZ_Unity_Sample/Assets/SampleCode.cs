using UnityEngine;
using System.Collections;
using KidozSDK;
public class SampleCode : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Kidoz.viewOpened += viewOpened;
		Kidoz.viewClosed += viewClosed;
		Kidoz.showFeedButton (300, 300);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void viewOpened(string value)
	{
		print ("oooOri in delegate open");
	}

	private void viewClosed(string value)
	{
		print ("oooOri in delegate close");
	}
}
