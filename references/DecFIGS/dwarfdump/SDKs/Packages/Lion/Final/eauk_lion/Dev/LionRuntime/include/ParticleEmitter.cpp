// ParticleEmitter.cpp:816
struct BaseColourWithVarianceBehaviour {
public:
	// ParticleEmitter.cpp:820
	void Process(const cParticleEmitter::ParticleBuildData &, const cParticleBehaviour &, RenderedParticle &, cParticleRandomSeed &);

}

// ParticleEmitter.cpp:886
struct ColourStepsBehaviour {
public:
	// ParticleEmitter.cpp:889
	void Process(const cParticleBehaviour &, RenderedParticle &);

}

// ParticleEmitter.cpp:1020
struct AlphaFadeBehaviour {
public:
	// ParticleEmitter.cpp:1023
	void Process(const cParticleEmitter::ParticleBuildData &, RenderedParticle &);

}

// ParticleEmitter.cpp:1048
struct RotationBehaviour {
public:
	// ParticleEmitter.cpp:1052
	void Process(const cParticleBehaviour &, sParticleNucleus &, RenderedParticle &, VecFloat);

}

// ParticleEmitter.cpp:1100
struct SizeBehaviour {
public:
	// ParticleEmitter.cpp:1104
	void Process(const cParticleBehaviour &, const cParticleEmitter::ParticleBuildData &, sParticleNucleus &, RenderedParticle &, VecFloat);

}

// ParticleEmitter.cpp:1170
struct DragBehaviour {
public:
	// ParticleEmitter.cpp:1174
	void Process(const cParticleEmitter::ParticleBuildData &, const cParticleBehaviour &, sParticleNucleus &, VecFloat);

}

// ParticleEmitter.cpp:1269
struct MultiFrameBehaviour {
public:
	// ParticleEmitter.cpp:1274
	void Process(const cParticleEmitter::ParticleBuildData &, cParticleMaterial *, RenderedParticle &, sParticleNucleus &, VecFloat, cParticleRandomSeed &);

}

// ParticleEmitter.cpp:1922
struct MatrixSimulationHelper {
private:
	// ParticleEmitter.cpp:1949
	cMatrix * mpMatrices;

public:
	// ParticleEmitter.cpp:1925
	MatrixSimulationHelper(cMatrix *);

	// ParticleEmitter.cpp:1933
	void UpdateLocatorVelocity(cParticleBucket *, const cParticleBehaviour &, const cParticleDescriptor &, RenderedParticle &, uint32_t, uint32_t, cMatrix &);

}

// ParticleEmitter.cpp:1953
struct VectorSimulationHelper {
private:
	// ParticleEmitter.cpp:1975
	cVector * mpVectors;

public:
	// ParticleEmitter.cpp:1956
	VectorSimulationHelper(cVector *);

	// ParticleEmitter.cpp:1964
	void UpdateLocatorVelocity(cParticleBucket *, const cParticleBehaviour &, const cParticleDescriptor &, RenderedParticle &, uint32_t, uint32_t, cMatrix &);

}

// ParticleEmitter.cpp:1979
struct LocalSimulationHelper {
private:
	// ParticleEmitter.cpp:1997
	cMatrix * mpMatrices;

public:
	// ParticleEmitter.cpp:1982
	LocalSimulationHelper(cMatrix *);

	// ParticleEmitter.cpp:1990
	void UpdateLocatorVelocity(cParticleBucket *, const cParticleBehaviour &, const cParticleDescriptor &, RenderedParticle &, uint32_t, uint32_t, cMatrix &);

}

