using UnityEngine;
using System.Collections;
using System;
using KIDOZNativeInterface;

namespace KIDOZDummyInterface
{
	public class KIDOZDummyInterface :KIDOZNativeInterface.KIDOZNativeInterface
	{

		public bool getIsInterstitialLoaded ()
		{
			return false;
		}


		public bool getIsRewardedLoaded ()
		{
			return false;
		}

		public void hideBanner ()
		{
			DebugLog ( "hideBanner" );
		}


		public void init (string developerID, string securityToken)
		{
			DebugLog ( "init, developerID=" + developerID + ", securityToken=" + securityToken );
		}

		public bool isInitialised ()
		{
			return true;
		}

		public void loadBanner (bool autoShow, int position)
		{
			DebugLog ( "loadBanner, autoShow=" + autoShow + ", position=" + position );
		}

		public void generateInterstitial ()
		{
			DebugLog ( "generateInterstitial" );
		}

		public void loadInterstitialAd (bool autoShow)
		{
			DebugLog ( "loadInterstitialAd, autoShow=" + autoShow );
		}

		public void generateRewarded ()
		{
			DebugLog ( "generateRewarded" );
		}

		public void loadRewardedAd (bool autoShow)
		{
			DebugLog ( "loadRewardedAd, autoShow=" + autoShow );
		}

		public void logMessage (string message)
		{
			DebugLog ( message );
		}

		public void setBannerPosition (int position)
		{
			DebugLog ( "setBannerPosition, position=" + position );
		}

		public void showBanner ()
		{
			DebugLog ( "showBanner" );
		}

		public void showInterstitial ()
		{
			DebugLog ( "showInterstitial" );
		}

		public void showRewarded ()
		{
			DebugLog ( "showRewarded" );
		}

		public void testFunction ()
		{
			DebugLog ( "testFunction" );
		}


		private void DebugLog (string msg)
		{
			Debug.Log ( "KIDOZ Dummy: " + msg );
		}

		public void setupCallbacks ()
		{
			DebugLog ("setupCallbacks");

		}
	}
}
