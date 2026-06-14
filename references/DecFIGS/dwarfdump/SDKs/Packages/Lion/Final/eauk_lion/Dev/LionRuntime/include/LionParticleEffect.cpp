// LionParticleEffect.cpp:220
void cLionParticleEffect::GetGlobalDescriptorsCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleEffect.cpp:140
void cLionParticleEffect::DescriptorMoveUp(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:142
		cParticleDescriptor * lpPrev;

		// LionParticleEffect.cpp:142
		cParticleDescriptor ** lppStart;

		cParticleDescriptor::GetNextDescriptor(/* parameters */);
		cParticleDescriptor::GetNextDescriptor(/* parameters */);
	}
}

// LionParticleEffect.cpp:152
void cLionParticleEffect::DescriptorMoveDown(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:154
		cParticleDescriptor * lpItem;

		// LionParticleEffect.cpp:154
		cParticleDescriptor ** lppLast;

		cParticleDescriptor::GetNextDescriptor(/* parameters */);
		cParticleDescriptor::GetNextDescriptor(/* parameters */);
		cParticleDescriptor::GetNextDescriptor(/* parameters */);
	}
}

// LionParticleEffect.cpp:232
void cLionParticleEffect::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:234
		cParticleDescriptor * lpDes;

		// LionParticleEffect.cpp:235
		cParticleDescriptor * lpDesNext;

	}
	{
		// LionParticleEffect.cpp:251
		U8 * lpBY;

	}
	{
		// LionParticleEffect.cpp:252
		U8 * lpBY;

	}
}

// LionParticleEffect.cpp:264
void cLionParticleEffect::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:266
		cParticleDescriptor * lpDes;

	}
}

// LionParticleEffect.cpp:288
void cLionParticleEffect::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:290
		cParticleDescriptor * lpDes;

	}
}

// LionParticleEffect.cpp:313
void cLionParticleEffect::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:315
		cLionParticleEffect * lpEff;

		// LionParticleEffect.cpp:316
		cParticleDescriptor * lpDes;

		// LionParticleEffect.cpp:317
		cParticleDescriptor ** lppLast;

	}
	cParticleDescriptor::GetNextDescriptor(/* parameters */);
}

// LionParticleEffect.cpp:344
void cLionParticleEffect::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:346
		cParticleDescriptor * lpDes;

	}
}

// LionParticleEffect.cpp:74
void cLionParticleEffect::DescriptorAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:76
		cParticleDescriptor * lpDes;

	}
	{
		// LionParticleEffect.cpp:86
		cParticleDescriptor * lpItem;

		// LionParticleEffect.cpp:86
		cParticleDescriptor ** lppLast;

		cParticleDescriptor::GetNextDescriptor(/* parameters */);
	}
}

// LionParticleEffect.cpp:164
void cLionParticleEffect::GetDurationMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:166
		FP32 lDuration;

		// LionParticleEffect.cpp:167
		cParticleDescriptor * lpDes;

	}
	{
		// LionParticleEffect.cpp:173
		FP32 lDurTmp;

		fmax2(/* parameters */);
	}
}

// LionParticleEffect.cpp:197
void cLionParticleEffect::GetRadius() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:199
		FP32 lRad;

		// LionParticleEffect.cpp:200
		cParticleDescriptor * lpDes;

	}
	fmax2(/* parameters */);
}

// LionParticleEffect.cpp:122
void cLionParticleEffect::DescriptorRemove(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:127
		cParticleDescriptor * lpItem;

		// LionParticleEffect.cpp:127
		cParticleDescriptor ** lppLast;

	}
	cParticleDescriptor::GetNextDescriptor(/* parameters */);
	cParticleDescriptor::GetNextDescriptor(/* parameters */);
}

// LionParticleEffect.cpp:50
void cLionParticleEffect::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:52
		cParticleDescriptor * lpDes;

		// LionParticleEffect.cpp:53
		cParticleDescriptor * lpNext;

	}
}

// LionParticleEffect.cpp:399
void cLionParticleEffect::UnBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:401
		cParticleDescriptor * lpDes;

	}
	{
		// LionParticleEffect.cpp:408
		cParticleBehaviour * lpBeh;

		cParticleDescriptor::GetBehaviours(/* parameters */);
	}
}

// LionParticleEffect.cpp:97
void cLionParticleEffect::DescriptorClone(const cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:99
		cParticleDescriptor * lpDes;

	}
	{
		// LionParticleEffect.cpp:109
		cParticleDescriptor * lpItem;

		// LionParticleEffect.cpp:109
		cParticleDescriptor ** lppLast;

		cParticleDescriptor::GetNextDescriptor(/* parameters */);
	}
}

// LionParticleEffect.cpp:366
void cLionParticleEffect::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleEffect.cpp:368
		cParticleDescriptor * lpDes;

	}
	{
		// LionParticleEffect.cpp:375
		cParticleBehaviour * lpBeh;

		cParticleDescriptor::GetBehaviours(/* parameters */);
	}
}

// LionParticleEffect.cpp:36
void cLionParticleEffect::Init(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ELFHASH::BuildHash(/* parameters */);
}

// _built-in_
namespace :: {
	// LionParticleEffect.cpp:22
	extern S32 gLionParticleEffectDesCount;

}