// ParticleEmitter.cpp:1898
void cParticleEmitter::ToConsole(U32  indent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleEmitter.cpp:206
void cParticleEmitter::Bind(const cLionBindings &  bindings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionBindings::SetEmitter(/* parameters */);
}

// ParticleEmitter.cpp:213
void cParticleEmitter::Unbind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleEmitter.cpp:1790
void cParticleEmitter::SplineEval(const const cMatrix &  aSplineMat, const cVector &  aDest, const FP32  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:1792
		cVector lMulVec;

		// ParticleEmitter.cpp:1793
		FP32 lS;

		// ParticleEmitter.cpp:1793
		FP32 lT;

		// ParticleEmitter.cpp:1794
		FP32 lS2;

		// ParticleEmitter.cpp:1794
		FP32 lT2;

		cVector::Set(/* parameters */);
		cMatrix::Apply44(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetX(/* parameters */);
		cVector::operator=(/* parameters */);
		cVector::GetY(/* parameters */);
		cVector::GetZ(/* parameters */);
		cVector::GetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::SetW(/* parameters */);
	}
}

// ParticleEmitter.cpp:273
void cParticleEmitter::BucketRemove(cParticleBucket *  apBuck) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:277
		cParticleBucket * p_item;

		// ParticleEmitter.cpp:278
		cParticleBucket * p_prev;

		cParticleBucket::GetEmitterNext(/* parameters */);
		cParticleBucket::SetEmitterNext(/* parameters */);
		cParticleBucket::SetEmitterNext(/* parameters */);
		cParticleBucket::ClearEmitter(/* parameters */);
	}
}

// ParticleEmitter.cpp:195
void cParticleEmitter::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetGeneratingFlag(/* parameters */);
	cTime::BuildZero(/* parameters */);
	cTime::BuildZero(/* parameters */);
}

// ParticleEmitter.cpp:218
void cParticleEmitter::BucketInsert(cParticleBucket *  pBucket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleBucket::SetEmitterNext(/* parameters */);
	cParticleBucket::SetEmitter(/* parameters */);
}

// ParticleEmitter.cpp:233
void cParticleEmitter::BucketInsertAtTail(cParticleBucket *  pBucket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:249
		cParticleBucket * p_item;

		// ParticleEmitter.cpp:250
		cParticleBucket * p_prev;

		cParticleBucket::GetEmitterNext(/* parameters */);
		cParticleBucket::SetEmitter(/* parameters */);
		cParticleBucket::SetEmitterNext(/* parameters */);
	}
}

// ParticleEmitter.cpp:2144
void cParticleEmitter::RemoveDeadParticles(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2146
		cParticleBucket * lpBucketNext;

		// ParticleEmitter.cpp:2147
		const cParticleBucketManager & lBucketManager;

		// ParticleEmitter.cpp:2149
		FP32 lLifeMax;

		// ParticleEmitter.cpp:2150
		FP32 lfCurrentTime;

		// ParticleEmitter.cpp:2152
		cParticleBucket * lpBucket;

		cTime::GetTimeSeconds(/* parameters */);
	}
	GetBucket(/* parameters */);
	cTime::GetTimeSeconds(/* parameters */);
	cParticleBucket::GetEmitterNext(/* parameters */);
}

