// CgsVariableManager.cpp:86
void CgsDev::DebugUI::VariableManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVariableManager.cpp:674
void CgsDev::DebugUI::VariableManager::FindVariable(void *  lpValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:677
		int32_t liIndex;

		Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::GetActiveAt(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::GetActiveCount(/* parameters */);
	}
}

// CgsVariableManager.cpp:545
void CgsDev::DebugUI::VariableManager::SetVariableName(void *  lpValue, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:548
		Variable * lpVariable;

	}
}

// CgsVariableManager.cpp:704
void CgsDev::DebugUI::VariableManager::FindMenuItem(Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:707
		int32_t liIndex;

		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetActiveAt(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetActiveCount(/* parameters */);
	}
}

// CgsVariableManager.cpp:568
void CgsDev::DebugUI::VariableManager::RecycleMetadata(VariableMetadata *  lpMetadata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Free(/* parameters */);
}

// CgsVariableManager.cpp:461
void CgsDev::DebugUI::VariableManager::RemoveMetadata(Variable *  lpVariable, CgsDev::DebugUI::VariableMetadata::Type  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:464
		VariableMetadata * lpMetadata;

	}
}

// CgsVariableManager.cpp:418
void CgsDev::DebugUI::VariableManager::SetMetadata(Variable *  lpVariable, const const Variant &  lValue, CgsDev::DebugUI::VariableMetadata::Type  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:420
		VariableMetadata * lpMetadata;

	}
	Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Allocate(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::GetFree(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Add(/* parameters */);
	VariableMetadata::Prepare(/* parameters */);
}

// CgsVariableManager.cpp:359
void CgsDev::DebugUI::VariableManager::SetSelectCallback(void *  lpValue, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction  lpSelectCallbackFunction, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:362
		Variable * lpVariable;

		{
			// CgsVariableManager.cpp:377
			Variant lCallbackVariant;

			// CgsVariableManager.cpp:378
			Variant lUserDataVariant;

			// CgsVariableManager.cpp:382
			VariableMetadata * lpMetadataCallback;

		}
		Variant::Variant(/* parameters */);
		Variant::SetVoidPointerType(/* parameters */);
		{
			// CgsVariableManager.cpp:392
			VariableMetadata * lpMetadataParam;

		}
	}
}

// CgsVariableManager.cpp:302
void CgsDev::DebugUI::VariableManager::SetChangeCallback(void *  lpValue, CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction  lpChangeCallbackFunction, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:305
		Variable * lpVariable;

		{
			// CgsVariableManager.cpp:320
			Variant lCallbackVariant;

			// CgsVariableManager.cpp:321
			Variant lUserDataVariant;

			// CgsVariableManager.cpp:325
			VariableMetadata * lpMetadataCallback;

		}
		Variant::Variant(/* parameters */);
		Variant::SetVoidPointerType(/* parameters */);
		{
			// CgsVariableManager.cpp:335
			VariableMetadata * lpMetadataParam;

		}
	}
}

// CgsVariableManager.cpp:267
void CgsDev::DebugUI::VariableManager::SetOptions(int32_t *  lpiValue, const CgsDev::DebugUI::StringList *  lpOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:270
		Variable * lpVariable;

		{
			// CgsVariableManager.cpp:280
			Variant lOptions;

		}
		Variant::Variant(/* parameters */);
	}
}

// CgsVariableManager.cpp:230
void CgsDev::DebugUI::VariableManager::SetVisible(void *  lpValue, bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:233
		Variable * lpVariable;

		{
			// CgsVariableManager.cpp:248
			Variant lVisible;

		}
		Variant::Variant(/* parameters */);
	}
}

// CgsVariableManager.cpp:195
void CgsDev::DebugUI::VariableManager::SetSaveEnabled(void *  lpValue, bool  lbSaveEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:198
		Variable * lpVariable;

		{
			// CgsVariableManager.cpp:213
			Variant lSaveEnabled;

		}
		Variant::Variant(/* parameters */);
	}
}

// CgsVariableManager.cpp:160
void CgsDev::DebugUI::VariableManager::SetReadOnly(void *  lpValue, bool  lbReadOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:163
		Variable * lpVariable;

		{
			// CgsVariableManager.cpp:173
			Variant lReadOnly;

		}
	}
	Variant::Variant(/* parameters */);
}

// CgsVariableManager.cpp:133
void CgsDev::DebugUI::VariableManager::SetStep(void *  lpValue, const const Variant &  lStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:136
		Variable * lpVariable;

	}
}

// CgsVariableManager.cpp:104
void CgsDev::DebugUI::VariableManager::SetRange(void *  lpValue, const const Variant &  lMin, const const Variant &  lMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:107
		Variable * lpVariable;

	}
}

// CgsVariableManager.cpp:60
void CgsDev::DebugUI::VariableManager::Construct(const DebugManagerConstructParameters *  lpConstructParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Construct(/* parameters */);
	operator new [](/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Variable(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Variable>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	MenuItemVariable::MenuItemVariable(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata>::Clear(/* parameters */);
}

// CgsVariableManager.cpp:587
void CgsDev::DebugUI::VariableManager::RegisterVariable(const const Variant &  lVariant, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:590
		CgsDev::DebugUI::Menu * lpMenu;

		// CgsVariableManager.cpp:599
		Variable * lpVariable;

		// CgsVariableManager.cpp:608
		CgsDev::DebugUI::MenuItemVariable * lpMenuItem;

		Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Allocate(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Allocate(/* parameters */);
	}
	StrStreamBase::operator<<(/* parameters */);
	StrStreamBase::operator<<(/* parameters */);
}

// CgsVariableManager.cpp:487
void CgsDev::DebugUI::VariableManager::SetCustomMenuItem(void *  lpValue, CgsDev::DebugUI::MenuItemVariable *  lpCustomMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:490
		Variable * lpVariable;

		// CgsVariableManager.cpp:497
		CgsDev::DebugUI::MenuItemVariable * lpCurrentMenuItem;

		// CgsVariableManager.cpp:501
		CgsDev::DebugUI::Menu * lpMenu;

		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::IsFromPool(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Free(/* parameters */);
	}
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::IsFromPool(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Allocate(/* parameters */);
}

// CgsVariableManager.cpp:628
void CgsDev::DebugUI::VariableManager::UnregisterVariable(void *  lpValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:631
		Variable * lpVariable;

		// CgsVariableManager.cpp:646
		CgsDev::DebugUI::MenuItemVariable * lpMenuItem;

		{
			// CgsVariableManager.cpp:640
			VariableMetadata * lpMetadata;

		}
		Internal::DebugStaticPool<CgsDev::DebugUI::Variable>::Free(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::IsFromPool(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::Free(/* parameters */);
	}
}

// CgsVariableManager.cpp:735
void CgsDev::DebugUI::VariableManager::FindVariableFromPath(const char *  lpcPathAndName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableManager.cpp:744
		char[512] lacOtherPathAndName;

		// CgsVariableManager.cpp:745
		int32_t liIndex;

	}
	{
		// CgsVariableManager.cpp:749
		CgsDev::DebugUI::MenuItemVariable * lpMenuItem;

		// CgsVariableManager.cpp:758
		char * lpcCompare;

		CgsCore::StrCat(/* parameters */);
		Variable::GetName(/* parameters */);
		CgsCore::StrCat(/* parameters */);
	}
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>::GetActiveAt(/* parameters */);
	MenuItemVariable::GetVariable(/* parameters */);
}

