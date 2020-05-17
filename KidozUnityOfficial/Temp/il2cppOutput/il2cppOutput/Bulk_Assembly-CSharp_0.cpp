#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// KIDOZDummyInterface.KIDOZDummyInterface
struct KIDOZDummyInterface_t1497704720;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// KIDOZiOSInterface.KIDOZiOSInterface
struct KIDOZiOSInterface_t3673191750;
// KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage
struct DelegateMessage_t368983736;
// KidozSDK.Kidoz
struct Kidoz_t3183170329;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// SampleCode
struct SampleCode_t929735280;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302;
// UnityEngine.GUISettings
struct GUISettings_t1774757634;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3742157810;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1143955295;
// UnityEngine.UI.Button
struct Button_t4055032469;

extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3401532167;
extern String_t* _stringLiteral2258698273;
extern const uint32_t KIDOZDummyInterface_addFeedButton_m2222519362_MetadataUsageId;
extern String_t* _stringLiteral3401491047;
extern String_t* _stringLiteral710501006;
extern const uint32_t KIDOZDummyInterface_addFeedBUtton_m791370765_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3886337751;
extern String_t* _stringLiteral841061624;
extern const uint32_t KIDOZDummyInterface_addFlexiView_m2054263001_MetadataUsageId;
extern String_t* _stringLiteral739156623;
extern String_t* _stringLiteral7108638;
extern const uint32_t KIDOZDummyInterface_addPanelToView_m4273989249_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1791521506;
extern String_t* _stringLiteral3552560689;
extern String_t* _stringLiteral2532873614;
extern const uint32_t KIDOZDummyInterface_addPanelToView_m2845102553_MetadataUsageId;
extern String_t* _stringLiteral3226736625;
extern const uint32_t KIDOZDummyInterface_changeFeedButtonVisibility_m1445992606_MetadataUsageId;
extern String_t* _stringLiteral3367276813;
extern const uint32_t KIDOZDummyInterface_changePanelVisibility_m2226708428_MetadataUsageId;
extern String_t* _stringLiteral596316473;
extern const uint32_t KIDOZDummyInterface_collapsePanelView_m322123477_MetadataUsageId;
extern String_t* _stringLiteral3740706606;
extern const uint32_t KIDOZDummyInterface_dismissFeedView_m890799715_MetadataUsageId;
extern String_t* _stringLiteral245291054;
extern const uint32_t KIDOZDummyInterface_expandPanelView_m615479152_MetadataUsageId;
extern String_t* _stringLiteral169975460;
extern const uint32_t KIDOZDummyInterface_hideBanner_m200176364_MetadataUsageId;
extern String_t* _stringLiteral1008185073;
extern const uint32_t KIDOZDummyInterface_hideFlexiView_m1502479599_MetadataUsageId;
extern String_t* _stringLiteral4016391578;
extern String_t* _stringLiteral835911299;
extern const uint32_t KIDOZDummyInterface_init_m3831246382_MetadataUsageId;
extern String_t* _stringLiteral1209185762;
extern const uint32_t KIDOZDummyInterface_loadBanner_m2389489040_MetadataUsageId;
extern String_t* _stringLiteral1632684037;
extern const uint32_t KIDOZDummyInterface_generateInterstitial_m2593545953_MetadataUsageId;
extern String_t* _stringLiteral3600979419;
extern const uint32_t KIDOZDummyInterface_loadInterstitialAd_m889579467_MetadataUsageId;
extern String_t* _stringLiteral827557175;
extern const uint32_t KIDOZDummyInterface_generateRewarded_m6937702_MetadataUsageId;
extern String_t* _stringLiteral1867893599;
extern const uint32_t KIDOZDummyInterface_loadRewardedAd_m3427899386_MetadataUsageId;
extern String_t* _stringLiteral3463494366;
extern const uint32_t KIDOZDummyInterface_setBannerPosition_m2665305657_MetadataUsageId;
extern String_t* _stringLiteral3522389669;
extern const uint32_t KIDOZDummyInterface_setFlexiViewClosable_m3986059395_MetadataUsageId;
extern String_t* _stringLiteral3031190827;
extern const uint32_t KIDOZDummyInterface_setFlexiViewDraggable_m1627646218_MetadataUsageId;
extern String_t* _stringLiteral2200195266;
extern const uint32_t KIDOZDummyInterface_setPanelViewColor_m1459875360_MetadataUsageId;
extern String_t* _stringLiteral2898991488;
extern const uint32_t KIDOZDummyInterface_showBanner_m3523566075_MetadataUsageId;
extern String_t* _stringLiteral3610387600;
extern const uint32_t KIDOZDummyInterface_showFeedView_m690139743_MetadataUsageId;
extern String_t* _stringLiteral4256815504;
extern const uint32_t KIDOZDummyInterface_showFlexiView_m4231993604_MetadataUsageId;
extern String_t* _stringLiteral442818117;
extern const uint32_t KIDOZDummyInterface_showInterstitial_m2229083960_MetadataUsageId;
extern String_t* _stringLiteral2414248278;
extern const uint32_t KIDOZDummyInterface_showRewarded_m24385012_MetadataUsageId;
extern String_t* _stringLiteral581605465;
extern const uint32_t KIDOZDummyInterface_testFunction_m3985566243_MetadataUsageId;
extern String_t* _stringLiteral2355027635;
extern const uint32_t KIDOZDummyInterface_showVideoUnit_m309135145_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral251875331;
extern const uint32_t KIDOZDummyInterface_DebugLog_m2430911715_MetadataUsageId;
extern RuntimeClass* Kidoz_t3183170329_il2cpp_TypeInfo_var;
extern const uint32_t KIDOZiOSInterface_delegateMessageReceived_m2963591789_MetadataUsageId;
extern RuntimeClass* KIDOZiOSInterface_t3673191750_il2cpp_TypeInfo_var;
extern RuntimeClass* DelegateMessage_t368983736_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KIDOZiOSInterface_delegateMessageReceived_m2963591789_RuntimeMethod_var;
extern const uint32_t KIDOZiOSInterface_init_m2800452284_MetadataUsageId;
extern const uint32_t DelegateMessage_BeginInvoke_m3532999965_MetadataUsageId;
extern RuntimeClass* Action_1_t2019918284_il2cpp_TypeInfo_var;
extern const uint32_t Kidoz_add_initSuccess_m2165230954_MetadataUsageId;
extern const uint32_t Kidoz_remove_initSuccess_m2287499612_MetadataUsageId;
extern const uint32_t Kidoz_add_initError_m2622338913_MetadataUsageId;
extern const uint32_t Kidoz_remove_initError_m1642383409_MetadataUsageId;
extern const uint32_t Kidoz_add_panelExpand_m3648269432_MetadataUsageId;
extern const uint32_t Kidoz_remove_panelExpand_m658494023_MetadataUsageId;
extern const uint32_t Kidoz_add_panelCollapse_m136016910_MetadataUsageId;
extern const uint32_t Kidoz_remove_panelCollapse_m2445319286_MetadataUsageId;
extern const uint32_t Kidoz_add_panelReady_m359807525_MetadataUsageId;
extern const uint32_t Kidoz_remove_panelReady_m1502200202_MetadataUsageId;
extern const uint32_t Kidoz_add_bannerContentLoaded_m4265223016_MetadataUsageId;
extern const uint32_t Kidoz_remove_bannerContentLoaded_m961283682_MetadataUsageId;
extern const uint32_t Kidoz_add_bannerContentLoadFailed_m584024871_MetadataUsageId;
extern const uint32_t Kidoz_remove_bannerContentLoadFailed_m2237219098_MetadataUsageId;
extern const uint32_t Kidoz_add_playerOpen_m198456761_MetadataUsageId;
extern const uint32_t Kidoz_remove_playerOpen_m387044619_MetadataUsageId;
extern const uint32_t Kidoz_add_playerClose_m803428454_MetadataUsageId;
extern const uint32_t Kidoz_remove_playerClose_m112862415_MetadataUsageId;
extern const uint32_t Kidoz_add_interstitialOpen_m101925348_MetadataUsageId;
extern const uint32_t Kidoz_remove_interstitialOpen_m1663022110_MetadataUsageId;
extern const uint32_t Kidoz_add_interstitialClose_m3760513420_MetadataUsageId;
extern const uint32_t Kidoz_remove_interstitialClose_m2910153104_MetadataUsageId;
extern const uint32_t Kidoz_add_interstitialReady_m1858249288_MetadataUsageId;
extern const uint32_t Kidoz_remove_interstitialReady_m2956049942_MetadataUsageId;
extern const uint32_t Kidoz_add_interstitialOnLoadFail_m2071743443_MetadataUsageId;
extern const uint32_t Kidoz_remove_interstitialOnLoadFail_m1964897540_MetadataUsageId;
extern const uint32_t Kidoz_add_interstitialOnNoOffers_m1904867564_MetadataUsageId;
extern const uint32_t Kidoz_remove_interstitialOnNoOffers_m678060208_MetadataUsageId;
extern const uint32_t Kidoz_add_onRewardedDone_m2382605031_MetadataUsageId;
extern const uint32_t Kidoz_remove_onRewardedDone_m3759379697_MetadataUsageId;
extern const uint32_t Kidoz_add_onRewardedVideoStarted_m3375990605_MetadataUsageId;
extern const uint32_t Kidoz_remove_onRewardedVideoStarted_m547549615_MetadataUsageId;
extern const uint32_t Kidoz_add_rewardedOpen_m1836779270_MetadataUsageId;
extern const uint32_t Kidoz_remove_rewardedOpen_m3456681225_MetadataUsageId;
extern const uint32_t Kidoz_add_rewardedClose_m369474152_MetadataUsageId;
extern const uint32_t Kidoz_remove_rewardedClose_m2480573548_MetadataUsageId;
extern const uint32_t Kidoz_add_rewardedReady_m2943739206_MetadataUsageId;
extern const uint32_t Kidoz_remove_rewardedReady_m2657546523_MetadataUsageId;
extern const uint32_t Kidoz_add_rewardedOnLoadFail_m4167226390_MetadataUsageId;
extern const uint32_t Kidoz_remove_rewardedOnLoadFail_m284241147_MetadataUsageId;
extern const uint32_t Kidoz_add_rewardedOnNoOffers_m3061268300_MetadataUsageId;
extern const uint32_t Kidoz_remove_rewardedOnNoOffers_m2064503370_MetadataUsageId;
extern const uint32_t Kidoz_add_bannerReady_m662585037_MetadataUsageId;
extern const uint32_t Kidoz_remove_bannerReady_m576461645_MetadataUsageId;
extern const uint32_t Kidoz_add_bannerClose_m492332998_MetadataUsageId;
extern const uint32_t Kidoz_remove_bannerClose_m903783463_MetadataUsageId;
extern const uint32_t Kidoz_add_bannerError_m2260833710_MetadataUsageId;
extern const uint32_t Kidoz_remove_bannerError_m2490735221_MetadataUsageId;
extern const uint32_t Kidoz_add_bannerNoOffers_m3523107307_MetadataUsageId;
extern const uint32_t Kidoz_remove_bannerNoOffers_m2366785931_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Kidoz_get_Instance_m2698996040_MetadataUsageId;
extern const uint32_t Kidoz_SetInstance_m1655708658_MetadataUsageId;
extern String_t* _stringLiteral2566050346;
extern const uint32_t Kidoz_Awake_m1459059702_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisKidoz_t3183170329_m793903245_RuntimeMethod_var;
extern String_t* _stringLiteral2308364492;
extern const uint32_t Kidoz_Create_m2462817466_MetadataUsageId;
extern const uint32_t Kidoz_SetiOSAppPauseOnBackground_m3432440863_MetadataUsageId;
extern String_t* _stringLiteral3508162604;
extern String_t* _stringLiteral1036564779;
extern String_t* _stringLiteral14669535;
extern String_t* _stringLiteral3273711721;
extern String_t* _stringLiteral3452614532;
extern const uint32_t Kidoz_init_m1343812556_MetadataUsageId;
extern const uint32_t Kidoz_isInitialised_m271781548_MetadataUsageId;
extern const uint32_t Kidoz_testFunction_m3210016021_MetadataUsageId;
extern const uint32_t Kidoz_addPanelToView_m1027759776_MetadataUsageId;
extern const uint32_t Kidoz_changePanelVisibility_m3523566946_MetadataUsageId;
extern const uint32_t Kidoz_expandPanelView_m1146353060_MetadataUsageId;
extern const uint32_t Kidoz_collapsePanelView_m92948298_MetadataUsageId;
extern const uint32_t Kidoz_setPanelColor_m2686736123_MetadataUsageId;
extern const uint32_t Kidoz_loadInterstitialAd_m2946429557_MetadataUsageId;
extern const uint32_t Kidoz_loadRewardedAd_m716152724_MetadataUsageId;
extern const uint32_t Kidoz_generateInterstitial_m4266849258_MetadataUsageId;
extern const uint32_t Kidoz_generateRewarded_m3149821262_MetadataUsageId;
extern const uint32_t Kidoz_showInterstitial_m4094279772_MetadataUsageId;
extern const uint32_t Kidoz_showRewarded_m2840107484_MetadataUsageId;
extern const uint32_t Kidoz_getIsInterstitialLoaded_m1596880910_MetadataUsageId;
extern const uint32_t Kidoz_getIsRewardedLoaded_m823535853_MetadataUsageId;
extern const uint32_t Kidoz_loadBanner_m2041608241_MetadataUsageId;
extern const uint32_t Kidoz_setBannerPosition_m4190490890_MetadataUsageId;
extern const uint32_t Kidoz_showBanner_m2848009697_MetadataUsageId;
extern const uint32_t Kidoz_hideBanner_m3541404739_MetadataUsageId;
extern const uint32_t Kidoz_printToastMessage_m2924981649_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3134296422_RuntimeMethod_var;
extern const uint32_t Kidoz_initSuccessCallback_m2972300024_MetadataUsageId;
extern const uint32_t Kidoz_initErrorCallback_m3453313057_MetadataUsageId;
extern const uint32_t Kidoz_panelExpandCallBack_m1651733835_MetadataUsageId;
extern const uint32_t Kidoz_panelCollapseCallBack_m1129327842_MetadataUsageId;
extern const uint32_t Kidoz_panelReadyCallBack_m64930788_MetadataUsageId;
extern const uint32_t Kidoz_bannerReadyCallBack_m111868821_MetadataUsageId;
extern const uint32_t Kidoz_bannerCloseCallBack_m2371710680_MetadataUsageId;
extern const uint32_t Kidoz_bannerErrorCallBack_m2051249016_MetadataUsageId;
extern const uint32_t Kidoz_bannerNoOffersCallBack_m1073320303_MetadataUsageId;
extern const uint32_t Kidoz_playerOpenCallBack_m2156660757_MetadataUsageId;
extern const uint32_t Kidoz_playerCloseCallBack_m1335704981_MetadataUsageId;
extern const uint32_t Kidoz_interstitialOpenCallBack_m2691113914_MetadataUsageId;
extern const uint32_t Kidoz_interstitialCloseCallBack_m1810653962_MetadataUsageId;
extern const uint32_t Kidoz_interstitialReadyCallBack_m3499334011_MetadataUsageId;
extern const uint32_t Kidoz_interstitialOnLoadFailCallBack_m3741553019_MetadataUsageId;
extern const uint32_t Kidoz_interstitialOnNoOffersCallBack_m192335511_MetadataUsageId;
extern const uint32_t Kidoz_onRewardedCallBack_m2381449569_MetadataUsageId;
extern const uint32_t Kidoz_onRewardedVideoStartedCallBack_m1560585493_MetadataUsageId;
extern const uint32_t Kidoz_rewardedOpenCallBack_m3765685344_MetadataUsageId;
extern const uint32_t Kidoz_rewardedCloseCallBack_m3926506242_MetadataUsageId;
extern const uint32_t Kidoz_rewardedReadyCallBack_m4059712915_MetadataUsageId;
extern const uint32_t Kidoz_rewardedOnLoadFailCallBack_m3864742449_MetadataUsageId;
extern const uint32_t Kidoz_rewardedOnNoOffersCallBack_m54783518_MetadataUsageId;
extern const uint32_t Kidoz__cctor_m1766167034_MetadataUsageId;
extern const RuntimeMethod* SampleCode_onKidozInitSuccess_m1413140531_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m838414602_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_onKidozInitError_m2073814564_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_interstitialOpen_m41864119_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_interstitialClose_m2639569610_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_interstitialReady_m393494749_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_interstitialOnLoadFail_m3823088456_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_interstitialOnNoOffers_m1288932714_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_onRewardedDone_m3781073165_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_onRewardedVideoStarted_m1168296053_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_rewardedOpen_m1495261806_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_rewardedClose_m2319131317_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_rewardedReady_m1871158888_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_rewardedOnLoadFail_m1290768232_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_rewardedOnNoOffers_m2749769322_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_bannerReady_m1759568857_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_bannerClose_m648104984_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_bannerError_m1853491568_RuntimeMethod_var;
extern const RuntimeMethod* SampleCode_bannerNoOffers_m3388199898_RuntimeMethod_var;
extern const uint32_t SampleCode_Start_m281046372_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3923320070;
extern String_t* _stringLiteral3819818061;
extern String_t* _stringLiteral177218028;
extern String_t* _stringLiteral1565308445;
extern String_t* _stringLiteral1607448010;
extern String_t* _stringLiteral1090184194;
extern String_t* _stringLiteral2586434928;
extern String_t* _stringLiteral1940612472;
extern String_t* _stringLiteral3316491503;
extern String_t* _stringLiteral2788130927;
extern String_t* _stringLiteral3963361804;
extern String_t* _stringLiteral2086937696;
extern String_t* _stringLiteral3716746008;
extern const uint32_t SampleCode_OnGUI_m1769651039_MetadataUsageId;
extern String_t* _stringLiteral4163693862;
extern String_t* _stringLiteral3801605711;
extern const uint32_t SampleCode_onKidozInitSuccess_m1413140531_MetadataUsageId;
extern String_t* _stringLiteral1786953989;
extern String_t* _stringLiteral2634535605;
extern const uint32_t SampleCode_onKidozInitError_m2073814564_MetadataUsageId;
extern String_t* _stringLiteral411943973;
extern const uint32_t SampleCode_panelExpand_m4080153800_MetadataUsageId;
extern String_t* _stringLiteral2072346691;
extern const uint32_t SampleCode_panelCollapse_m448453814_MetadataUsageId;
extern String_t* _stringLiteral181993062;
extern const uint32_t SampleCode_panelReady_m1727193656_MetadataUsageId;
extern String_t* _stringLiteral2681974248;
extern const uint32_t SampleCode_playerOpen_m3703786789_MetadataUsageId;
extern String_t* _stringLiteral3573343083;
extern const uint32_t SampleCode_playerClose_m3971267206_MetadataUsageId;
extern String_t* _stringLiteral1254337026;
extern const uint32_t SampleCode_interstitialOpen_m41864119_MetadataUsageId;
extern String_t* _stringLiteral1502702345;
extern const uint32_t SampleCode_interstitialClose_m2639569610_MetadataUsageId;
extern String_t* _stringLiteral3539090111;
extern const uint32_t SampleCode_interstitialReady_m393494749_MetadataUsageId;
extern String_t* _stringLiteral4177012791;
extern String_t* _stringLiteral3319464334;
extern const uint32_t SampleCode_interstitialOnLoadFail_m3823088456_MetadataUsageId;
extern String_t* _stringLiteral3813179450;
extern String_t* _stringLiteral1553290037;
extern const uint32_t SampleCode_interstitialOnNoOffers_m1288932714_MetadataUsageId;
extern String_t* _stringLiteral1972472333;
extern String_t* _stringLiteral2877496069;
extern const uint32_t SampleCode_onRewardedDone_m3781073165_MetadataUsageId;
extern String_t* _stringLiteral2235470434;
extern String_t* _stringLiteral630883103;
extern const uint32_t SampleCode_onRewardedVideoStarted_m1168296053_MetadataUsageId;
extern String_t* _stringLiteral2284309849;
extern const uint32_t SampleCode_rewardedOpen_m1495261806_MetadataUsageId;
extern String_t* _stringLiteral373272912;
extern const uint32_t SampleCode_rewardedClose_m2319131317_MetadataUsageId;
extern String_t* _stringLiteral1876484484;
extern const uint32_t SampleCode_rewardedReady_m1871158888_MetadataUsageId;
extern String_t* _stringLiteral2512653941;
extern const uint32_t SampleCode_rewardedOnLoadFail_m1290768232_MetadataUsageId;
extern String_t* _stringLiteral2449932588;
extern const uint32_t SampleCode_rewardedOnNoOffers_m2749769322_MetadataUsageId;
extern String_t* _stringLiteral1378816125;
extern const uint32_t SampleCode_bannerReady_m1759568857_MetadataUsageId;
extern String_t* _stringLiteral3600653270;
extern const uint32_t SampleCode_bannerClose_m648104984_MetadataUsageId;
extern String_t* _stringLiteral1275534620;
extern const uint32_t SampleCode_bannerError_m1853491568_MetadataUsageId;
extern String_t* _stringLiteral3146367320;
extern const uint32_t SampleCode_bannerNoOffers_m3388199898_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745543_H
#define U3CMODULEU3E_T692745543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745543 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745543_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef KIDOZIOSINTERFACE_T3673191750_H
#define KIDOZIOSINTERFACE_T3673191750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KIDOZiOSInterface.KIDOZiOSInterface
struct  KIDOZiOSInterface_t3673191750  : public RuntimeObject
{
public:

public:
};

