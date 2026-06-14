// LionChunkManager.cpp:52
struct cLionChunk {
	// LionChunkManager.cpp:124
	U32 mType;

	// LionChunkManager.cpp:125
	const void * mpData;

	// LionChunkManager.cpp:126
	cLionChunk * mpParent;

	// LionChunkManager.cpp:127
	cLionChunk * mpChild;

	// LionChunkManager.cpp:128
	cLionChunk * mpNext;

public:
	// LionChunkManager.cpp:102
	void Init(U32, const void *);

	// LionChunkManager.cpp:103
	void DeInit();

	// LionChunkManager.cpp:104
	void Link(cLionChunk *);

	// LionChunkManager.cpp:105
	void UnLink();

	// LionChunkManager.cpp:107
	void Swap(cLionChunk *);

}

// LionChunkManager.cpp:132
struct cLionChunkFactory {
public:
	// LionChunkManager.cpp:134
	cLionChunk * ChunkCreate(U32, const void *);

	// LionChunkManager.cpp:135
	void ChunkDestroy(cLionChunk *);

}

// LionChunkManager.cpp:205
void cLionChunkManager::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:783
void cLionChunkManager::ChunkGetNext(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:795
void cLionChunkManager::ChunkGetChild(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:807
void cLionChunkManager::ChunkGetType(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1457
void cLionChunkManager::ChunkIsPropertyKeyFramable(const cLionChunk *  apChunk, const char *  apPropName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1472
void cLionChunkManager::ChunkGetPropertyKeyFrameCount(const cLionChunk *  apChunk, const char *  apPropName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1487
void cLionChunkManager::ChunkGetPropertyKeyFrameTimes(const cLionChunk *  apChunk, const char *  apPropName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1502
void cLionChunkManager::ChunkGetPropertyKeyFrameValue(const cLionChunk *  apChunk, const char *  apPropName, const U32  aIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1517
void cLionChunkManager::ChunkSetPropertyKeyFrames(const cLionChunk *  apChunk, const char *  apPropName, const FP32 *  apTimes, const void *  apValues, const U32  aCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1756
void cLionChunkManager::PropertyGetNext(const sLionMemberToken *  apProp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1758
		sLionMemberToken * lpTok;

	}
}

// LionChunkManager.cpp:1780
void cLionChunkManager::PropertyGetType(const sLionMemberToken *  apProp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:1792
void cLionChunkManager::PropertyGetName(const sLionMemberToken *  apProp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1794
		const char * lpName;

	}
}

// LionChunkManager.cpp:1940
void cLionChunkManager::ChunkGetLevelCount(const cLionChunk *  apParent, const U32  aType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1942
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:1943
		U32 lCount;

	}
}

// LionChunkManager.cpp:1968
void cLionChunkManager::ChunkGetTotalCount(const cLionChunk *  apParent, const U32  aType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1970
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:1971
		U32 lCount;

	}
}

// LionChunkManager.cpp:2900
void cLionChunkManager::PropertyGetKeyStringTable(sLionMemberToken *  apProp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2902
		cKeyStringTable * lpTable;

	}
}

// LionChunkManager.cpp:2961
void cLionChunkManager::KeyStringTableGetKey(cKeyStringTable *  apKeyStringTable, const U32  aIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2963
		U32 lKey;

		cKeyStringTable::GetKeyFromIndex(/* parameters */);
	}
}

// LionChunkManager.cpp:3029
void cLionChunkManager::ChunkFindUp(const cLionChunk *  apChunk, const U32  aType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:3031
		cLionChunk * lpChunk;

	}
	{
		// LionChunkManager.cpp:3035
		const cLionChunk * lpTmp;

	}
}

// LionChunkManager.cpp:1528
void cLionChunkManager::PropertyGetFirst(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1530
		sLionMemberToken * lpTok;

	}
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
}

// LionChunkManager.cpp:1662
void cLionChunkManager::PropertyGetFirst(const char *  apChunkTypeName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1664
		sLionMemberToken * lpTok;

	}
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
}

// LionChunkManager.cpp:1815
void cLionChunkManager::ChunkGroupDeAlloc(cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1817
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:1818
		cLionChunk * lpNext;

	}
}

// LionChunkManager.cpp:445
void cLionChunkManager::ChunkHierarchyDestroy(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:447
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:448
		cLionChunk * lpNext;

		// LionChunkManager.cpp:449
		cLionChunk ** lppLast;

	}
}

// LionChunkManager.cpp:381
void cLionChunkManager::ChunkHierarchyDestroy(cGroperBindGroup *  apBindGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:383
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:384
		cLionChunk * lpNext;

		// LionChunkManager.cpp:385
		cLionChunk ** lppLast;

	}
}

