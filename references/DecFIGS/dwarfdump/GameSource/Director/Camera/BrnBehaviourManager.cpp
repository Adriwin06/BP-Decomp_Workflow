// BrnBehaviourManager.cpp:596
void BrnDirector::Camera::BehaviourManager::BehaviourHelper::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AbstractPoolVoidHandle::Release(/* parameters */);
}

// BrnBehaviourManager.cpp:118
void BrnDirector::Camera::BehaviourManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourManager.cpp:129
void BrnDirector::Camera::BehaviourManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AbstractPool<250u,8u,rw::math::vpu::Vector4>::Destruct(/* parameters */);
	AbstractPool<100u,20u,rw::math::vpu::Vector4>::Destruct(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::Destruct(/* parameters */);
}

// BrnBehaviourManager.cpp:580
void BrnDirector::Camera::BehaviourManager::BehaviourHelper::GetDebugFullName(char *[64]  lpFullNameStringOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Get(/* parameters */);
	Behaviour::GetDebugParametersName(/* parameters */);
}

// BrnBehaviourManager.cpp:570
void BrnDirector::Camera::BehaviourManager::BehaviourHelper::PostCollisionUpdate(const const BehaviourSharedInfo &  lSharedInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Get(/* parameters */);
}

// BrnBehaviourManager.cpp:101
void BrnDirector::Camera::BehaviourManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AbstractPool<250u,8u,rw::math::vpu::Vector4>::Prepare(/* parameters */);
	AbstractPool<100u,20u,rw::math::vpu::Vector4>::Prepare(/* parameters */);
	{
	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::Prepare(/* parameters */);
	{
		BehaviourHelperIndex::operator=(/* parameters */);
	}
}

// BrnBehaviourManager.cpp:558
void BrnDirector::Camera::BehaviourManager::BehaviourHelper::Update(const const BehaviourSharedInfo &  lrSharedInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ValidityAccount::ClearNonFailFlags(/* parameters */);
	Camera::SetDebugInfoBehaviour(/* parameters */);
	CameraState::GetValidityAccount(/* parameters */);
	Get(/* parameters */);
	Behaviour::PreUpdate(/* parameters */);
	Get(/* parameters */);
}

// BrnBehaviourManager.cpp:542
void BrnDirector::Camera::BehaviourManager::BehaviourHelper::Prepare(AbstractPoolVoidHandle  lrAbstractHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Get(/* parameters */);
}

