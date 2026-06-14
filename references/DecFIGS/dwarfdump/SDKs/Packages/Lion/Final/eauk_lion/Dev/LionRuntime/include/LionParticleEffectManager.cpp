// LionParticleEffectManager.cpp:317
void cLionParticleEffectManager::Free(cParticleDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:58
void cLionParticleEffectManager::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:322
void cLionParticleEffectManager::Free(cParticleWaveForm *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:327
void cLionParticleEffectManager::Free(cParticleMaterial *  pMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:332
void cLionParticleEffectManager::Free(cParticleBehaviour *  pBehaviour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:38
void cLionParticleEffectManager::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator, const U32  aEffectCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:40
		U32 i;

	}
}

// LionParticleEffectManager.cpp:337
void cLionParticleEffectManager::CreateDesriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:339
		cParticleDescriptor * lpDes;

		EA::TagValuePair::TagValuePair(/* parameters */);
	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionParticleEffectManager.cpp:346
void cLionParticleEffectManager::CreateWaveForm() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:348
		cParticleWaveForm * lpDes;

		EA::TagValuePair::TagValuePair(/* parameters */);
	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionParticleEffectManager.cpp:355
void cLionParticleEffectManager::CreateMaterial() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:357
		cParticleMaterial * lpDes;

		EA::TagValuePair::TagValuePair(/* parameters */);
	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionParticleEffectManager.cpp:364
void cLionParticleEffectManager::CreateBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:366
		cParticleBehaviour * lpDes;

		EA::TagValuePair::TagValuePair(/* parameters */);
	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionParticleEffectManager.cpp:174
void cLionParticleEffectManager::DefinitionAttach(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:131
void cLionParticleEffectManager::EffectDestroy(cLionParticleEffect *  apEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffectManager.cpp:70
void cLionParticleEffectManager::Render(const const cTime &  aTime, const U32  aRenderGroupStart, const U32  aRenderGroupEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:72
		U32 i;

		// LionParticleEffectManager.cpp:73
		cParticleDescriptor * lpDes;

		// LionParticleEffectManager.cpp:74
		cLionBindings * lpBindings;

		cLionBindings::GetNextBinding(/* parameters */);
	}
}

// LionParticleEffectManager.cpp:190
void cLionParticleEffectManager::DefinitionRemove(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:196
		cLionParticleEffect * lpItem;

		// LionParticleEffectManager.cpp:197
		cLionParticleEffect ** lppLast;

	}
}

// LionParticleEffectManager.cpp:110
void cLionParticleEffectManager::EffectCreate(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:112
		cLionParticleEffect * lpEffect;

	}
}

// LionParticleEffectManager.cpp:148
void cLionParticleEffectManager::EffectClone(const cLionParticleEffect *  apEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:150
		cLionParticleEffect * lpEffect;

		// LionParticleEffectManager.cpp:151
		cParticleDescriptor * lpDesSrc;

	}
}

// LionParticleEffectManager.cpp:298
void cLionParticleEffectManager::GetpEffect(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:300
		cLionParticleEffect * lpEffect;

		// LionParticleEffectManager.cpp:301
		U32 lHash;

		ELFHASH::BuildHash(/* parameters */);
		{
		}
	}
}

// LionParticleEffectManager.cpp:226
void cLionParticleEffectManager::BindingsAttach(const cLionParticleEffect *  apEffect, const cLionBindings &  apBindings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:230
		const cParticleEmitterManager & emitter_manager;

		// LionParticleEffectManager.cpp:236
		cParticleDescriptor * lpDes;

	}
}

// LionParticleEffectManager.cpp:268
void cLionParticleEffectManager::BindingsRemove(const cLionParticleEffect *  apEffect, const cLionBindings &  apBindings, cLionBindings *  apBindBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffectManager.cpp:270
		cParticleDescriptor * lpDes;

	}
	{
		// LionParticleEffectManager.cpp:274
		const cParticleEmitterManager & emitter_manager;

	}
}

