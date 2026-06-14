// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnTakedownManager.cpp:30
	const float32_t KF_NORMAL_TIME_IN_TAKEDOWN_CAM;

	// BrnTakedownManager.cpp:31
	const float32_t KF_ROAD_RAGE_TIME_IN_TAKEDOWN_CAM;

	// BrnTakedownManager.cpp:32
	const float32_t KF_PURSUIT_TIME_IN_TAKEDOWN_CAM;

	// BrnTakedownManager.cpp:33
	const float32_t KF_RESET_PROTECTION_TIME_PROPORTION;

	// BrnTakedownManager.cpp:34
	const float32_t KF_MIN_NORMAL_RESET_TIME;

	// BrnTakedownManager.cpp:35
	const float32_t KF_MAX_NORMAL_RESET_TIME;

	// BrnTakedownManager.cpp:38
	const float32_t KF_PLAYER_CONTROL_RETURN_DELAY_TIME;

	// BrnTakedownManager.cpp:41
	const float32_t KF_TAKEDOWN_CAMERA_EARLY_OUT_MIN_TIME;

	// BrnTakedownManager.cpp:42
	const float32_t KF_TAKEDOWN_CAMERA_EARLY_OUT_TIME;

	// BrnTakedownManager.cpp:43
	const float32_t KR_MIN_TAKEDOWN_CAMERA_EARLY_OUT_SPEED;

}

// BrnTakedownManager.cpp:1089
void BrnGameState::TakedownManager::IsInTakedownCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTakedownManager.cpp:93
void BrnGameState::TakedownManager::Construct(BrnGameState::ModeManager *  lpModeManager, BrnProgression::ProgressionManager *  lpProgressionManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTakedownManager.cpp:130
void BrnGameState::TakedownManager::GetRaceCarData(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTakedownManager.cpp:883
void BrnGameState::TakedownManager::GetTakedownTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTakedownManager.cpp:1101
void BrnGameState::TakedownManager::IsAllowedToResetPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTakedownManager.cpp:823
void BrnGameState::TakedownManager::GetTakedownTypeFromTrafficVehicleIndex(const TrafficTypeResponseQueue *  lpResponseQueue, uint16_t  luTrafficVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:827
		BrnTraffic::VehicleClass lVehicleClass;

		// BrnTakedownManager.cpp:828
		BrnGameState::ETakedownType leTakedownType;

		// BrnTakedownManager.cpp:829
		int32_t liResponseIndex;

	}
	{
		// BrnTakedownManager.cpp:833
		const const TrafficTypeResponse & lResponse;

		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetEvent(/* parameters */);
	}
}

// BrnTakedownManager.cpp:1126
void BrnGameState::TakedownManager::IsBeingAttacked(const RaceCarState *  lpRaceCarState, EActiveRaceCarIndex *  lpeAggressorActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:1128
		float32_t lfContactTime;

		ModeManager::IsOnlineGameMode(/* parameters */);
	}
	BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect::IsActive(/* parameters */);
	rw::math::vpu::operator><VectorAxisW>(/* parameters */);
	BrnPhysics::Vehicle::VehiclePhysics::ShuntEffect::GetLife(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnTakedownManager.cpp:111
void BrnGameState::TakedownManager::ClearRaceCarData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:113
		uint16_t luContact;

		RaceCarData::Clear(/* parameters */);
	}
}

// BrnTakedownManager.cpp:148
void BrnGameState::TakedownManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTakedownManager.cpp:266
void BrnGameState::TakedownManager::UpdateTakedownTimes(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:268
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnTakedownManager.cpp:273
			BrnGameState::TakedownManager::RaceCarData * lpRaceCarData;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		}
		operator++(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnTakedownManager.cpp:520
void BrnGameState::TakedownManager::DetectStandardTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, const RaceCarCrashEvent *  lpCrashEvent, PostWorldInputBuffer::TrafficTypeResponseQueue *  lpLastTrafficTypeResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:522
		VolumeInstanceId lVictimInstanceID;

		// BrnTakedownManager.cpp:523
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		{
			// BrnTakedownManager.cpp:527
			const RaceCarState * lpVictimRaceCarState;

			// BrnTakedownManager.cpp:528
			EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// BrnTakedownManager.cpp:540
		BrnGameState::TakedownManager::RaceCarData * lpAggressorCarData;

		// BrnTakedownManager.cpp:546
		TakedownEvent * lpAggressorTakedownEvent;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
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
	}
	ModeManager::CurrentGameModeAllowsRevengeTakedowns(/* parameters */);
	CgsSceneManager::EntityId::GetOwner(/* parameters */);
}

