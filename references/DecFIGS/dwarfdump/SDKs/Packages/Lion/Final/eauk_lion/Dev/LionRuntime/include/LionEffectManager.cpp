// LionEffectManager.cpp:58
void cLionEffectManager::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionEffectManager.cpp:238
void cLionEffectManager::EffectDestroySafe(cLionEffectInstance *  apEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionEffectInstance::SetFlag(/* parameters */);
}

// LionEffectManager.cpp:278
void cLionEffectManager::Update(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionEffectManager.cpp:349
void cLionEffectManager::Render(const const cTime &  aTime, const U32  aRenderGroupStart, const U32  aRenderGroupEnd, const U32  aWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionEffectManager.cpp:41
void cLionEffectManager::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator, const U32  aEffectCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionEffectManager.cpp:370
void cLionEffectManager::GetEffectLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionEffectManager.cpp:91
void cLionEffectManager::EffectDefinitionDestroy(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionEffectManager.cpp:70
void cLionEffectManager::EffectDefinitionCreate(const LionChar *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:72
		cLionEffectDefinition * lpDef;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionEffectManager.cpp:252
void cLionEffectManager::EffectDefinitionClone(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:254
		cLionEffectDefinition * lpDef;

	}
	cLionEffectDefinition::SetParticles(/* parameters */);
}

// LionEffectManager.cpp:283
void cLionEffectManager::FindAllEffectNames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:287
		cLionEffectInstance * lpEffect;

		// LionEffectManager.cpp:289
		U32 lnEffectCount;

	}
	{
		// LionEffectManager.cpp:297
		const LionChar * lpcEffectName;

		// LionEffectManager.cpp:302
		char[32] lacCharName;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// LionEffectManager.cpp:168
void cLionEffectManager::EffectCreate(cLionEffectDefinition *  apDef, cParticleLocator *  apLoc, cParticleScaler *  apScaler, cParticleTrigger *  apTrig, const U32  aWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:170
		cLionEffectInstance * p_instance;

	}
	{
		// LionEffectManager.cpp:182
		const cLionBindings & bindings;

		cLionEffectInstance::GetBindings(/* parameters */);
	}
	cLionEffectInstance::Init(/* parameters */);
	cLionBindings::SetpLocator(/* parameters */);
	cLionBindings::SetpScaler(/* parameters */);
	cLionBindings::SetpTrigger(/* parameters */);
	cLionBindings::SetWorldIndex(/* parameters */);
	cLionEffectInstance::SetpEffectDefinition(/* parameters */);
	cLionEffectDefinition::GetBindings(/* parameters */);
}

// LionEffectManager.cpp:134
void cLionEffectManager::EffectDefinitionStart(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:136
		cLionEffectInstance * lpEff;

	}
	{
		// LionEffectManager.cpp:144
		const cLionEffectDefinition * p_definition;

		cLionEffectInstance::GetEffectDefinition(/* parameters */);
	}
}

// LionEffectManager.cpp:207
void cLionEffectManager::EffectDestroy(cLionEffectInstance *  apEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:218
		cLionEffectDefinition * lpDef;

		cLionEffectInstance::GetBindings(/* parameters */);
		{
			// LionEffectManager.cpp:222
			cLionBindings * lpItem;

			// LionEffectManager.cpp:222
			cLionBindings ** lppLast;

			cLionEffectDefinition::GetBindings(/* parameters */);
		}
		{
			// LionEffectManager.cpp:231
			cLionEffectInstance * lpItem;

			// LionEffectManager.cpp:231
			cLionEffectInstance ** lppLast;

			cLionEffectInstance::GetpNext(/* parameters */);
		}
	}
}

// LionEffectManager.cpp:319
void cLionEffectManager::GarbageCollect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:322
		cLionEffectInstance * lpEffect;

		{
			// LionEffectManager.cpp:329
			cLionEffectInstance * lpNext;

		}
	}
}

// LionEffectManager.cpp:107
void cLionEffectManager::EffectDefinitionStop(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionEffectManager.cpp:109
		cLionEffectInstance * lpEff;

	}
}

// LionEffectManager.cpp:24
