KIDOZ Unity SDK Sample App
=================================
**KIDOZ SDK and the sample App are compatible with Android 4.0 (API level 14) and above and Unity versions greater than 5**

**When comming from a previous version, please manually delete the Plugins/Android/KidozSdk/libs/okhttp-2.5.0.jar file, since we are updated to 2.7.0 version**

**When comming from a previous version, please manually delete the Plugins/Android/KidozSdk/libs/okhttp-2.7.0.jar file, since we are updated to 3.0.1 version**

*Updated to KIDOZ SDK version 0.5.6* 

*Please make sure that the activity in the manifest is defined as com.unity3d.player.UnityPlayerActivity*

This Unity application project provides an example of the [KIDOZ](http://www.kidoz.net) SDK integration.

The example application contains the following creative tools:
* KIDOZ Feed view content tool - the `Feed View`
* KIDOZ default button - the `Feed Button`
* KIDOZ Panel view `Panel View`
* KIDOZ Banner view `Banner View`
* KIDOZ Flexi view `Flexi View`

###Running the sample app
1. Clone (or Download) the Unity project (download button located on the right) and unzip the downloaded .zip file
2. Launch `Unity`, click `File` --> `Open Project` --> `Open`, navigate to unzipped project directory, select the whole directory and click `OK`
3. In the Assets tab click on the `FirstScene` (See printscreen below)
<br>
<a href="url"><img src="http://d28lrrc51wcjkk.cloudfront.net/sdk/FirstScene_unity_-_sdk_-_Android__Personal_.png" align="center" height="150" width="700" ></a>
</br>
4. Go to `File` --> `Build Settings...` , in the opened menu select `Android` and click `Switch Platform` 
5. To run the SDK Sample App go to `File` --> `Build & Run`


KIDOZ SDK - Getting Started
=================================

####IMPORTANT
This demo application uses `buildToolsVersion "22.0.1"`. if your `Android Studio` is not updated with this version you can follow one of these steps (or both):

 - 	Update `buildToolsVersion`

1. Inside `Android Studio` click the `SDK Manager` icon
2. In the left side menu, navigate to `Appearance & Behavior` --> `System Settings` --> `Android SDK`
3. Click the `SDK Tools` tab
4. Check the `Android SDK Build Tools` and click `OK` 


1. Import the `KidozSDK` Unity package. `Assets` --> `Import Package` --> `Custom Package` --> select the extracted KidozSDK package.
2. In the import window select all components. A new Prefabs object named `KidozObject` will appear in the Assets folder. 
3. Open your requested Scene. 
4. Drag the `KidozObject` into the selected scene.
5. Select the `KidozObject` and enter your `Publisher ID` and `Security Token`

<a href="url"><img src="http://d28lrrc51wcjkk.cloudfront.net/sdk/Unity_SDK_Publisher_Security_Token.png" align="center" height="250" width="400" ></a>

####Using the SDK
1. Select your relevant script file.
2. Add ```using KidozSDK;``` in the using section of your code.
3. Create two listeners with the following signature </br>```void functionName(String)``` </br>One for Feed open and one for Feed close.
4. Connect the two listeners function you created to  ```Kidoz.viewOpened``` and to ```Kidoz.viewClosed```
5. Create two listeners with the following signature </br>```void functionName(string)``` for movie open and movie close
6. Connect the above listeners to ```Kidoz.playerOpen``` and ```Kidoz.playerClose```

#KIDOZ Panel
<a href="url"><img src="https://s3.amazonaws.com/kidoz-cdn/sdk/panel_view_sample_image.png" align="right" height="121" width="200" ></a>

`PanelView` is a customized special view that can slide in/out of the screen (both in horizontal and vertical layout) with minimal interference to user experience.
The `PanelView` can be placed on one of four sides of the activity screen - `PANEL_TYPE.TOP`,`PANEL_TYPE.BOTTOM`,`PANEL_TYPE.RIGHT`,`PANEL_TYPE.LEFT` 
</br>
The `PanelView` can be controlled via a special `Handle` button that can be located in any of the 3 following positions -  
`HANDLE_POSITION.START`,`HANDLE_POSITION.CENTER`,`HANDLE_POSITION.END` depending on the `PanelView` initial screen location.
</br>
<a href="url"><img src="https://s3.amazonaws.com/kidoz-cdn/sdk/sdk_panel_layout.jpg" align="center" height="500" width="433" ></a>
</br>
to activate the panel use the following function:
```Kidoz.addPanelToView (Panel_type, Handle_Position);```
<\br>
You can also expand the panel programmatically by using the following function:
```Kidoz.expandPanelView()``` and collapse the panel by using the following function <\br>
``Kidoz.collapsePanelView()``` <\br>


#KIDOZ Feed
###Calling the Feed View Programmatically
You can display the feed view programmatically by calling the following method: ```Kidoz.showFeedView()``` 
to close the feed view call ```Kidoz.dismissFeedView()```


###Adding the KIDOZ Feed Button
<a href="url"><img src="https://kidoz-cdn.s3.amazonaws.com/sdk/btn_animation.gif" align="right" height="96" width="96" ></a>
There are two basic functions that can be used to add a feed button:<br>
1. ```Kidoz.addFeedButton(int xPos, int yPos)``` which will place KIDOZ top left corner button at the selected coordinates. The button size can be found using the following message: ```Kidoz.getFeedButtonDefaultSize()``` which will return an int number that represents the width and height of the button.
</br>
2. ```Kidoz.addFeedButton(int xPos, int yPos, int size)``` that will place KIDOZ top left corner button at the selected coordinates with the requested size. The same size applies for both the width and height of the button.

The visibilty of the button can be controlled using the following function: ```Kidoz.changeFeedButtonVisibility(visible)```


#KIDOZ Banner View
<a href="url"><img src="https://s3.amazonaws.com/kidoz-cdn/sdk/sdk_banner_preview.png" align="right" height="80" width="445" ></a>

`KidozBanner` is a customized interactive banner view with standard size of `320 * 50` dp.
 
You can add the `KidozBanner` by calling the following code

```Kidoz.addBannerToView (Kidoz.BANNER_POSITION);```
 
- 	To Show banner use the following line:
	
```
Kidoz.showBanner();
``` 
 
- 	To Hide banner use the following line:
	
```
Kidoz.hideBanner();
```

- 	To change the banner position use the following line:
	
```
Kidoz.changeBannerPosition();
```

- 	To add event listeners to banner view use:

```
all listeners are of type: private void listenerName(string value)
 Kidoz.bannerReady += bannerReady;
		
	Kidoz.bannerShow += listenerName;
		
	Kidoz.bannerHide += listenerName;
		
	Kidoz.bannerContentLoaded += listenerName;
		
	Kidoz.bannerContentLoadFailed += listenerName;
```

#KIDOZ Flexi Point View
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

For any question or assistance, please contact us at SDK@kidoz.net.
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


