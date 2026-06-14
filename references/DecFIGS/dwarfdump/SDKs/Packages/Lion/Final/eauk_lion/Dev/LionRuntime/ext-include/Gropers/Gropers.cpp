// Gropers.cpp:57
struct cGroperInstance {
	// Gropers.cpp:62
	cGroperMaterial * mpMaterial;

	// Gropers.cpp:63
	cGroperControl * mpControls;

	// Gropers.cpp:64
	cGroperBindGroup * mpBindGroup;

	// Gropers.cpp:66
	cGroperInstance * mpNext;

public:
	// Gropers.cpp:59
	void Init();

	// Gropers.cpp:60
	void DeInit();

}

// Gropers.cpp:37
struct cGroperControl {
	// Gropers.cpp:42
	U32 mValue;

	// Gropers.cpp:43
	U32 mValueOld;

	// Gropers.cpp:44
	FP32 mBlendTime;

	// Gropers.cpp:45
	cTime mValueChangeTime;

	// Gropers.cpp:46
	cTime mValueOldTime;

	// Gropers.cpp:47
	cGroperBinding * mpBinding;

	// Gropers.cpp:48
	void * mpInstanceHandle;

	// Gropers.cpp:49
	void * mpLocatorHandle;

	// Gropers.cpp:50
	void * mpProjectionHandle;

	// Gropers.cpp:51
	cParticleRandomSeed mSeed;

	// Gropers.cpp:52
	U32 ** mppMaterialHandles;

public:
	// Gropers.cpp:39
	void Init();

	// Gropers.cpp:40
	void DeInit();

}

// Gropers.cpp:70
struct cGroperMaterial {
	// Gropers.cpp:80
	S32 mRefCount;

	// Gropers.cpp:81
	U32 mTextureNameHash;

	// Gropers.cpp:82
	const char * mpGroupName;

	// Gropers.cpp:83
	void * mpInstanceID;

	// Gropers.cpp:84
	U32 mFlags;

	// Gropers.cpp:85
	S32 mLayer;

	// Gropers.cpp:86
	S32 mType;

	// Gropers.cpp:87
	U32 mBaseMaterialHandle;

	// Gropers.cpp:88
	U32 mBaseTextureHandle;

	// Gropers.cpp:89
	U32 mPrePassMaterialHandle;

	// Gropers.cpp:90
	S32 mZBias;

	// Gropers.cpp:91
	FP32 mMipMapBias;

	// Gropers.cpp:92
	cGroperInstance * mpGroperInstance;

public:
	// Gropers.cpp:77
	void Init();

	// Gropers.cpp:78
	void DeInit();

}

// Gropers.cpp:3725
void cGroperBindGroup::BindMoveUp(cGroperBinding *  apBinding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3727
		U32 lIndex;

	}
	{
		// Gropers.cpp:3727
		cGroperBinding lTemp;

	}
}

// Gropers.cpp:3435
void cGroperBinding::StateMoveUp(cGroperState *  apState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3437
		U32 lIndex;

	}
	{
		// Gropers.cpp:3437
		cGroperState lTemp;

	}
}

// Gropers.cpp:3737
void cGroperBindGroup::BindMoveDown(cGroperBinding *  apBinding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3739
		U32 lIndex;

	}
	{
		// Gropers.cpp:3739
		cGroperBinding lTemp;

	}
}

// Gropers.cpp:3447
void cGroperBinding::StateMoveDown(cGroperState *  apState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3449
		U32 lIndex;

	}
	{
		// Gropers.cpp:3449
		cGroperState lTemp;

	}
}

// Gropers.h:562
namespace GROPERS {
	// Gropers.cpp:1927
	extern cLionTokenTable * GetpGroperTokenTable();

	// Gropers.cpp:1963
	extern cLionTokenTable * GetpGroperPassTokenTable();

	// Gropers.cpp:1987
	extern cLionTokenTable * GetpGroperUVTokenTable();

	// Gropers.cpp:1939
	extern cLionTokenTable * GetpGroperBindGroupTokenTable();

	// Gropers.cpp:1951
	extern cLionTokenTable * GetpGroperBindingTokenTable();

	// Gropers.cpp:1975
	extern cLionTokenTable * GetpGroperStateTokenTable();

