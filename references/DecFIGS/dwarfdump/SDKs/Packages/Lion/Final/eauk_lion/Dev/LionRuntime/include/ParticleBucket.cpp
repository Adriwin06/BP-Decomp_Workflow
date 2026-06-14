// ParticleBucket.cpp:53
void cParticleBucket::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleBucket.cpp:34
void cParticleBucket::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRandomSeed::Init(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// ParticleBucket.cpp:63
void cParticleBucket::GetpMatrix(const U32  aIndex, cMatrix *  apDest, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleBucket.cpp:65
		const cParticleEmitter & emitter;

	}
	GetEmitter(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	{
		// ParticleBucket.cpp:82
		cVector lVec;

		cMatrix::BuildIdentity(/* parameters */);
	}
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cMatrix::SetTrans(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::SetTrans(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cMatrix::operator=(/* parameters */);
}

