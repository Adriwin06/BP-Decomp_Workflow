// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionStateManager.h:40
		namespace Collision {
			// Declaration
			struct CollisionStateManager {
			protected:
				// BrnCollisionStateManager.h:733
				// Declaration
				void SelectBin<Attrib::Gen::propscrashbinlist, Attrib::Gen::propscrashbin>(const propscrashbinlist &, OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionStateManager.cpp:2418
					using namespace AttribSys::Enums;

				}

				// BrnCollisionStateManager.h:733
				// Declaration
				void SelectBin<Attrib::Gen::crashbinlist, Attrib::Gen::crashbin>(const crashbinlist &, OutputCollision &) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// BrnCollisionStateManager.cpp:2418
					using namespace AttribSys::Enums;

				}

			}

			// BrnCollisionStateManager.cpp:190
			// Declaration
			extern AttribSys::Enums::eOrientation::eOrientation MapPositionToOrientationUsingBox(Vector3, Vector3, Matrix44Affine, Vector3, Vector3, Vector3, Vector3) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:192
				using namespace rw::math::vpu;

				// BrnCollisionStateManager.cpp:193
				using namespace AttribSys::Enums::eOrientation;

			}

			// BrnCollisionStateManager.cpp:318
			// Declaration
			extern bool MapPositionToOrientation(Matrix44Affine, Vector3, Vector3, EntityId, EntityId, const BrnSound::Logic::Collision::CollisionStateManager &, AttribSys::Enums::eOrientation::eOrientation &) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:320
				using namespace AttribSys::Enums::eOrientation;

			}

			// BrnCollisionStateManager.cpp:809
			// Declaration
			extern BrnSound::Logic::Collision::EeMaterialType MapBodyPartMassToMaterial(float32_t) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:811
				using namespace AttribSys::Enums;

			}

			// BrnCollisionStateManager.cpp:3506
			// Declaration
			extern uint32_t MapCameraStateToBinFlags(const CameraState *) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:3508
				using namespace AttribSys::Enums;

				// BrnCollisionStateManager.cpp:3509
				using namespace BrnDirector::Camera;

			}

			// BrnCollisionStateManager.cpp:3542
			// Declaration
			extern uint32_t MapGameModesToBinFlags(const GameModeOutputInterface *) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:3544
				using namespace AttribSys::Enums;

				// BrnCollisionStateManager.cpp:3545
				using namespace BrnGameState::GameStateModuleIO;

			}

			// BrnCollisionStateManager.cpp:3593
			// Declaration
			extern BrnSound::Logic::Collision::EeMaterialType MapEntityIdToMaterial(EntityId, int32_t, const LogicInputBuffer &) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:3595
				using namespace BrnWorld;

			}

			// BrnCollisionStateManager.cpp:3677
			// Declaration
			extern BrnSound::Logic::Collision::EeMaterialType MapBodyPartEnumToMateral(EBodyParts) {
				// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
				// BrnCollisionStateManager.cpp:3679
				using namespace AttribSys::Enums;

			}

			// BrnCollisionStateManager.cpp:565
			extern bool LessThanPriority(const OutputCollision *, const OutputCollision *);

			// BrnCollisionStateManager.cpp:59
			float32_t KF_MIN_TIME_BETWEEN_SIMILAR_COLLISIONS;

			// BrnCollisionStateManager.cpp:60
			VecFloat KF_MINIMUM_DISTANCE_BETWEEN_COLLISIONS;

			// BrnCollisionStateManager.cpp:61
			VecFloat KF_BODYPART_MASS_THRESHOLD;

			// BrnCollisionStateManager.cpp:62
			VecFloat KF_MAX_IMPULSE;

			// BrnCollisionStateManager.cpp:63
			VecFloat KF_CULLAGAINSTPLAYING_IMPULSE;

			// BrnCollisionStateManager.cpp:66
			float32_t KF_HINGING_VELOCITY_MIN_TOLERANCE;

			// BrnCollisionStateManager.cpp:67
			float32_t KF_HINGING_VELOCITY_DELTA_TOLERANCE;

			// BrnCollisionStateManager.cpp:71
			float32_t KF_FASTEST_COLLISION;

			// BrnCollisionStateManager.cpp:72
			float32_t KF_BIGGEST_THING_MASS;

			// BrnCollisionStateManager.cpp:74
			float32_t KF_BIGGEST_COLLISION_IN_SECOND;

			// BrnCollisionStateManager.cpp:77
			extern VecFloat KF_SCRAPE_IDLE_TIME;

			// BrnCollisionStateManager.cpp:79
			int32_t KI_DEBUG_DETACHING;

			// BrnCollisionStateManager.cpp:85
			const VecFloat KF_EARLY_CULL_DISTANCE_SQUARED;

			// BrnCollisionStateManager.cpp:86
			const VecFloat KF_CULLING_DISTANCE_SQUARED;

			// BrnCollisionStateManager.cpp:88
			extern Vector3 KV_DIRECTION_BIAS;

			// BrnCollisionStateManager.cpp:92
			Name[1] K_CollisionSpliceBanks;

			// BrnCollisionStateManager.cpp:100
			int32_t KI_DEBUG_SAMPLE_ID_TO_PLAY_LARGE;

			// BrnCollisionStateManager.cpp:101
			int32_t KI_DEBUG_SAMPLE_ID_TO_PLAY_SMALL;

			// BrnCollisionStateManager.cpp:102
			int32_t KI_DEBUG_PIPELINE_TOPLAY;

			// BrnCollisionStateManager.cpp:103
			int32_t KI_DEBUG_FILTER_MATERIAL;

			// BrnCollisionStateManager.cpp:104
			int32_t KI_DEBUG_FILTER_ACTION;

			// BrnCollisionStateManager.cpp:107
			int32_t KI_DEBUG_PRINT_COLLISION_BINS;

			// BrnCollisionStateManager.cpp:108
			int32_t KI_SPEW_COLLISION_BIN_LOGIC_VERBOSE;

			// BrnCollisionStateManager.cpp:109
			int32_t KI_DEBUG_SPAWN_LOTS_OF_SAMPLES;

			// BrnCollisionStateManager.cpp:110
			int32_t KI_DEBUG_SPEW_ORIENTATION;

			// BrnCollisionStateManager.cpp:111
			int32_t KI_DEBUG_DRAW_ORIENATION_BOX;

			// BrnCollisionStateManager.cpp:112
			int32_t KI_DEBUG_SPEW_PROP_LOOKUP_FAULTS;

			// BrnCollisionStateManager.cpp:113
			int32_t KI_DEBUG_SPEW_ALL_INPUT_COLLISIONS;

			// BrnCollisionStateManager.cpp:115
			int32_t KI_DEBUG_CULL_AGAINST_PLAYING;

			// BrnCollisionStateManager.cpp:119
			int32_t KI_DEBUG_FILTER_NO_COLLISION;

			// BrnCollisionStateManager.cpp:120
			int32_t KI_DEBUG_FILTER_NO_PROPS;

			// BrnCollisionStateManager.cpp:121
			int32_t KI_DEBUG_FILTER_NO_BODY_PARTS;

			// BrnCollisionStateManager.cpp:122
			int32_t KI_DEBUG_FILTER_NO_GLASS;

			// BrnCollisionStateManager.cpp:124
			const BrnSound::Logic::Collision::EeMaterialType[3] KAE_TRAFFIC_CAR_SIZE_TO_MATERIAL_TABLE;

		}

	}

}

