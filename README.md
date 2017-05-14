[<img src="https://kidoz-cdn.s3.amazonaws.com/wordpress/kidoz_small.gif" width="533px" height="300px">](https://www.youtube.com/watch?v=-ljFjRn7jeM)

# KIDOZ Unity SDK Sample App

**Here you can get the Kidoz Unity plugin and a sample app for Unity. See integration instructions and additional information bellow.**


# General

This Unity application project provides an example of the [KIDOZ](http://www.kidoz.net) SDK integration.

The example application contains the following creative tools:

_Recommended units_:
* KIDOZ Panel view `Panel View`
* KIDOZ Interstitial view `Rewarded View`
* KIDOZ Interstitial view `Interstitial View`

*Note that you need to select either Interstital OR Rewarded during application lifetime.

_Deprecated units_:
* KIDOZ Feed view content tool - the `Feed View`
* KIDOZ Flexi view `Flexi View`
* KIDOZ Banner ad


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

# KIDOZ Panel
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


# KIDOZ Interstitial / Rewarded View

KidozInterstitial is a full screen single ad unit which can be used as simple interstitial or rewared mode.

You can activate the interstitial widget by first calling the load function
```Kidoz.requestInterstitialAd(false, INTERSTITIAL_AD_MODE.NORMAL) ```

To request rewarded ad call this function
```Kidoz.requestInterstitialAd(false, INTERSTITIAL_AD_MODE.NORMAL) ```


The second stage after the ad was loaded (using the Kidoz.interstitialReady  listener you can call
```Kidoz.showInterstitial(); ```

 
It is possible to test if the ad was loaded using the following function:
```Kidoz.getIsInterstitialLoaded() ```


all listeners are of type: private void listenerName(string value)
 Kidoz.bannerReady += bannerReady;
		
	Kidoz.interstitialOpen += listenerName;
		
	Kidoz.interstitialClose += listenerName;
		
	Kidoz.interstitialReady += listenerName;
	
	Kidoz.interstitialOnLoadFail += interstitialOnLoadFail;

	Kidoz.interstitialOnNoOffers += interstitialOnNoOffers;
	
	Kidoz.onRewardedDone += onRewardedDone; 
		
	Kidoz.onRewardedVideoStarted += onRewardedVideoStarted;
		
	
## _Deprecated units_:

# KIDOZ Feed
### Calling the Feed View Programmatically
You can display the feed view programmatically by calling the following method: ```Kidoz.showFeedView()``` 
to close the feed view call ```Kidoz.dismissFeedView()```


### Adding the KIDOZ Feed Button

There are two basic functions that can be used to add a feed button:<br>
1. ```Kidoz.addFeedButton(int xPos, int yPos)``` which will place KIDOZ top left corner button at the selected coordinates. The button size can be found using the following message: ```Kidoz.getFeedButtonDefaultSize()``` which will return an int number that represents the width and height of the button.
</br>
2. Kidoz.addFeedButton(int xPos, int yPos, int size)``` that will place KIDOZ top left corner button at the selected coordinates with the requested size. The same size applies for both the width and height of the button.

The visibilty of the button can be controlled using the following function: ```Kidoz.changeFeedButtonVisibility(visible)```



# KIDOZ Flexi Point View *only in Android
<a href="url"><img src="https://s3.amazonaws.com/kidoz-cdn/sdk/flexi_sample_preview.png" align="right" height="300" width="300" ></a>
`FlexiView` is a small interactive single content view, which hovers over the screen content.  

You can add the `FlexiView` by calling the following function:
	
```
Kidoz.addFlexiView (bool<auto show>, Kidoz.FLEXI_VIEW_POSITION<the flexi view start position);
```
 
- 	To Show/Hide Flexi view use the following lines:
```
 // Show flexi view
 Kidoz.showFlexiView();
 
 // Hide flexi view
 Kidoz.hideFlexiView();
```
 
- 	To add event listeners to Flexi View use:
```
 All listeners are of type: private void listenerName(string value)
 
 Kidoz.flexiViewReady += listenerName;

		Kidoz.flexiViewShow += listenerName;

		Kidoz.flexiViewHide += listenerName;

```

Trouble Shooting
================
**KIDOZ SDK and this sample app are compatible with Android 4.0 (API level 14) and above and Unity versions greater than 5**

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