	// Gropers.cpp:440
	extern U32 GetMaterialActiveFlag(U16);

	// Gropers.cpp:441
	extern void SetMaterialActiveFlag(U16);

	// Gropers.cpp:442
	extern void ClearMaterialActiveFlag(U16);

	// Gropers.cpp:443
	extern EA::Allocator::ITaggedAllocator * GetpAllocator();

	// Gropers.cpp:452
	extern void AppInit(EA::Allocator::ITaggedAllocator *);

	// Gropers.cpp:477
	extern void AppDeInit();

	// Gropers.cpp:494
	extern void Disable();

	// Gropers.cpp:506
	extern void Enable();

	// Gropers.cpp:519
	extern void SetpRenderer(iGroper *);

	// Gropers.cpp:1124
	extern cGroper * GroperFind(U32);

	// Gropers.cpp:926
	extern cGroperBindGroup * BindGroupFind(cGroperMaterial *);

	// Gropers.cpp:1145
	extern void GroperTexturesLoad(cGroper *);

	// Gropers.cpp:1006
	extern U32 GetBaseMaterial(hGroperHandle);

	// Gropers.cpp:1175
	extern void GroperTexturesUnLoad(cGroper *);

	// Gropers.cpp:1274
	extern void GroperMaterialsUnLoad(cGroper *, U32 *);

	// Gropers.cpp:1026
	extern void GroperDetach(cGroper *);

	// Gropers.cpp:1365
	extern void InstanceDestroy(cGroperInstance *);

	// Gropers.cpp:895
	extern void BindGroupDetach(cGroperBindGroup *);

	// Gropers.cpp:803
	extern void BindGroupBinUnLoad(cGroperBindGroup *);

	// Gropers.cpp:1415
	extern U16 TextureFind(U32, S32, U32, void *);

	// Gropers.cpp:1443
	extern U16 TextureGetFree();

	// Gropers.cpp:1538
	extern void TextureUnRegister(hGroperHandle);

	// Gropers.cpp:1880
	extern void GroperBinUnLoad(cGroper *);

	// Gropers.cpp:531
	extern cGroperBindGroup * BindGroupCreate();

	// Gropers.cpp:1202
	extern U32 * GroperMaterialsLoad(cGroper *, const char *, S32, S32, U32, U32, FP32);

	// Gropers.cpp:954
	extern void GroperAttach(cGroper *);

	// Gropers.cpp:1776
	extern void GroperTextSave(cGroper *, iLionTokeniserWriter *);

	// Gropers.cpp:728
	extern void BindGroupTextSave(cGroperBindGroup *, iLionTokeniserWriter *);

	// Gropers.cpp:1895
	extern void GroperBinSave(cGroper *, U32, iLionBinWriter *);

	// Gropers.cpp:818
	extern void BindGroupBinSave(cGroperBindGroup *, U32, iLionBinWriter *);

	// Gropers.cpp:1297
	extern cGroperInstance * InstanceCreate(cGroperMaterial *, cGroperBindGroup *);

	// Gropers.cpp:850
	extern void BindGroupAttach(cGroperBindGroup *);

	// Gropers.cpp:1078
	extern cGroper * GroperCreate(U32);

	// Gropers.cpp:551
	extern void BindGroupDestroy(cGroperBindGroup *);

	// Gropers.cpp:713
	extern void BindGroupUnLoad(cGroperBindGroup *);

	// Gropers.cpp:1107
	extern void GroperDestroy(cGroper *);

	// Gropers.cpp:1836
	extern void GroperUnLoad(cGroper *);

	// Gropers.cpp:1491
	extern hGroperHandle TextureRegister(const char *, const char *, S32, S32, U32, void *, FP32);

	// Gropers.cpp:1851
	extern cGroper * GroperBinLoad(void *);

	// Gropers.cpp:774
	extern cGroperBindGroup * BindGroupBinLoad(void *);

	// Gropers.cpp:572
	extern cGroperBindGroup * BindGroupTextLoad(const char *, U32);

	// Gropers.cpp:1570
	extern cGroper * GroperTextLoad(const char *, U32, U32 &);

