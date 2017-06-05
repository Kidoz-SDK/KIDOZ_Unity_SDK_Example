
namespace KIDOZNativeInterface {
	public interface KIDOZNativeInterface
	{
		// interface members
		void testFunction();

		bool isInitialised();

		void init(string developerID, string securityToken);

		void addFeedButton(int x, int y);

		void addFeedBUtton(int x, int y, int size);

		void changeFeedButtonVisibility(bool visible);

		void addPanelToView(int panelType, int handle_position);
		
		void addPanelToView(int panel_type, int handle_position, float startDelay, float duration);

		void changePanelVisibility(bool visible);

		void expandPanelView();

		void collapsePanelView();

		bool getIsPanelExpended();

		void setPanelViewColor(string color);

		int getFeedButtonSize();

		void showFeedView();

		void dismissFeedView();

		void addBannerToView(int position);

		void showBanner();

		void hideBanner();

		void changeBannerPosition(int position);

		void addFlexiView(bool autoShow, int position);

		void hideFlexiView();

		void showFlexiView();

		bool getIsFlexiViewVisible();

		void setFlexiViewDraggable(bool dragable);

		void setFlexiViewClosable(bool closable);

		//***********************************//
		//***** INTERSTITIAL & REWARDED *****//
		//***********************************//

		void loadInterstitialAd(bool autoShow);

		void loadRewardedAd(bool autoShow);

		void showInterstitial();

		void showRewarded();

		bool getIsInterstitialLoaded();

		bool getIsRewardedLoaded();

		void logMessage(string message);
	}
}
