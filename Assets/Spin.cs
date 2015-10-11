using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using KidozSDK;

public class Spin : MonoBehaviour {
	private static AndroidJavaObject _plugin;
	private static AndroidJavaObject _pluginSDK;
	private AndroidJavaObject toastExample = null;
	private AndroidJavaObject activityContext = null;
	private AndroidJavaObject  mFeedInterstitialView = null;
	private AndroidJavaObject  mV7 = null;
	public Button mButton;
	private AndroidJavaObject pluginBuilderClass = null;
	private AndroidJavaObject kidozBridgeObject = null;
	// Use this for initialization
	void Start () {

//		Kidoz.Create ();
		//set button position 
//		GUI.Button (new Rect (0, 0, 5000, 5000), "meme");
		mButton.transform.position = new Vector3 (0, 0, 0);


		using(AndroidJavaClass activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
			activityContext = activityClass.GetStatic<AndroidJavaObject>("currentActivity");
		}
//		using(activityContext = new AndroidJavaObject("com.unity3d.player.UnityPlayerNativeActivity")) {
//
//		}
		try
		{
			object[] parm = {activityContext, "2", "x8NuJxf9jX186Kbb8NrVh2jqjRtp08no"};
			print ("oooOri init sdk");
			using (var pluginSDKClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozSDK")) {
				print ("oooOri get sdk class");
//				pluginSDKClass.CallStatic("initialize",new object[] { activityContext, "2", "x8NuJxf9jX186Kbb8NrVh2jqjRtp08no"}); //painter
				pluginSDKClass.CallStatic("initialize",new object[] { activityContext, "1", "Nhm59VTJVYnZNJYnbCKNoU27mp7CvRg6"}); //swipe the panda

				print ("oooOri SDK value =  "+ pluginSDKClass);

			}


			activityContext.Call("runOnUiThread", new AndroidJavaRunnable(() => {
				using ( pluginBuilderClass = new AndroidJavaObject("com.kidoz.sdk.api.InterstitialView$Builder",activityContext)) {
					print ("oooOri builder created +1 =  "+ pluginBuilderClass);
					print ("oooOri during interstitialview =  "+ mFeedInterstitialView);
					mFeedInterstitialView = pluginBuilderClass.Call<AndroidJavaObject>("build");
					print ("oooOri got interstitialview =  "+ mFeedInterstitialView);
				}
			}));


			/*
			print ("oooOri create builder view");
			using ( pluginBuilderClass = new AndroidJavaObject("com.kidoz.sdk.api.InterstitialView$Builder",activityContext)) {
//				print ("oooOri get view class");
				//mFeedInterstitialView = new InterstitialView.Builder(MainActivity.this, getSupportFragmentManager()).build();
//				mFeedInterstitialView = pluginViewClass.Call<AndroidJavaObject>("Builder");
				print ("oooOri builder created =  "+ pluginBuilderClass);
//				print ("oooOri get instance for interstitialview");
//				mFeedInterstitialView = pluginBuilderClass.Call<AndroidJavaObject>("build");


			}
			*/
//			print ("oooOri before builder =  "+ pluginBuilderClass);
//			activityContext.Call("runOnUiThread", new AndroidJavaRunnable(() => {
//				print ("oooOri during interstitialview =  "+ mFeedInterstitialView);
//				mFeedInterstitialView = pluginBuilderClass.Call<AndroidJavaObject>("build");
//				print ("oooOri got interstitialview =  "+ mFeedInterstitialView);
//				}));
//			print ("oooOri after interstitialview =  "+ mFeedInterstitialView);
			
			print ("oooOri start function"); 

			/////////////////
			using (var pluginClass = new AndroidJavaClass("kidoz.test.DataActivity")) {
				_plugin = pluginClass.CallStatic<AndroidJavaObject>("instance");

			}

			///// new SDK
			using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozUnityBridge")) {
				kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

				print ("oooOri new bridge object start"); 

//					kidozBridgeObject.Call("testFunction");
				kidozBridgeObject.Call("addFeedButton",200,300);
				print ("oooOri new bridge object end"); 
				print ("oooOri objectname = " + this.gameObject.name);
				kidozBridgeObject.Call("setFeedViewEventListeners", this.gameObject.name,"showCallBack","closeCallBack");
//				setFeedViewEventListeners
			}



			//debug plugin
//			activityContext.Call("runOnUiThread", new AndroidJavaRunnable(() => {
//				_plugin.Call ("show3", activityContext);
//			}));
		}
		catch (UnityException e)
		{
			print ("oooOri error = " +e.Message + " :: " + e.Data);
		}
	}
	
	// Update is called once per frame
	void Update () {
		// rotate at 90 degrees per second
		transform.Rotate(Vector3.up * Time.deltaTime*90);

	}

	public void btnPress()
	{


		//print ("oooOri btn pressed " + kidozBridgeObject); 
		kidozBridgeObject.Call("showFeedView");
//		using (kidozBridgeObject = new AndroidJavaObject("com.kidoz.sdk.api.KidozUnityBridge",activityContext)) {
//			kidozBridgeObject.Call ("addFeedButton", 100, 300);
//		}

		//		print ("oooOri before showviewpostload");
//		activityContext.Call("runOnUiThread", new AndroidJavaRunnable(() => {
//			mFeedInterstitialView.Call("showViewPostLoad");
//			
//		}));

//		print ("oooOri end btnPress");
		/////////
//				activityContext.Call("runOnUiThread", new AndroidJavaRunnable(() => {
//			_plugin.Call ("show3", activityContext);
//		}));
	}


	public void showCallBack(string message){
		print ("oooOri showCallBack = " + message);
	}

	public void closeCallBack(string message){
		print ("oooOri closeCallBack = " + message);
	}
}
