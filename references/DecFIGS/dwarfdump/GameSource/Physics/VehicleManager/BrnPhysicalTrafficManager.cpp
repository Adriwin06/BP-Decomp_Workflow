// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnPhysicalTrafficManager.cpp:43
		const float32_t KF_MAX_DISTANCE_FOR_TRAFFIC_NEAR_MISS_CONSIDERATION_SQUARE;

		// BrnPhysicalTrafficManager.cpp:46
		bool KB_DO_NOT_FAIL_IF_RIGID_BODY_NOT_FOUND;

		// BrnPhysicalTrafficManager.cpp:2214
		const VecFloat KVF_SLAM_MAGNITUDE_FOR_MAX_SLAM_STEER;

		// BrnPhysicalTrafficManager.cpp:2215
		const VecFloat KVF_SLAM_MAGNITUDE_FOR_MAX_SLAM_STEER_RECIP;

	}

}

// BrnPhysicalTrafficManager.cpp:317
void BrnPhysics::Vehicle::PhysicalTrafficManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<int8_t>::Release(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:332
		uint8_t lu8FullyPhysicalTraffic;

		// BrnPhysicalTrafficManager.cpp:333
		uint8_t lu8SimpleTraffic;

		// BrnPhysicalTrafficManager.cpp:334
		uint8_t lu8GlobalTraffic;

	}
}