	// Gropers.cpp:130
	extern sKeyString[7] gGroperUVTypeStrings;

	// Gropers.cpp:141
	extern sKeyString[8] gGroperAlphaTestModeStrings;

	// Gropers.cpp:153
	extern sKeyString[26] gGroperBlendModeStrings;

	// Gropers.cpp:183
	extern sKeyString[4] gGroperCullTypeStrings;

	// Gropers.cpp:191
	extern sKeyString[3] gGroperGropeTypeStrings;

	// Gropers.cpp:198
	extern sKeyString[4] gGroperPassWaveStrings;

	// Gropers.cpp:206
	extern sKeyString[2] gGroperSurfaceStrings;

	// Gropers.cpp:212
	extern sKeyString[8] gGroperTextureModeStrings;

	// Gropers.cpp:224
	extern sKeyString[8] gGroperWaveTypeStrings;

	// Gropers.cpp:236
	extern sKeyString[6] gGroperZTestModeStrings;

	// Gropers.cpp:246
	extern cKeyStringTable gGroperAlphaTestModeTokenTable;

	// Gropers.cpp:247
	extern cKeyStringTable gGroperBlendModeTokenTable;

	// Gropers.cpp:248
	extern cKeyStringTable gGroperCullTypeTokenTable;

	// Gropers.cpp:249
	extern cKeyStringTable gGroperGropeTypeTokenTable;

	// Gropers.cpp:250
	extern cKeyStringTable gGroperPassWaveTokenTable;

	// Gropers.cpp:251
	extern cKeyStringTable gGroperSurfaceTokenTable;

	// Gropers.cpp:252
	extern cKeyStringTable gGroperTextureModeTokenTable;

	// Gropers.cpp:253
	extern cKeyStringTable gGroperUVTypeTokenTable;

	// Gropers.cpp:254
	extern cKeyStringTable gGroperWaveTypeTokenTable;

	// Gropers.cpp:255
	extern cKeyStringTable gGroperZTestModeTokenTable;

	// Gropers.cpp:258
	extern sLionMemberToken[2] gGroperTokens;

	// Gropers.cpp:264
	extern sLionMemberToken[6] gGroperBindGroupTokens;

	// Gropers.cpp:275
	extern sLionMemberToken[4] gGroperBindingTokens;

	// Gropers.cpp:284
	extern sLionMemberToken[59] gGroperPassTokens;

	// Gropers.cpp:355
	extern sLionMemberToken[2] gGroperStateTokens;

	// Gropers.cpp:361
	extern sLionMemberToken[9] gGroperUVTokens;

	// Gropers.cpp:375
	extern sLionMemberToken[14] gGroperWaveTokens;

	// Gropers.cpp:396
	extern cLionTokenTable gGroperTokenTable;

	// Gropers.cpp:397
	extern cLionTokenTable gGroperBindGroupTokenTable;

	// Gropers.cpp:398
	extern cLionTokenTable gGroperBindingTokenTable;

	// Gropers.cpp:399
	extern cLionTokenTable gGroperPassTokenTable;

	// Gropers.cpp:400
	extern cLionTokenTable gGroperStateTokenTable;

	// Gropers.cpp:401
	extern cLionTokenTable gGroperUVTokenTable;

	// Gropers.cpp:402
	extern cLionTokenTable gGroperWaveTokenTable;

	// Gropers.cpp:409
	extern EA::Allocator::ITaggedAllocator * mpAllocator;

	// Gropers.cpp:410
	extern iGroper * mpRenderer;

	// Gropers.cpp:411
	extern cGroper * mpGropers;

	// Gropers.cpp:412
	extern cGroperBindGroup * mpBindGroups;

	// Gropers.cpp:413
	extern U32 mDisabledFlag;

	// Gropers.cpp:414
	extern U32 mMaterialIndexLast;

	// Gropers.cpp:415
	extern U32[128] mMaterialActiveFlags;

	// Gropers.cpp:416
	extern cGroperMaterial[4096] mMaterials;

}

// Gropers.cpp:2648
void cGroperPass::WaveFormRemove(const U32  aType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:2071
void cGroperUV::WaveFormRemove() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3459
void cGroperBindGroup::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3593
void cGroperBindGroup::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3595
		cGroperBindGroup * lpBG;

		// Gropers.cpp:3596
		U32 i;

		// Gropers.cpp:3596
		U32 j;

	}
}

