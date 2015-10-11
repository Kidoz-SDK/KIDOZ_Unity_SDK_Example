using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;


namespace KidozSDK {

	public class Kidoz: MonoBehaviour {
		public static event Action<string> viewOpened;

		public static event Action<string> viewClosed;
#if UNITY_ANDROID
		private static AndroidJavaObject kidozBridgeObject = null;
		private AndroidJavaObject activityContext = null;
#endif
		public string PublisherID;
		public string SecurityToken;

		static private Kidoz instance = null;



#if UNITY_ANDROID
		public static Kidoz Create() {


			if( instance == null ) {
				print ("oooOri kidoz create == null");
				GameObject singleton = new GameObject();
				singleton.name = "Kidoz";
				instance = singleton.AddComponent<Kidoz>();
			

			}

			return instance;
		}

		public static int showFeedButton(int xPos, int yPos)
		{
			kidozBridgeObject.Call("addFeedButton",xPos,yPos);
			return 0;
		}

		private  void showCallBack(string message){
			print ("oooOri showCallBack = " + message);
			if (viewOpened != null) {
				viewOpened(message);
			}
		}
		
		private void closeCallBack(string message){
			print ("oooOri closeCallBack = " + message);
			if (viewClosed != null) {
				viewClosed(message);
			}
		} 

		void Awake() {
			print ("oooOri kidoz wake ");
			// Limit the number of instances to one
			if(instance == null) {
				print ("oooOri kidoz wake == null");
				instance = this;
				DontDestroyOnLoad(gameObject);

				///get activity
				using(AndroidJavaClass activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
					activityContext = activityClass.GetStatic<AndroidJavaObject>("currentActivity");
				}

				//init the Kidoz SDK
				using (var pluginSDKClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozSDK")) {
					pluginSDKClass.CallStatic("initialize",new object[] { activityContext, PublisherID, SecurityToken}); 
				}

				//init Kidoz SDK API module
				using ( var kidozBridgeClass = new AndroidJavaClass("com.kidoz.sdk.api.KidozUnityBridge")) {
					kidozBridgeObject = kidozBridgeClass.CallStatic<AndroidJavaObject>("getInstance",activityContext);

					kidozBridgeObject.Call("setFeedViewEventListeners", this.gameObject.name,"showCallBack","closeCallBack");
					//				setFeedViewEventListeners
				}

			}
			else {
				// duplicate
				Destroy(gameObject);
			}
		}

		void OnDestroy() {
			if(this == instance)
			{
				instance = null;

			}
		}
#elif 
		public static Kidoz Create() {
		
			return instance;
		}
		
		public static int showFeedButton(int xPos, int yPos)
		{

			return -1;
		}
		
		private  void showCallBack(string message){

		}
		
		private void closeCallBack(string message){

		} 
		
		void Awake() {

			// Limit the number of instances to one
			if(instance == null) {

				instance = this;
				DontDestroyOnLoad(gameObject);
				

				
			}
			else {
				// duplicate
				Destroy(gameObject);
			}
		}
		
		void OnDestroy() {
			if(this == instance)
			{
				instance = null;
				
			}
		}
#endif

	}
	
}
