// Gropers.h:337
struct cGroper {
	// Gropers.h:367
	U32 mVersion;

	// Gropers.h:368
	char * mpName;

	// Gropers.h:369
	U32 mNameHash;

	// Gropers.h:370
	U32 mPassCount;

	// Gropers.h:371
	cGroperPass * mpPasses;

	// Gropers.h:372
	cGroper * mpNext;

public:
	// Gropers.h:349
	void Init();

	// Gropers.h:350
	void DeInit();

	// Gropers.h:351
	void Build();

	// Gropers.h:353
	void Delocate(U32);

	// Gropers.h:354
	void Relocate();

	// Gropers.h:355
	void GetSerialiseSize(cLionSerialiser &) const;

	// Gropers.h:356
	cGroper * Serialise(cLionSerialiser &) const;

	// Gropers.h:357
	void Remap(cLionSerialiser &);

	// Gropers.h:359
	void PassesAlloc(U32);

	// Gropers.h:360
	cGroperPass * PassAdd();

	// Gropers.h:361
	void PassRemove(cGroperPass *);

	// Gropers.h:362
	void PassMoveUp(cGroperPass *);

	// Gropers.h:363
	void PassMoveDown(cGroperPass *);

	// Gropers.h:365
	U32 GetTextureCount();

}

// Gropers.h:426
struct cGroperBindGroup {
	// Gropers.h:456
	U32 mVersion;

	// Gropers.h:457
	char * mpBaseTextureName;

	// Gropers.h:458
	char * mpScubiNodeName;

	// Gropers.h:459
	U32 mBaseTextureHash;

	// Gropers.h:460
	U32 mScubiNodeHash;

	// Gropers.h:461
	U32 mFlags;

	// Gropers.h:462
	U32 mBindingCount;

	// Gropers.h:463
	void * mpInstanceTemplate;

	// Gropers.h:464
	cGroperBinding * mpBindings;

	// Gropers.h:465
	cGroperInstance * mpInstances;

	// Gropers.h:466
	cGroperBindGroup * mpNext;

public:
	// Gropers.h:439
	void Init();

	// Gropers.h:440
	void DeInit();

	// Gropers.h:442
	void Delocate(U32);

	// Gropers.h:443
	void Relocate();

	// Gropers.h:444
	void GetSerialiseSize(cLionSerialiser &) const;

	// Gropers.h:445
	cGroperBindGroup * Serialise(cLionSerialiser &) const;

	// Gropers.h:446
	void Remap(cLionSerialiser &);

	// Gropers.h:448
	void Build();

	// Gropers.h:450
	void BindingsAlloc(U32);

	// Gropers.h:451
	cGroperBinding * BindAdd();

	// Gropers.h:452
	void BindRemove(cGroperBinding *);

	// Gropers.h:453
	void BindMoveUp(cGroperBinding *);

	// Gropers.h:454
	void BindMoveDown(cGroperBinding *);

}

// Gropers.h:44
typedef U16 hGroperHandle;

// Gropers.h:52
struct cGroperUV {
	// Gropers.h:82
	cParticleWaveForm * mpWaveForm;

	// Gropers.h:83
	cMatrix mMatrix;

	// Gropers.h:85
	FP32 mBaseU;

	// Gropers.h:86
	FP32 mBaseV;

	// Gropers.h:87
	FP32 mSpeedU;

	// Gropers.h:88
	FP32 mSpeedV;

	// Gropers.h:89
	FP32 mQuantiseU;

	// Gropers.h:90
	FP32 mQuantiseV;

	// Gropers.h:92
	U32 mType;

public:
	// Gropers.h:66
	void Init();

	// Gropers.h:67
	void DeInit();

	// Gropers.h:68
	void Build();

	// Gropers.h:70
	cParticleWaveForm * WaveFormAdd();

	// Gropers.h:71
	void WaveFormRemove();

	// Gropers.h:73
	void BuildRotate(FP32, cMatrix &, cParticleRandomSeed &);

	// Gropers.h:74
	void BuildScale(FP32, cMatrix &, cParticleRandomSeed &);

	// Gropers.h:75
	void BuildScroll(FP32, cMatrix &, cParticleRandomSeed &);

	// Gropers.h:76
	void BuildStretch(FP32, cMatrix &, cParticleRandomSeed &);

