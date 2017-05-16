using System;
using KIDOZNativeInterface;
using System.Runtime.InteropServices;

namespace KIDOZiOSInterface {

	public class KIDOZiOSInterface : KIDOZNativeInterface.KIDOZNativeInterface
	{
		[DllImport("__Internal")]
		private static extern void unityTestFunction();

		[DllImport("__Internal")]
		private static extern void KidozInit( string developerID,  string securityToken);

		[DllImport("__Internal")]
		private static extern void KidozAddFeedButton (float x, float y);

		[DllImport("__Internal")]
		private static extern void KidozAddFeedBUttonWithSize (float x, float y, float size);

		[DllImport("__Internal")]
		private static extern void KidozChangeFeedButtonVisibility(bool visible);

		[DllImport("__Internal")]
		private static extern void KidozAddPanelToView(int panelType, int handle_position);

		[DllImport("__Internal")]
		private static extern void KidozChangePanelVisibility(bool visible);

		[DllImport("__Internal")]
		private static extern void KidozExpandPanelView();

		[DllImport("__Internal")]
		private static extern void KidozCollapsePanelView();

		[DllImport("__Internal")]
		private static extern bool KidozIsPanelExpanded();

		[DllImport("__Internal")]
		private static extern void KidozSetPanelViewColor(string color);

		[DllImport("__Internal")]
		private static extern int KidozGetFeedButtonSize();

		[DllImport("__Internal")]
		private static extern void KidozShowFeedView();

		[DllImport("__Internal")]
		private static extern void KidozDismissFeedView();

		[DllImport("__Internal")]
		private static extern void KidozShowBanner();

		[DllImport("__Internal")]
		private static extern void KidozHideBanner();

		[DllImport("__Internal")]
		private static extern void KidozChangeBannerPosition();

		[DllImport("__Internal")]
		private static extern void KidozAddFlexiView(bool autoShow, int position);

		[DllImport("__Internal")]
		private static extern void KidozHideFlexiView();

		[DllImport("__Internal")]
		private static extern void KidozShowFlexiView();

		[DllImport("__Internal")]
		private static extern bool KidozGetIsFlexiViewVisible();

		[DllImport("__Internal")]
		private static extern void KidozSetFlexiViewClosable(bool closable);

		[DllImport("__Internal")]
		private static extern void KidozSetFlexiViewDraggable(bool dragable);

		[DllImport("__Internal")]
		private static extern void KidozLoadInterstitialAd(bool autoShow);

		[DllImport("__Internal")]
		private static extern void KidozGenerateInterstitial();
		
		[DllImport("__Internal")]
		private static extern void KidozRequestAd(bool rewarded);

		[DllImport("__Internal")]
		private static extern void KidozShowInterstitial();

		[DllImport("__Internal")]
		private static extern bool KidozGetIsInterstitialLoaded();

		[DllImport("__Internal")]
		private static extern void KidozLog(string message);

		public KIDOZiOSInterface()
		{
		}
		public void testFunction()
		{
			unityTestFunction();
		}

		public bool isInitialised()
		{
			return true; //TODO: return actual value once iOS supports this
		}
		
		public void init(string developerID, string securityToken)
		{
			KidozInit(developerID, securityToken);
		}
		
		public void addFeedButton(int x, int y)
		{
			KidozAddFeedButton ((float)x, (float)y);
		}
		
		public void addFeedBUtton(int x, int y, int size)
		{
			KidozAddFeedBUttonWithSize ((float)x, (float)y, (float)size);
		}
		
		public void changeFeedButtonVisibility(bool visible)
		{
			KidozChangeFeedButtonVisibility (visible);
		}
		
		public void addPanelToView(int panelType, int handle_position)
		{
			KidozAddPanelToView (panelType,handle_position);
		}
		
		public void addPanelToView(int panel_type, int handle_position, float startDelay, float duration)
		{
			//oooTODO: implement missing function
		}

		public void changePanelVisibility(bool visible)
		{
			KidozChangePanelVisibility (visible);
		}

		public void expandPanelView()
		{
			KidozExpandPanelView ();
		}

		public void collapsePanelView()
		{
			KidozCollapsePanelView ();
		}

		public bool getIsPanelExpended()
		{
			return KidozIsPanelExpanded();
		}
		public void setPanelViewColor(string color)
		{

		}

		public int getFeedButtonSize()
		{
			return 0;
		}

		public void showFeedView()
		{
			KidozShowFeedView ();
		}

		public void dismissFeedView()
		{
			KidozDismissFeedView ();
		}

		public void addBannerToView(int position)
		{
		}

		public void showBanner()
		{
		}

		public void hideBanner()
		{
		}

		public void changeBannerPosition(int position)
		{
		}

		public void addFlexiView(bool autoShow, int position)
		{
		}

		public void hideFlexiView()
		{
		}

		public void showFlexiView()
		{
		}

		public bool getIsFlexiViewVisible()
		{
			return false;
		}

		public void setFlexiViewDraggable(bool dragable)
		{
		}

		public void setFlexiViewClosable(bool closable)
		{
		}

		public void loadInterstitialAd(bool autoShow)
		{
			KidozLoadInterstitialAd (autoShow);
		}

		public void generateInterstitial()
		{
			KidozGenerateInterstitial();
		}
		
		public void requestAd(int adType)
		{
			bool rewarded = false;
			if (adType == 1) {
				rewarded = true;
			}
			KidozRequestAd (rewarded);
		}


		public void showInterstitial()
		{
			KidozShowInterstitial ();
		}

		public bool getIsInterstitialLoaded()
		{
			return KidozGetIsInterstitialLoaded();
		}

		public void showVideoUnit()
		{
			return ;
		}

		public void logMessage(string message)
		{
			KidozLog (message);
		}
	}
}
