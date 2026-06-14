// ParticleEmitterManager.cpp:67
void cParticleEmitterManager::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleEmitterManager.cpp:81
void cParticleEmitterManager::GameInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleEmitterManager.cpp:90
void cParticleEmitterManager::GameDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleEmitterManager.cpp:539
void cParticleEmitterManager::DeActivate(const char *  apDesName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:541
		cParticleEmitter * lpEmit;

	}
	cParticleEmitter::SetActiveFlag(/* parameters */);
}

// ParticleEmitterManager.cpp:478
void cParticleEmitterManager::ActivateAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:480
		cParticleEmitter * lpEmit;

		cParticleEmitter::SetActiveFlag(/* parameters */);
	}
}

// ParticleEmitterManager.cpp:497
void cParticleEmitterManager::DeActivateAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:499
		cParticleEmitter * lpEmit;

		cParticleEmitter::SetActiveFlag(/* parameters */);
	}
}

// ParticleEmitterManager.cpp:123
void cParticleEmitterManager::FindEmitter(const const cParticleDescriptor &  descriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:125
		cParticleEmitter * lpEmit;

	}
}

// ParticleEmitterManager.cpp:273
void cParticleEmitterManager::Visit(const const cLionEffectInstance &  instance, const iEmitterVisitor &  visitor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:275
		const cLionEffectDefinition * lpDef;

		// ParticleEmitterManager.cpp:277
		cParticleDescriptor * lpDes;

	}
	{
		// ParticleEmitterManager.cpp:281
		cParticleEmitter * lpEmit;

		{
			// ParticleEmitterManager.cpp:285
			cParticleEmitter * lpNext;

		}
		cParticleEmitter::GetDescriptor(/* parameters */);
	}
}

// ParticleEmitterManager.cpp:516
void cParticleEmitterManager::Activate(const char *  apDesName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:518
		cParticleEmitter * lpEmit;

	}
	cParticleEmitter::SetActiveFlag(/* parameters */);
}

// ParticleEmitterManager.cpp:434
void cParticleEmitterManager::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:436
		U32 i;

	}
	cParticleEmitter::SetNext(/* parameters */);
}

// ParticleEmitterManager.cpp:220
void cParticleEmitterManager::RegisterSubEmitter(cParticleDescriptor *  apDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:222
		cParticleEmitter * lpEmitter;

		// ParticleEmitterManager.cpp:223
		cParticleEmitter * lpNext;

		// ParticleEmitterManager.cpp:224
		cParticleEmitter * lpPrev;

		// ParticleEmitterManager.cpp:225
		cParticleEmitter * lpEmit;

	}
	cParticleEmitter::SetActiveFlag(/* parameters */);
	cParticleEmitter::SetNext(/* parameters */);
	cParticleEmitter::SetNext(/* parameters */);
	cParticleEmitter::SetNext(/* parameters */);
}

// ParticleEmitterManager.cpp:148
void cParticleEmitterManager::Register(cParticleDescriptor *  apDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:150
		cParticleEmitter * lpEmit;

	}
	cParticleDescriptor::GetBehaviours(/* parameters */);
	cParticleEmitter::SetActiveFlag(/* parameters */);
	cParticleEmitter::SetNext(/* parameters */);
}

// ParticleEmitterManager.cpp:197
void cParticleEmitterManager::Register(cParticleDescriptor *  apDescriptor, const cLionBindings &  bindings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:199
		cParticleEmitter * lpEmit;

	}
}

// ParticleEmitterManager.cpp:34
void cParticleEmitterManager::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator, const U32  aEmitterCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:36
		U32 i;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	cParticleEmitter::SetNext(/* parameters */);
}

// ParticleEmitterManager.cpp:380
void cParticleEmitterManager::UnRegister(cParticleEmitter *  apEmitter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:385
		cParticleEmitter * lpItem;

		// ParticleEmitterManager.cpp:385
		cParticleEmitter ** lppLast;

		cParticleEmitter::GetNextEmitter(/* parameters */);
		cParticleEmitter::GetNextEmitter(/* parameters */);
	}
}

// ParticleEmitterManager.cpp:457
void cParticleEmitterManager::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:459
		U32 i;

	}
}

// ParticleEmitterManager.cpp:404
void cParticleEmitterManager::UnRegisterDescriptor(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:406
		cParticleEmitter * lpEmit;

		// ParticleEmitterManager.cpp:407
		cParticleEmitter * lpEmitNext;

	}
}

// ParticleEmitterManager.cpp:310
void cParticleEmitterManager::UnRegister(const const cParticleDescriptor &  apDescriptor, const cLionBindings &  apBindings, cLionBindings *  apBindBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:314
		cParticleEmitter * lpEmit;

		// ParticleEmitterManager.cpp:315
		cParticleEmitter * lpNext;

	}
	{
		// ParticleEmitterManager.cpp:323
		const const cParticleDescriptor & emitter_descriptor;

	}
	cParticleEmitter::GetDescriptor(/* parameters */);
}

// ParticleEmitterManager.cpp:99
void cParticleEmitterManager::Update(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitterManager.cpp:101
		cParticleEmitter * lpEmitter;

		// ParticleEmitterManager.cpp:102
		cParticleEmitter * lpNext;

	}
	{
		// ParticleEmitterManager.cpp:110
		U32 active_particle_count;

	}
}