	// Gropers.h:77
	void BuildTransform(FP32, cMatrix &, cParticleRandomSeed &);

	// Gropers.h:78
	void BuildProjected(FP32, cMatrix &, cParticleRandomSeed &);

	// Gropers.h:80
	void Update(FP32, cMatrix &, cMatrix &, cParticleRandomSeed &);

}

// Gropers.h:98
struct cGroperMaterialSettings {
	// Gropers.h:195
	U32 mFlags;

	// Gropers.h:196
	S32 mLayer;

	// Gropers.h:197
	FP32 mMipMapBias;

	// Gropers.h:198
	U32 mSurface;

	// Gropers.h:199
	S32 mZBias;

	// Gropers.h:201
	char * mpRenderRegionName;

	// Gropers.h:202
	char * mpLayerGroupName;

	// Gropers.h:204
	U16 mBlendMode;

	// Gropers.h:205
	U16 mRegion;

	// Gropers.h:207
	U16 mBindWidth;

	// Gropers.h:208
	U16 mBindHeight;

	// Gropers.h:210
	U8 mTextureMode;

	// Gropers.h:211
	U8 mAlphaTestMode;

	// Gropers.h:212
	U8 mAlphaTestValue;

	// Gropers.h:213
	U8 mZTestMode;

public:
	// Gropers.h:192
	void Init();

	// Gropers.h:193
	void DeInit();

}

// Gropers.h:218
struct cGroperPass {
	// Gropers.h:300
	cVector mRGBAVec0;

	// Gropers.h:301
	cVector mRGBAVar;

	// Gropers.h:303
	char *[8] mpTextureNames;

	// Gropers.h:304
	U32[8] mTextureHandles;

	// Gropers.h:306
	U32 mFlags;

	// Gropers.h:307
	U32 mBaseTextureFlags;

	// Gropers.h:309
	FP32 mDuration;

	// Gropers.h:310
	FP32 mFadeInTime;

	// Gropers.h:311
	FP32 mFadeOutTime;

	// Gropers.h:312
	FP32 mLoopTime;

	// Gropers.h:313
	FP32 mPauseTime;

	// Gropers.h:314
	FP32 mAnimSpeed;

	// Gropers.h:316
	cParticleWaveForm *[4] mpWaveForms;

	// Gropers.h:318
	cGroperUV * mpUVs;

	// Gropers.h:320
	cColour8 mRGBA0;

	// Gropers.h:321
	cColour8 mRGBA1;

	// Gropers.h:323
	U16 mCullType;

	// Gropers.h:324
	U8 mTextureCount;

	// Gropers.h:325
	U8 mUVCount;

	// Gropers.h:327
	U8 mRGBGrope;

	// Gropers.h:328
	U8 mAlphaGrope;

	// Gropers.h:329
	U8 mMipMapBiasGrope;

	// Gropers.h:330
	U8 mAlphaTestGrope;

	// Gropers.h:332
	cGroperMaterialSettings mMaterialSettings;

public:
	// Gropers.h:277
	void Init();

	// Gropers.h:278
	void DeInit();

	// Gropers.h:279
	void Build();

	// Gropers.h:281
	void Delocate(U32);

	// Gropers.h:282
	void Relocate();

	// Gropers.h:283
	void GetSerialiseSize(cLionSerialiser &) const;

	// Gropers.h:284
	cGroperPass * Serialise(cLionSerialiser &) const;

	// Gropers.h:285
	void Remap(cLionSerialiser &);

	// Gropers.h:287
	void UVsAlloc(U32);

	// Gropers.h:288
	cGroperUV * UVAdd();

	// Gropers.h:289
	void UVRemove(cGroperUV *);

	// Gropers.h:290
	void UVMoveUp(cGroperUV *);

	// Gropers.h:291
	void UVMoveDown(cGroperUV *);

	// Gropers.h:293
	bool BuildUVs(FP32, cMatrix &, cParticleRandomSeed &, cMatrix &, bool &);

	// Gropers.h:294
	bool BuildRGBA(FP32, U32 &, cParticleRandomSeed &);

	// Gropers.h:295
	bool BuildTime(FP32 &, FP32 &);

	// Gropers.h:297
	cParticleWaveForm * WaveFormAdd(U32);

