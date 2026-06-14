// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourManager {
			// BrnBehaviourManager.h:241
			struct BehaviourHelper {
			private:
				// BrnBehaviourManager.h:309
				AbstractPoolVoidHandle mBehaviourPoolHandle;

				// BrnBehaviourManager.h:310
				Camera mCamera;

				// BrnBehaviourManager.h:312
				const BrnDirector::ArbitratorState * mpDebugArbitratorStateOwner;

				// BrnBehaviourManager.h:313
				const BrnDirector::Moment * mpDebugMomentOwner;

			public:
				// BrnBehaviourManager.h:254
				bool Prepare(AbstractPoolVoidHandle);

				// BrnBehaviourManager.h:258
				bool Update(const BehaviourSharedInfo &);

				// BrnBehaviourManager.h:262
				bool PostCollisionUpdate(const BehaviourSharedInfo &);

				// BrnBehaviourManager.h:265
				bool Release();

				// BrnBehaviourManager.h:268
				BrnDirector::Camera::Behaviour & Get();

				// BrnBehaviourManager.h:271
				const BrnDirector::Camera::Behaviour & Get() const;

				// BrnBehaviourManager.h:274
				const Camera & GetCamera() const;

				// BrnBehaviourManager.h:278
				void GenerateSceneQueries(const CollisionPolicySharedInfo &);

				// BrnBehaviourManager.h:282
				void ProcessSceneQueryResults(const CollisionPolicySharedInfo &);

				// BrnBehaviourManager.h:286
				void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

				// BrnBehaviourManager.h:290
				void SetMomentOwner(const BrnDirector::Moment *);

				// BrnBehaviourManager.h:293
				const BrnDirector::ArbitratorState * GetDebugArbitratorStateOwner() const;

				// BrnBehaviourManager.h:296
				const BrnDirector::Moment * GetDebugMomentOwner() const;

				// BrnBehaviourManager.h:299
				const int32_t GetBehaviourSize() const;

				// BrnBehaviourManager.h:304
				const char * GetDebugFullName(char *[64]) const;

			}

			// BrnBehaviourManager.h:353
			struct TweakerHelper {
				// BrnBehaviourManager.h:354
				bool mbAttached;

				// BrnBehaviourManager.h:355
				BehaviourHelperIndex mBehaviourHelperIndex;

				// BrnBehaviourManager.h:356
				Tweaker mTweaker;

			}

		}

	}

}

// BrnBehaviourManager.h:89
struct BrnDirector::Camera::BehaviourManager {
private:
	// BrnBehaviourManager.h:322
	BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4> mLargeBehaviourPool;

	// BrnBehaviourManager.h:323
	BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4> mSmallBehaviourPool;

	// BrnBehaviourManager.h:324
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> mBehaviourHelperPool;

	// BrnBehaviourManager.h:325
	BehaviourParameterBank mBehaviourParameterBank;

	// BrnBehaviourManager.h:327
	BitArray<28u> mBehaviourNeedsPreparingFlags;

	// BrnBehaviourManager.h:328
	BitArray<28u> mBehaviourNeedsReleasingFlags;

	// BrnBehaviourManager.h:329
	BitArray<28u> mBehaviourUpdateDuringPauseFlags;

	// BrnBehaviourManager.h:331
	BitArray<28u> mBehaviourUsedByHandleFlags;

	// BrnBehaviourManager.h:333
	Array<int32_t,28u> mBehaviourRefCounts;

	// BrnBehaviourManager.h:337
	Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u> mDebugBehaviourRefCountIndexLog;

	// BrnBehaviourManager.h:338
	Array<int32_t,28u> mDebugBehaviourRefCountLimits;

	// BrnBehaviourManager.h:346
	TempCameraBoostResponder mTempCameraBoostResponder;

	// BrnBehaviourManager.h:347
	SpeedResponder mSpeedResponder;

	// BrnBehaviourManager.h:349
	Camera2DRotationController mRotationController;

	// BrnBehaviourManager.h:350
	CameraSphericalRotationController mSphericalRotationController;

	// BrnBehaviourManager.h:359
	BrnDirector::Camera::BehaviourManager::TweakerHelper mTweakerHelper;

	// BrnBehaviourManager.h:362
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> mBehaviourHelperIndexArray;

	// BrnBehaviourManager.h:364
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

	// BrnBehaviourManager.h:366
	float mfLastHandbrakeTime;

	// BrnBehaviourManager.h:369
	bool mbDebugDisplayAllCameras;

public:
	// BrnBehaviourManager.h:96
	void Construct();