// Gropers.cpp:3629
void cGroperBindGroup::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:2844
void cGroper::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3124
void cGroper::GetTextureCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3126
		U32 lCount;

		// Gropers.cpp:3127
		U32 i;

	}
}

// Gropers.cpp:2042
void cGroperUV::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:2962
void cGroper::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2964
		cGroper * lpGroper;

	}
	{
		// Gropers.cpp:2972
		cGroperPass * lpPass;

		// Gropers.cpp:2973
		U32 i;

		// Gropers.cpp:2973
		U32 j;

	}
}

// Gropers.cpp:3015
void cGroper::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:2026
void cGroperUV::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:4316
void cGroperMaterialSettings::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:4343
void cGroperMaterialSettings::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:2387
void cGroperPass::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2389
		U32 i;

	}
	{
		// Gropers.cpp:2425
		U8 * lpBY;

	}
}

// Gropers.cpp:2885
void cGroper::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2887
		U32 i;

	}
	{
		// Gropers.cpp:2902
		U8 * lpBY;

	}
	{
		// Gropers.cpp:2903
		U8 * lpBY;

	}
	{
		// Gropers.cpp:2904
		U8 * lpBY;

	}
}

// Gropers.cpp:2437
void cGroperPass::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2439
		U32 i;

	}
}

// Gropers.cpp:2472
void cGroperPass::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2474
		U32 i;

	}
}

// Gropers.cpp:2939
void cGroper::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2941
		U32 i;

	}
}

// Gropers.cpp:2507
void cGroperPass::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2509
		cGroperPass * lpPass;

		// Gropers.cpp:2510
		U32 i;

	}
}

// Gropers.cpp:2546
void cGroperPass::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:2916
void cGroper::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2918
		U32 i;

	}
}

// Gropers.cpp:3148
void cGroperState::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3192
void cGroperBinding::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3235
void cGroperBinding::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3237
		U32 i;

	}
	{
		// Gropers.cpp:3263
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3264
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3251
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3252
		U8 * lpBY;

	}
}

// Gropers.cpp:3503
void cGroperBindGroup::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3505
		U32 i;

	}
	{
		// Gropers.cpp:3524
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3525
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3526
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3529
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3530
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3531
		U8 * lpBY;

	}
	{
		// Gropers.cpp:3527
		U8 * lpBY;

	}
}

// Gropers.cpp:3276
void cGroperBinding::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3278
		U32 i;

	}
}

// Gropers.cpp:3299
void cGroperBinding::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3301
		U32 i;

	}
}

// Gropers.cpp:3569
void cGroperBindGroup::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3571
		U32 i;

	}
}

// Gropers.cpp:3323
void cGroperBinding::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3325
		cGroperBinding * lpBG;

		// Gropers.cpp:3326
		U32 i;

	}
}

// Gropers.cpp:3350
void cGroperBinding::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3543
void cGroperBindGroup::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3545
		U32 i;

	}
}

// Gropers.cpp:3380
void cGroperBinding::StatesAlloc(const U32  aStateCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3382
		U32 i;

		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
	}
}

// Gropers.cpp:3402
void cGroperBinding::StateAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3404
		cGroperState * lpState;

		{
			// Gropers.cpp:3406
			cGroperState * lpArray;

			// Gropers.cpp:3406
			U32 lIndex;

			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
		}
	}
}

// Gropers.cpp:3666
void cGroperBindGroup::BindingsAlloc(const U32  aBindingCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3668
		U32 i;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// Gropers.cpp:3692
void cGroperBindGroup::BindAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3694
		cGroperBinding * lpBinding;

		{
			// Gropers.cpp:3696
			cGroperBinding * lpArray;

			// Gropers.cpp:3696
			U32 lIndex;

			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
		}
	}
}