// BrnTakedownManager.cpp:1000
void BrnGameState::TakedownManager::ClearAllTakedowns(InputBuffer::GameActionQueue *  lpOutActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:1005
		SetTakedownCameraAction lSetTakedownCameraAction;

		// BrnTakedownManager.cpp:1006
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetTakedownCameraAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
}

// BrnTakedownManager.cpp:316
void BrnGameState::TakedownManager::UpdatePlayerResetStatus(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, InputBuffer::GameActionQueue *  lpGameActionQueue, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:320
		const RaceCarState * lpRaceCarState;

		// BrnTakedownManager.cpp:321
		float32_t lfPlayerSpeed;

		// BrnTakedownManager.cpp:322
		Vector3 lPlayerUp;

		// BrnTakedownManager.cpp:323
		Vector3 lUpCrossProd;

		// BrnTakedownManager.cpp:324
		float32_t lfPlayerAngleFromUp;

		// BrnTakedownManager.cpp:325
		int32_t liWheelIndex;

		// BrnTakedownManager.cpp:326
		int32_t liNumWheelsOffGround;

		// BrnTakedownManager.cpp:327
		bool lbBadSpeedValue;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::ASin(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_xor(/* parameters */);
		{
		}
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_abs(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_rsqrte(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		{
			// BrnTakedownManager.cpp:370
			ResetPlayerCarOnTrackAction lResetPlayerCarOnTrack;

			rw::math::vpu::Clamp(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarOnTrackAction>(/* parameters */);
			rw::math::vpu::Max<float>(/* parameters */);
		}
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
	}
}

// BrnTakedownManager.cpp:912
void BrnGameState::TakedownManager::StartTakedownCamera(InputBuffer::GameActionQueue *  lpOutActionQueue, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, BrnGameState::ETakedownType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:914
		SetTakedownCameraAction lSetTakedownCameraAction;

		// BrnTakedownManager.cpp:915
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnTakedownManager.cpp:916
		PlayerInvulnerableAction lPlayerInvulnerableAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetTakedownCameraAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PlayerInvulnerableAction>(/* parameters */);
}

// BrnTakedownManager.cpp:718
void BrnGameState::TakedownManager::ProcessTakedownEvent(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, TakedownEvent *  lpTakedownEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:723
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnTakedownManager.cpp:724
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnTakedownManager.cpp:725
		BrnGameState::TakedownManager::RaceCarData * lpAggressorRaceCarData;

		// BrnTakedownManager.cpp:726
		BrnGameState::TakedownManager::RaceCarData * lpVictimRaceCarData;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetTakedownEventOutputQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::AddEvent(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	{
		// BrnTakedownManager.cpp:766
		OnPlayerTakedownAction lPlayerTakedownAction;

		// BrnTakedownManager.cpp:767
		EActiveRaceCarIndex leVistimActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetGlobalRaceCarIndex(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::OnPlayerTakedownAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnTakedownManager.cpp:795
		ShutdownAction lShutdown;

		// BrnTakedownManager.cpp:796
		CgsID lRivalId;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ShutdownAction>(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnTakedownManager.cpp:661
void BrnGameState::TakedownManager::ProcessQueuedTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, float32_t  lfSimTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:664
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnTakedownManager.cpp:665
		float32_t lfTakedownConfirmationTime;

		{
			// BrnTakedownManager.cpp:669
			BrnGameState::TakedownManager::RaceCarData * lpRaceCarData;

			ModeManager::IsOnlineGameMode(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		}
		operator++(/* parameters */);
	}
	{
		// BrnTakedownManager.cpp:690
		const RaceCarState * lpRaceCarState;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		ModeManager::IsOnlineGameMode(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnTakedownManager.cpp:603
void BrnGameState::TakedownManager::DetectNetworkTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:605
		const InputBuffer::TakedownEventQueue * lpOnlineTakedownQueue;

		// BrnTakedownManager.cpp:607
		int32_t liTakedown;

		GameStateModuleIO::PreWorldInputBuffer::GetTakedownEventInputQueue(/* parameters */);
		{
			// BrnTakedownManager.cpp:611
			EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

			// BrnTakedownManager.cpp:612
			EActiveRaceCarIndex leVictimActiveRaceCarIndex;

			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		}
		{
			// BrnTakedownManager.cpp:617
			TakedownEvent lTakedownEvent;

			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTakedownManager.cpp:451
void BrnGameState::TakedownManager::DetectInstantTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, const RaceCarCrashEvent *  lpCrashEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:453
		VolumeInstanceId lCrashedCarInstanceID;

		// BrnTakedownManager.cpp:454
		EActiveRaceCarIndex leCrashedActiveRaceCarIndex;

		// BrnTakedownManager.cpp:455
		BrnGameState::TakedownManager::RaceCarData * lpCrashedCarData;

		ModeManager::IsOnlineGameMode(/* parameters */);
		{
			// BrnTakedownManager.cpp:466
			EActiveRaceCarIndex leInstantAggressorActiveRaceCarIndex;

			// BrnTakedownManager.cpp:467
			TakedownEvent * lpAggressorTakedownEvent;

			// BrnTakedownManager.cpp:468
			BrnGameState::TakedownManager::RaceCarData * lpInstantAggresorCarData;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
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
	}
}

// BrnTakedownManager.cpp:395
void BrnGameState::TakedownManager::DetectTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpCrashQueue, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, PostWorldInputBuffer::TrafficTypeResponseQueue *  lpLastTrafficTypeResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnTakedownManager.cpp:399
		int32_t liCrashIndex;

		// BrnTakedownManager.cpp:400
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		{
			// BrnTakedownManager.cpp:404
			const RaceCarCrashEvent * lpCrashEvent;

			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
			{
				// BrnTakedownManager.cpp:410
				VolumeInstanceId lCrashedCarInstanceID;

				// BrnTakedownManager.cpp:411
				EActiveRaceCarIndex leCrashedActiveRaceCarIndex;

				ModeManager::IsOnlineGameMode(/* parameters */);
			}
		}
	}
	{
		// BrnTakedownManager.cpp:420
		VolumeInstanceId lVictimInstanceID;

		// BrnTakedownManager.cpp:421
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnTakedownManager.cpp:422
		BrnGameState::TakedownManager::RaceCarData * lpVictimCarData;

	}
}

// BrnTakedownManager.cpp:954
void BrnGameState::TakedownManager::EndTakedownCamera(InputBuffer::GameActionQueue *  lpOutActionQueue, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:956
		SetTakedownCameraAction lSetTakedownCameraAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetTakedownCameraAction>(/* parameters */);
	{
		// BrnTakedownManager.cpp:972
		ShutdownFinishedAction leShutdownFinishedAction;

		// BrnTakedownManager.cpp:973
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::ShutdownFinishedAction>(/* parameters */);
}

// BrnTakedownManager.cpp:1036
void BrnGameState::TakedownManager::UpdateTakedownCamera(float32_t  lfTimeStep, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:1040
		bool lbStopCamera;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTakedownManager.cpp:1053
		float32_t lfTargetSpeed;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
}

// BrnTakedownManager.cpp:178
void BrnGameState::TakedownManager::Update(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, float32_t  lfSimTimeStep, VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashEventQueue, CrashingRaceCarInterface *  lpCrashingVehicleInterface, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, PostWorldInputBuffer::TrafficTypeResponseQueue *  lpLastTrafficTypeResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTakedownManager.cpp:204
		bool lbTakedownsAllowed;

	}
	ModeManager::IsShowtimeGameMode(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnTakedownManager.cpp:243
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	}
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerEngineState(/* parameters */);
	ModeManager::CurrentGameModeAllowsTakedowns(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnTakedownManager.cpp:47
// BrnTakedownManager.cpp:48
// BrnTakedownManager.cpp:49
// BrnTakedownManager.cpp:51
// BrnTakedownManager.cpp:52
// BrnTakedownManager.cpp:53
// BrnTakedownManager.cpp:55
// BrnTakedownManager.cpp:56
// BrnTakedownManager.cpp:57
// BrnTakedownManager.cpp:58
// BrnTakedownManager.cpp:59
// BrnTakedownManager.cpp:60
// BrnTakedownManager.cpp:61
// BrnTakedownManager.cpp:64
// BrnTakedownManager.cpp:65
// BrnTakedownManager.cpp:66
// BrnTakedownManager.cpp:68
