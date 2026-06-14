// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2> {
		// BrnMomentPlayerJumping.h:106
		struct Shot {
			// BrnMomentPlayerJumping.h:107
			BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam> mHandle;

			// BrnMomentPlayerJumping.h:108
			const BrnDirector::Camera::BehaviourBystanderCam::Parameters * mpParams;

		}

	}

	// Declaration
	struct BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4> {
		// BrnMomentPlayerJumping.h:106
		struct Shot {
			// BrnMomentPlayerJumping.h:107
			BehaviourHandle<BrnDirector::Camera::BehaviourRig> mHandle;

			// BrnMomentPlayerJumping.h:108
			const BrnDirector::Camera::BehaviourRig::Parameters * mpParams;

		}

	}

	// Declaration
	struct BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6> {
		// BrnMomentPlayerJumping.h:106
		struct Shot {
			// BrnMomentPlayerJumping.h:107
			BehaviourHandle<BrnDirector::Camera::BehaviourRig> mHandle;

			// BrnMomentPlayerJumping.h:108
			const BrnDirector::Camera::BehaviourRig::Parameters * mpParams;

		}

	}

	// Declaration
	struct BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5> {
		// BrnMomentPlayerJumping.h:106
		struct Shot {
			// BrnMomentPlayerJumping.h:107
			BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mHandle;

			// BrnMomentPlayerJumping.h:108
			Camera::ShotReference * mpParams;

		}

	}

	// Declaration
	struct MomentPlayerJumping {
		// BrnMomentPlayerJumping.h:197
		enum EStatus {
			E_STATUS_WAITING = 0,
			E_STATUS_READY = 1,
			E_STATUS_FAILED = 2,
		}

		// BrnMomentPlayerJumping.h:211
		enum ESequenceType {
			E_INVALID_TYPE = -1,
			E_TYPE_ICE_RIG = 0,
			E_TYPE_DROPPED_RIG_THEN_ATTACHED_RIG_SEQUENCE = 1,
			E_TYPE_BYSTANDER_THEN_ATTACHED_RIG_SEQUENCE = 2,
			E_TYPE_BYSTANDER_SHOT = 3,
			E_TYPE_DROPPED_RIG_SHOT = 4,
			E_TYPE_ATTACHED_RIG_SHOT = 5,
			E_NUM_TYPES = 6,
		}

		// BrnMomentPlayerJumping.h:235
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentPlayerJumping.h:239
			void Construct();

		}

	}

}

// BrnMomentPlayerJumping.h:41
struct BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2> {
private:
	// BrnMomentPlayerJumping.h:114
	Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam, BrnDirector::Camera::BehaviourBystanderCam::Parameters, 2>::Shot,2u> maShots;

	// BrnMomentPlayerJumping.h:115
	const BrnDirector::ArbitratorState * mpArbStateOwner;

	// BrnMomentPlayerJumping.h:116
	const BrnDirector::Moment * mpMomentOwner;

	// BrnMomentPlayerJumping.h:118
	int32_t miCurrentCamera;

	// BrnMomentPlayerJumping.h:119
	bool mbHasCurrentCamera;

	// BrnMomentPlayerJumping.h:121
	bool mbAllocatedShots;

public:
	// BrnMomentPlayerJumping.h:50
	void Construct(const BrnDirector::ArbitratorState *, const BrnDirector::Moment *);

	// BrnMomentPlayerJumping.h:54
	bool Prepare(BehaviourManager &);

	// BrnMomentPlayerJumping.h:57
	bool Release();

	// BrnMomentPlayerJumping.h:60
	int32_t GetNumShots() const;

	// BrnMomentPlayerJumping.h:63
	bool HasActiveCamera();

	// BrnMomentPlayerJumping.h:66
	bool CanSwitchToMeNow();

	// BrnMomentPlayerJumping.h:69
	bool CanSwitchFromMeNow();

	// BrnMomentPlayerJumping.h:72
	bool HasFailed();

	// BrnMomentPlayerJumping.h:76
	void AddShot(const BrnDirector::Camera::BehaviourBystanderCam::Parameters *);

	// BrnMomentPlayerJumping.h:79
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam> & GetBehaviourHandle();

	// BrnMomentPlayerJumping.h:87
	BrnDirector::Camera::BehaviourBystanderCam & GetBehaviour();

	// BrnMomentPlayerJumping.h:95
	const Camera & GetCamera() const;

}

