// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnActiveRaceCar.cpp:33
	const float32_t K_NO_COLLISION_GRACE_PERIOD;

	// BrnActiveRaceCar.cpp:38
	const float32_t KF_MIN_STARTLINE_BOOST_TIME;

	// BrnActiveRaceCar.cpp:39
	const float32_t KF_MAX_STARTLINE_BOOST_TIME;

	// BrnActiveRaceCar.cpp:42
	const float32_t KF_MIN_ACCELERATION_FOR_ENGINE;

	// BrnActiveRaceCar.cpp:43
	const float32_t KF_ENGINE_START_UP_TIME;

	// BrnActiveRaceCar.cpp:44
	const float32_t KF_MAX_SPEED_FOR_IDLE_MPH;

	// BrnActiveRaceCar.cpp:45
	const float32_t KF_IDLE_TIME_FOR_ENGINE_OFF;

	// BrnActiveRaceCar.cpp:46
	const float32_t KF_ENGINE_STOPPING_TIME;

	// BrnActiveRaceCar.cpp:49
	const float32_t KF_DRIVING_TIME_TO_END_CRASH;

	// BrnActiveRaceCar.cpp:52
	const float32_t KF_STABILISATION_TIME_TO_END_IN_AIR_ROTATIONS;

	// BrnActiveRaceCar.cpp:65
	const int32_t KI_DISCONNECTED_RACECAR_FLASH_FRAMES = 30;

	// BrnActiveRaceCar.cpp:611
	const VecFloat KVF_BOX_Y_PADDING;

}