// BrnBehaviourManager.cpp:39
void BrnDirector::Camera::BehaviourManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:74
		int32_t liLoop;

		// BrnBehaviourManager.cpp:86
		Array<BrnDirector::Camera::BehaviourHelperIndex,28u> lBehaviourIndexArray;

	}
	AbstractPool<250u,8u,rw::math::vpu::Vector4>::Construct(/* parameters */);
	AbstractPool<100u,20u,rw::math::vpu::Vector4>::Construct(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::Construct(/* parameters */);
	CgsContainers::Array<int32_t,28u>::Construct(/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Construct(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetAll(/* parameters */);
	CgsContainers::Array<int32_t,28u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<int32_t,28u>::Construct(/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Array(/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Construct(/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::Construct(/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBehaviourManager.cpp:357
void BrnDirector::Camera::BehaviourManager::ProcessSceneQueryResults(bool  lbPaused, const const CollisionPolicySharedInfo &  lSharedInfo, const BrnDirector::DebugPrinter &  lDebugPrinter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:360
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:361
		uint32_t luNumBehaviours;

	}
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	{
		// BrnBehaviourManager.cpp:364
		BehaviourHelperIndex luCurrentHelperIndex;

		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
		BehaviourHelper::ProcessSceneQueryResults(/* parameters */);
		{
			// BrnBehaviourManager.cpp:374
			DebugInterface lDebug;

			// BrnBehaviourManager.cpp:375
			char[64] lFullname;

			CgsDev::DebugInterface::DebugInterface(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			Camera::GetTransform(/* parameters */);
			CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	Behaviour::Fail(/* parameters */);
	BehaviourHelper::Get(/* parameters */);
	CameraState::ClearFlag(/* parameters */);
	ValidityAccount::SetFlag(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetBit(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnBehaviourManager.cpp:313
void BrnDirector::Camera::BehaviourManager::GenerateSceneQueries(bool  lbPaused, const const CollisionPolicySharedInfo &  lSharedInfo, const BrnDirector::DebugPrinter &  lDebugPrinter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:316
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:317
		uint32_t luNumBehaviours;

	}
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	{
		// BrnBehaviourManager.cpp:320
		BehaviourHelperIndex luCurrentHelperIndex;

		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
		BehaviourHelper::GenerateSceneQueries(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnBehaviourManager.cpp:480
void BrnDirector::Camera::BehaviourManager::CheckNoBehavioursAreAllocatedByState(BrnDirector::ArbitratorState *  lpArbitratorState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:487
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:488
		uint32_t luNumBehaviours;

	}
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	{
		// BrnBehaviourManager.cpp:491
		BehaviourHelperIndex luCurrentHelperIndex;

		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::IsObjectAllocated(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnBehaviourManager.cpp:495
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lBehaviourHelper;

		{
			// BrnBehaviourManager.cpp:498
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			BehaviourHelper::Get(/* parameters */);
		}
	}
}

// BrnBehaviourManager.cpp:726
void BrnDirector::Camera::BehaviourManager::DebugDumpToTTY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:733
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:734
		uint32_t luNumBehaviours;

	}
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	{
		// BrnBehaviourManager.cpp:737
		BehaviourHelperIndex luCurrentHelperIndex;

		// BrnBehaviourManager.cpp:738
		char[64] lBehaviourName;

		// BrnBehaviourManager.cpp:739
		char[64] lacMessage;

		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](/* parameters */);
}

// BrnBehaviourManager.cpp:513
void BrnDirector::Camera::BehaviourManager::RefCountLogDump(const const BehaviourHelperIndex &  lBehaviourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:519
		char[64] lFullName;

		// BrnBehaviourManager.cpp:523
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:524
		const const Array<BrnDirector::Camera::BehaviourHelperIndex,28u> & lIndexArray;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBehaviourManager.cpp:140
void BrnDirector::Camera::BehaviourManager::PrepareBehaviours(const BrnDirector::DirectorResourceManager *  lpDirectorResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:148
		BehaviourControllerLockInterface lInterpolateLockInterface;

		// BrnBehaviourManager.cpp:151
		BehaviourSharedPrepareReleaseInfo lSharedInfo;

		// BrnBehaviourManager.cpp:156
		BehaviourHelperIndex lBehaviourHelperIndex;

	}
	BehaviourControllerLockInterface::Construct(/* parameters */);
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	BehaviourControllerLockInterface::SetBehaviourHelperIndex(/* parameters */);
	BehaviourHelper::Get(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
}

// BrnBehaviourManager.cpp:440
void BrnDirector::Camera::BehaviourManager::ReleaseBehaviours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:448
		BehaviourControllerLockInterface lInterpolateLockInterface;

		// BrnBehaviourManager.cpp:451
		BehaviourSharedPrepareReleaseInfo lSharedInfo;

		// BrnBehaviourManager.cpp:456
		BehaviourHelperIndex lBehaviourHelperIndex;

	}
	BehaviourControllerLockInterface::Construct(/* parameters */);
	CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnBehaviourManager.cpp:461
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrBehaviourHelper;

		BehaviourControllerLockInterface::SetBehaviourHelperIndex(/* parameters */);
		BehaviourHelper::Get(/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::FreeObject(/* parameters */);
		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::EraseInstancesOf(/* parameters */);
		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Erase(/* parameters */);
		BehaviourHelperIndex::operator=(/* parameters */);
		CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
		CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	}
}

// BrnBehaviourManager.cpp:619
void BrnDirector::Camera::BehaviourManager::NewBehaviour(const const Attrib::RefSpec &  lParametersRef, BehaviourManager::BehaviourHandle<BrnDirector::Camera::Behaviour> *  lpHandle, const BrnDirector::ArbitratorState *  lpDebugStateOwner, const BrnDirector::Moment *  lpDebugMomentOwner, int32_t  liRefLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:622
		BehaviourHelperIndex lHelperID;

		// BrnBehaviourManager.cpp:648
		const BrnDirector::Camera::BehaviourManager::BehaviourHelper & lrHelper;

	}
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::AllocateObject(/* parameters */);
	{
	}
	BehaviourHelperIndex::BehaviourHelperIndex(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	CgsContainers::Array<int32_t,28u>::operator[](/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::operator[](/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Clear(/* parameters */);
	Attrib::RefSpec::GetClassKey(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::Behaviour>::Prepare(/* parameters */);
	BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::Behaviour>::Get(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::Behaviour>::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::Behaviour>::SetDebugMomentOwner(/* parameters */);
	BehaviourHelper::SetDebugArbitratorStateOwner(/* parameters */);
	BehaviourHelper::SetMomentOwner(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::Behaviour>::Release(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnBehaviourManager.cpp:653
		aftertouchcam lParameters;

		// BrnBehaviourManager.cpp:656
		BrnDirector::Camera::BehaviourAftertouchCam * lpBehaviour;

		Attrib::Gen::aftertouchcam::aftertouchcam(/* parameters */);
		BehaviourAftertouchCam::SetParameters(/* parameters */);
		BehaviourAftertouchCam::SetParameters(/* parameters */);
		Behaviour::SetDebugParametersName(/* parameters */);
		Attrib::Gen::aftertouchcam::~aftertouchcam(/* parameters */);
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
	{
		// BrnBehaviourManager.cpp:673
		proceduralshot lProceduralShot;

		Attrib::Gen::proceduralshot::proceduralshot(/* parameters */);
		Attrib::Gen::proceduralshot::~proceduralshot(/* parameters */);
	}
	{
		// BrnBehaviourManager.cpp:680
		BrnDirector::Camera::BehaviourGyroCam * lpBehaviour;

	}
	{
		// BrnBehaviourManager.cpp:694
		BrnDirector::Camera::BehaviourGyroCam * lpBehaviour;

		BehaviourGyroCam::SetParameters(/* parameters */);
	}
	{
		// BrnBehaviourManager.cpp:667
		BrnDirector::Camera::BehaviourIceAnim * lpBehaviour;

	}
	{
		// BrnBehaviourManager.cpp:687
		BrnDirector::Camera::BehaviourGyroCam * lpBehaviour;

	}
}

// BrnBehaviourManager.cpp:395
void BrnDirector::Camera::BehaviourManager::PostCollisionUpdateAllBehaviours(bool  lbPaused, const BehaviourSharedInfo &  lSharedInfo, const const ControllerInfo &  lrControllerInfo, bool  lbCanHaveDebugControllerFocus, const BrnDirector::DebugPrinter &  lInstructionsDebugPrinter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:397
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:398
		uint32_t luNumBehaviours;

	}
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	VehicleTracker::GetLinearVelocityJournal(/* parameters */);
	{
		// BrnBehaviourManager.cpp:408
		bool lbPlayerStationary;

		// BrnBehaviourManager.cpp:409
		bool lbPlayerCrashing;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
	}
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	{
		// BrnBehaviourManager.cpp:428
		BehaviourHelperIndex luCurrentHelperIndex;

		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnBehaviourManager.cpp:178
void BrnDirector::Camera::BehaviourManager::UpdateAllBehaviours(bool  lbPaused, const BehaviourSharedInfo &  lSharedInfo, const const ControllerInfo &  lrControllerInfo, bool  lbCanHaveDebugControllerFocus, const BrnDirector::DebugPrinter &  lInstructionsDebugPrinter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourManager.cpp:180
		uint32_t luLoop;

		// BrnBehaviourManager.cpp:181
		uint32_t luNumBehaviours;

		// BrnBehaviourManager.cpp:184
		bool lbApplyBoostEffect;

	}
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::GetLength(/* parameters */);
	VehicleTracker::GetLinearVelocityJournal(/* parameters */);
	{
		// BrnBehaviourManager.cpp:205
		bool lbPlayerStationary;

		// BrnBehaviourManager.cpp:206
		bool lbPlayerCrashing;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
	}
	Timestep::Get(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	{
		// BrnBehaviourManager.cpp:248
		BehaviourHelperIndex luCurrentHelperIndex;

		// BrnBehaviourManager.cpp:252
		char[64] lBehaviourName;

		// BrnBehaviourManager.cpp:253
		char[64] lacMessage;

		CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::operator[](/* parameters */);
		{
			// BrnBehaviourManager.cpp:280
			DebugInterface lDebug;

			// BrnBehaviourManager.cpp:281
			char[64] lFullname;

			CgsDev::DebugInterface::DebugInterface(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			Camera::GetTransform(/* parameters */);
			CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		}
	}
	{
		// BrnBehaviourManager.cpp:297
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

