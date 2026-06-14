// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleManagerContactGeneration.cpp:46
		const int32_t liMaxNumPrimPairTests = 300;

		// BrnVehicleManagerContactGeneration.cpp:59
		const VecFloat KVF_BOX_SIZE_MODIFIER;

	}

}

// BrnVehicleManagerContactGeneration.cpp:1456
void BrnPhysics::Vehicle::VehicleManager::DoTrafficWorldContactOrdering(PotentialContactInterface *  lpPotentialContactInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:1460
		PotentialContactInterface::CustomPotentialContactQueue * lpTrafficWorldContacts;

		// BrnVehicleManagerContactGeneration.cpp:1466
		int32_t liEvent;

		// BrnVehicleManagerContactGeneration.cpp:1483
		PotentialContactInterface::CustomPotentialContactQueue * lpSimpleTrafficWorldContacts;

	}
	{
		// BrnVehicleManagerContactGeneration.cpp:1472
		const PotentialContact & lContact;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::PotentialContact::SwapEntityOrder(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:1490
		const PotentialContact & lContact;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::PotentialContact::SwapEntityOrder(/* parameters */);
	}
}

// BrnVehicleManagerContactGeneration.cpp:747
void BrnPhysics::Vehicle::VehicleManager::FreeAllocations(IOBufferStack *  lpInputStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<CgsSceneManager::CgsCollision::CollisionGenerator>(/* parameters */);
	DestroyIOBuffer<BrnPhysics::ContactGenList>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManagerContactGeneration.cpp:1283
void BrnPhysics::Vehicle::VehicleManager::AddContactResultsToQueue(CollisionGenerator *  lpContactGenerator, BrnPhysics::ContactGenList *  lpContactGenList, PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:1290
		int32_t liNumTests;

		// BrnVehicleManagerContactGeneration.cpp:1291
		int32_t liTestLoop;

		// BrnVehicleManagerContactGeneration.cpp:1292
		uint32_t liQueueID;

	}
	{
		// BrnVehicleManagerContactGeneration.cpp:1295
		CollisionResultList lResultList;

		// BrnVehicleManagerContactGeneration.cpp:1298
		uint32_t luUseNormal;

		CgsSceneManager::CgsCollision::BaseCollisionGenerator::GetResultList(/* parameters */);
		{
			// BrnVehicleManagerContactGeneration.cpp:1300
			uint16_t liResult;

		}
		{
			// BrnVehicleManagerContactGeneration.cpp:1302
			const const PrimitiveTestResult & lResult;

			// BrnVehicleManagerContactGeneration.cpp:1303
			PotentialContact lContact;

			// BrnVehicleManagerContactGeneration.cpp:1304
			const const BrnPhysics::ContactGenList::ContactGenEntry & lTestEntry;

			CgsSceneManager::CgsCollision::CollisionResultList::GetPrimitiveTestResult(/* parameters */);
			ContactGenList::GetEntry(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector3::operator=(/* parameters */);
			rw::math::vpu::Vector3::operator=(/* parameters */);
			PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
			CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
			CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::AddEventSafe(/* parameters */);
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:1316
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManagerContactGeneration.cpp:1378
void BrnPhysics::Vehicle::VehicleManager::DoRaceCarWorldContactValidation(PotentialContactInterface *  lpPotentialContactInterface, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, float32_t  lfTimeStep, DeformationManager *  lpDefMan) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:1387
		const PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarWorldContacts;

		// BrnVehicleManagerContactGeneration.cpp:1390
		int32_t liEvent;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:1397
		PotentialContact lContact;

		// BrnVehicleManagerContactGeneration.cpp:1407
		int32_t liRaceCar;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::PotentialContact::SwapEntityOrder(/* parameters */);
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		{
			// BrnVehicleManagerContactGeneration.cpp:1409
			CgsDev::StrStream lStrStream;

		}
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManagerContactGeneration.cpp:776
void BrnPhysics::Vehicle::VehicleManager::DoCarCarContactGeneration(EntityId  lCarIdA, EntityId  lCarIdB, EntityId  lCarPhysicsIdA, EntityId  lCarPhysicsIdB, DeformationManager *  lpDefMan, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpSphereSphereStream, uint16_t  lu16QueueID, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:778
		const Sphere * lpSpheresA;

		// BrnVehicleManagerContactGeneration.cpp:779
		const Sphere * lpSpheresB;

		// BrnVehicleManagerContactGeneration.cpp:780
		int32_t liNumSpheresA;

		// BrnVehicleManagerContactGeneration.cpp:781
		int32_t liNumSpheresB;

		// BrnVehicleManagerContactGeneration.cpp:782
		EntityId lCarId;

		// BrnVehicleManagerContactGeneration.cpp:783
		float32_t lfPadding;

		// BrnVehicleManagerContactGeneration.cpp:784
		Vector3 lVelocityCarA;

		// BrnVehicleManagerContactGeneration.cpp:785
		Vector3 lVelocityCarB;

		// BrnVehicleManagerContactGeneration.cpp:786
		bool lbAIsSimpleTraffic;

		// BrnVehicleManagerContactGeneration.cpp:787
		bool lbBIsSimpleTraffic;

		// BrnVehicleManagerContactGeneration.cpp:788
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpSimplePhysicsA;

		// BrnVehicleManagerContactGeneration.cpp:789
		BrnPhysics::Vehicle::SimpleVehiclePhysics * lpSimplePhysicsB;

	}
	GetVehiclePhysics(/* parameters */);
	GetVehiclePhysics(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:880
		SphereList lSphereListA;

		// BrnVehicleManagerContactGeneration.cpp:884
		SphereList lSphereListB;

		Deformation::DeformationManager::GetSpheresForCar(/* parameters */);
		Deformation::DeformationManager::GetSpheresForCar(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Max<float>(/* parameters */);
		ContactGenList::AddEntry(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:832
		Box lSimpleBoxA;

		// BrnVehicleManagerContactGeneration.cpp:833
		Box lSimpleBoxB;

		{
			// BrnVehicleManagerContactGeneration.cpp:854
			uint16_t lu16TrafficAIndex;

			// BrnVehicleManagerContactGeneration.cpp:855
			uint16_t lu16TrafficBIndex;

		}
	}
	PhysicalTrafficManager::IsTrafficVehicleSimple(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::IsSimple(/* parameters */);
	PhysicalTrafficManager::IsTrafficVehicleSimple(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::IsSimple(/* parameters */);
	{
	}
	{
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:857
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalTrafficManager::GetVehiclePhysics(/* parameters */);
	PhysicalTrafficManager::GetVehiclePhysics(/* parameters */);
}

// BrnVehicleManagerContactGeneration.cpp:462
void BrnPhysics::Vehicle::VehicleManager::EndVehicleContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, const InputBuffer::InOverlapPairsQueue *  lpOverlapPairs, float32_t  lfTimeStep, DeformationManager *  lpDefMan, IOBufferStack *  lpInputStack, LinearMalloc *  lpMalloc, PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:482
		int32_t liHiddenRaceCarIndex;

		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:484
		bool lbOverlappingSomething;

		// BrnVehicleManagerContactGeneration.cpp:527
		uint32_t luHiddenFramesRemaining;

		{
			// BrnVehicleManagerContactGeneration.cpp:487
			int32_t liOverlappedIndex;

			CgsContainers::BitArray<64u>::IsBitSet(/* parameters */);
			{
				// BrnVehicleManagerContactGeneration.cpp:497
				BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar1;

				// BrnVehicleManagerContactGeneration.cpp:498
				BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar2;

				// BrnVehicleManagerContactGeneration.cpp:500
				Vector3 lHalfExtents1;

				// BrnVehicleManagerContactGeneration.cpp:501
				Vector3 lHalfExtents2;

				// BrnVehicleManagerContactGeneration.cpp:503
				Matrix44Affine lTransform1;

				// BrnVehicleManagerContactGeneration.cpp:504
				Matrix44Affine lTransform2;

				// BrnVehicleManagerContactGeneration.cpp:507
				Box lCar1Box;

				// BrnVehicleManagerContactGeneration.cpp:508
				Box lCar2Box;

				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				CgsGeometric::BoxOverlappingTest(/* parameters */);
				rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			}
		}
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManagerContactGeneration.cpp:676
void BrnPhysics::Vehicle::VehicleManager::EndPartContactGeneration(float32_t  lfTimeStep, DeformationManager *  lpDefMan, IOBufferStack *  lpInputStack, PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:682
		int32_t liNumTests;

		// BrnVehicleManagerContactGeneration.cpp:683
		int32_t liTestLoop;

		// BrnVehicleManagerContactGeneration.cpp:684
		int32_t liContactGenTestIndex;

		// BrnVehicleManagerContactGeneration.cpp:685
		uint32_t liQueueID;

	}
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:688
		CollisionResultList lResultList;

		// BrnVehicleManagerContactGeneration.cpp:692
		uint32_t luUseNormal;

		CgsSceneManager::CgsCollision::BaseCollisionGenerator::GetResultList(/* parameters */);
		{
			// BrnVehicleManagerContactGeneration.cpp:695
			uint16_t liResult;

			{
				// BrnVehicleManagerContactGeneration.cpp:697
				const const PrimitiveTestResult & lResult;

				// BrnVehicleManagerContactGeneration.cpp:698
				PotentialContact lContact;

				// BrnVehicleManagerContactGeneration.cpp:699
				const const BrnPhysics::ContactGenList::ContactGenEntry & lTestEntry;

				ContactGenList::GetEntry(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Vector3::operator=(/* parameters */);
				rw::math::vpu::Vector3::operator=(/* parameters */);
				PhysicsModuleIO::PotentialContactInterface::AddEvent(/* parameters */);
				CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::AddEventSafe(/* parameters */);
			}
			CgsSceneManager::CgsCollision::CollisionResultList::GetPrimitiveTestResult(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:694
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManagerContactGeneration.cpp:932
void BrnPhysics::Vehicle::VehicleManager::DoRaceCarWorldContactGeneration(int32_t  liRaceCarIndex, DeformationManager *  lpDefMan, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpSphereTriangleStream, CgsMemory::SimpleDataStreamProducer *  lpSweptSphereTriangleStream, uint32_t  luResultListTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:934
		int32_t liNumSpheres;

		// BrnVehicleManagerContactGeneration.cpp:935
		EntityId lCarId;

		// BrnVehicleManagerContactGeneration.cpp:940
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManagerContactGeneration.cpp:941
		int32_t liNumCached4TriangleStructs;

		// BrnVehicleManagerContactGeneration.cpp:1000
		EntityId lWorldId;

	}
	CgsSceneManager::EntityId::Set(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	Deformation::DeformationManager::IsUsingSweptSpheres(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:947
		const Sphere * lpSpheres;

		// BrnVehicleManagerContactGeneration.cpp:955
		SphereList lSphereList;

		// BrnVehicleManagerContactGeneration.cpp:959
		TriangleList lTriList;

		Deformation::DeformationManager::GetSpheresForCar(/* parameters */);
		Deformation::DeformableObject::GetWorldSpaceSpheres(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	}
	ContactGenList::AddEntry(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	SimpleVehiclePhysics::GetSpeed(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:974
		const SweptSphere * lpSpheres;

		// BrnVehicleManagerContactGeneration.cpp:982
		SweptSphereList lSphereList;

		// BrnVehicleManagerContactGeneration.cpp:986
		TriangleList lTriList;

		Deformation::DeformationManager::GetSweptSpheresForCar(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	}
	{
	}
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnVehicleManagerContactGeneration.cpp:1023
void BrnPhysics::Vehicle::VehicleManager::DoRaceCarWheelWorldContactGeneration(int32_t  liRaceCarIndex, DeformationManager *  lpDefMan, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:1025
		int32_t liNumSpheres;

		// BrnVehicleManagerContactGeneration.cpp:1026
		EntityId lCarId;

		// BrnVehicleManagerContactGeneration.cpp:1031
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManagerContactGeneration.cpp:1032
		int32_t liNumCached4TriangleStructures;

		// BrnVehicleManagerContactGeneration.cpp:1053
		const SweptSphere * lpSpheres;

		// BrnVehicleManagerContactGeneration.cpp:1063
		SweptSphereList lSphereList;

		// BrnVehicleManagerContactGeneration.cpp:1067
		TriangleList lTriList;

		// BrnVehicleManagerContactGeneration.cpp:1081
		EntityId lWorldId;

	}
	CgsSceneManager::EntityId::Set(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:1041
		BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelIndex;

		operator++(/* parameters */);
		{
			// BrnVehicleManagerContactGeneration.cpp:1043
			SweptSphere * lpSphere;

			// BrnVehicleManagerContactGeneration.cpp:1044
			Vector3 lPosition;

			// BrnVehicleManagerContactGeneration.cpp:1045
			Vector3 lPointVel;

			// BrnVehicleManagerContactGeneration.cpp:1047
			Vector3 lDirection;

			// BrnVehicleManagerContactGeneration.cpp:1048
			VecFloat lvfRadius;

			// BrnVehicleManagerContactGeneration.cpp:1049
			VecFloat lvfLength;

			SimpleVehiclePhysics::GetWheelSphere(/* parameters */);
			SimpleVehiclePhysics::GetWheel(/* parameters */);
			Wheel::GetPosition(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::TransformPoint(/* parameters */);
			ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
		}
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		CgsGeometric::SweptSphere::Set(/* parameters */);
		Wheel::GetRadius(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
	CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	ContactGenList::AddEntry(/* parameters */);
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

// BrnVehicleManagerContactGeneration.cpp:1106
void BrnPhysics::Vehicle::VehicleManager::DoTrafficCarWorldContactGeneration(int32_t  liTrafficCarIndex, DeformationManager *  lpDefMan, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpSphereTriangleStream, uint32_t  luResultListTag, LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:1111
		const float32_t kfBoxTrafficPadding;

		// BrnVehicleManagerContactGeneration.cpp:1114
		int32_t liNumSpheres;

		// BrnVehicleManagerContactGeneration.cpp:1115
		EntityId lCarId;

		// BrnVehicleManagerContactGeneration.cpp:1116
		PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnVehicleManagerContactGeneration.cpp:1125
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManagerContactGeneration.cpp:1126
		int32_t liNumCached4TriangleStructures;

		// BrnVehicleManagerContactGeneration.cpp:1268
		EntityId lWorldId;

	}
	PhysicalTrafficManager::GetPhysicsEntityId(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	PhysicalTrafficVehicle::IsSimple(/* parameters */);
	PhysicalTrafficVehicle::SetUsingBoxWithWorld(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:1167
		Box lDeformedBox;

		// BrnVehicleManagerContactGeneration.cpp:1168
		TriangleList lTriList;

		// BrnVehicleManagerContactGeneration.cpp:1169
		PrimitivePairListBuilder lPrimPairList;

		Deformation::DeformationManager::GetDeformedBBox(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
		PhysicalTrafficVehicle::SetUsingBoxWithWorld(/* parameters */);
	}
	PhysicalTrafficManager::GetGlobalTrafficEntityId(/* parameters */);
	ContactGenList::AddEntry(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	Deformation::DeformationManager::IsUsingSweptSpheres(/* parameters */);
	Deformation::DeformableObject::IsUsingSweptSpheres(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:1200
		const Sphere * lpSpheres;

		// BrnVehicleManagerContactGeneration.cpp:1208
		SphereList lSphereList;

		// BrnVehicleManagerContactGeneration.cpp:1212
		TriangleList lTriList;

		Deformation::DeformationManager::GetSpheresForCar(/* parameters */);
		Deformation::DeformableObject::GetWorldSpaceSpheres(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:1137
		Box lSimpleTrafficBox;

		// BrnVehicleManagerContactGeneration.cpp:1138
		TriangleList lTriList;

		// BrnVehicleManagerContactGeneration.cpp:1139
		PrimitivePairListBuilder lPrimPairList;

		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	SimpleVehiclePhysics::GetSpeed(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:1226
		const SweptSphere * lpSpheres;

		// BrnVehicleManagerContactGeneration.cpp:1234
		SweptSphereList lSphereList;

		// BrnVehicleManagerContactGeneration.cpp:1238
		TriangleList lTriList;

		Deformation::DeformationManager::GetSweptSpheresForCar(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManagerContactGeneration.cpp:68
void BrnPhysics::Vehicle::VehicleManager::StartVehicleContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, const InputBuffer::InOverlapPairsQueue *  lpOverlapPairs, float32_t  lfTimeStep, DeformationManager *  lpDefMan, IOBufferStack *  lpInputStack, LinearMalloc *  lpMalloc, PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManagerContactGeneration.cpp:98
		int32_t liPairLoop;

		// BrnVehicleManagerContactGeneration.cpp:380
		int32_t liRaceCar;

		// BrnVehicleManagerContactGeneration.cpp:409
		const PhysicalTrafficManager::TotalPhysicalTrafficBitArray * lpUsedTrafficVehicles;

	}
	CreateIOBuffer<BrnPhysics::ContactGenList>(/* parameters */);
	ContactGenList::Construct(/* parameters */);
	CreateIOBuffer<CgsSceneManager::CgsCollision::CollisionGenerator>(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsSceneManager::CgsCollision::CollisionGenerator::Prepare(/* parameters */);
	CgsContainers::BitArray<64u>::UnSetAll(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:103
		const const OutOverlapPair & lPair;

		// BrnVehicleManagerContactGeneration.cpp:224
		bool lbAIsPart;

		// BrnVehicleManagerContactGeneration.cpp:227
		bool lbBIsPart;

		// BrnVehicleManagerContactGeneration.cpp:230
		bool lbAIsCar;

		// BrnVehicleManagerContactGeneration.cpp:233
		bool lbBIsCar;

		// BrnVehicleManagerContactGeneration.cpp:236
		bool lbAIsWheel;

		// BrnVehicleManagerContactGeneration.cpp:239
		bool lbBIsWheel;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
		{
			// BrnVehicleManagerContactGeneration.cpp:249
			EntityId lPhysicsCarId;

		}
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:390
		EntityId lCarId;

		Deformation::DeformationManager::IsFrozen(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	PhysicalTrafficManager::GetUsedTrafficVehiclesArray(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:412
		int32_t liTrafficCar;

	}
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:110
		VolumeInstanceId lVolumeInstanceIDA;

		// BrnVehicleManagerContactGeneration.cpp:111
		VolumeInstanceId lVolumeInstanceIDB;

		// BrnVehicleManagerContactGeneration.cpp:112
		EntityId lCarAPhysicsId;

		// BrnVehicleManagerContactGeneration.cpp:113
		EntityId lCarBPhysicsId;

		// BrnVehicleManagerContactGeneration.cpp:116
		uint16_t luQueueId;

	}
	CgsSceneManager::EntityId::GetOwner(/* parameters */);
	CgsSceneManager::EntityId::GetOwner(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:188
		EActiveRaceCarIndex leRaceCarA;

		// BrnVehicleManagerContactGeneration.cpp:189
		EActiveRaceCarIndex leRaceCarB;

		IsRaceCarHidden(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:308
		EntityId lPhysicsCarId;

	}
	{
		// BrnVehicleManagerContactGeneration.cpp:293
		EntityId lPhysicsCarId;

	}
	{
		// BrnVehicleManagerContactGeneration.cpp:264
		EntityId lPhysicsCarId;

	}
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	CgsContainers::BitArray<64u>::SetBit(/* parameters */);
	CgsContainers::BitArray<64u>::SetBit(/* parameters */);
	IsRaceCarHidden(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:141
		uint16_t lu16TrafficIndexA;

		// BrnVehicleManagerContactGeneration.cpp:142
		uint16_t lu16TrafficIndexB;

		// BrnVehicleManagerContactGeneration.cpp:145
		const PhysicalTrafficVehicle * lpTrafficA;

		// BrnVehicleManagerContactGeneration.cpp:146
		const PhysicalTrafficVehicle * lpTrafficB;

	}
	{
		// BrnVehicleManagerContactGeneration.cpp:365
		EntityId lRaceCarFakeId;

		// BrnVehicleManagerContactGeneration.cpp:366
		EntityId lTrafficFakeId;

		ContactGenList::AddEntry(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:345
		EntityId lTrafficFakeId;

		ContactGenList::AddEntry(/* parameters */);
	}
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManagerContactGeneration.cpp:567
void BrnPhysics::Vehicle::VehicleManager::StartPartContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, float32_t  lfTimeStep, DeformationManager *  lpDefMan, IOBufferStack *  lpInputStack, PotentialContactInterface *  lpPotentialContactsInterface, LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
	{
		// BrnVehicleManagerContactGeneration.cpp:625
		EntityId lRaceCarFakeId;

		// BrnVehicleManagerContactGeneration.cpp:626
		EntityId lBodyPartFakeId;

		ContactGenList::AddEntry(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:603
		EntityId lRaceCarFakeId;

		// BrnVehicleManagerContactGeneration.cpp:604
		EntityId lWheelFakeId;

		ContactGenList::AddEntry(/* parameters */);
	}
	{
		// BrnVehicleManagerContactGeneration.cpp:582
		EntityId lRaceCarFakeId;

		// BrnVehicleManagerContactGeneration.cpp:583
		EntityId lBodyPartFakeId;

		ContactGenList::AddEntry(/* parameters */);
	}
}

