// ParticleBucketManager.cpp:266
void cParticleBucketManager::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:268
		U32 i;

		cParticleBucket::Clear(/* parameters */);
	}
}

// ParticleBucketManager.cpp:76
void cParticleBucketManager::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucketManager.cpp:93
void cParticleBucketManager::GameInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucketManager.cpp:105
void cParticleBucketManager::GameDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucketManager.cpp:117
void cParticleBucketManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucketManager.cpp:647
void cParticleBucketManager::GetVectorBucketActiveBit(const U32  aIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucketManager.cpp:419
void cParticleBucketManager::GetVecBucketUsedBitCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:421
		U32 lCount;

		// ParticleBucketManager.cpp:422
		U32 i;

	}
}

// ParticleBucketManager.cpp:684
void cParticleBucketManager::GetMatrixBucketActiveBit(const U32  aIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucketManager.cpp:699
void cParticleBucketManager::SetMatrixBucketActiveBit(const U32  aIndex, const U32  aBit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:701
		U32 lMask;

	}
}

// ParticleBucketManager.cpp:574
void cParticleBucketManager::MatrixBucketFree(cMatrix *  apMats) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:576
		U32 lOffset;

	}
}

// ParticleBucketManager.cpp:542
void cParticleBucketManager::MatrixBucketAlloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:545
		U32 i;

		// ParticleBucketManager.cpp:547
		cMatrix * lpMats;

	}
	{
		// ParticleBucketManager.cpp:557
		U8 * lpBase;

	}
}

// ParticleBucketManager.cpp:662
void cParticleBucketManager::SetVectorBucketActiveBit(const U32  aIndex, const U32  aBit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:664
		U32 lMask;

	}
}

// ParticleBucketManager.cpp:627
void cParticleBucketManager::VectorBucketFree(cVector *  apVecs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:629
		U32 lOffset;

	}
}

// ParticleBucketManager.cpp:594
void cParticleBucketManager::VectorBucketAlloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:597
		U32 i;

		// ParticleBucketManager.cpp:599
		cVector * lpVecs;

	}
	{
		// ParticleBucketManager.cpp:611
		U8 * lpBase;

	}
}

// ParticleBucketManager.cpp:336
void cParticleBucketManager::GetUsedCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:338
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:339
		U32 lCount;

	}
}

// ParticleBucketManager.cpp:360
void cParticleBucketManager::GetDynamicUsedCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:362
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:363
		U32 lCount;

		{
			// ParticleBucketManager.cpp:372
			cParticleEmitter * lpEmitter;

			// ParticleBucketManager.cpp:373
			const cParticleDescriptor * lpDescriptor;

		}
	}
}

// ParticleBucketManager.cpp:479
void cParticleBucketManager::GetMatBucketUsedCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:481
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:482
		U32 lCount;

		{
			// ParticleBucketManager.cpp:489
			cParticleEmitter * p_emitter;

		}
	}
}

// ParticleBucketManager.cpp:392
void cParticleBucketManager::GetVecBucketUsedCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:394
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:395
		U32 lCount;

	}
}

// ParticleBucketManager.cpp:283
void cParticleBucketManager::GetParticleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:285
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:286
		U32 lCount;

	}
}

// ParticleBucketManager.cpp:305
void cParticleBucketManager::GetDynamicParticleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:307
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:308
		U32 lCount;

		{
			// ParticleBucketManager.cpp:315
			cParticleEmitter * p_emitter;

			// ParticleBucketManager.cpp:317
			const cParticleDescriptor * p_descriptor;

		}
	}
}

// ParticleBucketManager.cpp:444
void cParticleBucketManager::GetVecParticleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:446
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:447
		U32 lCount;

		{
			// ParticleBucketManager.cpp:454
			U32 count;

			cParticleBucket::GetParticleCount(/* parameters */);
			{
				// ParticleBucketManager.cpp:458
				cParticleEmitter * p_emitter;

			}
		}
	}
}

// ParticleBucketManager.cpp:508
void cParticleBucketManager::GetMatParticleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:510
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:511
		U32 lCount;

		{
			// ParticleBucketManager.cpp:517
			U32 count;

			cParticleBucket::GetParticleCount(/* parameters */);
			{
				// ParticleBucketManager.cpp:521
				cParticleEmitter * p_emitter;

			}
		}
	}
}

// ParticleBucketManager.cpp:230
void cParticleBucketManager::Free(cParticleBucket *  pBucket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:246
		cParticleEmitter * p_emitter;

		cParticleBucket::GetMatrices(/* parameters */);
		cParticleBucket::SetMatrices(/* parameters */);
		cParticleBucket::SetVectorArray(/* parameters */);
		cParticleBucket::GetEmitter(/* parameters */);
		{
			// ParticleBucketManager.cpp:254
			cParticleBucket * lpItem;

			// ParticleBucketManager.cpp:254
			cParticleBucket ** lppLast;

			cParticleBucket::GetpManagerNext(/* parameters */);
		}
	}
}

// ParticleBucketManager.cpp:166
void cParticleBucketManager::BucketAlloc(const U32  aPriority, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:168
		cParticleBucket * lpBuck;

		// ParticleBucketManager.cpp:169
		cParticleBucket * lpOldBuck;

		// ParticleBucketManager.cpp:170
		S32 lDiff;

		// ParticleBucketManager.cpp:171
		S32 lDiffMax;

	}
	{
		// ParticleBucketManager.cpp:178
		cParticleBucket * lpItem;

		// ParticleBucketManager.cpp:178
		cParticleBucket ** lppLast;

		cParticleBucket::GetpManagerNext(/* parameters */);
	}
	cTime::GetTimeDiff(/* parameters */);
	{
		// ParticleBucketManager.cpp:192
		cParticleBucket * lpItem;

		// ParticleBucketManager.cpp:192
		cParticleBucket ** lppLast;

		cParticleBucket::GetpManagerNext(/* parameters */);
	}
	{
		// ParticleBucketManager.cpp:216
		cParticleBucket * lpItem;

		// ParticleBucketManager.cpp:216
		cParticleBucket ** lppLast;

		cParticleBucket::GetpManagerNext(/* parameters */);
	}
}

// ParticleBucketManager.cpp:130
void cParticleBucketManager::AllocateBucket(const U32  aPriority, const const cTime &  aTime, const cParticleDescriptor::DynamicBucketType  eDynamicFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:132
		cParticleBucket * lpBuck;

		cParticleBucket::SetMatrices(/* parameters */);
		cParticleBucket::SetVectorArray(/* parameters */);
		cParticleBucket::Clear(/* parameters */);
	}
	cParticleBucket::SetMatrices(/* parameters */);
	cParticleBucket::SetVectorArray(/* parameters */);
	cParticleBucket::SetVectorArray(/* parameters */);
	cParticleBucket::SetMatrices(/* parameters */);
}

// ParticleBucketManager.cpp:30
void cParticleBucketManager::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator, const U32  aBucketCount, const U32  aMatrixBucketCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucketManager.cpp:32
		U32 i;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	cParticleBucket::SetpManagerNext(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	cParticleBucket::SetMatrices(/* parameters */);
}

