// ParticleLocator.h:28
struct cParticleLocator {
private:
	// ParticleLocator.h:69
	cMatrix mMat;

	// ParticleLocator.h:70
	cVector mVel;

	// ParticleLocator.h:71
	cQuat[2] mCacheQuat;

	// ParticleLocator.h:72
	cVector[2] mCachePos;

	// ParticleLocator.h:73
	cTime[2] mCacheTime;

	// ParticleLocator.h:74
	cTime mTime;

	// ParticleLocator.h:75
	U32 mIndex;

	// ParticleLocator.h:76
	U32 mFlags;

	// ParticleLocator.h:77
	iLionPosEvaluator * mpPosEvaluator;

public:
	// ParticleLocator.h:40
	void Init();

	// ParticleLocator.h:41
	void Update(const cMatrix &, const cTime &);

	// ParticleLocator.h:42
	void Teleport(const cMatrix &, const cTime &);

	// ParticleLocator.h:44
	iLionPosEvaluator * GetpPosEvaluator() const;

	// ParticleLocator.h:49
	void SetPosEvaluator(iLionPosEvaluator *);

	// ParticleLocator.h:54
	const cMatrix & GetMat(const cTime &) const;

	// ParticleLocator.h:56
	const cVector & GetVel() const;

	// ParticleLocator.h:61
	void SetVel(const cVector &);

}

