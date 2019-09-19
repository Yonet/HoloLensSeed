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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B;
// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B;
// Microsoft.MixedReality.Toolkit.Input.HandRay
struct HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tE0E928A8AFA1825E798A69EB5D4BE993B8227ED2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.ManualCameraControl
struct ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD;
// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9;
// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator
struct HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider
struct SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandState
struct SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465;
// Microsoft.MixedReality.Toolkit.Input.StabilizedRay
struct StabilizedRay_tCE887AC85F7E1C0B2EA6DFE158B4BA7E7440E048;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_t0F9A9396259D09CFAA8130D2B1A43DE5434AD5D0;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t223CDEA89E79F60CB0C83D846FA30D2BD466ADFA;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t74F59DD36FAE0CFB087612565C42CAD359647832;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputSimulationService_t9AF3035C6487685E30A3E3ADB5E2D70DC2C3B443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityServiceRegistry_t32DA3C08833DAE82817D72D1EE88363D3064D911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5D7196C8D3A7E05A50169A365F5A7B3B92600D14____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04734178D407F1573AAACEB7E086B11BCFABD7FF;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB;
IL2CPP_EXTERN_C String_t* _stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31;
IL2CPP_EXTERN_C String_t* _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC55A416CBC09CD3ADC3B9CF34E851BABADE228;
IL2CPP_EXTERN_C String_t* _stringLiteral8577A9196D7296B516251DDE171D133681234282;
IL2CPP_EXTERN_C String_t* _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A;
IL2CPP_EXTERN_C String_t* _stringLiteral873C7DB571EF3373C0E7839A3C42DF3607FC2CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral8B7970623A806CC748C1B218861BE920B011B98C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF5D352A2DB17E5E4545D622A66744A4697ACC3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9123BEB1C67E91B9D1C87834EED0E4805EAB9389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_t9AF3035C6487685E30A3E3ADB5E2D70DC2C3B443_m33255EF491AD44DA64F7825B26A7EEFE2BFAD51A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityServiceRegistry_TryGetService_TisIMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_m11EAC52C13EC4EEBB2BC67A0F3F775159F619EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mEE25CE8D9D7805C77F0C30A71CCF7F2DE1540165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m59310BC9FCEE79F371FF375D192DCCF0E27BDCB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimulatedHandState_FillCurrentFrame_mAC7F8FC883C1A03381FAC69F7483883413845C5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ManualCameraControl_GetCameraControlRotation_m3D19B1E42202CAD6BF39AAB95EC6462FCA39DF1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManualCameraControl_GetCameraControlTranslation_m3DC630831934E8E02C6FBB972D622E6725BC80C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManualCameraControl_ManualCameraControl_MouseLookTick_m04C4081BEC9E40DDA28B18C0A5E33324059B1431_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManualCameraControl_UpdateTransform_m563EAA7EBC627831958271F38D1EF4203D06B4CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManualCameraControl__ctor_m7FF9E6E8F53C26F979266DB8306FD0EF854AC853_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BFMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInputSimulationProfile__ctor_m9769DFD9BDD54BA2B6A190798622CEDC78EA2EEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547ADMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedArticulatedHand_UpdateInteractions_m982D348EDBBB3D148D95B9F7E4BF863AFB851DA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedArticulatedHand__ctor_m5518A9A451EE08DB313A88F7EDF1FCF72BFD5333_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedArticulatedHand_get_DefaultInteractions_mDE48166990BF99C0D3809DD299CDCC0FC06777B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_EnsureProfileSettings_m5FC39BD038B64363C40173D9E60B1BC1606C7A3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCancelHold_m1F67089B7A138E396206FE8E7E0DAEECCE14BFBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCancelManipulation_m774C717F6300ED032BD87747966E2EBFBE9F3159_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCancelNavigation_m7F78258B782D49B12470728A9F18ECFE2C0138A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteHold_mA3B5BAB738C6425798C608310D7D59D6B6FCA1AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteManipulation_m7DD88EA40E108EB197BF22BD11460BF7A3DFBB18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryCompleteNavigation_m725C944777267419341F15E256472663CBCE6AC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryStartHold_m72CBFF5CAEDDC55C9E865745A5DE4C34C1B2E234_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryStartManipulation_m0B58E7807CC8E31CE5F4817A99CC358085866A3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_TryStartNavigation_m2F5F675D13ACB7225B7672755846459058BDF575_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateInteractions_m96F24F8AEC7B7EC9C96EAF20378C4BBF49B26DF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateManipulation_m7D7C54E9B0364BA9862D4326D9606FB6419CCBC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateNavigationRails_mDA8C27C354D28CD6BC7E7EB7E4A84A560D1B08A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_UpdateNavigation_mD504939EDF859CD568D6127F467D193ADF3ADFC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand__ctor_m93581EB80551349B8F9FD7C292CBDBFA5243F97A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_get_DefaultInteractions_m304D32B99A064523F1EC9DFD6873DEB55A56A8AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedGestureHand_get_navigationDelta_m0FD22233CFFA608F80B80E740D01DA6F8E22582A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandDataProvider_SimulateHandInput_mCC63E2A933A7A87E744034D157EFE773F852B134_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandDataProvider_SimulateUserInput_m003E4A8FDD0889C01947CB4851803D1BF049404B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandDataProvider_UpdateHandData_mFF99D6415C49372571D42CE5F17ED9C6D90C539D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandDataProvider__cctor_m9A1A5FCC0ED72FF2FB58E0AF98B36C39C7D98887_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandDataProvider__ctor_m5BDEF9D66F97A11A0B6CA2ADB5322B3DC9845BD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData_Copy_m41ABA1DF6D6E58F82E3DF8D876F210F2D75BCC52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData_Update_m8F8FA53BE78C0B1B1B5AEDD04E81EE37283C2048_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData__cctor_m9FF93A339C2E4BD70FD2048183E316BDEFD82849_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData__ctor_mC0F48E57A15AA83EB147D0682EAFD4B9A13A74E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandData_get_InputSystem_m74B585679CB887A0A5722F761D09C8AC21A5E799_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandState_FillCurrentFrame_mAC7F8FC883C1A03381FAC69F7483883413845C5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandState_ResetGesture_m768808568035F9E15EBC17DF83D75F62A6069EBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandState_Reset_m591616FB0D9CCE8F96F2DD72CAFBC745E6DCAB36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandState_SimulateInput_m4FB2C3E0E8BEC699B55A62FA37BD12F8E018FB6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandState__ctor_m349E18510C30BD47FC7E10C4991BE2C34D676433_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandState_set_GestureBlending_mA9E930861977C6A7651CC2815A9F4C7335E2DB11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_CalculateJointRotations_mA0A1808305AB3D8B589A08E42F9155739D9221AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_GetPalmForwardVector_m9E069A581F41648ADB1D947EDBB726BD867602F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_GetPalmRightVector_m9C646FB51F2C94823DC3EEE26383B22A88EA4301_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils_GetPalmUpVector_mB1852A38F5919EC805FE801DB47DC6DA1E64CCD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHandUtils__cctor_mE9EC43A15625808EECB51ECE0AA4C867F45C6733_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand_TryGetJoint_m14B9D4449933B89DB099541E2901B4017D613B64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand_UpdateState_m76167DB74444C36B375258174DBB71C74806C7E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand__cctor_mD1BA38A6EB0C974530FDAEA1E4A70CE9C16F7B5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimulatedHand__ctor_m93808D1348F3FB6FA63A335E89F47FB5345EE1C4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874;
struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA;
struct MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t22A22D38C0EE8B824B145675D71FBBE1E3B07B69 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct  SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1  : public RuntimeObject
{
public:
	// System.Int64 Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::timestamp
	int64_t ___timestamp_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isTracked
	bool ___isTracked_2;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::joints
	MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___joints_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isPinching
	bool ___isPinching_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::inputSystem
	RuntimeObject* ___inputSystem_5;

public:
	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_isTracked_2() { return static_cast<int32_t>(offsetof(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1, ___isTracked_2)); }
	inline bool get_isTracked_2() const { return ___isTracked_2; }
	inline bool* get_address_of_isTracked_2() { return &___isTracked_2; }
	inline void set_isTracked_2(bool value)
	{
		___isTracked_2 = value;
	}

	inline static int32_t get_offset_of_joints_3() { return static_cast<int32_t>(offsetof(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1, ___joints_3)); }
	inline MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* get_joints_3() const { return ___joints_3; }
	inline MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD** get_address_of_joints_3() { return &___joints_3; }
	inline void set_joints_3(MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* value)
	{
		___joints_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joints_3), (void*)value);
	}

	inline static int32_t get_offset_of_isPinching_4() { return static_cast<int32_t>(offsetof(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1, ___isPinching_4)); }
	inline bool get_isPinching_4() const { return ___isPinching_4; }
	inline bool* get_address_of_isPinching_4() { return &___isPinching_4; }
	inline void set_isPinching_4(bool value)
	{
		___isPinching_4 = value;
	}

	inline static int32_t get_offset_of_inputSystem_5() { return static_cast<int32_t>(offsetof(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1, ___inputSystem_5)); }
	inline RuntimeObject* get_inputSystem_5() const { return ___inputSystem_5; }
	inline RuntimeObject** get_address_of_inputSystem_5() { return &___inputSystem_5; }
	inline void set_inputSystem_5(RuntimeObject* value)
	{
		___inputSystem_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystem_5), (void*)value);
	}
};

struct SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct  SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465  : public RuntimeObject
{
public:

public:
};

struct SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct  ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___localJointPoses_1;

public:
	inline static int32_t get_offset_of_localJointPoses_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422, ___localJointPoses_1)); }
	inline MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* get_localJointPoses_1() const { return ___localJointPoses_1; }
	inline MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD** get_address_of_localJointPoses_1() { return &___localJointPoses_1; }
	inline void set_localJointPoses_1(MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* value)
	{
		___localJointPoses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_1), (void*)value);
	}
};

struct ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::jointCount
	int32_t ___jointCount_0;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_t0F9A9396259D09CFAA8130D2B1A43DE5434AD5D0 * ___handPoses_2;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}

	inline static int32_t get_offset_of_handPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_StaticFields, ___handPoses_2)); }
	inline Dictionary_2_t0F9A9396259D09CFAA8130D2B1A43DE5434AD5D0 * get_handPoses_2() const { return ___handPoses_2; }
	inline Dictionary_2_t0F9A9396259D09CFAA8130D2B1A43DE5434AD5D0 ** get_address_of_handPoses_2() { return &___handPoses_2; }
	inline void set_handPoses_2(Dictionary_2_t0F9A9396259D09CFAA8130D2B1A43DE5434AD5D0 * value)
	{
		___handPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___entries_1)); }
	inline EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___keys_7)); }
	inline KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___values_8)); }
	inline ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_t61B73AC9C8C13E1C63E537737789BCB471C794DD 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t61B73AC9C8C13E1C63E537737789BCB471C794DD__padding[20];
	};

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t5D7196C8D3A7E05A50169A365F5A7B3B92600D14  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t5D7196C8D3A7E05A50169A365F5A7B3B92600D14_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED
	__StaticArrayInitTypeSizeU3D20_t61B73AC9C8C13E1C63E537737789BCB471C794DD  ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0;

public:
	inline static int32_t get_offset_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5D7196C8D3A7E05A50169A365F5A7B3B92600D14_StaticFields, ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0)); }
	inline __StaticArrayInitTypeSizeU3D20_t61B73AC9C8C13E1C63E537737789BCB471C794DD  get_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() const { return ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline __StaticArrayInitTypeSizeU3D20_t61B73AC9C8C13E1C63E537737789BCB471C794DD * get_address_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return &___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline void set_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0(__StaticArrayInitTypeSizeU3D20_t61B73AC9C8C13E1C63E537737789BCB471C794DD  value)
	{
		___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GestureInputType
struct  GestureInputType_tE0BF82A452F97F80C699F9D207127F34EEB261CF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GestureInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureInputType_tE0BF82A452F97F80C699F9D207127F34EEB261CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode
struct  HandSimulationMode_t832EE1D59F2C4C5A884C478C59FB38AB3DA9C762 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.HandSimulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandSimulationMode_t832EE1D59F2C4C5A884C478C59FB38AB3DA9C762, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode
struct  InputSimulationControlMode_t17D676A28E3E944B01D8DF7D018A8F0F17FD1648 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSimulationControlMode_t17D676A28E3E944B01D8DF7D018A8F0F17FD1648, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSimulationMouseButton
struct  InputSimulationMouseButton_t886D1A4C700F02A5E751F7416C33ED1AD88C17F5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSimulationMouseButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSimulationMouseButton_t886D1A4C700F02A5E751F7416C33ED1AD88C17F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ManualCameraControl
struct  ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::profile
	MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * ___profile_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::isMouseJumping
	bool ___isMouseJumping_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::isGamepadLookEnabled
	bool ___isGamepadLookEnabled_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::isFlyKeypressEnabled
	bool ___isFlyKeypressEnabled_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::lastMousePosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lastMousePosition_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::lastTrackerToUnityTranslation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lastTrackerToUnityTranslation_5;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::lastTrackerToUnityRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lastTrackerToUnityRotation_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::wasLooking
	bool ___wasLooking_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::wasCursorVisible
	bool ___wasCursorVisible_8;

public:
	inline static int32_t get_offset_of_profile_0() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___profile_0)); }
	inline MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * get_profile_0() const { return ___profile_0; }
	inline MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 ** get_address_of_profile_0() { return &___profile_0; }
	inline void set_profile_0(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * value)
	{
		___profile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_0), (void*)value);
	}

	inline static int32_t get_offset_of_isMouseJumping_1() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___isMouseJumping_1)); }
	inline bool get_isMouseJumping_1() const { return ___isMouseJumping_1; }
	inline bool* get_address_of_isMouseJumping_1() { return &___isMouseJumping_1; }
	inline void set_isMouseJumping_1(bool value)
	{
		___isMouseJumping_1 = value;
	}

	inline static int32_t get_offset_of_isGamepadLookEnabled_2() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___isGamepadLookEnabled_2)); }
	inline bool get_isGamepadLookEnabled_2() const { return ___isGamepadLookEnabled_2; }
	inline bool* get_address_of_isGamepadLookEnabled_2() { return &___isGamepadLookEnabled_2; }
	inline void set_isGamepadLookEnabled_2(bool value)
	{
		___isGamepadLookEnabled_2 = value;
	}

	inline static int32_t get_offset_of_isFlyKeypressEnabled_3() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___isFlyKeypressEnabled_3)); }
	inline bool get_isFlyKeypressEnabled_3() const { return ___isFlyKeypressEnabled_3; }
	inline bool* get_address_of_isFlyKeypressEnabled_3() { return &___isFlyKeypressEnabled_3; }
	inline void set_isFlyKeypressEnabled_3(bool value)
	{
		___isFlyKeypressEnabled_3 = value;
	}

	inline static int32_t get_offset_of_lastMousePosition_4() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___lastMousePosition_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lastMousePosition_4() const { return ___lastMousePosition_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lastMousePosition_4() { return &___lastMousePosition_4; }
	inline void set_lastMousePosition_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lastMousePosition_4 = value;
	}

	inline static int32_t get_offset_of_lastTrackerToUnityTranslation_5() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___lastTrackerToUnityTranslation_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lastTrackerToUnityTranslation_5() const { return ___lastTrackerToUnityTranslation_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lastTrackerToUnityTranslation_5() { return &___lastTrackerToUnityTranslation_5; }
	inline void set_lastTrackerToUnityTranslation_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lastTrackerToUnityTranslation_5 = value;
	}

	inline static int32_t get_offset_of_lastTrackerToUnityRotation_6() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___lastTrackerToUnityRotation_6)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_lastTrackerToUnityRotation_6() const { return ___lastTrackerToUnityRotation_6; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_lastTrackerToUnityRotation_6() { return &___lastTrackerToUnityRotation_6; }
	inline void set_lastTrackerToUnityRotation_6(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___lastTrackerToUnityRotation_6 = value;
	}

	inline static int32_t get_offset_of_wasLooking_7() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___wasLooking_7)); }
	inline bool get_wasLooking_7() const { return ___wasLooking_7; }
	inline bool* get_address_of_wasLooking_7() { return &___wasLooking_7; }
	inline void set_wasLooking_7(bool value)
	{
		___wasLooking_7 = value;
	}

	inline static int32_t get_offset_of_wasCursorVisible_8() { return static_cast<int32_t>(offsetof(ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB, ___wasCursorVisible_8)); }
	inline bool get_wasCursorVisible_8() const { return ___wasCursorVisible_8; }
	inline bool* get_address_of_wasCursorVisible_8() { return &___wasCursorVisible_8; }
	inline void set_wasCursorVisible_8(bool value)
	{
		___wasCursorVisible_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tA4B3C624DF9D6B518A15D682BA0207573D1611EA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tA4B3C624DF9D6B518A15D682BA0207573D1611EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId
struct  GestureId_tC7E0E1660275BEE4341D718A2D819A1AEEB7BE62 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureId_tC7E0E1660275BEE4341D718A2D819A1AEEB7BE62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings
struct  WindowsGestureSettings_t1876E81B36888DFF13EDC8D13F0509B5253DD430 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsGestureSettings_t1876E81B36888DFF13EDC8D13F0509B5253DD430, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 
{
public:
	// T System.Nullable`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Input.BaseController::inputSystem
	RuntimeObject* ___inputSystem_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___U3CDefaultInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___U3CInteractionsU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_inputSystem_0() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___inputSystem_0)); }
	inline RuntimeObject* get_inputSystem_0() const { return ___inputSystem_0; }
	inline RuntimeObject** get_address_of_inputSystem_0() { return &___inputSystem_0; }
	inline void set_inputSystem_0(RuntimeObject* value)
	{
		___inputSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystem_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CDefaultInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* get_U3CDefaultInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_1() { return &___U3CDefaultInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultInteractionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_3)); }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_3() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_3; }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_3() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_3; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_3(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CEnabledU3Ek__BackingField_4)); }
	inline bool get_U3CEnabledU3Ek__BackingField_4() const { return ___U3CEnabledU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_4() { return &___U3CEnabledU3Ek__BackingField_4; }
	inline void set_U3CEnabledU3Ek__BackingField_4(bool value)
	{
		___U3CEnabledU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CTrackingStateU3Ek__BackingField_5)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_5() const { return ___U3CTrackingStateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_5() { return &___U3CTrackingStateU3Ek__BackingField_5; }
	inline void set_U3CTrackingStateU3Ek__BackingField_5(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CControllerHandednessU3Ek__BackingField_6)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_6() const { return ___U3CControllerHandednessU3Ek__BackingField_6; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_6() { return &___U3CControllerHandednessU3Ek__BackingField_6; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_6(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CInputSourceU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_7() const { return ___U3CInputSourceU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_7() { return &___U3CInputSourceU3Ek__BackingField_7; }
	inline void set_U3CInputSourceU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CVisualizerU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_8() const { return ___U3CVisualizerU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_8() { return &___U3CVisualizerU3Ek__BackingField_8; }
	inline void set_U3CVisualizerU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CIsPositionAvailableU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_9() const { return ___U3CIsPositionAvailableU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_9() { return &___U3CIsPositionAvailableU3Ek__BackingField_9; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CIsPositionApproximateU3Ek__BackingField_10)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_10() const { return ___U3CIsPositionApproximateU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_10() { return &___U3CIsPositionApproximateU3Ek__BackingField_10; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_10(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CIsRotationAvailableU3Ek__BackingField_11)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_11() const { return ___U3CIsRotationAvailableU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_11() { return &___U3CIsRotationAvailableU3Ek__BackingField_11; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_11(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CInteractionsU3Ek__BackingField_12)); }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* get_U3CInteractionsU3Ek__BackingField_12() const { return ___U3CInteractionsU3Ek__BackingField_12; }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA** get_address_of_U3CInteractionsU3Ek__BackingField_12() { return &___U3CInteractionsU3Ek__BackingField_12; }
	inline void set_U3CInteractionsU3Ek__BackingField_12(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* value)
	{
		___U3CInteractionsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CAngularVelocityU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_13() const { return ___U3CAngularVelocityU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_13() { return &___U3CAngularVelocityU3Ek__BackingField_13; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CVelocityU3Ek__BackingField_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_14() const { return ___U3CVelocityU3Ek__BackingField_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_14() { return &___U3CVelocityU3Ek__BackingField_14; }
	inline void set_U3CVelocityU3Ek__BackingField_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandRay
struct  HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285  : public RuntimeObject
{
public:
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::ray
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_0;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamBackwardTolerance
	float ___CursorBeamBackwardTolerance_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamUpTolerance
	float ___CursorBeamUpTolerance_11;
	// Microsoft.MixedReality.Toolkit.Input.StabilizedRay Microsoft.MixedReality.Toolkit.Input.HandRay::stabilizedRay
	StabilizedRay_tCE887AC85F7E1C0B2EA6DFE158B4BA7E7440E048 * ___stabilizedRay_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::palmNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___palmNormal_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::headForward
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___headForward_15;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285, ___ray_0)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_ray_0() const { return ___ray_0; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_CursorBeamBackwardTolerance_10() { return static_cast<int32_t>(offsetof(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285, ___CursorBeamBackwardTolerance_10)); }
	inline float get_CursorBeamBackwardTolerance_10() const { return ___CursorBeamBackwardTolerance_10; }
	inline float* get_address_of_CursorBeamBackwardTolerance_10() { return &___CursorBeamBackwardTolerance_10; }
	inline void set_CursorBeamBackwardTolerance_10(float value)
	{
		___CursorBeamBackwardTolerance_10 = value;
	}

	inline static int32_t get_offset_of_CursorBeamUpTolerance_11() { return static_cast<int32_t>(offsetof(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285, ___CursorBeamUpTolerance_11)); }
	inline float get_CursorBeamUpTolerance_11() const { return ___CursorBeamUpTolerance_11; }
	inline float* get_address_of_CursorBeamUpTolerance_11() { return &___CursorBeamUpTolerance_11; }
	inline void set_CursorBeamUpTolerance_11(float value)
	{
		___CursorBeamUpTolerance_11 = value;
	}

	inline static int32_t get_offset_of_stabilizedRay_13() { return static_cast<int32_t>(offsetof(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285, ___stabilizedRay_13)); }
	inline StabilizedRay_tCE887AC85F7E1C0B2EA6DFE158B4BA7E7440E048 * get_stabilizedRay_13() const { return ___stabilizedRay_13; }
	inline StabilizedRay_tCE887AC85F7E1C0B2EA6DFE158B4BA7E7440E048 ** get_address_of_stabilizedRay_13() { return &___stabilizedRay_13; }
	inline void set_stabilizedRay_13(StabilizedRay_tCE887AC85F7E1C0B2EA6DFE158B4BA7E7440E048 * value)
	{
		___stabilizedRay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizedRay_13), (void*)value);
	}

	inline static int32_t get_offset_of_palmNormal_14() { return static_cast<int32_t>(offsetof(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285, ___palmNormal_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_palmNormal_14() const { return ___palmNormal_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_palmNormal_14() { return &___palmNormal_14; }
	inline void set_palmNormal_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___palmNormal_14 = value;
	}

	inline static int32_t get_offset_of_headForward_15() { return static_cast<int32_t>(offsetof(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285, ___headForward_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_headForward_15() const { return ___headForward_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_headForward_15() { return &___headForward_15; }
	inline void set_headForward_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___headForward_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider
struct  SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::profile
	MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * ___profile_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::IsAlwaysVisibleLeft
	bool ___IsAlwaysVisibleLeft_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::IsAlwaysVisibleRight
	bool ___IsAlwaysVisibleRight_3;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandState Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::HandStateLeft
	SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * ___HandStateLeft_4;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandState Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::HandStateRight
	SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * ___HandStateRight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::isSimulatingLeft
	bool ___isSimulatingLeft_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::isSimulatingRight
	bool ___isSimulatingRight_7;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::lastMousePosition
	Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  ___lastMousePosition_8;
	// System.Int64 Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::lastSimulatedTimestampLeft
	int64_t ___lastSimulatedTimestampLeft_9;
	// System.Int64 Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::lastSimulatedTimestampRight
	int64_t ___lastSimulatedTimestampRight_10;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::generatorLeft
	HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * ___generatorLeft_11;
	// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::generatorRight
	HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * ___generatorRight_12;

public:
	inline static int32_t get_offset_of_profile_1() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___profile_1)); }
	inline MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * get_profile_1() const { return ___profile_1; }
	inline MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 ** get_address_of_profile_1() { return &___profile_1; }
	inline void set_profile_1(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * value)
	{
		___profile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_1), (void*)value);
	}

	inline static int32_t get_offset_of_IsAlwaysVisibleLeft_2() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___IsAlwaysVisibleLeft_2)); }
	inline bool get_IsAlwaysVisibleLeft_2() const { return ___IsAlwaysVisibleLeft_2; }
	inline bool* get_address_of_IsAlwaysVisibleLeft_2() { return &___IsAlwaysVisibleLeft_2; }
	inline void set_IsAlwaysVisibleLeft_2(bool value)
	{
		___IsAlwaysVisibleLeft_2 = value;
	}

	inline static int32_t get_offset_of_IsAlwaysVisibleRight_3() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___IsAlwaysVisibleRight_3)); }
	inline bool get_IsAlwaysVisibleRight_3() const { return ___IsAlwaysVisibleRight_3; }
	inline bool* get_address_of_IsAlwaysVisibleRight_3() { return &___IsAlwaysVisibleRight_3; }
	inline void set_IsAlwaysVisibleRight_3(bool value)
	{
		___IsAlwaysVisibleRight_3 = value;
	}

	inline static int32_t get_offset_of_HandStateLeft_4() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___HandStateLeft_4)); }
	inline SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * get_HandStateLeft_4() const { return ___HandStateLeft_4; }
	inline SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 ** get_address_of_HandStateLeft_4() { return &___HandStateLeft_4; }
	inline void set_HandStateLeft_4(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * value)
	{
		___HandStateLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandStateLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_HandStateRight_5() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___HandStateRight_5)); }
	inline SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * get_HandStateRight_5() const { return ___HandStateRight_5; }
	inline SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 ** get_address_of_HandStateRight_5() { return &___HandStateRight_5; }
	inline void set_HandStateRight_5(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * value)
	{
		___HandStateRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandStateRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_isSimulatingLeft_6() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___isSimulatingLeft_6)); }
	inline bool get_isSimulatingLeft_6() const { return ___isSimulatingLeft_6; }
	inline bool* get_address_of_isSimulatingLeft_6() { return &___isSimulatingLeft_6; }
	inline void set_isSimulatingLeft_6(bool value)
	{
		___isSimulatingLeft_6 = value;
	}

	inline static int32_t get_offset_of_isSimulatingRight_7() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___isSimulatingRight_7)); }
	inline bool get_isSimulatingRight_7() const { return ___isSimulatingRight_7; }
	inline bool* get_address_of_isSimulatingRight_7() { return &___isSimulatingRight_7; }
	inline void set_isSimulatingRight_7(bool value)
	{
		___isSimulatingRight_7 = value;
	}

	inline static int32_t get_offset_of_lastMousePosition_8() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___lastMousePosition_8)); }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  get_lastMousePosition_8() const { return ___lastMousePosition_8; }
	inline Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * get_address_of_lastMousePosition_8() { return &___lastMousePosition_8; }
	inline void set_lastMousePosition_8(Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  value)
	{
		___lastMousePosition_8 = value;
	}

	inline static int32_t get_offset_of_lastSimulatedTimestampLeft_9() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___lastSimulatedTimestampLeft_9)); }
	inline int64_t get_lastSimulatedTimestampLeft_9() const { return ___lastSimulatedTimestampLeft_9; }
	inline int64_t* get_address_of_lastSimulatedTimestampLeft_9() { return &___lastSimulatedTimestampLeft_9; }
	inline void set_lastSimulatedTimestampLeft_9(int64_t value)
	{
		___lastSimulatedTimestampLeft_9 = value;
	}

	inline static int32_t get_offset_of_lastSimulatedTimestampRight_10() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___lastSimulatedTimestampRight_10)); }
	inline int64_t get_lastSimulatedTimestampRight_10() const { return ___lastSimulatedTimestampRight_10; }
	inline int64_t* get_address_of_lastSimulatedTimestampRight_10() { return &___lastSimulatedTimestampRight_10; }
	inline void set_lastSimulatedTimestampRight_10(int64_t value)
	{
		___lastSimulatedTimestampRight_10 = value;
	}

	inline static int32_t get_offset_of_generatorLeft_11() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___generatorLeft_11)); }
	inline HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * get_generatorLeft_11() const { return ___generatorLeft_11; }
	inline HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 ** get_address_of_generatorLeft_11() { return &___generatorLeft_11; }
	inline void set_generatorLeft_11(HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * value)
	{
		___generatorLeft_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generatorLeft_11), (void*)value);
	}

	inline static int32_t get_offset_of_generatorRight_12() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3, ___generatorRight_12)); }
	inline HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * get_generatorRight_12() const { return ___generatorRight_12; }
	inline HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 ** get_address_of_generatorRight_12() { return &___generatorRight_12; }
	inline void set_generatorRight_12(HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * value)
	{
		___generatorRight_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generatorRight_12), (void*)value);
	}
};

