
namespace KIDOZNativeInterface {
	public interface KIDOZNativeInterface
	{
		// interface members
		void testFunction();

		bool isInitialised();

		void init(string developerID, string securityToken);

		void addPanelToView(int panelType, int handle_position);
		
		void addPanelToView(int panel_type, int handle_position, float startDelay, float duration);

		void changePanelVisibility(bool visible);

		void expandPanelView();

		void collapsePanelView();

		bool getIsPanelExpended();

		void setPanelViewColor(string color);

		void loadBanner(bool autoShow, int position);

		void showBanner();

		void hideBanner();

	
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
