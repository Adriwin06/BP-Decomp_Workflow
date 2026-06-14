// ParticleDescriptor.cpp:492
void cParticleDescriptor::DescriptorMoveUp(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:494
		cParticleDescriptor * lpPrev;

		// ParticleDescriptor.cpp:494
		cParticleDescriptor ** lppStart;

	}
}

// ParticleDescriptor.cpp:429
void cParticleDescriptor::BehaviourMoveUp(cParticleBehaviour *  apBeh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:431
		cParticleBehaviour * lpPrev;

		// ParticleDescriptor.cpp:431
		cParticleBehaviour ** lppStart;

	}
}

// ParticleDescriptor.cpp:480
void cParticleDescriptor::DescriptorMoveDown(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:482
		cParticleDescriptor * lpItem;

		// ParticleDescriptor.cpp:482
		cParticleDescriptor ** lppLast;

	}
}

// ParticleDescriptor.cpp:417
void cParticleDescriptor::BehaviourMoveDown(cParticleBehaviour *  apBeh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:419
		cParticleBehaviour * lpItem;

		// ParticleDescriptor.cpp:419
		cParticleBehaviour ** lppLast;

	}
}

// ParticleDescriptor.cpp:204
void cParticleDescriptor::Build() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:37
void cParticleDescriptor::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:225
void cParticleDescriptor::UnBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:285
void cParticleDescriptor::operator=(const const cParticleDescriptor &  aDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:310
void cParticleDescriptor::Lerp(const cParticleDescriptor *  apDes0, const cParticleDescriptor *  apDes1, const FP32  aWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:563
void cParticleDescriptor::GetBehaviour(const U32  aIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:565
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:566
		U32 i;

	}
}

// ParticleDescriptor.cpp:637
void cParticleDescriptor::GetGlobalBehaviourCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:649
void cParticleDescriptor::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:651
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:652
		cParticleBehaviour * lpBehNext;

		// ParticleDescriptor.cpp:653
		cParticleDescriptor * lpChild;

		// ParticleDescriptor.cpp:654
		cParticleDescriptor * lpChildNext;

	}
	{
		// ParticleDescriptor.cpp:696
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:697
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:698
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:699
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:700
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:701
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:703
		U8 * lpBY;

	}
	{
		// ParticleDescriptor.cpp:702
		U8 * lpBY;

	}
}

// ParticleDescriptor.cpp:767
void cParticleDescriptor::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:769
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:770
		cParticleDescriptor * lpChild;

	}
}

// ParticleDescriptor.cpp:810
void cParticleDescriptor::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:812
		cParticleDescriptor * lpDes;

		// ParticleDescriptor.cpp:813
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:814
		cParticleBehaviour ** lppLast;

		// ParticleDescriptor.cpp:815
		cParticleDescriptor * lpChild;

		// ParticleDescriptor.cpp:816
		cParticleDescriptor ** lppChildLast;

	}
}

// ParticleDescriptor.cpp:862
void cParticleDescriptor::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:864
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:865
		cParticleDescriptor * lpChild;

	}
}

// ParticleDescriptor.cpp:901
void cParticleDescriptor::ToConsole(U32  indent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:715
void cParticleDescriptor::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:717
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:718
		cParticleDescriptor * lpChild;

	}
}

// ParticleDescriptor.cpp:392
void cParticleDescriptor::BehaviourRemove(cParticleBehaviour *  apBeh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:396
		const cLionParticleEffectManager & lParticleEffectManager;

		{
			// ParticleDescriptor.cpp:398
			cParticleBehaviour * lpItem;

			// ParticleDescriptor.cpp:398
			cParticleBehaviour ** lppLast;

		}
	}
}

// ParticleDescriptor.cpp:442
void cParticleDescriptor::DescriptorAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:444
		cParticleDescriptor * lpDes;

	}
}

// ParticleDescriptor.cpp:504
void cParticleDescriptor::MaterialAdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:506
		cParticleMaterial * lpMat;

	}
}

// ParticleDescriptor.cpp:237
void cParticleDescriptor::GetDurationMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:239
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:240
		FP32 lDuration;

	}
	fmax2(/* parameters */);
	{
		// ParticleDescriptor.cpp:257
		FP32 lChildDur;

	}
}

// ParticleDescriptor.cpp:587
void cParticleDescriptor::GetRadius() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:589
		FP32 lRad;

		// ParticleDescriptor.cpp:590
		cParticleBehaviour * lpBeh;

		fmax2(/* parameters */);
	}
}

// ParticleDescriptor.cpp:611
void cParticleDescriptor::IsChildOf(const const cParticleDescriptor &  apParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:613
		U32 lRes;

	}
}

// ParticleDescriptor.cpp:526
void cParticleDescriptor::MaterialRemove() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:542
void cParticleDescriptor::MaterialRemove(cParticleMaterial *  apMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptor.cpp:75
void cParticleDescriptor::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:77
		const cLionParticleEffectManager & lParticleEffectManager;

		// ParticleDescriptor.cpp:79
		cParticleDescriptor * lpDes;

		// ParticleDescriptor.cpp:80
		cParticleDescriptor * lpNext;

		// ParticleDescriptor.cpp:81
		cParticleBehaviour * lpBeh;

		// ParticleDescriptor.cpp:82
		cParticleBehaviour * lpBehNext;

	}
	{
		// ParticleDescriptor.cpp:124
		cParticleDescriptor * lpItem;

		// ParticleDescriptor.cpp:124
		cParticleDescriptor ** lppLast;

	}
}

// ParticleDescriptor.cpp:463
void cParticleDescriptor::DescriptorRemove(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:467
		cParticleDescriptor * lpItem;

		// ParticleDescriptor.cpp:467
		cParticleDescriptor ** lppLast;

	}
}

// ParticleDescriptor.cpp:349
void cParticleDescriptor::BehaviourAdd(const cLionParticleEffectManager &  lParticleEffectManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:351
		cParticleBehaviour * lpBeh;

	}
	{
		// ParticleDescriptor.cpp:373
		cParticleBehaviour * lpItem;

		// ParticleDescriptor.cpp:373
		cParticleBehaviour ** lppLast;

	}
}

// ParticleDescriptor.cpp:136
void cParticleDescriptor::CloneInit(const cParticleDescriptor *  apDes, cParticleDescriptor *  apParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleDescriptor.cpp:138
		cParticleBehaviour * lpBehSrc;

		// ParticleDescriptor.cpp:139
		cParticleBehaviour * lpBehDst;

	}
	{
		// ParticleDescriptor.cpp:174
		cParticleBehaviour * lpItem;

		// ParticleDescriptor.cpp:174
		cParticleBehaviour ** lppLast;

	}
	{
		// ParticleDescriptor.cpp:184
		cParticleDescriptor * lpDes;

	}
}

// _built-in_
namespace :: {
	// ParticleDescriptor.cpp:23
	extern S32 gParticleDescriptorBehCount;

}