// Gropers.cpp:2242
void cGroperUV::BuildTransform(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cMatrix::Mul(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
}

// Gropers.cpp:2561
void cGroperPass::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2563
		cVector lRGBA0;

		// Gropers.cpp:2564
		cVector lRGBA1;

		cVector::Set(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::Set(/* parameters */);
		cVector::Sub4(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::operator=(/* parameters */);
	}
}

// Gropers.cpp:2299
void cGroperPass::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2301
		U32 i;

		cVector::Zero(/* parameters */);
		cVector::Zero(/* parameters */);
	}
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cColour8::BuildIdentity(/* parameters */);
	cColour8::BuildIdentity(/* parameters */);
}

// Gropers.cpp:3030
void cGroper::PassesAlloc(const U32  aPassCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3032
		U32 i;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// Gropers.cpp:3162
void cGroperState::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3423
void cGroperBinding::StateRemove(cGroperState *  apState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3425
		cGroperState * lpArray;

		// Gropers.cpp:3425
		U32 lSrc;

		// Gropers.cpp:3425
		U32 lDst;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// Gropers.cpp:3209
void cGroperBinding::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3211
		U32 i;

	}
}

// Gropers.cpp:3713
void cGroperBindGroup::BindRemove(cGroperBinding *  apBinding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3715
		cGroperBinding * lpArray;

		// Gropers.cpp:3715
		U32 lSrc;

		// Gropers.cpp:3715
		U32 lDst;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// Gropers.cpp:3481
void cGroperBindGroup::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3483
		U32 i;

	}
}

// Gropers.cpp:2349
void cGroperPass::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2351
		U32 i;

	}
}

// Gropers.cpp:2861
void cGroper::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2863
		U32 i;

	}
}

// Gropers.cpp:2579
void cGroperPass::BuildTime(const FP32 &  aTime, const FP32 &  aFade) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2581
		bool lRes;

	}
	{
		// Gropers.cpp:2595
		FP32 lTime;

	}
	qfmodf(/* parameters */);
}

// Gropers.cpp:3917
void cGroperIterator::ControlInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3919
		bool lRes;

		// Gropers.cpp:3920
		U32 i;

		// Gropers.cpp:3921
		cGroperControl * lpControl;

	}
	{
		// Gropers.cpp:3927
		U32 lValue;

		// Gropers.cpp:3947
		cGroperBinding * lpBinding;

		{
			// Gropers.cpp:3950
			FP32 lFade;

			// Gropers.cpp:3951
			FP32 lTime;

		}
	}
	{
		// Gropers.cpp:3935
		cTime lTime;

		cTime::SetTimeSeconds(/* parameters */);
		cTime::operator=(/* parameters */);
		cTime::operator=(/* parameters */);
	}
	cTime::GetTimeDiffSeconds(/* parameters */);
	cTime::GetTimeDiffSeconds(/* parameters */);
	{
		// Gropers.cpp:3997
		bool lTmp;

		cTime::GetTimeDiffSeconds(/* parameters */);
	}
	cTime::GetTimeDiffSeconds(/* parameters */);
	cTime::GetTimeDiffSeconds(/* parameters */);
}

// Gropers.cpp:3848
void cGroperIterator::Init(hGroperHandle  aHandle, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3850
		bool lRes;

		cMatrix::BuildIdentity(/* parameters */);
	}
	cMatrix::SetAxisZ(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	{
		// Gropers.cpp:3875
		cGroperMaterial * lpMaterial;

		cTime::operator=(/* parameters */);
	}
}

// Gropers.cpp:2628
void cGroperPass::WaveFormAdd(const U32  aType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// Gropers.cpp:2053
void cGroperUV::WaveFormAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// Gropers.cpp:4348
void _GLOBAL__D__ZN13cLionBindings4InitEv() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:4347
void _GLOBAL__I__ZN13cLionBindings4InitEv() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Gropers.cpp:3112
void cGroper::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ELFHASH::BuildHash(/* parameters */);
}

// Gropers.cpp:3177
void cGroperState::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ELFHASH::BuildHash(/* parameters */);
}

// Gropers.cpp:3364
void cGroperBinding::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ELFHASH::BuildHash(/* parameters */);
}

// Gropers.cpp:3643
void cGroperBindGroup::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ELFHASH::BuildHash(/* parameters */);
	ELFHASH::BuildHash(/* parameters */);
}