// LionChunkManager.cpp:305
void cLionChunkManager::ChunkHierarchyDestroy(cGroper *  apGroper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:307
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:308
		cLionChunk * lpNext;

		// LionChunkManager.cpp:309
		cLionChunk ** lppLast;

	}
}

// LionChunkManager.cpp:218
void cLionChunkManager::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:220
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:221
		cLionChunk * lpNext;

	}
}

// LionChunkManager.cpp:2921
void cLionChunkManager::KeyStringTableGetCount(cKeyStringTable *  apKeyStringTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2923
		U32 lCount;

		cKeyStringTable::GetCount(/* parameters */);
	}
}

// LionChunkManager.cpp:2939
void cLionChunkManager::KeyStringTableGetString(cKeyStringTable *  apKeyStringTable, const U32  aIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2941
		const char * lpString;

	}
}

// LionChunkManager.cpp:506
void cLionChunkManager::ParticleDescriptorHierarchyCreate(cParticleDescriptor *  apDes, cLionChunk *  apParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:508
		cLionChunk * lpDesChunk;

		// LionChunkManager.cpp:509
		cLionChunk * lpBehChunk;

		// LionChunkManager.cpp:510
		cLionChunk * lpWaveChunk;

		// LionChunkManager.cpp:511
		const cParticleBehaviour * lpBeh;

	}
}

// LionChunkManager.cpp:476
void cLionChunkManager::ParticleHierarchyCreate(const cLionParticleEffect *  apEff, cLionChunk *  apParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:478
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:479
		cParticleDescriptor * lpDes;

	}
}

// LionChunkManager.cpp:413
void cLionChunkManager::ChunkHierarchyCreate(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:415
		cLionChunk * lpParent;

	}
}

// LionChunkManager.cpp:744
void cLionChunkManager::ChunkGetRoot(cLionEffectDefinition *  apDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:337
void cLionChunkManager::ChunkHierarchyCreate(cGroperBindGroup *  apBindGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:339
		cLionChunk * lpParent;

		// LionChunkManager.cpp:340
		U32 i;

		// LionChunkManager.cpp:340
		U32 j;

	}
	{
		// LionChunkManager.cpp:357
		cLionChunk * lpBindChunk;

		{
			// LionChunkManager.cpp:364
			cLionChunk * lpStateChunk;

		}
	}
}

// LionChunkManager.cpp:770
void cLionChunkManager::ChunkGetRoot(cGroperBindGroup *  apBind) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:240
void cLionChunkManager::ChunkHierarchyCreate(cGroper *  apGroper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:242
		cLionChunk * lpParent;

		// LionChunkManager.cpp:243
		U32 i;

		// LionChunkManager.cpp:243
		U32 j;

	}
	{
		// LionChunkManager.cpp:260
		cLionChunk * lpPassChunk;

	}
	{
		// LionChunkManager.cpp:264
		cLionChunk * lpUVChunk;

		// LionChunkManager.cpp:265
		cLionChunk * lpWaveChunk;

	}
}

// LionChunkManager.cpp:757
void cLionChunkManager::ChunkGetRoot(cGroper *  apGrp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionChunkManager.cpp:2749
void cLionChunkManager::ChunkGetDuration(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2751
		FP32 lDur;

		{
			// LionChunkManager.cpp:2787
			cParticleDescriptor * lpDes;

		}
	}
	{
		// LionChunkManager.cpp:2760
		cLionEffectDefinition * lpEff;

		cLionEffectDefinition::GetDurationMax(/* parameters */);
	}
	{
		// LionChunkManager.cpp:2769
		cLionParticleEffect * lpEff;

	}
	{
		// LionChunkManager.cpp:2778
		cParticleBehaviour * lpBeh;

	}
}

// LionChunkManager.cpp:1076
void cLionChunkManager::ChunkGetPropertyValue(const cLionChunk *  apChunk, const char *  apPropName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1078
		void * lpValue;

		// LionChunkManager.cpp:1079
		sLionMemberToken * lpTok;

		// LionChunkManager.cpp:1197
		U8 * lpData;

	}
	{
		// LionChunkManager.cpp:1202
		U32 lFlag;

	}
}

// LionChunkManager.cpp:819
void cLionChunkManager::ChunkDec(cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:883
		cLionChunk * lpPrev;

		// LionChunkManager.cpp:883
		cLionChunk ** lppStart;

	}
	{
		// LionChunkManager.cpp:836
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:846
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:862
		cGroper * lpGrp;

	}
	{
		// LionChunkManager.cpp:878
		cGroperPass * lpPas;

	}
	{
		// LionChunkManager.cpp:854
		cGroperBindGroup * lpGrp;

	}
	{
		// LionChunkManager.cpp:870
		cGroperBinding * lpBng;

	}
	{
		// LionChunkManager.cpp:830
		cLionParticleEffect * lpEff;

	}
}

