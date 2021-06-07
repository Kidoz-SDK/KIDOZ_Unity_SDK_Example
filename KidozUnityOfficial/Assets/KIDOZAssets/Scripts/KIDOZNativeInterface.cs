
namespace KIDOZNativeInterface {
	public interface KIDOZNativeInterface
	{
		// interface members
		void testFunction();

		bool isInitialised();

		void init(string developerID, string securityToken);

		void loadBanner(bool autoShow, int position);

		void showBanner();

		void hideBanner();

		void setupCallbacks ();

	
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
