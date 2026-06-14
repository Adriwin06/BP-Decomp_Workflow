// BrnMomentController.cpp:224
void BrnDirector::MomentController::MomentHandle::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentController.cpp:268
void BrnDirector::MomentController::MomentHandle::CompareHandlesIgnoringIsAllocatedFlag(const const MomentHandle &  lrOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentController.cpp:96
void BrnDirector::MomentController::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentController.cpp:105
void BrnDirector::MomentController::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::Destruct(/* parameters */);
}

// BrnMomentController.cpp:33
void BrnDirector::MomentController::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::Prepare(/* parameters */);
	{
	}
}

// BrnMomentController.cpp:24
void BrnDirector::MomentController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::Construct(/* parameters */);
}

// BrnMomentController.cpp:235
void BrnDirector::MomentController::MomentHandle::Prepare(AbstractPoolVoidHandle  lVoidHandle, const MomentController &  lrParentMomentController, const BehaviourManager &  lBehaviourManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetMoment(/* parameters */);
	GetMoment(/* parameters */);
}

// BrnMomentController.cpp:277
void BrnDirector::MomentController::MomentHandle::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetMoment(/* parameters */);
	AbstractPoolVoidHandle::Release(/* parameters */);
}

// BrnMomentController.cpp:251
void BrnDirector::MomentController::MomentHandle::GiveControlTo(const MomentController::MomentHandle &  lrOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentController.cpp:44
void BrnDirector::MomentController::UpdateAllMoments(const BehaviourManager &  lBehaviourManager, const const MomentSharedInfo &  lMomentSharedInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentController.cpp:49
		float32_t lfTimeStep;

		// BrnMomentController.cpp:53
		char[64] lacMessage;

		// BrnMomentController.cpp:54
		CgsDev::StrStream lStrStream;

		// BrnMomentController.cpp:58
		int32_t liLoop;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnMomentController.cpp:61
		Moment * lpMoment;

		AbstractPool<70u,20u,rw::math::vpu::Vector4>::IsObjectAllocated(/* parameters */);
		AbstractPool<70u,20u,rw::math::vpu::Vector4>::operator[](/* parameters */);
		Moment::PreUpdate(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	DebugPrinter::Print(/* parameters */);
}

// BrnMomentController.cpp:118
void BrnDirector::MomentController::NewMoment(BrnDirector::Moment::EType  leMomentType, BrnDirector::MomentParameterBank::EMomentParamID  leMomentParamID, const MomentController::MomentHandle &  lrMomentHandleInOut, const BehaviourManager &  lBehaviourManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMomentController.cpp:123
		AbstractPoolVoidHandle lVoidHandle;

		// BrnMomentController.cpp:214
		BrnDirector::Moment::Parameters * lpParameters;

	}
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentHardStop>(/* parameters */);
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentHitTraffic>(/* parameters */);
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentBystanderSeesAction>(/* parameters */);
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentFailSafe>(/* parameters */);
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentPlayerStunt>(/* parameters */);
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentPlayerJumping>(/* parameters */);
	AbstractPool<70u,20u,rw::math::vpu::Vector4>::AllocateVoid<BrnDirector::MomentStaticCamImpact>(/* parameters */);
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
}

