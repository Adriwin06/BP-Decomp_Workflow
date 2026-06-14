// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnRumbleManager.cpp:30
	const float32_t KF_CRASH_RUMBLE_TIME;

	// BrnRumbleManager.cpp:33
	const int32_t KI_CRASH_RUMBLE_AMOUNT = 36863;

	// BrnRumbleManager.cpp:36
	const float32_t KF_CHECK_RUMBLE_TIME;

	// BrnRumbleManager.cpp:37
	const uint32_t KU_CHECK_LEFT_RUMBLE_AMOUNT = 32767;

	// BrnRumbleManager.cpp:38
	const uint32_t KU_CHECK_RIGHT_RUMBLE_AMOUNT = 32767;

	// BrnRumbleManager.cpp:41
	const float32_t KF_MIN_RUMBLE_SEPARATION_TIME;

	// BrnRumbleManager.cpp:44
	const float32_t KF_MIN_RUMBLE_IMPACT_STRENGTH;

	// BrnRumbleManager.cpp:45
	const float32_t KF_RUMBLE_IMPACT_SCALE_LOW;

	// BrnRumbleManager.cpp:46
	const float32_t KF_RUMBLE_IMPACT_SCALE_HIGH;

	// BrnRumbleManager.cpp:48
	const float32_t KF_RUMBLE_IMPACT_WORLD_SCALE;

	// BrnRumbleManager.cpp:50
	const int32_t KN_RUMBLE_IMPACT_PRIORITY = 1000;

	// BrnRumbleManager.cpp:51
	const int32_t KN_RUMBLE_VEHICLE_IMPACT_PRIORITY = 1001;

	// BrnRumbleManager.cpp:52
	const int32_t KN_LANDING_RUMBLE_PRIORITY = 1002;

	// BrnRumbleManager.cpp:53
	const int32_t KN_CRASH_RUMBLE_PRIORITY = 1010;

}

// BrnRumbleManager.cpp:343
void BrnGameState::RumbleManager::UpdatePictureParadiseState(bool  lbInPictureParadise) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRumbleManager.cpp:695
void BrnGameState::RumbleManager::OnTrafficCheck() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRumbleManager.cpp:948
void BrnGameState::RumbleManager::PlayJolt(int32_t  liRumblePriority, const const JoltEffect &  lJoltEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:950
		PlayJoltEffectEvent lEvent;

	}
	CgsInput::InputIO::PlayJoltEffectEvent::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::AddEventSafe(/* parameters */);
}

// BrnRumbleManager.cpp:709
void BrnGameState::RumbleManager::OnVehicleAggressorImpact(BrnPhysics::Vehicle::EImpactType  leImpactType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:711
		JoltEffect kJoltEffect;

		// BrnRumbleManager.cpp:731
		JoltEffect lJoltEffect;

		// BrnRumbleManager.cpp:749
		float32_t lfVolumeLow;

	}
}

// BrnRumbleManager.cpp:793
void BrnGameState::RumbleManager::OnVehicleVictimImpact(BrnPhysics::Vehicle::EImpactType  leImpactType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRumbleManager.cpp:71
void BrnGameState::RumbleManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::SetEventPointer(/* parameters */);
}

// BrnRumbleManager.cpp:105
void BrnGameState::RumbleManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:107
		BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelIndex;

		BrnPhysics::Vehicle::operator++(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear(/* parameters */);
}

