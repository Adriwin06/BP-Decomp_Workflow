// CgsVariableManager.h:57
struct CgsDev::DebugUI::VariableManager : public DebugInternal {
private:
	// CgsVariableManager.h:124
	DebugStaticPool<CgsDev::DebugUI::Variable> mVariablePool;

	// CgsVariableManager.h:125
	DebugStaticPool<CgsDev::DebugUI::MenuItemVariable> mMenuItemPool;

	// CgsVariableManager.h:126
	DebugStaticPool<CgsDev::DebugUI::VariableMetadata> mMetadataPool;

public:
	// CgsVariableManager.h:62
	void Construct(const DebugManagerConstructParameters *);

	// CgsVariableManager.h:65
	void Destruct();

	// CgsVariableManager.h:69
	void RegisterVariable(float32_t *, const char *, const char *);

	// CgsVariableManager.h:70
	void RegisterVariable(int32_t *, const char *, const char *);

	// CgsVariableManager.h:71
	void RegisterVariable(uint32_t *, const char *, const char *);

	// CgsVariableManager.h:72
	void RegisterVariable(bool *, const char *, const char *);

	// CgsVariableManager.h:74
	void SetRange(float32_t *, float32_t, float32_t);

	// CgsVariableManager.h:75
	void SetRange(int32_t *, int32_t, int32_t);

	// CgsVariableManager.h:76
	void SetRange(uint32_t *, uint32_t, uint32_t);

	// CgsVariableManager.h:77
	void SetStep(float32_t *, float32_t);

	// CgsVariableManager.h:78
	void SetStep(int32_t *, int32_t);

	// CgsVariableManager.h:79
	void SetStep(uint32_t *, uint32_t);

	// CgsVariableManager.h:81
	void SetReadOnly(void *, bool);

	// CgsVariableManager.h:82
	void SetSaveEnabled(void *, bool);

	// CgsVariableManager.h:83
	void SetVisible(void *, bool);

	// CgsVariableManager.h:84
	void SetCustomMenuItem(void *, CgsDev::DebugUI::MenuItemVariable *);

	// CgsVariableManager.h:85
	void SetOptions(int32_t *, const CgsDev::DebugUI::StringList *);

	// CgsVariableManager.h:86
	void SetChangeCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsVariableManager.h:87
	void SetSelectCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsVariableManager.h:88
	void SetVariableName(void *, const char *);

	// CgsVariableManager.h:93
	void UnregisterVariable(void *);

private:
	// CgsVariableManager.h:102
	Variable * FindVariable(void *);

	// CgsVariableManager.h:105
	CgsDev::DebugUI::MenuItemVariable * FindMenuItem(Variable *);

	// CgsVariableManager.h:108
	Variable * FindVariableFromPath(const char *);

	// CgsVariableManager.h:110
	void RegisterVariable(const Variant &, const char *, const char *);

	// CgsVariableManager.h:111
	void SetRange(void *, const Variant &, const Variant &);

	// CgsVariableManager.h:112
	void SetStep(void *, const Variant &);

	// CgsVariableManager.h:115
	VariableMetadata * SetMetadata(Variable *, const Variant &, CgsDev::DebugUI::VariableMetadata::Type);

	// CgsVariableManager.h:118
	void RemoveMetadata(Variable *, CgsDev::DebugUI::VariableMetadata::Type);

	// CgsVariableManager.h:121
	void RecycleMetadata(VariableMetadata *);

}

// CgsVariableManager.h:57
struct CgsDev::DebugUI::VariableManager : public DebugInternal {
private:
	// CgsVariableManager.h:124
	DebugStaticPool<CgsDev::DebugUI::Variable> mVariablePool;

	// CgsVariableManager.h:125
	DebugStaticPool<CgsDev::DebugUI::MenuItemVariable> mMenuItemPool;

	// CgsVariableManager.h:126
	DebugStaticPool<CgsDev::DebugUI::VariableMetadata> mMetadataPool;

public:
	// CgsVariableManager.h:62
	void Construct(const DebugManagerConstructParameters *);

	// CgsVariableManager.h:65
	void Destruct();

	// CgsVariableManager.h:69
	void RegisterVariable(float32_t *, const char *, const char *);

	// CgsVariableManager.h:70
	void RegisterVariable(int32_t *, const char *, const char *);

	// CgsVariableManager.h:71
	void RegisterVariable(uint32_t *, const char *, const char *);

	// CgsVariableManager.h:72
	void RegisterVariable(bool *, const char *, const char *);

	// CgsVariableManager.h:74
	void SetRange(float32_t *, float32_t, float32_t);

	// CgsVariableManager.h:75
	void SetRange(int32_t *, int32_t, int32_t);

	// CgsVariableManager.h:76
	void SetRange(uint32_t *, uint32_t, uint32_t);

	// CgsVariableManager.h:77
	void SetStep(float32_t *, float32_t);

	// CgsVariableManager.h:78
	void SetStep(int32_t *, int32_t);

	// CgsVariableManager.h:79
	void SetStep(uint32_t *, uint32_t);

	// CgsVariableManager.h:81
	void SetReadOnly(void *, bool);

	// CgsVariableManager.h:82
	void SetSaveEnabled(void *, bool);

	// CgsVariableManager.h:83
	void SetVisible(void *, bool);

	// CgsVariableManager.h:84
	void SetCustomMenuItem(void *, CgsDev::DebugUI::MenuItemVariable *);

	// CgsVariableManager.h:85
	void SetOptions(int32_t *, const CgsDev::DebugUI::StringList *);

	// CgsVariableManager.h:86
	void SetChangeCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsVariableManager.h:87
	void SetSelectCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsVariableManager.h:88
	void SetVariableName(void *, const char *);

	// CgsVariableManager.h:93
	void UnregisterVariable(void *);

private:
	// CgsVariableManager.h:102
	Variable * FindVariable(void *);

	// CgsVariableManager.h:105
	CgsDev::DebugUI::MenuItemVariable * FindMenuItem(Variable *);

	// CgsVariableManager.h:108
	Variable * FindVariableFromPath(const char *);

	// CgsVariableManager.h:110
	// Declaration
	void RegisterVariable(const Variant &, const char *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVariableManager.cpp:594
		using namespace Message;

		// CgsVariableManager.cpp:602
		using namespace Message;

	}

	// CgsVariableManager.h:111
	void SetRange(void *, const Variant &, const Variant &);

	// CgsVariableManager.h:112
	void SetStep(void *, const Variant &);

	// CgsVariableManager.h:115
	VariableMetadata * SetMetadata(Variable *, const Variant &, CgsDev::DebugUI::VariableMetadata::Type);

	// CgsVariableManager.h:118
	void RemoveMetadata(Variable *, CgsDev::DebugUI::VariableMetadata::Type);

	// CgsVariableManager.h:121
	void RecycleMetadata(VariableMetadata *);

}

