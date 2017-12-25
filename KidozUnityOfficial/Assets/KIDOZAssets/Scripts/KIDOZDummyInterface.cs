using UnityEngine;
using System.Collections;
using System;
using KIDOZNativeInterface;

namespace KIDOZDummyInterface
{
	public class KIDOZDummyInterface :KIDOZNativeInterface.KIDOZNativeInterface
	{
		public void addFeedButton (int x, int y)
		{
			DebugLog ( "addFeedButton, x=" + x + ", y=" + y  );
		}

		public void addFeedBUtton (int x, int y, int size)
		{
			DebugLog ( "addFeedBUtton, x=" + x + ", y=" + y + ", size=" + size );
		}

		public void addFlexiView (bool autoShow, int position)
		{
			DebugLog ( "addFlexiView, autoShow=" + autoShow + ", position=" + position );
		}

		public void addPanelToView (int panelType, int handle_position)
		{
			DebugLog ( "addPanelToView, panelType=" + panelType + ", handle_position=" + handle_position );
		}

		public void addPanelToView (int panel_type, int handle_position, float startDelay, float duration)
		{
			DebugLog ( "addPanelToView, panel_type=" + panel_type + ", handle_position=" + handle_position + ", startDelay=" + startDelay + ", duration=" + duration );
		}

		public void changeFeedButtonVisibility (bool visible)
		{
			DebugLog ( "changeFeedButtonVisibility, visible=" + visible );
		}

		public void changePanelVisibility (bool visible)
		{
			DebugLog ( "changePanelVisibility, visible=" + visible );
		}

		public void collapsePanelView ()
		{
			DebugLog ( "collapsePanelView" );
		}

		public void dismissFeedView ()
		{
			DebugLog ( "dismissFeedView" );
		}

		public void expandPanelView ()
		{
			DebugLog ( "expandPanelView" );
		}

		public int getFeedButtonSize ()
		{
			return 0;
		}

		public bool getIsFlexiViewVisible ()
		{
			return false;
		}

		public bool getIsInterstitialLoaded ()
		{
			return false;
		}

		public bool getIsPanelExpended ()
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

		public void hideFlexiView ()
		{
			DebugLog ( "hideFlexiView" );
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

		public void setFlexiViewClosable (bool closable)
		{
			DebugLog ( "setFlexiViewClosable, closable=" + closable );
		}

		public void setFlexiViewDraggable (bool dragable)
		{
			DebugLog ( "setFlexiViewDraggable, dragable=" + dragable );
		}

		public void setPanelViewColor (string color)
		{
			DebugLog ( "setPanelViewColor" );
		}

		public void showBanner ()
		{
			DebugLog ( "showBanner" );
		}

		public void showFeedView ()
		{
			DebugLog ( "showFeedView" );
		}

		public void showFlexiView ()
		{
			DebugLog ( "showFlexiView" );
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

		public void showVideoUnit ()
		{
			DebugLog ( "showVideoUnit" );
		}

		private void DebugLog (string msg)
		{
			Debug.Log ( "KIDOZ Dummy: " + msg );
		}
	}
}