// BrnRumbleManager.cpp:592
void BrnGameState::RumbleManager::UpdateImpacts(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, EActiveRaceCarIndex  lePlayerCarIndex, ContactSpyInterface *  lpContactSpyInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:597
		const RaceCarState * lpState;

		// BrnRumbleManager.cpp:598
		const ContactSpyData::RaceCarContactQueue * lpCarContacts;

		// BrnRumbleManager.cpp:599
		const ContactSpyRunData * lpRunData;

		// BrnRumbleManager.cpp:600
		float32_t lfHardestImpact;

		// BrnRumbleManager.cpp:614
		int32_t liIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		BrnPhysics::ContactSpy::ContactSpyInterface::GetRaceCarContactRunList(/* parameters */);
		BrnPhysics::ContactSpy::ContactSpyInterface::GetRaceCarContacts(/* parameters */);
		BrnPhysics::ContactSpy::ContactSpyRunList<8>::GetRunDataWithEntityID(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// BrnRumbleManager.cpp:617
		VecFloat lvHardestImpact;

		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		{
			// BrnRumbleManager.cpp:622
			const BaseContact * lpContact;

			// BrnRumbleManager.cpp:625
			VecFloat lvImpactMagnitude;

			// BrnRumbleManager.cpp:634
			MaskScalar lMask;

			BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetBaseContact(/* parameters */);
		}
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:647
		JoltEffect kJoltEffect;

		// BrnRumbleManager.cpp:667
		JoltEffect lJoltEffect;

		// BrnRumbleManager.cpp:669
		float32_t lfVolumeHigh;

		// BrnRumbleManager.cpp:670
		float32_t lfVolumeLow;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
}

// BrnRumbleManager.cpp:912
void BrnGameState::RumbleManager::ChangeRumbleVolume(int32_t  liRumbleId, float32_t  lfVolume, const const JoltEffect &  lJoltEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:914
		ChangeVolumeRumbleEffectEvent lEvent;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(/* parameters */);
	CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRumbleManager.cpp:894
void BrnGameState::RumbleManager::PlayRumble(int32_t  liRumbleId, float32_t  lfVolume, int32_t  liRumblePriority, const const JoltEffect &  lJoltEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:896
		PlayRumbleEffectEvent lEvent;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(/* parameters */);
	CgsInput::InputIO::PlayRumbleEffectEvent::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRumbleManager.cpp:929
void BrnGameState::RumbleManager::StopRumble(int32_t  liRumbleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:931
		StopRumbleEffectEvent lEvent;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRumbleManager.cpp:362
void BrnGameState::RumbleManager::UpdateSurfaceRumble(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, EActiveRaceCarIndex  lePlayerCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:379
		const RaceCarState * lpRaceCarState;

	}
	Attrib::Gen::surfacelist::ChangeWithDefault(/* parameters */);
	{
		// BrnRumbleManager.cpp:374
		surface lSampleSurface;

		// BrnRumbleManager.cpp:375
		Vector4 lSampleColour;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	{
		// BrnRumbleManager.cpp:382
		BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelIndex;

		BrnPhysics::Vehicle::operator++(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:391
		BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelIndex;

		BrnPhysics::Vehicle::operator++(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:441
		BrnPhysics::Vehicle::EVehicleDrivenWheel leRumbleListIndex;

		{
			// BrnRumbleManager.cpp:447
			bool lbRumbleFound;

			{
				// BrnRumbleManager.cpp:450
				BrnPhysics::Vehicle::EVehicleDrivenWheel leSurfaceListIndex;

				BrnPhysics::Vehicle::operator++(/* parameters */);
			}
		}
		BrnPhysics::Vehicle::operator++(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:399
		uint8_t lu8SurfaceId;

		// BrnRumbleManager.cpp:401
		surface lSurface;

		// BrnRumbleManager.cpp:402
		rumblesurface lRumbleSurface;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Gen::rumblesurface::rumblesurface(/* parameters */);
		{
			// BrnRumbleManager.cpp:407
			BrnPhysics::Vehicle::EVehicleDrivenWheel leSurfaceListIndex;

			BrnPhysics::Vehicle::operator++(/* parameters */);
		}
		Attrib::Gen::rumblesurface::~rumblesurface(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:467
		surface lSurface;

		// BrnRumbleManager.cpp:468
		rumblesurface lRumbleSurface;

		// BrnRumbleManager.cpp:469
		float32_t lfSpeed;

		// BrnRumbleManager.cpp:473
		float32_t lfSpeedDifference;

		// BrnRumbleManager.cpp:474
		float32_t lfVolume;

		// BrnRumbleManager.cpp:476
		JoltEffect lJoltEffect;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Gen::rumblesurface::rumblesurface(/* parameters */);
		Attrib::Gen::rumblesurface::MinSpeedForRumble(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		Attrib::Gen::rumblesurface::~rumblesurface(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:505
		BrnPhysics::Vehicle::EVehicleDrivenWheel leSurfaceListIndex;

		{
			// BrnRumbleManager.cpp:511
			bool lbRumbleFound;

			{
				// BrnRumbleManager.cpp:514
				BrnPhysics::Vehicle::EVehicleDrivenWheel leRumbleListIndex;

				BrnPhysics::Vehicle::operator++(/* parameters */);
			}
			{
				// BrnRumbleManager.cpp:527
				BrnPhysics::Vehicle::EVehicleDrivenWheel leRumbleListIndex;

				// BrnRumbleManager.cpp:546
				surface lSurface;

				// BrnRumbleManager.cpp:547
				rumblesurface lRumbleSurface;

				// BrnRumbleManager.cpp:548
				float32_t lfSpeed;

				// BrnRumbleManager.cpp:552
				float32_t lfSpeedDifference;

				// BrnRumbleManager.cpp:553
				float32_t lfVolume;

				// BrnRumbleManager.cpp:555
				JoltEffect lJoltEffect;

				BrnPhysics::Vehicle::operator++(/* parameters */);
			}
		}
	}
	{
		// BrnRumbleManager.cpp:376
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Attrib::Gen::surfacelist::Surfaces(/* parameters */);
	Attrib::Gen::surface::surface(/* parameters */);
	Attrib::Gen::rumblesurface::rumblesurface(/* parameters */);
	Attrib::Gen::rumblesurface::MinSpeedForRumble(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	Attrib::Gen::rumblesurface::~rumblesurface(/* parameters */);
	Attrib::Gen::surface::~surface(/* parameters */);
	BrnPhysics::Vehicle::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnRumbleManager.cpp:140
void BrnGameState::RumbleManager::Update(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpCrashEventQueue, EActiveRaceCarIndex  lePlayerCarIndex, ContactSpyInterface *  lpContactSpyInterface, float32_t  lfGameTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::TimePlayerInAir(/* parameters */);
	{
		// BrnRumbleManager.cpp:193
		float32_t krRumbleTimeFactor;

		// BrnRumbleManager.cpp:194
		float32_t lrRumbleTime;

		// BrnRumbleManager.cpp:196
		JoltEffect kLandedJoltEffect;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::TimePlayerInAir(/* parameters */);
	}
	{
		// BrnRumbleManager.cpp:158
		const JoltEffect kCrashJoltEffect;

	}
}

// BrnRumbleManager.cpp:809
void BrnGameState::RumbleManager::BridgeRumbleToInput(PreWorldInputBuffer *  lpInputInputBuffer, const TimerStatusInterface *  lpTimerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:811
		int32_t liIndex;

		// BrnRumbleManager.cpp:812
		int32_t liLength;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetLength(/* parameters */);
	{
		// BrnRumbleManager.cpp:824
		const const PlayJoltEffectEvent & lJoltEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetEvent(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetLength(/* parameters */);
	{
		// BrnRumbleManager.cpp:835
		const const StopRumbleEffectEvent & lStopRumbleEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetEvent(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetLength(/* parameters */);
	{
		// BrnRumbleManager.cpp:847
		const const PlayRumbleEffectEvent & lPlayRumbleEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetEvent(/* parameters */);
	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetLength(/* parameters */);
	{
		// BrnRumbleManager.cpp:862
		const const ChangeVolumeRumbleEffectEvent & lChangeVolumeRumbleEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetEvent(/* parameters */);
	}
	CgsInput::InputIO::PreWorldInputBuffer::SetTimerStatusInterface(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsInput::InputIO::PreWorldInputBuffer::SetRumblePaused(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Clear(/* parameters */);
	CgsInput::InputIO::PreWorldInputBuffer::SetRumbleEnabled(/* parameters */);
	CgsInput::InputIO::PreWorldInputBuffer::SetWheelForceFeedbackEnabled(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRumbleManager.cpp:280
void BrnGameState::RumbleManager::UpdatePauseState(bool  lbIsAnythingPaused, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRumbleManager.cpp:299
		int32_t liActionSize;

		// BrnRumbleManager.cpp:300
		const CgsModule::Event * lpAction;

		// BrnRumbleManager.cpp:302
		int32_t liType;

	}
	CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