// BrnMomentPlayerJumping.h:41
struct BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4> {
private:
	// BrnMomentPlayerJumping.h:114
	Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig, BrnDirector::Camera::BehaviourRig::Parameters, 4>::Shot,4u> maShots;

	// BrnMomentPlayerJumping.h:115
	const BrnDirector::ArbitratorState * mpArbStateOwner;

	// BrnMomentPlayerJumping.h:116
	const BrnDirector::Moment * mpMomentOwner;

	// BrnMomentPlayerJumping.h:118
	int32_t miCurrentCamera;

	// BrnMomentPlayerJumping.h:119
	bool mbHasCurrentCamera;

	// BrnMomentPlayerJumping.h:121
	bool mbAllocatedShots;

public:
	// BrnMomentPlayerJumping.h:50
	void Construct(const BrnDirector::ArbitratorState *, const BrnDirector::Moment *);

	// BrnMomentPlayerJumping.h:54
	bool Prepare(BehaviourManager &);

	// BrnMomentPlayerJumping.h:57
	bool Release();

	// BrnMomentPlayerJumping.h:60
	int32_t GetNumShots() const;

	// BrnMomentPlayerJumping.h:63
	bool HasActiveCamera();

	// BrnMomentPlayerJumping.h:66
	bool CanSwitchToMeNow();

	// BrnMomentPlayerJumping.h:69
	bool CanSwitchFromMeNow();

	// BrnMomentPlayerJumping.h:72
	bool HasFailed();

	// BrnMomentPlayerJumping.h:76
	void AddShot(const BrnDirector::Camera::BehaviourRig::Parameters *);

	// BrnMomentPlayerJumping.h:79
	BehaviourHandle<BrnDirector::Camera::BehaviourRig> & GetBehaviourHandle();

	// BrnMomentPlayerJumping.h:87
	BrnDirector::Camera::BehaviourRig & GetBehaviour();

	// BrnMomentPlayerJumping.h:95
	const Camera & GetCamera() const;

}

// BrnMomentPlayerJumping.h:41
struct BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6> {
private:
	// BrnMomentPlayerJumping.h:114
	Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig, BrnDirector::Camera::BehaviourRig::Parameters, 6>::Shot,6u> maShots;

	// BrnMomentPlayerJumping.h:115
	const BrnDirector::ArbitratorState * mpArbStateOwner;

	// BrnMomentPlayerJumping.h:116
	const BrnDirector::Moment * mpMomentOwner;

	// BrnMomentPlayerJumping.h:118
	int32_t miCurrentCamera;

	// BrnMomentPlayerJumping.h:119
	bool mbHasCurrentCamera;

	// BrnMomentPlayerJumping.h:121
	bool mbAllocatedShots;

public:
	// BrnMomentPlayerJumping.h:50
	void Construct(const BrnDirector::ArbitratorState *, const BrnDirector::Moment *);

	// BrnMomentPlayerJumping.h:54
	bool Prepare(BehaviourManager &);

	// BrnMomentPlayerJumping.h:57
	bool Release();

	// BrnMomentPlayerJumping.h:60
	int32_t GetNumShots() const;

	// BrnMomentPlayerJumping.h:63
	bool HasActiveCamera();

	// BrnMomentPlayerJumping.h:66
	bool CanSwitchToMeNow();

	// BrnMomentPlayerJumping.h:69
	bool CanSwitchFromMeNow();

	// BrnMomentPlayerJumping.h:72
	bool HasFailed();

	// BrnMomentPlayerJumping.h:76
	void AddShot(const BrnDirector::Camera::BehaviourRig::Parameters *);

	// BrnMomentPlayerJumping.h:79
	BehaviourHandle<BrnDirector::Camera::BehaviourRig> & GetBehaviourHandle();

	// BrnMomentPlayerJumping.h:87
	BrnDirector::Camera::BehaviourRig & GetBehaviour();

	// BrnMomentPlayerJumping.h:95
	const Camera & GetCamera() const;

}

// BrnMomentPlayerJumping.h:41
struct BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5> {
private:
	// BrnMomentPlayerJumping.h:114
	Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim, const Attrib::RefSpec, 5>::Shot,5u> maShots;

	// BrnMomentPlayerJumping.h:115
	const BrnDirector::ArbitratorState * mpArbStateOwner;

	// BrnMomentPlayerJumping.h:116
	const BrnDirector::Moment * mpMomentOwner;

