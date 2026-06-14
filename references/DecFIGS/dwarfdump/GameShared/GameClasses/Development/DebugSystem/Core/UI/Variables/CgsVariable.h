// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct VariableMetadata {
			// CgsVariable.h:55
			enum Type {
				E_TYPE_MIN = 0,
				E_TYPE_MAX = 1,
				E_TYPE_STEP = 2,
				E_TYPE_READONLY = 3,
				E_TYPE_SAVEENABLED = 4,
				E_TYPE_VISIBLE = 5,
				E_TYPE_STRINGLIST = 6,
				E_TYPE_CHANGE_CALLBACK = 7,
				E_TYPE_CHANGE_CALLBACK_PARAM = 8,
				E_TYPE_SELECT_CALLBACK = 9,
				E_TYPE_SELECT_CALLBACK_PARAM = 10,
				E_TYPE_COUNT = 11,
			}

		}

	}

}

// CgsVariable.h:51
struct CgsDev::DebugUI::VariableMetadata {
private:
	// CgsVariable.h:77
	CgsDev::DebugUI::Variant::UValue mValue;

	// CgsVariable.h:78
	CgsDev::DebugUI::VariableMetadata::Type meType;

	// CgsVariable.h:79
	VariableMetadata * mpNextMetadata;

public:
	// CgsVariable.h:73
	bool Prepare(const Variant &, CgsDev::DebugUI::VariableMetadata::Type);

}

// CgsVariable.h:94
struct CgsDev::DebugUI::Variable {
private:
	// CgsVariable.h:177
	Variant mVariant;

	// CgsVariable.h:178
	const char * mpcName;

	// CgsVariable.h:179
	VariableMetadata * mpMetadata;

public:
	// CgsVariable.h:98
	bool Prepare(const Variant &, const char *);

	// CgsVariable.h:101
	void Release();

	// CgsVariable.h:104
	bool Prepare(float32_t, const char *);

	// CgsVariable.h:106
	bool Prepare(int32_t, const char *);

	// CgsVariable.h:108
	bool Prepare(uint32_t, const char *);

	// CgsVariable.h:110
	bool Prepare(bool, const char *);

	// CgsVariable.h:113
	bool Prepare(float32_t *, const char *);

	// CgsVariable.h:115
	bool Prepare(int32_t *, const char *);

	// CgsVariable.h:117
	bool Prepare(uint32_t *, const char *);

	// CgsVariable.h:119
	bool Prepare(bool *, const char *);

	// CgsVariable.h:125
	Variant & GetValue();

	// CgsVariable.h:128
	const char * GetName() const;

	// CgsVariable.h:131
	void GetDisplayString(char *);

	// CgsVariable.h:134
	void GetValueAsString(char *, int);

	// CgsVariable.h:137
	void SetValueFromString(const char *);

	// CgsVariable.h:139
	float32_t GetValueAsFloat() const;

	// CgsVariable.h:140
	float32_t GetMinAsFloat(float32_t) const;

	// CgsVariable.h:141
	float32_t GetMaxAsFloat(float32_t) const;

	// CgsVariable.h:145
	void Decrement();

	// CgsVariable.h:148
	void Increment();

	// CgsVariable.h:151
	void Select();

	// CgsVariable.h:154
	bool IsReadOnly();

	// CgsVariable.h:157
	bool IsSaveEnabled();

	// CgsVariable.h:160
	bool IsVisible();

	// CgsVariable.h:163
	const CgsDev::DebugUI::StringList * GetStringList();

	// CgsVariable.h:166
	void AddMetadata(VariableMetadata *);

	// CgsVariable.h:167
	void RemoveMetadata(VariableMetadata *);

	// CgsVariable.h:170
	VariableMetadata * FindMetadata(CgsDev::DebugUI::VariableMetadata::Type) const;

private:
	// CgsVariable.h:174
	void OnChange();

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct VariableMetadata {
			// CgsVariable.h:55
			enum Type {
				E_TYPE_MIN = 0,
				E_TYPE_MAX = 1,
				E_TYPE_STEP = 2,
				E_TYPE_READONLY = 3,
				E_TYPE_SAVEENABLED = 4,
				E_TYPE_VISIBLE = 5,
				E_TYPE_STRINGLIST = 6,
				E_TYPE_CHANGE_CALLBACK = 7,
				E_TYPE_CHANGE_CALLBACK_PARAM = 8,
				E_TYPE_SELECT_CALLBACK = 9,
				E_TYPE_SELECT_CALLBACK_PARAM = 10,
				E_TYPE_COUNT = 11,
			}

		}

	}

}