// Gropers.cpp:2732
void cGroperPass::UVMoveDown(cGroperUV *  apUV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2734
		U32 lIndex;

	}
	{
		// Gropers.cpp:2734
		cGroperUV lTemp;

		operator=(/* parameters */);
	}
	operator=(/* parameters */);
	cMatrix::operator=(/* parameters */);
	operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
}

// Gropers.cpp:2720
void cGroperPass::UVMoveUp(cGroperUV *  apUV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2722
		U32 lIndex;

	}
	{
		// Gropers.cpp:2722
		cGroperUV lTemp;

		operator=(/* parameters */);
		operator=(/* parameters */);
	}
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	operator=(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
}

// Gropers.cpp:2708
void cGroperPass::UVRemove(cGroperUV *  apUV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2710
		cGroperUV * lpArray;

		// Gropers.cpp:2710
		U32 lSrc;

		// Gropers.cpp:2710
		U32 lDst;

		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
		operator=(/* parameters */);
		cMatrix::operator=(/* parameters */);
		cVector::operator=(/* parameters */);
		cVector::operator=(/* parameters */);
		cVector::operator=(/* parameters */);
	}
}

// Gropers.cpp:2254
void cGroperUV::BuildProjected(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
}

// Gropers.cpp:2006
void cGroperUV::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
}

// Gropers.cpp:2687
void cGroperPass::UVAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2689
		cGroperUV * lpUV;

		{
			// Gropers.cpp:2691
			cGroperUV * lpArray;

			// Gropers.cpp:2691
			U32 lIndex;

			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
		}
	}
	operator=(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
}

// Gropers.cpp:2664
void cGroperPass::UVsAlloc(const U32  aUVCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2666
		U32 i;

		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
	}
}

// Gropers.cpp:3055
void cGroper::PassAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3057
		cGroperPass * lpPass;

		{
			// Gropers.cpp:3059
			cGroperPass * lpArray;

			// Gropers.cpp:3059
			U32 lIndex;

			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::TagValuePair(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
			EA::TagValuePair::operator+(/* parameters */);
		}
	}
	operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cColour8::operator=(/* parameters */);
	cColour8::operator=(/* parameters */);
}

// Gropers.cpp:3076
void cGroper::PassRemove(cGroperPass *  apPass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3078
		cGroperPass * lpArray;

		// Gropers.cpp:3078
		U32 lSrc;

		// Gropers.cpp:3078
		U32 lDst;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cColour8::operator=(/* parameters */);
	cColour8::operator=(/* parameters */);
}

// Gropers.cpp:3088
void cGroper::PassMoveUp(cGroperPass *  apPass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3090
		U32 lIndex;

		{
			// Gropers.cpp:3090
			cGroperPass lTemp;

			operator=(/* parameters */);
			cColour8::cColour8(/* parameters */);
			cColour8::cColour8(/* parameters */);
			operator=(/* parameters */);
			cVector::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
			operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
			cVector::operator=(/* parameters */);
			cVector::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
		}
	}
}

// Gropers.cpp:3100
void cGroper::PassMoveDown(cGroperPass *  apPass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:3102
		U32 lIndex;

		{
			// Gropers.cpp:3102
			cGroperPass lTemp;

			operator=(/* parameters */);
			cColour8::cColour8(/* parameters */);
			cColour8::cColour8(/* parameters */);
			operator=(/* parameters */);
			cVector::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
			operator=(/* parameters */);
			cVector::operator=(/* parameters */);
			cVector::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
			cColour8::operator=(/* parameters */);
		}
	}
}

