KIDOZ Unity SDK Sample App
=================================
**KIDOZ SDK and the sample App is compatible with Android 4.0 (API level 14) and above.**

*Updated to KIDOZ SDK version 0.2.2* 

This release solves thouch  through issue. Please make sure that the activity in the manifest is defined as com.unity3d.player.UnityPlayerActivity

This Unity application project provides an example of the [KIDOZ](http://www.kidoz.net) SDK integration.

The example application contains the following creative tools:
* KIDOZ's Feed view content tool - the `Feed View`
* KIDOZ's default button - the `Feed Button`
* KIDOZ's Panel view `Panel View`

###Running the sample app
1. Clone (or Download) the Unity project (download button located on the right) and unzip the downloaded .zip file
2. Launch `Unity`, click `File` --> `Open Project` --> `Open`, navigate to unziped project directory , select the whole directory and click `OK`
3. In the Assests tab click on the `FirstScene` (See print screen below)
<br>
<a href="url"><img src="http://d28lrrc51wcjkk.cloudfront.net/sdk/FirstScene_unity_-_sdk_-_Android__Personal_.png" align="center" height="150" width="700" ></a>
</br>
4. Go to `File` --> `Build Settings...` , in the opened menu select `Android` and click `Switch Platform` 
5. To run the SDK Sample App go to `File` --> `Build & Run`


KIDOZ SDK - Getting Started
=================================

####IMPORTANT
This demo application uses `buildToolsVersion "22.0.1"`. if your `Android Studio` is not updated with this version you can follow one of this steps (or both):

 - 	Update `buildToolsVersion`

1. Inside `Android Studio` click the `SDK Manager` icon
2. In the left side menu, navigate to `Appearance & Behavior` --> `System Settings` --> `Android SDK`
3. Click the `SDK Tools` tab
4. Check the `Android SDK Build Tools` and click `OK` 


1. Import the `KidozSDK` Unity package. `Assets` --> `Import Package` --> `Custom Package` --> select the extracted KidozSDK package.
2. In the import window select all components. A new Prefabs object named `KidozObject` will appear in the assets folder. 
3. Open your requested Scene. 
4. Drag the `KidozObject` into the selected scene.
5. Select the `KidozObject` and fill your `Publisher ID` and `Security Token`

<a href="url"><img src="http://d28lrrc51wcjkk.cloudfront.net/sdk/Unity_SDK_Publisher_Security_Token.png" align="center" height="250" width="400" ></a>

####Using the SDK
1. Select your relevant script file.
2. Add ```using KidozSDK;``` in the using section of your code.
3. Create two listeners with the following signature </br>```void functionName(String)``` </br>One for Feed open and one for Feed close.
4. Connect the two listeners function you created to  ```Kidoz.viewOpened``` and to ```Kidoz.viewClosed```

#KIDOZ Panel
<a href="url"><img src="https://s3.amazonaws.com/kidoz-cdn/sdk/panel_view_sample_image.png" align="right" height="121" width="200" ></a>

`PaneView` is a customized special view that can slide in/out of the screen (both in horizontal and vertical layout) with minimal interference to user experience.
The `PanelView` can be place on one of four sides of the activity screen - `PANEL_TYPE.TOP`,`PANEL_TYPE.BOTTOM`,`PANEL_TYPE.RIGHT`,`PANEL_TYPE.LEFT` 
</br>
The `PanelView` can be controled via a special `Handle` button can that can be located in any of the 3 following positions -  
`HANDLE_POSITION.START`,`HANDLE_POSITION.CENTER`,`HANDLE_POSITION.END` depending on the `PaneView` initial Screen location.
</br>
<a href="url"><img src="https://s3.amazonaws.com/kidoz-cdn/sdk/sdk_panel_layout.jpg" align="center" height="500" width="433" ></a>
</br>
to activate the panel use the following function:
```Kidoz.addPanelToView (Panel_type, Handle_Position);```
<\br>
You can also expand and collapse the panel programmatically by using the following functions:
```Kidoz.expandPanelView()``` and to collapse the panel by using the following function <\br>
``Kidoz.collapsePanelView()``` <\br>


#KIDOZ Feed
###Calling the Feed View Programmatically
You can display the feed view programmatically by callig the following method: ```Kidoz.showFeedView()``` 
to close the feed view call ```Kidoz.dismissFeedView()```


###Adding the KIDOZ Feed Button
<a href="url"><img src="https://kidoz-cdn.s3.amazonaws.com/sdk/btn_animation.gif" align="right" height="96" width="96" ></a>
There are two basic functions that can be used to add a feed button:<br>
1. ```Kidoz.addFeedButton(int xPos, int yPos)``` which will place Kidoz top left corner button at the selected coordinates. The button size can be found using the following message. ```Kidoz.getFeedButtonDefaultSize()``` which will return an int number which represent the width and height of the button.
</br>
2. ```Kidoz.addFeedButton(int xPos, int yPos, int size)``` which will place Kidoz top left corner button at the selected coordinates with the requested size. The same size apply for both the width and height of the button.

The visibilty of the button can be controlled by the following function: ```Kidoz.changeFeedButtonVisibility(visible)```


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


