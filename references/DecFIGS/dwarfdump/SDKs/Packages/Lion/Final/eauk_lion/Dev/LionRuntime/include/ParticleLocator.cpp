// ParticleLocator.cpp:95
void cParticleLocator::Teleport(const const cMatrix &  aMat, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cQuat::FromMatrix(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cTime::operator=(/* parameters */);
	cVector::GetX(/* parameters */);
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	cVector::Zero(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
}

// ParticleLocator.cpp:27
void cParticleLocator::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleLocator.cpp:29
		U32 i;

		cMatrix::BuildIdentity(/* parameters */);
		cVector::Zero(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetW(/* parameters */);
		cTime::BuildZero(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::Zero(/* parameters */);
		cTime::BuildZero(/* parameters */);
		cQuat::BuildIdentity(/* parameters */);
		cVector::SetX(/* parameters */);
		cQuat::SetW(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
	}
}

// ParticleLocator.cpp:115
void cParticleLocator::GetMat(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cTime::operator!=(/* parameters */);
	{
		// ParticleLocator.cpp:119
		FP32 lGameTimeDiff;

		// ParticleLocator.cpp:120
		FP32 lWeight;

		// ParticleLocator.cpp:121
		U32 lIndexCurr;

		cTime::GetTimeDiffSeconds(/* parameters */);
		{
			// ParticleLocator.cpp:134
			cMatrix lMat0;

			// ParticleLocator.cpp:134
			cMatrix lMat1;

			cTime::GetTimeDiffSeconds(/* parameters */);
			fmin2(/* parameters */);
			fmax2(/* parameters */);
			prefetch(/* parameters */);
			cQuat::ToMatrix(/* parameters */);
			cMatrix::Lerp(/* parameters */);
			cMatrix::SetXaxisX(/* parameters */);
			cMatrix::SetYaxisX(/* parameters */);
			cQuat::GetZ(/* parameters */);
			cQuat::GetY(/* parameters */);
			cQuat::GetW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cMatrix::SetZaxisX(/* parameters */);
			cMatrix::SetWaxisX(/* parameters */);
			cQuat::ToMatrix(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cMatrix::SetAxisX(/* parameters */);
			cMatrix::SetYaxisY(/* parameters */);
			cMatrix::SetZaxisZ(/* parameters */);
			cMatrix::SetXaxisZ(/* parameters */);
			cMatrix::SetAxisZ(/* parameters */);
			cMatrix::SetYaxisZ(/* parameters */);
			cMatrix::SetXaxisY(/* parameters */);
			cMatrix::SetAxisY(/* parameters */);
			cMatrix::SetZaxisY(/* parameters */);
			cVector::GetW(/* parameters */);
			cMatrix::SetXaxisW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cMatrix::SetYaxisW(/* parameters */);
			cMatrix::SetZaxisW(/* parameters */);
			cMatrix::SetXaxisX(/* parameters */);
			cMatrix::SetAxisW(/* parameters */);
			cMatrix::SetYaxisX(/* parameters */);
			cMatrix::SetWaxisY(/* parameters */);
			cMatrix::SetWaxisZ(/* parameters */);
			cMatrix::SetWaxisW(/* parameters */);
			cQuat::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cQuat::GetY(/* parameters */);
			cQuat::GetW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cMatrix::SetTrans(/* parameters */);
			cMatrix::SetAxisX(/* parameters */);
			cMatrix::SetYaxisY(/* parameters */);
			cMatrix::SetZaxisZ(/* parameters */);
			cMatrix::SetXaxisZ(/* parameters */);
			cMatrix::SetZaxisX(/* parameters */);
			cMatrix::SetXaxisY(/* parameters */);
			cMatrix::SetAxisY(/* parameters */);
			cMatrix::SetYaxisZ(/* parameters */);
			cMatrix::SetZaxisY(/* parameters */);
			cVector::GetY(/* parameters */);
			cMatrix::SetXaxisW(/* parameters */);
			cMatrix::SetWaxisX(/* parameters */);
			cMatrix::SetYaxisW(/* parameters */);
			cMatrix::SetWaxisW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cMatrix::SetZaxisW(/* parameters */);
			cVector::GetX(/* parameters */);
			cMatrix::SetAxisW(/* parameters */);
			cMatrix::SetWaxisY(/* parameters */);
			cMatrix::SetWaxisZ(/* parameters */);
			cVector::cVector(/* parameters */);
			cVector::SetX(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::cVector(/* parameters */);
			cMatrix::SetTrans(/* parameters */);
			cVector::Mul4(/* parameters */);
			cVector::SetW(/* parameters */);
			vec_vspltw(/* parameters */);
			cMatrix::SetAxisW(/* parameters */);
			cVector::Mul4(/* parameters */);
			cVector::Mul4(/* parameters */);
			cVector::Mul4(/* parameters */);
			cVector::Mul4(/* parameters */);
			cVector::Mul4(/* parameters */);
			cMatrix::SetAxisX(/* parameters */);
			cVector::Add4(/* parameters */);
			cMatrix::SetAxisY(/* parameters */);
			cVector::Add4(/* parameters */);
			vec_and(/* parameters */);
			cVector::Mul4(/* parameters */);
			cVector::Add4(/* parameters */);
			cVector::Add4(/* parameters */);
			vec_and(/* parameters */);
			vec_sel(/* parameters */);
			cMatrix::SetAxisZ(/* parameters */);
		}
		cTime::operator=(/* parameters */);
	}
	cQuat::ToMatrix(/* parameters */);
	cMatrix::SetTrans(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cMatrix::SetWaxisX(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::GetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::GetW(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetW(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetW(/* parameters */);
	cMatrix::SetZaxisW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::GetW(/* parameters */);
	cMatrix::SetWaxisY(/* parameters */);
	cMatrix::SetWaxisZ(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
}

// ParticleLocator.cpp:53
void cParticleLocator::Update(const const cMatrix &  aMat, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleLocator.cpp:55
		U32 lIndexCurr;

		// ParticleLocator.cpp:56
		FP32 lTimeDiff;

		cQuat::FromMatrix(/* parameters */);
	}
	cVector::operator=(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cTime::operator=(/* parameters */);
	cVector::GetX(/* parameters */);
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	cVector::Zero(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	cTime::GetTimeDiffSeconds(/* parameters */);
	cVector::Sub(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::operator/=(/* parameters */);
}