// BrnPhysicalTrafficManager.cpp:377
void BrnPhysics::Vehicle::PhysicalTrafficManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<int8_t>::Destruct(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:2402
void BrnPhysics::Vehicle::PhysicalTrafficManager::PhysicallyCrashTrafficCar(uint16_t  lu16TrafficCarIndex, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsTrafficVehicleCrashed(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:2409
		VolumeInstanceId lTrafficBodyID;

		CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2183
void BrnPhysics::Vehicle::PhysicalTrafficManager::SetTrafficVehicleNotCrashing(EntityId  lTrafficEntityID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2186
		uint16_t lu16TrafficIndex;

		// BrnPhysicalTrafficManager.cpp:2195
		PhysicalTrafficVehicle * lpTrafficVehicle;

		IsTrafficVehicleCrashed(/* parameters */);
	}
	GetTrafficVehicle(/* parameters */);
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
	PhysicalTrafficVehicle::GetPhysics(/* parameters */);
	PhysicalTrafficVehicle::SetPhysicalTrafficState(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:3588
void BrnPhysics::Vehicle::PhysicalTrafficManager::ValidateTrafficContact(PotentialContact *  lpContact, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCacheInterface, float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3597
		EntityId lTrafficGlobalEntityId;

		// BrnPhysicalTrafficManager.cpp:3598
		EntityId lTrafficPhysicsEntityId;

		// BrnPhysicalTrafficManager.cpp:3600
		BrnWorld::EEntityTypeID leOtherEntityType;

		// BrnPhysicalTrafficManager.cpp:3601
		int32_t liTrafficIndex;

		// BrnPhysicalTrafficManager.cpp:3605
		bool lbTrafficIsAlive;

		// BrnPhysicalTrafficManager.cpp:3619
		const PhysicalTrafficVehicle * lpTrafficVehicle;

	}
	GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	GetTrafficVehicle(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:3626
		const BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:3628
		const VecFloat kvfGroundContactCullHeight;

		// BrnPhysicalTrafficManager.cpp:3630
		Vector3 lPointOnRaceCar;

		// BrnPhysicalTrafficManager.cpp:3631
		Vector3 lPointOnOther;

		// BrnPhysicalTrafficManager.cpp:3633
		Vector3 lWheelPlaneNormal;

		// BrnPhysicalTrafficManager.cpp:3634
		bool lbValidContact;

		// BrnPhysicalTrafficManager.cpp:3645
		Vector3 lGroundNormal;

		// BrnPhysicalTrafficManager.cpp:3646
		Vector3 lPointOnPlane;

		PhysicalTrafficVehicle::GetPhysics(/* parameters */);
		SimpleVehiclePhysics::IsContactBelowWheelPlane(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		{
		}
		{
			// BrnPhysicalTrafficManager.cpp:3650
			VecFloat lvfDistFromPlane;

		}
	}
	SimpleVehiclePhysics::GetAboveGroundTestResult(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+<VectorAxisW>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:67
void BrnPhysics::Vehicle::PhysicalTrafficManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:69
		uint8_t lu8FullyPhysicalTraffic;

		// BrnPhysicalTrafficManager.cpp:70
		uint8_t lu8Traffic;

	}
	CgsModule::EventQueue<int8_t,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<int8_t>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<int8_t>::Clear(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:2850
void BrnPhysics::Vehicle::PhysicalTrafficManager::GetTrafficInterest(const PhysicalTrafficVehicle *  lpTrafficVehicle, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2853
		float32_t lfInterest;

		// BrnPhysicalTrafficManager.cpp:2855
		int32_t liRaceCar;

		// BrnPhysicalTrafficManager.cpp:2856
		float32_t lfMinSquareDistToRaceCar;

		// BrnPhysicalTrafficManager.cpp:2857
		Vector3 lTrafficVehiclePos;

		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:2867
		Vector3 lRaceCarPos;

		// BrnPhysicalTrafficManager.cpp:2868
		float32_t lfSquareDistToCurrentRaceCar;

	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:3764
void BrnPhysics::Vehicle::PhysicalTrafficManager::ComputeTrafficVehicleInertia(int32_t  liTrafficVehicle, Inertia *  lpOutInertia) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3769
		Inertia lInertia;

		// BrnPhysicalTrafficManager.cpp:3770
		Vector3 lInertialTensor;

		// BrnPhysicalTrafficManager.cpp:3771
		Vector3 lBoxExtent;

		// BrnPhysicalTrafficManager.cpp:3772
		float32_t lfMass;

		// BrnPhysicalTrafficManager.cpp:3773
		VecFloat lvfMass;

		// BrnPhysicalTrafficManager.cpp:3774
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:3775
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

	}
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	rw::physics::Inertia::Inertia(/* parameters */);
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::GetPhysics(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::physics::Inertia::SetLinearDrag(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::physics::Inertia::SetAngularDrag(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2432
void BrnPhysics::Vehicle::PhysicalTrafficManager::PhysicallyUncrashTrafficCar(uint16_t  lu16TrafficCarIndex, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsTrafficVehicleCrashed(/* parameters */);
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:2442
		VolumeInstanceId lTrafficBodyID;

		CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetVolumeIndex(/* parameters */);
		GetTrafficVehicle(/* parameters */);
		Deformation::DeformationInputInterface::DeactivateDeformationModel(/* parameters */);
		Deformation::DeformationInputInterface::RemoveDeformationModel(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::AddEvent(/* parameters */);
		CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:242
void BrnPhysics::Vehicle::PhysicalTrafficManager::PrepareTriangleCache(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:249
		InputBuffer_Update::InSmSceneUpdateInterface * lpSceneUpdateInterface;

		// BrnPhysicalTrafficManager.cpp:251
		const float32_t kfTrafficCacheSphereRadius;

		// BrnPhysicalTrafficManager.cpp:253
		int32_t liTraffic;

	}
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddCachedObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2696
void BrnPhysics::Vehicle::PhysicalTrafficManager::IsJointBroken(const const OutJointSpy &  lJointSpy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficManager.cpp:2317
void BrnPhysics::Vehicle::PhysicalTrafficManager::SetTrafficVehicleChecked(EntityId  lTrafficEntityID, EntityId  lRaceCarID, const BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, const rw::math::vpu::Vector3  lContactPointOnTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2322
		uint16_t lu16TrafficIndex;

		// BrnPhysicalTrafficManager.cpp:2325
		PhysicalTrafficVehicle * lpTrafficPhysics;

		GetTrafficVehicle(/* parameters */);
		CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
		PhysicalTrafficVehicle::SetPhysicalTrafficState(/* parameters */);
		PhysicalTrafficVehicle::HasNonBrokenJoint(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnPhysicalTrafficManager.cpp:2358
			Matrix44Affine lTrafficMatrix;

			// BrnPhysicalTrafficManager.cpp:2359
			Matrix44Affine lRaceCarMatrix;

			// BrnPhysicalTrafficManager.cpp:2360
			EntityId lRemappedTrafficEntityID;

			// BrnPhysicalTrafficManager.cpp:2361
			EntityId lRemappedCrashedIntoEntityID;

			// BrnPhysicalTrafficManager.cpp:2362
			Vector3 lTrafficToRaceCar;

			// BrnPhysicalTrafficManager.cpp:2363
			float32_t lfSteerDirection;

			PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::Sgn(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
			GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
			rw::math::vpu::Sgn(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			SimpleVehiclePhysics::GetSpeed(/* parameters */);
			VehicleManagerOutputInterface::AddSlammedTrafficEvent(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::AddEvent(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
	}
	{
		// BrnPhysicalTrafficManager.cpp:2340
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:2343
		int32_t liOtherHalfIndex;

		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		GetPhysicsEntityId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:2225
void BrnPhysics::Vehicle::PhysicalTrafficManager::SetTrafficVehicleSlammed(EntityId  lTrafficEntityID, EntityId  lOtherCarID, const BrnPhysics::Vehicle::SimpleVehiclePhysics *  lpOtherCarPhysics, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, const rw::math::vpu::Vector3  lContactPointOnTraffic, const VecFloat  lvfSlamMagnitude) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2230
		uint16_t lu16TrafficIndex;

		// BrnPhysicalTrafficManager.cpp:2233
		PhysicalTrafficVehicle * lpTrafficPhysics;

		GetTrafficVehicle(/* parameters */);
		CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
		PhysicalTrafficVehicle::SetPhysicalTrafficState(/* parameters */);
		PhysicalTrafficVehicle::HasNonBrokenJoint(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnPhysicalTrafficManager.cpp:2269
			Matrix44Affine lTrafficMatrix;

			// BrnPhysicalTrafficManager.cpp:2270
			Matrix44Affine lRaceCarMatrix;

			// BrnPhysicalTrafficManager.cpp:2271
			EntityId lRemappedTrafficEntityID;

			// BrnPhysicalTrafficManager.cpp:2272
			EntityId lRemappedCrashedIntoEntityID;

			// BrnPhysicalTrafficManager.cpp:2273
			Vector3 lTrafficToRaceCar;

			// BrnPhysicalTrafficManager.cpp:2274
			float32_t lfSteerDirection;

			PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::Sgn(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
			GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
			rw::math::vpu::Sgn(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			SimpleVehiclePhysics::GetSpeed(/* parameters */);
			VehicleManagerOutputInterface::AddSlammedTrafficEvent(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::AddEvent(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
	}
	{
		// BrnPhysicalTrafficManager.cpp:2250
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:2253
		int32_t liOtherHalfIndex;

		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		GetPhysicsEntityId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:131
void BrnPhysics::Vehicle::PhysicalTrafficManager::Prepare(rw::LinearResourceAllocator *  lpPhysicsAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<int8_t>::Prepare(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:151
		int32_t liDriversSize;

		// BrnPhysicalTrafficManager.cpp:152
		ResourceDescriptor lDriversResDesc;

		// BrnPhysicalTrafficManager.cpp:153
		Resource lDriversRes;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:162
		int32_t liVehiclesSize;

		// BrnPhysicalTrafficManager.cpp:163
		ResourceDescriptor lVehiclesResDesc;

		// BrnPhysicalTrafficManager.cpp:164
		Resource lVehiclesRes;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:173
		int32_t liSimpleTrafficSize;

		// BrnPhysicalTrafficManager.cpp:174
		ResourceDescriptor lSimpleTrafficResDesc;

		// BrnPhysicalTrafficManager.cpp:175
		Resource lSimpleTrafficRes;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		SimpleVehiclePhysics::SimpleVehiclePhysics(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:185
		uint8_t lu8FullyPhysicalTraffic;

		// BrnPhysicalTrafficManager.cpp:186
		uint8_t lu8SimpleTraffic;

		// BrnPhysicalTrafficManager.cpp:187
		uint8_t lu8GlobalTraffic;

	}
	{
		// BrnPhysicalTrafficManager.cpp:157
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:168
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1776
void BrnPhysics::Vehicle::PhysicalTrafficManager::UpdateTrafficDriver(const BrnTrafficDriverControls *  lpControls, const BitArray<8u> &  lUpdatedVehicles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1778
		VolumeInstanceId lTrafficVolumeID;

		// BrnPhysicalTrafficManager.cpp:1779
		EntityId lTrafficEntityId_Physics;

		// BrnPhysicalTrafficManager.cpp:1780
		uint16_t lu16TrafficIndex;

		BrnTraffic::GetVehicleSpecies(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		IsTrafficVehiclePhysical(/* parameters */);
		GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:1782
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnPhysicalTrafficManager.cpp:3566
void BrnPhysics::Vehicle::PhysicalTrafficManager::AddAirRam(uint16_t  luTrafficCarIndex, uint32_t  lxEffectFlags, float32_t  lfMagnitude, float32_t  lfDecay, const rw::math::vpu::Vector3  lDirection, const rw::math::vpu::Vector3  lPosition, float32_t  lfStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::AddAirRam(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:3527
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessAddAirRamEvent(const CreateAirRamEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3531
		EntityId lTrafficPhysicsId;

		// BrnPhysicalTrafficManager.cpp:3533
		bool lbTrafficVehicleIsPhysical;

	}
	{
		// BrnPhysicalTrafficManager.cpp:3529
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:3538
		uint16_t luTrafficIndex;

		GetTrafficVehicle(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		PhysicalTrafficVehicle::AddAirRam(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:558
void BrnPhysics::Vehicle::PhysicalTrafficManager::UpdateNetworkTrafficVehicle(const UpdateNetworkTrafficEvent *  lpEvent, EntityId  lTrafficPhysicsId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:562
		PhysicalTrafficVehicle * lpVehicle;

		// BrnPhysicalTrafficManager.cpp:570
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:571
		VehicleDriver * lpVehicleDriver;

	}
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
	PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
	GetTrafficDriver(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:515
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessUpdateNetworkTrafficEvents(const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:524
		int32_t liEvent;

	}
	{
		// BrnPhysicalTrafficManager.cpp:527
		const UpdateNetworkTrafficEvent * lpEvent;

		// BrnPhysicalTrafficManager.cpp:529
		EntityId lPhysicsId;

		// BrnPhysicalTrafficManager.cpp:532
		bool lbIsTrafficPhysical;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetEvent(/* parameters */);
		GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2799
void BrnPhysics::Vehicle::PhysicalTrafficManager::BreakArticulatedJoint(ArticulatedJointId  lJointId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2801
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:2804
		int32_t liCab;

		// BrnPhysicalTrafficManager.cpp:2805
		int32_t liTrailer;

		// BrnPhysicalTrafficManager.cpp:2813
		PhysicalTrafficVehicle * lpCab;

		// BrnPhysicalTrafficManager.cpp:2814
		PhysicalTrafficVehicle * lpTrailer;

		ArticulatedJointId::GetCabVehicleIndex(/* parameters */);
	}
	GetTrafficVehicle(/* parameters */);
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::OnArticulatedJointBroken(/* parameters */);
	PhysicalTrafficVehicle::OnArticulatedJointBroken(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalTrafficVehicle::GetArticulatedJointState(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedJointState(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:2650
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessJointSpys(const OutputBuffer *  lpSimModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2653
		const OutputBuffer::OutJointSpyQueue * lpJointSpyQueue;

		// BrnPhysicalTrafficManager.cpp:2655
		int32_t liJointSpyIndex;

		// BrnPhysicalTrafficManager.cpp:2656
		int32_t liNumJointSpys;

		CgsPhysics::PhysicsSimulationIO::OutputBuffer::GetJointSpyQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::GetLength(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:2661
			const const OutJointSpy & lJointSpy;

			CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy>::GetEvent(/* parameters */);
		}
		{
			// BrnPhysicalTrafficManager.cpp:2669
			ArticulatedJointId lJointId;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:658
void BrnPhysics::Vehicle::PhysicalTrafficManager::RemoveTrafficVehicle(uint8_t  lu8TrafficEntityNum, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface, bool  lbFailIfRigidBodyNotFound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:664
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:732
		VolumeInstanceId lVolumeInstanceID;

		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	}
	PhysicalTrafficVehicle::ClearArticulatedState(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:740
		int32_t liPhysicsPoolIndex;

		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	}
	VehicleDriver::ClearControls(/* parameters */);
	BrnAIDriverControls::Clear(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<20u>::SetBit(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<1u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<1u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:669
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:670
		int32_t liOtherHalfIndex;

		// BrnPhysicalTrafficManager.cpp:671
		PhysicalTrafficVehicle * lpOtherHalf;

		// BrnPhysicalTrafficManager.cpp:692
		int32_t liOtherHalfAttachedIndex;

		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		PhysicalTrafficVehicle::ClearArticulatedState(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:744
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:749
		CgsDev::StrStream lStrStream;

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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:3487
void BrnPhysics::Vehicle::PhysicalTrafficManager::SendTrafficVehicleRecycledEvents(int32_t  liIndexToRecycle, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3492
		EntityId lRecycledTrafficEntityId;

		// BrnPhysicalTrafficManager.cpp:3495
		BrnPhysics::Vehicle::ETrafficType leTrafficType;

		GetTrafficVehicle(/* parameters */);
	}
	PhysicalTrafficVehicle::GetPhysicalTrafficState(/* parameters */);
	VehicleManagerOutputInterface::AddTrafficRemovedEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:3424
void BrnPhysics::Vehicle::PhysicalTrafficManager::RecycleTrafficVehicle(int32_t  liIndexToRecycle, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3429
		PhysicalTrafficVehicle * lpTrafficVehicle;

	}
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::HasNonBrokenJoint(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:3437
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:3440
		int32_t liOtherHalfIndex;

		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	}
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:598
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessRemoveEvents(const VehicleInputInterface::RemoveTrafficEventQueue *  lpRemoveTrafficQueue, VehicleOutputRequestInterface *  lpOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:604
		RemoveTrafficEvent lTrafficEvent;

		// BrnPhysicalTrafficManager.cpp:605
		int32_t liRemoveEvent;

		// BrnPhysicalTrafficManager.cpp:606
		int32_t liTrafficPhysics;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetEvent(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:631
		int32_t liTrafficIndex;

		CgsModule::BaseEventQueue<int8_t>::GetEvent(/* parameters */);
	}
	CgsModule::BaseEventQueue<int8_t>::Clear(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:1166
void BrnPhysics::Vehicle::PhysicalTrafficManager::PreparePhysicsForNewTrafficVehicle(const const CreatePhysicalTrafficEvent &  lCreateTrafficEvent, int32_t  liTrafficVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1168
		StreamedDeformationSpec * lpModelData;

		// BrnPhysicalTrafficManager.cpp:1169
		Vector3[6] laWheelPositions;

		// BrnPhysicalTrafficManager.cpp:1170
		float32_t[6] lafWheelRadii;

		// BrnPhysicalTrafficManager.cpp:1171
		VehicleAttribs lVehicleAttribs;

		VehicleAttribs(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1181
			burnoutcarasset lBaseCarAsset;

			// BrnPhysicalTrafficManager.cpp:1182
			physicsvehiclehandling lHandling;

			Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
		}
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
		Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1191
			const ResourceHandle::Resource * lpModelResource;

			CgsResource::SmallResource::GetMemoryResource(/* parameters */);
		}
		{
			// BrnPhysicalTrafficManager.cpp:1203
			uint8_t luWheelIdx;

			// BrnPhysicalTrafficManager.cpp:1204
			uint8_t luWheelCount;

			Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
			Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
		GetTrafficVehicle(/* parameters */);
		VehicleDriver::ClearControls(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:4294
void BrnPhysics::Vehicle::PhysicalTrafficManager::ClearSnappedNetworkTrafficContacts(DeformationManager *  lpDeformationManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:4296
		int32_t liTraffic;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	GetTrafficDriver(/* parameters */);
	GetPhysicsEntityId(/* parameters */);
	Deformation::DeformationManager::ClearModelStoredContacts(/* parameters */);
	{
	}
}

// BrnPhysicalTrafficManager.cpp:4193
void BrnPhysics::Vehicle::PhysicalTrafficManager::CheckForTrafficHittingWater(VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:4199
		int32_t liTraffic;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:4206
		bool lbHitWater;

		// BrnPhysicalTrafficManager.cpp:4209
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:4210
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:4213
		const AboveGroundTestResult * lpAboveGroundTest;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::GetPhysics(/* parameters */);
		SimpleVehiclePhysics::GetAboveGroundTestResult(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:4221
			CollisionTag lCollisionTag;

			// BrnPhysicalTrafficManager.cpp:4222
			uint8_t lu8SurfaceId;

		}
	}
	{
		// BrnPhysicalTrafficManager.cpp:4236
		Box lTrafficBox;

		// BrnPhysicalTrafficManager.cpp:4240
		Matrix44Affine lHalfExtentsWorld;

		// BrnPhysicalTrafficManager.cpp:4247
		VecFloat lvfLowestPointWorldSpace;

		CgsGeometric::Box::GetTransform(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		CgsGeometric::Box::GetDimensions(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		CgsGeometric::Box::GetTransform(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		operator=<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		{
		}
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:3343
void BrnPhysics::Vehicle::PhysicalTrafficManager::GetLeastInterestingFullyPhysicalVehicle(BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *  lpDoNotRecycleBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3350
		int32_t liUsedVehicle;

		// BrnPhysicalTrafficManager.cpp:3351
		int32_t liNumRecyclableVehiclesFound;

		// BrnPhysicalTrafficManager.cpp:3352
		float32_t lfMinTrafficInterest;

		// BrnPhysicalTrafficManager.cpp:3353
		int32_t liLeastInterestingTrafficIndex;

	}
	CgsContainers::BitArray<20u>::GetFirstZeroBit(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:3400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:3364
		const PhysicalTrafficVehicle * lpVehicle;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:3370
		float32_t lfCurrentTrafficInterest;

		// BrnPhysicalTrafficManager.cpp:3376
		bool lbVehicleCanBeRecycled;

		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:3381
			bool lbIsFirstRecyclableVehicle;

			// BrnPhysicalTrafficManager.cpp:3382
			bool lbIsLeastInterestingSoFar;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2918
void BrnPhysics::Vehicle::PhysicalTrafficManager::GetFreeTrafficVehicleWithPhysics(VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *  lpDoNotRecycleBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2928
		int32_t liFreeTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:2929
		int32_t liFreeFullTrafficPhysics;

	}
	CgsContainers::BitArray<20u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:3007
		PhysicalTrafficVehicle * lpNewVehicle;

		// BrnPhysicalTrafficManager.cpp:3008
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		CgsContainers::BitArray<20u>::SetBit(/* parameters */);
		CgsContainers::BitArray<20u>::SetBit(/* parameters */);
		GetTrafficVehicle(/* parameters */);
		GetFullTrafficPhysics(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2473
void BrnPhysics::Vehicle::PhysicalTrafficManager::WriteOutVehicleStats(VehicleOutputInterface *  lpOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2475
		int32_t liVehicle;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:2487
		const PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:2490
		EntityId lGlobalId;

		GetTrafficVehicle(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VehicleOutputInterface::AddTrafficState(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	Wheel::GetMinSuspensionHeight(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:2493
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetPhysicsEntityId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2041
void BrnPhysics::Vehicle::PhysicalTrafficManager::DisposeOfNonCrashingTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2043
		int32_t liVehicle;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsModule::BaseEventQueue<int8_t>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<int8_t>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1930
void BrnPhysics::Vehicle::PhysicalTrafficManager::ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *  lpUpdatedBodies, const VecFloat  lvfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1936
		int32_t liIndexA;

		// BrnPhysicalTrafficManager.cpp:1937
		int32_t liIndexB;

	}
	{
		// BrnPhysicalTrafficManager.cpp:1941
		RigidBodyId lBodyIdA;

		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetEvent(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody>::GetEvent(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1945
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnPhysicalTrafficManager.cpp:1999
		int32_t liUsedVehicle;

		CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:2003
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:2011
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:2015
		Vector3 lLinVel;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:1881
void BrnPhysics::Vehicle::PhysicalTrafficManager::UpdateTrafficPhysics(float32_t  lfSimTimerTimeStep, float32_t  lfGameTimerTimeStep, const rw::math::vpu::Matrix44Affine *  lpCameraMatrix, bool  lbImactTime, bool  lbDoForceAdditiveAftertouch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1883
		int32_t liUsedVehicle;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1889
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1897
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:1898
		VehicleDriver * lpVehicleDriver;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
		GetTrafficDriver(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1821
void BrnPhysics::Vehicle::PhysicalTrafficManager::GetUpdatedVehicleBodies(OutUpdatedExternalBodyQueue *  lUpdatedVehicles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1823
		EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::InUpdateExternalBody lUpdateEvent;

		// BrnPhysicalTrafficManager.cpp:1824
		EntityId lBodyID;

		// BrnPhysicalTrafficManager.cpp:1825
		int32_t liUsedVehicle;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1834
		const PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1837
		const BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

		GetPhysicsEntityId(/* parameters */);
		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::GetPhysics(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1852
			EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::InUpdateExternalBody lUpdateDummyCarEvent;

			// BrnPhysicalTrafficManager.cpp:1854
			EntityId lDummyRaceCarEntityId;

			InUpdateExternalBody(/* parameters */);
			CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::AddEvent(/* parameters */);
			CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
	}
	operator=(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1727
void BrnPhysics::Vehicle::PhysicalTrafficManager::PassNearbyCrashingTrafficIdsToRaceCarModule(VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, const rw::math::vpu::Vector3  lPlayerPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1729
		VehicleManagerOutputInterface::FineTrafficCrashedEventQueue * lpFineCrashQueue;

		// BrnPhysicalTrafficManager.cpp:1731
		int32_t liUsedVehicle;

	}
	VehicleManagerOutputInterface::GetFineTrafficCrashedEventQueue(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1737
		Vector3 lTrafficPos;

		GetTrafficVehicle(/* parameters */);
		IsTrafficVehicleCrashed(/* parameters */);
		GetTrafficVehicle(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:1743
		EntityId lCrasherEntityId;

		// BrnPhysicalTrafficManager.cpp:1745
		VolumeInstanceId lTrafficVolume;

		// BrnPhysicalTrafficManager.cpp:1748
		TrafficCrashedEvent lEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::AddEvent(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1556
void BrnPhysics::Vehicle::PhysicalTrafficManager::DoTractionLineTestsForSimpleTraffic(IOBufferStack *  lpInputBufferStack, const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1561
		int32_t liSimpleVehicle;

		// BrnPhysicalTrafficManager.cpp:1564
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

	}
	VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1573
		PhysicalTrafficVehicle * lpTrafficVehicle;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsSimple(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1647
		PhysicalTrafficVehicle * lpTrafficVehicle;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsSimple(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:1578
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpPhysics;

		// BrnPhysicalTrafficManager.cpp:1581
		Vector3 lAboveGroundTest_LineStart;

		// BrnPhysicalTrafficManager.cpp:1582
		Vector4 lAboveGroundTest_Normal;

		// BrnPhysicalTrafficManager.cpp:1583
		Vector3 lAboveGroundTest_LineEnd;

		// BrnPhysicalTrafficManager.cpp:1584
		VecFloat lvfAboveGroundTest_MinLineParams;

		// BrnPhysicalTrafficManager.cpp:1585
		VecFloat lvfAboveGroundTest_SurfaceTags;

		// BrnPhysicalTrafficManager.cpp:1586
		bool lbAboveGroundTest_Intersection;

		// BrnPhysicalTrafficManager.cpp:1592
		const Triangle4 * lpCachedTriangles;

		// BrnPhysicalTrafficManager.cpp:1593
		int32_t liNumCachedTri4s;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		PhysicalTrafficVehicle::GetPhysics(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1614
			Vector3 lIntersectionPos;

			// BrnPhysicalTrafficManager.cpp:1615
			Vector3 lTractionLine;

			// BrnPhysicalTrafficManager.cpp:1616
			Vector3 lRoadNormal;

			// BrnPhysicalTrafficManager.cpp:1617
			VectorIntrinsicUnion lSurfaceTagsIntrinsic;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::GetVector3_Zero(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
	}
	{
		// BrnPhysicalTrafficManager.cpp:1652
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpPhysics;

		// BrnPhysicalTrafficManager.cpp:1653
		const AboveGroundTestResult * lpAboveGroundResult;

		// BrnPhysicalTrafficManager.cpp:1654
		uint8_t lu8Wheel;

		// BrnPhysicalTrafficManager.cpp:1657
		Vector3 lPlaneNormal;

		// BrnPhysicalTrafficManager.cpp:1658
		Vector3 lPointOnPlane;

		// BrnPhysicalTrafficManager.cpp:1659
		float32_t lfPlaneDist;

		PhysicalTrafficVehicle::GetPhysics(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		SimpleVehiclePhysics::GetAboveGroundTestResult(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1674
			Vector3 lLineStart;

			// BrnPhysicalTrafficManager.cpp:1675
			Vector3 lLineEnd;

			// BrnPhysicalTrafficManager.cpp:1676
			Vector3 lLineDir;

			// BrnPhysicalTrafficManager.cpp:1677
			VecFloat lvfLineLength;

			// BrnPhysicalTrafficManager.cpp:1678
			VecFloat lvfLinePlaneDist;

			// BrnPhysicalTrafficManager.cpp:1679
			Vector3 lRoadContactPoint;

			// BrnPhysicalTrafficManager.cpp:1680
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheel;

			rw::math::vpu::GetVector3_Zero(/* parameters */);
			rw::math::vpu::GetVector3_Zero(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator<(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
	}
}

// BrnPhysicalTrafficManager.cpp:1487
void BrnPhysics::Vehicle::PhysicalTrafficManager::ReadTrafficTractionLineTestResults(const SimpleDataStreamResultIterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1491
		int8_t liTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1492
		uint8_t lu8Wheel;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1499
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1503
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:1505
		const CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamResult * lpResult;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
		CgsMemory::SimpleDataStreamResultIterator::GetCurrent(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnPhysicalTrafficManager.cpp:1516
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheel;

		}
		CgsMemory::SimpleDataStreamResultIterator::GetNext(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1092
void BrnPhysics::Vehicle::PhysicalTrafficManager::CreateTrafficVehicle(const const CreatePhysicalTrafficEvent &  lCreateTrafficEvent, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *  lpDoNotRecycleBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1115
		int32_t liFreeVehicleIndex;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:1104
		int32_t liTrafficVehicle;

		CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	}
	CgsContainers::BitArray<20u>::SetBit(/* parameters */);
	CgsContainers::BitArray<20u>::SetBit(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1109
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:933
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessCreateArticulatedTrafficEvents(const VehicleInputInterface::CreateArticulatedTrafficEventQueue *  lpCreateArticulatedTrafficQueue, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:941
		int32_t liEvent;

		// BrnPhysicalTrafficManager.cpp:943
		PhysicalTrafficManager::TotalPhysicalTrafficBitArray lDoNotRecycleBitArray;

		// BrnPhysicalTrafficManager.cpp:944
		CreatePhysicalTrafficEvent lCreateTrafficEvent;

	}
	{
		// BrnPhysicalTrafficManager.cpp:954
		CreatePhysicalTrafficEvent lCreateCabEvent;

		// BrnPhysicalTrafficManager.cpp:955
		CreatePhysicalTrafficEvent lCreateTrailerEvent;

		// BrnPhysicalTrafficManager.cpp:958
		int32_t liCab;

		// BrnPhysicalTrafficManager.cpp:959
		int32_t liTrailer;

		// BrnPhysicalTrafficManager.cpp:962
		const const CreateArticulatedTrafficEvent & lCreateArticulatedEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetEvent(/* parameters */);
		CreateArticulatedTrafficEvent::GetCreateCabEvent(/* parameters */);
		CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
		CreateArticulatedTrafficEvent::GetCreateTrailerEvent(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsContainers::BitArray<20u>::SetBit(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1006
			PhysicalTrafficVehicle * lpCab;

			// BrnPhysicalTrafficManager.cpp:1007
			PhysicalTrafficVehicle * lpTrailer;

			// BrnPhysicalTrafficManager.cpp:1048
			int32_t liJointIndex;

			CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		}
		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		GetTrafficVehicle(/* parameters */);
		GetTrafficVehicle(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1015
			Vector3 lCabArticulationPoint;

			// BrnPhysicalTrafficManager.cpp:1016
			Vector3 lTrailerArticulationPoint;

			// BrnPhysicalTrafficManager.cpp:1017
			Vector3 lSeperationVectorWorld;

			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			ExternallySimulatedBody::Translate(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
		}
		ExternallySimulatedBody::Translate(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		GetTrafficRigidBodyId(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		GetTrafficRigidBodyId(/* parameters */);
		CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		PhysicalTrafficVehicle::SetArticulatedJointIndex(/* parameters */);
		PhysicalTrafficVehicle::SetArticulatedJointIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:843
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessCreateNonArticulatedTraffic(const VehicleInputInterface::CreateTrafficEventQueue *  lpCreateTrafficEvents, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:851
		int32_t liEvent;

		// BrnPhysicalTrafficManager.cpp:853
		PhysicalTrafficManager::TotalPhysicalTrafficBitArray lDoNotRecycleBitArray;

		// BrnPhysicalTrafficManager.cpp:854
		CreatePhysicalTrafficEvent lCreateTrafficEvent;

	}
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:863
		int32_t liTestIndex;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetEvent(/* parameters */);
		operator=(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
		CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetEvent(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
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
	{
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
}

// BrnPhysicalTrafficManager.cpp:789
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessCreateEvents(const VehicleInputInterface *  lpInputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficManager.cpp:277
void BrnPhysics::Vehicle::PhysicalTrafficManager::UpdateTriangleCache(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:284
		InputBuffer_Update::InSmSceneUpdateInterface * lpSceneUpdateInterface;

		// BrnPhysicalTrafficManager.cpp:286
		int32_t liUsedVehicle;

	}
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:293
		const PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:295
		VecFloat lvfRadius;

		GetTrafficVehicle(/* parameters */);
		SimpleVehiclePhysics::GetInnerCacheSphereRadius(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::UpdateCachedObjectPosition(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition::SetRadius(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::AddEvent(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:3984
void BrnPhysics::Vehicle::PhysicalTrafficManager::AddArticulatedJointContacts(PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3988
		int32_t liTraffic;

	}
	{
		// BrnPhysicalTrafficManager.cpp:3994
		PhysicalTrafficVehicle * lpTrafficVehicle;

		PhysicalTrafficVehicle::HasNonBrokenJoint(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:4002
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:4003
		int32_t liTrailerIndex;

		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:4014
			PhysicalTrafficVehicle * lpCab;

			// BrnPhysicalTrafficManager.cpp:4015
			PhysicalTrafficVehicle * lpTrailer;

			PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
			PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
			PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
			{
				// BrnPhysicalTrafficManager.cpp:4025
				PotentialContact lContact;

				// BrnPhysicalTrafficManager.cpp:4026
				Matrix44Affine lCabTransform;

				// BrnPhysicalTrafficManager.cpp:4027
				Vector3 lPointOnBWorldSpace;

				// BrnPhysicalTrafficManager.cpp:4028
				Vector3 lPointOnBLocalSpace;

				// BrnPhysicalTrafficManager.cpp:4029
				Matrix44Affine lTrailerInvTransform;

				ExternallySimulatedBody::GetTransform(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				PhysicalTrafficVehicle::GetArticulationPointLocalSpace(/* parameters */);
				PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				SimpleVehiclePhysics::GetInverseTransform(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
				GetPhysicsEntityId(/* parameters */);
				rw::math::vpu::TransformPoint(/* parameters */);
				CgsSceneManager::EntityId::Set(/* parameters */);
				CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
				GetPhysicsEntityId(/* parameters */);
				CgsSceneManager::EntityId::Set(/* parameters */);
				CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
				PhysicalTrafficVehicle::IsSimple(/* parameters */);
				PhysicalTrafficVehicle::IsSimple(/* parameters */);
				PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
			}
		}
	}
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::AddEventSafe(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:3824
void BrnPhysics::Vehicle::PhysicalTrafficManager::SendCreateRemoveTrafficEvents(VehicleOutputRequestInterface *  lpOutputRequestInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:3829
		int32_t liRemovedTraffic;

		// BrnPhysicalTrafficManager.cpp:3830
		int32_t liAddedTraffic;

		// BrnPhysicalTrafficManager.cpp:3831
		int32_t liMadeSimpleTraffic;

	}
	{
		// BrnPhysicalTrafficManager.cpp:3839
		RigidBodyId lRemovedBodyId;

		// BrnPhysicalTrafficManager.cpp:3840
		EntityId lPropColEntityId;

		// BrnPhysicalTrafficManager.cpp:3841
		RigidBodyId lPropColBodyId;

		GetTrafficRigidBodyId(/* parameters */);
		VehicleOutputRequestInterface::RemoveRigidBody(/* parameters */);
		CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
		CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
		PhysicalTrafficVehicle::IsSimple(/* parameters */);
		Deformation::DeformationInputInterface::RemoveDeformationModel(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:3878
		RigidBodyId lRemovedBodyId;

		GetTrafficRigidBodyId(/* parameters */);
		Deformation::DeformationInputInterface::RemoveDeformationModel(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:3893
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:3894
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpPhysics;

		// BrnPhysicalTrafficManager.cpp:3895
		RigidBodyId lTrafficRigidBodyId;

		// BrnPhysicalTrafficManager.cpp:3897
		EntityId lPropColEntityId;

		// BrnPhysicalTrafficManager.cpp:3898
		RigidBodyId lPropColBodyId;

		// BrnPhysicalTrafficManager.cpp:3900
		NewRigidBody lNewRigidBody;

		// BrnPhysicalTrafficManager.cpp:3901
		EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::InAddRigidBody lNewBodyEvent;

		GetTrafficRigidBodyId(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		CgsPhysics::RigidBodyId::SetUserIDB(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		NonConstructedClassContainer<CgsPhysics::NewRigidBody>::operator=(/* parameters */);
		NewRigidBody(/* parameters */);
		CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		VehicleOutputRequestInterface::CreateNewRigidBody(/* parameters */);
		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:3945
			BrnPhysics::Vehicle::TrafficPhysics * lpFullTrafficPhysics;

			PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
			GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
			Deformation::DeformationInputInterface::AddDeformationModel(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			operator=(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		}
	}
	NewRigidBody(/* parameters */);
	PhysicalTrafficVehicle::GetPhysics(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:3920
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetAll(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:2553
void BrnPhysics::Vehicle::PhysicalTrafficManager::ResolveArticulatedJoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2555
		int32_t liTraffic;

	}
	{
		// BrnPhysicalTrafficManager.cpp:2561
		PhysicalTrafficVehicle * lpTrafficVehicle;

		PhysicalTrafficVehicle::HasNonBrokenJoint(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:2572
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:2573
		int32_t liTrailerIndex;

		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:2584
			PhysicalTrafficVehicle * lpCab;

			// BrnPhysicalTrafficManager.cpp:2585
			PhysicalTrafficVehicle * lpTrailer;

			// BrnPhysicalTrafficManager.cpp:2587
			Vector3 lCabArticulationPoint;

			// BrnPhysicalTrafficManager.cpp:2588
			Vector3 lTrailerArticulationPoint;

			// BrnPhysicalTrafficManager.cpp:2589
			Vector3 lSeperationVectorWorld;

			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
			PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
			PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			ExternallySimulatedBody::Translate(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			ExternallySimulatedBody::Translate(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
		}
	}
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:2570
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetPhysicsEntityId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:2596
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetPhysicsEntityId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

// BrnPhysicalTrafficManager.cpp:2516
void BrnPhysics::Vehicle::PhysicalTrafficManager::UpdateTrafficPhysicsPostSimulation(const OutputBuffer *  lpSimModuleOutputBuffer, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2518
		int32_t liTrafficCar;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::UpdatePostSimulation(/* parameters */);
	GetTrafficDriver(/* parameters */);
	VehicleDriver::ClearSnappedThisFrame(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:1243
void BrnPhysics::Vehicle::PhysicalTrafficManager::DoTractionLineTestsForFullyPhysicalTraffic(IOBufferStack *  lpInputBufferStack, const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1248
		TrafficTractionLineBuffer * lpTractionLineBuffer;

		// BrnPhysicalTrafficManager.cpp:1254
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

		// BrnPhysicalTrafficManager.cpp:1256
		int8_t liTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1257
		uint8_t lu8Wheel;

	}
	CreateIOBuffer<BrnPhysics::Vehicle::TrafficTractionLineBuffer>(/* parameters */);
	VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:1265
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1274
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1279
			int32_t liLineIndex;

		}
		{
			// BrnPhysicalTrafficManager.cpp:1289
			int32_t liLineIndex;

		}
	}
	{
		// BrnPhysicalTrafficManager.cpp:1305
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1314
		const Triangle4 * lpCachedTriangles;

		// BrnPhysicalTrafficManager.cpp:1315
		int32_t liNumCachedTri4s;

		// BrnPhysicalTrafficManager.cpp:1318
		int32_t liLinesStartIndex;

		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:1341
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1350
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:1352
		int32_t liLineIndex;

		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
		TractionLineBuffer<100>::GetIntersectPoint(/* parameters */);
		TractionLineBuffer<100>::GetIntersectNormal(/* parameters */);
		TractionLineBuffer<100>::GetSurfaceTag(/* parameters */);
		TractionLineBuffer<100>::GetIntersectPoint(/* parameters */);
		TractionLineBuffer<100>::GetIntersectNormal(/* parameters */);
		TractionLineBuffer<100>::GetSurfaceTag(/* parameters */);
	}
	DestroyIOBuffer<BrnPhysics::Vehicle::TrafficTractionLineBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPhysicalTrafficManager.cpp:1401
void BrnPhysics::Vehicle::PhysicalTrafficManager::AddTrafficTractionLineTests(CollisionGenerator *  lpTractionContactGen, CgsMemory::SimpleDataStreamProducer *  lpStreamProducer, const VehicleInputInterface::InTriangleCacheInterface *  lpCacheInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:1409
		int32_t liNumTestsSubmitted;

		// BrnPhysicalTrafficManager.cpp:1410
		int8_t liTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1411
		uint8_t lu8Wheel;

		// BrnPhysicalTrafficManager.cpp:1413
		void * lpCommandAddress;

		// BrnPhysicalTrafficManager.cpp:1414
		CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamCommand * lpCommand;

	}
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnPhysicalTrafficManager.cpp:1422
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:1427
		int32_t liCacheSlotIndex;

		// BrnPhysicalTrafficManager.cpp:1430
		const Triangle4 * lpCachedTriangles;

		// BrnPhysicalTrafficManager.cpp:1431
		int32_t liNumCachedTri4s;

		// BrnPhysicalTrafficManager.cpp:1434
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:1443
		Vector3 lTractionLineStart;

		// BrnPhysicalTrafficManager.cpp:1444
		Vector3 lTractionLineEnd;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
		CgsMemory::SimpleDataStreamProducer::AllocateCommand(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
		{
			// BrnPhysicalTrafficManager.cpp:1449
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheel;

		}
	}
}

// BrnPhysicalTrafficManager.cpp:2072
void BrnPhysics::Vehicle::PhysicalTrafficManager::SetTrafficVehicleCrashing(EntityId  lTrafficEntityID, EntityId  lCrashedIntoEntityID, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:2080
		uint16_t lu16TrafficIndex;

		// BrnPhysicalTrafficManager.cpp:2089
		EntityId lRemappedTrafficEntityID;

		// BrnPhysicalTrafficManager.cpp:2091
		EntityId lRemappedCrashedIntoEntityID;

		// BrnPhysicalTrafficManager.cpp:2104
		VolumeInstanceId lTrafficVolumeInstanceID;

		// BrnPhysicalTrafficManager.cpp:2108
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:2133
		const PhysicalTrafficVehicle * lpCrashedTrafficVehicle;

	}
	IsTrafficVehicleCrashed(/* parameters */);
	GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
	GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::SetPhysicalTrafficState(/* parameters */);
	PhysicalTrafficVehicle::GetPhysics(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	VehicleManagerOutputInterface::AddCrashedTrafficEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::AddEvent(/* parameters */);
	{
	}
	GetTrafficVehicle(/* parameters */);
	{
		// BrnPhysicalTrafficManager.cpp:2138
		VehicleCrashedEvent lVehicleCrashedEvent;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		PhysicalTrafficVehicle::GetCgsID(/* parameters */);
	}
	PhysicalTrafficVehicle::HasNonBrokenJoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:2155
		int32_t liJointIndex;

		// BrnPhysicalTrafficManager.cpp:2158
		int32_t liOtherHalfIndex;

		PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
		GetPhysicsEntityId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:2118
		const PhysicalTrafficVehicle * lpCrashedIntoTraffic;

		GetTrafficVehicle(/* parameters */);
		PhysicalTrafficVehicle::HasBeenChecked(/* parameters */);
		PhysicalTrafficVehicle::SetCheckOwner(/* parameters */);
	}
	{
		// BrnPhysicalTrafficManager.cpp:2101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
	PhysicalTrafficVehicle::GetArticulatedVehicleType(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:4099
void BrnPhysics::Vehicle::PhysicalTrafficManager::TestForNearMissFreakOut(PotentialContact  lContact, EntityId  lTrafficEntityID, EntityId  lCrashedIntoEntityID, const BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:4110
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnPhysicalTrafficManager.cpp:4121
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		// BrnPhysicalTrafficManager.cpp:4131
		Matrix44Affine lTrafficTransform;

		// BrnPhysicalTrafficManager.cpp:4132
		Matrix44Affine lRaceCarTransform;

		// BrnPhysicalTrafficManager.cpp:4133
		Vector3 lTrafficToContact;

		// BrnPhysicalTrafficManager.cpp:4143
		VecFloat lvfContactZOnTraffic;

		// BrnPhysicalTrafficManager.cpp:4167
		float32_t lfDirection;

		// BrnPhysicalTrafficManager.cpp:4168
		float32_t lfClosingSpeedSq;

	}
	rw::math::vpu::operator<(/* parameters */);
	GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::IsSimple(/* parameters */);
	PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::fpu::Sgn<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:452
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessSetTrafficCrashingEvents(const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicalTrafficManager.cpp:461
		int32_t liEvent;

	}
	{
		// BrnPhysicalTrafficManager.cpp:464
		const SetTrafficCrashingEvent * lpEvent;

		// BrnPhysicalTrafficManager.cpp:466
		EntityId lPhysicsId;

		// BrnPhysicalTrafficManager.cpp:469
		bool lbIsTrafficPhysical;

		{
			// BrnPhysicalTrafficManager.cpp:476
			EntityId lInvalidId;

		}
	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetEvent(/* parameters */);
	GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
}

// BrnPhysicalTrafficManager.cpp:411
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessTrafficEvents(const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicalTrafficManager.cpp:3688
void BrnPhysics::Vehicle::PhysicalTrafficManager::ProcessTrafficMaintenanceEvents(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpOutputRequestInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, BrnPhysics::Vehicle::RaceCarPhysics *  lpaRaceCarVehicles, VehicleDriver *  lpaRaceCarDrivers, BitArray<8u> *  lpUsedRaceCars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	AllocateInternalBuffers(/* parameters */);
	BridgeArticulatedJointRequestsToSim(/* parameters */);
	DeallocateInternalBuffers(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