	// Gropers.h:298
	void WaveFormRemove(U32);

}

// Gropers.h:378
struct cGroperState {
	// Gropers.h:385
	char * mpGroperName;

	// Gropers.h:386
	cGroper * mpGroper;

	// Gropers.h:387
	U32 mGroperHash;

public:
	// Gropers.h:380
	void Init();

	// Gropers.h:381
	void DeInit();

	// Gropers.h:383
	void Build();

}

// Gropers.h:392
struct cGroperBinding {
	// Gropers.h:416
	U32 mFlags;

	// Gropers.h:417
	FP32 mCrossFadeTime;

	// Gropers.h:418
	char * mpScubiVarName;

	// Gropers.h:419
	U32 mScubiVarHash;

	// Gropers.h:420
	U32 mStateCount;

	// Gropers.h:421
	cGroperState * mpStates;

public:
	// Gropers.h:399
	void Init();

	// Gropers.h:400
	void DeInit();

	// Gropers.h:402
	void Delocate(U32);

	// Gropers.h:403
	void Relocate();

	// Gropers.h:404
	void GetSerialiseSize(cLionSerialiser &) const;

	// Gropers.h:405
	cGroperBinding * Serialise(cLionSerialiser &) const;

	// Gropers.h:406
	void Remap(cLionSerialiser &);

	// Gropers.h:408
	void Build();

	// Gropers.h:410
	void StatesAlloc(U32);

	// Gropers.h:411
	cGroperState * StateAdd();

	// Gropers.h:412
	void StateRemove(cGroperState *);

	// Gropers.h:413
	void StateMoveUp(cGroperState *);

	// Gropers.h:414
	void StateMoveDown(cGroperState *);

}

// Gropers.h:471
struct cGroperIterator {
private:
	// Gropers.h:503
	cMatrix mMatUV;

	// Gropers.h:504
	cTime mRenderTime;

	// Gropers.h:506
	cGroperInstance * mpIns;

	// Gropers.h:508
	U32 mRGBA;

	// Gropers.h:509
	U32 mMaterialIndex;

	// Gropers.h:510
	U32 mMaterialHandle;

	// Gropers.h:511
	U32 mBaseMaterialHandle;

	// Gropers.h:512
	U32 mPrePassMaterialHandle;

	// Gropers.h:513
	U32 mFlags;

	// Gropers.h:515
	U32 mBaseMaterialDone;

	// Gropers.h:516
	U32 mPrePassDone;

	// Gropers.h:517
	U32 mCullType;

	// Gropers.h:518
	U32 mControlIndex;

	// Gropers.h:519
	U32 mCrossCount;

	// Gropers.h:520
	U32 mCrossIndex;

	// Gropers.h:521
	U32 mPassIndex;

	// Gropers.h:522
	U32 mInterFrameIndex;

	// Gropers.h:523
	FP32[2] mWeights;

	// Gropers.h:524
	U32 mSurface;

	// Gropers.h:525
	FP32[2] mTimes;

	// Gropers.h:526
	U32[2] mCrossValues;

	// Gropers.h:527
	FP32[2] mCrossWeights;

	// Gropers.h:528
	cGroper *[2] mpGropers;

public:
	// Gropers.h:482
	bool Init(hGroperHandle, const cTime &);

	// Gropers.h:484
	bool PassBuild();

	// Gropers.h:485
	U32 PassHasUVs();

	// Gropers.h:486
	U32 PassHasRGBA();

	// Gropers.h:487
	U32 PassHasVertexMod();

	// Gropers.h:488
	U32 PassHasPrePass();

	// Gropers.h:489
	U32 HasPrePass();

	// Gropers.h:490
	U32 PaddHasBind();

	// Gropers.h:491
	U32 PassHasUVProjected();

	// Gropers.h:493
	U32 GetCullType();

	// Gropers.h:494
	U32 GetMaterial();

	// Gropers.h:495
	cMatrix & GetUVMatrix();

	// Gropers.h:496
	U32 GetRGBA();

	// Gropers.h:497
	U32 GetSurface();

private:
	// Gropers.h:500
	bool ControlInit();

	// Gropers.h:501
	bool PassConstruct(FP32 &, FP32 &);

}

// Gropers.h:562
namespace GROPERS {
}