// LionChunkManager.cpp:946
void cLionChunkManager::ChunkInc(cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:950
		void * lpData;

		{
			// LionChunkManager.cpp:1013
			cLionChunk * lpItem;

			// LionChunkManager.cpp:1013
			cLionChunk ** lppLast;

		}
	}
	{
		// LionChunkManager.cpp:991
		cGroper * lpGrp;

	}
	{
		// LionChunkManager.cpp:965
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:975
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:1006
		cGroperPass * lpPas;

	}
	{
		// LionChunkManager.cpp:983
		cGroperBindGroup * lpGrp;

	}
	{
		// LionChunkManager.cpp:959
		cLionParticleEffect * lpEff;

	}
	{
		// LionChunkManager.cpp:998
		cGroperBinding * lpBng;

	}
}

// LionChunkManager.cpp:3006
void cLionChunkManager::EffectStart(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:3008
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:3009
		cLionEffectDefinition * lpDef;

	}
}

// LionChunkManager.cpp:2983
void cLionChunkManager::EffectStop(const cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2985
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:2986
		cLionEffectDefinition * lpDef;

	}
}

// LionChunkManager.cpp:2350
void cLionChunkManager::ChunkRemove(cLionChunk *  apChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:2352
		cLionChunk * lpParent;

	}
	{
		// LionChunkManager.cpp:2356
		const cLionParticleEffectManager & lParticleEffectManager;

	}
	{
		// LionChunkManager.cpp:2727
		cGroperUV * lpUV;

	}
	{
		// LionChunkManager.cpp:2714
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2701
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2688
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2675
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2662
		cGroperBinding * lpBinds;

	}
	{
		// LionChunkManager.cpp:2646
		cGroperBindGroup * lpGrp;

	}
	{
		// LionChunkManager.cpp:2633
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2620
		cGroper * lpGro;

	}
	{
		// LionChunkManager.cpp:2453
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2443
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2433
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2473
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2463
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2416
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:2406
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:2395
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:2370
		cLionEffectDefinition * lpDef;

		cLionEffectDefinition::SetParticles(/* parameters */);
	}
	{
		// LionChunkManager.cpp:2388
		cLionParticleEffect * lpEff;

	}
}

// LionChunkManager.cpp:1997
void cLionChunkManager::ChunkAdd(cLionChunk *  apParent, const char *  apChunkTypeName, const char *  apSubTypeName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1999
		cLionChunk * lpChunk;

		// LionChunkManager.cpp:2000
		U32 lType;

		{
			// LionChunkManager.cpp:2008
			const cLionParticleEffectManager & lParticleEffectManager;

			{
				// LionChunkManager.cpp:2322
				cGroperUV * lpUV;

			}
		}
	}
	{
		// LionChunkManager.cpp:2017
		cLionEffectDefinition * lpDef;

		cLionEffectDefinition::SetParticles(/* parameters */);
	}
	{
		// LionChunkManager.cpp:2029
		cLionParticleEffect * lpEff;

	}
	{
		// LionChunkManager.cpp:2047
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:2242
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2256
		cGroperBindGroup * lpGrp;

	}
	{
		// LionChunkManager.cpp:2267
		cGroperBinding * lpBinds;

	}
	{
		// LionChunkManager.cpp:2278
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2289
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2300
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2311
		cGroperPass * lpPass;

	}
	{
		// LionChunkManager.cpp:2075
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2085
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2095
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2231
		cGroper * lpGro;

	}
	{
		// LionChunkManager.cpp:2105
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2115
		cParticleBehaviour * lpBeh;

	}
	{
		// LionChunkManager.cpp:2057
		cParticleDescriptor * lpDes;

	}
	{
		// LionChunkManager.cpp:2037
		cParticleDescriptor * lpDes;

	}
}

// LionChunkManager.cpp:1235
void cLionChunkManager::ChunkSetPropertyValue(const cLionChunk *  apChunk, const char *  apPropName, const void *  apValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChunkManager.cpp:1238
		sLionMemberToken * lpTok;

		// LionChunkManager.cpp:1355
		U8 * lpData;

	}
	{
		// LionChunkManager.cpp:1358
		char * lpString;

	}
	{
		// LionChunkManager.cpp:1421
		cLionChunk * lpParent;

	}
	{
		// LionChunkManager.cpp:1373
		U32 * lpValue;

		// LionChunkManager.cpp:1374
		U32 * lpFlag;

	}
	{
		// LionChunkManager.cpp:1427
		cParticleDescriptor * lpDes;

	}
}

// _built-in_
namespace :: {
	// LionChunkManager.cpp:143
	sKeyString[33] gLionChunkTypeStrings;

	// LionChunkManager.cpp:189
	cKeyStringTable gLionChunkTypeTable;

}

// LionChunkManager.cpp:191
