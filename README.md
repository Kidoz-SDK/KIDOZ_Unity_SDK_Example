
KIDOZ Unity SDK Sample App
=================================

*Updated to KIDOZ SDK version 0.1.4* 

This Unity application project provides an example of the [KIDOZ](http://www.kidoz.net) SDK integration.
It is compiled with Android 4.0 (API level 14) and supports any device running this Android version or higher.

The example application contains the following creative tools:
* KIDOZ's Feed view content tool - the `Feed View`
* KIDOZ's default button - the `Feed Button`

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

###Adding Feed View Button
There are two basic functions that can be used to add a feed button:<br>
1. ```Kidoz.addFeedButton(int xPos, int yPos)``` which will place Kidoz top left corner button at the selected coordinates. The button size can be found using the following message. ```Kidoz.getFeedButtonDefaultSize()``` which will return an int number which represent the width and height of the button.
</br>
2. ```Kidoz.addFeedButton(int xPos, int yPos, int size)``` which will place Kidoz top left corner button at the selected coordinates with the requested size. The same size apply for both the width and height of the button.

The visibilty of the button can be controlled by the following function: ```Kidoz.changeFeedButtonVisibility(visible)```

###Manual showing Feed View
Incase the feed view should be displayed programmatically or using custom button the function that should be called is:
```Kidoz.showFeedView()``` to close the feed view call ```Kidoz.dismissFeedView```



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