struct KIDOZiOSInterface_t3673191750_StaticFields
{
public:
	// KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage KIDOZiOSInterface.KIDOZiOSInterface::<>f__mg$cache0
	DelegateMessage_t368983736 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(KIDOZiOSInterface_t3673191750_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline DelegateMessage_t368983736 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline DelegateMessage_t368983736 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(DelegateMessage_t368983736 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KIDOZIOSINTERFACE_T3673191750_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef KIDOZDUMMYINTERFACE_T1497704720_H
#define KIDOZDUMMYINTERFACE_T1497704720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KIDOZDummyInterface.KIDOZDummyInterface
struct  KIDOZDummyInterface_t1497704720  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KIDOZDUMMYINTERFACE_T1497704720_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BANNER_POSITION_T604968690_H
#define BANNER_POSITION_T604968690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KidozSDK.Kidoz/BANNER_POSITION
struct  BANNER_POSITION_t604968690 
{
public:
	// System.Int32 KidozSDK.Kidoz/BANNER_POSITION::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BANNER_POSITION_t604968690, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BANNER_POSITION_T604968690_H
#ifndef HANDLE_POSITION_T4134443312_H
#define HANDLE_POSITION_T4134443312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KidozSDK.Kidoz/HANDLE_POSITION
struct  HANDLE_POSITION_t4134443312 
{
public:
	// System.Int32 KidozSDK.Kidoz/HANDLE_POSITION::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HANDLE_POSITION_t4134443312, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLE_POSITION_T4134443312_H
#ifndef INTERSTITIAL_AD_MODE_T2391579079_H
#define INTERSTITIAL_AD_MODE_T2391579079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KidozSDK.Kidoz/INTERSTITIAL_AD_MODE
struct  INTERSTITIAL_AD_MODE_t2391579079 
{
public:
	// System.Int32 KidozSDK.Kidoz/INTERSTITIAL_AD_MODE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(INTERSTITIAL_AD_MODE_t2391579079, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERSTITIAL_AD_MODE_T2391579079_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef PANEL_TYPE_T1371009539_H
#define PANEL_TYPE_T1371009539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KidozSDK.Kidoz/PANEL_TYPE
struct  PANEL_TYPE_t1371009539 
{
public:
	// System.Int32 KidozSDK.Kidoz/PANEL_TYPE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PANEL_TYPE_t1371009539, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANEL_TYPE_T1371009539_H
#ifndef KIDOZSDKEVENTS_T735592306_H
#define KIDOZSDKEVENTS_T735592306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KIDOZiOSInterface.KIDOZiOSInterface/KidozSDKEvents
struct  KidozSDKEvents_t735592306 
{
public:
	// System.Int32 KIDOZiOSInterface.KIDOZiOSInterface/KidozSDKEvents::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KidozSDKEvents_t735592306, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KIDOZSDKEVENTS_T735592306_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef DELEGATEMESSAGE_T368983736_H
#define DELEGATEMESSAGE_T368983736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage
struct  DelegateMessage_t368983736  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEMESSAGE_T368983736_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef GUISKIN_T1244372282_H
#define GUISKIN_T1244372282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1244372282  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1956802104 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t3956901511 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t3956901511 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t3956901511 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t3956901511 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t3956901511 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t3956901511 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t3956901511 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t3956901511 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t3956901511 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t3956901511 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t3956901511 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t3956901511 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t3956901511 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t3956901511 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t3956901511 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t3956901511 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2383250302* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1774757634 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3742157810 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Font_2)); }
	inline Font_t1956802104 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t1956802104 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t1956802104 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_box_3)); }
	inline GUIStyle_t3956901511 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t3956901511 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t3956901511 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_button_4)); }
	inline GUIStyle_t3956901511 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t3956901511 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t3956901511 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_toggle_5)); }
	inline GUIStyle_t3956901511 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t3956901511 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_label_6)); }
	inline GUIStyle_t3956901511 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t3956901511 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t3956901511 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textField_7)); }
	inline GUIStyle_t3956901511 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t3956901511 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textArea_8)); }
	inline GUIStyle_t3956901511 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t3956901511 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_window_9)); }
	inline GUIStyle_t3956901511 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t3956901511 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t3956901511 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSlider_10)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSlider_12)); }
	inline GUIStyle_t3956901511 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t3956901511 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t3956901511 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t3956901511 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_ScrollView_22)); }
	inline GUIStyle_t3956901511 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t3956901511 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t3956901511 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t2383250302* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t2383250302** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t2383250302* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Settings_24)); }
	inline GUISettings_t1774757634 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t1774757634 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t1774757634 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Styles_26)); }
	inline Dictionary_2_t3742157810 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t3742157810 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t3742157810 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t1244372282_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t3956901511 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1143955295 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1244372282 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t3956901511 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t3956901511 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t3956901511 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t1143955295 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t1143955295 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t1143955295 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___current_28)); }
	inline GUISkin_t1244372282 * get_current_28() const { return ___current_28; }
	inline GUISkin_t1244372282 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t1244372282 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1244372282_H
#ifndef ACTION_1_T2019918284_H
#define ACTION_1_T2019918284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t2019918284  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2019918284_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef KIDOZ_T3183170329_H
#define KIDOZ_T3183170329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KidozSDK.Kidoz
struct  Kidoz_t3183170329  : public MonoBehaviour_t3962482529
{
public:
	// System.String KidozSDK.Kidoz::PublisherID
	String_t* ___PublisherID_29;
	// System.String KidozSDK.Kidoz::SecurityToken
	String_t* ___SecurityToken_30;

public:
	inline static int32_t get_offset_of_PublisherID_29() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329, ___PublisherID_29)); }
	inline String_t* get_PublisherID_29() const { return ___PublisherID_29; }
	inline String_t** get_address_of_PublisherID_29() { return &___PublisherID_29; }
	inline void set_PublisherID_29(String_t* value)
	{
		___PublisherID_29 = value;
		Il2CppCodeGenWriteBarrier((&___PublisherID_29), value);
	}

	inline static int32_t get_offset_of_SecurityToken_30() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329, ___SecurityToken_30)); }
	inline String_t* get_SecurityToken_30() const { return ___SecurityToken_30; }
	inline String_t** get_address_of_SecurityToken_30() { return &___SecurityToken_30; }
	inline void set_SecurityToken_30(String_t* value)
	{
		___SecurityToken_30 = value;
		Il2CppCodeGenWriteBarrier((&___SecurityToken_30), value);
	}
};