// BrnCollisionStateManager.cpp:902
void BrnSound::Logic::Collision::InputCollision::SwapEntityIds(const InputContactSpy &  lSpy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionStateManager.cpp:1284
void BrnSound::Logic::Collision::InputCollision::InputCollision(const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, EBodyParts  lePart, EntityId  lEntityId, const const GenericEntity &  lEntity, InputCollision::EeAction  leAction, float32_t  lfImpulse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1310
		Vector3 lSpyToCamera;

	}
}

// BrnCollisionStateManager.cpp:1333
void BrnSound::Logic::Collision::InputCollision::InputCollision(const const CameraInfo &  lCamera, const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const BrokenJointNotificationEvent &  lEvent, const const LogicInputBuffer &  lInput, float32_t  lfTimeStamp, float32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1358
		Vector3 lSpyToCamera;

	}
}

// BrnCollisionStateManager.cpp:1382
void BrnSound::Logic::Collision::InputCollision::InputCollision(const const CameraInfo &  lCamera, const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const DetachedPartNotificationEvent &  lEvent, const const LogicInputBuffer &  lInput, float32_t  lfTimeStamp, float32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1409
		Vector3 lSpyToCamera;

	}
}

// BrnCollisionStateManager.cpp:3920
void BrnSound::Logic::Collision::RaceCarCache::Update(const const RootInputBuffer::VehicleInterface &  lInterface, const const DeformationState &  lDeformationState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:3924
		uint32_t i;

		CgsSound::Utils::DataPoint<bool>::operator=(/* parameters */);
		{
			// BrnCollisionStateManager.cpp:3931
			const RaceCarState * lpState;

			// BrnCollisionStateManager.cpp:3940
			const CarState * lpCarState;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			BrnPhysics::Deformation::DeformationState::GetCarStateFromEntityId(/* parameters */);
			CgsSound::Utils::DataPoint<rw::math::vpu::Matrix44Affine>::operator=(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			BrnPhysics::Deformation::CarState::GetDeformedBBox(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
	}
	CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnCollisionStateManager.cpp:1537
void BrnSound::Logic::Collision::InputCollision::DebugPrint(const const BrnSound::Logic::Collision::CollisionStateManager &  lCollisionManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1541
		uint32_t luOrientationLog2;

		// BrnCollisionStateManager.cpp:1542
		uint32_t luActionLog2;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsSound::Logic::StateManager::GetCurTime(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::fpu::Sqrt<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
	{
	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent, 10> >(const const EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const BrokenJointNotificationEvent & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::GetEvent(/* parameters */);
	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent, 50> >(const const EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const DetachedPartNotificationEvent & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::GetEvent(/* parameters */);
	}
}

// BrnCollisionStateManager.cpp:1430
void BrnSound::Logic::Collision::InputCollision::InputCollision(const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const GlassSmashOrCrackEvent &  lEvent, const const GenericEntity &  lEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1468
		Vector3 lSpyToCamera;

	}
}

// BrnCollisionStateManager.cpp:1573
void BrnSound::Logic::Collision::OutputCollision::DebugPrint(const const BrnSound::Logic::Collision::CollisionStateManager &  lCollisionManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1577
		uint32_t luOrientationLog2;

		// BrnCollisionStateManager.cpp:1578
		uint32_t luActionLog2;

		// BrnCollisionStateManager.cpp:1579
		uint32_t luImpactTimeLog2;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsSound::Logic::StateManager::GetCurTime(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnCollisionStateManager.cpp:935
void BrnSound::Logic::Collision::InputCollision::InputCollision(const const CameraInfo &  lCamera, const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const InputContactSpy &  lSpy, const const LogicInputBuffer &  lInput, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:943
		InputContactSpy lSpyModified;

		// BrnCollisionStateManager.cpp:1005
		Vector3 lSpyToCamera;

		{
			// BrnCollisionStateManager.cpp:970
			InputContactSpy lNewSpy;

		}
		{
			// BrnCollisionStateManager.cpp:1018
			FrameInformation lFrameInfo;

			{
				// BrnCollisionStateManager.cpp:1021
				const ScrapeInfo * lpScrape;

				{
					// BrnCollisionStateManager.cpp:1024
					float32_t lfAge;

				}
			}
		}
	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact, 300> >(const const ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const RaceCarContact & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(/* parameters */);
	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact, 400> >(const const ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const TrafficContact & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(/* parameters */);
	}
}

// BrnCollisionStateManager.cpp:1054
void BrnSound::Logic::Collision::InputCollision::InputCollision(const const CameraInfo &  lCamera, const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const InputPropSpy &  lSpy, const const LogicInputBuffer &  lInput, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1085
		Vector3 lSpyToCamera;

		// BrnCollisionStateManager.cpp:1093
		uint64_t luMaterial;

		{
			// BrnCollisionStateManager.cpp:1115
			InputPropSpy lNewSpy;

			// BrnCollisionStateManager.cpp:1123
			InputCollision lNewInputCollision;

		}
	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact, 100> >(const const ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const PropContact & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact>::GetEvent(/* parameters */);
	}
}

// BrnCollisionStateManager.cpp:1147
void BrnSound::Logic::Collision::InputCollision::InputCollision(const const CameraInfo &  lCamera, const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const DiscardedContact &  lSpy, const const LogicInputBuffer &  lInput, float32_t  lfTimeStamp, float32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1177
		Vector3 lSpyToCamera;

	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<CgsModule::EventQueue<BrnPhysics::ContactSpy::DiscardedContact, 20> >(const const EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const DiscardedContact & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::GetEvent(/* parameters */);
	}
}

// BrnCollisionStateManager.cpp:1199
void BrnSound::Logic::Collision::InputCollision::InputCollision(const const CameraInfo &  lCamera, const BrnSound::Logic::Collision::CollisionStateManager &  lMgr, const const PhysicalCarPartContact &  lSpy, const const LogicInputBuffer &  lInput, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1233
		BrnWorld::EEntityTypeID leIdA;

		// BrnCollisionStateManager.cpp:1236
		BrnWorld::EEntityTypeID leIdB;

		// BrnCollisionStateManager.cpp:1261
		Vector3 lSpyToCamera;

	}
}

// BrnCollisionStateManager.cpp:1509
extern void ImportContactSpies<BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact, 150> >(const const ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> &  lSpyQueue, const const LogicInputBuffer &  lInputBuffer, float32_t  lfTimeStamp, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionStateManager.cpp:1511
		const const CameraInfo & lCameraInfo;

		// BrnCollisionStateManager.cpp:1512
		uint32_t lu32SpyCount;

	}
	BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>::GetLength(/* parameters */);
	{
		// BrnCollisionStateManager.cpp:1515
		uint32_t lu32I;

	}
	{
		// BrnCollisionStateManager.cpp:1517
		const const PhysicalCarPartContact & lSpy;

		// BrnCollisionStateManager.cpp:1518
		InputCollision lCollision;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact>::GetEvent(/* parameters */);
	}
}