struct SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandState
struct  SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::handedness
	uint8_t ___handedness_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::IsTracked
	bool ___IsTracked_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::<IsPinching>k__BackingField
	bool ___U3CIsPinchingU3Ek__BackingField_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::ScreenPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___ScreenPosition_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::HandRotateEulerAngles
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___HandRotateEulerAngles_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::JitterOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___JitterOffset_5;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::gesture
	int32_t ___gesture_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::gestureBlending
	float ___gestureBlending_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::poseBlending
	float ___poseBlending_8;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::pose
	ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * ___pose_9;

public:
	inline static int32_t get_offset_of_handedness_0() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___handedness_0)); }
	inline uint8_t get_handedness_0() const { return ___handedness_0; }
	inline uint8_t* get_address_of_handedness_0() { return &___handedness_0; }
	inline void set_handedness_0(uint8_t value)
	{
		___handedness_0 = value;
	}

	inline static int32_t get_offset_of_IsTracked_1() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___IsTracked_1)); }
	inline bool get_IsTracked_1() const { return ___IsTracked_1; }
	inline bool* get_address_of_IsTracked_1() { return &___IsTracked_1; }
	inline void set_IsTracked_1(bool value)
	{
		___IsTracked_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsPinchingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___U3CIsPinchingU3Ek__BackingField_2)); }
	inline bool get_U3CIsPinchingU3Ek__BackingField_2() const { return ___U3CIsPinchingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsPinchingU3Ek__BackingField_2() { return &___U3CIsPinchingU3Ek__BackingField_2; }
	inline void set_U3CIsPinchingU3Ek__BackingField_2(bool value)
	{
		___U3CIsPinchingU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_ScreenPosition_3() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___ScreenPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_ScreenPosition_3() const { return ___ScreenPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_ScreenPosition_3() { return &___ScreenPosition_3; }
	inline void set_ScreenPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___ScreenPosition_3 = value;
	}

	inline static int32_t get_offset_of_HandRotateEulerAngles_4() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___HandRotateEulerAngles_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_HandRotateEulerAngles_4() const { return ___HandRotateEulerAngles_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_HandRotateEulerAngles_4() { return &___HandRotateEulerAngles_4; }
	inline void set_HandRotateEulerAngles_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___HandRotateEulerAngles_4 = value;
	}

	inline static int32_t get_offset_of_JitterOffset_5() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___JitterOffset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_JitterOffset_5() const { return ___JitterOffset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_JitterOffset_5() { return &___JitterOffset_5; }
	inline void set_JitterOffset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___JitterOffset_5 = value;
	}

	inline static int32_t get_offset_of_gesture_6() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___gesture_6)); }
	inline int32_t get_gesture_6() const { return ___gesture_6; }
	inline int32_t* get_address_of_gesture_6() { return &___gesture_6; }
	inline void set_gesture_6(int32_t value)
	{
		___gesture_6 = value;
	}

	inline static int32_t get_offset_of_gestureBlending_7() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___gestureBlending_7)); }
	inline float get_gestureBlending_7() const { return ___gestureBlending_7; }
	inline float* get_address_of_gestureBlending_7() { return &___gestureBlending_7; }
	inline void set_gestureBlending_7(float value)
	{
		___gestureBlending_7 = value;
	}

	inline static int32_t get_offset_of_poseBlending_8() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___poseBlending_8)); }
	inline float get_poseBlending_8() const { return ___poseBlending_8; }
	inline float* get_address_of_poseBlending_8() { return &___poseBlending_8; }
	inline void set_poseBlending_8(float value)
	{
		___poseBlending_8 = value;
	}

	inline static int32_t get_offset_of_pose_9() { return static_cast<int32_t>(offsetof(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911, ___pose_9)); }
	inline ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * get_pose_9() const { return ___pose_9; }
	inline ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 ** get_address_of_pose_9() { return &___pose_9; }
	inline void set_pose_9(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * value)
	{
		___pose_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pose_9), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct  BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B  : public BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B
{
public:
	// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::<HandRay>k__BackingField
	HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * ___U3CHandRayU3Ek__BackingField_15;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseHand::deltaTimeStart
	float ___deltaTimeStart_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.BaseHand::frameOn
	int32_t ___frameOn_18;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsCache
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___velocityPositionsCache_19;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsCache
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___velocityNormalsCache_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocityPositionsSum_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocityNormalsSum_22;

public:
	inline static int32_t get_offset_of_U3CHandRayU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___U3CHandRayU3Ek__BackingField_15)); }
	inline HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * get_U3CHandRayU3Ek__BackingField_15() const { return ___U3CHandRayU3Ek__BackingField_15; }
	inline HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 ** get_address_of_U3CHandRayU3Ek__BackingField_15() { return &___U3CHandRayU3Ek__BackingField_15; }
	inline void set_U3CHandRayU3Ek__BackingField_15(HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * value)
	{
		___U3CHandRayU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandRayU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_deltaTimeStart_16() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___deltaTimeStart_16)); }
	inline float get_deltaTimeStart_16() const { return ___deltaTimeStart_16; }
	inline float* get_address_of_deltaTimeStart_16() { return &___deltaTimeStart_16; }
	inline void set_deltaTimeStart_16(float value)
	{
		___deltaTimeStart_16 = value;
	}

	inline static int32_t get_offset_of_frameOn_18() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___frameOn_18)); }
	inline int32_t get_frameOn_18() const { return ___frameOn_18; }
	inline int32_t* get_address_of_frameOn_18() { return &___frameOn_18; }
	inline void set_frameOn_18(int32_t value)
	{
		___frameOn_18 = value;
	}

	inline static int32_t get_offset_of_velocityPositionsCache_19() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___velocityPositionsCache_19)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_velocityPositionsCache_19() const { return ___velocityPositionsCache_19; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_velocityPositionsCache_19() { return &___velocityPositionsCache_19; }
	inline void set_velocityPositionsCache_19(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___velocityPositionsCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityPositionsCache_19), (void*)value);
	}

	inline static int32_t get_offset_of_velocityNormalsCache_20() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___velocityNormalsCache_20)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_velocityNormalsCache_20() const { return ___velocityNormalsCache_20; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_velocityNormalsCache_20() { return &___velocityNormalsCache_20; }
	inline void set_velocityNormalsCache_20(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___velocityNormalsCache_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityNormalsCache_20), (void*)value);
	}

	inline static int32_t get_offset_of_velocityPositionsSum_21() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___velocityPositionsSum_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocityPositionsSum_21() const { return ___velocityPositionsSum_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocityPositionsSum_21() { return &___velocityPositionsSum_21; }
	inline void set_velocityPositionsSum_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocityPositionsSum_21 = value;
	}

	inline static int32_t get_offset_of_velocityNormalsSum_22() { return static_cast<int32_t>(offsetof(BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B, ___velocityNormalsSum_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocityNormalsSum_22() const { return ___velocityNormalsSum_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocityNormalsSum_22() { return &___velocityNormalsSum_22; }
	inline void set_velocityNormalsSum_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocityNormalsSum_22 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct  MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::gestureType
	int32_t ___gestureType_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::action
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___action_2;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_0), (void*)value);
	}

	inline static int32_t get_offset_of_gestureType_1() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074, ___gestureType_1)); }
	inline int32_t get_gestureType_1() const { return ___gestureType_1; }
	inline int32_t* get_address_of_gestureType_1() { return &___gestureType_1; }
	inline void set_gestureType_1(int32_t value)
	{
		___gestureType_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074, ___action_2)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_2))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074_marshaled_pinvoke
{
	char* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074_marshaled_com
{
	Il2CppChar* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com ___action_2;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___inputAction_4)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___poseData_17)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator
struct  HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct  MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::manipulationGestures
	int32_t ___manipulationGestures_5;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::navigationGestures
	int32_t ___navigationGestures_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::useRailsNavigation
	bool ___useRailsNavigation_7;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::railsNavigationGestures
	int32_t ___railsNavigationGestures_8;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::windowsGestureAutoStart
	int32_t ___windowsGestureAutoStart_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::gestures
	MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* ___gestures_10;

public:
	inline static int32_t get_offset_of_manipulationGestures_5() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725, ___manipulationGestures_5)); }
	inline int32_t get_manipulationGestures_5() const { return ___manipulationGestures_5; }
	inline int32_t* get_address_of_manipulationGestures_5() { return &___manipulationGestures_5; }
	inline void set_manipulationGestures_5(int32_t value)
	{
		___manipulationGestures_5 = value;
	}

	inline static int32_t get_offset_of_navigationGestures_6() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725, ___navigationGestures_6)); }
	inline int32_t get_navigationGestures_6() const { return ___navigationGestures_6; }
	inline int32_t* get_address_of_navigationGestures_6() { return &___navigationGestures_6; }
	inline void set_navigationGestures_6(int32_t value)
	{
		___navigationGestures_6 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_7() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725, ___useRailsNavigation_7)); }
	inline bool get_useRailsNavigation_7() const { return ___useRailsNavigation_7; }
	inline bool* get_address_of_useRailsNavigation_7() { return &___useRailsNavigation_7; }
	inline void set_useRailsNavigation_7(bool value)
	{
		___useRailsNavigation_7 = value;
	}

	inline static int32_t get_offset_of_railsNavigationGestures_8() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725, ___railsNavigationGestures_8)); }
	inline int32_t get_railsNavigationGestures_8() const { return ___railsNavigationGestures_8; }
	inline int32_t* get_address_of_railsNavigationGestures_8() { return &___railsNavigationGestures_8; }
	inline void set_railsNavigationGestures_8(int32_t value)
	{
		___railsNavigationGestures_8 = value;
	}

	inline static int32_t get_offset_of_windowsGestureAutoStart_9() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725, ___windowsGestureAutoStart_9)); }
	inline int32_t get_windowsGestureAutoStart_9() const { return ___windowsGestureAutoStart_9; }
	inline int32_t* get_address_of_windowsGestureAutoStart_9() { return &___windowsGestureAutoStart_9; }
	inline void set_windowsGestureAutoStart_9(int32_t value)
	{
		___windowsGestureAutoStart_9 = value;
	}

	inline static int32_t get_offset_of_gestures_10() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725, ___gestures_10)); }
	inline MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* get_gestures_10() const { return ___gestures_10; }
	inline MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874** get_address_of_gestures_10() { return &___gestures_10; }
	inline void set_gestures_10(MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* value)
	{
		___gestures_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestures_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct  MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isCameraControlEnabled
	bool ___isCameraControlEnabled_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::extraMouseSensitivityScale
	float ___extraMouseSensitivityScale_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultMouseSensitivity
	float ___defaultMouseSensitivity_7;
	// Microsoft.MixedReality.Toolkit.Input.InputSimulationMouseButton Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookButton
	int32_t ___mouseLookButton_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isControllerLookInverted
	bool ___isControllerLookInverted_9;
	// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::currentControlMode
	int32_t ___currentControlMode_10;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::fastControlKey
	int32_t ___fastControlKey_11;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlSlowSpeed
	float ___controlSlowSpeed_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlFastSpeed
	float ___controlFastSpeed_13;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveHorizontal
	String_t* ___moveHorizontal_14;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveVertical
	String_t* ___moveVertical_15;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseX
	String_t* ___mouseX_16;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseY
	String_t* ___mouseY_17;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookHorizontal
	String_t* ___lookHorizontal_18;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookVertical
	String_t* ___lookVertical_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::simulateEyePosition
	bool ___simulateEyePosition_20;
	// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handSimulationMode
	int32_t ___handSimulationMode_21;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleLeftHandKey
	int32_t ___toggleLeftHandKey_22;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleRightHandKey
	int32_t ___toggleRightHandKey_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handHideTimeout
	float ___handHideTimeout_24;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftHandManipulationKey
	int32_t ___leftHandManipulationKey_25;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightHandManipulationKey
	int32_t ___rightHandManipulationKey_26;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandGesture
	int32_t ___defaultHandGesture_27;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftMouseHandGesture
	int32_t ___leftMouseHandGesture_28;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::middleMouseHandGesture
	int32_t ___middleMouseHandGesture_29;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightMouseHandGesture
	int32_t ___rightMouseHandGesture_30;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handGestureAnimationSpeed
	float ___handGestureAnimationSpeed_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::holdStartDuration
	float ___holdStartDuration_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::navigationStartThreshold
	float ___navigationStartThreshold_33;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandDistance
	float ___defaultHandDistance_34;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handDepthMultiplier
	float ___handDepthMultiplier_35;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handJitterAmount
	float ___handJitterAmount_36;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::yawHandCWKey
	int32_t ___yawHandCWKey_37;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::yawHandCCWKey
	int32_t ___yawHandCCWKey_38;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::pitchHandCWKey
	int32_t ___pitchHandCWKey_39;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::pitchHandCCWKey
	int32_t ___pitchHandCCWKey_40;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rollHandCWKey
	int32_t ___rollHandCWKey_41;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rollHandCCWKey
	int32_t ___rollHandCCWKey_42;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handRotationSpeed
	float ___handRotationSpeed_43;

public:
	inline static int32_t get_offset_of_isCameraControlEnabled_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___isCameraControlEnabled_5)); }
	inline bool get_isCameraControlEnabled_5() const { return ___isCameraControlEnabled_5; }
	inline bool* get_address_of_isCameraControlEnabled_5() { return &___isCameraControlEnabled_5; }
	inline void set_isCameraControlEnabled_5(bool value)
	{
		___isCameraControlEnabled_5 = value;
	}

	inline static int32_t get_offset_of_extraMouseSensitivityScale_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___extraMouseSensitivityScale_6)); }
	inline float get_extraMouseSensitivityScale_6() const { return ___extraMouseSensitivityScale_6; }
	inline float* get_address_of_extraMouseSensitivityScale_6() { return &___extraMouseSensitivityScale_6; }
	inline void set_extraMouseSensitivityScale_6(float value)
	{
		___extraMouseSensitivityScale_6 = value;
	}

	inline static int32_t get_offset_of_defaultMouseSensitivity_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___defaultMouseSensitivity_7)); }
	inline float get_defaultMouseSensitivity_7() const { return ___defaultMouseSensitivity_7; }
	inline float* get_address_of_defaultMouseSensitivity_7() { return &___defaultMouseSensitivity_7; }
	inline void set_defaultMouseSensitivity_7(float value)
	{
		___defaultMouseSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_mouseLookButton_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___mouseLookButton_8)); }
	inline int32_t get_mouseLookButton_8() const { return ___mouseLookButton_8; }
	inline int32_t* get_address_of_mouseLookButton_8() { return &___mouseLookButton_8; }
	inline void set_mouseLookButton_8(int32_t value)
	{
		___mouseLookButton_8 = value;
	}

	inline static int32_t get_offset_of_isControllerLookInverted_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___isControllerLookInverted_9)); }
	inline bool get_isControllerLookInverted_9() const { return ___isControllerLookInverted_9; }
	inline bool* get_address_of_isControllerLookInverted_9() { return &___isControllerLookInverted_9; }
	inline void set_isControllerLookInverted_9(bool value)
	{
		___isControllerLookInverted_9 = value;
	}

	inline static int32_t get_offset_of_currentControlMode_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___currentControlMode_10)); }
	inline int32_t get_currentControlMode_10() const { return ___currentControlMode_10; }
	inline int32_t* get_address_of_currentControlMode_10() { return &___currentControlMode_10; }
	inline void set_currentControlMode_10(int32_t value)
	{
		___currentControlMode_10 = value;
	}

	inline static int32_t get_offset_of_fastControlKey_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___fastControlKey_11)); }
	inline int32_t get_fastControlKey_11() const { return ___fastControlKey_11; }
	inline int32_t* get_address_of_fastControlKey_11() { return &___fastControlKey_11; }
	inline void set_fastControlKey_11(int32_t value)
	{
		___fastControlKey_11 = value;
	}

	inline static int32_t get_offset_of_controlSlowSpeed_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___controlSlowSpeed_12)); }
	inline float get_controlSlowSpeed_12() const { return ___controlSlowSpeed_12; }
	inline float* get_address_of_controlSlowSpeed_12() { return &___controlSlowSpeed_12; }
	inline void set_controlSlowSpeed_12(float value)
	{
		___controlSlowSpeed_12 = value;
	}

	inline static int32_t get_offset_of_controlFastSpeed_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___controlFastSpeed_13)); }
	inline float get_controlFastSpeed_13() const { return ___controlFastSpeed_13; }
	inline float* get_address_of_controlFastSpeed_13() { return &___controlFastSpeed_13; }
	inline void set_controlFastSpeed_13(float value)
	{
		___controlFastSpeed_13 = value;
	}

	inline static int32_t get_offset_of_moveHorizontal_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___moveHorizontal_14)); }
	inline String_t* get_moveHorizontal_14() const { return ___moveHorizontal_14; }
	inline String_t** get_address_of_moveHorizontal_14() { return &___moveHorizontal_14; }
	inline void set_moveHorizontal_14(String_t* value)
	{
		___moveHorizontal_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveHorizontal_14), (void*)value);
	}

	inline static int32_t get_offset_of_moveVertical_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___moveVertical_15)); }
	inline String_t* get_moveVertical_15() const { return ___moveVertical_15; }
	inline String_t** get_address_of_moveVertical_15() { return &___moveVertical_15; }
	inline void set_moveVertical_15(String_t* value)
	{
		___moveVertical_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveVertical_15), (void*)value);
	}

	inline static int32_t get_offset_of_mouseX_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___mouseX_16)); }
	inline String_t* get_mouseX_16() const { return ___mouseX_16; }
	inline String_t** get_address_of_mouseX_16() { return &___mouseX_16; }
	inline void set_mouseX_16(String_t* value)
	{
		___mouseX_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseX_16), (void*)value);
	}

	inline static int32_t get_offset_of_mouseY_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___mouseY_17)); }
	inline String_t* get_mouseY_17() const { return ___mouseY_17; }
	inline String_t** get_address_of_mouseY_17() { return &___mouseY_17; }
	inline void set_mouseY_17(String_t* value)
	{
		___mouseY_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseY_17), (void*)value);
	}

	inline static int32_t get_offset_of_lookHorizontal_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___lookHorizontal_18)); }
	inline String_t* get_lookHorizontal_18() const { return ___lookHorizontal_18; }
	inline String_t** get_address_of_lookHorizontal_18() { return &___lookHorizontal_18; }
	inline void set_lookHorizontal_18(String_t* value)
	{
		___lookHorizontal_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookHorizontal_18), (void*)value);
	}

	inline static int32_t get_offset_of_lookVertical_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___lookVertical_19)); }
	inline String_t* get_lookVertical_19() const { return ___lookVertical_19; }
	inline String_t** get_address_of_lookVertical_19() { return &___lookVertical_19; }
	inline void set_lookVertical_19(String_t* value)
	{
		___lookVertical_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookVertical_19), (void*)value);
	}

	inline static int32_t get_offset_of_simulateEyePosition_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___simulateEyePosition_20)); }
	inline bool get_simulateEyePosition_20() const { return ___simulateEyePosition_20; }
	inline bool* get_address_of_simulateEyePosition_20() { return &___simulateEyePosition_20; }
	inline void set_simulateEyePosition_20(bool value)
	{
		___simulateEyePosition_20 = value;
	}

	inline static int32_t get_offset_of_handSimulationMode_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___handSimulationMode_21)); }
	inline int32_t get_handSimulationMode_21() const { return ___handSimulationMode_21; }
	inline int32_t* get_address_of_handSimulationMode_21() { return &___handSimulationMode_21; }
	inline void set_handSimulationMode_21(int32_t value)
	{
		___handSimulationMode_21 = value;
	}

	inline static int32_t get_offset_of_toggleLeftHandKey_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___toggleLeftHandKey_22)); }
	inline int32_t get_toggleLeftHandKey_22() const { return ___toggleLeftHandKey_22; }
	inline int32_t* get_address_of_toggleLeftHandKey_22() { return &___toggleLeftHandKey_22; }
	inline void set_toggleLeftHandKey_22(int32_t value)
	{
		___toggleLeftHandKey_22 = value;
	}

	inline static int32_t get_offset_of_toggleRightHandKey_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___toggleRightHandKey_23)); }
	inline int32_t get_toggleRightHandKey_23() const { return ___toggleRightHandKey_23; }
	inline int32_t* get_address_of_toggleRightHandKey_23() { return &___toggleRightHandKey_23; }
	inline void set_toggleRightHandKey_23(int32_t value)
	{
		___toggleRightHandKey_23 = value;
	}

	inline static int32_t get_offset_of_handHideTimeout_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___handHideTimeout_24)); }
	inline float get_handHideTimeout_24() const { return ___handHideTimeout_24; }
	inline float* get_address_of_handHideTimeout_24() { return &___handHideTimeout_24; }
	inline void set_handHideTimeout_24(float value)
	{
		___handHideTimeout_24 = value;
	}

	inline static int32_t get_offset_of_leftHandManipulationKey_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___leftHandManipulationKey_25)); }
	inline int32_t get_leftHandManipulationKey_25() const { return ___leftHandManipulationKey_25; }
	inline int32_t* get_address_of_leftHandManipulationKey_25() { return &___leftHandManipulationKey_25; }
	inline void set_leftHandManipulationKey_25(int32_t value)
	{
		___leftHandManipulationKey_25 = value;
	}

	inline static int32_t get_offset_of_rightHandManipulationKey_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___rightHandManipulationKey_26)); }
	inline int32_t get_rightHandManipulationKey_26() const { return ___rightHandManipulationKey_26; }
	inline int32_t* get_address_of_rightHandManipulationKey_26() { return &___rightHandManipulationKey_26; }
	inline void set_rightHandManipulationKey_26(int32_t value)
	{
		___rightHandManipulationKey_26 = value;
	}

	inline static int32_t get_offset_of_defaultHandGesture_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___defaultHandGesture_27)); }
	inline int32_t get_defaultHandGesture_27() const { return ___defaultHandGesture_27; }
	inline int32_t* get_address_of_defaultHandGesture_27() { return &___defaultHandGesture_27; }
	inline void set_defaultHandGesture_27(int32_t value)
	{
		___defaultHandGesture_27 = value;
	}

	inline static int32_t get_offset_of_leftMouseHandGesture_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___leftMouseHandGesture_28)); }
	inline int32_t get_leftMouseHandGesture_28() const { return ___leftMouseHandGesture_28; }
	inline int32_t* get_address_of_leftMouseHandGesture_28() { return &___leftMouseHandGesture_28; }
	inline void set_leftMouseHandGesture_28(int32_t value)
	{
		___leftMouseHandGesture_28 = value;
	}

	inline static int32_t get_offset_of_middleMouseHandGesture_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___middleMouseHandGesture_29)); }
	inline int32_t get_middleMouseHandGesture_29() const { return ___middleMouseHandGesture_29; }
	inline int32_t* get_address_of_middleMouseHandGesture_29() { return &___middleMouseHandGesture_29; }
	inline void set_middleMouseHandGesture_29(int32_t value)
	{
		___middleMouseHandGesture_29 = value;
	}

	inline static int32_t get_offset_of_rightMouseHandGesture_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___rightMouseHandGesture_30)); }
	inline int32_t get_rightMouseHandGesture_30() const { return ___rightMouseHandGesture_30; }
	inline int32_t* get_address_of_rightMouseHandGesture_30() { return &___rightMouseHandGesture_30; }
	inline void set_rightMouseHandGesture_30(int32_t value)
	{
		___rightMouseHandGesture_30 = value;
	}

	inline static int32_t get_offset_of_handGestureAnimationSpeed_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___handGestureAnimationSpeed_31)); }
	inline float get_handGestureAnimationSpeed_31() const { return ___handGestureAnimationSpeed_31; }
	inline float* get_address_of_handGestureAnimationSpeed_31() { return &___handGestureAnimationSpeed_31; }
	inline void set_handGestureAnimationSpeed_31(float value)
	{
		___handGestureAnimationSpeed_31 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___holdStartDuration_32)); }
	inline float get_holdStartDuration_32() const { return ___holdStartDuration_32; }
	inline float* get_address_of_holdStartDuration_32() { return &___holdStartDuration_32; }
	inline void set_holdStartDuration_32(float value)
	{
		___holdStartDuration_32 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___navigationStartThreshold_33)); }
	inline float get_navigationStartThreshold_33() const { return ___navigationStartThreshold_33; }
	inline float* get_address_of_navigationStartThreshold_33() { return &___navigationStartThreshold_33; }
	inline void set_navigationStartThreshold_33(float value)
	{
		___navigationStartThreshold_33 = value;
	}

	inline static int32_t get_offset_of_defaultHandDistance_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___defaultHandDistance_34)); }
	inline float get_defaultHandDistance_34() const { return ___defaultHandDistance_34; }
	inline float* get_address_of_defaultHandDistance_34() { return &___defaultHandDistance_34; }
	inline void set_defaultHandDistance_34(float value)
	{
		___defaultHandDistance_34 = value;
	}

	inline static int32_t get_offset_of_handDepthMultiplier_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___handDepthMultiplier_35)); }
	inline float get_handDepthMultiplier_35() const { return ___handDepthMultiplier_35; }
	inline float* get_address_of_handDepthMultiplier_35() { return &___handDepthMultiplier_35; }
	inline void set_handDepthMultiplier_35(float value)
	{
		___handDepthMultiplier_35 = value;
	}

	inline static int32_t get_offset_of_handJitterAmount_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___handJitterAmount_36)); }
	inline float get_handJitterAmount_36() const { return ___handJitterAmount_36; }
	inline float* get_address_of_handJitterAmount_36() { return &___handJitterAmount_36; }
	inline void set_handJitterAmount_36(float value)
	{
		___handJitterAmount_36 = value;
	}

	inline static int32_t get_offset_of_yawHandCWKey_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___yawHandCWKey_37)); }
	inline int32_t get_yawHandCWKey_37() const { return ___yawHandCWKey_37; }
	inline int32_t* get_address_of_yawHandCWKey_37() { return &___yawHandCWKey_37; }
	inline void set_yawHandCWKey_37(int32_t value)
	{
		___yawHandCWKey_37 = value;
	}

	inline static int32_t get_offset_of_yawHandCCWKey_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___yawHandCCWKey_38)); }
	inline int32_t get_yawHandCCWKey_38() const { return ___yawHandCCWKey_38; }
	inline int32_t* get_address_of_yawHandCCWKey_38() { return &___yawHandCCWKey_38; }
	inline void set_yawHandCCWKey_38(int32_t value)
	{
		___yawHandCCWKey_38 = value;
	}

	inline static int32_t get_offset_of_pitchHandCWKey_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___pitchHandCWKey_39)); }
	inline int32_t get_pitchHandCWKey_39() const { return ___pitchHandCWKey_39; }
	inline int32_t* get_address_of_pitchHandCWKey_39() { return &___pitchHandCWKey_39; }
	inline void set_pitchHandCWKey_39(int32_t value)
	{
		___pitchHandCWKey_39 = value;
	}

	inline static int32_t get_offset_of_pitchHandCCWKey_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___pitchHandCCWKey_40)); }
	inline int32_t get_pitchHandCCWKey_40() const { return ___pitchHandCCWKey_40; }
	inline int32_t* get_address_of_pitchHandCCWKey_40() { return &___pitchHandCCWKey_40; }
	inline void set_pitchHandCCWKey_40(int32_t value)
	{
		___pitchHandCCWKey_40 = value;
	}

	inline static int32_t get_offset_of_rollHandCWKey_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___rollHandCWKey_41)); }
	inline int32_t get_rollHandCWKey_41() const { return ___rollHandCWKey_41; }
	inline int32_t* get_address_of_rollHandCWKey_41() { return &___rollHandCWKey_41; }
	inline void set_rollHandCWKey_41(int32_t value)
	{
		___rollHandCWKey_41 = value;
	}

	inline static int32_t get_offset_of_rollHandCCWKey_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___rollHandCCWKey_42)); }
	inline int32_t get_rollHandCCWKey_42() const { return ___rollHandCCWKey_42; }
	inline int32_t* get_address_of_rollHandCCWKey_42() { return &___rollHandCCWKey_42; }
	inline void set_rollHandCCWKey_42(int32_t value)
	{
		___rollHandCCWKey_42 = value;
	}

	inline static int32_t get_offset_of_handRotationSpeed_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977, ___handRotationSpeed_43)); }
	inline float get_handRotationSpeed_43() const { return ___handRotationSpeed_43; }
	inline float* get_address_of_handRotationSpeed_43() { return &___handRotationSpeed_43; }
	inline void set_handRotationSpeed_43(float value)
	{
		___handRotationSpeed_43 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t621D14E0DCEE987398F574E5335D55FDBDFBE426* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___focusProviderType_6)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___raycastProviderType_7)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_t5D05F56AB25081BDE6B4697C8DF609F2A458EA12 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t4CE915FD59B3CEE0DDE18E9BF5922E5628DCCD3A * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_t006E66A5D042614269E3195CA2042A3AC964671E * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___supportedVoiceCultures_14)); }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_t73EF505A304D3B94E486F30B64A9A002FBD858CD * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_t254FF0C8E28DA6341E36D23A9DD832B11ACCE9DB * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_tDF62A9AB730F36F2AF8454D32ECF008D046E899D * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tFA3A9118040918D9E221EEB94786E3A333A12E36 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct  SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E  : public BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointPoses
	Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * ___jointPoses_24;