struct Kidoz_t3183170329_StaticFields
{
public:
	// System.Action`1<System.String> KidozSDK.Kidoz::initSuccess
	Action_1_t2019918284 * ___initSuccess_4;
	// System.Action`1<System.String> KidozSDK.Kidoz::initError
	Action_1_t2019918284 * ___initError_5;
	// System.Action`1<System.String> KidozSDK.Kidoz::panelExpand
	Action_1_t2019918284 * ___panelExpand_6;
	// System.Action`1<System.String> KidozSDK.Kidoz::panelCollapse
	Action_1_t2019918284 * ___panelCollapse_7;
	// System.Action`1<System.String> KidozSDK.Kidoz::panelReady
	Action_1_t2019918284 * ___panelReady_8;
	// System.Action`1<System.String> KidozSDK.Kidoz::bannerContentLoaded
	Action_1_t2019918284 * ___bannerContentLoaded_9;
	// System.Action`1<System.String> KidozSDK.Kidoz::bannerContentLoadFailed
	Action_1_t2019918284 * ___bannerContentLoadFailed_10;
	// System.Action`1<System.String> KidozSDK.Kidoz::playerOpen
	Action_1_t2019918284 * ___playerOpen_11;
	// System.Action`1<System.String> KidozSDK.Kidoz::playerClose
	Action_1_t2019918284 * ___playerClose_12;
	// System.Action`1<System.String> KidozSDK.Kidoz::interstitialOpen
	Action_1_t2019918284 * ___interstitialOpen_13;
	// System.Action`1<System.String> KidozSDK.Kidoz::interstitialClose
	Action_1_t2019918284 * ___interstitialClose_14;
	// System.Action`1<System.String> KidozSDK.Kidoz::interstitialReady
	Action_1_t2019918284 * ___interstitialReady_15;
	// System.Action`1<System.String> KidozSDK.Kidoz::interstitialOnLoadFail
	Action_1_t2019918284 * ___interstitialOnLoadFail_16;
	// System.Action`1<System.String> KidozSDK.Kidoz::interstitialOnNoOffers
	Action_1_t2019918284 * ___interstitialOnNoOffers_17;
	// System.Action`1<System.String> KidozSDK.Kidoz::onRewardedDone
	Action_1_t2019918284 * ___onRewardedDone_18;
	// System.Action`1<System.String> KidozSDK.Kidoz::onRewardedVideoStarted
	Action_1_t2019918284 * ___onRewardedVideoStarted_19;
	// System.Action`1<System.String> KidozSDK.Kidoz::rewardedOpen
	Action_1_t2019918284 * ___rewardedOpen_20;
	// System.Action`1<System.String> KidozSDK.Kidoz::rewardedClose
	Action_1_t2019918284 * ___rewardedClose_21;
	// System.Action`1<System.String> KidozSDK.Kidoz::rewardedReady
	Action_1_t2019918284 * ___rewardedReady_22;
	// System.Action`1<System.String> KidozSDK.Kidoz::rewardedOnLoadFail
	Action_1_t2019918284 * ___rewardedOnLoadFail_23;
	// System.Action`1<System.String> KidozSDK.Kidoz::rewardedOnNoOffers
	Action_1_t2019918284 * ___rewardedOnNoOffers_24;
	// System.Action`1<System.String> KidozSDK.Kidoz::bannerReady
	Action_1_t2019918284 * ___bannerReady_25;
	// System.Action`1<System.String> KidozSDK.Kidoz::bannerClose
	Action_1_t2019918284 * ___bannerClose_26;
	// System.Action`1<System.String> KidozSDK.Kidoz::bannerError
	Action_1_t2019918284 * ___bannerError_27;
	// System.Action`1<System.String> KidozSDK.Kidoz::bannerNoOffers
	Action_1_t2019918284 * ___bannerNoOffers_28;
	// System.Boolean KidozSDK.Kidoz::initFlag
	bool ___initFlag_31;
	// System.Boolean KidozSDK.Kidoz::mPause
	bool ___mPause_32;
	// KIDOZiOSInterface.KIDOZiOSInterface KidozSDK.Kidoz::kidozin
	KIDOZiOSInterface_t3673191750 * ___kidozin_33;
	// KidozSDK.Kidoz KidozSDK.Kidoz::instance
	Kidoz_t3183170329 * ___instance_35;

public:
	inline static int32_t get_offset_of_initSuccess_4() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___initSuccess_4)); }
	inline Action_1_t2019918284 * get_initSuccess_4() const { return ___initSuccess_4; }
	inline Action_1_t2019918284 ** get_address_of_initSuccess_4() { return &___initSuccess_4; }
	inline void set_initSuccess_4(Action_1_t2019918284 * value)
	{
		___initSuccess_4 = value;
		Il2CppCodeGenWriteBarrier((&___initSuccess_4), value);
	}

	inline static int32_t get_offset_of_initError_5() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___initError_5)); }
	inline Action_1_t2019918284 * get_initError_5() const { return ___initError_5; }
	inline Action_1_t2019918284 ** get_address_of_initError_5() { return &___initError_5; }
	inline void set_initError_5(Action_1_t2019918284 * value)
	{
		___initError_5 = value;
		Il2CppCodeGenWriteBarrier((&___initError_5), value);
	}

	inline static int32_t get_offset_of_panelExpand_6() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___panelExpand_6)); }
	inline Action_1_t2019918284 * get_panelExpand_6() const { return ___panelExpand_6; }
	inline Action_1_t2019918284 ** get_address_of_panelExpand_6() { return &___panelExpand_6; }
	inline void set_panelExpand_6(Action_1_t2019918284 * value)
	{
		___panelExpand_6 = value;
		Il2CppCodeGenWriteBarrier((&___panelExpand_6), value);
	}

	inline static int32_t get_offset_of_panelCollapse_7() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___panelCollapse_7)); }
	inline Action_1_t2019918284 * get_panelCollapse_7() const { return ___panelCollapse_7; }
	inline Action_1_t2019918284 ** get_address_of_panelCollapse_7() { return &___panelCollapse_7; }
	inline void set_panelCollapse_7(Action_1_t2019918284 * value)
	{
		___panelCollapse_7 = value;
		Il2CppCodeGenWriteBarrier((&___panelCollapse_7), value);
	}

	inline static int32_t get_offset_of_panelReady_8() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___panelReady_8)); }
	inline Action_1_t2019918284 * get_panelReady_8() const { return ___panelReady_8; }
	inline Action_1_t2019918284 ** get_address_of_panelReady_8() { return &___panelReady_8; }
	inline void set_panelReady_8(Action_1_t2019918284 * value)
	{
		___panelReady_8 = value;
		Il2CppCodeGenWriteBarrier((&___panelReady_8), value);
	}

	inline static int32_t get_offset_of_bannerContentLoaded_9() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___bannerContentLoaded_9)); }
	inline Action_1_t2019918284 * get_bannerContentLoaded_9() const { return ___bannerContentLoaded_9; }
	inline Action_1_t2019918284 ** get_address_of_bannerContentLoaded_9() { return &___bannerContentLoaded_9; }
	inline void set_bannerContentLoaded_9(Action_1_t2019918284 * value)
	{
		___bannerContentLoaded_9 = value;
		Il2CppCodeGenWriteBarrier((&___bannerContentLoaded_9), value);
	}

	inline static int32_t get_offset_of_bannerContentLoadFailed_10() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___bannerContentLoadFailed_10)); }
	inline Action_1_t2019918284 * get_bannerContentLoadFailed_10() const { return ___bannerContentLoadFailed_10; }
	inline Action_1_t2019918284 ** get_address_of_bannerContentLoadFailed_10() { return &___bannerContentLoadFailed_10; }
	inline void set_bannerContentLoadFailed_10(Action_1_t2019918284 * value)
	{
		___bannerContentLoadFailed_10 = value;
		Il2CppCodeGenWriteBarrier((&___bannerContentLoadFailed_10), value);
	}

	inline static int32_t get_offset_of_playerOpen_11() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___playerOpen_11)); }
	inline Action_1_t2019918284 * get_playerOpen_11() const { return ___playerOpen_11; }
	inline Action_1_t2019918284 ** get_address_of_playerOpen_11() { return &___playerOpen_11; }
	inline void set_playerOpen_11(Action_1_t2019918284 * value)
	{
		___playerOpen_11 = value;
		Il2CppCodeGenWriteBarrier((&___playerOpen_11), value);
	}

	inline static int32_t get_offset_of_playerClose_12() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___playerClose_12)); }
	inline Action_1_t2019918284 * get_playerClose_12() const { return ___playerClose_12; }
	inline Action_1_t2019918284 ** get_address_of_playerClose_12() { return &___playerClose_12; }
	inline void set_playerClose_12(Action_1_t2019918284 * value)
	{
		___playerClose_12 = value;
		Il2CppCodeGenWriteBarrier((&___playerClose_12), value);
	}

	inline static int32_t get_offset_of_interstitialOpen_13() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___interstitialOpen_13)); }
	inline Action_1_t2019918284 * get_interstitialOpen_13() const { return ___interstitialOpen_13; }
	inline Action_1_t2019918284 ** get_address_of_interstitialOpen_13() { return &___interstitialOpen_13; }
	inline void set_interstitialOpen_13(Action_1_t2019918284 * value)
	{
		___interstitialOpen_13 = value;
		Il2CppCodeGenWriteBarrier((&___interstitialOpen_13), value);
	}

	inline static int32_t get_offset_of_interstitialClose_14() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___interstitialClose_14)); }
	inline Action_1_t2019918284 * get_interstitialClose_14() const { return ___interstitialClose_14; }
	inline Action_1_t2019918284 ** get_address_of_interstitialClose_14() { return &___interstitialClose_14; }
	inline void set_interstitialClose_14(Action_1_t2019918284 * value)
	{
		___interstitialClose_14 = value;
		Il2CppCodeGenWriteBarrier((&___interstitialClose_14), value);
	}

	inline static int32_t get_offset_of_interstitialReady_15() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___interstitialReady_15)); }
	inline Action_1_t2019918284 * get_interstitialReady_15() const { return ___interstitialReady_15; }
	inline Action_1_t2019918284 ** get_address_of_interstitialReady_15() { return &___interstitialReady_15; }
	inline void set_interstitialReady_15(Action_1_t2019918284 * value)
	{
		___interstitialReady_15 = value;
		Il2CppCodeGenWriteBarrier((&___interstitialReady_15), value);
	}

	inline static int32_t get_offset_of_interstitialOnLoadFail_16() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___interstitialOnLoadFail_16)); }
	inline Action_1_t2019918284 * get_interstitialOnLoadFail_16() const { return ___interstitialOnLoadFail_16; }
	inline Action_1_t2019918284 ** get_address_of_interstitialOnLoadFail_16() { return &___interstitialOnLoadFail_16; }
	inline void set_interstitialOnLoadFail_16(Action_1_t2019918284 * value)
	{
		___interstitialOnLoadFail_16 = value;
		Il2CppCodeGenWriteBarrier((&___interstitialOnLoadFail_16), value);
	}

	inline static int32_t get_offset_of_interstitialOnNoOffers_17() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___interstitialOnNoOffers_17)); }
	inline Action_1_t2019918284 * get_interstitialOnNoOffers_17() const { return ___interstitialOnNoOffers_17; }
	inline Action_1_t2019918284 ** get_address_of_interstitialOnNoOffers_17() { return &___interstitialOnNoOffers_17; }
	inline void set_interstitialOnNoOffers_17(Action_1_t2019918284 * value)
	{
		___interstitialOnNoOffers_17 = value;
		Il2CppCodeGenWriteBarrier((&___interstitialOnNoOffers_17), value);
	}

	inline static int32_t get_offset_of_onRewardedDone_18() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___onRewardedDone_18)); }
	inline Action_1_t2019918284 * get_onRewardedDone_18() const { return ___onRewardedDone_18; }
	inline Action_1_t2019918284 ** get_address_of_onRewardedDone_18() { return &___onRewardedDone_18; }
	inline void set_onRewardedDone_18(Action_1_t2019918284 * value)
	{
		___onRewardedDone_18 = value;
		Il2CppCodeGenWriteBarrier((&___onRewardedDone_18), value);
	}

	inline static int32_t get_offset_of_onRewardedVideoStarted_19() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___onRewardedVideoStarted_19)); }
	inline Action_1_t2019918284 * get_onRewardedVideoStarted_19() const { return ___onRewardedVideoStarted_19; }
	inline Action_1_t2019918284 ** get_address_of_onRewardedVideoStarted_19() { return &___onRewardedVideoStarted_19; }
	inline void set_onRewardedVideoStarted_19(Action_1_t2019918284 * value)
	{
		___onRewardedVideoStarted_19 = value;
		Il2CppCodeGenWriteBarrier((&___onRewardedVideoStarted_19), value);
	}

	inline static int32_t get_offset_of_rewardedOpen_20() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___rewardedOpen_20)); }
	inline Action_1_t2019918284 * get_rewardedOpen_20() const { return ___rewardedOpen_20; }
	inline Action_1_t2019918284 ** get_address_of_rewardedOpen_20() { return &___rewardedOpen_20; }
	inline void set_rewardedOpen_20(Action_1_t2019918284 * value)
	{
		___rewardedOpen_20 = value;
		Il2CppCodeGenWriteBarrier((&___rewardedOpen_20), value);
	}

	inline static int32_t get_offset_of_rewardedClose_21() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___rewardedClose_21)); }
	inline Action_1_t2019918284 * get_rewardedClose_21() const { return ___rewardedClose_21; }
	inline Action_1_t2019918284 ** get_address_of_rewardedClose_21() { return &___rewardedClose_21; }
	inline void set_rewardedClose_21(Action_1_t2019918284 * value)
	{
		___rewardedClose_21 = value;
		Il2CppCodeGenWriteBarrier((&___rewardedClose_21), value);
	}

	inline static int32_t get_offset_of_rewardedReady_22() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___rewardedReady_22)); }
	inline Action_1_t2019918284 * get_rewardedReady_22() const { return ___rewardedReady_22; }
	inline Action_1_t2019918284 ** get_address_of_rewardedReady_22() { return &___rewardedReady_22; }
	inline void set_rewardedReady_22(Action_1_t2019918284 * value)
	{
		___rewardedReady_22 = value;
		Il2CppCodeGenWriteBarrier((&___rewardedReady_22), value);
	}

	inline static int32_t get_offset_of_rewardedOnLoadFail_23() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___rewardedOnLoadFail_23)); }
	inline Action_1_t2019918284 * get_rewardedOnLoadFail_23() const { return ___rewardedOnLoadFail_23; }
	inline Action_1_t2019918284 ** get_address_of_rewardedOnLoadFail_23() { return &___rewardedOnLoadFail_23; }
	inline void set_rewardedOnLoadFail_23(Action_1_t2019918284 * value)
	{
		___rewardedOnLoadFail_23 = value;
		Il2CppCodeGenWriteBarrier((&___rewardedOnLoadFail_23), value);
	}

	inline static int32_t get_offset_of_rewardedOnNoOffers_24() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___rewardedOnNoOffers_24)); }
	inline Action_1_t2019918284 * get_rewardedOnNoOffers_24() const { return ___rewardedOnNoOffers_24; }
	inline Action_1_t2019918284 ** get_address_of_rewardedOnNoOffers_24() { return &___rewardedOnNoOffers_24; }
	inline void set_rewardedOnNoOffers_24(Action_1_t2019918284 * value)
	{
		___rewardedOnNoOffers_24 = value;
		Il2CppCodeGenWriteBarrier((&___rewardedOnNoOffers_24), value);
	}

	inline static int32_t get_offset_of_bannerReady_25() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___bannerReady_25)); }
	inline Action_1_t2019918284 * get_bannerReady_25() const { return ___bannerReady_25; }
	inline Action_1_t2019918284 ** get_address_of_bannerReady_25() { return &___bannerReady_25; }
	inline void set_bannerReady_25(Action_1_t2019918284 * value)
	{
		___bannerReady_25 = value;
		Il2CppCodeGenWriteBarrier((&___bannerReady_25), value);
	}

	inline static int32_t get_offset_of_bannerClose_26() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___bannerClose_26)); }
	inline Action_1_t2019918284 * get_bannerClose_26() const { return ___bannerClose_26; }
	inline Action_1_t2019918284 ** get_address_of_bannerClose_26() { return &___bannerClose_26; }
	inline void set_bannerClose_26(Action_1_t2019918284 * value)
	{
		___bannerClose_26 = value;
		Il2CppCodeGenWriteBarrier((&___bannerClose_26), value);
	}

	inline static int32_t get_offset_of_bannerError_27() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___bannerError_27)); }
	inline Action_1_t2019918284 * get_bannerError_27() const { return ___bannerError_27; }
	inline Action_1_t2019918284 ** get_address_of_bannerError_27() { return &___bannerError_27; }
	inline void set_bannerError_27(Action_1_t2019918284 * value)
	{
		___bannerError_27 = value;
		Il2CppCodeGenWriteBarrier((&___bannerError_27), value);
	}

	inline static int32_t get_offset_of_bannerNoOffers_28() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___bannerNoOffers_28)); }
	inline Action_1_t2019918284 * get_bannerNoOffers_28() const { return ___bannerNoOffers_28; }
	inline Action_1_t2019918284 ** get_address_of_bannerNoOffers_28() { return &___bannerNoOffers_28; }
	inline void set_bannerNoOffers_28(Action_1_t2019918284 * value)
	{
		___bannerNoOffers_28 = value;
		Il2CppCodeGenWriteBarrier((&___bannerNoOffers_28), value);
	}

	inline static int32_t get_offset_of_initFlag_31() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___initFlag_31)); }
	inline bool get_initFlag_31() const { return ___initFlag_31; }
	inline bool* get_address_of_initFlag_31() { return &___initFlag_31; }
	inline void set_initFlag_31(bool value)
	{
		___initFlag_31 = value;
	}

	inline static int32_t get_offset_of_mPause_32() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___mPause_32)); }
	inline bool get_mPause_32() const { return ___mPause_32; }
	inline bool* get_address_of_mPause_32() { return &___mPause_32; }
	inline void set_mPause_32(bool value)
	{
		___mPause_32 = value;
	}

	inline static int32_t get_offset_of_kidozin_33() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___kidozin_33)); }
	inline KIDOZiOSInterface_t3673191750 * get_kidozin_33() const { return ___kidozin_33; }
	inline KIDOZiOSInterface_t3673191750 ** get_address_of_kidozin_33() { return &___kidozin_33; }
	inline void set_kidozin_33(KIDOZiOSInterface_t3673191750 * value)
	{
		___kidozin_33 = value;
		Il2CppCodeGenWriteBarrier((&___kidozin_33), value);
	}

	inline static int32_t get_offset_of_instance_35() { return static_cast<int32_t>(offsetof(Kidoz_t3183170329_StaticFields, ___instance_35)); }
	inline Kidoz_t3183170329 * get_instance_35() const { return ___instance_35; }
	inline Kidoz_t3183170329 ** get_address_of_instance_35() { return &___instance_35; }
	inline void set_instance_35(Kidoz_t3183170329 * value)
	{
		___instance_35 = value;
		Il2CppCodeGenWriteBarrier((&___instance_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KIDOZ_T3183170329_H
#ifndef SAMPLECODE_T929735280_H
#define SAMPLECODE_T929735280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SampleCode
struct  SampleCode_t929735280  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button SampleCode::mButton
	Button_t4055032469 * ___mButton_2;

public:
	inline static int32_t get_offset_of_mButton_2() { return static_cast<int32_t>(offsetof(SampleCode_t929735280, ___mButton_2)); }
	inline Button_t4055032469 * get_mButton_2() const { return ___mButton_2; }
	inline Button_t4055032469 ** get_address_of_mButton_2() { return &___mButton_2; }
	inline void set_mButton_2(Button_t4055032469 * value)
	{
		___mButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___mButton_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLECODE_T929735280_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::DebugLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_DebugLog_m2430911715 (KIDOZDummyInterface_t1497704720 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::delegateMessageReceived(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_delegateMessageReceived_m2963591789 (RuntimeObject * __this /* static, unused */, int32_t ___number0, const RuntimeMethod* method);
// KidozSDK.Kidoz KidozSDK.Kidoz::get_Instance()
extern "C" IL2CPP_METHOD_ATTR Kidoz_t3183170329 * Kidoz_get_Instance_m2698996040 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::initSuccessCallback(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_initSuccessCallback_m2972300024 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::initErrorCallback(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_initErrorCallback_m3453313057 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::interstitialReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialReadyCallBack_m3499334011 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::interstitialOpenCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialOpenCallBack_m2691113914 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::interstitialCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialCloseCallBack_m1810653962 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::interstitialOnNoOffersCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialOnNoOffersCallBack_m192335511 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::interstitialOnLoadFailCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialOnLoadFailCallBack_m3741553019 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::rewardedReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedReadyCallBack_m4059712915 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::rewardedOpenCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedOpenCallBack_m3765685344 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::rewardedCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedCloseCallBack_m3926506242 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::rewardedOnNoOffersCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedOnNoOffersCallBack_m54783518 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::rewardedOnLoadFailCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedOnLoadFailCallBack_m3864742449 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::onRewardedVideoStartedCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_onRewardedVideoStartedCallBack_m1560585493 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::onRewardedCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_onRewardedCallBack_m2381449569 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::bannerReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerReadyCallBack_m111868821 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::bannerCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerCloseCallBack_m2371710680 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::bannerErrorCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerErrorCallBack_m2051249016 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::bannerNoOffersCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerNoOffersCallBack_m1073320303 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::KidozIsInitialised()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_KidozIsInitialised_m3385784119 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateMessage__ctor_m3110971909 (DelegateMessage_t368983736 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozInit(System.String,System.String,KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozInit_m1901670196 (RuntimeObject * __this /* static, unused */, String_t* ___developerID0, String_t* ___securityToken1, DelegateMessage_t368983736 * ___callback2, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLoadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLoadInterstitialAd_m3283627506 (RuntimeObject * __this /* static, unused */, bool ___autoShow0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozShowInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozShowInterstitial_m343537278 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::KidozGetIsInterstitialLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_KidozGetIsInterstitialLoaded_m1447354865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLoadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLoadRewardedAd_m425610248 (RuntimeObject * __this /* static, unused */, bool ___autoShow0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozShowRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozShowRewarded_m26175347 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::KidozGetRewardedLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_KidozGetRewardedLoaded_m604497905 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozSetBannerPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozSetBannerPosition_m4178996244 (RuntimeObject * __this /* static, unused */, int32_t ___position0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLoadBannerAd(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLoadBannerAd_m4009214912 (RuntimeObject * __this /* static, unused */, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozShowBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozShowBanner_m1624365053 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozHideBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozHideBanner_m1851455153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLog_m1440122994 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DelegateMessage_Invoke_m1200554103 (DelegateMessage_t368983736 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// KidozSDK.Kidoz KidozSDK.Kidoz::Create()
extern "C" IL2CPP_METHOD_ATTR Kidoz_t3183170329 * Kidoz_Create_m2462817466 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::SetInstance(KidozSDK.Kidoz)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_SetInstance_m1655708658 (RuntimeObject * __this /* static, unused */, Kidoz_t3183170329 * ____instance0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::init(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_init_m1343812556 (RuntimeObject * __this /* static, unused */, String_t* ___developerID0, String_t* ___securityToken1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<KidozSDK.Kidoz>()
#define GameObject_AddComponent_TisKidoz_t3183170329_m793903245(__this, method) ((  Kidoz_t3183170329 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::init(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_init_m2800452284 (KIDOZiOSInterface_t3673191750 * __this, String_t* ___developerID0, String_t* ___securityToken1, const RuntimeMethod* method);
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::isInitialised()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_isInitialised_m3506064159 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::testFunction()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_testFunction_m97004479 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::addPanelToView(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_addPanelToView_m4162164133 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___panelType0, int32_t ___handle_position1, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::changePanelVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_changePanelVisibility_m783231648 (KIDOZiOSInterface_t3673191750 * __this, bool ___visible0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::expandPanelView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_expandPanelView_m4235713180 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::collapsePanelView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_collapsePanelView_m2537018712 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::setPanelViewColor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_setPanelViewColor_m613840548 (KIDOZiOSInterface_t3673191750 * __this, String_t* ___color0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::loadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_loadInterstitialAd_m2940525770 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::loadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_loadRewardedAd_m510336838 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::generateInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_generateInterstitial_m4123661385 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::generateRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_generateRewarded_m4249720907 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showInterstitial_m1670230380 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showRewarded_m2257084059 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::getIsInterstitialLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_getIsInterstitialLoaded_m3333547484 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::getIsRewardedLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_getIsRewardedLoaded_m1643944465 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::loadBanner(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_loadBanner_m1533052094 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::setBannerPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_setBannerPosition_m3348290403 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___position0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showBanner_m959965456 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::hideBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_hideBanner_m3982433510 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::logMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_logMessage_m3276393959 (KIDOZiOSInterface_t3673191750 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
#define Action_1_Invoke_m3134296422(__this, p0, method) ((  void (*) (Action_1_t2019918284 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_set_pause_m2425921647 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::.ctor()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface__ctor_m2818200753 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::SetiOSAppPauseOnBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_SetiOSAppPauseOnBackground_m3432440863 (RuntimeObject * __this /* static, unused */, bool ___pause0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m838414602(__this, p0, p1, method) ((  void (*) (Action_1_t2019918284 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void KidozSDK.Kidoz::add_initSuccess(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_initSuccess_m2165230954 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_initError(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_initError_m2622338913 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_interstitialOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialOpen_m101925348 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_interstitialClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialClose_m3760513420 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_interstitialReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialReady_m1858249288 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_interstitialOnLoadFail(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialOnLoadFail_m2071743443 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_interstitialOnNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialOnNoOffers_m1904867564 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_onRewardedDone(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_onRewardedDone_m2382605031 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_onRewardedVideoStarted(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_onRewardedVideoStarted_m3375990605 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_rewardedOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedOpen_m1836779270 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_rewardedClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedClose_m369474152 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_rewardedReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedReady_m2943739206 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_rewardedOnLoadFail(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedOnLoadFail_m4167226390 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_rewardedOnNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedOnNoOffers_m3061268300 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_bannerReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerReady_m662585037 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_bannerClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerClose_m492332998 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_bannerError(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerError_m2260833710 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::add_bannerNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerNoOffers_m3523107307 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" IL2CPP_METHOD_ATTR GUISkin_t1244372282 * GUI_get_skin_m1874615010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C" IL2CPP_METHOD_ATTR GUIStyle_t3956901511 * GUISkin_GetStyle_m2344315993 (GUISkin_t1244372282 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::loadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_loadInterstitialAd_m2946429557 (RuntimeObject * __this /* static, unused */, bool ___isAutoShow0, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::loadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_loadRewardedAd_m716152724 (RuntimeObject * __this /* static, unused */, bool ___isAutoShow0, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::showInterstitial()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_showInterstitial_m4094279772 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::showRewarded()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_showRewarded_m2840107484 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::loadBanner(System.Boolean,KidozSDK.Kidoz/BANNER_POSITION)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_loadBanner_m2041608241 (RuntimeObject * __this /* static, unused */, bool ___isAutoShow0, int32_t ___position1, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::showBanner()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_showBanner_m2848009697 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 KidozSDK.Kidoz::hideBanner()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_hideBanner_m3541404739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean KidozSDK.Kidoz::isInitialised()
extern "C" IL2CPP_METHOD_ATTR bool Kidoz_isInitialised_m271781548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void KidozSDK.Kidoz::printToastMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_printToastMessage_m2924981649 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::.ctor()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface__ctor_m3193950989 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::addFeedButton(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_addFeedButton_m2222519362 (KIDOZDummyInterface_t1497704720 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_addFeedButton_m2222519362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3401532167);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3401532167);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = ___x0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2258698273);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2258698273);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___y1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::addFeedBUtton(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_addFeedBUtton_m791370765 (KIDOZDummyInterface_t1497704720 * __this, int32_t ___x0, int32_t ___y1, int32_t ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_addFeedBUtton_m791370765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3401491047);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3401491047);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = ___x0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2258698273);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2258698273);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___y1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral710501006);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral710501006);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		int32_t L_12 = ___size2;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::addFlexiView(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_addFlexiView_m2054263001 (KIDOZDummyInterface_t1497704720 * __this, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_addFlexiView_m2054263001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3886337751);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3886337751);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		bool L_2 = ___autoShow0;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral841061624);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral841061624);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___position1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::addPanelToView(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_addPanelToView_m4273989249 (KIDOZDummyInterface_t1497704720 * __this, int32_t ___panelType0, int32_t ___handle_position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_addPanelToView_m4273989249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral739156623);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral739156623);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = ___panelType0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral7108638);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7108638);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___handle_position1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::addPanelToView(System.Int32,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_addPanelToView_m2845102553 (KIDOZDummyInterface_t1497704720 * __this, int32_t ___panel_type0, int32_t ___handle_position1, float ___startDelay2, float ___duration3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_addPanelToView_m2845102553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)8));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1791521506);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1791521506);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = ___panel_type0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral7108638);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7108638);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___handle_position1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3552560689);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3552560689);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		float L_12 = ___startDelay2;
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral2532873614);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2532873614);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		float L_17 = ___duration3;
		float L_18 = L_17;
		RuntimeObject * L_19 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m2971454694(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::changeFeedButtonVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_changeFeedButtonVisibility_m1445992606 (KIDOZDummyInterface_t1497704720 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_changeFeedButtonVisibility_m1445992606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___visible0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3226736625, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::changePanelVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_changePanelVisibility_m2226708428 (KIDOZDummyInterface_t1497704720 * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_changePanelVisibility_m2226708428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___visible0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3367276813, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::collapsePanelView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_collapsePanelView_m322123477 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_collapsePanelView_m322123477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral596316473, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::dismissFeedView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_dismissFeedView_m890799715 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_dismissFeedView_m890799715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral3740706606, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::expandPanelView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_expandPanelView_m615479152 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_expandPanelView_m615479152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral245291054, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 KIDOZDummyInterface.KIDOZDummyInterface::getFeedButtonSize()
extern "C" IL2CPP_METHOD_ATTR int32_t KIDOZDummyInterface_getFeedButtonSize_m2958859839 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Boolean KIDOZDummyInterface.KIDOZDummyInterface::getIsFlexiViewVisible()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZDummyInterface_getIsFlexiViewVisible_m1994580481 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean KIDOZDummyInterface.KIDOZDummyInterface::getIsInterstitialLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZDummyInterface_getIsInterstitialLoaded_m3770214335 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean KIDOZDummyInterface.KIDOZDummyInterface::getIsPanelExpended()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZDummyInterface_getIsPanelExpended_m1417613673 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean KIDOZDummyInterface.KIDOZDummyInterface::getIsRewardedLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZDummyInterface_getIsRewardedLoaded_m2324929882 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::hideBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_hideBanner_m200176364 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_hideBanner_m200176364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral169975460, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::hideFlexiView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_hideFlexiView_m1502479599 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_hideFlexiView_m1502479599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral1008185073, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::init(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_init_m3831246382 (KIDOZDummyInterface_t1497704720 * __this, String_t* ___developerID0, String_t* ___securityToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_init_m3831246382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___developerID0;
		String_t* L_1 = ___securityToken1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral4016391578, L_0, _stringLiteral835911299, L_1, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean KIDOZDummyInterface.KIDOZDummyInterface::isInitialised()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZDummyInterface_isInitialised_m3279179575 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::loadBanner(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_loadBanner_m2389489040 (KIDOZDummyInterface_t1497704720 * __this, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_loadBanner_m2389489040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1209185762);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1209185762);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		bool L_2 = ___autoShow0;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral841061624);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral841061624);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___position1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::generateInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_generateInterstitial_m2593545953 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_generateInterstitial_m2593545953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral1632684037, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::loadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_loadInterstitialAd_m889579467 (KIDOZDummyInterface_t1497704720 * __this, bool ___autoShow0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_loadInterstitialAd_m889579467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___autoShow0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3600979419, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::generateRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_generateRewarded_m6937702 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_generateRewarded_m6937702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral827557175, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::loadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_loadRewardedAd_m3427899386 (KIDOZDummyInterface_t1497704720 * __this, bool ___autoShow0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_loadRewardedAd_m3427899386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___autoShow0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1867893599, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::logMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_logMessage_m207855838 (KIDOZDummyInterface_t1497704720 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::setBannerPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_setBannerPosition_m2665305657 (KIDOZDummyInterface_t1497704720 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_setBannerPosition_m2665305657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___position0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3463494366, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::setFlexiViewClosable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_setFlexiViewClosable_m3986059395 (KIDOZDummyInterface_t1497704720 * __this, bool ___closable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_setFlexiViewClosable_m3986059395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___closable0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3522389669, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::setFlexiViewDraggable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_setFlexiViewDraggable_m1627646218 (KIDOZDummyInterface_t1497704720 * __this, bool ___dragable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_setFlexiViewDraggable_m1627646218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___dragable0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3031190827, L_2, /*hidden argument*/NULL);
		KIDOZDummyInterface_DebugLog_m2430911715(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::setPanelViewColor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_setPanelViewColor_m1459875360 (KIDOZDummyInterface_t1497704720 * __this, String_t* ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_setPanelViewColor_m1459875360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral2200195266, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::showBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_showBanner_m3523566075 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_showBanner_m3523566075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral2898991488, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::showFeedView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_showFeedView_m690139743 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_showFeedView_m690139743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral3610387600, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::showFlexiView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_showFlexiView_m4231993604 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_showFlexiView_m4231993604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral4256815504, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::showInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_showInterstitial_m2229083960 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_showInterstitial_m2229083960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral442818117, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::showRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_showRewarded_m24385012 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_showRewarded_m24385012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral2414248278, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::testFunction()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_testFunction_m3985566243 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_testFunction_m3985566243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral581605465, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::showVideoUnit()
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_showVideoUnit_m309135145 (KIDOZDummyInterface_t1497704720 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_showVideoUnit_m309135145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KIDOZDummyInterface_DebugLog_m2430911715(__this, _stringLiteral2355027635, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZDummyInterface.KIDOZDummyInterface::DebugLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZDummyInterface_DebugLog_m2430911715 (KIDOZDummyInterface_t1497704720 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZDummyInterface_DebugLog_m2430911715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral251875331, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_KIDOZiOSInterface_delegateMessageReceived_m2963591789(int32_t ___number0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	KIDOZiOSInterface_delegateMessageReceived_m2963591789(NULL, ___number0, NULL);

}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::.ctor()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface__ctor_m2818200753 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL KidozInit(char*, char*, Il2CppMethodPointer);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozInit(System.String,System.String,KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozInit_m1901670196 (RuntimeObject * __this /* static, unused */, String_t* ___developerID0, String_t* ___securityToken1, DelegateMessage_t368983736 * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, Il2CppMethodPointer);

	// Marshaling of parameter '___developerID0' to native representation
	char* ____developerID0_marshaled = NULL;
	____developerID0_marshaled = il2cpp_codegen_marshal_string(___developerID0);

	// Marshaling of parameter '___securityToken1' to native representation
	char* ____securityToken1_marshaled = NULL;
	____securityToken1_marshaled = il2cpp_codegen_marshal_string(___securityToken1);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozInit)(____developerID0_marshaled, ____securityToken1_marshaled, ____callback2_marshaled);

	// Marshaling cleanup of parameter '___developerID0' native representation
	il2cpp_codegen_marshal_free(____developerID0_marshaled);
	____developerID0_marshaled = NULL;

	// Marshaling cleanup of parameter '___securityToken1' native representation
	il2cpp_codegen_marshal_free(____securityToken1_marshaled);
	____securityToken1_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL KidozIsInitialised();
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::KidozIsInitialised()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_KidozIsInitialised_m3385784119 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(KidozIsInitialised)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL KidozLog(char*);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLog_m1440122994 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozLog)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL KidozLoadInterstitialAd(int32_t);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLoadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLoadInterstitialAd_m3283627506 (RuntimeObject * __this /* static, unused */, bool ___autoShow0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozLoadInterstitialAd)(static_cast<int32_t>(___autoShow0));

}
extern "C" void DEFAULT_CALL KidozShowInterstitial();
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozShowInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozShowInterstitial_m343537278 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozShowInterstitial)();

}
extern "C" int32_t DEFAULT_CALL KidozGetIsInterstitialLoaded();
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::KidozGetIsInterstitialLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_KidozGetIsInterstitialLoaded_m1447354865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(KidozGetIsInterstitialLoaded)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL KidozLoadRewardedAd(int32_t);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLoadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLoadRewardedAd_m425610248 (RuntimeObject * __this /* static, unused */, bool ___autoShow0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozLoadRewardedAd)(static_cast<int32_t>(___autoShow0));

}
extern "C" void DEFAULT_CALL KidozShowRewarded();
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozShowRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozShowRewarded_m26175347 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozShowRewarded)();

}
extern "C" int32_t DEFAULT_CALL KidozGetRewardedLoaded();
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::KidozGetRewardedLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_KidozGetRewardedLoaded_m604497905 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(KidozGetRewardedLoaded)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL KidozLoadBannerAd(int32_t, int32_t);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozLoadBannerAd(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozLoadBannerAd_m4009214912 (RuntimeObject * __this /* static, unused */, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozLoadBannerAd)(static_cast<int32_t>(___autoShow0), ___position1);

}
extern "C" void DEFAULT_CALL KidozSetBannerPosition(int32_t);
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozSetBannerPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozSetBannerPosition_m4178996244 (RuntimeObject * __this /* static, unused */, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozSetBannerPosition)(___position0);

}
extern "C" void DEFAULT_CALL KidozShowBanner();
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozShowBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozShowBanner_m1624365053 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozShowBanner)();

}
extern "C" void DEFAULT_CALL KidozHideBanner();
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::KidozHideBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_KidozHideBanner_m1851455153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(KidozHideBanner)();

}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::delegateMessageReceived(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_delegateMessageReceived_m2963591789 (RuntimeObject * __this /* static, unused */, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZiOSInterface_delegateMessageReceived_m2963591789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___number0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_007d;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_00a5;
			}
			case 5:
			{
				goto IL_00b9;
			}
			case 6:
			{
				goto IL_00cd;
			}
			case 7:
			{
				goto IL_00e1;
			}
			case 8:
			{
				goto IL_00f5;
			}
			case 9:
			{
				goto IL_0109;
			}
			case 10:
			{
				goto IL_011d;
			}
			case 11:
			{
				goto IL_0131;
			}
			case 12:
			{
				goto IL_0145;
			}
			case 13:
			{
				goto IL_0159;
			}
			case 14:
			{
				goto IL_016d;
			}
			case 15:
			{
				goto IL_0181;
			}
			case 16:
			{
				goto IL_0195;
			}
			case 17:
			{
				goto IL_01a9;
			}
		}
	}
	{
		goto IL_01bd;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_2 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_2);
		Kidoz_initSuccessCallback_m2972300024(L_2, L_3, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_4 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_4);
		Kidoz_initErrorCallback_m3453313057(L_4, L_5, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_6 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_6);
		Kidoz_interstitialReadyCallBack_m3499334011(L_6, L_7, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0091:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_8 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_8);
		Kidoz_interstitialOpenCallBack_m2691113914(L_8, L_9, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_10 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_10);
		Kidoz_interstitialCloseCallBack_m1810653962(L_10, L_11, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_00b9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_12 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_12);
		Kidoz_interstitialOnNoOffersCallBack_m192335511(L_12, L_13, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_14 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		Kidoz_interstitialOnLoadFailCallBack_m3741553019(L_14, L_15, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_00e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_16 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		Kidoz_rewardedReadyCallBack_m4059712915(L_16, L_17, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_00f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_18 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_18);
		Kidoz_rewardedOpenCallBack_m3765685344(L_18, L_19, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0109:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_20 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_20);
		Kidoz_rewardedCloseCallBack_m3926506242(L_20, L_21, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_011d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_22 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_22);
		Kidoz_rewardedOnNoOffersCallBack_m54783518(L_22, L_23, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0131:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_24 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_24);
		Kidoz_rewardedOnLoadFailCallBack_m3864742449(L_24, L_25, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0145:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_26 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_26);
		Kidoz_onRewardedVideoStartedCallBack_m1560585493(L_26, L_27, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0159:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_28 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_28);
		Kidoz_onRewardedCallBack_m2381449569(L_28, L_29, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_016d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_30 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_30);
		Kidoz_bannerReadyCallBack_m111868821(L_30, L_31, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0181:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_32 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_32);
		Kidoz_bannerCloseCallBack_m2371710680(L_32, L_33, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0195:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_34 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_34);
		Kidoz_bannerErrorCallBack_m2051249016(L_34, L_35, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_01a9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_36 = Kidoz_get_Instance_m2698996040(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_36);
		Kidoz_bannerNoOffersCallBack_m1073320303(L_36, L_37, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_01bd:
	{
		return;
	}
}
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::isInitialised()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_isInitialised_m3506064159 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = KIDOZiOSInterface_KidozIsInitialised_m3385784119(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::init(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_init_m2800452284 (KIDOZiOSInterface_t3673191750 * __this, String_t* ___developerID0, String_t* ___securityToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KIDOZiOSInterface_init_m2800452284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	{
		String_t* L_0 = ___developerID0;
		String_t* L_1 = ___securityToken1;
		DelegateMessage_t368983736 * L_2 = ((KIDOZiOSInterface_t3673191750_StaticFields*)il2cpp_codegen_static_fields_for(KIDOZiOSInterface_t3673191750_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		intptr_t L_3 = (intptr_t)KIDOZiOSInterface_delegateMessageReceived_m2963591789_RuntimeMethod_var;
		DelegateMessage_t368983736 * L_4 = (DelegateMessage_t368983736 *)il2cpp_codegen_object_new(DelegateMessage_t368983736_il2cpp_TypeInfo_var);
		DelegateMessage__ctor_m3110971909(L_4, NULL, L_3, /*hidden argument*/NULL);
		((KIDOZiOSInterface_t3673191750_StaticFields*)il2cpp_codegen_static_fields_for(KIDOZiOSInterface_t3673191750_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_0(L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		DelegateMessage_t368983736 * L_5 = ((KIDOZiOSInterface_t3673191750_StaticFields*)il2cpp_codegen_static_fields_for(KIDOZiOSInterface_t3673191750_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		KIDOZiOSInterface_KidozInit_m1901670196(NULL /*static, unused*/, G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::generateInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_generateInterstitial_m4123661385 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		KIDOZiOSInterface_KidozLoadInterstitialAd_m3283627506(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::loadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_loadInterstitialAd_m2940525770 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___autoShow0;
		KIDOZiOSInterface_KidozLoadInterstitialAd_m3283627506(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showInterstitial()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showInterstitial_m1670230380 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		KIDOZiOSInterface_KidozShowInterstitial_m343537278(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::getIsInterstitialLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_getIsInterstitialLoaded_m3333547484 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = KIDOZiOSInterface_KidozGetIsInterstitialLoaded_m1447354865(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::generateRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_generateRewarded_m4249720907 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		KIDOZiOSInterface_KidozLoadRewardedAd_m425610248(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::loadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_loadRewardedAd_m510336838 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___autoShow0;
		KIDOZiOSInterface_KidozLoadRewardedAd_m425610248(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showRewarded()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showRewarded_m2257084059 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		KIDOZiOSInterface_KidozShowRewarded_m26175347(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::getIsRewardedLoaded()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_getIsRewardedLoaded_m1643944465 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = KIDOZiOSInterface_KidozGetRewardedLoaded_m604497905(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::setBannerPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_setBannerPosition_m3348290403 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___position0;
		KIDOZiOSInterface_KidozSetBannerPosition_m4178996244(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::loadBanner(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_loadBanner_m1533052094 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___autoShow0;
		int32_t L_1 = ___position1;
		KIDOZiOSInterface_KidozLoadBannerAd_m4009214912(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showBanner_m959965456 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		KIDOZiOSInterface_KidozShowBanner_m1624365053(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::hideBanner()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_hideBanner_m3982433510 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		KIDOZiOSInterface_KidozHideBanner_m1851455153(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::logMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_logMessage_m3276393959 (KIDOZiOSInterface_t3673191750 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		KIDOZiOSInterface_KidozLog_m1440122994(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::testFunction()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_testFunction_m97004479 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::addFeedButton(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_addFeedButton_m3028187661 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::addFeedBUtton(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_addFeedBUtton_m54957355 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___x0, int32_t ___y1, int32_t ___size2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::changeFeedButtonVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_changeFeedButtonVisibility_m1522696249 (KIDOZiOSInterface_t3673191750 * __this, bool ___visible0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::addPanelToView(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_addPanelToView_m4162164133 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___panelType0, int32_t ___handle_position1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::addPanelToView(System.Int32,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_addPanelToView_m2069562547 (KIDOZiOSInterface_t3673191750 * __this, int32_t ___panel_type0, int32_t ___handle_position1, float ___startDelay2, float ___duration3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::changePanelVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_changePanelVisibility_m783231648 (KIDOZiOSInterface_t3673191750 * __this, bool ___visible0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::expandPanelView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_expandPanelView_m4235713180 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::collapsePanelView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_collapsePanelView_m2537018712 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::getIsPanelExpended()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_getIsPanelExpended_m2978988276 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::setPanelViewColor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_setPanelViewColor_m613840548 (KIDOZiOSInterface_t3673191750 * __this, String_t* ___color0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 KIDOZiOSInterface.KIDOZiOSInterface::getFeedButtonSize()
extern "C" IL2CPP_METHOD_ATTR int32_t KIDOZiOSInterface_getFeedButtonSize_m86620858 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showFeedView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showFeedView_m3380230346 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::dismissFeedView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_dismissFeedView_m2592345669 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::addFlexiView(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_addFlexiView_m311071405 (KIDOZiOSInterface_t3673191750 * __this, bool ___autoShow0, int32_t ___position1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::hideFlexiView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_hideFlexiView_m3737784171 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showFlexiView()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showFlexiView_m520566129 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean KIDOZiOSInterface.KIDOZiOSInterface::getIsFlexiViewVisible()
extern "C" IL2CPP_METHOD_ATTR bool KIDOZiOSInterface_getIsFlexiViewVisible_m1355465967 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::setFlexiViewDraggable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_setFlexiViewDraggable_m1680852430 (KIDOZiOSInterface_t3673191750 * __this, bool ___dragable0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::setFlexiViewClosable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_setFlexiViewClosable_m3947480383 (KIDOZiOSInterface_t3673191750 * __this, bool ___closable0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface::showVideoUnit()
extern "C" IL2CPP_METHOD_ATTR void KIDOZiOSInterface_showVideoUnit_m2542795624 (KIDOZiOSInterface_t3673191750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DelegateMessage_t368983736 (DelegateMessage_t368983736 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___number0);

}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DelegateMessage__ctor_m3110971909 (DelegateMessage_t368983736 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DelegateMessage_Invoke_m1200554103 (DelegateMessage_t368983736 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DelegateMessage_Invoke_m1200554103((DelegateMessage_t368983736 *)__this->get_prev_9(), ___number0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___number0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___number0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___number0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___number0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___number0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___number0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___number0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DelegateMessage_BeginInvoke_m3532999965 (DelegateMessage_t368983736 * __this, int32_t ___number0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DelegateMessage_BeginInvoke_m3532999965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___number0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void KIDOZiOSInterface.KIDOZiOSInterface/DelegateMessage::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void DelegateMessage_EndInvoke_m3998695066 (DelegateMessage_t368983736 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void KidozSDK.Kidoz::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Kidoz__ctor_m2497322655 (Kidoz_t3183170329 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_initSuccess(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_initSuccess_m2165230954 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_initSuccess_m2165230954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initSuccess_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_initSuccess_4()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_initSuccess(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_initSuccess_m2287499612 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_initSuccess_m2287499612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initSuccess_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_initSuccess_4()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_initError(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_initError_m2622338913 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_initError_m2622338913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initError_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_initError_5()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_initError(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_initError_m1642383409 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_initError_m1642383409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initError_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_initError_5()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_panelExpand(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_panelExpand_m3648269432 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_panelExpand_m3648269432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelExpand_6();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_panelExpand_6()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_panelExpand(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_panelExpand_m658494023 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_panelExpand_m658494023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelExpand_6();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_panelExpand_6()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_panelCollapse(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_panelCollapse_m136016910 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_panelCollapse_m136016910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelCollapse_7();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_panelCollapse_7()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_panelCollapse(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_panelCollapse_m2445319286 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_panelCollapse_m2445319286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelCollapse_7();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_panelCollapse_7()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_panelReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_panelReady_m359807525 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_panelReady_m359807525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelReady_8();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_panelReady_8()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_panelReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_panelReady_m1502200202 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_panelReady_m1502200202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelReady_8();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_panelReady_8()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_bannerContentLoaded(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerContentLoaded_m4265223016 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_bannerContentLoaded_m4265223016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerContentLoaded_9();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerContentLoaded_9()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_bannerContentLoaded(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_bannerContentLoaded_m961283682 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_bannerContentLoaded_m961283682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerContentLoaded_9();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerContentLoaded_9()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_bannerContentLoadFailed(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerContentLoadFailed_m584024871 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_bannerContentLoadFailed_m584024871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerContentLoadFailed_10();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerContentLoadFailed_10()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_bannerContentLoadFailed(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_bannerContentLoadFailed_m2237219098 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_bannerContentLoadFailed_m2237219098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerContentLoadFailed_10();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerContentLoadFailed_10()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_playerOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_playerOpen_m198456761 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_playerOpen_m198456761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerOpen_11();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_playerOpen_11()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_playerOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_playerOpen_m387044619 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_playerOpen_m387044619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerOpen_11();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_playerOpen_11()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_playerClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_playerClose_m803428454 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_playerClose_m803428454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerClose_12();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_playerClose_12()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_playerClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_playerClose_m112862415 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_playerClose_m112862415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerClose_12();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_playerClose_12()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_interstitialOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialOpen_m101925348 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_interstitialOpen_m101925348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOpen_13();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialOpen_13()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_interstitialOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_interstitialOpen_m1663022110 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_interstitialOpen_m1663022110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOpen_13();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialOpen_13()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_interstitialClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialClose_m3760513420 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_interstitialClose_m3760513420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialClose_14();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialClose_14()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_interstitialClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_interstitialClose_m2910153104 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_interstitialClose_m2910153104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialClose_14();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialClose_14()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_interstitialReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialReady_m1858249288 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_interstitialReady_m1858249288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialReady_15();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialReady_15()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_interstitialReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_interstitialReady_m2956049942 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_interstitialReady_m2956049942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialReady_15();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialReady_15()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_interstitialOnLoadFail(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialOnLoadFail_m2071743443 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_interstitialOnLoadFail_m2071743443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnLoadFail_16();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialOnLoadFail_16()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_interstitialOnLoadFail(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_interstitialOnLoadFail_m1964897540 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_interstitialOnLoadFail_m1964897540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnLoadFail_16();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialOnLoadFail_16()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_interstitialOnNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_interstitialOnNoOffers_m1904867564 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_interstitialOnNoOffers_m1904867564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnNoOffers_17();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialOnNoOffers_17()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_interstitialOnNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_interstitialOnNoOffers_m678060208 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_interstitialOnNoOffers_m678060208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnNoOffers_17();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_interstitialOnNoOffers_17()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_onRewardedDone(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_onRewardedDone_m2382605031 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_onRewardedDone_m2382605031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedDone_18();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_onRewardedDone_18()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_onRewardedDone(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_onRewardedDone_m3759379697 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_onRewardedDone_m3759379697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedDone_18();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_onRewardedDone_18()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_onRewardedVideoStarted(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_onRewardedVideoStarted_m3375990605 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_onRewardedVideoStarted_m3375990605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedVideoStarted_19();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_onRewardedVideoStarted_19()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_onRewardedVideoStarted(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_onRewardedVideoStarted_m547549615 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_onRewardedVideoStarted_m547549615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedVideoStarted_19();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_onRewardedVideoStarted_19()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_rewardedOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedOpen_m1836779270 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_rewardedOpen_m1836779270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOpen_20();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedOpen_20()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_rewardedOpen(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_rewardedOpen_m3456681225 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_rewardedOpen_m3456681225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOpen_20();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedOpen_20()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_rewardedClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedClose_m369474152 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_rewardedClose_m369474152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedClose_21();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedClose_21()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_rewardedClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_rewardedClose_m2480573548 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_rewardedClose_m2480573548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedClose_21();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedClose_21()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_rewardedReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedReady_m2943739206 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_rewardedReady_m2943739206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedReady_22();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedReady_22()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_rewardedReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_rewardedReady_m2657546523 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_rewardedReady_m2657546523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedReady_22();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedReady_22()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_rewardedOnLoadFail(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedOnLoadFail_m4167226390 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_rewardedOnLoadFail_m4167226390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnLoadFail_23();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedOnLoadFail_23()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_rewardedOnLoadFail(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_rewardedOnLoadFail_m284241147 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_rewardedOnLoadFail_m284241147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnLoadFail_23();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedOnLoadFail_23()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_rewardedOnNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_rewardedOnNoOffers_m3061268300 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_rewardedOnNoOffers_m3061268300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnNoOffers_24();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedOnNoOffers_24()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_rewardedOnNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_rewardedOnNoOffers_m2064503370 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_rewardedOnNoOffers_m2064503370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnNoOffers_24();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_rewardedOnNoOffers_24()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_bannerReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerReady_m662585037 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_bannerReady_m662585037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerReady_25();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerReady_25()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_bannerReady(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_bannerReady_m576461645 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_bannerReady_m576461645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerReady_25();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerReady_25()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_bannerClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerClose_m492332998 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_bannerClose_m492332998_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerClose_26();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerClose_26()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_bannerClose(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_bannerClose_m903783463 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_bannerClose_m903783463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerClose_26();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerClose_26()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_bannerError(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerError_m2260833710 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_bannerError_m2260833710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerError_27();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerError_27()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_bannerError(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_bannerError_m2490735221 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_bannerError_m2490735221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerError_27();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerError_27()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::add_bannerNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_add_bannerNoOffers_m3523107307 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_add_bannerNoOffers_m3523107307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerNoOffers_28();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerNoOffers_28()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::remove_bannerNoOffers(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_remove_bannerNoOffers_m2366785931 (RuntimeObject * __this /* static, unused */, Action_1_t2019918284 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_remove_bannerNoOffers_m2366785931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2019918284 * V_0 = NULL;
	Action_1_t2019918284 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerNoOffers_28();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2019918284 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = V_1;
		Action_1_t2019918284 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t2019918284 * L_5 = V_0;
		Action_1_t2019918284 * L_6 = InterlockedCompareExchangeImpl<Action_1_t2019918284 *>((((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_address_of_bannerNoOffers_28()), ((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t2019918284_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t2019918284 * L_7 = V_0;
		Action_1_t2019918284 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2019918284 *)L_7) == ((RuntimeObject*)(Action_1_t2019918284 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// KidozSDK.Kidoz KidozSDK.Kidoz::get_Instance()
extern "C" IL2CPP_METHOD_ATTR Kidoz_t3183170329 * Kidoz_get_Instance_m2698996040 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_get_Instance_m2698996040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_instance_35();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_2 = Kidoz_Create_m2462817466(NULL /*static, unused*/, /*hidden argument*/NULL);
		Kidoz_SetInstance_m1655708658(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_3 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_instance_35();
		return L_3;
	}
}
// System.Void KidozSDK.Kidoz::SetInstance(KidozSDK.Kidoz)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_SetInstance_m1655708658 (RuntimeObject * __this /* static, unused */, Kidoz_t3183170329 * ____instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_SetInstance_m1655708658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Kidoz_t3183170329 * L_0 = ____instance0;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_instance_35(L_0);
		Kidoz_t3183170329 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_instance_35();
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KidozSDK.Kidoz::Awake()
extern "C" IL2CPP_METHOD_ATTR void Kidoz_Awake_m1459059702 (Kidoz_t3183170329 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_Awake_m1459059702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_instance_35();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_SetInstance_m1655708658(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_PublisherID_29();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_4 = __this->get_SecurityToken_30();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_6 = __this->get_PublisherID_29();
		String_t* L_7 = __this->get_SecurityToken_30();
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_init_m1343812556(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		goto IL_0061;
	}

IL_004c:
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2566050346, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// KidozSDK.Kidoz KidozSDK.Kidoz::Create()
extern "C" IL2CPP_METHOD_ATTR Kidoz_t3183170329 * Kidoz_Create_m2462817466 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_Create_m2462817466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_instance_35();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral2308364492, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Kidoz_t3183170329 * L_4 = GameObject_AddComponent_TisKidoz_t3183170329_m793903245(L_3, /*hidden argument*/GameObject_AddComponent_TisKidoz_t3183170329_m793903245_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		return (Kidoz_t3183170329 *)NULL;
	}
}
// System.Void KidozSDK.Kidoz::SetiOSAppPauseOnBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_SetiOSAppPauseOnBackground_m3432440863 (RuntimeObject * __this /* static, unused */, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_SetiOSAppPauseOnBackground_m3432440863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___pause0;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_mPause_32(L_0);
		return;
	}
}
// System.Void KidozSDK.Kidoz::init(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_init_m1343812556 (RuntimeObject * __this /* static, unused */, String_t* ___developerID0, String_t* ___securityToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_init_m1343812556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		bool L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initFlag_31();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_initFlag_31((bool)1);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3508162604, /*hidden argument*/NULL);
		Kidoz_t3183170329 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_instance_35();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1036564779, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_t3183170329 * L_3 = Kidoz_Create_m2462817466(NULL /*static, unused*/, /*hidden argument*/NULL);
		Kidoz_SetInstance_m1655708658(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0044:
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral14669535, /*hidden argument*/NULL);
	}

IL_004e:
	{
		String_t* L_4 = ___developerID0;
		String_t* L_5 = ___securityToken1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3273711721, L_4, _stringLiteral3452614532, L_5, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_7 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		String_t* L_8 = ___developerID0;
		String_t* L_9 = ___securityToken1;
		NullCheck(L_7);
		KIDOZiOSInterface_init_m2800452284(L_7, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean KidozSDK.Kidoz::isInitialised()
extern "C" IL2CPP_METHOD_ATTR bool Kidoz_isInitialised_m271781548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_isInitialised_m271781548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_1);
		bool L_2 = KIDOZiOSInterface_isInitialised_m3506064159(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void KidozSDK.Kidoz::testFunction()
extern "C" IL2CPP_METHOD_ATTR void Kidoz_testFunction_m3210016021 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_testFunction_m3210016021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_testFunction_m97004479(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 KidozSDK.Kidoz::addPanelToView(KidozSDK.Kidoz/PANEL_TYPE,KidozSDK.Kidoz/HANDLE_POSITION)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_addPanelToView_m1027759776 (RuntimeObject * __this /* static, unused */, int32_t ___panel_type0, int32_t ___handle_position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_addPanelToView_m1027759776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		int32_t L_1 = ___panel_type0;
		int32_t L_2 = ___handle_position1;
		NullCheck(L_0);
		KIDOZiOSInterface_addPanelToView_m4162164133(L_0, L_1, L_2, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::addPanelToView(KidozSDK.Kidoz/PANEL_TYPE,KidozSDK.Kidoz/HANDLE_POSITION,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_addPanelToView_m3611034124 (RuntimeObject * __this /* static, unused */, int32_t ___panel_type0, int32_t ___handle_position1, float ___startDelay2, float ___duration3, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::changePanelVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_changePanelVisibility_m3523566946 (RuntimeObject * __this /* static, unused */, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_changePanelVisibility_m3523566946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		bool L_1 = ___visible0;
		NullCheck(L_0);
		KIDOZiOSInterface_changePanelVisibility_m783231648(L_0, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::expandPanelView()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_expandPanelView_m1146353060 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_expandPanelView_m1146353060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_expandPanelView_m4235713180(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::collapsePanelView()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_collapsePanelView_m92948298 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_collapsePanelView_m92948298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_collapsePanelView_m2537018712(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::setPanelColor(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_setPanelColor_m2686736123 (RuntimeObject * __this /* static, unused */, String_t* ___panelColor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_setPanelColor_m2686736123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		String_t* L_1 = ___panelColor0;
		NullCheck(L_0);
		KIDOZiOSInterface_setPanelViewColor_m613840548(L_0, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Boolean KidozSDK.Kidoz::getIsPanelExpanded()
extern "C" IL2CPP_METHOD_ATTR bool Kidoz_getIsPanelExpanded_m4077752920 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 KidozSDK.Kidoz::loadInterstitialAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_loadInterstitialAd_m2946429557 (RuntimeObject * __this /* static, unused */, bool ___isAutoShow0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_loadInterstitialAd_m2946429557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		bool L_1 = ___isAutoShow0;
		NullCheck(L_0);
		KIDOZiOSInterface_loadInterstitialAd_m2940525770(L_0, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::loadRewardedAd(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_loadRewardedAd_m716152724 (RuntimeObject * __this /* static, unused */, bool ___isAutoShow0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_loadRewardedAd_m716152724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		bool L_1 = ___isAutoShow0;
		NullCheck(L_0);
		KIDOZiOSInterface_loadRewardedAd_m510336838(L_0, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::generateInterstitial()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_generateInterstitial_m4266849258 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_generateInterstitial_m4266849258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_generateInterstitial_m4123661385(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::generateRewarded()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_generateRewarded_m3149821262 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_generateRewarded_m3149821262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_generateRewarded_m4249720907(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::showInterstitial()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_showInterstitial_m4094279772 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_showInterstitial_m4094279772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_showInterstitial_m1670230380(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::showRewarded()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_showRewarded_m2840107484 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_showRewarded_m2840107484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_showRewarded_m2257084059(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Boolean KidozSDK.Kidoz::getIsInterstitialLoaded()
extern "C" IL2CPP_METHOD_ATTR bool Kidoz_getIsInterstitialLoaded_m1596880910 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_getIsInterstitialLoaded_m1596880910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		bool L_1 = KIDOZiOSInterface_getIsInterstitialLoaded_m3333547484(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean KidozSDK.Kidoz::getIsRewardedLoaded()
extern "C" IL2CPP_METHOD_ATTR bool Kidoz_getIsRewardedLoaded_m823535853 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_getIsRewardedLoaded_m823535853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		bool L_1 = KIDOZiOSInterface_getIsRewardedLoaded_m1643944465(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 KidozSDK.Kidoz::loadBanner(System.Boolean,KidozSDK.Kidoz/BANNER_POSITION)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_loadBanner_m2041608241 (RuntimeObject * __this /* static, unused */, bool ___isAutoShow0, int32_t ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_loadBanner_m2041608241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		bool L_1 = ___isAutoShow0;
		int32_t L_2 = ___position1;
		NullCheck(L_0);
		KIDOZiOSInterface_loadBanner_m1533052094(L_0, L_1, L_2, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::setBannerPosition(KidozSDK.Kidoz/BANNER_POSITION)
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_setBannerPosition_m4190490890 (RuntimeObject * __this /* static, unused */, int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_setBannerPosition_m4190490890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		KIDOZiOSInterface_setBannerPosition_m3348290403(L_0, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::showBanner()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_showBanner_m2848009697 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_showBanner_m2848009697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_showBanner_m959965456(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 KidozSDK.Kidoz::hideBanner()
extern "C" IL2CPP_METHOD_ATTR int32_t Kidoz_hideBanner_m3541404739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_hideBanner_m3541404739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		NullCheck(L_0);
		KIDOZiOSInterface_hideBanner_m3982433510(L_0, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void KidozSDK.Kidoz::printToastMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_printToastMessage_m2924981649 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_printToastMessage_m2924981649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		KIDOZiOSInterface_t3673191750 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_kidozin_33();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		KIDOZiOSInterface_logMessage_m3276393959(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KidozSDK.Kidoz::initSuccessCallback(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_initSuccessCallback_m2972300024 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_initSuccessCallback_m2972300024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initSuccess_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initSuccess_4();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::initErrorCallback(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_initErrorCallback_m3453313057 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_initErrorCallback_m3453313057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initError_5();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_initError_5();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::panelExpandCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_panelExpandCallBack_m1651733835 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_panelExpandCallBack_m1651733835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelExpand_6();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelExpand_6();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::panelCollapseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_panelCollapseCallBack_m1129327842 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_panelCollapseCallBack_m1129327842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelCollapse_7();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelCollapse_7();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::panelReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_panelReadyCallBack_m64930788 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_panelReadyCallBack_m64930788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelReady_8();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_panelReady_8();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::bannerReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerReadyCallBack_m111868821 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_bannerReadyCallBack_m111868821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerReady_25();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerReady_25();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::bannerCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerCloseCallBack_m2371710680 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_bannerCloseCallBack_m2371710680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerClose_26();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerClose_26();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::bannerErrorCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerErrorCallBack_m2051249016 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_bannerErrorCallBack_m2051249016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerError_27();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerError_27();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::bannerNoOffersCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_bannerNoOffersCallBack_m1073320303 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_bannerNoOffersCallBack_m1073320303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerNoOffers_28();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_bannerNoOffers_28();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::playerOpenCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_playerOpenCallBack_m2156660757 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_playerOpenCallBack_m2156660757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerOpen_11();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerOpen_11();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::playerCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_playerCloseCallBack_m1335704981 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_playerCloseCallBack_m1335704981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerClose_12();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_playerClose_12();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::interstitialOpenCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialOpenCallBack_m2691113914 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_interstitialOpenCallBack_m2691113914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		bool L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_mPause_32();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		AudioListener_set_pause_m2425921647(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOpen_13();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOpen_13();
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		Action_1_Invoke_m3134296422(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::interstitialCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialCloseCallBack_m1810653962 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_interstitialCloseCallBack_m1810653962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		bool L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_mPause_32();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		AudioListener_set_pause_m2425921647(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialClose_14();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialClose_14();
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		Action_1_Invoke_m3134296422(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::interstitialReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialReadyCallBack_m3499334011 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_interstitialReadyCallBack_m3499334011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialReady_15();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialReady_15();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::interstitialOnLoadFailCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialOnLoadFailCallBack_m3741553019 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_interstitialOnLoadFailCallBack_m3741553019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnLoadFail_16();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnLoadFail_16();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::interstitialOnNoOffersCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_interstitialOnNoOffersCallBack_m192335511 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_interstitialOnNoOffersCallBack_m192335511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnNoOffers_17();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_interstitialOnNoOffers_17();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::onRewardedCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_onRewardedCallBack_m2381449569 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_onRewardedCallBack_m2381449569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedDone_18();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedDone_18();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::onRewardedVideoStartedCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_onRewardedVideoStartedCallBack_m1560585493 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_onRewardedVideoStartedCallBack_m1560585493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedVideoStarted_19();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_onRewardedVideoStarted_19();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::rewardedOpenCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedOpenCallBack_m3765685344 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_rewardedOpenCallBack_m3765685344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		bool L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_mPause_32();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		AudioListener_set_pause_m2425921647(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOpen_20();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOpen_20();
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		Action_1_Invoke_m3134296422(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::rewardedCloseCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedCloseCallBack_m3926506242 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_rewardedCloseCallBack_m3926506242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		bool L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_mPause_32();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		AudioListener_set_pause_m2425921647(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedClose_21();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_2 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedClose_21();
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		Action_1_Invoke_m3134296422(L_2, L_3, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::rewardedReadyCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedReadyCallBack_m4059712915 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_rewardedReadyCallBack_m4059712915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedReady_22();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedReady_22();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::rewardedOnLoadFailCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedOnLoadFailCallBack_m3864742449 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_rewardedOnLoadFailCallBack_m3864742449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnLoadFail_23();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnLoadFail_23();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::rewardedOnNoOffersCallBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void Kidoz_rewardedOnNoOffersCallBack_m54783518 (Kidoz_t3183170329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz_rewardedOnNoOffersCallBack_m54783518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_0 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnNoOffers_24();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Action_1_t2019918284 * L_1 = ((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->get_rewardedOnNoOffers_24();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Action_1_Invoke_m3134296422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3134296422_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void KidozSDK.Kidoz::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Kidoz__cctor_m1766167034 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Kidoz__cctor_m1766167034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_initFlag_31((bool)0);
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_mPause_32((bool)0);
		KIDOZiOSInterface_t3673191750 * L_0 = (KIDOZiOSInterface_t3673191750 *)il2cpp_codegen_object_new(KIDOZiOSInterface_t3673191750_il2cpp_TypeInfo_var);
		KIDOZiOSInterface__ctor_m2818200753(L_0, /*hidden argument*/NULL);
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_kidozin_33(L_0);
		((Kidoz_t3183170329_StaticFields*)il2cpp_codegen_static_fields_for(Kidoz_t3183170329_il2cpp_TypeInfo_var))->set_instance_35((Kidoz_t3183170329 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SampleCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SampleCode__ctor_m995585442 (SampleCode_t929735280 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::Start()
extern "C" IL2CPP_METHOD_ATTR void SampleCode_Start_m281046372 (SampleCode_t929735280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_Start_m281046372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_SetiOSAppPauseOnBackground_m3432440863(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)SampleCode_onKidozInitSuccess_m1413140531_RuntimeMethod_var;
		Action_1_t2019918284 * L_1 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_1, __this, L_0, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_initSuccess_m2165230954(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)SampleCode_onKidozInitError_m2073814564_RuntimeMethod_var;
		Action_1_t2019918284 * L_3 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_3, __this, L_2, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_initError_m2622338913(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)SampleCode_interstitialOpen_m41864119_RuntimeMethod_var;
		Action_1_t2019918284 * L_5 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_interstitialOpen_m101925348(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)SampleCode_interstitialClose_m2639569610_RuntimeMethod_var;
		Action_1_t2019918284 * L_7 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_7, __this, L_6, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_interstitialClose_m3760513420(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)SampleCode_interstitialReady_m393494749_RuntimeMethod_var;
		Action_1_t2019918284 * L_9 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_9, __this, L_8, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_interstitialReady_m1858249288(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		intptr_t L_10 = (intptr_t)SampleCode_interstitialOnLoadFail_m3823088456_RuntimeMethod_var;
		Action_1_t2019918284 * L_11 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_interstitialOnLoadFail_m2071743443(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)SampleCode_interstitialOnNoOffers_m1288932714_RuntimeMethod_var;
		Action_1_t2019918284 * L_13 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_13, __this, L_12, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_interstitialOnNoOffers_m1904867564(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		intptr_t L_14 = (intptr_t)SampleCode_onRewardedDone_m3781073165_RuntimeMethod_var;
		Action_1_t2019918284 * L_15 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_15, __this, L_14, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_onRewardedDone_m2382605031(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		intptr_t L_16 = (intptr_t)SampleCode_onRewardedVideoStarted_m1168296053_RuntimeMethod_var;
		Action_1_t2019918284 * L_17 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_17, __this, L_16, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_onRewardedVideoStarted_m3375990605(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		intptr_t L_18 = (intptr_t)SampleCode_rewardedOpen_m1495261806_RuntimeMethod_var;
		Action_1_t2019918284 * L_19 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_19, __this, L_18, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_rewardedOpen_m1836779270(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		intptr_t L_20 = (intptr_t)SampleCode_rewardedClose_m2319131317_RuntimeMethod_var;
		Action_1_t2019918284 * L_21 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_21, __this, L_20, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_rewardedClose_m369474152(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		intptr_t L_22 = (intptr_t)SampleCode_rewardedReady_m1871158888_RuntimeMethod_var;
		Action_1_t2019918284 * L_23 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_23, __this, L_22, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_rewardedReady_m2943739206(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		intptr_t L_24 = (intptr_t)SampleCode_rewardedOnLoadFail_m1290768232_RuntimeMethod_var;
		Action_1_t2019918284 * L_25 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_25, __this, L_24, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_rewardedOnLoadFail_m4167226390(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		intptr_t L_26 = (intptr_t)SampleCode_rewardedOnNoOffers_m2749769322_RuntimeMethod_var;
		Action_1_t2019918284 * L_27 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_27, __this, L_26, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_rewardedOnNoOffers_m3061268300(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		intptr_t L_28 = (intptr_t)SampleCode_bannerReady_m1759568857_RuntimeMethod_var;
		Action_1_t2019918284 * L_29 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_29, __this, L_28, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_bannerReady_m662585037(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		intptr_t L_30 = (intptr_t)SampleCode_bannerClose_m648104984_RuntimeMethod_var;
		Action_1_t2019918284 * L_31 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_31, __this, L_30, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_bannerClose_m492332998(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		intptr_t L_32 = (intptr_t)SampleCode_bannerError_m1853491568_RuntimeMethod_var;
		Action_1_t2019918284 * L_33 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_33, __this, L_32, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_bannerError_m2260833710(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		intptr_t L_34 = (intptr_t)SampleCode_bannerNoOffers_m3388199898_RuntimeMethod_var;
		Action_1_t2019918284 * L_35 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m838414602(L_35, __this, L_34, /*hidden argument*/Action_1__ctor_m838414602_RuntimeMethod_var);
		Kidoz_add_bannerNoOffers_m3523107307(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::Update()
extern "C" IL2CPP_METHOD_ATTR void SampleCode_Update_m2945331936 (SampleCode_t929735280 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SampleCode::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void SampleCode_OnGUI_m1769651039 (SampleCode_t929735280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_OnGUI_m1769651039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	GUIStyle_t3956901511 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((double)((double)(((double)((double)L_0)))/(double)(335.0)));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_1 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_t3956901511 * L_2 = GUISkin_GetStyle_m2344315993(L_1, _stringLiteral3923320070, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_3 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		double L_4 = V_0;
		V_2 = (((int32_t)((int32_t)((double)il2cpp_codegen_multiply((double)(100.0), (double)L_4)))));
		double L_5 = V_0;
		V_3 = (((int32_t)((int32_t)((double)il2cpp_codegen_multiply((double)(50.0), (double)L_5)))));
		int32_t L_6 = V_3;
		V_4 = L_6;
		GUIStyle_t3956901511 * L_7 = V_1;
		double L_8 = V_0;
		NullCheck(L_7);
		GUIStyle_set_fontSize_m1566850023(L_7, (((int32_t)((int32_t)((double)il2cpp_codegen_multiply((double)(16.0), (double)L_8))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_9 = V_1;
		NullCheck(L_9);
		GUIStyleState_t1397964415 * L_10 = GUIStyle_get_normal_m729441812(L_9, /*hidden argument*/NULL);
		Color_t2555686324  L_11 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyleState_set_textColor_m1105876047(L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		int32_t L_13 = V_4;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		Rect_t2360479859  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m2614021312((&L_16), (((float)((float)L_12))), (((float)((float)L_13))), (((float)((float)L_14))), (((float)((float)L_15))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_17 = V_1;
		GUI_Label_m2420537077(NULL /*static, unused*/, L_16, _stringLiteral3819818061, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		GUIStyle_t3956901511 * L_20 = V_1;
		double L_21 = V_0;
		NullCheck(L_20);
		GUIStyle_set_fontSize_m1566850023(L_20, (((int32_t)((int32_t)((double)il2cpp_codegen_multiply((double)(12.0), (double)L_21))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_22 = V_1;
		NullCheck(L_22);
		GUIStyleState_t1397964415 * L_23 = GUIStyle_get_normal_m729441812(L_22, /*hidden argument*/NULL);
		Color_t2555686324  L_24 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		GUIStyleState_set_textColor_m1105876047(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		Rect_t2360479859  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Rect__ctor_m2614021312((&L_29), (((float)((float)L_25))), (((float)((float)L_26))), (((float)((float)L_27))), (((float)((float)L_28))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_30 = V_1;
		bool L_31 = GUI_Button_m2223708732(NULL /*static, unused*/, L_29, _stringLiteral177218028, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_loadInterstitialAd_m2946429557(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33));
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		int32_t L_36 = V_2;
		int32_t L_37 = V_3;
		Rect_t2360479859  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Rect__ctor_m2614021312((&L_38), (((float)((float)L_34))), (((float)((float)L_35))), (((float)((float)L_36))), (((float)((float)L_37))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_40 = GUI_Button_m2223708732(NULL /*static, unused*/, L_38, _stringLiteral1565308445, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00f6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_loadRewardedAd_m716152724(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		int32_t L_41 = V_4;
		int32_t L_42 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42));
		int32_t L_43 = V_2;
		int32_t L_44 = V_4;
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		Rect_t2360479859  L_47;
		memset(&L_47, 0, sizeof(L_47));
		Rect__ctor_m2614021312((&L_47), (((float)((float)L_43))), (((float)((float)L_44))), (((float)((float)L_45))), (((float)((float)L_46))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_49 = GUI_Button_m2223708732(NULL /*static, unused*/, L_47, _stringLiteral1607448010, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0120;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_showInterstitial_m4094279772(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0120:
	{
		int32_t L_50 = V_4;
		int32_t L_51 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51));
		int32_t L_52 = V_2;
		int32_t L_53 = V_4;
		int32_t L_54 = V_2;
		int32_t L_55 = V_3;
		Rect_t2360479859  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Rect__ctor_m2614021312((&L_56), (((float)((float)L_52))), (((float)((float)L_53))), (((float)((float)L_54))), (((float)((float)L_55))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_57 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_58 = GUI_Button_m2223708732(NULL /*static, unused*/, L_56, _stringLiteral1090184194, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_showRewarded_m2840107484(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_014a:
	{
		int32_t L_59 = V_4;
		int32_t L_60 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_60));
		int32_t L_61 = V_2;
		int32_t L_62 = V_4;
		int32_t L_63 = V_2;
		int32_t L_64 = V_3;
		Rect_t2360479859  L_65;
		memset(&L_65, 0, sizeof(L_65));
		Rect__ctor_m2614021312((&L_65), (((float)((float)L_61))), (((float)((float)L_62))), (((float)((float)L_63))), (((float)((float)L_64))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_66 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_67 = GUI_Button_m2223708732(NULL /*static, unused*/, L_65, _stringLiteral2586434928, L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_loadBanner_m2041608241(NULL /*static, unused*/, (bool)1, 0, /*hidden argument*/NULL);
	}

IL_0176:
	{
		int32_t L_68 = V_4;
		int32_t L_69 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69));
		int32_t L_70 = V_2;
		int32_t L_71 = V_4;
		int32_t L_72 = V_2;
		int32_t L_73 = V_3;
		Rect_t2360479859  L_74;
		memset(&L_74, 0, sizeof(L_74));
		Rect__ctor_m2614021312((&L_74), (((float)((float)L_70))), (((float)((float)L_71))), (((float)((float)L_72))), (((float)((float)L_73))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_75 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_76 = GUI_Button_m2223708732(NULL /*static, unused*/, L_74, _stringLiteral1940612472, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_loadBanner_m2041608241(NULL /*static, unused*/, (bool)0, 1, /*hidden argument*/NULL);
	}

IL_01a2:
	{
		int32_t L_77 = V_4;
		int32_t L_78 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)L_78));
		int32_t L_79 = V_2;
		int32_t L_80 = V_4;
		int32_t L_81 = V_2;
		int32_t L_82 = V_3;
		Rect_t2360479859  L_83;
		memset(&L_83, 0, sizeof(L_83));
		Rect__ctor_m2614021312((&L_83), (((float)((float)L_79))), (((float)((float)L_80))), (((float)((float)L_81))), (((float)((float)L_82))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_84 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_85 = GUI_Button_m2223708732(NULL /*static, unused*/, L_83, _stringLiteral3316491503, L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_01cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_showBanner_m2848009697(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_01cc:
	{
		int32_t L_86 = V_4;
		int32_t L_87 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87));
		int32_t L_88 = V_2;
		int32_t L_89 = V_4;
		int32_t L_90 = V_2;
		int32_t L_91 = V_3;
		Rect_t2360479859  L_92;
		memset(&L_92, 0, sizeof(L_92));
		Rect__ctor_m2614021312((&L_92), (((float)((float)L_88))), (((float)((float)L_89))), (((float)((float)L_90))), (((float)((float)L_91))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_93 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_94 = GUI_Button_m2223708732(NULL /*static, unused*/, L_92, _stringLiteral2788130927, L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_01f6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_hideBanner_m3541404739(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_01f6:
	{
		int32_t L_95 = V_4;
		int32_t L_96 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)L_96));
		int32_t L_97 = V_2;
		int32_t L_98 = V_4;
		int32_t L_99 = V_2;
		int32_t L_100 = V_3;
		Rect_t2360479859  L_101;
		memset(&L_101, 0, sizeof(L_101));
		Rect__ctor_m2614021312((&L_101), (((float)((float)L_97))), (((float)((float)L_98))), (((float)((float)L_99))), (((float)((float)L_100))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_102 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_103 = GUI_Button_m2223708732(NULL /*static, unused*/, L_101, _stringLiteral3963361804, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_024d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		bool L_104 = Kidoz_isInitialised_m271781548(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_104;
		bool L_105 = V_5;
		bool L_106 = L_105;
		RuntimeObject * L_107 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_106);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_108 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2086937696, L_107, /*hidden argument*/NULL);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, L_108, /*hidden argument*/NULL);
		bool L_109 = V_5;
		bool L_110 = L_109;
		RuntimeObject * L_111 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_110);
		String_t* L_112 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3716746008, L_111, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_112, /*hidden argument*/NULL);
	}

IL_024d:
	{
		return;
	}
}
// System.Void SampleCode::onKidozInitSuccess(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_onKidozInitSuccess_m1413140531 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_onKidozInitSuccess_m1413140531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral4163693862, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral3801605711, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::onKidozInitError(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_onKidozInitError_m2073814564 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_onKidozInitError_m2073814564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1786953989, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2634535605, L_2, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::panelExpand(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_panelExpand_m4080153800 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_panelExpand_m4080153800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral411943973, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::panelCollapse(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_panelCollapse_m448453814 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_panelCollapse_m448453814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2072346691, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::panelReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_panelReady_m1727193656 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_panelReady_m1727193656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral181993062, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::playerOpen(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_playerOpen_m3703786789 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_playerOpen_m3703786789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2681974248, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::playerClose(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_playerClose_m3971267206 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_playerClose_m3971267206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3573343083, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::interstitialOpen(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_interstitialOpen_m41864119 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_interstitialOpen_m41864119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral1254337026, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::interstitialClose(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_interstitialClose_m2639569610 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_interstitialClose_m2639569610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral1502702345, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::interstitialReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_interstitialReady_m393494749 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_interstitialReady_m393494749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral3539090111, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::interstitialOnLoadFail(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_interstitialOnLoadFail_m3823088456 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_interstitialOnLoadFail_m3823088456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral4177012791, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral3319464334, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::interstitialOnNoOffers(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_interstitialOnNoOffers_m1288932714 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_interstitialOnNoOffers_m1288932714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3813179450, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral1553290037, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::onRewardedDone(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_onRewardedDone_m3781073165 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_onRewardedDone_m3781073165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1972472333, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral2877496069, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::onRewardedVideoStarted(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_onRewardedVideoStarted_m1168296053 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_onRewardedVideoStarted_m1168296053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2235470434, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral630883103, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::rewardedOpen(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_rewardedOpen_m1495261806 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_rewardedOpen_m1495261806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral2284309849, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::rewardedClose(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_rewardedClose_m2319131317 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_rewardedClose_m2319131317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral373272912, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::rewardedReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_rewardedReady_m1871158888 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_rewardedReady_m1871158888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral1876484484, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::rewardedOnLoadFail(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_rewardedOnLoadFail_m1290768232 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_rewardedOnLoadFail_m1290768232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2512653941, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral2512653941, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::rewardedOnNoOffers(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_rewardedOnNoOffers_m2749769322 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_rewardedOnNoOffers_m2749769322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral2449932588, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral2449932588, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::bannerReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_bannerReady_m1759568857 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_bannerReady_m1759568857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1378816125, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral1378816125, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::bannerClose(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_bannerClose_m648104984 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_bannerClose_m648104984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3600653270, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral3600653270, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::bannerError(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_bannerError_m1853491568 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_bannerError_m1853491568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1275534620, L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___value0;
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1275534620, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleCode::bannerNoOffers(System.String)
extern "C" IL2CPP_METHOD_ATTR void SampleCode_bannerNoOffers_m3388199898 (SampleCode_t929735280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleCode_bannerNoOffers_m3388199898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3146367320, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Kidoz_t3183170329_il2cpp_TypeInfo_var);
		Kidoz_printToastMessage_m2924981649(NULL /*static, unused*/, _stringLiteral3146367320, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
