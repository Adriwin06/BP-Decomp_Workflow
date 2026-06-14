// AptValue.h:40
enum AptVirtualFunctionTable_Indices {
	AptVFT_xxx = 0,
	AptVFT_StringValue = 1,
	AptVFT_Property = 2,
	AptVFT_None = 3,
	AptVFT_Register = 4,
	AptVFT_Boolean = 5,
	AptVFT_Float = 6,
	AptVFT_Integer = 7,
	AptVFT_Lookup = 8,
	AptVFT_NativeFunction = 9,
	AptVFT_FrameStack = 10,
	AptVFT_Extern = 11,
	AptVFT_CharacterInstHandle = 12,
	AptVFT_Sound = 13,
	AptVFT_Array = 14,
	AptVFT_Math = 15,
	AptVFT_Key = 16,
	AptVFT_Global = 17,
	AptVFT_ScriptColour = 18,
	AptVFT_Object = 19,
	AptVFT_Prototype = 20,
	AptVFT_Date = 21,
	AptVFT_MovieClip = 22,
	AptVFT_Mouse = 23,
	AptVFT_XmlNode = 24,
	AptVFT_Xml = 25,
	AptVFT_XmlAttributes = 26,
	AptVFT_LoadVars = 27,
	AptVFT_TextFormat = 28,
	AptVFT_Extension = 29,
	AptVFT_GlobalExtension = 30,
	AptVFT_Stage = 31,
	AptVFT_Error = 32,
	AptVFT_StringObject = 33,
	AptVFT_ScriptFunction1 = 34,
	AptVFT_ScriptFunction2 = 35,
	AptVFT_ScriptFunctionByteCodeBlock = 36,
	AptVFT_CIHNone = 37,
	AptVFT_NumVFTs = 38,
}

// AptValue.h:630
struct AptValueGC : public AptValue {
public:
	AptValueGC(const AptValueGC &);

protected:
	// AptValue.h:635
	AptValueGC(AptVirtualFunctionTable_Indices);

	// AptValue.h:639
	AptValueGC(AptVirtualFunctionTable_Indices, AptValue::CIH_ONLY);

	// AptValue.h:643
	virtual bool IsGarbageCollected() const;

	// AptValue.h:650
	void VerifyAptValueGC();

public:
	virtual ~AptValueGC();

}

// AptValue.h:554
extern const uint32_t MAX_REFCOUNT = 4095;