// ParticleEmitter.cpp:2293
void cParticleEmitter::PrecalculateParticleBuildData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2295
		const const cParticleBehaviour & lBehaviour;

	}
	rw::math::vpu::Vector2::SetX(/* parameters */);
	cVector::GetY(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	cColour8::cColour8(/* parameters */);
	BrnEffects::Utils::ConvertLionColourToVector(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	cColour8::cColour8(/* parameters */);
	BrnEffects::Utils::ConvertLionColourToVector(/* parameters */);
	rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
	cColour8::cColour8(/* parameters */);
	rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
	BrnEffects::Utils::ConvertLionColourToVector(/* parameters */);
	rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpl::VecMult(/* parameters */);
	rw::math::vpl::VecMult(/* parameters */);
	rw::math::vpl::VecMult(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// ParticleEmitter.cpp:639
void cParticleEmitter::IsGenerating(const cParticleRandomSeed &  aSeed, const const cTime &  aStartTime, const const cTime &  aEndTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:645
		cParticleTrigger * lpTrigger;

		// ParticleEmitter.cpp:662
		FP32 lPauseTime;

		// ParticleEmitter.cpp:665
		FP32 lEmitterLife;

		// ParticleEmitter.cpp:669
		const const cTime & trigger_start_time;

		// ParticleEmitter.cpp:672
		FP32 lTimeDiff0;

		// ParticleEmitter.cpp:675
		FP32 lTimeDiff1;

		cLionBindings::GetpTrigger(/* parameters */);
	}
	cTime::GetTimeDiffSeconds(/* parameters */);
	cTime::GetTimeDiffSeconds(/* parameters */);
	{
		// ParticleEmitter.cpp:682
		FP32 lRepeatTime;

		cTime::GetTimeDiffSeconds(/* parameters */);
		cTime::GetTimeDiffSeconds(/* parameters */);
	}
	cTime::operator=(/* parameters */);
	cTime::SetTimeSeconds(/* parameters */);
}

// ParticleEmitter.cpp:1414
void cParticleEmitter::ParticleBuild(const RenderedParticle &  lRenderedParticle, const cParticleRandomSeed &  aSeed, const sParticleNucleus &  lSimulatedParticle, const const cParticleDescriptor &  apDes, const const cParticleBehaviour &  lpBhv, const const cParticleEmitter::ParticleBuildData &  lParticleBuildData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:1417
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:1420
		const VecFloat lvfLifeTime;

		// ParticleEmitter.cpp:1422
		const VecFloat lvfDeltaTime;

		// ParticleEmitter.cpp:1423
		const VecFloat lvfCurrentTime;

		// ParticleEmitter.cpp:1425
		VecFloat lvfParticleAge;

		// ParticleEmitter.cpp:1439
		VecFloat lvfGlobalTimeScale;

		// ParticleEmitter.cpp:1443
		VecFloat lvfScaledDeltaTime;

		// ParticleEmitter.cpp:1549
		Vector3 lOffsetPos;

		// ParticleEmitter.cpp:1690
		cParticleMaterial * p_material;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	rw::math::vpu::Vector4::GetX(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	{
		// ParticleEmitter.cpp:1458
		Vector3Plus lvAcc;

		// ParticleEmitter.cpp:1497
		iLionPosEvaluator * p_position_evaluator;

	}
	{
		// ParticleEmitter.cpp:1463
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:1466
		Vector3 lRad;

		// ParticleEmitter.cpp:1466
		Vector3 lRadBase;

		// ParticleEmitter.cpp:1466
		Vector3 lRadRand;

		CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
		cParticleRandomSeed::Build(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	}
	cParticleLocator::GetpPosEvaluator(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	{
		// ParticleEmitter.cpp:1554
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:1557
		Vector3 lRot;

		// ParticleEmitter.cpp:1557
		Vector3 lRotVel;

		// ParticleEmitter.cpp:1557
		Vector3 lRotAcc;

		// ParticleEmitter.cpp:1558
		Matrix44 lMat;

		CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
		rw::math::vpu::Matrix44FromEulerXYZ(/* parameters */);
		vec_sel(/* parameters */);
		vec_cmpeq(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_and(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		std(/* parameters */);
		vec_ctf(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:1585
		FP32 lWave;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::SetX(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Vector3Plus::SetX(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:1595
		FP32 lWave;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Vector3Plus::SetY(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:1605
		FP32 lWave;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Vector3::SetZ(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Vector3Plus::SetZ(/* parameters */);
	}
	RotationBehaviour::Process(/* parameters */);
	SizeBehaviour::Process(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	BaseColourWithVarianceBehaviour::Process(/* parameters */);
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	ColourStepsBehaviour::Process(/* parameters */);
	AlphaFadeBehaviour::Process(/* parameters */);
	cParticleDescriptor::Material(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::operator><VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		operator=<VectorAxisX>(/* parameters */);
		operator=<VectorAxisX>(/* parameters */);
		operator=<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::SetX(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::SetX(/* parameters */);
	}
	{
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		operator=<VectorAxisZ>(/* parameters */);
		operator=<VectorAxisZ>(/* parameters */);
		operator=<VectorAxisZ>(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZ(/* parameters */);
		rw::math::vpu::Vector3Plus::SetZ(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::operator=(/* parameters */);
		rw::math::vpu::Vector3Plus::operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	cColour8::cColour8(/* parameters */);
	BrnEffects::Utils::ConvertLionColourToVector(/* parameters */);
	rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
	rw::math::vpl::VecMult(/* parameters */);
	cParticleRandomSeed::BuildLerp(/* parameters */);
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	CgsNumeric::Random::RandomVecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix44FromEulerXYZ(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	std(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
		cColour8::cColour8(/* parameters */);
		BrnEffects::Utils::ConvertLionColourToVector(/* parameters */);
		cColour8::cColour8(/* parameters */);
		BrnEffects::Utils::ConvertLionColourToVector(/* parameters */);
		rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
		rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpl::VecMult(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
	}
}

// ParticleEmitter.cpp:1816
void cParticleEmitter::ParentMatrixCurrentBuild(const cMatrix &  aDest, const const cTime &  aTime, FP32  lDeltaTime, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:1821
		cVector lRotVec;

		// ParticleEmitter.cpp:1822
		RenderedParticle lPart;

		// ParticleEmitter.cpp:1823
		cParticleRandomSeed lSeed;

		// ParticleEmitter.cpp:1832
		cParticleRandomSeed tempSeed;

		// ParticleEmitter.cpp:1834
		const const cParticleDescriptor & parent;

	}
	{
		// ParticleEmitter.cpp:1843
		Vector3 lXAxis;

		// ParticleEmitter.cpp:1843
		Vector3 lYAxis;

		// ParticleEmitter.cpp:1843
		Vector3 lZAxis;

		// ParticleEmitter.cpp:1873
		cVector lConvertedXAxis;

		// ParticleEmitter.cpp:1874
		cVector lConvertedYAxis;

		// ParticleEmitter.cpp:1875
		cVector lConvertedZAxis;

		// ParticleEmitter.cpp:1876
		cVector lConvertedPos;

		rw::math::vpu::Vector4::SetX(/* parameters */);
	}
	cTime::GetTimeSeconds(/* parameters */);
	cParticleDescriptor::GetParent(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Cross(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	cMatrix::SetAxisX(/* parameters */);
	vec_and(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	cMatrix::SetTrans(/* parameters */);
	cVector::GetX(/* parameters */);
	cMatrix::Mul(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
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
	vec_vspltw(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// ParticleEmitter.cpp:83
cParticleRandomSeed BuildSeed(const const sParticleNucleus &  lNucleus, const const cParticleRandomSeed &  aSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ParticleEmitter.cpp:85
	cParticleRandomSeed lSeed;

	{
		// ParticleEmitter.cpp:85
		cParticleRandomSeed lSeed;

		// ParticleEmitter.cpp:89
		U32 luNumTicks;

	}
}

// ParticleEmitter.cpp:2003
extern U32 SimulateParticlesInBucketGeneral<LocalSimulationHelper>(LocalSimulationHelper  lHelper, RenderedParticle *  laSimulatedParticles, cParticleBucket *  lpBucket, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime, const const cMatrix &  lBindingsLocatorMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2012
		cMatrix lParticleMatrix;

		// ParticleEmitter.cpp:2039
		cParticleRandomSeed lIteratorSeed;

		// ParticleEmitter.cpp:2043
		U32 lNewActiveParticleCount;

		// ParticleEmitter.cpp:2045
		const const cParticleDescriptor & lEmitterDescriptor;

		// ParticleEmitter.cpp:2046
		const const cParticleBehaviour & lBehaviour;

		// ParticleEmitter.cpp:2047
		const const cParticleEmitter::ParticleBuildData & lPBData;

		// ParticleEmitter.cpp:2050
		VecFloat lvfCurrentTime;

		// ParticleEmitter.cpp:2051
		VecFloat lvfDeltaTime;

	}
	cParticleEmitter::GetDescriptor(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cTime::GetTimeSeconds(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	{
		// ParticleEmitter.cpp:2057
		U32 luParticleIndex;

		{
			// ParticleEmitter.cpp:2066
			const sParticleNucleus & lParticleNucleus;

			// ParticleEmitter.cpp:2068
			const RenderedParticle & lParticle;

			// ParticleEmitter.cpp:2071
			cParticleRandomSeed lSeed;

			// ParticleEmitter.cpp:2073
			cParticleEmitter::EParticleBuildResult leParticleStatus;

			cParticleBucket::IsParticleActive(/* parameters */);
			cParticleRandomSeed::Update(/* parameters */);
			cParticleBucket::GetNucleus(/* parameters */);
			CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
			CgsNumeric::Random::SetSeed(/* parameters */);
			CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
			BuildSeed(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat(/* parameters */);
			cParticleRandomSeed::Offset(/* parameters */);
			CgsNumeric::Random::SetSeed(/* parameters */);
			cParticleBucket::RetireParticle(/* parameters */);
		}
	}
	cMatrix::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	LocalSimulationHelper::UpdateLocatorVelocity(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	vec_sel(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
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

// ParticleEmitter.cpp:2133
void cParticleEmitter::SimulateLocalParticlesInBucket(RenderedParticle *  laSimulatedParticles, cMatrix *  laMatrices, cParticleBucket *  lpBucket, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime, const const cMatrix &  lBindingsLocatorMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2136
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:2139
		LocalSimulationHelper lHelper;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ParticleEmitter.cpp:49
void UpdateLocatorVelocity(const const cParticleBehaviour &  lpBhv, const const cParticleDescriptor &  emitter_descriptor, const RenderedParticle &  lParticle, const cVector &  position) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:55
		Vector3 lvPosition;

		// ParticleEmitter.cpp:56
		VecFloat lvfDeltaTime;

		{
			// ParticleEmitter.cpp:66
			FP32 lScale;

		}
	}
}

// ParticleEmitter.cpp:2003
extern U32 SimulateParticlesInBucketGeneral<VectorSimulationHelper>(VectorSimulationHelper  lHelper, RenderedParticle *  laSimulatedParticles, cParticleBucket *  lpBucket, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime, const const cMatrix &  lBindingsLocatorMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2012
		cMatrix lParticleMatrix;

		// ParticleEmitter.cpp:2039
		cParticleRandomSeed lIteratorSeed;

		// ParticleEmitter.cpp:2043
		U32 lNewActiveParticleCount;

		// ParticleEmitter.cpp:2045
		const const cParticleDescriptor & lEmitterDescriptor;

		// ParticleEmitter.cpp:2046
		const const cParticleBehaviour & lBehaviour;

		// ParticleEmitter.cpp:2047
		const const cParticleEmitter::ParticleBuildData & lPBData;

		// ParticleEmitter.cpp:2050
		VecFloat lvfCurrentTime;

		// ParticleEmitter.cpp:2051
		VecFloat lvfDeltaTime;

		cParticleEmitter::GetDescriptor(/* parameters */);
		cMatrix::BuildIdentity(/* parameters */);
		cTime::GetTimeSeconds(/* parameters */);
		rw::math::vpu::Vector4::SetY(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::SetX(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
			// ParticleEmitter.cpp:2057
			U32 luParticleIndex;

			{
				// ParticleEmitter.cpp:2066
				const sParticleNucleus & lParticleNucleus;

				// ParticleEmitter.cpp:2068
				const RenderedParticle & lParticle;

				// ParticleEmitter.cpp:2071
				cParticleRandomSeed lSeed;

				// ParticleEmitter.cpp:2073
				cParticleEmitter::EParticleBuildResult leParticleStatus;

				cParticleBucket::IsParticleActive(/* parameters */);
				cParticleRandomSeed::Update(/* parameters */);
				cParticleBucket::GetNucleus(/* parameters */);
				CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
				CgsNumeric::Random::SetSeed(/* parameters */);
				CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
				BuildSeed(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat(/* parameters */);
				cParticleRandomSeed::Offset(/* parameters */);
				CgsNumeric::Random::SetSeed(/* parameters */);
				cParticleBucket::RetireParticle(/* parameters */);
			}
		}
	}
	cMatrix::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VectorSimulationHelper::UpdateLocatorVelocity(/* parameters */);
	cVector::operator=(/* parameters */);
	{
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::GetY(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	vec_sel(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	{
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
}

// ParticleEmitter.cpp:2119
void cParticleEmitter::SimulateVectorParticlesInBucket(RenderedParticle *  laSimulatedParticles, cVector *  laVectors, cParticleBucket *  lpBucket, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime, const const cMatrix &  lBindingsLocatorMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2122
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:2125
		VectorSimulationHelper lHelper;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ParticleEmitter.cpp:2003
extern U32 SimulateParticlesInBucketGeneral<MatrixSimulationHelper>(MatrixSimulationHelper  lHelper, RenderedParticle *  laSimulatedParticles, cParticleBucket *  lpBucket, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime, const const cMatrix &  lBindingsLocatorMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2012
		cMatrix lParticleMatrix;

		// ParticleEmitter.cpp:2039
		cParticleRandomSeed lIteratorSeed;

		// ParticleEmitter.cpp:2043
		U32 lNewActiveParticleCount;

		// ParticleEmitter.cpp:2045
		const const cParticleDescriptor & lEmitterDescriptor;

		// ParticleEmitter.cpp:2046
		const const cParticleBehaviour & lBehaviour;

		// ParticleEmitter.cpp:2047
		const const cParticleEmitter::ParticleBuildData & lPBData;

		// ParticleEmitter.cpp:2050
		VecFloat lvfCurrentTime;

		// ParticleEmitter.cpp:2051
		VecFloat lvfDeltaTime;

		cParticleEmitter::GetDescriptor(/* parameters */);
		cMatrix::BuildIdentity(/* parameters */);
		cTime::GetTimeSeconds(/* parameters */);
		rw::math::vpu::Vector4::SetY(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::SetX(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
			// ParticleEmitter.cpp:2057
			U32 luParticleIndex;

			{
				// ParticleEmitter.cpp:2066
				const sParticleNucleus & lParticleNucleus;

				// ParticleEmitter.cpp:2068
				const RenderedParticle & lParticle;

				// ParticleEmitter.cpp:2071
				cParticleRandomSeed lSeed;

				// ParticleEmitter.cpp:2073
				cParticleEmitter::EParticleBuildResult leParticleStatus;

				cParticleBucket::IsParticleActive(/* parameters */);
				cParticleRandomSeed::Update(/* parameters */);
				cParticleBucket::GetNucleus(/* parameters */);
				CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
				CgsNumeric::Random::SetSeed(/* parameters */);
				CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
				BuildSeed(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat(/* parameters */);
				cParticleRandomSeed::Offset(/* parameters */);
				CgsNumeric::Random::SetSeed(/* parameters */);
				cParticleBucket::RetireParticle(/* parameters */);
			}
		}
	}
	cMatrix::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MatrixSimulationHelper::UpdateLocatorVelocity(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	{
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::GetY(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
		{
			rw::math::vpu::operator+=(/* parameters */);
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	vec_sel(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// ParticleEmitter.cpp:2105
void cParticleEmitter::SimulateMatrixParticlesInBucket(RenderedParticle *  laSimulatedParticles, cMatrix *  laMatrices, cParticleBucket *  lpBucket, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime, const const cMatrix &  lBindingsLocatorMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2108
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:2111
		MatrixSimulationHelper lHelper;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ParticleEmitter.cpp:322
void cParticleEmitter::Blend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:325
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:343
		FP32 lfScale;

		// ParticleEmitter.cpp:360
		const FP32 cfBlendingTolerance;

		// ParticleEmitter.cpp:370
		S32 lIndex;

		// ParticleEmitter.cpp:371
		S32 lNextIndex;

		// ParticleEmitter.cpp:384
		FP32 lfFloatIndex;

		// ParticleEmitter.cpp:385
		FP32 lfFloatNextIndex;

		// ParticleEmitter.cpp:388
		FP32 lWeight;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	{
		// ParticleEmitter.cpp:347
		cParticleScaler * lpScaler;

		cParticleScaler::GetScale(/* parameters */);
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::IsSimilar(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::IntFloor<float>(/* parameters */);
	__fsel(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	{
		// ParticleEmitter.cpp:395
		const cParticleBehaviour * lpBehaviour;

	}
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	rw::math::fpu::IsSimilar(/* parameters */);
	{
		// ParticleEmitter.cpp:403
		const cParticleBehaviour * lpBehaviour;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:412
		const cParticleBehaviour * lpBeh0;

		// ParticleEmitter.cpp:413
		const cParticleBehaviour * lpBeh1;

	}
	{
		// ParticleEmitter.cpp:376
		const cParticleBehaviour * lpBehaviour;

	}
}

// ParticleEmitter.cpp:106
void cParticleEmitter::Init(cParticleDescriptor *  apDes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cParticleRandomSeed::Init(/* parameters */);
	cVector::Zero(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	cTime::BuildZero(/* parameters */);
	cTime::BuildZero(/* parameters */);
	{
		// ParticleEmitter.cpp:149
		const cParticleBehaviour * lpBehaviour;

	}
}

// ParticleEmitter.cpp:163
void cParticleEmitter::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:166
		cParticleBucket * lpBuck;

		// ParticleEmitter.cpp:168
		const cParticleBucketManager & bucket_manager;

	}
	{
		// ParticleEmitter.cpp:172
		cParticleBucket * lpBuckNext;

		cParticleBucket::GetEmitterNext(/* parameters */);
	}
}

// ParticleEmitter.cpp:2199
void cParticleEmitter::InitialiseParticle(const sParticleNucleus &  lParticleNucleus, cVector *  lpParticleVector, cMatrix *  lpParticleMatrix, const const cMatrix &  locator, const const cVector &  velocity, const cParticleRandomSeed &  aSeed, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2201
		const const cParticleDescriptor & descriptor;

		// ParticleEmitter.cpp:2203
		const const cParticleBehaviour & lpBhv;

		// ParticleEmitter.cpp:2205
		const U32 flags;

		// ParticleEmitter.cpp:2207
		cParticleMaterial * lpMat;

		sParticleNucleus::Init(/* parameters */);
	}
	cTime::GetTimeSeconds(/* parameters */);
	cParticleDescriptor::Material(/* parameters */);
	cParticleDescriptor::Flags(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
	cMatrix::SetTrans(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	{
		// ParticleEmitter.cpp:2239
		const cMatrix aMat;

		// ParticleEmitter.cpp:2241
		cVector lAcc;

		cMatrix::Transpose3x3(/* parameters */);
		cVector::SetY(/* parameters */);
		cMatrix::ApplyAxes(/* parameters */);
		cVector::SetZ(/* parameters */);
		cMatrix::SetAxisY(/* parameters */);
		cVector::GetY(/* parameters */);
		cVector::GetY(/* parameters */);
		cVector::GetW(/* parameters */);
		cVector::GetY(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cMatrix::SetAxisZ(/* parameters */);
		cVector::GetZ(/* parameters */);
		cVector::GetW(/* parameters */);
		cVector::GetZ(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetZ(/* parameters */);
		cMatrix::SetAxisW(/* parameters */);
		cVector::GetY(/* parameters */);
		cVector::GetZ(/* parameters */);
		cVector::GetW(/* parameters */);
		cVector::SetW(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::GetZ(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetX(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
	}
	rw::math::vpu::Vector3Plus::operator=(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// ParticleEmitter.cpp:2176
void cParticleEmitter::ParticleInsert(cParticleBucket *  lpBuck, cMatrix *  apLocator, const const cVector &  aVel, const const cTime &  aTime, const cParticleRandomSeed &  aSeed, U32  luParticleIndex, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:2180
		sParticleNucleus * lParticleNucleus;

		// ParticleEmitter.cpp:2181
		cVector * lParticleVector;

		// ParticleEmitter.cpp:2182
		cMatrix * lParticleMatrix;

		cParticleBucket::AllocateParticle(/* parameters */);
	}
	cParticleBucket::SetLatestBirthTime(/* parameters */);
}

// ParticleEmitter.cpp:1766
void cParticleEmitter::SubEmitterInit(cParticleBucket *  apBucket, const U32  aIndex, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetSubEmitterFlag(/* parameters */);
	BuildSeed(/* parameters */);
}

// ParticleEmitter.cpp:1735
void cParticleEmitter::SpawnSubEmitter(cParticleBucket *  apBucket, const U32  aIndex, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:1737
		cParticleDescriptor * lpDes;

		cParticleDescriptor::GetChild(/* parameters */);
		{
			// ParticleEmitter.cpp:1743
			cParticleEmitter * lpEmit;

		}
	}
}

// ParticleEmitter.cpp:729
void cParticleEmitter::Emit(const cParticleRandomSeed &  aSeed, const const cTime &  aTime, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:731
		cVector lPos;

		// ParticleEmitter.cpp:732
		cVector lVel;

		// ParticleEmitter.cpp:733
		cVector lAcc;

		// ParticleEmitter.cpp:734
		cParticleBucket * lpBuck;

		// ParticleEmitter.cpp:735
		cParticleBucket * lpPrevBuck;

		// ParticleEmitter.cpp:739
		cMatrix lMat;

	}
	cTime::GetTimeDiffSeconds(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator*(/* parameters */);
	cVector::cVector(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::operator+=(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	{
		// ParticleEmitter.cpp:750
		const const cParticleLocator & locator;

		cVector::operator+=(/* parameters */);
	}
	cMatrix::SetTrans(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetW(/* parameters */);
	{
		// ParticleEmitter.cpp:764
		U32 lIndex;

		// ParticleEmitter.cpp:765
		bool lbAllocatedParticle;

		cParticleBucket::GetEmitterNext(/* parameters */);
	}
	cParticleDescriptor::GetRequiredBucketType(/* parameters */);
	{
		// ParticleEmitter.cpp:788
		U32 lIndex;

		cParticleBucket::SetEmitter(/* parameters */);
	}
	cLionBindings::GetLocator(/* parameters */);
	cParticleLocator::GetVel(/* parameters */);
	cTime::GetTimeDiffSeconds(/* parameters */);
	cMatrix::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator*(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
}

// ParticleEmitter.cpp:517
void cParticleEmitter::Generate(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:520
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:523
		cParticleRandomSeed lSeed;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	SetGeneratingFlag(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	{
		// ParticleEmitter.cpp:527
		S32 lTime;

		// ParticleEmitter.cpp:528
		FP32 lEmitTimeAdd;

		// ParticleEmitter.cpp:529
		cTime lNewTime;

		// ParticleEmitter.cpp:530
		U32 lTimeStart;

		// ParticleEmitter.cpp:534
		const const cParticleBehaviour & behaviour;

		// ParticleEmitter.cpp:536
		FP32 lEmitSpeed;

		rw::math::fpu::Max<float>(/* parameters */);
		{
			// ParticleEmitter.cpp:549
			S32 i;

			// ParticleEmitter.cpp:550
			U32 EmissionCount;

			cParticleRandomSeed::Build(/* parameters */);
			CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
			CgsNumeric::Random::RandomInt(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
			cTime::operator=(/* parameters */);
			SetGeneratingFlag(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:587
		S32 lBail;

		cTime::GetTimeMilliSeconds(/* parameters */);
		{
			// ParticleEmitter.cpp:591
			U32 EmissionCount;

			cParticleRandomSeed::Build(/* parameters */);
			CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
			CgsNumeric::Random::RandomInt(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
		}
		SetGeneratingFlag(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:577
		S32 lBehTime;

	}
	cTime::SetTimeMilliSeconds(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ParticleEmitter.cpp:1710
void cParticleEmitter::GetParticleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:1712
		U32 lCount;

		// ParticleEmitter.cpp:1713
		cParticleBucket * lpBuck;

	}
}

// ParticleEmitter.cpp:428
void cParticleEmitter::Update(const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleEmitter.cpp:431
		PerfMonCpuHelper lMonitor;

		// ParticleEmitter.cpp:434
		const const cTime & aTriggerStartTime;

		// ParticleEmitter.cpp:436
		FP32 lNewAge;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	cTime::GetTimeDiffSeconds(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	cTime::operator=(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	{
		// ParticleEmitter.cpp:451
		const const cParticleLocator & lLocator;

		// ParticleEmitter.cpp:452
		cMatrix lLocatorMat;

		SetGeneratingFlag(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleEmitter.cpp:456
		const cParticleDescriptor * lpPar;

		// ParticleEmitter.cpp:457
		cParticleRandomSeed lSeed;

		// ParticleEmitter.cpp:458
		RenderedParticle lPart;

		// ParticleEmitter.cpp:476
		cParticleRandomSeed tempSeed;

		// ParticleEmitter.cpp:481
		cParticleEmitter::EParticleBuildResult leParticleStatus;

		cParticleDescriptor::Flags(/* parameters */);
		cMatrix::operator=(/* parameters */);
		rw::math::vpu::Vector4::SetX(/* parameters */);
		cTime::GetTimeSeconds(/* parameters */);
		rw::math::vpu::Vector4::SetY(/* parameters */);
		GetParticleCount(/* parameters */);
	}
	cVector::Zero(/* parameters */);
	cTime::operator=(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	vec_sel(/* parameters */);
	cMatrix::BuildIdentity(/* parameters */);
}

// _built-in_
namespace :: {
	// ParticleEmitter.cpp:39
	vU32 dPARTICLE_GENERATE_BAIL = 256;

	// ParticleEmitter.cpp:40
	vFP32 dPARTICLE_MIN_EMIT_SPEED;

	// ParticleEmitter.cpp:41
	vFP32 dPARTICLE_ORIENT_STEP;

	// ParticleEmitter.cpp:43
	vFP32 dPARTICLE_DRAG_FRAMERATE;

	// ParticleEmitter.cpp:879
	const VecFloat kvfOneOver255;

}