public:
	inline static int32_t get_offset_of_jointPoses_24() { return static_cast<int32_t>(offsetof(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E, ___jointPoses_24)); }
	inline Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * get_jointPoses_24() const { return ___jointPoses_24; }
	inline Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 ** get_address_of_jointPoses_24() { return &___jointPoses_24; }
	inline void set_jointPoses_24(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * value)
	{
		___jointPoses_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoses_24), (void*)value);
	}
};

struct SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointCount
	int32_t ___jointCount_23;

public:
	inline static int32_t get_offset_of_jointCount_23() { return static_cast<int32_t>(offsetof(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_StaticFields, ___jointCount_23)); }
	inline int32_t get_jointCount_23() const { return ___jointCount_23; }
	inline int32_t* get_address_of_jointCount_23() { return &___jointCount_23; }
	inline void set_jointCount_23(int32_t value)
	{
		___jointCount_23 = value;
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct  SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9  : public SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPointerPosition_25;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___currentPointerRotation_26;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastPointerPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___lastPointerPose_27;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___currentPointerPose_28;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentIndexPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___currentIndexPose_29;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentGripPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___currentGripPose_30;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastGripPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___lastGripPose_31;

public:
	inline static int32_t get_offset_of_currentPointerPosition_25() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___currentPointerPosition_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPointerPosition_25() const { return ___currentPointerPosition_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPointerPosition_25() { return &___currentPointerPosition_25; }
	inline void set_currentPointerPosition_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPointerPosition_25 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_26() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___currentPointerRotation_26)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_currentPointerRotation_26() const { return ___currentPointerRotation_26; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_currentPointerRotation_26() { return &___currentPointerRotation_26; }
	inline void set_currentPointerRotation_26(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___currentPointerRotation_26 = value;
	}

	inline static int32_t get_offset_of_lastPointerPose_27() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___lastPointerPose_27)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_lastPointerPose_27() const { return ___lastPointerPose_27; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_lastPointerPose_27() { return &___lastPointerPose_27; }
	inline void set_lastPointerPose_27(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___lastPointerPose_27 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_28() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___currentPointerPose_28)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_currentPointerPose_28() const { return ___currentPointerPose_28; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_currentPointerPose_28() { return &___currentPointerPose_28; }
	inline void set_currentPointerPose_28(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___currentPointerPose_28 = value;
	}

	inline static int32_t get_offset_of_currentIndexPose_29() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___currentIndexPose_29)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_currentIndexPose_29() const { return ___currentIndexPose_29; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_currentIndexPose_29() { return &___currentIndexPose_29; }
	inline void set_currentIndexPose_29(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___currentIndexPose_29 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_30() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___currentGripPose_30)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_currentGripPose_30() const { return ___currentGripPose_30; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_currentGripPose_30() { return &___currentGripPose_30; }
	inline void set_currentGripPose_30(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___currentGripPose_30 = value;
	}

	inline static int32_t get_offset_of_lastGripPose_31() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9, ___lastGripPose_31)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_lastGripPose_31() const { return ___lastGripPose_31; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_lastGripPose_31() { return &___lastGripPose_31; }
	inline void set_lastGripPose_31(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___lastGripPose_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct  SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB  : public SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::initializedFromProfile
	bool ___initializedFromProfile_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdAction
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___holdAction_26;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationAction
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___navigationAction_27;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationAction
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___manipulationAction_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::useRailsNavigation
	bool ___useRailsNavigation_29;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdStartDuration
	float ___holdStartDuration_30;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationStartThreshold
	float ___navigationStartThreshold_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::SelectDownStartTime
	float ___SelectDownStartTime_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdInProgress
	bool ___holdInProgress_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationInProgress
	bool ___manipulationInProgress_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationInProgress
	bool ___navigationInProgress_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentRailsUsed
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentRailsUsed_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPosition_37;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::cumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta_38;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentGripPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___currentGripPose_39;

public:
	inline static int32_t get_offset_of_initializedFromProfile_25() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___initializedFromProfile_25)); }
	inline bool get_initializedFromProfile_25() const { return ___initializedFromProfile_25; }
	inline bool* get_address_of_initializedFromProfile_25() { return &___initializedFromProfile_25; }
	inline void set_initializedFromProfile_25(bool value)
	{
		___initializedFromProfile_25 = value;
	}

	inline static int32_t get_offset_of_holdAction_26() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___holdAction_26)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_holdAction_26() const { return ___holdAction_26; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_holdAction_26() { return &___holdAction_26; }
	inline void set_holdAction_26(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___holdAction_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___holdAction_26))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_navigationAction_27() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___navigationAction_27)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_navigationAction_27() const { return ___navigationAction_27; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_navigationAction_27() { return &___navigationAction_27; }
	inline void set_navigationAction_27(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___navigationAction_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___navigationAction_27))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_manipulationAction_28() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___manipulationAction_28)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_manipulationAction_28() const { return ___manipulationAction_28; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_manipulationAction_28() { return &___manipulationAction_28; }
	inline void set_manipulationAction_28(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___manipulationAction_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___manipulationAction_28))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_useRailsNavigation_29() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___useRailsNavigation_29)); }
	inline bool get_useRailsNavigation_29() const { return ___useRailsNavigation_29; }
	inline bool* get_address_of_useRailsNavigation_29() { return &___useRailsNavigation_29; }
	inline void set_useRailsNavigation_29(bool value)
	{
		___useRailsNavigation_29 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_30() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___holdStartDuration_30)); }
	inline float get_holdStartDuration_30() const { return ___holdStartDuration_30; }
	inline float* get_address_of_holdStartDuration_30() { return &___holdStartDuration_30; }
	inline void set_holdStartDuration_30(float value)
	{
		___holdStartDuration_30 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_31() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___navigationStartThreshold_31)); }
	inline float get_navigationStartThreshold_31() const { return ___navigationStartThreshold_31; }
	inline float* get_address_of_navigationStartThreshold_31() { return &___navigationStartThreshold_31; }
	inline void set_navigationStartThreshold_31(float value)
	{
		___navigationStartThreshold_31 = value;
	}

	inline static int32_t get_offset_of_SelectDownStartTime_32() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___SelectDownStartTime_32)); }
	inline float get_SelectDownStartTime_32() const { return ___SelectDownStartTime_32; }
	inline float* get_address_of_SelectDownStartTime_32() { return &___SelectDownStartTime_32; }
	inline void set_SelectDownStartTime_32(float value)
	{
		___SelectDownStartTime_32 = value;
	}

	inline static int32_t get_offset_of_holdInProgress_33() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___holdInProgress_33)); }
	inline bool get_holdInProgress_33() const { return ___holdInProgress_33; }
	inline bool* get_address_of_holdInProgress_33() { return &___holdInProgress_33; }
	inline void set_holdInProgress_33(bool value)
	{
		___holdInProgress_33 = value;
	}

	inline static int32_t get_offset_of_manipulationInProgress_34() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___manipulationInProgress_34)); }
	inline bool get_manipulationInProgress_34() const { return ___manipulationInProgress_34; }
	inline bool* get_address_of_manipulationInProgress_34() { return &___manipulationInProgress_34; }
	inline void set_manipulationInProgress_34(bool value)
	{
		___manipulationInProgress_34 = value;
	}

	inline static int32_t get_offset_of_navigationInProgress_35() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___navigationInProgress_35)); }
	inline bool get_navigationInProgress_35() const { return ___navigationInProgress_35; }
	inline bool* get_address_of_navigationInProgress_35() { return &___navigationInProgress_35; }
	inline void set_navigationInProgress_35(bool value)
	{
		___navigationInProgress_35 = value;
	}

	inline static int32_t get_offset_of_currentRailsUsed_36() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___currentRailsUsed_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentRailsUsed_36() const { return ___currentRailsUsed_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentRailsUsed_36() { return &___currentRailsUsed_36; }
	inline void set_currentRailsUsed_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentRailsUsed_36 = value;
	}

	inline static int32_t get_offset_of_currentPosition_37() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___currentPosition_37)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPosition_37() const { return ___currentPosition_37; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPosition_37() { return &___currentPosition_37; }
	inline void set_currentPosition_37(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPosition_37 = value;
	}

	inline static int32_t get_offset_of_cumulativeDelta_38() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___cumulativeDelta_38)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_cumulativeDelta_38() const { return ___cumulativeDelta_38; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_cumulativeDelta_38() { return &___cumulativeDelta_38; }
	inline void set_cumulativeDelta_38(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___cumulativeDelta_38 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_39() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB, ___currentGripPose_39)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_currentGripPose_39() const { return ___currentGripPose_39; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_currentGripPose_39() { return &___currentGripPose_39; }
	inline void set_currentGripPose_39(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___currentGripPose_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  m_Items[1];

public:
	inline MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
	inline MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  m_Items[1];

public:
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  m_Items[1];

public:
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  Dictionary_2_get_Item_mE6B9D39124056519428A572665E726815D5600EF_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6F2ED586C8EC85B459FFCA36D05ABF98C1AA33B3_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3816E3065E00AF57E62424BB45AEA6000BD27F49_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m83D33BC652DBE4549C5B2C4A1E51BDA96E1989C6_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBB39FF6AADDEF60E949DF52642B7BA33E9CC5406_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72BAB8E16164B0649C7EFF83BD5C1904748DC7F0_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityServiceRegistry::TryGetService<System.Object>(!!0&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityServiceRegistry_TryGetService_TisRuntimeObject_m2354211184CA13FEA1094444215C1DE746B56354_gshared (RuntimeObject ** ___serviceInstance0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_gshared_inline (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_get_Value_m59310BC9FCEE79F371FF375D192DCCF0E27BDCB9_gshared (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mEE25CE8D9D7805C77F0C30A71CCF7F2DE1540165_gshared (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3 (float ___f0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::GetCameraControlRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManualCameraControl_GetCameraControlRotation_m3D19B1E42202CAD6BF39AAB95EC6462FCA39DF1A (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::GetCameraControlTranslation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManualCameraControl_GetCameraControlTranslation_m3DC630831934E8E02C6FBB972D622E6725BC80C8 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE81F208CECDAFC1117728A21F6322E898475CDBC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m5A45D3BCA8AAAA06A13711CEB926FAE1140E45A8 (String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::InputCurve(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5 (float ___x0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::GetKeyDir(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManualCameraControl_GetKeyDir_mA17DE06ECA14E8B86980490E7D9FC7BFCFF3385E (String_t* ___neg0, String_t* ___pos1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveHorizontal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveHorizontal_m017554BDDC001B7EA768A8232E20D7458D583027_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_CurrentControlMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_CurrentControlMode_m365A1934F1906A26E0865D061C759F74CD7F8BBB_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveVertical_mD3951F2FDB8CEB301D4060806EC0CA6759896766_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_FastControlKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_FastControlKey_m7EBE38DE672182505B89E7996FEF7BCE4A1B7803_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlSlowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlSlowSpeed_m876415D8FBE9D75C3C183514450741EAF5F07A7B_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlFastSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlFastSpeed_mFC4C7367E2EED39F2170D25353F140C624730606_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsControllerLookInverted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsControllerLookInverted_m1F1DDDC2A8E1523EAFCFA298669C7DB4F87AAC4D_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookVertical_m96BDB7F20C2470F9A83B319056DFAF7506DC42FE_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookHorizontal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookHorizontal_m42B3D6D256B7AAC814327C831B5D6AA1DF97E255_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::get_ShouldMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualCameraControl_get_ShouldMouseLook_mE34D3DF68CB831FE6BF65DE1980702F65B8242FD (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::OnStartMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_OnStartMouseLook_m5BF3719ACEA0892BDEDA5BB9CC194CB2072E69BE (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::ManualCameraControl_MouseLookTick(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_ManualCameraControl_MouseLookTick_m04C4081BEC9E40DDA28B18C0A5E33324059B1431 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___rot0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::OnEndMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_OnEndMouseLook_m4726C49BD31E90A2E4696109C8BC0E04998441D9 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ExtraMouseSensitivityScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ExtraMouseSensitivityScale_mAC27CAA55A3D2E2CFD163C201458A55DF9986E46_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSimulationMouseButton Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookButton()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::SetWantsMouseJumping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_SetWantsMouseJumping_m763B353004DF2F48A148C196711C3F24F407A7F4 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, bool ___wantsJumping0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Cursor::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cursor_get_visible_m0BB8BC7FEDD558FB661E9023AB8C04FFEE41377C (const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cursor_get_lockState_mE0C93F496E3AA120AD168ED30371C35ED79C9DF1 (const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseX()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseX_m948C6DC5FA747EF496CF4D034559866E42208385_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseY()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseY_m09ED3578096DF704596D515302D86E585CFB5C02_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultMouseSensitivity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultMouseSensitivity_m6318EE5940068250E4995CA50A7B48AA2D7B38D0_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isFocused_m08C840F4CF5666877D9623C918106047D4FE3302 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mC73E9360DB114F72FBC08703A0A9ABA78168B78A (BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand__ctor_m93808D1348F3FB6FA63A335E89F47FB5345EE1C4 (SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.KeyCode,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___inputAction4, int32_t ___keyCode5, String_t* ___axisCodeX6, String_t* ___axisCodeY7, bool ___invertXAxis8, bool ___invertYAxis9, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::AssignControllerMappings(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_AssignControllerMappings_mB58538C7085760171304343CFBD77E5D8F230054 (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___mappings0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6 (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mE6B9D39124056519428A572665E726815D5600EF_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mF175BAE3270E5432E605BDD5FD1FA5F722B24AEE_inline (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m5259A799822AFD94A2BEE4B47F887A03158FE308_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m76D7FB5DBF945174A9D9B7A19123783742C6B57F_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m3E2EB0D15AAADABB3D967535353AD53539677046_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::get_HandRay()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * BaseHand_get_HandRay_mDB7145BE29023110AF5EC4037ABE75660776680F_inline (BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::GetPalmNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseHand_GetPalmNormal_mB5FF6D007531A6DD4C3E7632AF60DD2C586AA76B (BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandRay::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRay_Update_m2C7628B2A0B6F1EE9C20DE0E38CDD4854F70F149 (HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___handPosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___palmNormal1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___headTransform2, uint8_t ___sourceHandedness3, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::get_Ray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandRay_get_Ray_mA5DDBC5EF46D813F75A3728882AE72F8A779C189 (HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m28EBD523337BC95684EFC016980F3862DE763759_inline (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1AC620BE37B8F415170D725902EE1C3A92ECC19B_inline (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_m85FF483B646A63C06AE543020D4F85257046AB3D (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___left0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m59D5E1DD267C83A3DB834096028590522C934868_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365 (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mB7C40888399E88C93E755FE89D50234CF5F5C981_inline (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_mE86E7E665BCA02A2E69651A333993A51703F7D64 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_GesturesProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * MixedRealityInputSystemProfile_get_GesturesProfile_mA8F275BA8A5AE96D3A95350F698A7343D72E5129_inline (MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_Gestures()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* MixedRealityGesturesProfile_get_Gestures_mBAB7F3737E09478B3FA7F30ECAC24D6840E98580_inline (MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_GestureType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_m6798792581776B818AF6A5307DD72D3425420C20_inline (MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_Action()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityGestureMapping_get_Action_mF225EE997BA38AFC7DCCA99F71434633FD683D82_inline (MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_UseRailsNavigation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityGesturesProfile_get_UseRailsNavigation_mEAE6D30B9C69C0E5EA8115068FDA600F87CE02C6_inline (MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_mBC1A3E5C22D4854356392379561E246374610007_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m30BD08DA409E73AE42567F6420EB5E92DC7981E4_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_m5FC39BD038B64363C40173D9E60B1BC1606C7A3A (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m0B58E7807CC8E31CE5F4817A99CC358085866A3E (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_mA3B5BAB738C6425798C608310D7D59D6B6FCA1AC (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_m7DD88EA40E108EB197BF22BD11460BF7A3DFBB18 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m725C944777267419341F15E256472663CBCE6AC8 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_m7D7C54E9B0364BA9862D4326D9606FB6419CCBC3 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_mD504939EDF859CD568D6127F467D193ADF3ADFC0 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_m1F67089B7A138E396206FE8E7E0DAEECCE14BFBC (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_m2F5F675D13ACB7225B7672755846459058BDF575 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m72CBFF5CAEDDC55C9E865745A5DE4C34C1B2E234 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_mDA8C27C354D28CD6BC7E7EB7E4A84A560D1B08A6 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_navigationDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedGestureHand_get_navigationDelta_m0FD22233CFFA608F80B80E740D01DA6F8E22582A (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, const RuntimeMethod*))Dictionary_2__ctor_m6F2ED586C8EC85B459FFCA36D05ABF98C1AA33B3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseHand__ctor_mD486A5087D9CF2CC6B1048F37EEAD182843CB503 (BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3816E3065E00AF57E62424BB45AEA6000BD27F49_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9123BEB1C67E91B9D1C87834EED0E4805EAB9389 (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m83D33BC652DBE4549C5B2C4A1E51BDA96E1989C6_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* SimulatedHandData_get_Joints_m0137F96239589766E8132147EBBC5D1C24516B7C_inline (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
inline void Dictionary_2_Add_mF5D352A2DB17E5E4545D622A66744A4697ACC3D2 (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 , const RuntimeMethod*))Dictionary_2_Add_mBB39FF6AADDEF60E949DF52642B7BA33E9CC5406_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 , const RuntimeMethod*))Dictionary_2_set_Item_m72BAB8E16164B0649C7EFF83BD5C1904748DC7F0_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::UpdateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseHand_UpdateVelocity_m2E2A6FE7655DBBE7E1BEBD9DAD7936B28DCEE484 (BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityServiceRegistry::TryGetService<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>(!!0&,System.String)
inline bool MixedRealityServiceRegistry_TryGetService_TisIMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_m11EAC52C13EC4EEBB2BC67A0F3F775159F619EAD (RuntimeObject** ___serviceInstance0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject**, String_t*, const RuntimeMethod*))MixedRealityServiceRegistry_TryGetService_TisRuntimeObject_m2354211184CA13FEA1094444215C1DE746B56354_gshared)(___serviceInstance0, ___name1, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::UpdateWithTimestamp(System.Int64,System.Boolean,System.Boolean,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_UpdateWithTimestamp_mFF3E503F08373285FE5EB42270638D275764FB3A (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, int64_t ___timestampNew0, bool ___isTrackedNew1, bool ___isPinchingNew2, HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * ___generator3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_m453D8F003A5B2375922D4E902074628FA4AAB4F2 (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___jointPoses0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState__ctor_m349E18510C30BD47FC7E10C4991BE2C34D676433 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, uint8_t ____handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandGesture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::set_Gesture(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_set_Gesture_mC8DFF4D3309753AE88FB273F3C55CFBE8C7C1882 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_Reset_m591616FB0D9CCE8F96F2DD72CAFBC745E6DCAB36 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::SimulateUserInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandDataProvider_SimulateUserInput_m003E4A8FDD0889C01947CB4851803D1BF049404B (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator__ctor_mB815FE73EC4C1E2EA223BA3380BC7817ACED0EB0 (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_IsPinching()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimulatedHandState_get_IsPinching_m3342EF2FCE4F7A48DA2EFB9F7EBBC8AAFCC3B7DE_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleLeftHandKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_m0938B5767F57F921502537FDEEAD30DFCA852EA0_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleRightHandKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m6800CE9022A5B139B2435C14B93598A383FA17E2_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftHandManipulationKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_m5CF930DD138B33A6C88308A93ABF1FD23C8E95EB_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightHandManipulationKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightHandManipulationKey_mA429EA7F531EC9F910DB0EFF6E7A36E27AB58424_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_inline (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_get_Value_m59310BC9FCEE79F371FF375D192DCCF0E27BDCB9 (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 *, const RuntimeMethod*))Nullable_1_get_Value_m59310BC9FCEE79F371FF375D192DCCF0E27BDCB9_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandDepthMultiplier()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m6604B44E146EA94CBD6109337F0190E999766DA8_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandRotationSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandRotationSpeed_m536913F900351CB840F04EEF9B71F97848A9EAC6_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_YawHandCCWKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_YawHandCCWKey_mEAB61DF36DB74C3D75B4A74327E3DBAFC005C1F7_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_YawHandCWKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_YawHandCWKey_m8D25D317DD2ADDDA33255C9F7E993E854CE32578_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_PitchHandCCWKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_PitchHandCCWKey_mF31570A5CFFE2C565A701FF6318F8397DBAB689C_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_PitchHandCWKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_PitchHandCWKey_m345C749AC96907F9EC2C9C2A67A9762CE9DA1FF0_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RollHandCCWKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RollHandCCWKey_m1BE607B59E89E69C3ADBE1527F1C6309D9599D63_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RollHandCWKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RollHandCWKey_mCD75EA7E80AB5D53517352CABF579A50663C7BF9_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::SimulateHandInput(System.Int64&,Microsoft.MixedReality.Toolkit.Input.SimulatedHandState,System.Boolean,System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandDataProvider_SimulateHandInput_mCC63E2A933A7A87E744034D157EFE773F852B134 (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, int64_t* ___lastSimulatedTimestamp0, SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * ___state1, bool ___isSimulating2, bool ___isAlwaysVisible3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mouseDelta4, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rotationDeltaEulerAngles5, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandGestureAnimationSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_m159042CFADEA1948914A6AD9D52193E9179B0AF5_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_GestureBlending()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SimulatedHandState_get_GestureBlending_m61B1AE6EA0F82008B919350872861BB83D1AE6DE_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::set_GestureBlending(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_set_GestureBlending_mA9E930861977C6A7651CC2815A9F4C7335E2DB11 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(!0)
inline void Nullable_1__ctor_mEE25CE8D9D7805C77F0C30A71CCF7F2DE1540165 (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))Nullable_1__ctor_mEE25CE8D9D7805C77F0C30A71CCF7F2DE1540165_gshared)(__this, ___value0, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultHandDistance_m3D175B58CA9EBA30092EA2A68D01EA4B94489C4A_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandJitterAmount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandJitterAmount_mDDF19A0974AFB60C2E91D129017A3D0805143F60_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::SimulateInput(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_SimulateInput_m4FB2C3E0E8BEC699B55A62FA37BD12F8E018FB6C (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mouseDelta0, float ___noiseAmount1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rotationDeltaEulerAngles2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_Gesture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SimulatedHandState_get_Gesture_mD92DD18C9290E8F89105E0539065E44CA74AFFFF_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::ToggleGesture(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedHandDataProvider_ToggleGesture_m9F8B8AE3A881E53C67ABC7B4B8187E45AEFDB0BD (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, int32_t ___gesture0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::SelectGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedHandDataProvider_SelectGesture_m3EED0D8A0B38C138C8C872805E35ACC67F70F37F (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m027A935E14EB81BCC0739BD56AE60CDE3387990C (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int64_t ___ticks0, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandHideTimeout()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandHideTimeout_m68A2277521E6F5AB774F6C2B8C33308995704297_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftMouseHandGesture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightMouseHandGesture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MiddleMouseHandGesture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::set_IsPinching(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SimulatedHandState_set_IsPinching_m65D25C94FC10461909F03181E2AE1A97E619DD46_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose__ctor_mDF79192860BCB5B11DE88B879238E1093D2F839A (ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::ResetGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_ResetGesture_m768808568035F9E15EBC17DF83D75F62A6069EBC (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ViewportToScreenPoint_m8B42382A0571F1F6F1162F3DA05A9317F903B657 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::GetGesturePose(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * ArticulatedHandPose_GetGesturePose_m2A44BE372E71AB070AFA4D82C4B0E5468FF97630 (int32_t ___gesture0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::Copy(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_Copy_mEFCDE938CE81762E3A992EFA18BBDD8180C1E264 (ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * __this, ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::InterpolateOffsets(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_InterpolateOffsets_mD03754CF2CC8BBB41787BB08A2294C49E4D65445 (ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * __this, ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * ___poseA0, ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * ___poseB1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ComputeJointPoses(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Quaternion,UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_ComputeJointPoses_m04188906F4189F035294C1C59F8CE862E2D3D10A (ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * __this, uint8_t ___handedness0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position2, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___jointsOut3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_gshared)(___source0, ___count1, method);
}
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_mA81913DBCF3086B4716F692F9DB797D7DD6B7583 (RuntimeObject* ___source0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmRightVector_m9C646FB51F2C94823DC3EEE26383B22A88EA4301 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmForwardVector_m9E069A581F41648ADB1D947EDBB726BD867602F4 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmUpVector_mB1852A38F5919EC805FE801DB47DC6DA1E64CCD0 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::.ctor(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl__ctor_m7FF9E6E8F53C26F979266DB8306FD0EF854AC853 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * ____profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManualCameraControl__ctor_m7FF9E6E8F53C26F979266DB8306FD0EF854AC853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isGamepadLookEnabled = true;
		__this->set_isGamepadLookEnabled_2((bool)1);
		// private bool isFlyKeypressEnabled = true;
		__this->set_isFlyKeypressEnabled_3((bool)1);
		// private Vector3 lastMousePosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_lastMousePosition_4(L_0);
		// private Vector3 lastTrackerToUnityTranslation = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_lastTrackerToUnityTranslation_5(L_1);
		// private Quaternion lastTrackerToUnityRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_lastTrackerToUnityRotation_6(L_2);
		// private bool wasCursorVisible = true;
		__this->set_wasCursorVisible_8((bool)1);
		// public ManualCameraControl(MixedRealityInputSimulationProfile _profile)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// profile = _profile;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_3 = ____profile0;
		__this->set_profile_0(L_3);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::InputCurve(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5 (float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Sign(x) * (1.0f - Mathf.Cos(0.5f * Mathf.PI * Mathf.Clamp(x, -1.0f, 1.0f)));
		float L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3(L_0, /*hidden argument*/NULL);
		float L_2 = ___x0;
		float L_3 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_2, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_4 = cosf(((float)il2cpp_codegen_multiply((float)(1.57079637f), (float)L_3)));
		return ((float)il2cpp_codegen_multiply((float)L_1, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4))));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_UpdateTransform_m563EAA7EBC627831958271F38D1EF4203D06B4CD (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManualCameraControl_UpdateTransform_m563EAA7EBC627831958271F38D1EF4203D06B4CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// transform.Translate(-this.lastTrackerToUnityTranslation, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_lastTrackerToUnityTranslation_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(L_0, L_2, 0, /*hidden argument*/NULL);
		// transform.Rotate(-this.lastTrackerToUnityRotation.eulerAngles, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___transform0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_4 = __this->get_address_of_lastTrackerToUnityRotation_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB(L_3, L_6, 0, /*hidden argument*/NULL);
		// Vector3 rotate = GetCameraControlRotation();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ManualCameraControl_GetCameraControlRotation_m3D19B1E42202CAD6BF39AAB95EC6462FCA39DF1A(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector3 translate = GetCameraControlTranslation(transform);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___transform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ManualCameraControl_GetCameraControlTranslation_m3DC630831934E8E02C6FBB972D622E6725BC80C8(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// transform.Rotate(rotate.x, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___transform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		float L_12 = L_11.get_x_2();
		NullCheck(L_10);
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_10, L_12, (0.0f), (0.0f), /*hidden argument*/NULL);
		// transform.Rotate(0.0f, rotate.y, 0.0f, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ___transform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		float L_15 = L_14.get_y_3();
		NullCheck(L_13);
		Transform_Rotate_mE81F208CECDAFC1117728A21F6322E898475CDBC(L_13, (0.0f), L_15, (0.0f), 0, /*hidden argument*/NULL);
		// transform.Translate(translate, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = ___transform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_1;
		NullCheck(L_16);
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(L_16, L_17, 0, /*hidden argument*/NULL);
		// transform.Rotate(this.lastTrackerToUnityRotation.eulerAngles, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = ___transform0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_19 = __this->get_address_of_lastTrackerToUnityRotation_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB(L_18, L_20, 0, /*hidden argument*/NULL);
		// transform.Translate(this.lastTrackerToUnityTranslation, Space.World);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = ___transform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_lastTrackerToUnityTranslation_5();
		NullCheck(L_21);
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(L_21, L_22, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::GetKeyDir(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManualCameraControl_GetKeyDir_mA17DE06ECA14E8B86980490E7D9FC7BFCFF3385E (String_t* ___neg0, String_t* ___pos1, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Input.GetKey(neg) ? -1.0f : UnityEngine.Input.GetKey(pos) ? 1.0f : 0.0f;
		String_t* L_0 = ___neg0;
		bool L_1 = Input_GetKey_m5A45D3BCA8AAAA06A13711CEB926FAE1140E45A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___pos1;
		bool L_3 = Input_GetKey_m5A45D3BCA8AAAA06A13711CEB926FAE1140E45A8(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		return (0.0f);
	}

IL_0016:
	{
		return (1.0f);
	}

IL_001c:
	{
		return (-1.0f);
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::GetCameraControlTranslation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManualCameraControl_GetCameraControlTranslation_m3DC630831934E8E02C6FBB972D622E6725BC80C8 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManualCameraControl_GetCameraControlTranslation_m3DC630831934E8E02C6FBB972D622E6725BC80C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B10_0 = 0.0f;
	{
		// Vector3 deltaPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (this.isFlyKeypressEnabled)
		bool L_1 = __this->get_isFlyKeypressEnabled_3();
		if (!L_1)
		{
			goto IL_003b;
		}
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// deltaPosition += InputCurve(UnityEngine.Input.GetAxis("Fly")) * transform.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		float L_3 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral873C7DB571EF3373C0E7839A3C42DF3607FC2CC4, /*hidden argument*/NULL);
		float L_4 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___transform0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_4, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_2, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// }
		goto IL_005b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0031;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		// catch (System.Exception)
		// this.isFlyKeypressEnabled = false;
		__this->set_isFlyKeypressEnabled_3((bool)0);
		// }
		goto IL_005b;
	} // end catch (depth: 1)

IL_003b:
	{
		// deltaPosition += GetKeyDir("page down", "page up") * Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		float L_10 = ManualCameraControl_GetKeyDir_mA17DE06ECA14E8B86980490E7D9FC7BFCFF3385E(_stringLiteral8577A9196D7296B516251DDE171D133681234282, _stringLiteral6DC55A416CBC09CD3ADC3B9CF34E851BABADE228, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_10, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005b:
	{
		// deltaPosition += InputCurve(UnityEngine.Input.GetAxis(profile.MoveHorizontal)) * transform.right;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_15 = __this->get_profile_0();
		NullCheck(L_15);
		String_t* L_16 = MixedRealityInputSimulationProfile_get_MoveHorizontal_m017554BDDC001B7EA768A8232E20D7458D583027_inline(L_15, /*hidden argument*/NULL);
		float L_17 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_16, /*hidden argument*/NULL);
		float L_18 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = ___transform0;
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_18, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_14, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// if (profile.CurrentControlMode == InputSimulationControlMode.Walk)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_23 = __this->get_profile_0();
		NullCheck(L_23);
		int32_t L_24 = MixedRealityInputSimulationProfile_get_CurrentControlMode_m365A1934F1906A26E0865D061C759F74CD7F8BBB_inline(L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00db;
		}
	}
	{
		// deltaPosition += InputCurve(UnityEngine.Input.GetAxis(profile.MoveVertical)) * new Vector3(transform.forward.x, 0, transform.forward.z).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_26 = __this->get_profile_0();
		NullCheck(L_26);
		String_t* L_27 = MixedRealityInputSimulationProfile_get_MoveVertical_mD3951F2FDB8CEB301D4060806EC0CA6759896766_inline(L_26, /*hidden argument*/NULL);
		float L_28 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_27, /*hidden argument*/NULL);
		float L_29 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_28, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = ___transform0;
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = ___transform0;
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_36), L_32, (0.0f), L_35, /*hidden argument*/NULL);
		V_1 = L_36;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_29, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_25, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		// }
		goto IL_0102;
	}

IL_00db:
	{
		// deltaPosition += InputCurve(UnityEngine.Input.GetAxis(profile.MoveVertical)) * transform.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_0;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_41 = __this->get_profile_0();
		NullCheck(L_41);
		String_t* L_42 = MixedRealityInputSimulationProfile_get_MoveVertical_mD3951F2FDB8CEB301D4060806EC0CA6759896766_inline(L_41, /*hidden argument*/NULL);
		float L_43 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_42, /*hidden argument*/NULL);
		float L_44 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_43, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = ___transform0;
		NullCheck(L_45);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_44, L_46, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_40, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
	}

IL_0102:
	{
		// float accel = UnityEngine.Input.GetKey(profile.FastControlKey) ? profile.ControlFastSpeed : profile.ControlSlowSpeed;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_49 = __this->get_profile_0();
		NullCheck(L_49);
		int32_t L_50 = MixedRealityInputSimulationProfile_get_FastControlKey_m7EBE38DE672182505B89E7996FEF7BCE4A1B7803_inline(L_49, /*hidden argument*/NULL);
		bool L_51 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0121;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_52 = __this->get_profile_0();
		NullCheck(L_52);
		float L_53 = MixedRealityInputSimulationProfile_get_ControlSlowSpeed_m876415D8FBE9D75C3C183514450741EAF5F07A7B_inline(L_52, /*hidden argument*/NULL);
		G_B10_0 = L_53;
		goto IL_012c;
	}

IL_0121:
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_54 = __this->get_profile_0();
		NullCheck(L_54);
		float L_55 = MixedRealityInputSimulationProfile_get_ControlFastSpeed_mFC4C7367E2EED39F2170D25353F140C624730606_inline(L_54, /*hidden argument*/NULL);
		G_B10_0 = L_55;
	}

IL_012c:
	{
		// return accel * deltaPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(G_B10_0, L_56, /*hidden argument*/NULL);
		return L_57;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::GetCameraControlRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManualCameraControl_GetCameraControlRotation_m3D19B1E42202CAD6BF39AAB95EC6462FCA39DF1A (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManualCameraControl_GetCameraControlRotation_m3D19B1E42202CAD6BF39AAB95EC6462FCA39DF1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B3_0 = 0.0f;
	{
		// float inversionFactor = profile.IsControllerLookInverted ? -1.0f : 1.0f;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_0 = __this->get_profile_0();
		NullCheck(L_0);
		bool L_1 = MixedRealityInputSimulationProfile_get_IsControllerLookInverted_m1F1DDDC2A8E1523EAFCFA298669C7DB4F87AAC4D_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = (-1.0f);
	}

IL_0019:
	{
		V_0 = G_B3_0;
		// Vector3 rot = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_2;
		// if (this.isGamepadLookEnabled)
		bool L_3 = __this->get_isGamepadLookEnabled_2();
		if (!L_3)
		{
			goto IL_0076;
		}
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		// rot.x += InputCurve(UnityEngine.Input.GetAxis(profile.LookVertical)) * inversionFactor;
		float* L_4 = (&V_1)->get_address_of_x_2();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_7 = __this->get_profile_0();
		NullCheck(L_7);
		String_t* L_8 = MixedRealityInputSimulationProfile_get_LookVertical_m96BDB7F20C2470F9A83B319056DFAF7506DC42FE_inline(L_7, /*hidden argument*/NULL);
		float L_9 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_8, /*hidden argument*/NULL);
		float L_10 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_9, /*hidden argument*/NULL);
		float L_11 = V_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))));
		// rot.y += InputCurve(UnityEngine.Input.GetAxis(profile.LookHorizontal));
		float* L_12 = (&V_1)->get_address_of_y_3();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_15 = __this->get_profile_0();
		NullCheck(L_15);
		String_t* L_16 = MixedRealityInputSimulationProfile_get_LookHorizontal_m42B3D6D256B7AAC814327C831B5D6AA1DF97E255_inline(L_15, /*hidden argument*/NULL);
		float L_17 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_16, /*hidden argument*/NULL);
		float L_18 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_17, /*hidden argument*/NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_add((float)L_14, (float)L_18));
		// }
		goto IL_0076;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006c;
		throw e;
	}

CATCH_006c:
	{ // begin catch(System.Exception)
		// catch (System.Exception)
		// this.isGamepadLookEnabled = false;
		__this->set_isGamepadLookEnabled_2((bool)0);
		// }
		goto IL_0076;
	} // end catch (depth: 1)

IL_0076:
	{
		// if (this.ShouldMouseLook)
		bool L_19 = ManualCameraControl_get_ShouldMouseLook_mE34D3DF68CB831FE6BF65DE1980702F65B8242FD(__this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		// if (!this.wasLooking)
		bool L_20 = __this->get_wasLooking_7();
		if (L_20)
		{
			goto IL_008c;
		}
	}
	{
		// OnStartMouseLook();
		ManualCameraControl_OnStartMouseLook_m5BF3719ACEA0892BDEDA5BB9CC194CB2072E69BE(__this, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// ManualCameraControl_MouseLookTick(ref rot);
		ManualCameraControl_ManualCameraControl_MouseLookTick_m04C4081BEC9E40DDA28B18C0A5E33324059B1431(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// this.wasLooking = true;
		__this->set_wasLooking_7((bool)1);
		// }
		goto IL_00b2;
	}

IL_009d:
	{
		// if (this.wasLooking)
		bool L_21 = __this->get_wasLooking_7();
		if (!L_21)
		{
			goto IL_00ab;
		}
	}
	{
		// OnEndMouseLook();
		ManualCameraControl_OnEndMouseLook_m4726C49BD31E90A2E4696109C8BC0E04998441D9(__this, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// this.wasLooking = false;
		__this->set_wasLooking_7((bool)0);
	}

IL_00b2:
	{
		// rot *= profile.ExtraMouseSensitivityScale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_1;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_23 = __this->get_profile_0();
		NullCheck(L_23);
		float L_24 = MixedRealityInputSimulationProfile_get_ExtraMouseSensitivityScale_mAC27CAA55A3D2E2CFD163C201458A55DF9986E46_inline(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// return rot;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_1;
		return L_26;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::OnStartMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_OnStartMouseLook_m5BF3719ACEA0892BDEDA5BB9CC194CB2072E69BE (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method)
{
	{
		// if (profile.MouseLookButton <= InputSimulationMouseButton.Middle)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_0 = __this->get_profile_0();
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		// SetWantsMouseJumping(true);
		ManualCameraControl_SetWantsMouseJumping_m763B353004DF2F48A148C196711C3F24F407A7F4(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// else if (profile.MouseLookButton <= InputSimulationMouseButton.Focused)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_2 = __this->get_profile_0();
		NullCheck(L_2);
		int32_t L_3 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) > ((int32_t)5)))
		{
			goto IL_003b;
		}
	}
	{
		// UnityEngine.Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
		// wasCursorVisible = UnityEngine.Cursor.visible;
		bool L_4 = Cursor_get_visible_m0BB8BC7FEDD558FB661E9023AB8C04FFEE41377C(/*hidden argument*/NULL);
		__this->set_wasCursorVisible_8(L_4);
		// UnityEngine.Cursor.visible = false;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)0, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::OnEndMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_OnEndMouseLook_m4726C49BD31E90A2E4696109C8BC0E04998441D9 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method)
{
	{
		// if (profile.MouseLookButton <= InputSimulationMouseButton.Middle)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_0 = __this->get_profile_0();
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		// SetWantsMouseJumping(false);
		ManualCameraControl_SetWantsMouseJumping_m763B353004DF2F48A148C196711C3F24F407A7F4(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// else if (profile.MouseLookButton <= InputSimulationMouseButton.Focused)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_2 = __this->get_profile_0();
		NullCheck(L_2);
		int32_t L_3 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) > ((int32_t)5)))
		{
			goto IL_0035;
		}
	}
	{
		// UnityEngine.Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
		// UnityEngine.Cursor.visible = wasCursorVisible;
		bool L_4 = __this->get_wasCursorVisible_8();
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431(L_4, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::ManualCameraControl_MouseLookTick(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_ManualCameraControl_MouseLookTick_m04C4081BEC9E40DDA28B18C0A5E33324059B1431 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___rot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManualCameraControl_ManualCameraControl_MouseLookTick_m04C4081BEC9E40DDA28B18C0A5E33324059B1431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 mousePositionDelta = UnityEngine.Input.mousePosition - this.lastMousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_lastMousePosition_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// this.lastMousePosition = UnityEngine.Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		__this->set_lastMousePosition_4(L_3);
		// if (UnityEngine.Cursor.lockState == CursorLockMode.Locked)
		int32_t L_4 = Cursor_get_lockState_mE0C93F496E3AA120AD168ED30371C35ED79C9DF1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		// mousePositionDelta.x = UnityEngine.Input.GetAxis(profile.MouseX);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_5 = __this->get_profile_0();
		NullCheck(L_5);
		String_t* L_6 = MixedRealityInputSimulationProfile_get_MouseX_m948C6DC5FA747EF496CF4D034559866E42208385_inline(L_5, /*hidden argument*/NULL);
		float L_7 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_6, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_7);
		// mousePositionDelta.y = UnityEngine.Input.GetAxis(profile.MouseY);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_8 = __this->get_profile_0();
		NullCheck(L_8);
		String_t* L_9 = MixedRealityInputSimulationProfile_get_MouseY_m09ED3578096DF704596D515302D86E585CFB5C02_inline(L_8, /*hidden argument*/NULL);
		float L_10 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_9, /*hidden argument*/NULL);
		(&V_0)->set_y_3(L_10);
		// }
		goto IL_0080;
	}

IL_0054:
	{
		// mousePositionDelta.x *= profile.DefaultMouseSensitivity;
		float* L_11 = (&V_0)->get_address_of_x_2();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_14 = __this->get_profile_0();
		NullCheck(L_14);
		float L_15 = MixedRealityInputSimulationProfile_get_DefaultMouseSensitivity_m6318EE5940068250E4995CA50A7B48AA2D7B38D0_inline(L_14, /*hidden argument*/NULL);
		*((float*)L_12) = (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15));
		// mousePositionDelta.y *= profile.DefaultMouseSensitivity;
		float* L_16 = (&V_0)->get_address_of_y_3();
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_19 = __this->get_profile_0();
		NullCheck(L_19);
		float L_20 = MixedRealityInputSimulationProfile_get_DefaultMouseSensitivity_m6318EE5940068250E4995CA50A7B48AA2D7B38D0_inline(L_19, /*hidden argument*/NULL);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_20));
	}

IL_0080:
	{
		// rot.x += -InputCurve(mousePositionDelta.y);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_21 = ___rot0;
		float* L_22 = L_21->get_address_of_x_2();
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		float L_26 = L_25.get_y_3();
		float L_27 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_26, /*hidden argument*/NULL);
		*((float*)L_23) = (float)((float)il2cpp_codegen_add((float)L_24, (float)((-L_27))));
		// rot.y += InputCurve(mousePositionDelta.x);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_28 = ___rot0;
		float* L_29 = L_28->get_address_of_y_3();
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		float L_33 = L_32.get_x_2();
		float L_34 = ManualCameraControl_InputCurve_m92AC9467C6B77CFE3D101CB34D3C845A446057D5(L_33, /*hidden argument*/NULL);
		*((float*)L_30) = (float)((float)il2cpp_codegen_add((float)L_31, (float)L_34));
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::get_ShouldMouseLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualCameraControl_get_ShouldMouseLook_mE34D3DF68CB831FE6BF65DE1980702F65B8242FD (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, const RuntimeMethod* method)
{
	{
		// if (!Application.isFocused)
		bool L_0 = Application_get_isFocused_m08C840F4CF5666877D9623C918106047D4FE3302(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// else if (profile.MouseLookButton == InputSimulationMouseButton.None)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_1 = __this->get_profile_0();
		NullCheck(L_1);
		int32_t L_2 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0019:
	{
		// else if (profile.MouseLookButton <= InputSimulationMouseButton.Middle)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_3 = __this->get_profile_0();
		NullCheck(L_3);
		int32_t L_4 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) > ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButton((int)profile.MouseLookButton);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_5 = __this->get_profile_0();
		NullCheck(L_5);
		int32_t L_6 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0038:
	{
		// else if (profile.MouseLookButton == InputSimulationMouseButton.Control)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_8 = __this->get_profile_0();
		NullCheck(L_8);
		int32_t L_9 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_005f;
		}
	}
	{
		// return UnityEngine.Input.GetKey(KeyCode.LeftControl) || UnityEngine.Input.GetKey(KeyCode.RightControl);
		bool L_10 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)306), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005d;
		}
	}
	{
		bool L_11 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)305), /*hidden argument*/NULL);
		return L_11;
	}

IL_005d:
	{
		return (bool)1;
	}

IL_005f:
	{
		// else if (profile.MouseLookButton == InputSimulationMouseButton.Shift)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_12 = __this->get_profile_0();
		NullCheck(L_12);
		int32_t L_13 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_0086;
		}
	}
	{
		// return UnityEngine.Input.GetKey(KeyCode.LeftShift) || UnityEngine.Input.GetKey(KeyCode.RightShift);
		bool L_14 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)304), /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0084;
		}
	}
	{
		bool L_15 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)303), /*hidden argument*/NULL);
		return L_15;
	}

IL_0084:
	{
		return (bool)1;
	}

IL_0086:
	{
		// else if (profile.MouseLookButton == InputSimulationMouseButton.Focused)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_16 = __this->get_profile_0();
		NullCheck(L_16);
		int32_t L_17 = MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)5))))
		{
			goto IL_00c0;
		}
	}
	{
		// if (!this.wasLooking)
		bool L_18 = __this->get_wasLooking_7();
		if (L_18)
		{
			goto IL_00b5;
		}
	}
	{
		// return UnityEngine.Input.GetMouseButtonDown((int)InputSimulationMouseButton.Left) || UnityEngine.Input.GetMouseButtonDown((int)InputSimulationMouseButton.Right) || UnityEngine.Input.GetMouseButtonDown((int)InputSimulationMouseButton.Middle);
		bool L_19 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b3;
		}
	}
	{
		bool L_20 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b3;
		}
	}
	{
		bool L_21 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(2, /*hidden argument*/NULL);
		return L_21;
	}

IL_00b3:
	{
		return (bool)1;
	}

IL_00b5:
	{
		// return !UnityEngine.Input.GetKeyDown(KeyCode.Escape);
		bool L_22 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)27), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
	}

IL_00c0:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ManualCameraControl::SetWantsMouseJumping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualCameraControl_SetWantsMouseJumping_m763B353004DF2F48A148C196711C3F24F407A7F4 (ManualCameraControl_t380DD9D659603CF4AE34B499C92C34FF9C6845CB * __this, bool ___wantsJumping0, const RuntimeMethod* method)
{
	{
		// if (wantsJumping != this.isMouseJumping)
		bool L_0 = ___wantsJumping0;
		bool L_1 = __this->get_isMouseJumping_1();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_004d;
		}
	}
	{
		// this.isMouseJumping = wantsJumping;
		bool L_2 = ___wantsJumping0;
		__this->set_isMouseJumping_1(L_2);
		// if (wantsJumping)
		bool L_3 = ___wantsJumping0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// UnityEngine.Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
		// wasCursorVisible = UnityEngine.Cursor.visible;
		bool L_4 = Cursor_get_visible_m0BB8BC7FEDD558FB661E9023AB8C04FFEE41377C(/*hidden argument*/NULL);
		__this->set_wasCursorVisible_8(L_4);
		// UnityEngine.Cursor.visible = false;
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)0, /*hidden argument*/NULL);
		// this.lastMousePosition = UnityEngine.Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		__this->set_lastMousePosition_4(L_5);
		// }
		return;
	}

IL_0036:
	{
		// UnityEngine.Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
		// UnityEngine.Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(0, /*hidden argument*/NULL);
		// UnityEngine.Cursor.visible = wasCursorVisible;
		bool L_6 = __this->get_wasCursorVisible_8();
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431(L_6, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsCameraControlEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsCameraControlEnabled_m4A126F4D0B5BACDD83B6D26532FE1A6ED1FBBC69 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCameraControlEnabled => isCameraControlEnabled;
		bool L_0 = __this->get_isCameraControlEnabled_5();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ExtraMouseSensitivityScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ExtraMouseSensitivityScale_mAC27CAA55A3D2E2CFD163C201458A55DF9986E46 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float ExtraMouseSensitivityScale => extraMouseSensitivityScale;
		float L_0 = __this->get_extraMouseSensitivityScale_6();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultMouseSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultMouseSensitivity_m6318EE5940068250E4995CA50A7B48AA2D7B38D0 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultMouseSensitivity => defaultMouseSensitivity;
		float L_0 = __this->get_defaultMouseSensitivity_7();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSimulationMouseButton Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public InputSimulationMouseButton MouseLookButton => mouseLookButton;
		int32_t L_0 = __this->get_mouseLookButton_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsControllerLookInverted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsControllerLookInverted_m1F1DDDC2A8E1523EAFCFA298669C7DB4F87AAC4D (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsControllerLookInverted => isControllerLookInverted;
		bool L_0 = __this->get_isControllerLookInverted_9();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_CurrentControlMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_CurrentControlMode_m365A1934F1906A26E0865D061C759F74CD7F8BBB (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public InputSimulationControlMode CurrentControlMode => currentControlMode;
		int32_t L_0 = __this->get_currentControlMode_10();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_FastControlKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_FastControlKey_m7EBE38DE672182505B89E7996FEF7BCE4A1B7803 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode FastControlKey => fastControlKey;
		int32_t L_0 = __this->get_fastControlKey_11();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlSlowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlSlowSpeed_m876415D8FBE9D75C3C183514450741EAF5F07A7B (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float ControlSlowSpeed => controlSlowSpeed;
		float L_0 = __this->get_controlSlowSpeed_12();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlFastSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlFastSpeed_mFC4C7367E2EED39F2170D25353F140C624730606 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float ControlFastSpeed => controlFastSpeed;
		float L_0 = __this->get_controlFastSpeed_13();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveHorizontal_m017554BDDC001B7EA768A8232E20D7458D583027 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveHorizontal => moveHorizontal;
		String_t* L_0 = __this->get_moveHorizontal_14();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveVertical_mD3951F2FDB8CEB301D4060806EC0CA6759896766 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveVertical => moveVertical;
		String_t* L_0 = __this->get_moveVertical_15();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseX_m948C6DC5FA747EF496CF4D034559866E42208385 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseX => mouseX;
		String_t* L_0 = __this->get_mouseX_16();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseY_m09ED3578096DF704596D515302D86E585CFB5C02 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseY => mouseY;
		String_t* L_0 = __this->get_mouseY_17();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookHorizontal_m42B3D6D256B7AAC814327C831B5D6AA1DF97E255 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string LookHorizontal => lookHorizontal;
		String_t* L_0 = __this->get_lookHorizontal_18();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookVertical_m96BDB7F20C2470F9A83B319056DFAF7506DC42FE (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string LookVertical => lookVertical;
		String_t* L_0 = __this->get_lookVertical_19();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_SimulateEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_SimulateEyePosition_m65F1A898A3FF7197331712C132AFF3C07F20848F (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public bool SimulateEyePosition => simulateEyePosition;
		bool L_0 = __this->get_simulateEyePosition_20();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandSimulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_HandSimulationMode_m7AF9A263BF955CD221CAC873EE1B703CA8C400C9 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public HandSimulationMode HandSimulationMode { get => handSimulationMode; set => handSimulationMode = value; }
		int32_t L_0 = __this->get_handSimulationMode_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::set_HandSimulationMode(Microsoft.MixedReality.Toolkit.Input.HandSimulationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInputSimulationProfile_set_HandSimulationMode_mFD185DE42C1734E379082E7FE6837EA41C74E77B (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HandSimulationMode HandSimulationMode { get => handSimulationMode; set => handSimulationMode = value; }
		int32_t L_0 = ___value0;
		__this->set_handSimulationMode_21(L_0);
		return;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleLeftHandKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_m0938B5767F57F921502537FDEEAD30DFCA852EA0 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode ToggleLeftHandKey => toggleLeftHandKey;
		int32_t L_0 = __this->get_toggleLeftHandKey_22();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleRightHandKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m6800CE9022A5B139B2435C14B93598A383FA17E2 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode ToggleRightHandKey => toggleRightHandKey;
		int32_t L_0 = __this->get_toggleRightHandKey_23();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandHideTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandHideTimeout_m68A2277521E6F5AB774F6C2B8C33308995704297 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandHideTimeout => handHideTimeout;
		float L_0 = __this->get_handHideTimeout_24();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftHandManipulationKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_m5CF930DD138B33A6C88308A93ABF1FD23C8E95EB (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode LeftHandManipulationKey => leftHandManipulationKey;
		int32_t L_0 = __this->get_leftHandManipulationKey_25();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightHandManipulationKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightHandManipulationKey_mA429EA7F531EC9F910DB0EFF6E7A36E27AB58424 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode RightHandManipulationKey => rightHandManipulationKey;
		int32_t L_0 = __this->get_rightHandManipulationKey_26();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId DefaultHandGesture => defaultHandGesture;
		int32_t L_0 = __this->get_defaultHandGesture_27();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftMouseHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId LeftMouseHandGesture => leftMouseHandGesture;
		int32_t L_0 = __this->get_leftMouseHandGesture_28();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MiddleMouseHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId MiddleMouseHandGesture => middleMouseHandGesture;
		int32_t L_0 = __this->get_middleMouseHandGesture_29();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightMouseHandGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId RightMouseHandGesture => rightMouseHandGesture;
		int32_t L_0 = __this->get_rightMouseHandGesture_30();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandGestureAnimationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_m159042CFADEA1948914A6AD9D52193E9179B0AF5 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandGestureAnimationSpeed => handGestureAnimationSpeed;
		float L_0 = __this->get_handGestureAnimationSpeed_31();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_mBC1A3E5C22D4854356392379561E246374610007 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HoldStartDuration => holdStartDuration;
		float L_0 = __this->get_holdStartDuration_32();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m30BD08DA409E73AE42567F6420EB5E92DC7981E4 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float NavigationStartThreshold => navigationStartThreshold;
		float L_0 = __this->get_navigationStartThreshold_33();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultHandDistance_m3D175B58CA9EBA30092EA2A68D01EA4B94489C4A (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultHandDistance => defaultHandDistance;
		float L_0 = __this->get_defaultHandDistance_34();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandDepthMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m6604B44E146EA94CBD6109337F0190E999766DA8 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandDepthMultiplier => handDepthMultiplier;
		float L_0 = __this->get_handDepthMultiplier_35();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandJitterAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandJitterAmount_mDDF19A0974AFB60C2E91D129017A3D0805143F60 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandJitterAmount => handJitterAmount;
		float L_0 = __this->get_handJitterAmount_36();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_YawHandCWKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_YawHandCWKey_m8D25D317DD2ADDDA33255C9F7E993E854CE32578 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode YawHandCWKey => yawHandCWKey;
		int32_t L_0 = __this->get_yawHandCWKey_37();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_YawHandCCWKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_YawHandCCWKey_mEAB61DF36DB74C3D75B4A74327E3DBAFC005C1F7 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode YawHandCCWKey => yawHandCCWKey;
		int32_t L_0 = __this->get_yawHandCCWKey_38();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_PitchHandCWKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_PitchHandCWKey_m345C749AC96907F9EC2C9C2A67A9762CE9DA1FF0 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode PitchHandCWKey => pitchHandCWKey;
		int32_t L_0 = __this->get_pitchHandCWKey_39();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_PitchHandCCWKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_PitchHandCCWKey_mF31570A5CFFE2C565A701FF6318F8397DBAB689C (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode PitchHandCCWKey => pitchHandCCWKey;
		int32_t L_0 = __this->get_pitchHandCCWKey_40();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RollHandCWKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RollHandCWKey_mCD75EA7E80AB5D53517352CABF579A50663C7BF9 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode RollHandCWKey => rollHandCWKey;
		int32_t L_0 = __this->get_rollHandCWKey_41();
		return L_0;
	}
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RollHandCCWKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RollHandCCWKey_m1BE607B59E89E69C3ADBE1527F1C6309D9599D63 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode RollHandCCWKey => rollHandCCWKey;
		int32_t L_0 = __this->get_rollHandCCWKey_42();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandRotationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandRotationSpeed_m536913F900351CB840F04EEF9B71F97848A9EAC6 (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandRotationSpeed => handRotationSpeed;
		float L_0 = __this->get_handRotationSpeed_43();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInputSimulationProfile__ctor_m9769DFD9BDD54BA2B6A190798622CEDC78EA2EEB (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputSimulationProfile__ctor_m9769DFD9BDD54BA2B6A190798622CEDC78EA2EEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isCameraControlEnabled = true;
		__this->set_isCameraControlEnabled_5((bool)1);
		// private float extraMouseSensitivityScale = 3.0f;
		__this->set_extraMouseSensitivityScale_6((3.0f));
		// private float defaultMouseSensitivity = 0.1f;
		__this->set_defaultMouseSensitivity_7((0.1f));
		// private InputSimulationMouseButton mouseLookButton = InputSimulationMouseButton.Right;
		__this->set_mouseLookButton_8(1);
		// private bool isControllerLookInverted = true;
		__this->set_isControllerLookInverted_9((bool)1);
		// private KeyCode fastControlKey = KeyCode.RightControl;
		__this->set_fastControlKey_11(((int32_t)305));
		// private float controlSlowSpeed = 0.1f;
		__this->set_controlSlowSpeed_12((0.1f));
		// private float controlFastSpeed = 1.0f;
		__this->set_controlFastSpeed_13((1.0f));
		// private string moveHorizontal = "Horizontal";
		__this->set_moveHorizontal_14(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		// private string moveVertical = "Vertical";
		__this->set_moveVertical_15(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5);
		// private string mouseX = "Mouse X";
		__this->set_mouseX_16(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		// private string mouseY = "Mouse Y";
		__this->set_mouseY_17(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		// private string lookHorizontal = ControllerMappingLibrary.AXIS_4;
		__this->set_lookHorizontal_18(_stringLiteral8B7970623A806CC748C1B218861BE920B011B98C);
		// private string lookVertical = ControllerMappingLibrary.AXIS_5;
		__this->set_lookVertical_19(_stringLiteral04734178D407F1573AAACEB7E086B11BCFABD7FF);
		// private HandSimulationMode handSimulationMode = HandSimulationMode.Articulated;
		__this->set_handSimulationMode_21(2);
		// private KeyCode toggleLeftHandKey = KeyCode.T;
		__this->set_toggleLeftHandKey_22(((int32_t)116));
		// private KeyCode toggleRightHandKey = KeyCode.Y;
		__this->set_toggleRightHandKey_23(((int32_t)121));
		// private float handHideTimeout = 0.2f;
		__this->set_handHideTimeout_24((0.2f));
		// private KeyCode leftHandManipulationKey = KeyCode.LeftShift;
		__this->set_leftHandManipulationKey_25(((int32_t)304));
		// private KeyCode rightHandManipulationKey = KeyCode.Space;
		__this->set_rightHandManipulationKey_26(((int32_t)32));
		// private ArticulatedHandPose.GestureId defaultHandGesture = ArticulatedHandPose.GestureId.Open;
		__this->set_defaultHandGesture_27(2);
		// private ArticulatedHandPose.GestureId leftMouseHandGesture = ArticulatedHandPose.GestureId.Pinch;
		__this->set_leftMouseHandGesture_28(3);
		// private float handGestureAnimationSpeed = 8.0f;
		__this->set_handGestureAnimationSpeed_31((8.0f));
		// private float holdStartDuration = 0.5f;
		__this->set_holdStartDuration_32((0.5f));
		// private float navigationStartThreshold = 0.03f;
		__this->set_navigationStartThreshold_33((0.03f));
		// private float defaultHandDistance = 0.5f;
		__this->set_defaultHandDistance_34((0.5f));
		// private float handDepthMultiplier = 0.1f;
		__this->set_handDepthMultiplier_35((0.1f));
		// private KeyCode yawHandCWKey = KeyCode.E;
		__this->set_yawHandCWKey_37(((int32_t)101));
		// private KeyCode yawHandCCWKey = KeyCode.Q;
		__this->set_yawHandCCWKey_38(((int32_t)113));
		// private KeyCode pitchHandCWKey = KeyCode.F;
		__this->set_pitchHandCWKey_39(((int32_t)102));
		// private KeyCode pitchHandCCWKey = KeyCode.R;
		__this->set_pitchHandCCWKey_40(((int32_t)114));
		// private KeyCode rollHandCWKey = KeyCode.X;
		__this->set_rollHandCWKey_41(((int32_t)120));
		// private KeyCode rollHandCCWKey = KeyCode.Z;
		__this->set_rollHandCCWKey_42(((int32_t)122));
		// private float handRotationSpeed = 100.0f;
		__this->set_handRotationSpeed_43((100.0f));
		BaseMixedRealityProfile__ctor_mC73E9360DB114F72FBC08703A0A9ABA78168B78A(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_SimulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedArticulatedHand_get_SimulationMode_mF859372BC1E7EBA1FB344F3693308E1720483F94 (SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9 * __this, const RuntimeMethod* method)
{
	{
		// public override HandSimulationMode SimulationMode => HandSimulationMode.Articulated;
		return (int32_t)(2);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedArticulatedHand__ctor_m5518A9A451EE08DB313A88F7EDF1FCF72BFD5333 (SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand__ctor_m5518A9A451EE08DB313A88F7EDF1FCF72BFD5333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_25(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_26(L_1);
		// private MixedRealityPose lastPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_2 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_lastPointerPose_27(L_2);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_3 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_28(L_3);
		// private MixedRealityPose currentIndexPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_4 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_currentIndexPose_29(L_4);
		// private MixedRealityPose currentGripPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_5 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_currentGripPose_30(L_5);
		// private MixedRealityPose lastGripPose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_6 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_lastGripPose_31(L_6);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_7 = ___trackingState0;
		uint8_t L_8 = ___controllerHandedness1;
		RuntimeObject* L_9 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_10 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_m93808D1348F3FB6FA63A335E89F47FB5345EE1C4(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* SimulatedArticulatedHand_get_DefaultInteractions_mDE48166990BF99C0D3809DD299CDCC0FC06777B4 (SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_get_DefaultInteractions_mDE48166990BF99C0D3809DD299CDCC0FC06777B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(2, "Select", AxisType.Digital, DeviceInputType.Select, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(3, "Grab", AxisType.SingleAxis, DeviceInputType.TriggerPress, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(4, "Index Finger Pose", AxisType.SixDof, DeviceInputType.IndexFinger, MixedRealityInputAction.None),
		// };
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_0 = (MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA*)(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA_il2cpp_TypeInfo_var, (uint32_t)5);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_2 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_3 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_3, 0, _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E, 7, 3, L_2, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_3);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_4 = L_1;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_5 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_6 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_6, 1, _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC, 7, ((int32_t)14), L_5, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_6);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_7 = L_4;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_8 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_9 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_9, 2, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), L_8, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_9);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_10 = L_7;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_11 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_12 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_12, 3, _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E, 3, ((int32_t)13), L_11, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_12);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_13 = L_10;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_14 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_15 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_15, 4, _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB, 7, ((int32_t)33), L_14, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_15);
		return L_13;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::SetupDefaultInteractions(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedArticulatedHand_SetupDefaultInteractions_m9F9F05A361C810DB38582F466CE28CAD1A4049F5 (SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9 * __this, uint8_t ___controllerHandedness0, const RuntimeMethod* method)
{
	{
		// AssignControllerMappings(DefaultInteractions);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		BaseController_AssignControllerMappings_mB58538C7085760171304343CFBD77E5D8F230054(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedArticulatedHand_UpdateInteractions_m982D348EDBBB3D148D95B9F7E4BF863AFB851DA9 (SimulatedArticulatedHand_tE70788F371CF5A48A99B3DE695FFA7A0FEF6E2E9 * __this, SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_UpdateInteractions_m982D348EDBBB3D148D95B9F7E4BF863AFB851DA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	RuntimeObject* G_B34_0 = NULL;
	RuntimeObject* G_B33_0 = NULL;
	RuntimeObject* G_B39_0 = NULL;
	RuntimeObject* G_B38_0 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	RuntimeObject* G_B41_0 = NULL;
	RuntimeObject* G_B47_0 = NULL;
	RuntimeObject* G_B46_0 = NULL;
	RuntimeObject* G_B50_0 = NULL;
	RuntimeObject* G_B49_0 = NULL;
	RuntimeObject* G_B54_0 = NULL;
	RuntimeObject* G_B53_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* G_B57_0 = NULL;
	int32_t G_B57_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B59_0;
	memset((&G_B59_0), 0, sizeof(G_B59_0));
	int32_t G_B59_1 = 0;
	{
		// lastPointerPose = currentPointerPose;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_0 = __this->get_currentPointerPose_28();
		__this->set_lastPointerPose_27(L_0);
		// lastGripPose = currentGripPose;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_1 = __this->get_currentGripPose_30();
		__this->set_lastGripPose_31(L_1);
		// Vector3 pointerPosition = jointPoses[TrackedHandJoint.IndexTip].Position;
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_2 = ((SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E *)__this)->get_jointPoses_24();
		NullCheck(L_2);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_3 = Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6(L_2, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6_RuntimeMethod_var);
		V_1 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = MixedRealityPose_get_Position_mF175BAE3270E5432E605BDD5FD1FA5F722B24AEE_inline((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// IsPositionAvailable = IsRotationAvailable = pointerPosition != Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_7 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_5, L_6, /*hidden argument*/NULL);
		bool L_8 = L_7;
		V_2 = L_8;
		BaseController_set_IsRotationAvailable_m5259A799822AFD94A2BEE4B47F887A03158FE308_inline(__this, L_8, /*hidden argument*/NULL);
		bool L_9 = V_2;
		BaseController_set_IsPositionAvailable_m76D7FB5DBF945174A9D9B7A19123783742C6B57F_inline(__this, L_9, /*hidden argument*/NULL);
		// if (IsPositionAvailable)
		bool L_10 = BaseController_get_IsPositionAvailable_m3E2EB0D15AAADABB3D967535353AD53539677046_inline(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cc;
		}
	}
	{
		// HandRay.Update(pointerPosition, GetPalmNormal(), CameraCache.Main.transform, ControllerHandedness);
		HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * L_11 = BaseHand_get_HandRay_mDB7145BE29023110AF5EC4037ABE75660776680F_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = BaseHand_GetPalmNormal_mB5FF6D007531A6DD4C3E7632AF60DD2C586AA76B(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		uint8_t L_16 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		HandRay_Update_m2C7628B2A0B6F1EE9C20DE0E38CDD4854F70F149(L_11, L_12, L_13, L_15, L_16, /*hidden argument*/NULL);
		// Ray ray = HandRay.Ray;
		HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * L_17 = BaseHand_get_HandRay_mDB7145BE29023110AF5EC4037ABE75660776680F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_18 = HandRay_get_Ray_mA5DDBC5EF46D813F75A3728882AE72F8A779C189(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// currentPointerPose.Position = ray.origin;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_19 = __this->get_address_of_currentPointerPose_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		MixedRealityPose_set_Position_m28EBD523337BC95684EFC016980F3862DE763759_inline((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_19, L_20, /*hidden argument*/NULL);
		// currentPointerPose.Rotation = Quaternion.LookRotation(ray.direction);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_21 = __this->get_address_of_currentPointerPose_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_22, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m1AC620BE37B8F415170D725902EE1C3A92ECC19B_inline((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_21, L_23, /*hidden argument*/NULL);
		// currentGripPose = jointPoses[TrackedHandJoint.Palm];
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_24 = ((SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E *)__this)->get_jointPoses_24();
		NullCheck(L_24);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_25 = Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6(L_24, 2, /*hidden argument*/Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6_RuntimeMethod_var);
		__this->set_currentGripPose_30(L_25);
		// currentIndexPose = jointPoses[TrackedHandJoint.IndexTip];
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_26 = ((SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E *)__this)->get_jointPoses_24();
		NullCheck(L_26);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_27 = Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6(L_26, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6_RuntimeMethod_var);
		__this->set_currentIndexPose_29(L_27);
	}

IL_00cc:
	{
		// if (lastGripPose != currentGripPose)
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_28 = __this->get_lastGripPose_31();
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_29 = __this->get_currentGripPose_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var);
		bool L_30 = MixedRealityPose_op_Inequality_m85FF483B646A63C06AE543020D4F85257046AB3D(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0170;
		}
	}
	{
		// if (IsPositionAvailable && IsRotationAvailable)
		bool L_31 = BaseController_get_IsPositionAvailable_m3E2EB0D15AAADABB3D967535353AD53539677046_inline(__this, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0112;
		}
	}
	{
		bool L_32 = BaseController_get_IsRotationAvailable_m59D5E1DD267C83A3DB834096028590522C934868_inline(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0112;
		}
	}
	{
		// InputSystem?.RaiseSourcePoseChanged(InputSource, this, currentGripPose);
		RuntimeObject* L_33 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_34 = L_33;
		G_B6_0 = L_34;
		if (L_34)
		{
			G_B7_0 = L_34;
			goto IL_00fe;
		}
	}
	{
		goto IL_0170;
	}

IL_00fe:
	{
		RuntimeObject* L_35 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_36 = __this->get_currentGripPose_30();
		NullCheck(G_B7_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B7_0, L_35, __this, L_36);
		// }
		goto IL_0170;
	}

IL_0112:
	{
		// else if (IsPositionAvailable && !IsRotationAvailable)
		bool L_37 = BaseController_get_IsPositionAvailable_m3E2EB0D15AAADABB3D967535353AD53539677046_inline(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0142;
		}
	}
	{
		bool L_38 = BaseController_get_IsRotationAvailable_m59D5E1DD267C83A3DB834096028590522C934868_inline(__this, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0142;
		}
	}
	{
		// InputSystem?.RaiseSourcePositionChanged(InputSource, this, currentPointerPosition);
		RuntimeObject* L_39 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_40 = L_39;
		G_B11_0 = L_40;
		if (L_40)
		{
			G_B12_0 = L_40;
			goto IL_012e;
		}
	}
	{
		goto IL_0170;
	}

IL_012e:
	{
		RuntimeObject* L_41 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = __this->get_currentPointerPosition_25();
		NullCheck(G_B12_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B12_0, L_41, __this, L_42);
		// }
		goto IL_0170;
	}

IL_0142:
	{
		// else if (!IsPositionAvailable && IsRotationAvailable)
		bool L_43 = BaseController_get_IsPositionAvailable_m3E2EB0D15AAADABB3D967535353AD53539677046_inline(__this, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0170;
		}
	}
	{
		bool L_44 = BaseController_get_IsRotationAvailable_m59D5E1DD267C83A3DB834096028590522C934868_inline(__this, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0170;
		}
	}
	{
		// InputSystem?.RaiseSourceRotationChanged(InputSource, this, currentPointerRotation);
		RuntimeObject* L_45 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_46 = L_45;
		G_B16_0 = L_46;
		if (L_46)
		{
			G_B17_0 = L_46;
			goto IL_015e;
		}
	}
	{
		goto IL_0170;
	}

IL_015e:
	{
		RuntimeObject* L_47 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = __this->get_currentPointerRotation_26();
		NullCheck(G_B17_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B17_0, L_47, __this, L_48);
	}

IL_0170:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_4 = 0;
		goto IL_040d;
	}

IL_0178:
	{
		// switch (Interactions[i].InputType)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_49 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		int32_t L_53 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)13))))
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)3)))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)13))))
		{
			goto IL_031b;
		}
	}
	{
		goto IL_0407;
	}

IL_01a1:
	{
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)14))))
		{
			goto IL_021e;
		}
	}
	{
		int32_t L_58 = V_5;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)25))))
		{
			goto IL_027e;
		}
	}
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)33))))
		{
			goto IL_03b2;
		}
	}
	{
		goto IL_0407;
	}

IL_01be:
	{
		// Interactions[i].PoseData = currentPointerPose;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_60 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_64 = __this->get_currentPointerPose_28();
		NullCheck(L_63);
		MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287(L_63, L_64, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_65 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		bool L_69 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0407;
		}
	}
	{
		// InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentPointerPose);
		RuntimeObject* L_70 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_71 = L_70;
		G_B29_0 = L_71;
		if (L_71)
		{
			G_B30_0 = L_71;
			goto IL_01f4;
		}
	}
	{
		goto IL_0407;
	}

IL_01f4:
	{
		RuntimeObject* L_72 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_73 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_74 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_75 = V_4;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_78 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_77, /*hidden argument*/NULL);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_79 = __this->get_currentPointerPose_28();
		NullCheck(G_B30_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B30_0, L_72, L_73, L_78, L_79);
		// break;
		goto IL_0407;
	}

IL_021e:
	{
		// Interactions[i].PoseData = currentGripPose;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_80 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_81 = V_4;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_84 = __this->get_currentGripPose_30();
		NullCheck(L_83);
		MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287(L_83, L_84, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_85 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_86 = V_4;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		bool L_89 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0407;
		}
	}
	{
		// InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentGripPose);
		RuntimeObject* L_90 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_91 = L_90;
		G_B33_0 = L_91;
		if (L_91)
		{
			G_B34_0 = L_91;
			goto IL_0254;
		}
	}
	{
		goto IL_0407;
	}

IL_0254:
	{
		RuntimeObject* L_92 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_93 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_94 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_95 = V_4;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_98 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_97, /*hidden argument*/NULL);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_99 = __this->get_currentGripPose_30();
		NullCheck(G_B34_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B34_0, L_92, L_93, L_98, L_99);
		// break;
		goto IL_0407;
	}

IL_027e:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_100 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_101 = V_4;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_104 = ___handData0;
		NullCheck(L_104);
		bool L_105 = SimulatedHandData_get_IsPinching_mB7C40888399E88C93E755FE89D50234CF5F5C981_inline(L_104, /*hidden argument*/NULL);
		NullCheck(L_103);
		MixedRealityInteractionMapping_set_BoolData_mE86E7E665BCA02A2E69651A333993A51703F7D64(L_103, L_105, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_106 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_107 = V_4;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		bool L_110 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_0407;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_111 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		bool L_115 = MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B_inline(L_114, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_02e8;
		}
	}
	{
		// InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		RuntimeObject* L_116 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_117 = L_116;
		G_B38_0 = L_117;
		if (L_117)
		{
			G_B39_0 = L_117;
			goto IL_02c4;
		}
	}
	{
		goto IL_0407;
	}

IL_02c4:
	{
		RuntimeObject* L_118 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_119 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_120 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_121 = V_4;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_124 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_123, /*hidden argument*/NULL);
		NullCheck(G_B39_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B39_0, L_118, L_119, L_124);
		// }
		goto IL_0407;
	}

IL_02e8:
	{
		// InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		RuntimeObject* L_125 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_126 = L_125;
		G_B41_0 = L_126;
		if (L_126)
		{
			G_B42_0 = L_126;
			goto IL_02f7;
		}
	}
	{
		goto IL_0407;
	}

IL_02f7:
	{
		RuntimeObject* L_127 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_128 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_129 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_130 = V_4;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_133 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_132, /*hidden argument*/NULL);
		NullCheck(G_B42_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B42_0, L_127, L_128, L_133);
		// break;
		goto IL_0407;
	}

IL_031b:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_134 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_135 = V_4;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_138 = ___handData0;
		NullCheck(L_138);
		bool L_139 = SimulatedHandData_get_IsPinching_mB7C40888399E88C93E755FE89D50234CF5F5C981_inline(L_138, /*hidden argument*/NULL);
		NullCheck(L_137);
		MixedRealityInteractionMapping_set_BoolData_mE86E7E665BCA02A2E69651A333993A51703F7D64(L_137, L_139, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_140 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_141 = V_4;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		bool L_144 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_143, /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_0407;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_145 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_146 = V_4;
		NullCheck(L_145);
		int32_t L_147 = L_146;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		bool L_149 = MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B_inline(L_148, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_0385;
		}
	}
	{
		// InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		RuntimeObject* L_150 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_151 = L_150;
		G_B46_0 = L_151;
		if (L_151)
		{
			G_B47_0 = L_151;
			goto IL_0361;
		}
	}
	{
		goto IL_0407;
	}

IL_0361:
	{
		RuntimeObject* L_152 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_153 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_154 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_155 = V_4;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_157);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_158 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_157, /*hidden argument*/NULL);
		NullCheck(G_B47_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B47_0, L_152, L_153, L_158);
		// }
		goto IL_0407;
	}

IL_0385:
	{
		// InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		RuntimeObject* L_159 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_160 = L_159;
		G_B49_0 = L_160;
		if (L_160)
		{
			G_B50_0 = L_160;
			goto IL_0391;
		}
	}
	{
		goto IL_0407;
	}

IL_0391:
	{
		RuntimeObject* L_161 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_162 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_163 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_164 = V_4;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_167 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_166, /*hidden argument*/NULL);
		NullCheck(G_B50_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B50_0, L_161, L_162, L_167);
		// break;
		goto IL_0407;
	}

IL_03b2:
	{
		// Interactions[i].PoseData = currentIndexPose;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_168 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_169 = V_4;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_172 = __this->get_currentIndexPose_29();
		NullCheck(L_171);
		MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287(L_171, L_172, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_173 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_174 = V_4;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		bool L_177 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_176, /*hidden argument*/NULL);
		if (!L_177)
		{
			goto IL_0407;
		}
	}
	{
		// InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentIndexPose);
		RuntimeObject* L_178 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_179 = L_178;
		G_B53_0 = L_179;
		if (L_179)
		{
			G_B54_0 = L_179;
			goto IL_03e2;
		}
	}
	{
		goto IL_0407;
	}

IL_03e2:
	{
		RuntimeObject* L_180 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_181 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_182 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_186 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_185, /*hidden argument*/NULL);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_187 = __this->get_currentIndexPose_29();
		NullCheck(G_B54_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B54_0, L_180, L_181, L_186, L_187);
	}

IL_0407:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_188 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)1));
	}

IL_040d:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_189 = V_4;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_190 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_191 = L_190;
		G_B57_0 = L_191;
		G_B57_1 = L_189;
		if (L_191)
		{
			G_B58_0 = L_191;
			G_B58_1 = L_189;
			goto IL_0425;
		}
	}
	{
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_192 = V_7;
		G_B59_0 = L_192;
		G_B59_1 = G_B57_1;
		goto IL_042c;
	}

IL_0425:
	{
		NullCheck(G_B58_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_193;
		memset((&L_193), 0, sizeof(L_193));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_193), (((int32_t)((int32_t)(((RuntimeArray*)G_B58_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B59_0 = L_193;
		G_B59_1 = G_B58_1;
	}

IL_042c:
	{
		V_6 = G_B59_0;
		int32_t L_194 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_195 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B59_1) < ((int32_t)L_194))? 1 : 0)&(int32_t)L_195)))
		{
			goto IL_0178;
		}
	}
	{
		// }
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_SimulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedGestureHand_get_SimulationMode_m3E7C9A35BFAA289E74524BCA142A3771A08B8ABB (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	{
		// public override HandSimulationMode SimulationMode => HandSimulationMode.Gestures;
		return (int32_t)(1);
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_navigationDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedGestureHand_get_navigationDelta_m0FD22233CFFA608F80B80E740D01DA6F8E22582A (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_navigationDelta_m0FD22233CFFA608F80B80E740D01DA6F8E22582A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 navigationDelta => new Vector3(
		//     Mathf.Clamp(cumulativeDelta.x, -1.0f, 1.0f) * currentRailsUsed.x,
		//     Mathf.Clamp(cumulativeDelta.y, -1.0f, 1.0f) * currentRailsUsed.y,
		//     Mathf.Clamp(cumulativeDelta.z, -1.0f, 1.0f) * currentRailsUsed.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_cumulativeDelta_38();
		float L_1 = L_0->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_1, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_currentRailsUsed_36();
		float L_4 = L_3->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_cumulativeDelta_38();
		float L_6 = L_5->get_y_3();
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_6, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_currentRailsUsed_36();
		float L_9 = L_8->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_10 = __this->get_address_of_cumulativeDelta_38();
		float L_11 = L_10->get_z_4();
		float L_12 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = __this->get_address_of_currentRailsUsed_36();
		float L_14 = L_13->get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand__ctor_m93581EB80551349B8F9FD7C292CBDBFA5243F97A (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand__ctor_m93581EB80551349B8F9FD7C292CBDBFA5243F97A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityInputAction holdAction = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_0 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		__this->set_holdAction_26(L_0);
		// private MixedRealityInputAction navigationAction = MixedRealityInputAction.None;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_1 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		__this->set_navigationAction_27(L_1);
		// private MixedRealityInputAction manipulationAction = MixedRealityInputAction.None;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_2 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		__this->set_manipulationAction_28(L_2);
		// private Vector3 currentRailsUsed = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_3);
		// private Vector3 currentPosition = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPosition_37(L_4);
		// private Vector3 cumulativeDelta = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_5);
		// private MixedRealityPose currentGripPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_6 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_currentGripPose_39(L_6);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_7 = ___trackingState0;
		uint8_t L_8 = ___controllerHandedness1;
		RuntimeObject* L_9 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_10 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_m93808D1348F3FB6FA63A335E89F47FB5345EE1C4(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_m5FC39BD038B64363C40173D9E60B1BC1606C7A3A (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_EnsureProfileSettings_m5FC39BD038B64363C40173D9E60B1BC1606C7A3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * V_0 = NULL;
	MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * V_1 = NULL;
	int32_t V_2 = 0;
	MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * G_B7_0 = NULL;
	MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * G_B6_0 = NULL;
	MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * G_B5_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * G_B21_0 = NULL;
	{
		// if (initializedFromProfile)
		bool L_0 = __this->get_initializedFromProfile_25();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// initializedFromProfile = true;
		__this->set_initializedFromProfile_25((bool)1);
		// var gestureProfile = InputSystem?.InputSystemProfile?.GesturesProfile;
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001d;
		}
	}
	{
		G_B7_0 = ((MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 *)(NULL));
		goto IL_002e;
	}

IL_001d:
	{
		NullCheck(G_B4_0);
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_3 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B4_0);
		MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * L_4 = L_3;
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0029;
		}
	}
	{
		G_B7_0 = ((MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 *)(NULL));
		goto IL_002e;
	}

IL_0029:
	{
		NullCheck(G_B6_0);
		MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * L_5 = MixedRealityInputSystemProfile_get_GesturesProfile_mA8F275BA8A5AE96D3A95350F698A7343D72E5129_inline(G_B6_0, /*hidden argument*/NULL);
		G_B7_0 = L_5;
	}

IL_002e:
	{
		V_0 = G_B7_0;
		// if (gestureProfile != null)
		MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		V_2 = 0;
		goto IL_0098;
	}

IL_003c:
	{
		// var gesture = gestureProfile.Gestures[i];
		MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * L_8 = V_0;
		NullCheck(L_8);
		MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* L_9 = MixedRealityGesturesProfile_get_Gestures_mBAB7F3737E09478B3FA7F30ECAC24D6840E98580_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// switch (gesture.GestureType)
		int32_t L_13 = MixedRealityGestureMapping_get_GestureType_m6798792581776B818AF6A5307DD72D3425420C20_inline((MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		goto IL_0094;
	}

IL_0069:
	{
		// holdAction = gesture.Action;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_15 = MixedRealityGestureMapping_get_Action_mF225EE997BA38AFC7DCCA99F71434633FD683D82_inline((MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 *)(&V_3), /*hidden argument*/NULL);
		__this->set_holdAction_26(L_15);
		// break;
		goto IL_0094;
	}

IL_0078:
	{
		// manipulationAction = gesture.Action;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_16 = MixedRealityGestureMapping_get_Action_mF225EE997BA38AFC7DCCA99F71434633FD683D82_inline((MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 *)(&V_3), /*hidden argument*/NULL);
		__this->set_manipulationAction_28(L_16);
		// break;
		goto IL_0094;
	}

IL_0087:
	{
		// navigationAction = gesture.Action;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_17 = MixedRealityGestureMapping_get_Action_mF225EE997BA38AFC7DCCA99F71434633FD683D82_inline((MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 *)(&V_3), /*hidden argument*/NULL);
		__this->set_navigationAction_27(L_17);
	}

IL_0094:
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0098:
	{
		// for (int i = 0; i < gestureProfile.Gestures.Length; i++)
		int32_t L_19 = V_2;
		MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * L_20 = V_0;
		NullCheck(L_20);
		MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* L_21 = MixedRealityGesturesProfile_get_Gestures_mBAB7F3737E09478B3FA7F30ECAC24D6840E98580_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_003c;
		}
	}
	{
		// useRailsNavigation = gestureProfile.UseRailsNavigation;
		MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * L_22 = V_0;
		NullCheck(L_22);
		bool L_23 = MixedRealityGesturesProfile_get_UseRailsNavigation_mEAE6D30B9C69C0E5EA8115068FDA600F87CE02C6_inline(L_22, /*hidden argument*/NULL);
		__this->set_useRailsNavigation_29(L_23);
	}

IL_00af:
	{
		// MixedRealityInputSimulationProfile inputSimProfile = null;
		V_1 = (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 *)NULL;
		// if (InputSystem != null)
		RuntimeObject* L_24 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d7;
		}
	}
	{
		// inputSimProfile = (InputSystem as IMixedRealityDataProviderAccess).GetDataProvider<IInputSimulationService>()?.InputSimulationProfile;
		RuntimeObject* L_25 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_25, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_26 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_t9AF3035C6487685E30A3E3ADB5E2D70DC2C3B443_m33255EF491AD44DA64F7825B26A7EEFE2BFAD51A_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)), (String_t*)NULL);
		RuntimeObject* L_27 = L_26;
		G_B19_0 = L_27;
		if (L_27)
		{
			G_B20_0 = L_27;
			goto IL_00d1;
		}
	}
	{
		G_B21_0 = ((MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 *)(NULL));
		goto IL_00d6;
	}

IL_00d1:
	{
		NullCheck(G_B20_0);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_28 = InterfaceFuncInvoker0< MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.IInputSimulationService::get_InputSimulationProfile() */, IInputSimulationService_t9AF3035C6487685E30A3E3ADB5E2D70DC2C3B443_il2cpp_TypeInfo_var, G_B20_0);
		G_B21_0 = L_28;
	}

IL_00d6:
	{
		V_1 = G_B21_0;
	}

IL_00d7:
	{
		// if (inputSimProfile != null)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_29, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00f8;
		}
	}
	{
		// holdStartDuration = inputSimProfile.HoldStartDuration;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = MixedRealityInputSimulationProfile_get_HoldStartDuration_mBC1A3E5C22D4854356392379561E246374610007_inline(L_31, /*hidden argument*/NULL);
		__this->set_holdStartDuration_30(L_32);
		// navigationStartThreshold = inputSimProfile.NavigationStartThreshold;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_33 = V_1;
		NullCheck(L_33);
		float L_34 = MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m30BD08DA409E73AE42567F6420EB5E92DC7981E4_inline(L_33, /*hidden argument*/NULL);
		__this->set_navigationStartThreshold_31(L_34);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* SimulatedGestureHand_get_DefaultInteractions_m304D32B99A064523F1EC9DFD6873DEB55A56A8AF (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_DefaultInteractions_m304D32B99A064523F1EC9DFD6873DEB55A56A8AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Select", AxisType.Digital, DeviceInputType.Select, MixedRealityInputAction.None),
		//     new MixedRealityInteractionMapping(1, "Grip Pose", AxisType.SixDof, DeviceInputType.SpatialGrip, MixedRealityInputAction.None),
		// };
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_0 = (MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA*)(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_2 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_3 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_3, 0, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), L_2, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_3);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_4 = L_1;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_5 = MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline(/*hidden argument*/NULL);
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_6 = (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m42FA7B2EF2BAA3804530651DFDF1145EEECE437F(L_6, 1, _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A, 7, ((int32_t)14), L_5, 0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 *)L_6);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::SetupDefaultInteractions(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_SetupDefaultInteractions_m43EB37ECD45A5DF02A51C70044EE4A423D45F0EA (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, uint8_t ___controllerHandedness0, const RuntimeMethod* method)
{
	{
		// AssignControllerMappings(DefaultInteractions);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_0 = VirtFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_DefaultInteractions() */, __this);
		BaseController_AssignControllerMappings_mB58538C7085760171304343CFBD77E5D8F230054(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateInteractions_m96F24F8AEC7B7EC9C96EAF20378C4BBF49B26DF8 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateInteractions_m96F24F8AEC7B7EC9C96EAF20378C4BBF49B26DF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	int32_t G_B35_1 = 0;
	{
		// EnsureProfileSettings();
		SimulatedGestureHand_EnsureProfileSettings_m5FC39BD038B64363C40173D9E60B1BC1606C7A3A(__this, /*hidden argument*/NULL);
		// Vector3 lastPosition = currentPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_currentPosition_37();
		V_0 = L_0;
		// currentPosition = jointPoses[TrackedHandJoint.IndexTip].Position;
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_1 = ((SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E *)__this)->get_jointPoses_24();
		NullCheck(L_1);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_2 = Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6(L_1, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_mAA87FA69922BAF6733C05E34A765031668FCABA6_RuntimeMethod_var);
		V_1 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = MixedRealityPose_get_Position_mF175BAE3270E5432E605BDD5FD1FA5F722B24AEE_inline((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)(&V_1), /*hidden argument*/NULL);
		__this->set_currentPosition_37(L_3);
		// cumulativeDelta += currentPosition - lastPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_currentPosition_37();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_7, /*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_8);
		// currentGripPose.Position = currentPosition;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_9 = __this->get_address_of_currentGripPose_39();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_currentPosition_37();
		MixedRealityPose_set_Position_m28EBD523337BC95684EFC016980F3862DE763759_inline((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_9, L_10, /*hidden argument*/NULL);
		// if (lastPosition != currentPosition)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_currentPosition_37();
		bool L_13 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		// InputSystem?.RaiseSourcePositionChanged(InputSource, this, currentPosition);
		RuntimeObject* L_14 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_15 = L_14;
		G_B2_0 = L_15;
		if (L_15)
		{
			G_B3_0 = L_15;
			goto IL_0070;
		}
	}
	{
		goto IL_0082;
	}

IL_0070:
	{
		RuntimeObject* L_16 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = __this->get_currentPosition_37();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, L_16, __this, L_17);
	}

IL_0082:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		V_2 = 0;
		goto IL_0231;
	}

IL_0089:
	{
		// switch (Interactions[i].InputType)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_18 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)14))))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)25))))
		{
			goto IL_0103;
		}
	}
	{
		goto IL_022d;
	}

IL_00a6:
	{
		// Interactions[i].PoseData = currentGripPose;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_25 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_29 = __this->get_currentGripPose_39();
		NullCheck(L_28);
		MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287(L_28, L_29, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_30 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		bool L_34 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_022d;
		}
	}
	{
		// InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction, currentGripPose);
		RuntimeObject* L_35 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_36 = L_35;
		G_B10_0 = L_36;
		if (L_36)
		{
			G_B11_0 = L_36;
			goto IL_00da;
		}
	}
	{
		goto IL_022d;
	}

IL_00da:
	{
		RuntimeObject* L_37 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_38 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_39 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_43 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_42, /*hidden argument*/NULL);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_44 = __this->get_currentGripPose_39();
		NullCheck(G_B11_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B11_0, L_37, L_38, L_43, L_44);
		// break;
		goto IL_022d;
	}

IL_0103:
	{
		// Interactions[i].BoolData = handData.IsPinching;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_45 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_49 = ___handData0;
		NullCheck(L_49);
		bool L_50 = SimulatedHandData_get_IsPinching_mB7C40888399E88C93E755FE89D50234CF5F5C981_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		MixedRealityInteractionMapping_set_BoolData_mE86E7E665BCA02A2E69651A333993A51703F7D64(L_48, L_50, /*hidden argument*/NULL);
		// if (Interactions[i].Changed)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_51 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		bool L_55 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01c4;
		}
	}
	{
		// if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_56 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		bool L_60 = MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B_inline(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0183;
		}
	}
	{
		// InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		RuntimeObject* L_61 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_62 = L_61;
		G_B15_0 = L_62;
		if (L_62)
		{
			G_B16_0 = L_62;
			goto IL_0143;
		}
	}
	{
		goto IL_0161;
	}

IL_0143:
	{
		RuntimeObject* L_63 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_64 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_65 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_69 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_68, /*hidden argument*/NULL);
		NullCheck(G_B16_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B16_0, L_63, L_64, L_69);
	}

IL_0161:
	{
		// SelectDownStartTime = Time.time;
		float L_70 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_SelectDownStartTime_32(L_70);
		// cumulativeDelta = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_71);
		// TryStartManipulation();
		SimulatedGestureHand_TryStartManipulation_m0B58E7807CC8E31CE5F4817A99CC358085866A3E(__this, /*hidden argument*/NULL);
		// }
		goto IL_022d;
	}

IL_0183:
	{
		// InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, Interactions[i].MixedRealityInputAction);
		RuntimeObject* L_72 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_73 = L_72;
		G_B19_0 = L_73;
		if (L_73)
		{
			G_B20_0 = L_73;
			goto IL_018f;
		}
	}
	{
		goto IL_01ad;
	}

IL_018f:
	{
		RuntimeObject* L_74 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_75 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_76 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_77 = V_2;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_80 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline(L_79, /*hidden argument*/NULL);
		NullCheck(G_B20_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B20_0, L_74, L_75, L_80);
	}

IL_01ad:
	{
		// TryCompleteHold();
		SimulatedGestureHand_TryCompleteHold_mA3B5BAB738C6425798C608310D7D59D6B6FCA1AC(__this, /*hidden argument*/NULL);
		// TryCompleteManipulation();
		SimulatedGestureHand_TryCompleteManipulation_m7DD88EA40E108EB197BF22BD11460BF7A3DFBB18(__this, /*hidden argument*/NULL);
		// TryCompleteNavigation();
		SimulatedGestureHand_TryCompleteNavigation_m725C944777267419341F15E256472663CBCE6AC8(__this, /*hidden argument*/NULL);
		// }
		goto IL_022d;
	}

IL_01c4:
	{
		// else if (Interactions[i].BoolData)
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_81 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		int32_t L_82 = V_2;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		bool L_85 = MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B_inline(L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_022d;
		}
	}
	{
		// if (manipulationInProgress)
		bool L_86 = __this->get_manipulationInProgress_34();
		if (!L_86)
		{
			goto IL_01e1;
		}
	}
	{
		// UpdateManipulation();
		SimulatedGestureHand_UpdateManipulation_m7D7C54E9B0364BA9862D4326D9606FB6419CCBC3(__this, /*hidden argument*/NULL);
	}

IL_01e1:
	{
		// if (navigationInProgress)
		bool L_87 = __this->get_navigationInProgress_35();
		if (!L_87)
		{
			goto IL_01ef;
		}
	}
	{
		// UpdateNavigation();
		SimulatedGestureHand_UpdateNavigation_mD504939EDF859CD568D6127F467D193ADF3ADFC0(__this, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		// if (cumulativeDelta.magnitude > navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_88 = __this->get_address_of_cumulativeDelta_38();
		float L_89 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_88, /*hidden argument*/NULL);
		float L_90 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_89) > ((float)L_90))))
		{
			goto IL_0212;
		}
	}
	{
		// TryCancelHold();
		SimulatedGestureHand_TryCancelHold_m1F67089B7A138E396206FE8E7E0DAEECCE14BFBC(__this, /*hidden argument*/NULL);
		// TryStartNavigation();
		SimulatedGestureHand_TryStartNavigation_m2F5F675D13ACB7225B7672755846459058BDF575(__this, /*hidden argument*/NULL);
		// }
		goto IL_022d;
	}

IL_0212:
	{
		// else if (Time.time >= SelectDownStartTime + holdStartDuration)
		float L_91 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_92 = __this->get_SelectDownStartTime_32();
		float L_93 = __this->get_holdStartDuration_30();
		if ((!(((float)L_91) >= ((float)((float)il2cpp_codegen_add((float)L_92, (float)L_93))))))
		{
			goto IL_022d;
		}
	}
	{
		// TryStartHold();
		SimulatedGestureHand_TryStartHold_m72CBFF5CAEDDC55C9E865745A5DE4C34C1B2E234(__this, /*hidden argument*/NULL);
	}

IL_022d:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_94 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0231:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_95 = V_2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_96 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_97 = L_96;
		G_B33_0 = L_97;
		G_B33_1 = L_95;
		if (L_97)
		{
			G_B34_0 = L_97;
			G_B34_1 = L_95;
			goto IL_0248;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_98 = V_5;
		G_B35_0 = L_98;
		G_B35_1 = G_B33_1;
		goto IL_024f;
	}

IL_0248:
	{
		NullCheck(G_B34_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_99;
		memset((&L_99), 0, sizeof(L_99));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_99), (((int32_t)((int32_t)(((RuntimeArray*)G_B34_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B35_0 = L_99;
		G_B35_1 = G_B34_1;
	}

IL_024f:
	{
		V_4 = G_B35_0;
		int32_t L_100 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_101 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B35_1) < ((int32_t)L_100))? 1 : 0)&(int32_t)L_101)))
		{
			goto IL_0089;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m72CBFF5CAEDDC55C9E865745A5DE4C34C1B2E234 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartHold_m72CBFF5CAEDDC55C9E865745A5DE4C34C1B2E234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// InputSystem?.RaiseGestureStarted(this, holdAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_holdAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// holdInProgress = true;
		__this->set_holdInProgress_33((bool)1);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_mA3B5BAB738C6425798C608310D7D59D6B6FCA1AC (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteHold_mA3B5BAB738C6425798C608310D7D59D6B6FCA1AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// InputSystem?.RaiseGestureCompleted(this, holdAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_holdAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// holdInProgress = false;
		__this->set_holdInProgress_33((bool)0);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_m1F67089B7A138E396206FE8E7E0DAEECCE14BFBC (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelHold_m1F67089B7A138E396206FE8E7E0DAEECCE14BFBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (holdInProgress)
		bool L_0 = __this->get_holdInProgress_33();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// InputSystem?.RaiseGestureCanceled(this, holdAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_holdAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// holdInProgress = false;
		__this->set_holdInProgress_33((bool)0);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m0B58E7807CC8E31CE5F4817A99CC358085866A3E (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartManipulation_m0B58E7807CC8E31CE5F4817A99CC358085866A3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// InputSystem?.RaiseGestureStarted(this, manipulationAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_manipulationAction_28();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// manipulationInProgress = true;
		__this->set_manipulationInProgress_34((bool)1);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_m7D7C54E9B0364BA9862D4326D9606FB6419CCBC3 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateManipulation_m7D7C54E9B0364BA9862D4326D9606FB6419CCBC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// InputSystem?.RaiseGestureUpdated(this, manipulationAction, cumulativeDelta);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_manipulationAction_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_m7DD88EA40E108EB197BF22BD11460BF7A3DFBB18 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteManipulation_m7DD88EA40E108EB197BF22BD11460BF7A3DFBB18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// InputSystem?.RaiseGestureCompleted(this, manipulationAction, cumulativeDelta);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0026;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_manipulationAction_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0026:
	{
		// manipulationInProgress = false;
		__this->set_manipulationInProgress_34((bool)0);
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelManipulation_m774C717F6300ED032BD87747966E2EBFBE9F3159 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelManipulation_m774C717F6300ED032BD87747966E2EBFBE9F3159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (manipulationInProgress)
		bool L_0 = __this->get_manipulationInProgress_34();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// InputSystem?.RaiseGestureCanceled(this, manipulationAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_manipulationAction_28();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// manipulationInProgress = false;
		__this->set_manipulationInProgress_34((bool)0);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_m2F5F675D13ACB7225B7672755846459058BDF575 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartNavigation_m2F5F675D13ACB7225B7672755846459058BDF575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (!navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		// InputSystem?.RaiseGestureStarted(this, navigationAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_navigationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// navigationInProgress = true;
		__this->set_navigationInProgress_35((bool)1);
		// currentRailsUsed = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_4);
		// UpdateNavigationRails();
		SimulatedGestureHand_UpdateNavigationRails_mDA8C27C354D28CD6BC7E7EB7E4A84A560D1B08A6(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_003a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_mD504939EDF859CD568D6127F467D193ADF3ADFC0 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigation_mD504939EDF859CD568D6127F467D193ADF3ADFC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// UpdateNavigationRails();
		SimulatedGestureHand_UpdateNavigationRails_mDA8C27C354D28CD6BC7E7EB7E4A84A560D1B08A6(__this, /*hidden argument*/NULL);
		// InputSystem?.RaiseGestureUpdated(this, navigationAction, navigationDelta);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_navigationAction_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SimulatedGestureHand_get_navigationDelta_m0FD22233CFFA608F80B80E740D01DA6F8E22582A(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m725C944777267419341F15E256472663CBCE6AC8 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteNavigation_m725C944777267419341F15E256472663CBCE6AC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// InputSystem?.RaiseGestureCompleted(this, navigationAction, navigationDelta);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0026;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_navigationAction_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SimulatedGestureHand_get_navigationDelta_m0FD22233CFFA608F80B80E740D01DA6F8E22582A(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3, L_4);
	}

IL_0026:
	{
		// navigationInProgress = false;
		__this->set_navigationInProgress_35((bool)0);
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelNavigation_m7F78258B782D49B12470728A9F18ECFE2C0138A5 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelNavigation_m7F78258B782D49B12470728A9F18ECFE2C0138A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (navigationInProgress)
		bool L_0 = __this->get_navigationInProgress_35();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// InputSystem?.RaiseGestureCanceled(this, navigationAction);
		RuntimeObject* L_1 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_3 = __this->get_navigationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0, __this, L_3);
	}

IL_0020:
	{
		// navigationInProgress = false;
		__this->set_navigationInProgress_35((bool)0);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_mDA8C27C354D28CD6BC7E7EB7E4A84A560D1B08A6 (SimulatedGestureHand_t9A6617D8B7C1E31347E9B134A1D67AE017661EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigationRails_mDA8C27C354D28CD6BC7E7EB7E4A84A560D1B08A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useRailsNavigation && currentRailsUsed == Vector3.one)
		bool L_0 = __this->get_useRailsNavigation_29();
		if (!L_0)
		{
			goto IL_00b8;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_currentRailsUsed_36();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		bool L_3 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b8;
		}
	}
	{
		// if (Mathf.Abs(cumulativeDelta.x) >= navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_cumulativeDelta_38();
		float L_5 = L_4->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = fabsf(L_5);
		float L_7 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_0053;
		}
	}
	{
		// currentRailsUsed = new Vector3(1, 0, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_8);
		// }
		return;
	}

IL_0053:
	{
		// else if (Mathf.Abs(cumulativeDelta.y) > navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = __this->get_address_of_cumulativeDelta_38();
		float L_10 = L_9->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = fabsf(L_10);
		float L_12 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0086;
		}
	}
	{
		// currentRailsUsed = new Vector3(0, 1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_13);
		// }
		return;
	}

IL_0086:
	{
		// else if (Mathf.Abs(cumulativeDelta.z) > navigationStartThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_14 = __this->get_address_of_cumulativeDelta_38();
		float L_15 = L_14->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_16 = fabsf(L_15);
		float L_17 = __this->get_navigationStartThreshold_31();
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00b8;
		}
	}
	{
		// currentRailsUsed = new Vector3(0, 0, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_18);
	}

IL_00b8:
	{
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand__ctor_m93808D1348F3FB6FA63A335E89F47FB5345EE1C4 (SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__ctor_m93808D1348F3FB6FA63A335E89F47FB5345EE1C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Dictionary<TrackedHandJoint, MixedRealityPose> jointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_0 = (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *)il2cpp_codegen_object_new(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E(L_0, /*hidden argument*/Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E_RuntimeMethod_var);
		__this->set_jointPoses_24(L_0);
		// : base(trackingState, controllerHandedness, inputSource, interactions)
		int32_t L_1 = ___trackingState0;
		uint8_t L_2 = ___controllerHandedness1;
		RuntimeObject* L_3 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_4 = ___interactions3;
		BaseHand__ctor_mD486A5087D9CF2CC6B1048F37EEAD182843CB503(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHand_TryGetJoint_m14B9D4449933B89DB099541E2901B4017D613B64 (SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E * __this, int32_t ___joint0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_TryGetJoint_m14B9D4449933B89DB099541E2901B4017D613B64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return jointPoses.TryGetValue(joint, out pose);
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_0 = __this->get_jointPoses_24();
		int32_t L_1 = ___joint0;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D(L_0, L_1, (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateState(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand_UpdateState_m76167DB74444C36B375258174DBB71C74806C7E7 (SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E * __this, SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_UpdateState_m76167DB74444C36B375258174DBB71C74806C7E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// for (int i = 0; i < jointCount; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_0004:
	{
		// TrackedHandJoint handJoint = (TrackedHandJoint)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// if (!jointPoses.ContainsKey(handJoint))
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_1 = __this->get_jointPoses_24();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m9123BEB1C67E91B9D1C87834EED0E4805EAB9389(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m9123BEB1C67E91B9D1C87834EED0E4805EAB9389_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// jointPoses.Add(handJoint, handData.Joints[i]);
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_4 = __this->get_jointPoses_24();
		int32_t L_5 = V_1;
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_6 = ___handData0;
		NullCheck(L_6);
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_7 = SimulatedHandData_get_Joints_m0137F96239589766E8132147EBBC5D1C24516B7C_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		Dictionary_2_Add_mF5D352A2DB17E5E4545D622A66744A4697ACC3D2(L_4, L_5, L_10, /*hidden argument*/Dictionary_2_Add_mF5D352A2DB17E5E4545D622A66744A4697ACC3D2_RuntimeMethod_var);
		// }
		goto IL_0046;
	}

IL_002e:
	{
		// jointPoses[handJoint] = handData.Joints[i];
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_11 = __this->get_jointPoses_24();
		int32_t L_12 = V_1;
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_13 = ___handData0;
		NullCheck(L_13);
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_14 = SimulatedHandData_get_Joints_m0137F96239589766E8132147EBBC5D1C24516B7C_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B(L_11, L_12, L_17, /*hidden argument*/Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B_RuntimeMethod_var);
	}

IL_0046:
	{
		// for (int i = 0; i < jointCount; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < jointCount; i++)
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_il2cpp_TypeInfo_var);
		int32_t L_20 = ((SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_il2cpp_TypeInfo_var))->get_jointCount_23();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// InputSystem?.RaiseHandJointsUpdated(InputSource, ControllerHandedness, jointPoses);
		RuntimeObject* L_21 = BaseController_get_InputSystem_m49950F99CD27E15F1CA252ECFE568C8945145365(__this, /*hidden argument*/NULL);
		RuntimeObject* L_22 = L_21;
		G_B7_0 = L_22;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_005e;
		}
	}
	{
		goto IL_0075;
	}

IL_005e:
	{
		RuntimeObject* L_23 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_24 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_25 = __this->get_jointPoses_24();
		NullCheck(G_B8_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B8_0, L_23, L_24, L_25);
	}

IL_0075:
	{
		// UpdateVelocity();
		BaseHand_UpdateVelocity_m2E2A6FE7655DBBE7E1BEBD9DAD7936B28DCEE484(__this, /*hidden argument*/NULL);
		// UpdateInteractions(handData);
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_26 = ___handData0;
		VirtActionInvoker1< SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData) */, __this, L_26);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHand__cctor_mD1BA38A6EB0C974530FDAEA1E4A70CE9C16F7B5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__cctor_mD1BA38A6EB0C974530FDAEA1E4A70CE9C16F7B5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_tFBAB6AD39E9B16E093E63E4D2A88EA5E3415437E_il2cpp_TypeInfo_var))->set_jointCount_23((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// System.Int64 Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SimulatedHandData_get_Timestamp_m6735904FDF143E193E90311EA6D49C450BB6C194 (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	{
		// public long Timestamp => timestamp;
		int64_t L_0 = __this->get_timestamp_1();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsTracked_m44B1246872F6BE0B0A308EB2CC5259B6DFCF7FBF (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsTracked => isTracked;
		bool L_0 = __this->get_isTracked_2();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* SimulatedHandData_get_Joints_m0137F96239589766E8132147EBBC5D1C24516B7C (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose[] Joints => joints;
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_0 = __this->get_joints_3();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mB7C40888399E88C93E755FE89D50234CF5F5C981 (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching => isPinching;
		bool L_0 = __this->get_isPinching_4();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimulatedHandData_get_InputSystem_m74B585679CB887A0A5722F761D09C8AC21A5E799 (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData_get_InputSystem_m74B585679CB887A0A5722F761D09C8AC21A5E799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputSystem == null)
		RuntimeObject* L_0 = __this->get_inputSystem_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// MixedRealityServiceRegistry.TryGetService<IMixedRealityInputSystem>(out inputSystem);
		RuntimeObject** L_1 = __this->get_address_of_inputSystem_5();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityServiceRegistry_t32DA3C08833DAE82817D72D1EE88363D3064D911_il2cpp_TypeInfo_var);
		MixedRealityServiceRegistry_TryGetService_TisIMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_m11EAC52C13EC4EEBB2BC67A0F3F775159F619EAD((RuntimeObject**)L_1, (String_t*)NULL, /*hidden argument*/MixedRealityServiceRegistry_TryGetService_TisIMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_m11EAC52C13EC4EEBB2BC67A0F3F775159F619EAD_RuntimeMethod_var);
	}

IL_0015:
	{
		// return inputSystem;
		RuntimeObject* L_2 = __this->get_inputSystem_5();
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Copy(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandData_Copy_m41ABA1DF6D6E58F82E3DF8D876F210F2D75BCC52 (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData_Copy_m41ABA1DF6D6E58F82E3DF8D876F210F2D75BCC52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// timestamp = other.timestamp;
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_0 = ___other0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_timestamp_1();
		__this->set_timestamp_1(L_1);
		// isTracked = other.isTracked;
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = L_2->get_isTracked_2();
		__this->set_isTracked_2(L_3);
		// isPinching = other.isPinching;
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_4 = ___other0;
		NullCheck(L_4);
		bool L_5 = L_4->get_isPinching_4();
		__this->set_isPinching_4(L_5);
		// for (int i = 0; i < jointCount; ++i)
		V_0 = 0;
		goto IL_0044;
	}

IL_0028:
	{
		// joints[i] = other.joints[i];
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_6 = __this->get_joints_3();
		int32_t L_7 = V_0;
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_8 = ___other0;
		NullCheck(L_8);
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_9 = L_8->get_joints_3();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 )L_12);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0044:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_il2cpp_TypeInfo_var);
		int32_t L_15 = ((SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_il2cpp_TypeInfo_var))->get_jointCount_0();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Update(System.Boolean,System.Boolean,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_Update_m8F8FA53BE78C0B1B1B5AEDD04E81EE37283C2048 (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, bool ___isTrackedNew0, bool ___isPinchingNew1, HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * ___generator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData_Update_m8F8FA53BE78C0B1B1B5AEDD04E81EE37283C2048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return UpdateWithTimestamp(DateTime.UtcNow.Ticks, isTrackedNew, isPinchingNew, generator);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_0 = L_0;
		int64_t L_1 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		bool L_2 = ___isTrackedNew0;
		bool L_3 = ___isPinchingNew1;
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_4 = ___generator2;
		bool L_5 = SimulatedHandData_UpdateWithTimestamp_mFF3E503F08373285FE5EB42270638D275764FB3A(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::UpdateWithTimestamp(System.Int64,System.Boolean,System.Boolean,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandData_UpdateWithTimestamp_mFF3E503F08373285FE5EB42270638D275764FB3A (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, int64_t ___timestampNew0, bool ___isTrackedNew1, bool ___isPinchingNew2, HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * ___generator3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool handDataChanged = false;
		V_0 = (bool)0;
		// if (isTracked != isTrackedNew || isPinching != isPinchingNew)
		bool L_0 = __this->get_isTracked_2();
		bool L_1 = ___isTrackedNew1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = __this->get_isPinching_4();
		bool L_3 = ___isPinchingNew2;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		// isTracked = isTrackedNew;
		bool L_4 = ___isTrackedNew1;
		__this->set_isTracked_2(L_4);
		// isPinching = isPinchingNew;
		bool L_5 = ___isPinchingNew2;
		__this->set_isPinching_4(L_5);
		// handDataChanged = true;
		V_0 = (bool)1;
	}

IL_0024:
	{
		// if (timestamp != timestampNew)
		int64_t L_6 = __this->get_timestamp_1();
		int64_t L_7 = ___timestampNew0;
		if ((((int64_t)L_6) == ((int64_t)L_7)))
		{
			goto IL_004b;
		}
	}
	{
		// timestamp = timestampNew;
		int64_t L_8 = ___timestampNew0;
		__this->set_timestamp_1(L_8);
		// if (isTracked)
		bool L_9 = __this->get_isTracked_2();
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// generator(Joints);
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_10 = ___generator3;
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_11 = SimulatedHandData_get_Joints_m0137F96239589766E8132147EBBC5D1C24516B7C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		HandJointDataGenerator_Invoke_m453D8F003A5B2375922D4E902074628FA4AAB4F2(L_10, L_11, /*hidden argument*/NULL);
		// handDataChanged = true;
		V_0 = (bool)1;
	}

IL_004b:
	{
		// return handDataChanged;
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandData__ctor_mC0F48E57A15AA83EB147D0682EAFD4B9A13A74E3 (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__ctor_mC0F48E57A15AA83EB147D0682EAFD4B9A13A74E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityPose[] joints = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_il2cpp_TypeInfo_var))->get_jointCount_0();
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_1 = (MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*)(MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*)SZArrayNew(MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_joints_3(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandData__cctor_m9FF93A339C2E4BD70FD2048183E316BDEFD82849 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__cctor_m9FF93A339C2E4BD70FD2048183E316BDEFD82849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___jointPoses0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___jointPoses0' to native representation
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ____jointPoses0_marshaled = NULL;
	if (___jointPoses0 != NULL)
	{
		____jointPoses0_marshaled = reinterpret_cast<MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *>((___jointPoses0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____jointPoses0_marshaled);

}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator__ctor_mB815FE73EC4C1E2EA223BA3380BC7817ACED0EB0 (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_m453D8F003A5B2375922D4E902074628FA4AAB4F2 (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___jointPoses0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jointPoses0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___jointPoses0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jointPoses0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jointPoses0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* >::Invoke(targetMethod, targetThis, ___jointPoses0);
					else
						GenericVirtActionInvoker1< MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* >::Invoke(targetMethod, targetThis, ___jointPoses0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jointPoses0);
					else
						VirtActionInvoker1< MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jointPoses0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::BeginInvoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandJointDataGenerator_BeginInvoke_mA4657EBE145331D04C470650EAF342F7C67A646F (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___jointPoses0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jointPoses0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointDataGenerator_EndInvoke_m47C19E7BD246FFCEDFC1D4E6903DB18FAF1002F5 (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandDataProvider__ctor_m5BDEF9D66F97A11A0B6CA2ADB5322B3DC9845BD9 (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * ____profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandDataProvider__ctor_m5BDEF9D66F97A11A0B6CA2ADB5322B3DC9845BD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SimulatedHandDataProvider(MixedRealityInputSimulationProfile _profile)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// profile = _profile;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_0 = ____profile0;
		__this->set_profile_1(L_0);
		// HandStateLeft = new SimulatedHandState(Handedness.Left);
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_1 = (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 *)il2cpp_codegen_object_new(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911_il2cpp_TypeInfo_var);
		SimulatedHandState__ctor_m349E18510C30BD47FC7E10C4991BE2C34D676433(L_1, 1, /*hidden argument*/NULL);
		__this->set_HandStateLeft_4(L_1);
		// HandStateRight = new SimulatedHandState(Handedness.Right);
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_2 = (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 *)il2cpp_codegen_object_new(SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911_il2cpp_TypeInfo_var);
		SimulatedHandState__ctor_m349E18510C30BD47FC7E10C4991BE2C34D676433(L_2, 2, /*hidden argument*/NULL);
		__this->set_HandStateRight_5(L_2);
		// HandStateLeft.Gesture = profile.DefaultHandGesture;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_3 = __this->get_HandStateLeft_4();
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_4 = __this->get_profile_1();
		NullCheck(L_4);
		int32_t L_5 = MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		SimulatedHandState_set_Gesture_mC8DFF4D3309753AE88FB273F3C55CFBE8C7C1882(L_3, L_5, /*hidden argument*/NULL);
		// HandStateRight.Gesture = profile.DefaultHandGesture;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_6 = __this->get_HandStateRight_5();
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_7 = __this->get_profile_1();
		NullCheck(L_7);
		int32_t L_8 = MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		SimulatedHandState_set_Gesture_mC8DFF4D3309753AE88FB273F3C55CFBE8C7C1882(L_6, L_8, /*hidden argument*/NULL);
		// HandStateLeft.Reset();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_9 = __this->get_HandStateLeft_4();
		NullCheck(L_9);
		SimulatedHandState_Reset_m591616FB0D9CCE8F96F2DD72CAFBC745E6DCAB36(L_9, /*hidden argument*/NULL);
		// HandStateRight.Reset();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_10 = __this->get_HandStateRight_5();
		NullCheck(L_10);
		SimulatedHandState_Reset_m591616FB0D9CCE8F96F2DD72CAFBC745E6DCAB36(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::UpdateHandData(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandDataProvider_UpdateHandData_mFF99D6415C49372571D42CE5F17ED9C6D90C539D (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * ___handDataLeft0, SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * ___handDataRight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandDataProvider_UpdateHandData_mFF99D6415C49372571D42CE5F17ED9C6D90C539D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// SimulateUserInput();
		SimulatedHandDataProvider_SimulateUserInput_m003E4A8FDD0889C01947CB4851803D1BF049404B(__this, /*hidden argument*/NULL);
		// bool handDataChanged = false;
		// long timestamp = DateTime.UtcNow.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_1 = L_0;
		int64_t L_1 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (generatorLeft == null)
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_2 = __this->get_generatorLeft_11();
		G_B1_0 = 0;
		if (L_2)
		{
			G_B2_0 = 0;
			goto IL_0034;
		}
	}
	{
		// generatorLeft = HandStateLeft.FillCurrentFrame;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_3 = __this->get_HandStateLeft_4();
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_4 = (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 *)il2cpp_codegen_object_new(HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955_il2cpp_TypeInfo_var);
		HandJointDataGenerator__ctor_mB815FE73EC4C1E2EA223BA3380BC7817ACED0EB0(L_4, L_3, (intptr_t)((intptr_t)SimulatedHandState_FillCurrentFrame_mAC7F8FC883C1A03381FAC69F7483883413845C5C_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_generatorLeft_11(L_4);
		G_B2_0 = G_B1_0;
	}

IL_0034:
	{
		// if (generatorRight == null)
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_5 = __this->get_generatorRight_12();
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0053;
		}
	}
	{
		// generatorRight = HandStateRight.FillCurrentFrame;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_6 = __this->get_HandStateRight_5();
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_7 = (HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 *)il2cpp_codegen_object_new(HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955_il2cpp_TypeInfo_var);
		HandJointDataGenerator__ctor_mB815FE73EC4C1E2EA223BA3380BC7817ACED0EB0(L_7, L_6, (intptr_t)((intptr_t)SimulatedHandState_FillCurrentFrame_mAC7F8FC883C1A03381FAC69F7483883413845C5C_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_generatorRight_12(L_7);
		G_B4_0 = G_B3_0;
	}

IL_0053:
	{
		// handDataChanged |= handDataLeft.UpdateWithTimestamp(timestamp, HandStateLeft.IsTracked, HandStateLeft.IsPinching, generatorLeft);
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_8 = ___handDataLeft0;
		int64_t L_9 = V_0;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_10 = __this->get_HandStateLeft_4();
		NullCheck(L_10);
		bool L_11 = L_10->get_IsTracked_1();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_12 = __this->get_HandStateLeft_4();
		NullCheck(L_12);
		bool L_13 = SimulatedHandState_get_IsPinching_m3342EF2FCE4F7A48DA2EFB9F7EBBC8AAFCC3B7DE_inline(L_12, /*hidden argument*/NULL);
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_14 = __this->get_generatorLeft_11();
		NullCheck(L_8);
		bool L_15 = SimulatedHandData_UpdateWithTimestamp_mFF3E503F08373285FE5EB42270638D275764FB3A(L_8, L_9, L_11, L_13, L_14, /*hidden argument*/NULL);
		// handDataChanged |= handDataRight.UpdateWithTimestamp(timestamp, HandStateRight.IsTracked, HandStateRight.IsPinching, generatorRight);
		SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * L_16 = ___handDataRight1;
		int64_t L_17 = V_0;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_18 = __this->get_HandStateRight_5();
		NullCheck(L_18);
		bool L_19 = L_18->get_IsTracked_1();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_20 = __this->get_HandStateRight_5();
		NullCheck(L_20);
		bool L_21 = SimulatedHandState_get_IsPinching_m3342EF2FCE4F7A48DA2EFB9F7EBBC8AAFCC3B7DE_inline(L_20, /*hidden argument*/NULL);
		HandJointDataGenerator_t70BF622884D5C475C85D34FDE76FD298FAC37955 * L_22 = __this->get_generatorRight_12();
		NullCheck(L_16);
		bool L_23 = SimulatedHandData_UpdateWithTimestamp_mFF3E503F08373285FE5EB42270638D275764FB3A(L_16, L_17, L_19, L_21, L_22, /*hidden argument*/NULL);
		// return handDataChanged;
		return (bool)((int32_t)((int32_t)((int32_t)((int32_t)G_B4_0|(int32_t)L_15))|(int32_t)L_23));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::SimulateUserInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandDataProvider_SimulateUserInput_m003E4A8FDD0889C01947CB4851803D1BF049404B (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandDataProvider_SimulateUserInput_m003E4A8FDD0889C01947CB4851803D1BF049404B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	{
		// if (UnityEngine.Input.GetKeyDown(profile.ToggleLeftHandKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_0 = __this->get_profile_1();
		NullCheck(L_0);
		int32_t L_1 = MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_m0938B5767F57F921502537FDEEAD30DFCA852EA0_inline(L_0, /*hidden argument*/NULL);
		bool L_2 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// IsAlwaysVisibleLeft = !IsAlwaysVisibleLeft;
		bool L_3 = __this->get_IsAlwaysVisibleLeft_2();
		__this->set_IsAlwaysVisibleLeft_2((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_0021:
	{
		// if (UnityEngine.Input.GetKeyDown(profile.ToggleRightHandKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_4 = __this->get_profile_1();
		NullCheck(L_4);
		int32_t L_5 = MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m6800CE9022A5B139B2435C14B93598A383FA17E2_inline(L_4, /*hidden argument*/NULL);
		bool L_6 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// IsAlwaysVisibleRight = !IsAlwaysVisibleRight;
		bool L_7 = __this->get_IsAlwaysVisibleRight_3();
		__this->set_IsAlwaysVisibleRight_3((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
	}

IL_0042:
	{
		// if (!Application.isFocused)
		bool L_8 = Application_get_isFocused_m08C840F4CF5666877D9623C918106047D4FE3302(/*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		// isSimulatingLeft = false;
		__this->set_isSimulatingLeft_6((bool)0);
		// isSimulatingRight = false;
		__this->set_isSimulatingRight_7((bool)0);
		// }
		goto IL_00bd;
	}

IL_0059:
	{
		// if (UnityEngine.Input.GetKeyDown(profile.LeftHandManipulationKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_9 = __this->get_profile_1();
		NullCheck(L_9);
		int32_t L_10 = MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_m5CF930DD138B33A6C88308A93ABF1FD23C8E95EB_inline(L_9, /*hidden argument*/NULL);
		bool L_11 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// isSimulatingLeft = true;
		__this->set_isSimulatingLeft_6((bool)1);
	}

IL_0072:
	{
		// if (UnityEngine.Input.GetKeyUp(profile.LeftHandManipulationKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_12 = __this->get_profile_1();
		NullCheck(L_12);
		int32_t L_13 = MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_m5CF930DD138B33A6C88308A93ABF1FD23C8E95EB_inline(L_12, /*hidden argument*/NULL);
		bool L_14 = Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		// isSimulatingLeft = false;
		__this->set_isSimulatingLeft_6((bool)0);
	}

IL_008b:
	{
		// if (UnityEngine.Input.GetKeyDown(profile.RightHandManipulationKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_15 = __this->get_profile_1();
		NullCheck(L_15);
		int32_t L_16 = MixedRealityInputSimulationProfile_get_RightHandManipulationKey_mA429EA7F531EC9F910DB0EFF6E7A36E27AB58424_inline(L_15, /*hidden argument*/NULL);
		bool L_17 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a4;
		}
	}
	{
		// isSimulatingRight = true;
		__this->set_isSimulatingRight_7((bool)1);
	}

IL_00a4:
	{
		// if (UnityEngine.Input.GetKeyUp(profile.RightHandManipulationKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_18 = __this->get_profile_1();
		NullCheck(L_18);
		int32_t L_19 = MixedRealityInputSimulationProfile_get_RightHandManipulationKey_mA429EA7F531EC9F910DB0EFF6E7A36E27AB58424_inline(L_18, /*hidden argument*/NULL);
		bool L_20 = Input_GetKeyUp_m5345ECFA25B7AC99D6D4223DA23BB9FB991B7193(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00bd;
		}
	}
	{
		// isSimulatingRight = false;
		__this->set_isSimulatingRight_7((bool)0);
	}

IL_00bd:
	{
		// Vector3 mouseDelta = (lastMousePosition.HasValue ? UnityEngine.Input.mousePosition - lastMousePosition.Value : Vector3.zero);
		Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * L_21 = __this->get_address_of_lastMousePosition_8();
		bool L_22 = Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_inline((Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 *)L_21, /*hidden argument*/Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B17_0 = L_23;
		goto IL_00e6;
	}

IL_00d1:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * L_25 = __this->get_address_of_lastMousePosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Nullable_1_get_Value_m59310BC9FCEE79F371FF375D192DCCF0E27BDCB9((Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 *)L_25, /*hidden argument*/Nullable_1_get_Value_m59310BC9FCEE79F371FF375D192DCCF0E27BDCB9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_24, L_26, /*hidden argument*/NULL);
		G_B17_0 = L_27;
	}

IL_00e6:
	{
		V_0 = G_B17_0;
		// mouseDelta.z += UnityEngine.Input.GetAxis("Mouse ScrollWheel") * profile.HandDepthMultiplier;
		float* L_28 = (&V_0)->get_address_of_z_4();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31, /*hidden argument*/NULL);
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_32 = __this->get_profile_1();
		NullCheck(L_32);
		float L_33 = MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m6604B44E146EA94CBD6109337F0190E999766DA8_inline(L_32, /*hidden argument*/NULL);
		*((float*)L_29) = (float)((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_33))));
		// float rotationDelta = profile.HandRotationSpeed * Time.deltaTime;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_34 = __this->get_profile_1();
		NullCheck(L_34);
		float L_35 = MixedRealityInputSimulationProfile_get_HandRotationSpeed_m536913F900351CB840F04EEF9B71F97848A9EAC6_inline(L_34, /*hidden argument*/NULL);
		float L_36 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36));
		// Vector3 rotationDeltaEulerAngles = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_2 = L_37;
		// if (UnityEngine.Input.GetKey(profile.YawHandCCWKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_38 = __this->get_profile_1();
		NullCheck(L_38);
		int32_t L_39 = MixedRealityInputSimulationProfile_get_YawHandCCWKey_mEAB61DF36DB74C3D75B4A74327E3DBAFC005C1F7_inline(L_38, /*hidden argument*/NULL);
		bool L_40 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_013b;
		}
	}
	{
		// rotationDeltaEulerAngles.y = -rotationDelta;
		float L_41 = V_1;
		(&V_2)->set_y_3(((-L_41)));
	}

IL_013b:
	{
		// if (UnityEngine.Input.GetKey(profile.YawHandCWKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_42 = __this->get_profile_1();
		NullCheck(L_42);
		int32_t L_43 = MixedRealityInputSimulationProfile_get_YawHandCWKey_m8D25D317DD2ADDDA33255C9F7E993E854CE32578_inline(L_42, /*hidden argument*/NULL);
		bool L_44 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0155;
		}
	}
	{
		// rotationDeltaEulerAngles.y = rotationDelta;
		float L_45 = V_1;
		(&V_2)->set_y_3(L_45);
	}

IL_0155:
	{
		// if (UnityEngine.Input.GetKey(profile.PitchHandCCWKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_46 = __this->get_profile_1();
		NullCheck(L_46);
		int32_t L_47 = MixedRealityInputSimulationProfile_get_PitchHandCCWKey_mF31570A5CFFE2C565A701FF6318F8397DBAB689C_inline(L_46, /*hidden argument*/NULL);
		bool L_48 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_016f;
		}
	}
	{
		// rotationDeltaEulerAngles.x = rotationDelta;
		float L_49 = V_1;
		(&V_2)->set_x_2(L_49);
	}

IL_016f:
	{
		// if (UnityEngine.Input.GetKey(profile.PitchHandCWKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_50 = __this->get_profile_1();
		NullCheck(L_50);
		int32_t L_51 = MixedRealityInputSimulationProfile_get_PitchHandCWKey_m345C749AC96907F9EC2C9C2A67A9762CE9DA1FF0_inline(L_50, /*hidden argument*/NULL);
		bool L_52 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_018a;
		}
	}
	{
		// rotationDeltaEulerAngles.x = -rotationDelta;
		float L_53 = V_1;
		(&V_2)->set_x_2(((-L_53)));
	}

IL_018a:
	{
		// if (UnityEngine.Input.GetKey(profile.RollHandCCWKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_54 = __this->get_profile_1();
		NullCheck(L_54);
		int32_t L_55 = MixedRealityInputSimulationProfile_get_RollHandCCWKey_m1BE607B59E89E69C3ADBE1527F1C6309D9599D63_inline(L_54, /*hidden argument*/NULL);
		bool L_56 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01a4;
		}
	}
	{
		// rotationDeltaEulerAngles.z = rotationDelta;
		float L_57 = V_1;
		(&V_2)->set_z_4(L_57);
	}

IL_01a4:
	{
		// if (UnityEngine.Input.GetKey(profile.RollHandCWKey))
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_58 = __this->get_profile_1();
		NullCheck(L_58);
		int32_t L_59 = MixedRealityInputSimulationProfile_get_RollHandCWKey_mCD75EA7E80AB5D53517352CABF579A50663C7BF9_inline(L_58, /*hidden argument*/NULL);
		bool L_60 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01bf;
		}
	}
	{
		// rotationDeltaEulerAngles.z = -rotationDelta;
		float L_61 = V_1;
		(&V_2)->set_z_4(((-L_61)));
	}

IL_01bf:
	{
		// SimulateHandInput(ref lastSimulatedTimestampLeft, HandStateLeft, isSimulatingLeft, IsAlwaysVisibleLeft, mouseDelta, rotationDeltaEulerAngles);
		int64_t* L_62 = __this->get_address_of_lastSimulatedTimestampLeft_9();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_63 = __this->get_HandStateLeft_4();
		bool L_64 = __this->get_isSimulatingLeft_6();
		bool L_65 = __this->get_IsAlwaysVisibleLeft_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = V_2;
		SimulatedHandDataProvider_SimulateHandInput_mCC63E2A933A7A87E744034D157EFE773F852B134(__this, (int64_t*)L_62, L_63, L_64, L_65, L_66, L_67, /*hidden argument*/NULL);
		// SimulateHandInput(ref lastSimulatedTimestampRight, HandStateRight, isSimulatingRight, IsAlwaysVisibleRight, mouseDelta, rotationDeltaEulerAngles);
		int64_t* L_68 = __this->get_address_of_lastSimulatedTimestampRight_10();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_69 = __this->get_HandStateRight_5();
		bool L_70 = __this->get_isSimulatingRight_7();
		bool L_71 = __this->get_IsAlwaysVisibleRight_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = V_2;
		SimulatedHandDataProvider_SimulateHandInput_mCC63E2A933A7A87E744034D157EFE773F852B134(__this, (int64_t*)L_68, L_69, L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		// float gestureAnimDelta = profile.HandGestureAnimationSpeed * Time.deltaTime;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_74 = __this->get_profile_1();
		NullCheck(L_74);
		float L_75 = MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_m159042CFADEA1948914A6AD9D52193E9179B0AF5_inline(L_74, /*hidden argument*/NULL);
		float L_76 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_75, (float)L_76));
		// HandStateLeft.GestureBlending += gestureAnimDelta;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_77 = __this->get_HandStateLeft_4();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_78 = L_77;
		NullCheck(L_78);
		float L_79 = SimulatedHandState_get_GestureBlending_m61B1AE6EA0F82008B919350872861BB83D1AE6DE_inline(L_78, /*hidden argument*/NULL);
		float L_80 = V_3;
		NullCheck(L_78);
		SimulatedHandState_set_GestureBlending_mA9E930861977C6A7651CC2815A9F4C7335E2DB11(L_78, ((float)il2cpp_codegen_add((float)L_79, (float)L_80)), /*hidden argument*/NULL);
		// HandStateRight.GestureBlending += gestureAnimDelta;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_81 = __this->get_HandStateRight_5();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_82 = L_81;
		NullCheck(L_82);
		float L_83 = SimulatedHandState_get_GestureBlending_m61B1AE6EA0F82008B919350872861BB83D1AE6DE_inline(L_82, /*hidden argument*/NULL);
		float L_84 = V_3;
		NullCheck(L_82);
		SimulatedHandState_set_GestureBlending_mA9E930861977C6A7651CC2815A9F4C7335E2DB11(L_82, ((float)il2cpp_codegen_add((float)L_83, (float)L_84)), /*hidden argument*/NULL);
		// lastMousePosition = UnityEngine.Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Nullable_1__ctor_mEE25CE8D9D7805C77F0C30A71CCF7F2DE1540165((&L_86), L_85, /*hidden argument*/Nullable_1__ctor_mEE25CE8D9D7805C77F0C30A71CCF7F2DE1540165_RuntimeMethod_var);
		__this->set_lastMousePosition_8(L_86);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::SimulateHandInput(System.Int64&,Microsoft.MixedReality.Toolkit.Input.SimulatedHandState,System.Boolean,System.Boolean,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandDataProvider_SimulateHandInput_mCC63E2A933A7A87E744034D157EFE773F852B134 (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, int64_t* ___lastSimulatedTimestamp0, SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * ___state1, bool ___isSimulating2, bool ___isAlwaysVisible3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mouseDelta4, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rotationDeltaEulerAngles5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandDataProvider_SimulateHandInput_mCC63E2A933A7A87E744034D157EFE773F852B134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool enableTracking = isAlwaysVisible || isSimulating;
		bool L_0 = ___isAlwaysVisible3;
		bool L_1 = ___isSimulating2;
		V_0 = (bool)((int32_t)((int32_t)L_0|(int32_t)L_1));
		// if (!state.IsTracked && enableTracking)
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_2 = ___state1;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsTracked_1();
		bool L_4 = V_0;
		if (!((int32_t)((int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_003a;
		}
	}
	{
		// Vector3 mousePos = UnityEngine.Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		V_2 = L_5;
		// state.ScreenPosition = new Vector3(mousePos.x, mousePos.y, profile.DefaultHandDistance);
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_6 = ___state1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_2;
		float L_8 = L_7.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		float L_10 = L_9.get_y_3();
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_11 = __this->get_profile_1();
		NullCheck(L_11);
		float L_12 = MixedRealityInputSimulationProfile_get_DefaultHandDistance_m3D175B58CA9EBA30092EA2A68D01EA4B94489C4A_inline(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), L_8, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_ScreenPosition_3(L_13);
	}

IL_003a:
	{
		// if (isSimulating)
		bool L_14 = ___isSimulating2;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// state.SimulateInput(mouseDelta, profile.HandJitterAmount, rotationDeltaEulerAngles);
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_15 = ___state1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___mouseDelta4;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_17 = __this->get_profile_1();
		NullCheck(L_17);
		float L_18 = MixedRealityInputSimulationProfile_get_HandJitterAmount_mDDF19A0974AFB60C2E91D129017A3D0805143F60_inline(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___rotationDeltaEulerAngles5;
		NullCheck(L_15);
		SimulatedHandState_SimulateInput_m4FB2C3E0E8BEC699B55A62FA37BD12F8E018FB6C(L_15, L_16, L_18, L_19, /*hidden argument*/NULL);
		// if (isAlwaysVisible)
		bool L_20 = ___isAlwaysVisible3;
		if (!L_20)
		{
			goto IL_006a;
		}
	}
	{
		// state.Gesture = ToggleGesture(state.Gesture);
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_21 = ___state1;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_22 = ___state1;
		NullCheck(L_22);
		int32_t L_23 = SimulatedHandState_get_Gesture_mD92DD18C9290E8F89105E0539065E44CA74AFFFF_inline(L_22, /*hidden argument*/NULL);
		int32_t L_24 = SimulatedHandDataProvider_ToggleGesture_m9F8B8AE3A881E53C67ABC7B4B8187E45AEFDB0BD(__this, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		SimulatedHandState_set_Gesture_mC8DFF4D3309753AE88FB273F3C55CFBE8C7C1882(L_21, L_24, /*hidden argument*/NULL);
		// }
		goto IL_0076;
	}

IL_006a:
	{
		// state.Gesture = SelectGesture();
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_25 = ___state1;
		int32_t L_26 = SimulatedHandDataProvider_SelectGesture_m3EED0D8A0B38C138C8C872805E35ACC67F70F37F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		SimulatedHandState_set_Gesture_mC8DFF4D3309753AE88FB273F3C55CFBE8C7C1882(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// DateTime currentTime = DateTime.UtcNow;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_27 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_1 = L_27;
		// if (enableTracking)
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_0090;
		}
	}
	{
		// state.IsTracked = true;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_29 = ___state1;
		NullCheck(L_29);
		L_29->set_IsTracked_1((bool)1);
		// lastSimulatedTimestamp = currentTime.Ticks;
		int64_t* L_30 = ___lastSimulatedTimestamp0;
		int64_t L_31 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		*((int64_t*)L_30) = (int64_t)L_31;
		// }
		return;
	}

IL_0090:
	{
		// float timeSinceTracking = (float)currentTime.Subtract(new DateTime(lastSimulatedTimestamp)).TotalSeconds;
		int64_t* L_32 = ___lastSimulatedTimestamp0;
		int64_t L_33 = *((int64_t*)L_32);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_34;
		memset((&L_34), 0, sizeof(L_34));
		DateTime__ctor_m027A935E14EB81BCC0739BD56AE60CDE3387990C((&L_34), L_33, /*hidden argument*/NULL);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_35 = DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		double L_36 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_3), /*hidden argument*/NULL);
		// if (timeSinceTracking > profile.HandHideTimeout)
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_37 = __this->get_profile_1();
		NullCheck(L_37);
		float L_38 = MixedRealityInputSimulationProfile_get_HandHideTimeout_m68A2277521E6F5AB774F6C2B8C33308995704297_inline(L_37, /*hidden argument*/NULL);
		if ((!(((float)(((float)((float)L_36)))) > ((float)L_38))))
		{
			goto IL_00bb;
		}
	}
	{
		// state.IsTracked = false;
		SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * L_39 = ___state1;
		NullCheck(L_39);
		L_39->set_IsTracked_1((bool)0);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::SelectGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedHandDataProvider_SelectGesture_m3EED0D8A0B38C138C8C872805E35ACC67F70F37F (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, const RuntimeMethod* method)
{
	{
		// if (UnityEngine.Input.GetMouseButton(0) && profile.LeftMouseHandGesture != ArticulatedHandPose.GestureId.None)
		bool L_0 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_1 = __this->get_profile_1();
		NullCheck(L_1);
		int32_t L_2 = MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return profile.LeftMouseHandGesture;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_3 = __this->get_profile_1();
		NullCheck(L_3);
		int32_t L_4 = MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0021:
	{
		// else if (UnityEngine.Input.GetMouseButton(1) && profile.RightMouseHandGesture != ArticulatedHandPose.GestureId.None)
		bool L_5 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(1, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_6 = __this->get_profile_1();
		NullCheck(L_6);
		int32_t L_7 = MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// return profile.RightMouseHandGesture;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_8 = __this->get_profile_1();
		NullCheck(L_8);
		int32_t L_9 = MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0042:
	{
		// else if (UnityEngine.Input.GetMouseButton(2) && profile.MiddleMouseHandGesture != ArticulatedHandPose.GestureId.None)
		bool L_10 = Input_GetMouseButton_m43C68DE93C7D990E875BA53C4DEC9CA6230C8B79(2, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_11 = __this->get_profile_1();
		NullCheck(L_11);
		int32_t L_12 = MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// return profile.MiddleMouseHandGesture;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_13 = __this->get_profile_1();
		NullCheck(L_13);
		int32_t L_14 = MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0063:
	{
		// return profile.DefaultHandGesture;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_15 = __this->get_profile_1();
		NullCheck(L_15);
		int32_t L_16 = MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::ToggleGesture(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedHandDataProvider_ToggleGesture_m9F8B8AE3A881E53C67ABC7B4B8187E45AEFDB0BD (SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3 * __this, int32_t ___gesture0, const RuntimeMethod* method)
{
	{
		// if (UnityEngine.Input.GetMouseButtonDown(0) && profile.LeftMouseHandGesture != ArticulatedHandPose.GestureId.None)
		bool L_0 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_1 = __this->get_profile_1();
		NullCheck(L_1);
		int32_t L_2 = MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// return (gesture != profile.LeftMouseHandGesture ? profile.LeftMouseHandGesture : profile.DefaultHandGesture);
		int32_t L_3 = ___gesture0;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_4 = __this->get_profile_1();
		NullCheck(L_4);
		int32_t L_5 = MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002f;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_6 = __this->get_profile_1();
		NullCheck(L_6);
		int32_t L_7 = MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002f:
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_8 = __this->get_profile_1();
		NullCheck(L_8);
		int32_t L_9 = MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline(L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_003b:
	{
		// else if (UnityEngine.Input.GetMouseButtonDown(1) && profile.RightMouseHandGesture != ArticulatedHandPose.GestureId.None)
		bool L_10 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(1, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_11 = __this->get_profile_1();
		NullCheck(L_11);
		int32_t L_12 = MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// return (gesture != profile.RightMouseHandGesture ? profile.RightMouseHandGesture : profile.DefaultHandGesture);
		int32_t L_13 = ___gesture0;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_14 = __this->get_profile_1();
		NullCheck(L_14);
		int32_t L_15 = MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_16 = __this->get_profile_1();
		NullCheck(L_16);
		int32_t L_17 = MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline(L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_006a:
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_18 = __this->get_profile_1();
		NullCheck(L_18);
		int32_t L_19 = MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline(L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0076:
	{
		// else if (UnityEngine.Input.GetMouseButtonDown(2) && profile.MiddleMouseHandGesture != ArticulatedHandPose.GestureId.None)
		bool L_20 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(2, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_21 = __this->get_profile_1();
		NullCheck(L_21);
		int32_t L_22 = MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b1;
		}
	}
	{
		// return (gesture != profile.MiddleMouseHandGesture ? profile.MiddleMouseHandGesture : profile.DefaultHandGesture);
		int32_t L_23 = ___gesture0;
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_24 = __this->get_profile_1();
		NullCheck(L_24);
		int32_t L_25 = MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_00a5;
		}
	}
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_26 = __this->get_profile_1();
		NullCheck(L_26);
		int32_t L_27 = MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline(L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_00a5:
	{
		MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * L_28 = __this->get_profile_1();
		NullCheck(L_28);
		int32_t L_29 = MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline(L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00b1:
	{
		// return ArticulatedHandPose.GestureId.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandDataProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandDataProvider__cctor_m9A1A5FCC0ED72FF2FB58E0AF98B36C39C7D98887 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandDataProvider__cctor_m9A1A5FCC0ED72FF2FB58E0AF98B36C39C7D98887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandDataProvider_t826285504CC50E7C5DC3A16EFAEE33F9669F42E3_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SimulatedHandState_get_Handedness_m86AEEFE654C1519FE95F9985374C9F010EE6FF36 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness Handedness => handedness;
		uint8_t L_0 = __this->get_handedness_0();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_IsPinching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulatedHandState_get_IsPinching_m3342EF2FCE4F7A48DA2EFB9F7EBBC8AAFCC3B7DE (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching { get; private set; }
		bool L_0 = __this->get_U3CIsPinchingU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::set_IsPinching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_set_IsPinching_m65D25C94FC10461909F03181E2AE1A97E619DD46 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPinching { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPinchingU3Ek__BackingField_2(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_Gesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulatedHandState_get_Gesture_mD92DD18C9290E8F89105E0539065E44CA74AFFFF (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// get { return gesture; }
		int32_t L_0 = __this->get_gesture_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::set_Gesture(Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_set_Gesture_mC8DFF4D3309753AE88FB273F3C55CFBE8C7C1882 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != ArticulatedHandPose.GestureId.None && value != gesture)
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___value0;
		int32_t L_2 = __this->get_gesture_6();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		// gesture = value;
		int32_t L_3 = ___value0;
		__this->set_gesture_6(L_3);
		// gestureBlending = 0.0f;
		__this->set_gestureBlending_7((0.0f));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::get_GestureBlending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimulatedHandState_get_GestureBlending_m61B1AE6EA0F82008B919350872861BB83D1AE6DE (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// get { return gestureBlending; }
		float L_0 = __this->get_gestureBlending_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::set_GestureBlending(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_set_GestureBlending_mA9E930861977C6A7651CC2815A9F4C7335E2DB11 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandState_set_GestureBlending_mA9E930861977C6A7651CC2815A9F4C7335E2DB11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * G_B2_0 = NULL;
	SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * G_B3_1 = NULL;
	{
		// gestureBlending = Mathf.Clamp(value, gestureBlending, 1.0f);
		float L_0 = ___value0;
		float L_1 = __this->get_gestureBlending_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		__this->set_gestureBlending_7(L_2);
		// IsPinching = (gesture == ArticulatedHandPose.GestureId.Pinch && gestureBlending > 0.9f);
		int32_t L_3 = __this->get_gesture_6();
		G_B1_0 = __this;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		float L_4 = __this->get_gestureBlending_7();
		G_B3_0 = ((((float)L_4) > ((float)(0.9f)))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		SimulatedHandState_set_IsPinching_m65D25C94FC10461909F03181E2AE1A97E619DD46_inline(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState__ctor_m349E18510C30BD47FC7E10C4991BE2C34D676433 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, uint8_t ____handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandState__ctor_m349E18510C30BD47FC7E10C4991BE2C34D676433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 HandRotateEulerAngles = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_HandRotateEulerAngles_4(L_0);
		// public Vector3 JitterOffset = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_JitterOffset_5(L_1);
		// private ArticulatedHandPose pose = new ArticulatedHandPose();
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_2 = (ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 *)il2cpp_codegen_object_new(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_il2cpp_TypeInfo_var);
		ArticulatedHandPose__ctor_mDF79192860BCB5B11DE88B879238E1093D2F839A(L_2, /*hidden argument*/NULL);
		__this->set_pose_9(L_2);
		// public SimulatedHandState(Handedness _handedness)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// handedness = _handedness;
		uint8_t L_3 = ____handedness0;
		__this->set_handedness_0(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_Reset_m591616FB0D9CCE8F96F2DD72CAFBC745E6DCAB36 (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandState_Reset_m591616FB0D9CCE8F96F2DD72CAFBC745E6DCAB36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScreenPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_ScreenPosition_3(L_0);
		// HandRotateEulerAngles = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_HandRotateEulerAngles_4(L_1);
		// JitterOffset = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_JitterOffset_5(L_2);
		// ResetGesture();
		SimulatedHandState_ResetGesture_m768808568035F9E15EBC17DF83D75F62A6069EBC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::SetViewportPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_SetViewportPosition_mEAE22445325D52614D0E020CF8EFE8E542214CCB (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method)
{
	{
		// ScreenPosition = CameraCache.Main.ViewportToScreenPoint(point);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___point0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Camera_ViewportToScreenPoint_m8B42382A0571F1F6F1162F3DA05A9317F903B657(L_0, L_1, /*hidden argument*/NULL);
		__this->set_ScreenPosition_3(L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::SimulateInput(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_SimulateInput_m4FB2C3E0E8BEC699B55A62FA37BD12F8E018FB6C (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mouseDelta0, float ___noiseAmount1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rotationDeltaEulerAngles2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandState_SimulateInput_m4FB2C3E0E8BEC699B55A62FA37BD12F8E018FB6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ScreenPosition.x += mouseDelta.x;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_ScreenPosition_3();
		float* L_1 = L_0->get_address_of_x_2();
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___mouseDelta0;
		float L_5 = L_4.get_x_2();
		*((float*)L_2) = (float)((float)il2cpp_codegen_add((float)L_3, (float)L_5));
		// ScreenPosition.y += mouseDelta.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_ScreenPosition_3();
		float* L_7 = L_6->get_address_of_y_3();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___mouseDelta0;
		float L_11 = L_10.get_y_3();
		*((float*)L_8) = (float)((float)il2cpp_codegen_add((float)L_9, (float)L_11));
		// Vector3 newWorldPoint = CameraCache.Main.ScreenToWorldPoint(ScreenPosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_ScreenPosition_3();
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// newWorldPoint += CameraCache.Main.transform.forward * mouseDelta.z;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_16 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___mouseDelta0;
		float L_20 = L_19.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// ScreenPosition = CameraCache.Main.WorldToScreenPoint(newWorldPoint);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_23 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_0;
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_23, L_24, /*hidden argument*/NULL);
		__this->set_ScreenPosition_3(L_25);
		// HandRotateEulerAngles += rotationDeltaEulerAngles;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get_HandRotateEulerAngles_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = ___rotationDeltaEulerAngles2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_27, /*hidden argument*/NULL);
		__this->set_HandRotateEulerAngles_4(L_28);
		// JitterOffset = UnityEngine.Random.insideUnitSphere * noiseAmount;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F(/*hidden argument*/NULL);
		float L_30 = ___noiseAmount1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, L_30, /*hidden argument*/NULL);
		__this->set_JitterOffset_5(L_31);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::ResetGesture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_ResetGesture_m768808568035F9E15EBC17DF83D75F62A6069EBC (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandState_ResetGesture_m768808568035F9E15EBC17DF83D75F62A6069EBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * V_0 = NULL;
	{
		// gestureBlending = 1.0f;
		__this->set_gestureBlending_7((1.0f));
		// ArticulatedHandPose gesturePose = ArticulatedHandPose.GetGesturePose(gesture);
		int32_t L_0 = __this->get_gesture_6();
		IL2CPP_RUNTIME_CLASS_INIT(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_il2cpp_TypeInfo_var);
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_1 = ArticulatedHandPose_GetGesturePose_m2A44BE372E71AB070AFA4D82C4B0E5468FF97630(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (gesturePose != null)
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// pose.Copy(gesturePose);
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_3 = __this->get_pose_9();
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_4 = V_0;
		NullCheck(L_3);
		ArticulatedHandPose_Copy_mEFCDE938CE81762E3A992EFA18BBDD8180C1E264(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandState::FillCurrentFrame(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandState_FillCurrentFrame_mAC7F8FC883C1A03381FAC69F7483883413845C5C (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* ___jointsOut0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandState_FillCurrentFrame_mAC7F8FC883C1A03381FAC69F7483883413845C5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * V_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// ArticulatedHandPose gesturePose = ArticulatedHandPose.GetGesturePose(gesture);
		int32_t L_0 = __this->get_gesture_6();
		IL2CPP_RUNTIME_CLASS_INIT(ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422_il2cpp_TypeInfo_var);
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_1 = ArticulatedHandPose_GetGesturePose_m2A44BE372E71AB070AFA4D82C4B0E5468FF97630(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (gesturePose != null)
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0063;
		}
	}
	{
		// if (gestureBlending > poseBlending)
		float L_3 = __this->get_gestureBlending_7();
		float L_4 = __this->get_poseBlending_8();
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0063;
		}
	}
	{
		// float range = Mathf.Clamp01(1.0f - poseBlending);
		float L_5 = __this->get_poseBlending_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)), /*hidden argument*/NULL);
		V_3 = L_6;
		// float lerpFactor = range > 0.0f ? (gestureBlending - poseBlending) / range : 1.0f;
		float L_7 = V_3;
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_003e;
		}
	}
	{
		G_B5_0 = (1.0f);
		goto IL_004d;
	}

IL_003e:
	{
		float L_8 = __this->get_gestureBlending_7();
		float L_9 = __this->get_poseBlending_8();
		float L_10 = V_3;
		G_B5_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))/(float)L_10));
	}

IL_004d:
	{
		V_4 = G_B5_0;
		// pose.InterpolateOffsets(pose, gesturePose, lerpFactor);
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_11 = __this->get_pose_9();
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_12 = __this->get_pose_9();
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_13 = V_0;
		float L_14 = V_4;
		NullCheck(L_11);
		ArticulatedHandPose_InterpolateOffsets_mD03754CF2CC8BBB41787BB08A2294C49E4D65445(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// poseBlending = gestureBlending;
		float L_15 = __this->get_gestureBlending_7();
		__this->set_poseBlending_8(L_15);
		// Quaternion rotation = Quaternion.Euler(HandRotateEulerAngles);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = __this->get_HandRotateEulerAngles_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// Vector3 position = CameraCache.Main.ScreenToWorldPoint(ScreenPosition + JitterOffset);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = CameraCache_get_Main_m23FB3162F6476988FEE59F829DEAF08702D81554(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = __this->get_ScreenPosition_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = __this->get_JitterOffset_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_18, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		// pose.ComputeJointPoses(handedness, rotation, position, jointsOut);
		ArticulatedHandPose_t528DF49FF6B18F5FEC9A968DFBFB235FC429F422 * L_23 = __this->get_pose_9();
		uint8_t L_24 = __this->get_handedness_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_2;
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_27 = ___jointsOut0;
		NullCheck(L_23);
		ArticulatedHandPose_ComputeJointPoses_m04188906F4189F035294C1C59F8CE862E2D3D10A(L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::CalculateJointRotations(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[],UnityEngine.Quaternion[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandUtils_CalculateJointRotations_mA0A1808305AB3D8B589A08E42F9155739D9221AE (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___jointOrientationsOut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_CalculateJointRotations_mA0A1808305AB3D8B589A08E42F9155739D9221AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// int[] jointsPerFinger = { 4, 5, 5, 5, 5 }; // thumb, index, middle, right, pinky
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5D7196C8D3A7E05A50169A365F5A7B3B92600D14____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		V_1 = 0;
		goto IL_00e1;
	}

IL_0019:
	{
		// int jointsCurrentFinger = jointsPerFinger[fingerIndex];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// int lowIndex = (int)TrackedHandJoint.ThumbMetacarpalJoint + jointsPerFinger.Take(fingerIndex).Sum();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_0;
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B((RuntimeObject*)(RuntimeObject*)L_7, L_8, /*hidden argument*/Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCBED6C7F74DCC17FA9C923D11B6801F52FEEB61B_RuntimeMethod_var);
		int32_t L_10 = Enumerable_Sum_mA81913DBCF3086B4716F692F9DB797D7DD6B7583(L_9, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_10));
		// int highIndex = lowIndex + jointsCurrentFinger - 1;
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1));
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_13 = V_3;
		V_5 = L_13;
		goto IL_00d4;
	}

IL_003b:
	{
		// int jointEndidx = jointStartidx == lowIndex ? (int)TrackedHandJoint.Wrist : jointStartidx - 1;
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_16 = V_5;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_6 = G_B5_0;
		// Vector3 boneForward = jointPositions[jointStartidx] - jointPositions[jointEndidx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = ___jointPositions1;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = ___jointPositions1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_20, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// Vector3 boneUp = Vector3.Cross(boneForward, GetPalmRightVector(handedness, jointPositions));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_7;
		uint8_t L_27 = ___handedness0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = SimulatedHandUtils_GetPalmRightVector_m9C646FB51F2C94823DC3EEE26383B22A88EA4301(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_26, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		// if (boneForward.magnitude > float.Epsilon && boneUp.magnitude > float.Epsilon)
		float L_31 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_31) > ((float)(1.401298E-45f)))))
		{
			goto IL_00c1;
		}
	}
	{
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_32) > ((float)(1.401298E-45f)))))
		{
			goto IL_00c1;
		}
	}
	{
		// Quaternion jointRotation = Quaternion.LookRotation(boneForward, boneUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_33, L_34, /*hidden argument*/NULL);
		V_9 = L_35;
		// if (fingerIndex == 0)
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00b5;
		}
	}
	{
		// Quaternion rotateThumb90 = Quaternion.AngleAxis(handedness == Handedness.Left ? -90 : 90, boneForward);
		uint8_t L_37 = ___handedness0;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		G_B11_0 = ((int32_t)90);
		goto IL_00a4;
	}

IL_00a2:
	{
		G_B11_0 = ((int32_t)-90);
	}

IL_00a4:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0((((float)((float)G_B11_0))), L_38, /*hidden argument*/NULL);
		// jointRotation = rotateThumb90 * jointRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = V_9;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_39, L_40, /*hidden argument*/NULL);
		V_9 = L_41;
	}

IL_00b5:
	{
		// jointOrientationsOut[jointStartidx] = jointRotation;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_42 = ___jointOrientationsOut2;
		int32_t L_43 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_44 = V_9;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_44);
		// }
		goto IL_00ce;
	}

IL_00c1:
	{
		// jointOrientationsOut[jointStartidx] = Quaternion.identity;
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_45 = ___jointOrientationsOut2;
		int32_t L_46 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_47);
	}

IL_00ce:
	{
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00d4:
	{
		// for (int jointStartidx = lowIndex; jointStartidx <= highIndex; jointStartidx++)
		int32_t L_49 = V_5;
		int32_t L_50 = V_4;
		if ((((int32_t)L_49) <= ((int32_t)L_50)))
		{
			goto IL_003b;
		}
	}
	{
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e1:
	{
		// for (int fingerIndex = 0; fingerIndex < numFingers; fingerIndex++)
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) < ((int32_t)5)))
		{
			goto IL_0019;
		}
	}
	{
		// jointOrientationsOut[(int)TrackedHandJoint.Palm] = Quaternion.LookRotation(GetPalmForwardVector(jointPositions), GetPalmUpVector(handedness, jointPositions));
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_53 = ___jointOrientationsOut2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_54 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = SimulatedHandUtils_GetPalmForwardVector_m9E069A581F41648ADB1D947EDBB726BD867602F4(L_54, /*hidden argument*/NULL);
		uint8_t L_56 = ___handedness0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_57 = ___jointPositions1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = SimulatedHandUtils_GetPalmUpVector_mB1852A38F5919EC805FE801DB47DC6DA1E64CCD0(L_56, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_59 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_55, L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(2), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_59);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmForwardVector_m9E069A581F41648ADB1D947EDBB726BD867602F4 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmForwardVector_m9E069A581F41648ADB1D947EDBB726BD867602F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions0;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 thumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions0;
		NullCheck(L_3);
		int32_t L_4 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// Vector3 thumbMetaCarpalToIndex = indexBase - thumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// return thumbMetaCarpalToIndex.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmUpVector_mB1852A38F5919EC805FE801DB47DC6DA1E64CCD0 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmUpVector_mB1852A38F5919EC805FE801DB47DC6DA1E64CCD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 pinkyBase = jointPositions[(int)TrackedHandJoint.PinkyKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Vector3 ThumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		// Vector3 ThumbMetaCarpalToPinky = pinkyBase - ThumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 ThumbMetaCarpalToIndex = indexBase - ThumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (handedness == Handedness.Left)
		uint8_t L_13 = ___handedness0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// return Vector3.Cross(ThumbMetaCarpalToPinky, ThumbMetaCarpalToIndex).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		return L_17;
	}

IL_0039:
	{
		// return Vector3.Cross(ThumbMetaCarpalToIndex, ThumbMetaCarpalToPinky).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		return L_21;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmRightVector_m9C646FB51F2C94823DC3EEE26383B22A88EA4301 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmRightVector_m9C646FB51F2C94823DC3EEE26383B22A88EA4301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 indexBase = jointPositions[(int)TrackedHandJoint.IndexKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		// Vector3 pinkyBase = jointPositions[(int)TrackedHandJoint.PinkyKnuckle];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Vector3 thumbMetaCarpal = jointPositions[(int)TrackedHandJoint.ThumbMetacarpalJoint];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		// Vector3 thumbMetaCarpalToPinky = pinkyBase - thumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Vector3 thumbMetaCarpalToIndex = indexBase - thumbMetaCarpal;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// Vector3 thumbMetaCarpalUp = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_3 = L_13;
		// if (handedness == Handedness.Left)
		uint8_t L_14 = ___handedness0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// thumbMetaCarpalUp = Vector3.Cross(thumbMetaCarpalToPinky, thumbMetaCarpalToIndex).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_18;
		// }
		goto IL_0053;
	}

IL_0042:
	{
		// thumbMetaCarpalUp = Vector3.Cross(thumbMetaCarpalToIndex, thumbMetaCarpalToPinky).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0053:
	{
		// return Vector3.Cross(thumbMetaCarpalUp, thumbMetaCarpalToIndex).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandUtils__ctor_m8FE7B6098201AE8BB6E8337DCDAAA7663D64F06F (SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulatedHandUtils__cctor_mE9EC43A15625808EECB51ECE0AA4C867F45C6733 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils__cctor_mE9EC43A15625808EECB51ECE0AA4C867F45C6733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandUtils_t112B94E0F721072169327F6020348A7BB791A465_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveHorizontal_m017554BDDC001B7EA768A8232E20D7458D583027_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveHorizontal => moveHorizontal;
		String_t* L_0 = __this->get_moveHorizontal_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_CurrentControlMode_m365A1934F1906A26E0865D061C759F74CD7F8BBB_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public InputSimulationControlMode CurrentControlMode => currentControlMode;
		int32_t L_0 = __this->get_currentControlMode_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveVertical_mD3951F2FDB8CEB301D4060806EC0CA6759896766_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MoveVertical => moveVertical;
		String_t* L_0 = __this->get_moveVertical_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_FastControlKey_m7EBE38DE672182505B89E7996FEF7BCE4A1B7803_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode FastControlKey => fastControlKey;
		int32_t L_0 = __this->get_fastControlKey_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlSlowSpeed_m876415D8FBE9D75C3C183514450741EAF5F07A7B_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float ControlSlowSpeed => controlSlowSpeed;
		float L_0 = __this->get_controlSlowSpeed_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlFastSpeed_mFC4C7367E2EED39F2170D25353F140C624730606_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float ControlFastSpeed => controlFastSpeed;
		float L_0 = __this->get_controlFastSpeed_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsControllerLookInverted_m1F1DDDC2A8E1523EAFCFA298669C7DB4F87AAC4D_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsControllerLookInverted => isControllerLookInverted;
		bool L_0 = __this->get_isControllerLookInverted_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookVertical_m96BDB7F20C2470F9A83B319056DFAF7506DC42FE_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string LookVertical => lookVertical;
		String_t* L_0 = __this->get_lookVertical_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookHorizontal_m42B3D6D256B7AAC814327C831B5D6AA1DF97E255_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string LookHorizontal => lookHorizontal;
		String_t* L_0 = __this->get_lookHorizontal_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ExtraMouseSensitivityScale_mAC27CAA55A3D2E2CFD163C201458A55DF9986E46_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float ExtraMouseSensitivityScale => extraMouseSensitivityScale;
		float L_0 = __this->get_extraMouseSensitivityScale_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MouseLookButton_mCD04634D2844315BB176501FCD54922973B2D259_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public InputSimulationMouseButton MouseLookButton => mouseLookButton;
		int32_t L_0 = __this->get_mouseLookButton_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseX_m948C6DC5FA747EF496CF4D034559866E42208385_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseX => mouseX;
		String_t* L_0 = __this->get_mouseX_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseY_m09ED3578096DF704596D515302D86E585CFB5C02_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public string MouseY => mouseY;
		String_t* L_0 = __this->get_mouseY_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultMouseSensitivity_m6318EE5940068250E4995CA50A7B48AA2D7B38D0_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultMouseSensitivity => defaultMouseSensitivity;
		float L_0 = __this->get_defaultMouseSensitivity_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547ADMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_0 = ((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputAction_get_None_m0276CF8988B0670DCCE381865DD5190010A2A8BFMicrosoft_MixedReality_Toolkit_Services_InputSimulation_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_0 = ((MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mF175BAE3270E5432E605BDD5FD1FA5F722B24AEE_inline (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_m5259A799822AFD94A2BEE4B47F887A03158FE308_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_m76D7FB5DBF945174A9D9B7A19123783742C6B57F_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m3E2EB0D15AAADABB3D967535353AD53539677046_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * BaseHand_get_HandRay_mDB7145BE29023110AF5EC4037ABE75660776680F_inline (BaseHand_tB58ECFC99FBFD516BBAA0989004A10F687078F4B * __this, const RuntimeMethod* method)
{
	{
		// protected HandRay HandRay { get; } = new HandRay();
		HandRay_t9DAE3FE243DBED1BAA1B9A4F782C3F1C9E6AE285 * L_0 = __this->get_U3CHandRayU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m28EBD523337BC95684EFC016980F3862DE763759_inline (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1AC620BE37B8F415170D725902EE1C3A92ECC19B_inline (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m59D5E1DD267C83A3DB834096028590522C934868_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; protected set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_mB7C40888399E88C93E755FE89D50234CF5F5C981_inline (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching => isPinching;
		bool L_0 = __this->get_isPinching_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * MixedRealityInputSystemProfile_get_GesturesProfile_mA8F275BA8A5AE96D3A95350F698A7343D72E5129_inline (MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * __this, const RuntimeMethod* method)
{
	{
		// get { return gesturesProfile; }
		MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * L_0 = __this->get_gesturesProfile_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* MixedRealityGesturesProfile_get_Gestures_mBAB7F3737E09478B3FA7F30ECAC24D6840E98580_inline (MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityGestureMapping[] Gestures => gestures;
		MixedRealityGestureMappingU5BU5D_t2F3D7B685E29F06002C6BD2EF99A97C8DF6BD874* L_0 = __this->get_gestures_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_m6798792581776B818AF6A5307DD72D3425420C20_inline (MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 * __this, const RuntimeMethod* method)
{
	{
		// public GestureInputType GestureType => gestureType;
		int32_t L_0 = __this->get_gestureType_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityGestureMapping_get_Action_mF225EE997BA38AFC7DCCA99F71434633FD683D82_inline (MixedRealityGestureMapping_t765237603301D949A532A3533D70FB492A6E3074 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInputAction Action => action;
		MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_0 = __this->get_action_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityGesturesProfile_get_UseRailsNavigation_mEAE6D30B9C69C0E5EA8115068FDA600F87CE02C6_inline (MixedRealityGesturesProfile_t9CC7974AD508EC596BC2FD0C5D3807CA076D7725 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseRailsNavigation => useRailsNavigation;
		bool L_0 = __this->get_useRailsNavigation_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_mBC1A3E5C22D4854356392379561E246374610007_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HoldStartDuration => holdStartDuration;
		float L_0 = __this->get_holdStartDuration_32();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m30BD08DA409E73AE42567F6420EB5E92DC7981E4_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float NavigationStartThreshold => navigationStartThreshold;
		float L_0 = __this->get_navigationStartThreshold_33();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* SimulatedHandData_get_Joints_m0137F96239589766E8132147EBBC5D1C24516B7C_inline (SimulatedHandData_t414B6A5A422CE06387BF5DB28CCAF451A21FCBA1 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityPose[] Joints => joints;
		MixedRealityPoseU5BU5D_t9A8494A57EE87642D3A570AB9C476CE039C529BD* L_0 = __this->get_joints_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandGesture_mD3A6A7B18EE78308C4EB5A9E34D9E724D214923E_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId DefaultHandGesture => defaultHandGesture;
		int32_t L_0 = __this->get_defaultHandGesture_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SimulatedHandState_get_IsPinching_m3342EF2FCE4F7A48DA2EFB9F7EBBC8AAFCC3B7DE_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPinching { get; private set; }
		bool L_0 = __this->get_U3CIsPinchingU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_m0938B5767F57F921502537FDEEAD30DFCA852EA0_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode ToggleLeftHandKey => toggleLeftHandKey;
		int32_t L_0 = __this->get_toggleLeftHandKey_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m6800CE9022A5B139B2435C14B93598A383FA17E2_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode ToggleRightHandKey => toggleRightHandKey;
		int32_t L_0 = __this->get_toggleRightHandKey_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_m5CF930DD138B33A6C88308A93ABF1FD23C8E95EB_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode LeftHandManipulationKey => leftHandManipulationKey;
		int32_t L_0 = __this->get_leftHandManipulationKey_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightHandManipulationKey_mA429EA7F531EC9F910DB0EFF6E7A36E27AB58424_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode RightHandManipulationKey => rightHandManipulationKey;
		int32_t L_0 = __this->get_rightHandManipulationKey_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m6604B44E146EA94CBD6109337F0190E999766DA8_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandDepthMultiplier => handDepthMultiplier;
		float L_0 = __this->get_handDepthMultiplier_35();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandRotationSpeed_m536913F900351CB840F04EEF9B71F97848A9EAC6_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandRotationSpeed => handRotationSpeed;
		float L_0 = __this->get_handRotationSpeed_43();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_YawHandCCWKey_mEAB61DF36DB74C3D75B4A74327E3DBAFC005C1F7_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode YawHandCCWKey => yawHandCCWKey;
		int32_t L_0 = __this->get_yawHandCCWKey_38();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_YawHandCWKey_m8D25D317DD2ADDDA33255C9F7E993E854CE32578_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode YawHandCWKey => yawHandCWKey;
		int32_t L_0 = __this->get_yawHandCWKey_37();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_PitchHandCCWKey_mF31570A5CFFE2C565A701FF6318F8397DBAB689C_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode PitchHandCCWKey => pitchHandCCWKey;
		int32_t L_0 = __this->get_pitchHandCCWKey_40();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_PitchHandCWKey_m345C749AC96907F9EC2C9C2A67A9762CE9DA1FF0_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode PitchHandCWKey => pitchHandCWKey;
		int32_t L_0 = __this->get_pitchHandCWKey_39();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RollHandCCWKey_m1BE607B59E89E69C3ADBE1527F1C6309D9599D63_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode RollHandCCWKey => rollHandCCWKey;
		int32_t L_0 = __this->get_rollHandCCWKey_42();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RollHandCWKey_mCD75EA7E80AB5D53517352CABF579A50663C7BF9_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode RollHandCWKey => rollHandCWKey;
		int32_t L_0 = __this->get_rollHandCWKey_41();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_m159042CFADEA1948914A6AD9D52193E9179B0AF5_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandGestureAnimationSpeed => handGestureAnimationSpeed;
		float L_0 = __this->get_handGestureAnimationSpeed_31();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SimulatedHandState_get_GestureBlending_m61B1AE6EA0F82008B919350872861BB83D1AE6DE_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// get { return gestureBlending; }
		float L_0 = __this->get_gestureBlending_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultHandDistance_m3D175B58CA9EBA30092EA2A68D01EA4B94489C4A_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultHandDistance => defaultHandDistance;
		float L_0 = __this->get_defaultHandDistance_34();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandJitterAmount_mDDF19A0974AFB60C2E91D129017A3D0805143F60_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandJitterAmount => handJitterAmount;
		float L_0 = __this->get_handJitterAmount_36();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SimulatedHandState_get_Gesture_mD92DD18C9290E8F89105E0539065E44CA74AFFFF_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, const RuntimeMethod* method)
{
	{
		// get { return gesture; }
		int32_t L_0 = __this->get_gesture_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandHideTimeout_m68A2277521E6F5AB774F6C2B8C33308995704297_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public float HandHideTimeout => handHideTimeout;
		float L_0 = __this->get_handHideTimeout_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_mEBCDA2D66B78F65369F66DE1153FEC879F096A82_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId LeftMouseHandGesture => leftMouseHandGesture;
		int32_t L_0 = __this->get_leftMouseHandGesture_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m73169C1AC874B34BE0ED76158486C07403F82432_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId RightMouseHandGesture => rightMouseHandGesture;
		int32_t L_0 = __this->get_rightMouseHandGesture_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_mD1F5A9F51BCF91EC6D5F0AB990FD0183F0F0EE0C_inline (MixedRealityInputSimulationProfile_t752581F6963049D1D77F1BB3E533640527CD7977 * __this, const RuntimeMethod* method)
{
	{
		// public ArticulatedHandPose.GestureId MiddleMouseHandGesture => middleMouseHandGesture;
		int32_t L_0 = __this->get_middleMouseHandGesture_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SimulatedHandState_set_IsPinching_m65D25C94FC10461909F03181E2AE1A97E619DD46_inline (SimulatedHandState_t97E0CEE0C72B9DB9537D03ABD5468E03FAE6A911 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPinching { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPinchingU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1811EC8A022D2B95FE8053537377A554AE61CD61_gshared_inline (Nullable_1_t75BFB9848B0C0C6930A6973335B59621D36E6203 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