	// BrnMomentPlayerJumping.h:118
	int32_t miCurrentCamera;

	// BrnMomentPlayerJumping.h:119
	bool mbHasCurrentCamera;

	// BrnMomentPlayerJumping.h:121
	bool mbAllocatedShots;

public:
	// BrnMomentPlayerJumping.h:50
	void Construct(const BrnDirector::ArbitratorState *, const BrnDirector::Moment *);

	// BrnMomentPlayerJumping.h:54
	bool Prepare(BehaviourManager &);

	// BrnMomentPlayerJumping.h:57
	bool Release();

	// BrnMomentPlayerJumping.h:60
	int32_t GetNumShots() const;

	// BrnMomentPlayerJumping.h:63
	bool HasActiveCamera();

	// BrnMomentPlayerJumping.h:66
	bool CanSwitchToMeNow();

	// BrnMomentPlayerJumping.h:69
	bool CanSwitchFromMeNow();

	// BrnMomentPlayerJumping.h:72
	bool HasFailed();

	// BrnMomentPlayerJumping.h:76
	void AddShot(Camera::ShotReference *);

	// BrnMomentPlayerJumping.h:79
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> & GetBehaviourHandle();

	// BrnMomentPlayerJumping.h:87
	BrnDirector::Camera::BehaviourIceAnim & GetBehaviour();

	// BrnMomentPlayerJumping.h:95
	const Camera & GetCamera() const;

}

// BrnMomentPlayerJumping.h:134
struct BrnDirector::MomentPlayerJumping : public BrnDirector::Moment {
	// BrnMomentPlayerJumping.cpp:21
	extern const float32_t kfCooldownTime;

	// BrnMomentPlayerJumping.cpp:22
	extern const float32_t kfMaxJumpTime;

	// BrnMomentPlayerJumping.cpp:23
	extern const float32_t kfMinTimeInAir;

private:
	// BrnMomentPlayerJumping.h:173
	const BrnDirector::MomentPlayerJumping::Parameters * mpParameters;

	// BrnMomentPlayerJumping.h:180
	BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam,BrnDirector::Camera::BehaviourBystanderCam::Parameters,2> mBystanderCollection;

	// BrnMomentPlayerJumping.h:181
	BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,4> mDroppedRigCollection;

	// BrnMomentPlayerJumping.h:182
	BehaviourCollection<BrnDirector::Camera::BehaviourRig,BrnDirector::Camera::BehaviourRig::Parameters,6> mRigCollection;

	// BrnMomentPlayerJumping.h:183
	BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim,const Attrib::RefSpec,5> mIceCollection;

	// BrnMomentPlayerJumping.h:185
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolaterParams;

	// BrnMomentPlayerJumping.h:186
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolater;

	// BrnMomentPlayerJumping.h:188
	float32_t mfJumpTimer;

	// BrnMomentPlayerJumping.h:189
	float32_t mfCooldownTimer;

	// BrnMomentPlayerJumping.h:191
	bool mbPrepared;

	// BrnMomentPlayerJumping.h:225
	BrnDirector::MomentPlayerJumping::ESequenceType meType;

public:
	void MomentPlayerJumping(const MomentPlayerJumping &);

	void MomentPlayerJumping();

	// BrnMomentPlayerJumping.cpp:177
	virtual void Construct();

	// BrnMomentPlayerJumping.cpp:209
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentPlayerJumping.cpp:261
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentPlayerJumping.cpp:680
	virtual bool Release();

	// BrnMomentPlayerJumping.cpp:705
	virtual void Destruct();

	// BrnMomentPlayerJumping.cpp:719
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentPlayerJumping.cpp:745
	virtual const char * GetName() const;

private:
	// BrnMomentPlayerJumping.cpp:410
	bool PrepareCameras(BehaviourManager &);

	// BrnMomentPlayerJumping.cpp:465
	BrnDirector::MomentPlayerJumping::EStatus GetCameraStatus();

	// BrnMomentPlayerJumping.cpp:555
	bool UpdateCamera(Camera &);

	// BrnMomentPlayerJumping.cpp:731
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentPlayerJumping.h:134
void BrnDirector::MomentPlayerJumping::MomentPlayerJumping() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentPlayerJumping.h:137
extern const float32_t kfCooldownTime;

// BrnMomentPlayerJumping.h:138
extern const float32_t kfMaxJumpTime;

// BrnMomentPlayerJumping.h:139
extern const float32_t kfMinTimeInAir;

