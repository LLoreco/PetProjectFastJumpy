#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E;
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6;
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09;
struct IPropertyBag_1_tF38E0DD26816C30F7A291A4C229273286EF81690;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IPropertyBag_1_t12476CBFA03E553669FC0F78B8B392643D0EA98D;
struct IPropertyBag_1_tC89C7D801308BB118F51FC38D2EDF9150099CD87;
struct IPropertyBag_1_tA5F5E06CD7B6D9DA44B0C96DD751E125A2838965;
struct IPropertyBag_1_tB4F574342A3326282E305E935876E09BA8AC2A2E;
struct IPropertyBag_1_t0F569CB3E3DD679044B9F9E594B94E991D876F55;
struct IPropertyBag_1_tD0AC48FB723053E10D50C4F4ACA187049C60A52A;
struct IPropertyBag_1_tA86B0AA7564B969B39432363A3CC153860369CF8;
struct IPropertyBag_1_tF96AD753C8C0604F73BEC05D07FB8DB0E652D9D7;
struct IPropertyBag_1_tCC672A5FC4DF9FCAEDB0E95C78D8B03C0BE79D1F;
struct IPropertyBag_1_tFB0D9D329A0DD352CA6F2E401245E71D132AF6B1;
struct IPropertyBag_1_tD475E86AD532B7E07FF336E6D5F45242390B1331;
struct IPropertyBag_1_tAA5B8A65854B645C4BE0170D2629B00A15218E3E;
struct IPropertyBag_1_t474CE322BDE46B0885DE33A9810CBF959176FBE8;
struct IPropertyBag_1_tABC6AB8A0C2984D47212C161B82BB4CD34EE4B42;
struct IPropertyBag_1_t6AFC0AC74501529BFF9E097DC21249C06852B690;
struct IPropertyBag_1_tAE3DEC013C632256F0D7F5C1CBC3680AC185F979;
struct IPropertyBag_1_tC38B0E23F5A4EEEB1496FA49888AE669B1A22163;
struct IPropertyBag_1_t35C2AC27D6AF7F85B944D05BFC0298C9A7080388;
struct IPropertyBag_1_t852A24B93B53A9516797D747FE08D0DDDB2288B5;
struct IPropertyBag_1_tC4A861BBA0615CB45605B37C7604CB3950574558;
struct IPropertyBag_1_t0609AEAC1BAF0CC00E12F517D94A0BB20C869A05;
struct IPropertyBag_1_t21591A9B7F6B7F2B6226C8314B530B2C5CBEF548;
struct IPropertyBag_1_tAD71D1994E82547416831FC2DAE21F038A38CAAD;
struct IPropertyBag_1_t06FC2AE397C1A711BCF674C0438149C49A561045;
struct IPropertyBag_1_tF770C1A78A72D7B8E24F537F9409CFDB5B0C11A6;
struct IPropertyBag_1_t28707B699C3F6C7965A9AF253C21DE32BCB4148F;
struct IPropertyBag_1_t9834E39BF4BD812099CECA37DF60749AAE274FCD;
struct IPropertyBag_1_t145445023A0B2CED5FB1C2CCA065A0C2678B4CC3;
struct IPropertyBag_1_t8A3D63921BE840B9ACA3F45D9B9F6918AFD54CA5;
struct IPropertyBag_1_t4E3151D7F146BCDA0FA72786B3B30359FF54504F;
struct IPropertyBag_1_tD1F3A7DBE2F49D15806E8AC1B537F0B133DA265E;
struct IPropertyBag_1_t4F700C12974F20F57E80BF1374C40ADA92303CA3;
struct IPropertyBag_1_tB4AF5D6F5B05C75849FABA9CF0F7410F2058ADCD;
struct IPropertyBag_1_t6C3B3ECBE136DE8EB30C6E3C4C68260118B90C67;
struct IPropertyBag_1_t11B17E28AD004BEECDF730E60F377FEBBAE629D5;
struct IPropertyBag_1_t81B42929CDBDAC1B8C1775D38F8646DAF065F8F9;
struct IPropertyBag_1_tDAC9D4EA568EDC701E9AC378EF87FE080958271E;
struct IPropertyBag_1_t62EF8C2C7D11C796F3ECB8AD3461E8C3A2D87E5A;
struct IPropertyBag_1_t5EBA6E56CEB6DFD9CA30F8DA7E06E09A8211DE60;
struct IPropertyBag_1_t9CE20305E04AC1EB512CCC226C03A84714030C34;
struct IPropertyBag_1_tF3ED76A0B3B3C7C939F96D3F9D303DAD0210804D;
struct IPropertyBag_1_t87438811C2F2F5EDBD73279779C029EED554B3CB;
struct IPropertyBag_1_tBBDD5A5B3F8E9F119138331A16572F6626C67749;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A;
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442;
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281;
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15;
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2;
struct Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087;
struct Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC;
struct Property_2_tB2B25D50A07137613571C599F2D927783128F4B2;
struct Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1;
struct Property_2_t8803DA217446897A3DBF392B50C90530471C6822;
struct Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A;
struct Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151;
struct Property_2_tF274BD13981F14C9234EED2454BA5879F339129A;
struct Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5;
struct Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B;
struct Property_2_tA37B381C421869CA10862B372913EA34498BC042;
struct Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C;
struct Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8;
struct Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3;
struct Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471;
struct Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D;
struct Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED;
struct Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE;
struct Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645;
struct Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E  : public RuntimeObject
{
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6  : public RuntimeObject
{
};
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB2B25D50A07137613571C599F2D927783128F4B2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8803DA217446897A3DBF392B50C90530471C6822  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF274BD13981F14C9234EED2454BA5879F339129A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA37B381C421869CA10862B372913EA34498BC042  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF  : public RuntimeObject
{
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4  : public RuntimeObject
{
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9  : public RuntimeObject
{
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28  : public RuntimeObject
{
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE  : public RuntimeObject
{
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283  : public RuntimeObject
{
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B  : public RuntimeObject
{
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeArrayHelpers_t427C0EEA0692067215F4A74736B499D53C42AA0A  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NoAllocHelpers_t5108A9272D2BFBFF50B14D2A1B5330A629180360  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD 
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD_marshaled_pinvoke
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD_marshaled_com
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FindObjectsInactive_t10C7BE036CAD0178142374F945283DA50D02B87A 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC 
{
	ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields
{
	EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields
{
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* ___defaultComparer;
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* ___defaultComparer;
};
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* ___defaultComparer;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m24A28014049FCB605E5EA7A2F044DB0445776F25_gshared_inline (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m8517A223E5CC91C25F2993626CAC164BDE47868D_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___0_src, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mDEA9ECF8A32FB1C9B6085F26FEB9C07EB8A38F9D_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m913401BF0E81033477B3C5B5C54D91034598CDDD_gshared_inline (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m51860EC1322A2BD1F0FC0CC0BC8698BA446DD923_gshared (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m2341B9BE1AD7D6E4DE9331FE7DA26696CAEF564B_gshared (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___0_src, NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m90DD41A5728B49BDF3612A88F7EAD0FA4CA54CB8_gshared (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4D570DA91CBE8B607C76214B0CC1FFDEA53B6BC0_gshared_inline (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m93513C6EDC1D0E866B1A942DBBEF71AD3DB100AF_gshared (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m887F5C229945D2C15B5E2F2B68C13134554ADF62_gshared (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___0_src, NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m848E0576A37CCAA20D87E901721A7AC8F6FA3FCC_gshared (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD18D5BAA0DFBD842389B3723A09296444F3B78F2_gshared_inline (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m994685B1A26FB0972542BE1216EBD59B332E880A_gshared (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAADFCCAE72BDF1E1866AD2B3C6BEBB33D426337C_gshared (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_gshared_inline (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F* __this, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject** UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline (RuntimeObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E_gshared (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01_gshared (RuntimeObject** ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39_gshared (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42_gshared (float* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE_gshared (RuntimeObject* ___0_visitor, float* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802_gshared (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6_gshared (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8185EF3DBA50BC42DD9BCB9826646D6689183D1C_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DCEBE7789AD6A24A8A0AD76201492EA755F643B_gshared (RuntimeObject* ___0_visitor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m6A8FDA3753DC8ED53AA4E674493AD821DDCA783C_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m7ED2552B2069FDBB4735B831CFADAB904AE08D8E_gshared (RuntimeObject* ___0_visitor, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m39A36549308D9D5C19498C2146CFE53CE99DA3FC_gshared (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD5D8197C711F0C773E9A76A2EB64004F163AA61C_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m67729B3186B7559E74A776C3973D01A2BB633B43_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5D9D34A972B3C320E06C9E9EC6E4F04B2E583669_gshared (RuntimeObject* ___0_visitor, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516_gshared (const RuntimeMethod* method) ;

inline bool NativeArray_1_get_IsCreated_m24A28014049FCB605E5EA7A2F044DB0445776F25_inline (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m24A28014049FCB605E5EA7A2F044DB0445776F25_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555 (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Copy_m8517A223E5CC91C25F2993626CAC164BDE47868D (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___0_src, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m8517A223E5CC91C25F2993626CAC164BDE47868D_gshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void NativeArray_1_Dispose_mDEA9ECF8A32FB1C9B6085F26FEB9C07EB8A38F9D (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*, const RuntimeMethod*))NativeArray_1_Dispose_mDEA9ECF8A32FB1C9B6085F26FEB9C07EB8A38F9D_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m913401BF0E81033477B3C5B5C54D91034598CDDD_inline (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m913401BF0E81033477B3C5B5C54D91034598CDDD_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m51860EC1322A2BD1F0FC0CC0BC8698BA446DD923 (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m51860EC1322A2BD1F0FC0CC0BC8698BA446DD923_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Copy_m2341B9BE1AD7D6E4DE9331FE7DA26696CAEF564B (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___0_src, NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE, NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m2341B9BE1AD7D6E4DE9331FE7DA26696CAEF564B_gshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void NativeArray_1_Dispose_m90DD41A5728B49BDF3612A88F7EAD0FA4CA54CB8 (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE*, const RuntimeMethod*))NativeArray_1_Dispose_m90DD41A5728B49BDF3612A88F7EAD0FA4CA54CB8_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m4D570DA91CBE8B607C76214B0CC1FFDEA53B6BC0_inline (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m4D570DA91CBE8B607C76214B0CC1FFDEA53B6BC0_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m93513C6EDC1D0E866B1A942DBBEF71AD3DB100AF (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m93513C6EDC1D0E866B1A942DBBEF71AD3DB100AF_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Copy_m887F5C229945D2C15B5E2F2B68C13134554ADF62 (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___0_src, NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1, NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m887F5C229945D2C15B5E2F2B68C13134554ADF62_gshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void NativeArray_1_Dispose_m848E0576A37CCAA20D87E901721A7AC8F6FA3FCC (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1*, const RuntimeMethod*))NativeArray_1_Dispose_m848E0576A37CCAA20D87E901721A7AC8F6FA3FCC_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_mD18D5BAA0DFBD842389B3723A09296444F3B78F2_inline (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD18D5BAA0DFBD842389B3723A09296444F3B78F2_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m994685B1A26FB0972542BE1216EBD59B332E880A (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A*, const RuntimeMethod*))NativeArray_1_Dispose_m994685B1A26FB0972542BE1216EBD59B332E880A_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mAADFCCAE72BDF1E1866AD2B3C6BEBB33D426337C (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAADFCCAE72BDF1E1866AD2B3C6BEBB33D426337C_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_inline (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, const RuntimeMethod*))NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_gshared)(__this, method);
}
inline void NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958 (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958_gshared)(__this, ___0_array, method);
}
inline void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_gshared)(__this, ___0_array, method);
}
inline void NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD_gshared)(__this, ___0_array, ___1_start, method);
}
inline void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_gshared)(__this, ___0_array, ___1_start, method);
}
inline void NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B*, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75 (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0*, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F* __this, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F*, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011 (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F*, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29 (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8*, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882*, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28 (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D_gshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6 (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6_gshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_gshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0*, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9*, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared)(__this, method);
}
inline void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317**, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mCA5E2E9BF64B7203CE8B1ECFCFAA0370606984D4 (Type_t* ___0_type, bool ___1_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D (AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF (PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD* __this, PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___0_visitor, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922 (PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD* __this, const RuntimeMethod* method) ;
inline void PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441 (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01 (RuntimeObject** ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject**, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39 (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject**, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42 (float* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (float*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE (RuntimeObject* ___0_visitor, float* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, float*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline)(method);
}
inline EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6 (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8185EF3DBA50BC42DD9BCB9826646D6689183D1C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8185EF3DBA50BC42DD9BCB9826646D6689183D1C_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_gshared_inline)(method);
}
inline EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DCEBE7789AD6A24A8A0AD76201492EA755F643B (RuntimeObject* ___0_visitor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DCEBE7789AD6A24A8A0AD76201492EA755F643B_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m6A8FDA3753DC8ED53AA4E674493AD821DDCA783C (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m6A8FDA3753DC8ED53AA4E674493AD821DDCA783C_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_gshared_inline)(method);
}
inline EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m7ED2552B2069FDBB4735B831CFADAB904AE08D8E (RuntimeObject* ___0_visitor, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m7ED2552B2069FDBB4735B831CFADAB904AE08D8E_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m39A36549308D9D5C19498C2146CFE53CE99DA3FC (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m39A36549308D9D5C19498C2146CFE53CE99DA3FC_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD5D8197C711F0C773E9A76A2EB64004F163AA61C (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD5D8197C711F0C773E9A76A2EB64004F163AA61C_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline bool PropertyBag_TryGetPropertyBagForValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m67729B3186B7559E74A776C3973D01A2BB633B43 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m67729B3186B7559E74A776C3973D01A2BB633B43_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_gshared_inline)(method);
}
inline EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5D9D34A972B3C320E06C9E9EC6E4F04B2E583669 (RuntimeObject* ___0_visitor, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5D9D34A972B3C320E06C9E9EC6E4F04B2E583669_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
inline EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26_gshared)(method);
}
inline EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B_gshared)(method);
}
inline EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeAndCopyIfNeeded_TisIntPtr_t_mE6FB5262E0BE0E94F41063D55D0647BBD5B169A3_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	int32_t G_B7_0 = 0;
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m24A28014049FCB605E5EA7A2F044DB0445776F25_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_6 = ___1_size;
		int32_t L_7 = ___2_allocator;
		NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555((&V_1), L_6, L_7, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_9 = ___0_nativeArray;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_10 = (*(NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*)L_9);
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_11 = V_1;
		int32_t L_12 = ___1_size;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_13 = ___0_nativeArray;
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_13)->___m_Length);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			G_B6_0 = L_11;
			G_B6_1 = L_10;
			goto IL_0039;
		}
		G_B5_0 = L_11;
		G_B5_1 = L_10;
	}
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_15 = ___0_nativeArray;
		int32_t L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_15)->___m_Length);
		G_B7_0 = L_16;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_003a;
	}

IL_0039:
	{
		int32_t L_17 = ___1_size;
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_003a:
	{
		NativeArray_1_Copy_m8517A223E5CC91C25F2993626CAC164BDE47868D(G_B7_2, G_B7_1, G_B7_0, il2cpp_rgctx_method(method->rgctx_data, 6));
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_18 = ___0_nativeArray;
		NativeArray_1_Dispose_mDEA9ECF8A32FB1C9B6085F26FEB9C07EB8A38F9D(L_18, il2cpp_rgctx_method(method->rgctx_data, 7));
	}

IL_0045:
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_19 = ___0_nativeArray;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_20 = V_1;
		*(NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*)L_19 = L_20;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeAndCopyIfNeeded_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mA77D90AFB20D0C29AC7BB9BD3107607F60D48386_gshared (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	int32_t G_B7_0 = 0;
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m913401BF0E81033477B3C5B5C54D91034598CDDD_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_6 = ___1_size;
		int32_t L_7 = ___2_allocator;
		NativeArray_1__ctor_m51860EC1322A2BD1F0FC0CC0BC8698BA446DD923((&V_1), L_6, L_7, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_9 = ___0_nativeArray;
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE L_10 = (*(NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE*)L_9);
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE L_11 = V_1;
		int32_t L_12 = ___1_size;
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_13 = ___0_nativeArray;
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_13)->___m_Length);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			G_B6_0 = L_11;
			G_B6_1 = L_10;
			goto IL_0039;
		}
		G_B5_0 = L_11;
		G_B5_1 = L_10;
	}
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_15 = ___0_nativeArray;
		int32_t L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_15)->___m_Length);
		G_B7_0 = L_16;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_003a;
	}

IL_0039:
	{
		int32_t L_17 = ___1_size;
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_003a:
	{
		NativeArray_1_Copy_m2341B9BE1AD7D6E4DE9331FE7DA26696CAEF564B(G_B7_2, G_B7_1, G_B7_0, il2cpp_rgctx_method(method->rgctx_data, 6));
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_18 = ___0_nativeArray;
		NativeArray_1_Dispose_m90DD41A5728B49BDF3612A88F7EAD0FA4CA54CB8(L_18, il2cpp_rgctx_method(method->rgctx_data, 7));
	}

IL_0045:
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_19 = ___0_nativeArray;
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE L_20 = V_1;
		*(NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE*)L_19 = L_20;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeAndCopyIfNeeded_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_m2B8AE5126109D7CA0118AC0CE7E47057009348A1_gshared (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	int32_t G_B7_0 = 0;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	{
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m4D570DA91CBE8B607C76214B0CC1FFDEA53B6BC0_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_6 = ___1_size;
		int32_t L_7 = ___2_allocator;
		NativeArray_1__ctor_m93513C6EDC1D0E866B1A942DBBEF71AD3DB100AF((&V_1), L_6, L_7, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_9 = ___0_nativeArray;
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 L_10 = (*(NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1*)L_9);
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 L_11 = V_1;
		int32_t L_12 = ___1_size;
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_13 = ___0_nativeArray;
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_13)->___m_Length);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			G_B6_0 = L_11;
			G_B6_1 = L_10;
			goto IL_0039;
		}
		G_B5_0 = L_11;
		G_B5_1 = L_10;
	}
	{
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_15 = ___0_nativeArray;
		int32_t L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_15)->___m_Length);
		G_B7_0 = L_16;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_003a;
	}

IL_0039:
	{
		int32_t L_17 = ___1_size;
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_003a:
	{
		NativeArray_1_Copy_m887F5C229945D2C15B5E2F2B68C13134554ADF62(G_B7_2, G_B7_1, G_B7_0, il2cpp_rgctx_method(method->rgctx_data, 6));
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_18 = ___0_nativeArray;
		NativeArray_1_Dispose_m848E0576A37CCAA20D87E901721A7AC8F6FA3FCC(L_18, il2cpp_rgctx_method(method->rgctx_data, 7));
	}

IL_0045:
	{
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* L_19 = ___0_nativeArray;
		NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 L_20 = V_1;
		*(NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1*)L_19 = L_20;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeAndCopyIfNeeded_TisIl2CppFullySharedGenericStruct_m712ED765D90F10460CA198F568C5A4BDB9CAB372_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	int32_t G_B7_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_5 = ___1_size;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_6 = ___1_size;
		int32_t L_7 = ___2_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_1), L_6, L_7, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_9);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = V_1;
		int32_t L_12 = ___1_size;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_13 = ___0_nativeArray;
		int32_t L_14;
		L_14 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			G_B6_0 = L_11;
			G_B6_1 = L_10;
			goto IL_0039;
		}
		G_B5_0 = L_11;
		G_B5_1 = L_10;
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_15 = ___0_nativeArray;
		int32_t L_16;
		L_16 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B7_0 = L_16;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_003a;
	}

IL_0039:
	{
		int32_t L_17 = ___1_size;
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_003a:
	{
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(G_B7_2, G_B7_1, G_B7_0, il2cpp_rgctx_method(method->rgctx_data, 6));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_18 = ___0_nativeArray;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 7));
	}

IL_0045:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_19 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_20 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_19 = L_20;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2519F2C5E8AED91F9A1F39B46A302DCECD11FC1C_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = ___0_nativeArray;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = (bool)0;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_8 = ___0_nativeArray;
		int32_t L_9 = ___1_size;
		int32_t L_10 = ___2_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_8 = L_11;
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m0637328CB8ECEF02CF1F4486ED9E831BCCBA899B_gshared (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m913401BF0E81033477B3C5B5C54D91034598CDDD_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_6 = ___0_nativeArray;
		NativeArray_1_Dispose_m90DD41A5728B49BDF3612A88F7EAD0FA4CA54CB8(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = (bool)0;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* L_8 = ___0_nativeArray;
		int32_t L_9 = ___1_size;
		int32_t L_10 = ___2_allocator;
		NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m51860EC1322A2BD1F0FC0CC0BC8698BA446DD923((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE*)L_8 = L_11;
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_TisIl2CppFullySharedGenericStruct_mF82E351B1134C281BA611A45D7E29E3E80EF7C4B_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_5 = ___1_size;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_nativeArray;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = (bool)0;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_nativeArray;
		int32_t L_9 = ___1_size;
		int32_t L_10 = ___2_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_8 = L_11;
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mC9BB614D6336E504DC0674964CC64D53FA69CF14_gshared (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD18D5BAA0DFBD842389B3723A09296444F3B78F2_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* L_6 = ___0_nativeArray;
		NativeArray_1_Dispose_m994685B1A26FB0972542BE1216EBD59B332E880A(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = (bool)0;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* L_8 = ___0_nativeArray;
		int32_t L_9 = ___1_size;
		int32_t L_10 = ___2_allocator;
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_mAADFCCAE72BDF1E1866AD2B3C6BEBB33D426337C((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A*)L_8 = L_11;
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF68CE984C3B3AC410C608E6ADE731540BC7ADAF7_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___1_size;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_6 = ___0_nativeArray;
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = (bool)0;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_8 = ___0_nativeArray;
		int32_t L_9 = ___1_size;
		int32_t L_10 = ___2_allocator;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&L_11), L_9, L_10, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_8 = L_11;
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB0E6C722DFEFFE3B487329BF6927CAE5E1503D89_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mD7CEBD73999042AAC575D52A40749352CD4C0D60_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mDD01532369407B5BA1AC28EFA2E998C47C0AA022_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m5BAB13B68A94FE9DB07E37DFCD48563A5818F8AD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m03078F37E20FFFFFE03EF5A50B44F3CE8348A0E2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mB135EE710ACA6F6850538F7BB53A1667E7CB3F76_gshared (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m117AA5E13A68B1719DD55833C648C2D67C2DE8BC_gshared (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_gshared (NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m62C1DF2ADFC9225AEEE2D68AFD87666094291721_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m3687E938D6A361C1C9500F894455AD0E14BBF0C8_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m736F4DA91F99B096FD7F086054FB31077AB480E0_gshared (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceExtensions_Slice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m55D1C0502E68602CADC5C0CEA2FAAB0EA47ED380_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_thisArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_thisArray;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mB3B087259D57CBD3742B7A6BFE5BD1C0FF0E4A73_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceExtensions_Slice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m243F649E1D63E248DA2A0D10147965B8D41C8DE3_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_thisArray, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeSlice_1__ctor_mD0C60D5A0038A9DA582985ADC92B8B6714A1E8AD((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mAC2337A7622D49D3416C69479705764FAE2B6FA8_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B NativeSliceExtensions_Slice_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m3BE9AFF11F3B0C3092F81D506EB518EF8280E369_gshared (NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 NativeSliceExtensions_Slice_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m67CB4FE693AB4570CB58B357AAB28D0AC4162C93_gshared (NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceExtensions_Slice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFCFE71D2C05399DB0A2F62F87B9F938E78E964B1_gshared (NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_gshared (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 NativeSliceExtensions_Slice_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m6FD1AF82FBEB746F5DED414A4AFF4B8EF1E02277_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 NativeSliceExtensions_Slice_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m919C4D8334B609FB39E9606391641890DA1F60C2_gshared (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mFB1AE1A459E87B8E3C3986EF14F956E30EAF24A3_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_m8604EAC32FCFF874A6AA4097703CF1DA1EFA00DE_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 NativeSliceExtensions_Slice_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m877677D420E575DCBE695DCB60B1AF3FE9C1E81F_gshared (NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 NativeSliceExtensions_Slice_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_mA902AF6CBD285F1A7F631E533330F582E702AEE0_gshared (NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFE6F19196458580AE39F48B36CA1E4FB3E242032_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m209A5CA848B5D71860FF727A488EBB61699F029D_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m633DAEBC11F916CAC6408C5B1B105D222E015213_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF7B7FA019164962E7BF9FDB47A4AB92199BF9DDA_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m997DBC83795B518830731B888AD2A97C3237115D_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m2AB234C1F61762C9891F9CA0954C954BF50AA8A8_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m62F21E65FB80AF955E4998488B792C8D6D0F15AE_gshared (NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9A2B4BB7177667D1A9E3AC345815C6478C6B441_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m6BD8C7B6687079F4D938B1D123852D1B1DB738D2_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m1D5DB0F0A202A5CBC424E412F2371F118D6716B9_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m7130837ADE7AB97C8D108E52DA01A1BDB7E38C9F_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m669D65026ECD6F1A5A38A88C1FAD087034253418_gshared (NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m0363D0A70C0868B740951975373BBE4502FCA03C_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF44527197CB7BA7ACF50A07F98F92E94C04770E7_gshared (NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_mA28ABDFFEBBBE1B3463D9D30DD91C5FD554E2D6E_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2A54AC8EC29C95F1B6C54D461621EC5AED00C842_gshared (NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m9D4BF5EB68F80854A5D189827BA29954C5D8A79F_gshared (NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6587359875DD85AF7B9BD3317FADF46E4DEA3918_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m255EF169635E8E992D7CCBEE82993ADF03EFEB81_gshared (NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m74258394834D8ACF24F195559B5CDEBE8E12FAEA_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m56EEC99856FD511773B66A80826B633FD8BF9FEB_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m46659EC4AFC5B6616D666FC149A4290A40382A8C_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m80388B3784FBE64078CE4E604792B4A98F0DBCE2_gshared (NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m05ACEB0EFCB44495F16F8344F95B7E0279BBAFCD_gshared (NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mC5DC4B3A077F4E0B8F85609318B0BADC9FF47D46_gshared (NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA02C024D486D564B699E82DF81B47C556F78B96C_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m09A026CC0643E2A0214AFF9A3C5DDBF9CBD63024_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m363AC6C6F7FE24031C819DB8047CDC74E077B220_gshared (NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0B676DC51FACE97ED8BDBE80FDEE1D024D852A62_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_mF3128B9DF1FB9E59D3C89E07478F86936C03E2B5_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m2D36E1680EC31E78C2BC8BEC532706B4BA4BAC0C_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mD9AC766A8FD8ADED06FA02A938EBEC9A12432838_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC9D932B1F59928C2C2D4CAFDBEB2FD0BDC46241A_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m200FC821837E1FB5E8B84E4449AEE41953537C91_gshared (NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA89467F62CCE518E9D8EF59DE4A3660B39C573D5 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m8BE452E031BAA5D0737B2D915B3ED0932A4C3492_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mEC1AFAC960FD48CA2A336183B83469047B5B851D_gshared (NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t834036F9BEE3B44BA1A65E51849556E5B7AEAF0A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m3C73B4A268E6EF19731588FC96256341D1482190_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mB2D4E96439C3307C6E4AF42DC7FE8A4B44487921_gshared (NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t896C643D92AC9B70D47A50D65CB166F74009189F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m46EDE79316E525B07A8704AEE91089A5DDEF9D97_gshared (NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tC7AC7DD3A727BCA7CF8B7EBDD6DE68FB33E8D9D2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5294D967B5B293CF1E25BE01849C5C55CEDD0C7E_gshared (NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB3AAF18DA01A2871ABC3A6C17DE5051ABF758556_gshared (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C21A5534F31A98810D38191D4F5511CDF6F7FCD_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mC25AD4D19FDBB9ECF75908D5032323A2F10CA478_gshared (NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1FC9E9FE0BB166305C1E3C50A7E9D588E1D92502 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m2D706533C8AA0A14AB3885C131452DDA2A7FE175_gshared (NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0ADA4C4E7F86D6AC8C977F595CA8C8F00A8197EC L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m9613EACAEFEF791BCEC1B9A0628F48CA5889792F_gshared (NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t14A9CE6361CD2BA1425D4FF7F9C320B32E3F8B63 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m8FB8E5DCE79D10E8CBF71676376F40449AD3EB5F_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m8AFD952643487BBF08BE2CB7CE45BCF3C9652815_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_4 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_6 = ___0_list;
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_7 = ___0_list;
		int32_t L_8;
		L_8 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___1_count;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_11 = ___0_list;
		int32_t L_12 = ___1_count;
		List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0048:
	{
		int32_t L_13 = ___1_count;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_14 = ___0_list;
		int32_t L_15;
		L_15 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** L_17;
		L_17 = UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_18 = *((ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D**)L_17);
		V_4 = L_18;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_19 = V_4;
		int32_t L_20 = ___1_count;
		L_19->____size = L_20;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_21 = V_4;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_22 = L_21;
		int32_t L_23 = L_22->____version;
		L_22->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m28F7CCEFA354ED25B6E156C88890C5D01F5D9B6B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_4 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___0_list;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = ___0_list;
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___1_count;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		int32_t L_12 = ___1_count;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0048:
	{
		int32_t L_13 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_14 = ___0_list;
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** L_17;
		L_17 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_18 = *((ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C**)L_17);
		V_4 = L_18;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_19 = V_4;
		int32_t L_20 = ___1_count;
		L_19->____size = L_20;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_21 = V_4;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_22 = L_21;
		int32_t L_23 = L_22->____version;
		L_22->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* V_0 = NULL;
	bool V_1 = false;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_4 = V_0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NoAllocHelpers_ExtractArrayFromList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4AAC237725FD42066F40BCFA27A194003603208C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* V_0 = NULL;
	bool V_1 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* NoAllocHelpers_ExtractArrayFromList_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m94EB8197B54F97258F5E5D32716FB2C46B6A9BD0_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	bool V_1 = false;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_2 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* V_0 = NULL;
	bool V_1 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_4 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_0 = NULL;
	bool V_1 = false;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_4 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_3;
		L_3 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_2 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3;
		L_3 = ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_6 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = L_6;
		int32_t L_8 = L_7->____version;
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisIl2CppFullySharedGenericAny_mF46DE29CC6CC8E6A7CAA86D0FB91CDDAE4DF29EE_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_1;
		L_1 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		int32_t L_5;
		L_5 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_6 = V_0;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_7 = L_6;
		int32_t L_8 = L_7->____version;
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		int32_t L_1;
		L_1 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_3 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4;
		L_4 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_5 = V_0;
		int32_t L_6 = ___1_size;
		L_5->____size = L_6;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_8 = L_7;
		int32_t L_9 = L_8->____version;
		L_8->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisIl2CppFullySharedGenericStruct_mDDE45120A34583A64D84E8FDC700E61266084864_gshared (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* V_0 = NULL;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_3 = ___0_list;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_4;
		L_4 = ((  ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_5 = V_0;
		int32_t L_6 = ___1_size;
		L_5->____size = L_6;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_7 = V_0;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_8 = L_7;
		int32_t L_9 = L_8->____version;
		L_8->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_1 = ___0_values;
		int32_t L_2;
		L_2 = List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m910F55DA116EEF0221ADFF22689A9842AC46C5FE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___0_values;
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_values;
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = ___0_values;
		int32_t L_2;
		L_2 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mD1DA27D7DEDDDE717B58255E05299BE55E56F095_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindFirstObjectByType_TisRuntimeObject_mC5927319EB5B80095EFBA653D414D6F8AA87DC0A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F(L_1, (int32_t)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindObjectOfType_mCA5E2E9BF64B7203CE8B1ECFCFAA0370606984D4(L_1, (bool)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26(L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		RuntimeObject* L_1 = ___0_original;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_6 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_003e:
	{
		RuntimeObject* L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_rotation;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA394CA588280E4927890676FB2E18D80909B05F3_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mF52C0D18465701E27B2CF0B6A64B025842122BD9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m8AB03480CE50441C2EE915E24FC36FF49311AB26_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mD8F9F62D3F0BFC1368C3A6B26F0E472E5502C7FA_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m6B2055062515332A8330B3257EFDB4887D6021D4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m7AA071BF4FF634076D9EE7FA6B9AE7AE5A65A28E_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mC8496C117806D8E867957A17B97A53B57B40A87A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m1BEFD6F94F5C94EDA0D005A99C98C964B9B1B912_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFE9BE91D601114E259477098EAE7879677828756_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA1777DB79A2A1372D456E86895D9A2AAA7C59A8D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m6701010CE0AE59D323F8F84FA6A579A2CE35CF53_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m859CD9F9709DBD2E03CB29355B0C9C2B08469B4E_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m309B2553946691818BFF63A15C8D21B9E3FA07A1_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m03544BB4EA485F1A33BE31007B4F94ADB5C9A431_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m653C2A2A678F773BC2953D6F9FFDF03F1475B2E7_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m95615FDABAA0BBCA1036F8BD1F3BAF844140765D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRuntimeObject_m94D49D355E334CDD36397BAB547B14945A3DCF6C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, RuntimeObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		RuntimeObject** L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, RuntimeObject**, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		RuntimeObject** L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		RuntimeObject** L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, RuntimeObject**, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			RuntimeObject** L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		RuntimeObject** L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, RuntimeObject**, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			RuntimeObject** L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA7BB80DB28ADB84C1E180CDC2F995BE6C48D69C3_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC7435512D91CB55EDFF2DC84814D602C1E3F8314_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6AE998E2A2414E44DF5A20027B6933A388C3DB2C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mF637FB3B593396B2317F0D3A6C3410DCAE2A8BD4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3EA26E78F7808B1525260D8542CDB1230C757464_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m1A32A7F8799DCAD993E3F1C842E67E080C304D0B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m70EC4F0D01A015CBECA96E482D19AD88909A35AD_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mBECD934FD3E1E9EDC2367DED244DF3F44D5CAB7B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m087A4C698125FFAF67CD6BEB1C897C50D18891ED_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7802CB6BD0332ABDAFBCD002B6083980CF481ECF_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m0A70E62F81EEFA6AEB1FB1859F4D64F5048076AF_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mD1CAAEEAA93627445BC47DF2AFF9321DA3FF3F7A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m82E1163312014F427FA69527D395D1F1B2A16A4B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mC68B89261EA1BB8A1DC4C6A9150A9148B63E7369_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m483FD952658280DFA2D296C9549CA875ED22FF42_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m45E297908E8E8D846B2D7C4958D20500355B0CA7_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3C0CB18CE87403E33C37F6278C5A7038E0C86017_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mF2FFD43AA026A0FD177F43C2A25E890C619D2919_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mA676859F5D9456675642EF987D26EC2C4C414E83_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m62275DD2F8069694D40BA4D6F4C3200D7FEB1EF1_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m9B92F7028C96F990CC5C76746FC6C486E6ED9720_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m487A110E4985E524A1CBD80EDF0EC7724409C0F8_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7EC34B7D12DF0F5320B417C6951CA8EB7353753C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m0E24B89E2F70614D92B3C8565F23D6B12CC5EF47_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m93BA1BAB12267DAB13BB9A99A4920B56AA4E144D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB5359D594E93CA95CF77DB06AAF03392747BD182_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m99F73E835319493D6FCCA0EA552CBD3D831E62F4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAC5B0B2329C8E652BC4D51548546E0EA28D31899_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mE09C9181C89D1B1B8AD102ED803CD10EFF657ADE_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAB864971AC0E9E1928498A48F062AB1FDA74EA10_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_mF1E2CE4C83C60AC29C925BB4548F6186E2FB27EC_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Il2CppFullySharedGenericAny* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Il2CppFullySharedGenericAny* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Il2CppFullySharedGenericAny* L_28 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Il2CppFullySharedGenericAny* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		bool L_34;
		L_34 = InterfaceFuncInvoker3Invoker< bool, Il2CppFullySharedGenericAny*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Il2CppFullySharedGenericAny* L_40 = ___1_container;
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCE1CE49F6C98BA9A1D9720C0503BDF83571C846C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* ___0_property, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_0 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_7 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_23 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mAD42E2A5148440AD1DD60E62D0DE2BBF0F3BD4B9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* ___0_property, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_0 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_7 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_23 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_TisRuntimeObject_mAEF24FC2133CE510A333A4825BA0896808F110D9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* ___0_property, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_0 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_1 = ___1_container;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_7 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_23 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		VirtualActionInvoker2< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m515538C8CC1CF1A23FF50D0CE0FFDF1DD8F470D4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* ___0_property, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_0 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_7 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tB2B25D50A07137613571C599F2D927783128F4B2*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_23 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_TisRuntimeObject_mAADD779C87D46A955DFC4197DD566A6695153258_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* ___0_property, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_0 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_1 = ___1_container;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_7 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t3A3882B37973B3EA0740345179D2BA802B63D8F1* L_23 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		VirtualActionInvoker2< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBD88804F7E1381FA8EEC3563BE240E62C6332F26_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t8803DA217446897A3DBF392B50C90530471C6822* ___0_property, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_0 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_7 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t8803DA217446897A3DBF392B50C90530471C6822*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t8803DA217446897A3DBF392B50C90530471C6822* L_23 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_TisRuntimeObject_m0FBE6B874E92B9EA009F8DC69DF14875F045BB7D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* ___0_property, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_0 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_1 = ___1_container;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_7 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t2FA5B5A3675ACA9460A6257B5D39B17A5914678A* L_23 = ___0_property;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		VirtualActionInvoker2< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFA8880BDD0E25A04ECD1D3CB5958E91BA745BE38_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* ___0_property, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_0 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_7 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t4E33E1A44112BD97BF885B076D0ED05EBFEA7151* L_23 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC222F74AFAF1B7F4A10598B8F946FC9FF61E13C4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* ___0_property, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_0 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_1 = ___1_container;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_7 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tF274BD13981F14C9234EED2454BA5879F339129A*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, float* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_12;
		L_12 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		float L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tF274BD13981F14C9234EED2454BA5879F339129A* L_23 = ___0_property;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_24 = ___1_container;
		float L_25 = V_0;
		VirtualActionInvoker2< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, float >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_TisRuntimeObject_m7A716CD5A54899FA727CC3334E65DA5C30F1AC65_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* ___0_property, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_0 = ___0_property;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_1 = ___1_container;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_7 = ___0_property;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tB233FB6210DC9A81615A50C4D0F1EDD5311659D5* L_23 = ___0_property;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		VirtualActionInvoker2< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4C5B4BC6A5CA84D80B0629BF2053BC433066398C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* ___0_property, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_0 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_7 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tF3DBFBA52C0693C56E321796F1577A44F0C39B1B* L_23 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mCDA2FB5D9C03550A65CF5CC360ED506EAB179995_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tA37B381C421869CA10862B372913EA34498BC042* ___0_property, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_0 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_1 = ___1_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_2;
		L_2 = VirtualFuncInvoker1< Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_7 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tA37B381C421869CA10862B372913EA34498BC042*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_12;
		L_12 = EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tA37B381C421869CA10862B372913EA34498BC042* L_23 = ___0_property;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_24 = ___1_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_25 = V_0;
		VirtualActionInvoker2< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94BCF65F19F5B4FA02710792899773D37FE0B260_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C* ___0_property, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C* L_0 = ___0_property;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C* L_7 = ___0_property;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tBCD7288FCFAF426BE5EA009B8141ED1A958BA96C* L_23 = ___0_property;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8240375236978F8A36C07A274E35136BD1880C55_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8* ___0_property, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8* L_0 = ___0_property;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8* L_7 = ___0_property;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t34CA9C67F7274CB88428DB9890EBAF2C83A001F8* L_23 = ___0_property;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mAFDB97B38130CD77E3D230954E3821883411162A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3* ___0_property, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3* L_0 = ___0_property;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_1 = ___1_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_2;
		L_2 = VirtualFuncInvoker1< Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3* L_7 = ___0_property;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m7A9EA143096E3C18C2DD2EDEF28A519CA4A73802((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_12;
		L_12 = EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m991F23402D966D410BBC89F0A2AD615D3CEC81D6((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tDB15A9759A50AC5BCE430DC9B5027503FC0061F3* L_23 = ___0_property;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_24 = ___1_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_25 = V_0;
		VirtualActionInvoker2< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF3E6B480FF2A8E91FA87EC968456376B71B10EC5_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* ___0_property, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* L_0 = ___0_property;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1 = ___1_container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* L_7 = ___0_property;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8185EF3DBA50BC42DD9BCB9826646D6689183D1C((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_12;
		L_12 = EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4DCEBE7789AD6A24A8A0AD76201492EA755F643B((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* L_23 = ___0_property;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_24 = ___1_container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		VirtualActionInvoker2< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mE3DD24F14575BEC0F0BDCBA74C79277ABADEB2F0_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* ___0_property, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* L_0 = ___0_property;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_1 = ___1_container;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
		L_2 = VirtualFuncInvoker1< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* L_7 = ___0_property;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m6A8FDA3753DC8ED53AA4E674493AD821DDCA783C((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_12;
		L_12 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m7ED2552B2069FDBB4735B831CFADAB904AE08D8E((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* L_23 = ___0_property;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_24 = ___1_container;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_25 = V_0;
		VirtualActionInvoker2< BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDBB5BB920BCDAEDF795F325A986FF777F341293C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* ___0_property, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* L_0 = ___0_property;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = ___1_container;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* L_7 = ___0_property;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, float* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m639CE2C899C469A55ECC66D6793B590C5EBE3E42((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_12;
		L_12 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		float L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA7E97E817C5D3F92B56F729FE44CBC11EFEA02EE((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* L_23 = ___0_property;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_24 = ___1_container;
		float L_25 = V_0;
		VirtualActionInvoker2< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, float >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8D3D50340E6EE0DDC1EF25C3D870366EB967EB17_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE* ___0_property, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE* L_0 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_1 = ___1_container;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE* L_7 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m39A36549308D9D5C19498C2146CFE53CE99DA3FC((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_12;
		L_12 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD5D8197C711F0C773E9A76A2EB64004F163AA61C((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tD35F4FABA65142FD5DEAE8767695321F16F52FBE* L_23 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_24 = ___1_container;
		int32_t L_25 = V_0;
		VirtualActionInvoker2< Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_TisRuntimeObject_m2CF900E04FB7AAEB4C5018AAF7E2552FEE44D89C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645* ___0_property, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645* L_0 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_1 = ___1_container;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645* L_7 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tDD9A3FDE2A43FA66DDFDFCAFBDD1F932409CC645* L_23 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		VirtualActionInvoker2< Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mDD6C8A94B2C449C867AF8194A992F7F7155A2530_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119* ___0_property, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119* L_0 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_1 = ___1_container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119* L_7 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m67729B3186B7559E74A776C3973D01A2BB633B43((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_12;
		L_12 = EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_6;
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5D9D34A972B3C320E06C9E9EC6E4F04B2E583669((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119* L_19 = ___0_property;
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t6CA80A54CF944EBC91765ECEA6106931E3683119* L_23 = ___0_property;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_24 = ___1_container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		VirtualActionInvoker2< Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Kind;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReadonlyVisitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m24A28014049FCB605E5EA7A2F044DB0445776F25_gshared_inline (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m913401BF0E81033477B3C5B5C54D91034598CDDD_gshared_inline (NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4D570DA91CBE8B607C76214B0CC1FFDEA53B6BC0_gshared_inline (NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD18D5BAA0DFBD842389B3723A09296444F3B78F2_gshared_inline (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_gshared_inline (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject** UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline (RuntimeObject** ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_from;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_0 = NULL;
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* EqualityComparer_1_get_Default_mFF0B648FC824123BF138D79F2FCF183B2F7A57B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* V_0 = NULL;
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_0 = ((EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE5BC74FD18313E1237342B0626EB109CDF69CE26(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B724228B7FB3FDB4FA0E3B3197F3E836025C852* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m483FA59577B89A7210F233A7EA408B41FD9723BD_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* V_0 = NULL;
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_0 = ((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD80D3A5E3EBEA503B228255B59012C64EAC0968C_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* V_0 = NULL;
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_0 = ((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m81BDFE95146A69F74EE7C1A8E7AF5B5700CF0BB3_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* V_0 = NULL;
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_0 = ((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_4 = V_0;
		return L_4;
	}
}
