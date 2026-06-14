// LionFX.h:45
struct cLionFX {
public:
	// LionFX.h:51
	void Init(EA::Allocator::ITaggedAllocator *, iParticleRender *, void *, U32, U32, U32);

	// LionFX.h:55
	void DeInit();

	// LionFX.h:56
	void Update(const cTime &);

	// LionFX.h:65
	void Render(EffectsVertexBufferLocked &, LionBatchArray &, const cTime &, U32, U32);

	// LionFX.h:79
	void Dispatch(renderengine::VertexBuffer *, const LionBatchArray &, FP32, bool, FP32, FP32, FP32, FP32, FP32, renderengine::TextureState *);

	// LionFX.h:81
	void Flush();

	// LionFX.h:83
	cParticleLocator * LocatorRegister(const char *);

	// LionFX.h:84
	void LocatorUnRegister(cParticleLocator *);

	// LionFX.h:85
	void LocatorUpdate(cParticleLocator *, const cMatrix &, const cTime &);

	// LionFX.h:87
	cParticleScaler * ScalerRegister(const char *);

	// LionFX.h:88
	void ScalerUnRegister(cParticleScaler *);

	// LionFX.h:89
	void ScalerUpdate(cParticleScaler *, FP32, const cTime &);

	// LionFX.h:91
	cParticleTrigger * TriggerRegister(const char *);

	// LionFX.h:92
	void TriggerUnRegister(cParticleTrigger *);

	// LionFX.h:93
	void TriggerUpdate(cParticleTrigger &, U32, const cTime &);

	// LionFX.h:94
	void TriggerUpdate(cParticleTrigger *, U32, const cTime &);

	// LionFX.h:96
	void PosEvaluatorAttach(cLionEffectInstance *, iLionPosEvaluator *);

	// LionFX.h:97
	void PosEvaluatorDetach(cLionEffectInstance *);

	// LionFX.h:99
	cLionEffectDefinition * BinLoad(void *);

	// LionFX.h:100
	void BinUnLoad(cLionEffectDefinition *);

	// LionFX.h:101
	void BinSave(cLionEffectDefinition *, U32, iLionBinWriter *);

	// LionFX.h:103
	cLionEffectDefinition * TextLoad(const char *, U32, const char *);

	// LionFX.h:104
	void TextSave(cLionEffectDefinition *, iLionTokeniserWriter *);

	// LionFX.h:105
	void UnLoad(cLionEffectDefinition *);

	// LionFX.h:107
	cLionEffectDefinition * DefinitionCloneCreate(cLionEffectDefinition *);

	// LionFX.h:108
	void DefinitionCloneDestroy(cLionEffectDefinition *);

	// LionFX.h:110
	cLionEffectInstance * EffectCreate(cLionEffectDefinition *, cParticleLocator *, cParticleScaler *, cParticleTrigger *, U32);

	// LionFX.h:111
	void EffectDestroy(cLionEffectInstance *);

	// LionFX.h:113
	void EffectSetWorldIndex(cLionEffectInstance *, U32);

	// LionFX.h:115
	void EffectSetLocatorCount(cLionEffectInstance *, U32);

	// LionFX.h:116
	void EffectBindLocator(cLionEffectInstance *, U32, cParticleLocator *);

	// LionFX.h:118
	FP32 DefinitionGetDuration(cLionEffectDefinition *);

	// LionFX.h:119
	FP32 DefinitionGetRadius(cLionEffectDefinition *);

	// LionFX.h:121
	void SetLodDistance(U32, FP32);

	// LionFX.h:123
	void FogEnable();

	// LionFX.h:124
	void FogDisable();

	// LionFX.h:125
	void FogSetNearPlane(FP32);

	// LionFX.h:126
	void FogSetFarPlane(FP32);

}

