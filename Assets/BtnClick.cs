using UnityEngine;
using System.Collections;

public class BtnClick : MonoBehaviour {

	private static AndroidJavaObject _plugin;
	private AndroidJavaObject toastExample = null;
	private AndroidJavaObject activityContext = null;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	//oooOri exception accord: Can't create handler inside thread that has not called Looper.prepare()
	/*
				print ("oooOri before builder =  "+ pluginBuilderClass);
//				activityContext.Call("runOnUiThread", new AndroidJavaRunnable(() => {
					print ("oooOri during interstitialview =  "+ mFeedInterstitialView);
					mFeedInterstitialView = pluginBuilderClass.Call<AndroidJavaObject>("build");
					print ("oooOri got interstitialview =  "+ mFeedInterstitialView);
//							}));
				print ("oooOri after interstitialview =  "+ mFeedInterstitialView);
				*/
}