// Gropers.cpp:2777
void cGroperPass::BuildRGBA(const FP32  aTime, const U32 &  aRGBA, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2779
		bool lRes;

		// Gropers.cpp:2780
		FP32 lAlpha;

		// Gropers.cpp:2781
		cVector lDiff;

		// Gropers.cpp:2782
		cColour8 lColour;

	}
	cColour8::cColour8(/* parameters */);
	cColour8::SetA(/* parameters */);
	cVector::GetW(/* parameters */);
	cColour8::SetA(/* parameters */);
	cVector::operator*(/* parameters */);
	cVector::operator+=(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cColour8::SetA(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cColour8::SetRGBA(/* parameters */);
	cVector::SetZ(/* parameters */);
	cColour8::SetR(/* parameters */);
	cColour8::SetG(/* parameters */);
}

// Gropers.cpp:2205
void cGroperUV::BuildStretch(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2207
		FP32 lVal;

		// Gropers.cpp:2208
		FP32 lU;

		// Gropers.cpp:2208
		FP32 lV;

		// Gropers.cpp:2209
		cMatrix lMat;

	}
	cMatrix::SetAxisX(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cVector::SetY(/* parameters */);
	cMatrix::Mul(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	vec_madd(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
}

// Gropers.cpp:2160
void cGroperUV::BuildScroll(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2162
		cMatrix lMat;

		// Gropers.cpp:2163
		FP32 lScrollS;

		// Gropers.cpp:2164
		FP32 lScrollT;

		// Gropers.cpp:2165
		FP32 lVal;

	}
	qfmodf(/* parameters */);
	cMatrix::SetZaxisX(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::GetW(/* parameters */);
	cMatrix::SetZaxisY(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::GetZ(/* parameters */);
	cMatrix::Mul(/* parameters */);
	vec_madd(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
}

// Gropers.cpp:2132
void cGroperUV::BuildScale(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2134
		cMatrix lMat;

		// Gropers.cpp:2135
		FP32 lVal;

	}
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::Mul(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	vec_madd(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cMatrix::SetXaxisX(/* parameters */);
	cMatrix::SetYaxisY(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
}

// Gropers.cpp:2087
void cGroperUV::BuildRotate(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2089
		FP32 lDeg;

		// Gropers.cpp:2090
		S32 lIdx;

		// Gropers.cpp:2091
		FP32 lSin;

		// Gropers.cpp:2092
		FP32 lCos;

		// Gropers.cpp:2093
		cMatrix lMat;

	}
	cMatrix::SetAxisX(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	cParticleWaveFormTable::GetSin(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cMatrix::Mul(/* parameters */);
	vec_madd(/* parameters */);
	cParticleWaveFormTable::GetCos(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
}

// Gropers.cpp:2267
void cGroperUV::Update(const FP32  aTime, const cMatrix &  aMat, const cMatrix &  aProjMat, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cMatrix::operator=(/* parameters */);
}

// Gropers.cpp:2745
void cGroperPass::BuildUVs(const FP32  aTime, const cMatrix &  aMat, const cParticleRandomSeed &  aSeed, const cMatrix &  aProjMat, const bool &  aProjected) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Gropers.cpp:2747
		U8 i;

		// Gropers.cpp:2748
		bool lRes;

		cMatrix::BuildIdentity(/* parameters */);
		cMatrix::SetAxisZ(/* parameters */);
		cMatrix::SetAxisW(/* parameters */);
		cMatrix::SetAxisX(/* parameters */);
		cVector::SetX(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::SetW(/* parameters */);
	}
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
}

// Gropers.cpp:4058
void cGroperIterator::PassBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// Gropers.cpp:4096
NextPass:
	{
		// Gropers.cpp:4060
		bool lRes;

		// Gropers.cpp:4061
		cParticleRandomSeed lSeed;

	}
	{
		// Gropers.cpp:4099
		cGroperPass * lpPass;

		// Gropers.cpp:4100
		FP32 lTime;

		// Gropers.cpp:4101
		FP32 lFade;

	}
	{
		// Gropers.cpp:4105
		cGroperControl * lpControl;

		// Gropers.cpp:4106
		cMatrix lProjMat;

		// Gropers.cpp:4112
		bool lProjected;

		// Gropers.cpp:4143
		U32 * lpMats;

		// Gropers.cpp:4144
		S32 lImageIndex;

		{
			// Gropers.cpp:4174
			FP32 lIndex;

			qfmodf(/* parameters */);
			qfmodf(/* parameters */);
		}
		{
			// Gropers.cpp:4266
			FP32 lAlpha;

			// Gropers.cpp:4267
			cColour8 lColour;

			cColour8::SetA(/* parameters */);
		}
		{
			// Gropers.cpp:4228
			FP32 lValue;

			fmax2(/* parameters */);
			fmin2(/* parameters */);
		}
	}
	{
		// Gropers.cpp:4238
		FP32 lValue;

	}
}

