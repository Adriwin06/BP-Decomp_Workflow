// sParticle.h:22
struct sParticleNucleus {
	// sParticle.h:35
	Vector3Plus mPos;

	// sParticle.h:36
	Vector3Plus mVel;

	// sParticle.h:37
	Vector3Plus mAcc;

	// sParticle.h:39
	Vector3Plus mRot;

	// sParticle.h:40
	Vector3Plus mRotVel;

	// sParticle.h:41
	Vector3Plus mRotAcc;

	// sParticle.h:43
	Vector3Plus mOffsetRot;

	// sParticle.h:44
	Vector3Plus mOffsetRotVel;

	// sParticle.h:45
	Vector3Plus mOffsetRotAcc;

	// sParticle.h:47
	Vector3Plus mSize;

	// sParticle.h:48
	Vector3Plus mSizeVel;

	// sParticle.h:49
	Vector3Plus mSizeAcc;

	// sParticle.h:51
	Vector3Plus mLocatorVel;

	// sParticle.h:65
	Vector4 mvLifeTimeAndFrameTimeAndFPSAndBirthTime;

public:
	// sParticle.h:23
	void Init();

}

