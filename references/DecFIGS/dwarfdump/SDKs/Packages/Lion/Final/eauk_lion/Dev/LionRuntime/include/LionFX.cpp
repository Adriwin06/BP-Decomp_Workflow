// LionFX.cpp:249
void cLionFX::ScalerUpdate(cParticleScaler *  apScaler, const FP32  aScale, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleScaler::Update(/* parameters */);
}

// LionFX.cpp:307
void cLionFX::PosEvaluatorAttach(cLionEffectInstance *  apEff, iLionPosEvaluator *  apEval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:320
void cLionFX::PosEvaluatorDetach(cLionEffectInstance *  apEff) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:510
void cLionFX::EffectSetWorldIndex(cLionEffectInstance *  apEff, const U32  aWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionBindings::SetWorldIndex(/* parameters */);
}

// LionFX.cpp:293
void cLionFX::TriggerUpdate(cParticleTrigger *  pTrigger, const U32  aVal, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleTrigger::Update(/* parameters */);
}

// LionFX.cpp:498
void cLionFX::EffectBindLocator(cLionEffectInstance *  apEff, const U32  aIndex, cParticleLocator *  apLoc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionBindings::SetpLocator(/* parameters */);
}

// LionFX.cpp:524
void cLionFX::DefinitionGetDuration(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:526
		FP32 lDuration;

		cLionEffectDefinition::GetDurationMax(/* parameters */);
	}
}

// LionFX.cpp:543
void cLionFX::DefinitionGetRadius(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:545
		FP32 lRad;

		{
			// LionFX.cpp:549
			const cLionParticleEffect * p_particles;

		}
	}
}

// LionFX.cpp:195
void cLionFX::LocatorUnRegister(cParticleLocator *  apLoc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:264
void cLionFX::TriggerRegister(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:276
void cLionFX::TriggerUnRegister(cParticleTrigger *  apTrigger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:373
void cLionFX::TextSave(cLionEffectDefinition *  apDef, iLionTokeniserWriter *  apWriter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:430
void cLionFX::BinSave(cLionEffectDefinition *  apDef, const U32  aEndianTwiddleFlag, iLionBinWriter *  apWriter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:432
		cLionSerialiser lSerialiser;

	}
	{
		// LionFX.cpp:436
		cLionEffectDefinition * lpDef;

	}
	cLionEffectDefinition::GetSerialiseSize(/* parameters */);
}

// LionFX.cpp:225
void cLionFX::ScalerRegister(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:237
void cLionFX::ScalerUnRegister(cParticleScaler *  apScaler) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:486
void cLionFX::EffectSetLocatorCount(cLionEffectInstance *  apEff, const U32  aCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:414
void cLionFX::BinUnLoad(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:361
void cLionFX::UnLoad(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:643
void cLionFX::DefinitionCloneDestroy(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:288
void cLionFX::TriggerUpdate(const cParticleTrigger &  trigger, const U32  aVal, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleTrigger::Update(/* parameters */);
}

// LionFX.cpp:385
void cLionFX::BinLoad(void *  apData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:387
		cLionEffectDefinition * lpDef;

	}
}

// LionFX.cpp:88
void cLionFX::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::Instance(/* parameters */);
}

// LionFX.cpp:567
void cLionFX::SetLodDistance(const U32  aLodGroup, const FP32  aDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::SetLodDistance(/* parameters */);
}

// LionFX.cpp:579
void cLionFX::FogEnable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::FogEnable(/* parameters */);
}

// LionFX.cpp:591
void cLionFX::FogDisable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::FogDisable(/* parameters */);
}

// LionFX.cpp:603
void cLionFX::FogSetNearPlane(const FP32  aNear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::FogSetNear(/* parameters */);
}

// LionFX.cpp:615
void cLionFX::FogSetFarPlane(const FP32  aFar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::FogSetFar(/* parameters */);
}

// LionFX.cpp:627
void cLionFX::DefinitionCloneCreate(cLionEffectDefinition *  apOriginal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:629
		cLionEffectDefinition * lpDef;

	}
}

// LionFX.cpp:332
void cLionFX::TextLoad(const char *  apData, const U32  aSize, const char *  lpEffectFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:334
		char * lpConText;

		// LionFX.cpp:335
		U32 lSize;

		// LionFX.cpp:336
		cLionEffectDefinition * lpDef;

	}
}

// LionFX.cpp:183
void cLionFX::LocatorRegister(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:150
void cLionFX::Dispatch(renderengine::VertexBuffer *const  lpVertexBuffer, const const LionBatchArray &  lBatchArray, const FP32  lfWhiteLevel, const bool  lbEnableZFade, const FP32  lfNearPlane, const FP32  lfFarPlane, const FP32  lfDepthFadeDistance, const FP32  lfDepthSamplerOffsetU, const FP32  lfDepthSamplerOffsetV, renderengine::TextureState *const  lpDepthTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
}

// LionFX.cpp:462
void cLionFX::EffectCreate(cLionEffectDefinition *  apDef, cParticleLocator *  apLoc, cParticleScaler *  apScaler, cParticleTrigger *  apTrig, const U32  aWorldIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:54
void cLionFX::Init(EA::Allocator::ITaggedAllocator *  apAllocator, iParticleRender *  apRenderer, void *  apPhysics, const U32  aEmitterCount, const U32  aParticleCount, const U32  aDynamicParticleCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:59
		U32 lBucketCount;

		// LionFX.cpp:60
		U32 lMatBucketCount;

		// LionFX.cpp:65
		EA::Allocator::ITaggedAllocator * lpWrappedAllocator;

	}
	cParticleRender::Instance(/* parameters */);
	cParticleRender::Instance(/* parameters */);
}

// LionFX.cpp:170
void cLionFX::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:474
void cLionFX::EffectDestroy(cLionEffectInstance *  apEff) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFX.cpp:130
void cLionFX::Render(const EffectsVertexBufferLocked &  lEffectsVertexBuffer, const LionBatchArray &  lBatchArray, const const cTime &  aTime, const U32  aRenderGroupStart, const U32  aRenderGroupEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFX.cpp:132
		const cParticleEmitterManager & lEmitterManager;

		cParticleRender::Instance(/* parameters */);
	}
}

// LionFX.cpp:111
void cLionFX::Update(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRender::Instance(/* parameters */);
	cParticleRender::Update(/* parameters */);
}

// LionFX.cpp:210
void cLionFX::LocatorUpdate(cParticleLocator *  apLoc, const const cMatrix &  aMat, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

