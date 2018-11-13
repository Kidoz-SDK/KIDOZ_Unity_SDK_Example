



[<img src="https://kidoz-cdn.s3.amazonaws.com/wordpress/kidoz_small.gif" width="533px" height="300px">](https://www.youtube.com/watch?v=-ljFjRn7jeM)

# KIDOZ Unity SDK Sample App

KIDOZ Android SDK Version: 0.8.6.0
KIDOZ iOS SDK Version: 1.3.0  

**Here you can get the Kidoz Unity plugin and a sample app for Unity. See integration instructions and additional information bellow.**

Note: Since version 0.8.0.3 on Android it's possible to use both Interstitial and Rewarded Video in your app.
Note: Since version 1.3.0 on iOS  Banner was added .

Note: Unity 5.6 & Unity 5.6.1 contain changes to their drawing design blocking some view methods from working effectively. At the moment, on these versions please only use our Interstitial & Rewarded ad units. Starting from Unity 5.6.2 all of our widgets work as expected.

Due to new regulation by Google Play Design for Family policy , all references to YouTube were removed from the SDK.

# General

This Unity application project provides an example of the [KIDOZ](http://www.kidoz.net) SDK integration.

The example application contains the following creative tools:

_Recommended units_:
* KIDOZ Panel view `Panel View` (Android only)
* KIDOZ Interstitial view `Rewarded View` (Android and iOS)
* KIDOZ Interstitial view `Interstitial View` (Android and iOS)
* KIDOZ Banner `Banner` (Android and iOS)

*Note that you need to select either Interstital OR Rewarded during application lifetime.

_Removed units_:
* KIDOZ Feed view content tool - the `Feed View`
* KIDOZ Flexi view `Flexi View`


# Running the sample app

1. Clone (or Download) the Unity project (download button located on the right) and unzip the downloaded .zip file
2. Launch `Unity`, click `File` --> `Open Project` --> `Open`, navigate to unzipped project directory, select the whole directory and click `OK`
3. In the Assets tab click on the `FirstScene` (See printscreen below)
<br>
<a href="url"><img src="http://d28lrrc51wcjkk.cloudfront.net/sdk/FirstScene_unity_-_sdk_-_Android__Personal_.png" align="center" height="150" width="700" ></a>
</br>
4. Go to `File` --> `Build Settings...` , in the opened menu select `Android` and click `Switch Platform` 
5. To run the SDK Sample App go to `File` --> `Build & Run`


# KIDOZ SDK - Getting Started

1. Import the `KidozSDK` Unity package. `Assets` --> `Import Package` --> `Custom Package` --> select the extracted KidozSDK package.
2. In the import window select all components. A new Prefabs object named `KidozObject` will appear in the Assets folder. 
3. Open your requested Scene. 
4. Drag the `KidozObject` into the selected scene.
5. Select the `KidozObject` and enter your `Publisher ID` and `Security Token`
6. If you're having issues with the 'KidozObject' you can open the SampleScene by double clicking it instead.

<a href="url"><img src="http://d28lrrc51wcjkk.cloudfront.net/sdk/Unity_SDK_Publisher_Security_Token.png" align="center" height="250" width="400" ></a>

*Note: When compiling for iOS please add the following frameworks: libsqlite3.tbd, webkit.framework*

#### Using the SDK
1. Select your relevant script file.
2. Add ```using KidozSDK;``` in the using section of your code.
3. Create two listeners with the following signature </br>```void functionName(String)``` </br>One for Feed open and one for Feed close.
4. Connect the two listeners function you created to  ```Kidoz.viewOpened``` and to ```Kidoz.viewClosed```
5. Create two listeners with the following signature </br>```void functionName(string)``` for movie open and movie close
6. Connect the above listeners to ```Kidoz.playerOpen``` and ```Kidoz.playerClose```


# General Events
The following general events are important if you wish to follow the SDK's initialization state:
		Kidoz.initSuccess += onKidozInitSuccess;
		Kidoz.initError += onKidozInitError;

# KIDOZ Banner (Android And iOS)
To load a banner ad:
```java
Kidoz.loadBanner (<AUTO_SHOW>, <BANNER_POSITION>);
AUTO_SHOW - Should banner be shown as soon as it finishes loading

```
The banner can be placed on one of six sides of the activity screen with BANNER_POSITION - `TOP_CENTER`, `BOTTOM_CENTER` ,`TOP_LEFT` ,`TOP_RIGHT` ,`BOTTOM_LEFT` ,`BOTTOM_RIGHT`.

To show a non-autoShow banner:
```java
Kidoz.showBanner ();
```

To hide a visible banner:
```java
Kidoz.hideBanner ();
```

To change banner position:
```java
Kidoz.setBannerPosition(<BANNER_POSITION>);
```

Delegate callbacks:
```java
Kidoz.bannerReady += <bannerReady Callback>;
Kidoz.bannerClose += <bannerClose Callback>;
Kidoz.bannerError += <bannerError Callback>;
Kidoz.bannerNoOffers +=<bannerNoOffers Callback> ;
```

# KIDOZ Panel (Android)
<a href="url"><img src="http://kidoz-cdn.s3.amazonaws.com/media/Panel%20Github.jpeg" align="right" height="121" width="200" ></a>

`PanelView` is a customized special view that can slide in/out of the screen (both in horizontal and vertical layout) with minimal interference to user experience.
The `PanelView` can be placed on one of four sides of the activity screen - `PANEL_TYPE.TOP`,`PANEL_TYPE.BOTTOM`,`PANEL_TYPE.RIGHT`,`PANEL_TYPE.LEFT` 
</br>
The `PanelView` can be controlled via a special `Handle` button that can be located in any of the 3 following positions -  
`HANDLE_POSITION.START`,`HANDLE_POSITION.CENTER`,`HANDLE_POSITION.END` depending on the `PanelView` initial screen location.
</br>
<a href="url"><img src="http://kidoz-cdn.s3.amazonaws.com/media/Panel%20Position%20Github.jpg" align="center" height="500" width="433" ></a>
</br>
to activate the panel use the following function:
```Kidoz.addPanelToView (Panel_type, Handle_Position);```
<\br>
You can also expand the panel programmatically by using the following function:
```Kidoz.expandPanelView()``` and collapse the panel by using the following function <\br>
``Kidoz.collapsePanelView()``` <\br>


# KIDOZ Interstitial / Rewarded View (Android and iOS)

KidozInterstitial is a full screen single ad unit which can be used as simple interstitial or rewared mode.

You can activate the interstitial widget by first calling the load function
```Kidoz.loadInterstitialAd(false); ```

To request rewarded ad call this function
```Kidoz.loadRewardedAd(false); ```


The second stage after the ad was loaded (using the Kidoz.interstitialReady/rewardedReady callback you can call
```Kidoz.showInterstitial(); ```
or 
```Kidoz.showRewarded(); ```

 
It is possible to test if the ad was loaded using the following function:
```Kidoz.getIsInterstitialLoaded() ```
or
```Kidoz.getIsRewardedLoaded() ```

all listeners are of type: private void listenerName(string value)
 	Kidoz.bannerReady += bannerReady;
		
	Kidoz.interstitialOpen += listenerName;
		
	Kidoz.interstitialClose += listenerName;
		
	Kidoz.interstitialReady += listenerName;
	
	Kidoz.interstitialOnLoadFail += interstitialOnLoadFail;

	Kidoz.interstitialOnNoOffers += interstitialOnNoOffers;
	
	Kidoz.onRewardedDone += onRewardedDone; 
		
	Kidoz.onRewardedVideoStarted += onRewardedVideoStarted;
		
	Kidoz.rewardedOpen += rewardedOpen;
	
	Kidoz.rewardedClose += rewardedClose;
	
	Kidoz.rewardedReady += rewardedReady;
	
	Kidoz.rewardedOnLoadFail += rewardedOnLoadFail;
	
	Kidoz.rewardedOnNoOffers += rewardedOnNoOffers;
	

**Kidoz iOS Interstitial best practices**
- The preferred timing to show Interstitial Ads : Before the game ends, between game levels, after completing a game level .   
- Some Interstitial Ads may contain video with sound. In order to maximise user experience, it is important to mute or pause game background sounds and pause the game while the Interstitial is displayed. This can be achieved by using `interstitialOpen` and `interstitialClose` callbacks:
```
Kidoz.interstitialOpen += interstitialOpen;	
Kidoz.interstitialClose += interstitialClose;
```
```
private void interstitialOpen(string  value)  {
// mute/pause background sounds
// pause your game 
}

private void interstitialClose(string  value)
// unmute/resume background sounds
// resume your game 
}
```

**Kidoz iOS Rewarded best practices**
- The preferred timing to show Rewarded Ads : Based on the implementation of rewarded logics in your game .   
- Some Rewarded Ads may contain video with sound. In order to maximise user experience, it is important to mute or pause game background sounds and pause the game flow while the Rewarded is displayed. This can be achieved by using `rewardedOpen` and `rewardedClose` callbacks:
```
Kidoz.rewardedOpen += rewardedOpen;  
Kidoz.rewardedClose += rewardedClose;
```
```

-(void)rewardedOpen {
//mute/pause background sounds
//pause your game 
}

-(void)rewardedClose {
//unmute/resume background sounds
//resume your game 
}
```

Trouble Shooting
================
**KIDOZ SDK and this sample app are compatible with Android 4.0 (API level 14) and above, iOS 8.0 and above and Unity versions greater than 5**

**Kidoz plugin does not currently support Unity editor runtime. Please make sure you switch to a relevant platform (iOS/Android) before working or ignore any error in the Editor runtime.

**When comming from a previous version, please manually delete previous okhttp jar file, and use the attached onen**

**When comming from a previous version,  please manually delete previous okio jar file, and use the attached onen**

**When comming from a previous version, please manually delete the Kidoz.cs located in the root assetes folder , since we moved the file postion. also make sure that teh KidozObject points to the new Kidoz script**

**Android Build Tools Version**
This demo application uses `buildToolsVersion "22.0.1"`. if your `Android Studio` is not updated with this version you can follow one of these steps (or both):
1. Inside `Android Studio` click the `SDK Manager` icon
2. In the left side menu, navigate to `Appearance & Behavior` --> `System Settings` --> `Android SDK`
3. Click the `SDK Tools` tab
4. Check the `Android SDK Build Tools` and click `OK` 


# For any question or assistance, please contact us at SDK@kidoz.net.
</br>
License
--------

    Copyright 2015 KIDOZ, Inc.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.


