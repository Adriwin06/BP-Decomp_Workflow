// CgsDebugComponent.h:61
void CgsDev::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugComponent.h:61
struct CgsDev::DebugComponent : public DebugInternal {
	int (*)(...) * _vptr.DebugComponent;

private:
	// CgsDebugComponent.h:173
	bool mbActive;

	// CgsDebugComponent.h:174
	CgsDev::DebugComponent * mpDebugLinkedListNext;

public:
	void DebugComponent();

	void DebugComponent(const CgsDev::DebugComponent &);

	// CgsDebugComponent.cpp:51
	void Construct();

	// CgsDebugComponent.cpp:65
	virtual void Update();

	// CgsDebugComponent.cpp:79
	void Destruct();

	// CgsDebugComponent.cpp:224
	void Register();

	// CgsDebugComponent.cpp:95
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// CgsDebugComponent.cpp:111
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponent.h:192
	bool IsActive() const;

	// CgsDebugComponent.cpp:316
	void RegisterVariable(float32_t *, const char *, const char *);

	// CgsDebugComponent.cpp:322
	void RegisterVariable(int32_t *, const char *, const char *);

	// CgsDebugComponent.cpp:328
	void RegisterVariable(uint32_t *, const char *, const char *);

	// CgsDebugComponent.cpp:334
	void RegisterVariable(bool *, const char *, const char *);

	// CgsDebugComponent.cpp:340
	void RegisterVariable(float32_t *, const char *);

	// CgsDebugComponent.cpp:346
	void RegisterVariable(int32_t *, const char *);

	// CgsDebugComponent.cpp:350
	void RegisterVariable(uint32_t *, const char *);

	// CgsDebugComponent.cpp:354
	void RegisterVariable(bool *, const char *);

	// CgsDebugComponent.cpp:368
	void SetRange(float32_t *, float32_t, float32_t);

	// CgsDebugComponent.cpp:372
	void SetRange(int32_t *, int32_t, int32_t);

	// CgsDebugComponent.cpp:376
	void SetRange(uint32_t *, uint32_t, uint32_t);

	// CgsDebugComponent.cpp:389
	void SetStep(float32_t *, float32_t);

	// CgsDebugComponent.cpp:393
	void SetStep(int32_t *, int32_t);

	// CgsDebugComponent.cpp:397
	void SetStep(uint32_t *, uint32_t);

	// CgsDebugComponent.cpp:410
	void SetReadOnly(void *, bool);

	// CgsDebugComponent.cpp:424
	void SetSaveEnabled(void *, bool);

	// CgsDebugComponent.cpp:437
	void SetVisible(void *, bool);

	// CgsDebugComponent.cpp:449
	void SetCustomMenuItem(void *, CgsDev::DebugUI::MenuItemVariable *);

	// CgsDebugComponent.cpp:462
	void SetOptions(int32_t *, const CgsDev::DebugUI::StringList *);

	// CgsDebugComponent.cpp:475
	void SetChangeCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsDebugComponent.cpp:489
	void SetSelectCallback(void *, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction, void *);

	// CgsDebugComponent.cpp:501
	void SetVariableName(void *, const char *);

	// CgsDebugComponent.cpp:515
	void UnregisterVariable(void *);

	// CgsDebugComponent.cpp:529
	void RegisterFunction(Function::DebugCallbackFunction, void *, const char *, const char *);

	// CgsDebugComponent.cpp:535
	void RegisterFunction(Function::DebugCallbackFunction, void *, const char *);

	// CgsDebugComponent.cpp:549
	void UnregisterFunction(Function::DebugCallbackFunction, void *);

	// CgsDebugComponent.cpp:562
	void SetFunctionName(Function::DebugCallbackFunction, void *, const char *);

	// CgsDebugComponent.cpp:576
	void AddMenuItem(const char *, CgsDev::DebugUI::MenuItem *);

	// CgsDebugComponent.cpp:582
	void AddMenuItem(CgsDev::DebugUI::MenuItem *);

	// CgsDebugComponent.cpp:598
	void RemoveMenuItem(CgsDev::DebugUI::MenuItem *);

	// CgsDebugComponent.cpp:258
	void GetComponentPath(char *, int32_t) const;

protected:
	// CgsDebugComponent.h:140
	virtual const char * GetName() const;

	// CgsDebugComponent.cpp:208
	virtual const char * GetPath() const;

	// CgsDebugComponent.cpp:191
	virtual bool IsSimple() const;

	// CgsDebugComponent.cpp:126
	virtual void OnActivate();

	// CgsDebugComponent.cpp:140
	virtual void OnRegister();

	// CgsDebugComponent.cpp:284
	void MakeFullPath(char *, int32_t, const char *);

private:
	// CgsDebugComponent.cpp:155
	void DebugUISectionCallback(void *);

}

