
KIDOZ Unity SDK Sample App
=================================

*Updated to KIDOZ SDK version 0.1.3* 

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

1. Include the `KIDOZ SDK` library inside your project
2. Init the SDK
3. Add `KIDOZ Feed View Button` to your `Main Activity`

Once the above 3 steps are correctly done the `Feed View` will be launched when the `Feed Button` is clicked.

####Include the library
On android studio you can include the library directly in your Gradle project:

 - 	Add the following line to your app's module `build.gradle` `dependencies` section:
```gradle
dependencies {
	// your app's other dependencies
	compile 'com.kidoz.sdk:KidozSDK:0.1.3'
}
``` 
####Initializing the SDK
The SDK should be initialized only once. 
When initializing the SDK, please make sure to use your given `publisherID` and `securityToken`, which can be retrieve by contacting with SDK@kidoz.net.
If your project extends `Application` you can initialized the SDK inside Application's onCreate otherwise initialized it inside your Main Activity's onCreate.

 - 	Inside your `Application` onCreate add the following line:

> YourApplication.java

```java
public class MyApplication extends Application{
   	@Override 
	protected void onCreate(Bundle savedInstanceState)
	{
		super.onCreate();
		KidozSDK.initialize(this, "publisherID", "securityToken");
		//the rest of your application onCreate
	}
    ...
}
```
 - Inside your `Main Activity` onCreate add the following line:

> MainActivity.java

```java
@Override 
protected void onCreate(Bundle savedInstanceState)
{
	super.onCreate(savedInstanceState);
	KidozSDK.initialize(getApplicationContext(), "publisherID", "securityToken");
	//the rest of your main activity onCreate
	...
}
```

####Adding the KIDOZ Feed Button
You can add the `Feed Button` to your layout xml file or create a new instance programmatically.

 - 	Add `FeedButton` directly inside xml:
 
> main_activity_layout.xml

```xml
	<com.kidoz.sdk.api.FeedButton
		android:id="@+id/kidozBtn_view"
		android:layout_width="wrap_content"
		android:layout_height="wrap_content">
	</com.kidoz.sdk.api.KidozButtonView>
```

 - 	Add `FeedButton` programmatically:
  	
 
> MainActivity.java

```java
FeedButton mFeedButton = new FeedButton(MainActivity.this);
yourViewGroup.addView(mFeedButton);
```

- You can change Feed button size on runtime by using:
```java
 mFeedButton.setFeedButtonSize(200);
```

For advanced use of the `Feed View` you can get a reference to `FeedView` by calling this method on the `FeedButton` reference:

```java
FeedView mFeedView = mFeedButton.getFeedView();
```
Refer to the next section for a better look on `FeedView` and how you can call it without using a button from within your own code.

#Calling the Feed View Programmatically
####Creating an instance of the `Feed View`
 - 	Inside your `Activity` or `Fragment` create an instance of `FeedView` by adding the following lines:

```java
FeedView mFeed = new FeedView.Builder(MainActivity.this).build();
```

You can implement `IOnFeedViewEventListener` interface if you want to be informed when the `FeedView` is dismissed and/or about to be open by adding the following lines:

```java
mFeedView.setOnFeedViewEventListener(new IOnFeedViewEventListener()
{
	@Override public void onDismissView()
	{
		// Will be called when the FeedView is closed
		// This is a good time to resume your game
	}
	
	@Override public void onReadyToShow()
	{
		// Will be called when the FeedView is about to open
		// This is a good time to pause your game
	}
});
```

 - 	Your `Main Activity` should be now look similar to this:

> MainActivity.java

```java
public class MainActivity extends FragmentActivity
{
	//Feed View reference
	private FeedView mFeedView;
	
	@Override 
	protected void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		KidozSDK.initialize(getApplicationContext(), "publisherID", "securityToken");
		// For a cleaner code init the FeedView in a saperated method
		initFeedView();
		//the rest of your main activity onCreate
		...
	}
	
	private void initFeedView()
	{
		mFeedView = new FeedView.Builder(MainActivity.this).build();
		mFeedView.setOnFeedViewEventListener(new IOnFeedViewEventListener()
		{
			@Override public void onDismissView()
			{
				// Will be called when the FeedView is closed
				// This is a good time to resume your game
			}
		
			@Override public void onReadyToShow()
			{
				// Will be called when the FeedView is about to open
				// This is a good time to pause your game
			}
		});
	}
}
```

####Launching the Feed View
The `Feed View` can be launched by calling the method `showView` on the `FeedView` instance:
```java
mFeedView.showView();
```

You can call the `showView` method from anywhere inside your `Main Activity` depends on your app's flow, For example: when a game is stopped or when a user clicks a button.

It's recommended to use KIDOZ's default button - the `Feed Button` which is a custom animatable button.

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


