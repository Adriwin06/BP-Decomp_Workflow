// ParticleWaveForm.cpp:355
void cParticleWaveForm::Delocate(const U32  aEndianTwiddleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleWaveForm.cpp:382
void cParticleWaveForm::GetSerialiseSize(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleWaveForm.cpp:397
void cParticleWaveForm::Serialise(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:399
		cParticleWaveForm * lpWave;

	}
}

// ParticleWaveForm.cpp:175
void cParticleWaveFormTable::NoiseTableBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:177
		S32 i;

		// ParticleWaveForm.cpp:178
		U32 lRand;

		// ParticleWaveForm.cpp:179
		S32 lClip;

		// ParticleWaveForm.cpp:180
		FP32 lVal;

	}
}

// ParticleWaveForm.cpp:204
void cParticleWaveFormTable::SawToothTableBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:206
		S32 i;

		// ParticleWaveForm.cpp:207
		FP32 lVal;

	}
}

// ParticleWaveForm.cpp:225
void cParticleWaveFormTable::SawToothInvTableBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:227
		S32 i;

		// ParticleWaveForm.cpp:228
		FP32 lVal;

	}
}

// ParticleWaveForm.cpp:247
void cParticleWaveFormTable::SinTableBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:249
		S32 i;

		// ParticleWaveForm.cpp:250
		FP32 lVal;

		std(/* parameters */);
	}
}

// ParticleWaveForm.cpp:271
void cParticleWaveFormTable::SquareTableBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:273
		S32 i;

		// ParticleWaveForm.cpp:274
		FP32 lVal;

	}
}

// ParticleWaveForm.cpp:297
void cParticleWaveFormTable::TriangleTableBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:299
		S32 i;

		// ParticleWaveForm.cpp:300
		FP32 lVal;

	}
}

// ParticleWaveForm.cpp:158
void cParticleWaveFormTable::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleWaveForm.cpp:328
void cParticleWaveForm::Lerp(const const cParticleWaveForm &  aWave0, const const cParticleWaveForm &  aWave1, const FP32  aWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleWaveForm.cpp:370
void cParticleWaveForm::Relocate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleWaveForm.cpp:416
void cParticleWaveForm::Remap(const cLionSerialiser &  aSer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleWaveForm.cpp:31
void cParticleWaveForm::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetBase(/* parameters */);
	SetType(/* parameters */);
	SetAmp(/* parameters */);
	SetPhaseVariance(/* parameters */);
	SetFreq(/* parameters */);
	SetClampMin(/* parameters */);
	SetClampMax(/* parameters */);
	SetPhase(/* parameters */);
	SetAmpVariance(/* parameters */);
	SetBaseVariance(/* parameters */);
	SetClampMaxVariance(/* parameters */);
	SetClampMinVariance(/* parameters */);
	SetFreqVariance(/* parameters */);
}

// ParticleWaveForm.cpp:56
void cParticleWaveForm::Evaluate(const FP32  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:58
		FP32 lVal;

		// ParticleWaveForm.cpp:59
		FP32 lVal0;

		// ParticleWaveForm.cpp:60
		FP32 lVal1;

		// ParticleWaveForm.cpp:61
		S32 lIndex;

		GetPhase(/* parameters */);
		GetClampMax(/* parameters */);
		fmin2(/* parameters */);
		GetClampMin(/* parameters */);
		fmax2(/* parameters */);
	}
	cParticleWaveFormTable::GetNoise(/* parameters */);
	cParticleWaveFormTable::GetTriangle(/* parameters */);
	cParticleWaveFormTable::GetSin(/* parameters */);
	cParticleWaveFormTable::GetSawToothInv(/* parameters */);
	cParticleWaveFormTable::GetSawTooth(/* parameters */);
	cParticleWaveFormTable::GetSquare(/* parameters */);
	cParticleWaveFormTable::GetNoise(/* parameters */);
}

// ParticleWaveForm.cpp:125
void cParticleWaveForm::Evaluate(const FP32  aTime, const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleWaveForm.cpp:127
		cParticleWaveForm lWaveForm;

		// ParticleWaveForm.cpp:128
		FP32 lVal;

	}
	GetType(/* parameters */);
	SetType(/* parameters */);
	SetAmp(/* parameters */);
	SetBase(/* parameters */);
	SetClampMin(/* parameters */);
	SetClampMax(/* parameters */);
	SetFreq(/* parameters */);
	SetPhase(/* parameters */);
}

// ParticleWaveForm.cpp:18