	// BrnBehaviourManager.h:99
	bool Prepare();

	// BrnBehaviourManager.h:102
	bool Release();

	// BrnBehaviourManager.h:105
	void Destruct();

	// BrnBehaviourManager.h:112
	void PrepareBehaviours(const BrnDirector::DirectorResourceManager *);

	// BrnBehaviourManager.h:120
	void UpdateAllBehaviours(bool, BehaviourSharedInfo &, const ControllerInfo &, bool, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:126
	void GenerateSceneQueries(bool, const CollisionPolicySharedInfo &, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:132
	void ProcessSceneQueryResults(bool, const CollisionPolicySharedInfo &, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:140
	void PostCollisionUpdateAllBehaviours(bool, BehaviourSharedInfo &, const ControllerInfo &, bool, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:145
	void ReleaseBehaviours();

	// BrnBehaviourManager.h:161
	// Declaration
	void NewBehaviour(const Attrib::RefSpec &, BehaviourManager::BehaviourHandle<BrnDirector::Camera::Behaviour> *, const BrnDirector::ArbitratorState *, const BrnDirector::Moment *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBehaviourManager.cpp:672
		using namespace AttribSys::Enums;

	}

	// Unknown accessibility
	struct BehaviourHandle<BrnDirector::Camera::Behaviour>;

	// BrnBehaviourManager.h:164
	const BrnDirector::DirectorResourceManager * GetDirectorResourceManager() const;

	// BrnBehaviourManager.h:168
	void SetDirectorResourceManager(const BrnDirector::DirectorResourceManager *);

	// BrnBehaviourManager.h:172
	void CheckNoBehavioursAreAllocatedByState(BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:175
	const BehaviourParameterBank & GetBehaviourParameterBank() const;

	// BrnBehaviourManager.h:178
	BehaviourParameterBank * GetBehaviourParameterBankPointer();

	// BrnBehaviourManager.h:181
	void DetachAllTweakers();

	// BrnBehaviourManager.h:185
	const Camera & GetCameraFromBehaviour(BehaviourHelperIndex) const;

	// BrnBehaviourManager.h:189
	void SetBehaviourUsedByHandle(BehaviourHelperIndex);

	// BrnBehaviourManager.h:193
	void UnSetBehaviourUsedByHandle(BehaviourHelperIndex);

	// BrnBehaviourManager.h:198
	void LockBehaviourForInterpolation(BehaviourHelperIndex, BehaviourHelperIndex);

	// BrnBehaviourManager.h:203
	void UnlockBehaviourForInterpolation(BehaviourHelperIndex, BehaviourHelperIndex);

	// BrnBehaviourManager.h:208
	void SetBehaviourUpdatesDuringPause(BehaviourHelperIndex, bool);

	// BrnBehaviourManager.h:214
	void SetupBehaviourControllerLockInterface(BrnDirector::Camera::BehaviourControllerLockInterface &, const BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> &);

	// Unknown accessibility
	struct BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>;

	// BrnBehaviourManager.h:218
	bool IsBehaviourWaitingToPrepare(BehaviourHelperIndex) const;

	// BrnBehaviourManager.h:221
	// Declaration
	void DebugDumpToTTY() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBehaviourManager.cpp:732
		using namespace CgsDev::Message;

		// BrnBehaviourManager.cpp:742
		using namespace CgsDev::Message;

		// BrnBehaviourManager.cpp:744
		using namespace CgsDev::Message;

	}

private:
	// BrnBehaviourManager.h:342
	// Declaration
	void RefCountLogDump(const BehaviourHelperIndex &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBehaviourManager.cpp:521
		using namespace CgsDev::Message;

		// BrnBehaviourManager.cpp:528
		using namespace CgsDev::Message;

		// BrnBehaviourManager.cpp:531
		using namespace CgsDev::Message;

	}

	// BrnBehaviourManager.h:374
	void AttachTweaker(BehaviourHelperIndex);

	// BrnBehaviourManager.h:378
	void DetachTweaker(BehaviourHelperIndex);

}

// BrnBehaviourManager.h:460
struct BrnDirector::Camera::BehaviourControllerLockInterface {
private:
	// BrnBehaviourManager.h:484
	BehaviourHelperIndex mCurrentBehaviourHelper;

	// BrnBehaviourManager.h:485
	BehaviourManager * mpBehaviourManager;

public:
	// BrnBehaviourManager.h:465
	void LockBehaviourForInterpolation(BehaviourHelperIndex) const;

	// BrnBehaviourManager.h:469
	void UnlockBehaviourForInterpolation(BehaviourHelperIndex) const;

private:
	// BrnBehaviourManager.h:478
	void Construct(BehaviourManager *);

	// BrnBehaviourManager.h:482
	void SetBehaviourHelperIndex(BehaviourHelperIndex);

}

// BrnBehaviourManager.h:93
struct BrnDirector::Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourInterpolate * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourInterpolate * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourGameplayExternal * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourGameplayExternal * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourGameplayBumper * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourGameplayBumper * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:93
struct BrnDirector::Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::Behaviour> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::Behaviour * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::Behaviour * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourGyroCam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourGyroCam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourRig> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourRig * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourRig * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourPassengerCam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourPassengerCam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourBystanderCam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourBystanderCam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourIceAnim * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourIceAnim * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourFixedCam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourFixedCam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourLooseAttachment * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourLooseAttachment * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourRoadRunner * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourRoadRunner * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourSpirallingDeathcam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourSpirallingDeathcam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourAftertouchCrash * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourAftertouchCrash * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourRotateAboutVehicle * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourRotateAboutVehicle * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourAftertouchCam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourAftertouchCam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourHeliCam * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourHeliCam * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourFailsafe * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourFailsafe * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourRenderMetrics * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourRenderMetrics * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourDebugOrbitPlayer * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourDebugOrbitPlayer * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:389
struct BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld> {
private:
	// BrnBehaviourManager.h:449
	bool mbIsAllocated;

	// BrnBehaviourManager.h:451
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnBehaviourManager.h:452
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> * mpBehaviourHelperPool;

	// BrnBehaviourManager.h:453
	BehaviourManager * mpParentController;

	// BrnBehaviourManager.h:454
	BrnDirector::Camera::Behaviour * mpBehaviour;

public:
	// BrnBehaviourManager.h:492
	bool IsAllocated() const;

	// BrnBehaviourManager.h:503
	bool IsBehaviourWaitingToPrepare() const;

	// BrnBehaviourManager.h:403
	bool IsBehaviourPrepared() const;

	// BrnBehaviourManager.h:513
	void Construct();

	// BrnBehaviourManager.h:530
	bool Prepare(BehaviourHelperIndex, ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> &, BehaviourManager &);

	// BrnBehaviourManager.h:554
	bool Release();

	// BrnBehaviourManager.h:574
	BrnDirector::Camera::BehaviourDebugFlyWorld * Get();

	// BrnBehaviourManager.h:585
	const BrnDirector::Camera::BehaviourDebugFlyWorld * Get() const;

	// BrnBehaviourManager.h:596
	const Camera & GetCamera() const;

	// BrnBehaviourManager.h:609
	void AttachTweaker();

	// BrnBehaviourManager.h:619
	void DetachTweaker();

	// BrnBehaviourManager.h:629
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

	// BrnBehaviourManager.h:640
	void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:651
	void SetDebugMomentOwner(const BrnDirector::Moment *);

	// BrnBehaviourManager.h:662
	void SetUpdatesDuringPause(bool);

}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourIceAnim>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourIceAnim>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourIceAnim>(const BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourGyroCam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourGyroCam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourGyroCam>(const BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourInterpolate>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourInterpolate>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourInterpolate>(const BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourLooseAttachment>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourLooseAttachment>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourLooseAttachment>(const BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourFixedCam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourFixedCam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourFixedCam>(const BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourBystanderCam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourBystanderCam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourBystanderCam>(const BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourRig>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourRig>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourRig>(const BehaviourHandle<BrnDirector::Camera::BehaviourRig> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRig>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRig>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRig>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRig>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRig>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourPassengerCam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourPassengerCam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourPassengerCam>(const BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourRotateAboutVehicle>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourRotateAboutVehicle>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourRotateAboutVehicle>(const BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourRenderMetrics>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourRenderMetrics>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourRenderMetrics>(const BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourRoadRunner>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourRoadRunner>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourRoadRunner>(const BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourAftertouchCrash>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourAftertouchCrash>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourAftertouchCrash>(const BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourSpirallingDeathcam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourSpirallingDeathcam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourSpirallingDeathcam>(const BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourHeliCam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourHeliCam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourHeliCam>(const BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourGameplayExternal>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourGameplayExternal>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourGameplayExternal>(const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourFailsafe>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourFailsafe>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourFailsafe>(const BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourGameplayBumper>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourGameplayBumper>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourGameplayBumper>(const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourDebugOrbitPlayer>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourDebugOrbitPlayer>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourDebugOrbitPlayer>(const BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourDebugFlyWorld>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourDebugFlyWorld>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourDebugFlyWorld>(const BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:1115
extern const AbstractPoolVoidHandle AllocateBehaviour<BrnDirector::Camera::BehaviourAftertouchCam>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnBehaviourManager.h:1118
	const AbstractPoolVoidHandle lVoidHandle;

	{
		// BrnBehaviourManager.h:1118
		AbstractPoolVoidHandle lVoidHandle;

		BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::Camera::BehaviourAftertouchCam>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:766
extern void NewBehaviour<BrnDirector::Camera::BehaviourAftertouchCam>(const BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam> &  lrHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.h:769
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.h:797
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam>::Prepare(/* parameters */);
	BrnDirector::Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam>::SetDebugMomentOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BrnDirector::Camera::BehaviourManager::BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnBehaviourManager.h:89
struct BrnDirector::Camera::BehaviourManager {
private:
	// BrnBehaviourManager.h:322
	BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4> mLargeBehaviourPool;

	// BrnBehaviourManager.h:323
	BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4> mSmallBehaviourPool;

	// BrnBehaviourManager.h:324
	ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> mBehaviourHelperPool;

	// BrnBehaviourManager.h:325
	BehaviourParameterBank mBehaviourParameterBank;

	// BrnBehaviourManager.h:327
	BitArray<28u> mBehaviourNeedsPreparingFlags;

	// BrnBehaviourManager.h:328
	BitArray<28u> mBehaviourNeedsReleasingFlags;

	// BrnBehaviourManager.h:329
	BitArray<28u> mBehaviourUpdateDuringPauseFlags;

	// BrnBehaviourManager.h:331
	BitArray<28u> mBehaviourUsedByHandleFlags;

	// BrnBehaviourManager.h:333
	Array<int32_t,28u> mBehaviourRefCounts;

	// BrnBehaviourManager.h:337
	Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u> mDebugBehaviourRefCountIndexLog;

	// BrnBehaviourManager.h:338
	Array<int32_t,28u> mDebugBehaviourRefCountLimits;

	// BrnBehaviourManager.h:346
	TempCameraBoostResponder mTempCameraBoostResponder;

	// BrnBehaviourManager.h:347
	SpeedResponder mSpeedResponder;

	// BrnBehaviourManager.h:349
	Camera2DRotationController mRotationController;

	// BrnBehaviourManager.h:350
	CameraSphericalRotationController mSphericalRotationController;

	// BrnBehaviourManager.h:359
	BrnDirector::Camera::BehaviourManager::TweakerHelper mTweakerHelper;

	// BrnBehaviourManager.h:362
	Array<BrnDirector::Camera::BehaviourHelperIndex,28u> mBehaviourHelperIndexArray;

	// BrnBehaviourManager.h:364
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

	// BrnBehaviourManager.h:366
	float mfLastHandbrakeTime;

	// BrnBehaviourManager.h:369
	bool mbDebugDisplayAllCameras;

public:
	// BrnBehaviourManager.h:96
	void Construct();

	// BrnBehaviourManager.h:99
	bool Prepare();

	// BrnBehaviourManager.h:102
	bool Release();

	// BrnBehaviourManager.h:105
	void Destruct();

	// BrnBehaviourManager.h:112
	void PrepareBehaviours(const BrnDirector::DirectorResourceManager *);

	// BrnBehaviourManager.h:120
	void UpdateAllBehaviours(bool, BehaviourSharedInfo &, const ControllerInfo &, bool, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:126
	void GenerateSceneQueries(bool, const CollisionPolicySharedInfo &, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:132
	void ProcessSceneQueryResults(bool, const CollisionPolicySharedInfo &, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:140
	void PostCollisionUpdateAllBehaviours(bool, BehaviourSharedInfo &, const ControllerInfo &, bool, BrnDirector::DebugPrinter &);

	// BrnBehaviourManager.h:145
	void ReleaseBehaviours();

	// BrnBehaviourManager.h:161
	void NewBehaviour(const Attrib::RefSpec &, BehaviourManager::BehaviourHandle<BrnDirector::Camera::Behaviour> *, const BrnDirector::ArbitratorState *, const BrnDirector::Moment *, int32_t);

	// Unknown accessibility
	struct BehaviourHandle<BrnDirector::Camera::Behaviour>;

	// BrnBehaviourManager.h:164
	const BrnDirector::DirectorResourceManager * GetDirectorResourceManager() const;

	// BrnBehaviourManager.h:168
	void SetDirectorResourceManager(const BrnDirector::DirectorResourceManager *);

	// BrnBehaviourManager.h:172
	void CheckNoBehavioursAreAllocatedByState(BrnDirector::ArbitratorState *);

	// BrnBehaviourManager.h:175
	const BehaviourParameterBank & GetBehaviourParameterBank() const;

	// BrnBehaviourManager.h:178
	BehaviourParameterBank * GetBehaviourParameterBankPointer();

	// BrnBehaviourManager.h:181
	void DetachAllTweakers();

	// BrnBehaviourManager.h:185
	const Camera & GetCameraFromBehaviour(BehaviourHelperIndex) const;

	// BrnBehaviourManager.h:189
	void SetBehaviourUsedByHandle(BehaviourHelperIndex);

	// BrnBehaviourManager.h:193
	void UnSetBehaviourUsedByHandle(BehaviourHelperIndex);

	// BrnBehaviourManager.h:198
	void LockBehaviourForInterpolation(BehaviourHelperIndex, BehaviourHelperIndex);

	// BrnBehaviourManager.h:203
	void UnlockBehaviourForInterpolation(BehaviourHelperIndex, BehaviourHelperIndex);

	// BrnBehaviourManager.h:208
	void SetBehaviourUpdatesDuringPause(BehaviourHelperIndex, bool);

	// BrnBehaviourManager.h:214
	void SetupBehaviourControllerLockInterface(BrnDirector::Camera::BehaviourControllerLockInterface &, const BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> &);

	// Unknown accessibility
	struct BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>;

	// BrnBehaviourManager.h:218
	bool IsBehaviourWaitingToPrepare(BehaviourHelperIndex) const;

	// BrnBehaviourManager.h:221
	void DebugDumpToTTY() const;

private:
	// BrnBehaviourManager.h:342
	void RefCountLogDump(const BehaviourHelperIndex &) const;

	// BrnBehaviourManager.h:374
	void AttachTweaker(BehaviourHelperIndex);

	// BrnBehaviourManager.h:378
	void DetachTweaker(BehaviourHelperIndex);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourManager {
			// BrnBehaviourManager.h:241
			struct BehaviourHelper {
			private:
				// BrnBehaviourManager.h:309
				AbstractPoolVoidHandle mBehaviourPoolHandle;

				// BrnBehaviourManager.h:310
				Camera mCamera;

				// BrnBehaviourManager.h:312
				const BrnDirector::ArbitratorState * mpDebugArbitratorStateOwner;

				// BrnBehaviourManager.h:313
				const BrnDirector::Moment * mpDebugMomentOwner;

			public:
				// BrnBehaviourManager.h:254
				bool Prepare(AbstractPoolVoidHandle);

				// BrnBehaviourManager.h:258
				bool Update(const BehaviourSharedInfo &);

				// BrnBehaviourManager.h:262
				bool PostCollisionUpdate(const BehaviourSharedInfo &);

				// BrnBehaviourManager.h:265
				bool Release();

				// BrnBehaviourManager.h:268
				BrnDirector::Camera::Behaviour & Get();

				// BrnBehaviourManager.h:271
				const BrnDirector::Camera::Behaviour & Get() const;

				// BrnBehaviourManager.h:274
				const Camera & GetCamera() const;

				// BrnBehaviourManager.h:278
				void GenerateSceneQueries(const CollisionPolicySharedInfo &);

				// BrnBehaviourManager.h:282
				void ProcessSceneQueryResults(const CollisionPolicySharedInfo &);

				// BrnBehaviourManager.h:286
				void SetDebugArbitratorStateOwner(const BrnDirector::ArbitratorState *);

				// BrnBehaviourManager.h:290
				void SetMomentOwner(const BrnDirector::Moment *);

				// BrnBehaviourManager.h:293
				const BrnDirector::ArbitratorState * GetDebugArbitratorStateOwner() const;

				// BrnBehaviourManager.h:296
				const BrnDirector::Moment * GetDebugMomentOwner() const;

				// BrnBehaviourManager.h:299
				const int32_t GetBehaviourSize() const;

				// BrnBehaviourManager.h:304
				const char * GetDebugFullName(char *[64]) const;

			}

			// BrnBehaviourManager.h:353
			struct TweakerHelper {
				// BrnBehaviourManager.h:354
				bool mbAttached;

				// BrnBehaviourManager.h:355
				BehaviourHelperIndex mBehaviourHelperIndex;

				// BrnBehaviourManager.h:356
				Tweaker mTweaker;

			}

		}

	}

}