// BrnActiveRaceCar.cpp:1909
void BrnWorld::ActiveRaceCar::SetAISection(uint32_t  luSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:2276
void BrnWorld::ActiveRaceCar::SetIndicatorState(bool  lbLeftIndicatorOn, bool  lbRightIndicatorOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:1825
void BrnWorld::ActiveRaceCar::ClearPlaceOnTrack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:1348
void BrnWorld::ActiveRaceCar::SetCullingGroup(InEventAddForCollision::CullingGroup  lCullingGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:229
void BrnWorld::ActiveRaceCar::UpdateTimeSinceCreation(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:2319
void BrnWorld::ActiveRaceCar::UpdateIndicators(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:2321
		bool lbIndicatorActive;

		RenderParams::SetIndicatingLeft(/* parameters */);
		RenderParams::SetIndicatingRight(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:651
void BrnWorld::ActiveRaceCar::UpdateLostContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:1126
void BrnWorld::ActiveRaceCar::ResetVerletOffsets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1130
		int32_t liIndex;

		RenderParams::SetVerletOffset(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:1334
void BrnWorld::ActiveRaceCar::GetCullingGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:2192
void BrnWorld::ActiveRaceCar::ResetInAirRotations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnActiveRaceCar.cpp:710
void BrnWorld::ActiveRaceCar::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:1020
void BrnWorld::ActiveRaceCar::GetResetCoords(Vector3 *  lpPosition, Vector3 *  lpDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1024
		Matrix44Affine lTransform;

		CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine>::Peek(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:1799
void BrnWorld::ActiveRaceCar::RequestPlaceOnTrack(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection, float32_t  lfSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnActiveRaceCar.cpp:683
void BrnWorld::ActiveRaceCar::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	CgsContainers::FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>::Construct(/* parameters */);
	CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine>::Clear(/* parameters */);
}

// BrnActiveRaceCar.cpp:170
void BrnWorld::ActiveRaceCar::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine>::Clear(/* parameters */);
	RenderParams::Reset(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

// BrnActiveRaceCar.cpp:614
void BrnWorld::ActiveRaceCar::GetPropCollisionBox(void *  lpVolumeBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:616
		Vector3 lHalfExtents;

		// BrnActiveRaceCar.cpp:619
		Vector3 lPos;

		// BrnActiveRaceCar.cpp:621
		VecFloat lBoxHeightAboveRoad;

		// BrnActiveRaceCar.cpp:624
		VecFloat lvfExtraHeightForWheels;

		// BrnActiveRaceCar.cpp:627
		VecFloat lvfExtraHeight;

		// BrnActiveRaceCar.cpp:630
		VecFloat lvfHalfExtraHeight;

		// BrnActiveRaceCar.cpp:635
		BoxVolume * lpVolume;

		CgsGeometric::AxisAlignedBox::GetHalfExtents(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	GetDeformationBBox(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// BrnActiveRaceCar.cpp:80
void BrnWorld::ActiveRaceCar::Construct(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	BrnPhysics::Vehicle::RaceCarState::Clear(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	BrnPhysics::Vehicle::AboveGroundTestResult::Reset(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8>::Construct(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	CollisionTag::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Construct(/* parameters */);
	CgsContainers::FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear(/* parameters */);
	RenderParams::Reset(/* parameters */);
}

// BrnActiveRaceCar.cpp:1361
void BrnWorld::ActiveRaceCar::DetermineCullingGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceCar::IsPlayerDriven(/* parameters */);
	RaceCar::IsAIDriven(/* parameters */);
}

// BrnActiveRaceCar.cpp:989
void BrnWorld::ActiveRaceCar::OnCrash(bool  lbFirstCrash, const const RaceCarCrashEvent &  lCrashEvent, OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, bool  lbRemoveFromScene, float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsCrashing(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnActiveRaceCar.cpp:1046
void BrnWorld::ActiveRaceCar::ResetAfterCrash(bool  lbSoftReset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceCar::ToBeRenderedDamaged(/* parameters */);
	IsCrashing(/* parameters */);
	RenderParams::SetDamaged(/* parameters */);
	RenderParams::MakeAllPartsVisible(/* parameters */);
	RaceCar::IsPlayerDriven(/* parameters */);
}

// BrnActiveRaceCar.cpp:1615
void BrnWorld::ActiveRaceCar::UpdateEngineState(float32_t  lfTimeStep, float32_t  lfPlayerAcceleration, float32_t  lfPlayerBraking, bool  lbIsInOnlineGameMode, bool  lbInCarSelect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1617
		bool lbPlayerIsTryingToMove;

	}
	IsCrashing(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
}

// BrnActiveRaceCar.cpp:1543
void BrnWorld::ActiveRaceCar::SendAddedRemovedNetworkCarForCollisionEvents(OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1547
		int32_t liEvent;

	}
	{
		// BrnActiveRaceCar.cpp:1550
		const const VehicleAddedForCollisionEvent & lEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetEvent(/* parameters */);
		BrnPhysics::Vehicle::VehicleInputInterface::RecordNetworkCarAddedOrRemovedForCollision(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear(/* parameters */);
}

// BrnActiveRaceCar.cpp:1215
void BrnWorld::ActiveRaceCar::ValidateHandlingModel(VehicleInputInterface *  lpVehicleInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::Vehicle::VehicleInputInterface::ValidateRaceCar(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:903
void BrnWorld::ActiveRaceCar::OnResourcesValidated(VehicleInputInterface *  lpVehicleInterface, const const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &  lDeformationModelResourcePtr, const const ResourcePtr<BrnVehicle::GraphicsSpec> &  lGraphicsModelResourcePtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator=(/* parameters */);
}

// BrnActiveRaceCar.cpp:1201
void BrnWorld::ActiveRaceCar::InvalidateHandlingModel(VehicleInputInterface *  lpVehicleInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::Vehicle::VehicleInputInterface::InvalidateRaceCar(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:884
void BrnWorld::ActiveRaceCar::OnResourcesInvalidated(VehicleInputInterface *  lpVehicleInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator=(/* parameters */);
}

// BrnActiveRaceCar.cpp
void BrnWorld::ActiveRaceCar::AddHandlingModel(VehicleInputInterface *  lpVehicleInterface, Attribute::Key  lAttribKey, const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector3  lLinearVelocity, bool  lbIsInCarModScreen, uint8_t  lu8CarStrengthStat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1158
		bool lbDisablePhysicsStateReset;

		BrnPhysics::Vehicle::VehicleInputInterface::CreateRaceCar(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::AddEvent(/* parameters */);
		RaceCar::GetType(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		operator=(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:866
void BrnWorld::ActiveRaceCar::Create(VehicleInputInterface *  lpVehicleInterface, Attribute::Key  lAttribKey, const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector3  lLinearVelocity, bool  lbIsInCarModScreen, uint8_t  lu8CarStrengthStat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// BrnActiveRaceCar.cpp:1184
void BrnWorld::ActiveRaceCar::RemoveHandlingModel(VehicleInputInterface *  lpVehicleInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::Vehicle::VehicleInputInterface::RemoveRaceCar(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::AddEvent(/* parameters */);
}

// BrnActiveRaceCar.cpp:817
void BrnWorld::ActiveRaceCar::OnResourcesLoaded(const const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &  lDeformationModelResourcePtr, const const ResourcePtr<BrnVehicle::GraphicsSpec> &  lGraphicsSpecResPtr, VehicleInputInterface *  lpVehicleInterface, Attribute::Key  lAttribKey, Vector3  lVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:819
		uint32_t luWheel;

		// BrnActiveRaceCar.cpp:844
		burnoutcarasset lBaseCarAsset;

		// BrnActiveRaceCar.cpp:845
		burnoutcargraphicsasset lGraphics;

		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
		CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator=(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetCarModelSpaceToHandlingBodySpaceTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		RenderParams::GetDetachedPartQueue(/* parameters */);
		CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::Construct(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		{
		}
		BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
		RenderParams::SetWheelScale(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		SetElem<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		SetElem<VectorAxisZ>(/* parameters */);
		SetElem<VectorAxisY>(/* parameters */);
		Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
		Attrib::Gen::burnoutcargraphicsasset::burnoutcargraphicsasset(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::burnoutcargraphicsasset::~burnoutcargraphicsasset(/* parameters */);
		Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:728
void BrnWorld::ActiveRaceCar::Attach(RaceCar *  lpRaceCar, bool  lbIsInJunkyardOrOnlineCarSelect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::VolumeInstanceId::SetEntityIDOwner(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	RaceCar::ToBeRenderedDamaged(/* parameters */);
	RenderParams::SetDamaged(/* parameters */);
	BrnPhysics::Vehicle::RaceCarState::Clear(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	BrnPhysics::Vehicle::AboveGroundTestResult::Reset(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	RaceCar::GetTransform(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	RaceCar::IsPlayerDriven(/* parameters */);
	CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine>::Clear(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	RenderParams::MakeAllPartsVisible(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	RaceCar::IsPlayerDriven(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	RaceCar::IsPlayerDriven(/* parameters */);
}

// BrnActiveRaceCar.cpp:590
void BrnWorld::ActiveRaceCar::UpdateBoundingBox(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:597
		uint8_t[256] lauScratch;

		CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::ReplaceDynamicVolume(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:1437
void BrnWorld::ActiveRaceCar::UpdateCullingGroup(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1441
		InEventAddForCollision::CullingGroup lNewCullingGroup;

		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceCullingGroup(/* parameters */);
		CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:1498
void BrnWorld::ActiveRaceCar::RemoveFromCollision(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, VehicleInputInterface *  lpVehicalInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveForCollision(/* parameters */);
	CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::AddEvent(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:1518
		VehicleAddedForCollisionEvent lAddedForCollisionEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::AddEvent(/* parameters */);
		{
			// BrnActiveRaceCar.cpp:1516
			CgsDev::StrStream lStrStream;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnActiveRaceCar.cpp:1304
void BrnWorld::ActiveRaceCar::RemoveFromScene(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolumeInstance(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::AddEvent(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolume(/* parameters */);
	CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::AddEvent(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveEntity(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::AddEvent(/* parameters */);
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

// BrnActiveRaceCar.cpp:941
void BrnWorld::ActiveRaceCar::Detach(VehicleInputInterface *  lpVehicleInterface, OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator=(/* parameters */);
}

// BrnActiveRaceCar.cpp:1566
void BrnWorld::ActiveRaceCar::UpdateResetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1571
		bool lbAllWheelsValid;

		// BrnActiveRaceCar.cpp:1572
		int32_t liWheelIndex;

		{
			// BrnActiveRaceCar.cpp:1577
			BrnPhysics::Vehicle::Wheel::RoadContact * lpRoadContact;

		}
		CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine>::Push(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
}

// BrnActiveRaceCar.cpp:1758
void BrnWorld::ActiveRaceCar::UpdateCarSelectStateOnline(bool  lbInCarSelect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1763
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnActiveRaceCar.cpp:1839
void BrnWorld::ActiveRaceCar::UpdatePhysicsState(const RaceCarState *  lpState, WorldMap2D *  lpWorldMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1841
		uint8_t luCount;

		// BrnActiveRaceCar.cpp:1854
		Matrix44Affine lBodyTransform;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		BrnPhysics::Vehicle::RaceCarState::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		RaceCar::UpdateVelocity(/* parameters */);
		RenderParams::SetBodyTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		RenderParams::SetWheelTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		RenderParams::SetWheelExists(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		RenderParams::SetCrashing(/* parameters */);
		RenderParams::SetRaceCarHidden(/* parameters */);
		SetBraking(/* parameters */);
		RenderParams::SetReversing(/* parameters */);
		RenderParams::SetEngineOff(/* parameters */);
		RenderParams::SetBraking(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:1846
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	rw::math::vpu::Max<int32_t>(/* parameters */);
	RenderParams::SetBraking(/* parameters */);
	SetBraking(/* parameters */);
	RenderParams::SetReversing(/* parameters */);
	RaceCar::IsAIDriven(/* parameters */);
	RenderParams::SetEngineOff(/* parameters */);
	RenderParams::SetBraking(/* parameters */);
	RenderParams::SetBraking(/* parameters */);
	RenderParams::SetReversing(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	RenderParams::SetBraking(/* parameters */);
	rw::math::vpu::Max<int32_t>(/* parameters */);
}

// BrnActiveRaceCar.cpp:1385
void BrnWorld::ActiveRaceCar::AddToCollision(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:1413
		VehicleAddedForCollisionEvent lAddedForCollisionEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::AddEvent(/* parameters */);
		{
			// BrnActiveRaceCar.cpp:1411
			CgsDev::StrStream lStrStream;

		}
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnActiveRaceCar.cpp:1089
void BrnWorld::ActiveRaceCar::SendSceneUpdatesPostPhysics(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:436
void BrnWorld::ActiveRaceCar::Update_PreScene(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleOutput, OutputBuffer_PreScene::RaceCarAIInterface *  lpRaceCarAInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::Vehicle::VehicleInputInterface::SetRaceCarCollision(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::AddEvent(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::SetRaceCarCullingGroup(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::AddEvent(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:490
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	IsCrashing(/* parameters */);
	IsCrashing(/* parameters */);
	IsCrashing(/* parameters */);
}

// BrnActiveRaceCar.cpp:1234
void BrnWorld::ActiveRaceCar::AddToScene(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1238
		uint8_t[256] lauScratch;

		// BrnActiveRaceCar.cpp:1244
		Vector3 lHalfExtent;

		// BrnActiveRaceCar.cpp:1248
		VecFloat lvfExtraHeightForWheels;

		// BrnActiveRaceCar.cpp:1249
		VecFloat lvfExtraHeight;

		// BrnActiveRaceCar.cpp:1250
		VecFloat lvfHalfExtraHeight;

		// BrnActiveRaceCar.cpp:1261
		BoxVolume * lpVolume;

		// BrnActiveRaceCar.cpp:1284
		InEventAddDynamicVolume::VolumeTypeFlags lHACKVolumeTypeFlags;

		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		{
		}
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		RaceCar::GetPosition(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		{
			// BrnActiveRaceCar.cpp:1267
			AABBox lHandlingBodyAabb;

			// BrnActiveRaceCar.cpp:1271
			char[13] lacModelIdString;

		}
		RaceCar::GetModelId(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		{
		}
		{
			// BrnActiveRaceCar.cpp:1274
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Vector3::Y(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddDynamicVolume(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
		RaceCar::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnActiveRaceCar.cpp:1275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnActiveRaceCar.cpp:923
void BrnWorld::ActiveRaceCar::OnHandlingModelAdded(OutputBuffer_PreScene::SceneInputInterface *  lpSceneInterface, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnActiveRaceCar.cpp:1961
void BrnWorld::ActiveRaceCar::CalculateWheelAngularVelocities(float32_t  lfTimeStepMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:1963
		const WheelLite * lpaWheelArray;

		// BrnActiveRaceCar.cpp:1964
		float32_t * lpfAngularVelocities;

		GetPhysicsState(/* parameters */);
		RenderParams::GetWheelAngularVelocities(/* parameters */);
		{
			// BrnActiveRaceCar.cpp:1967
			int32_t liWheelIndex;

			rw::math::fpu::Abs<float>(/* parameters */);
		}
	}
}

// BrnActiveRaceCar.cpp:1981
void BrnWorld::ActiveRaceCar::IsWrecked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceCar::IsPlayerDriven(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:2011
		CollisionTag lCollisionTag;

	}
	GetPhysicsState(/* parameters */);
	GetPhysicsState(/* parameters */);
	IsCrashing(/* parameters */);
	GetPhysicsState(/* parameters */);
}

// BrnActiveRaceCar.cpp:2109
void BrnWorld::ActiveRaceCar::IsCarAbleToDrive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:2111
		int32_t liWheelIndex;

	}
}

// BrnActiveRaceCar.cpp:2067
void BrnWorld::ActiveRaceCar::IsDriveableAfterCrash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceCar::IsPlayerDriven(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:2083
		Vector3 lUp;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		GetTransform(/* parameters */);
		RaceCar::GetTransform(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnActiveRaceCar.cpp:2034
void BrnWorld::ActiveRaceCar::IsDeformationFixedAfterCrash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceCar::IsPlayerDriven(/* parameters */);
}

// BrnActiveRaceCar.cpp:2141
void BrnWorld::ActiveRaceCar::UpdateDeformationState(const const DeformationState &  lDeformationState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:2143
		const CarState * lpCarState;

		// BrnActiveRaceCar.cpp:2149
		Vector3 lRaceCarHalfExtent;

		// BrnActiveRaceCar.cpp:2150
		Matrix44Affine lRaceCarTransform;

		// BrnActiveRaceCar.cpp:2151
		Matrix44Affine lHalfExtentsWorld;

		GetPhysicsState(/* parameters */);
		BrnPhysics::Deformation::DeformationState::GetCarStateFromEntityId(/* parameters */);
		CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
		RenderParams::SetDeformationSquared(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		operator=<VectorAxisY>(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		{
			// BrnActiveRaceCar.cpp:2176
			uint32_t luWheel;

		}
	}
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
}

// BrnActiveRaceCar.cpp:2210
void BrnWorld::ActiveRaceCar::UpdateInAirRotations(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:2254
		Matrix44Affine lInverseCarTransform;

		// BrnActiveRaceCar.cpp:2255
		Vector3 lAngularVelocityInCarSpace;

		GetPhysicsState(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		GetPhysicsState(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
	{
		// BrnActiveRaceCar.cpp:2222
		int32_t liWheelIndex;

		GetPhysicsState(/* parameters */);
		GetPhysicsState(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	GetPhysicsState(/* parameters */);
}

// BrnActiveRaceCar.cpp:258
void BrnWorld::ActiveRaceCar::Update(OutputBuffer_PrePhysics::GameEventQueue *  lpEventQueue, float32_t  lfTimeStep, float32_t  lfCurrentTime, float32_t  lfTimeStepMultiplier, float32_t  lfPlayerAcceleration, float32_t  lfPlayerBraking, bool  lbIsInOnlineGameMode, bool  lbInCarSelect, bool  lbInHardStopCamera, Random *  lpRandom, OutputBuffer_PreScene::VehicleInputInterface *  lpVehicleOutput, BrnGameState::GameStateModuleIO::EGameModeType  leGameMode, Vector2  lPlayersCurrentRouteNodePosition, Vector2  lPlayersNextRouteNodePosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.cpp:262
		bool lbIsCrashing;

		// BrnActiveRaceCar.cpp:374
		Matrix44Affine lTransform;

		// BrnActiveRaceCar.cpp:375
		Vector3 lLocalDisplacement;

		// BrnActiveRaceCar.cpp:376
		Vector3 lDisplacement;

	}
	IsCrashing(/* parameters */);
	SetCanDriveAwayFromCrash(/* parameters */);
	IsOnRaceStartState(/* parameters */);
	RaceCar::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	RaceCar::GetPosition(/* parameters */);
	RaceCar::GetPreviousPosition(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	RaceCar::IsPlayerDriven(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:349
		RaceCarDrivingInCrashEvent lDrivingInCrashEvent;

	}
	SetCanDriveAwayFromCrash(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	IsPlayer(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnActiveRaceCar.cpp:309
		Vector3 lOriginalPlayerDirection;

		// BrnActiveRaceCar.cpp:310
		Vector2 lPlayerDirection;

		// BrnActiveRaceCar.cpp:311
		Vector2 lCurrentRouteNode;

		// BrnActiveRaceCar.cpp:312
		Vector2 lNextRouteNode;

		// BrnActiveRaceCar.cpp:313
		Vector2 lCurrentRouteVec;

		// BrnActiveRaceCar.cpp:317
		float32_t lfDot;

		GetDirection(/* parameters */);
		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		SetCanDriveAwayFromCrash(/* parameters */);
	}
	SetWrecked(/* parameters */);
	SetCanDriveAwayFromCrash(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnActiveRaceCar.cpp:35
