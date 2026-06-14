// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnDriveThruManager.cpp:34
	const float32_t KF_DRIVE_THRU_INACTIVE_TIME;

	// BrnDriveThruManager.cpp:37
	const float32_t KF_DRIVE_THRU_PRESENTATION_TIME;

	// BrnDriveThruManager.cpp:38
	const float32_t KF_DRIVE_THRU_CLOSED_DEBOUNCE_TIME;

	// BrnDriveThruManager.cpp:39
	const float32_t KF_DRIVE_THRU_SLOW_MO_DEACTIVATE_TIME;

	// BrnDriveThruManager.cpp:40
	const float32_t KF_DRIVE_THRU_CLOSED_MESSAGE_TIME;

	// BrnDriveThruManager.cpp:43
	const float32_t KF_DRIVE_THRU_SLO_MO;

	// BrnDriveThruManager.cpp:46
	const float32_t KF_DRIVE_THRU_DISCOVERY_DISTANCE;

	// BrnDriveThruManager.cpp:47
	const float32_t KF_DRIVE_THRU_DISCOVERY_DISTANCE_SQ;

	// BrnDriveThruManager.cpp:48
	const float32_t KF_DRIVE_THRU_DISCOVERY_MAX_Y_SEPARATION;

	// BrnDriveThruManager.cpp:51
	const float32_t[46] KAF_MAX_DRIVE_THRU_EXIT_SPEEDS;

}

// BrnDriveThruManager.cpp:304
void BrnGameState::DriveThruManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDriveThruManager.cpp:123
void BrnGameState::DriveThruManager::Construct(BrnGameState::CarSelectManager *  lpCarSelectManager, BrnGameState::TrainingManager *  lpTrainingManager, BrnGameState::ModeManager *  lpModeManager, BrnGameState::GameStateModule *  lpGameStateModule, BrnProgression::ProgressionManager *  lpProgressionManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:125
		uint32_t luDriveThruIndex;

	}
}

// BrnDriveThruManager.cpp:288
void BrnGameState::DriveThruManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDriveThruManager.cpp:1065
void BrnGameState::DriveThruManager::PlayAutoRepairTraining(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpRcOutputInterface, const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:1067
		CgsID lPlayerCarID;

		// BrnDriveThruManager.cpp:1070
		const VehicleListEntry * lpVehicleData;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnDriveThruManager.cpp:185
void BrnGameState::DriveThruManager::Prepare(const TriggerData *  lpTriggerData, ResourcePtr<BrnWorld::GlobalColourPalette> &  lpPlayerCarColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:187
		const GenericRegion * lpGenericRegion;

		// BrnDriveThruManager.cpp:188
		int32_t liRegionCount;

		// BrnDriveThruManager.cpp:189
		int32_t liRegionIndex;

	}
	CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator=(/* parameters */);
	BrnTrigger::TriggerData::GetGenericRegionCount(/* parameters */);
	BrnTrigger::GenericRegion::IsDriveThru(/* parameters */);
	BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	CgsContainers::BitArray<46u>::UnSetAll(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnDriveThruManager.cpp:994
void BrnGameState::DriveThruManager::UnlockCarChallengeForCar(CgsID  lRepairedCarID, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:996
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnDriveThruManager.cpp:997
		uint32_t luEventJunctionIndex;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	}
	CgsResource::SmallResource::GetMemoryResource(/* parameters */);
	{
		// BrnDriveThruManager.cpp:1004
		const EventJunction * lpEventJunction;

		// BrnDriveThruManager.cpp:1005
		const BrnProgression::RaceEventData * lpRaceEventData;

		BrnProgression::ProgressionData::GetEventJunction(/* parameters */);
		BrnProgression::EventJunction::GetOfflineEvent(/* parameters */);
	}
	{
		// BrnDriveThruManager.cpp:1016
		ProfileEvent * lpProfileEvent;

		{
			// BrnDriveThruManager.cpp:1026
			SendJunctionPlayerIsAtAction lJunctionAction;

			BrnProgression::ProgressionManager::GetProfile(/* parameters */);
			BrnProgression::ProfileEvent::EnableFlags(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::SendJunctionPlayerIsAtAction>(/* parameters */);
			BrnProgression::Profile::AddGameModeTypeToDiscovered(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
			GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDriveThruManager.cpp:605
void BrnGameState::DriveThruManager::HandleDriveThru(const GenericRegion *  lpGenericRegion, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpRcOutputInterface, const VehicleList *  lpVehicleList, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:607
		BrnTrigger::GenericRegion::Type leTriggerType;

		// BrnDriveThruManager.cpp:608
		int32_t liDriveThruIndex;

	}
	BrnTrigger::GenericRegion::IsDriveThru(/* parameters */);
	BrnTrigger::GenericRegion::GetType(/* parameters */);
	CgsContainers::BitArray<46u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<46u>::SetBit(/* parameters */);
	CgsContainers::BitArray<46u>::IsBitSet(/* parameters */);
	{
	}
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	BrnProgression::Profile::GetNumDriveThrusDiscovered(/* parameters */);
	{
		// BrnDriveThruManager.cpp:662
		CgsID lPlayerCarID;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
		}
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	{
	}
	GetTotalDriveThrusOfType(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	{
	}
	BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	ModeManager::GetCurrentGameMode(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

// BrnDriveThruManager.cpp:962
void BrnGameState::DriveThruManager::SetPlayerCarDriver(InputBuffer::GameActionQueue *  lpActionQueue, TimerRequestInterface *  lpTimerRequestInterface, const BoxRegion *  lpBoxRegion, bool  lbPlayerDriving, float32_t  lfMaxSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:964
		SetPlayerCarDriverAction lDrivePlayerAction;

	}
	CgsSystem::TimerRequestInterface::GetSimTimerRequests(/* parameters */);
	CgsSystem::TimerRequests::SetTimestepMultiplier(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	CgsSystem::TimerRequestInterface::GetSimTimerRequests(/* parameters */);
	CgsSystem::TimerRequests::SetTimestepMultiplier(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDriveThruManager.cpp:766
void BrnGameState::DriveThruManager::ProcessDriveThru(BrnTrigger::GenericRegion::Type  leTriggerType, InputBuffer::GameActionQueue *  lpActionQueue, TimerRequestInterface *  lpTimerRequestInterface, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpRcOutputInterface, bool  lbIsOnline, bool *  lpbIsInJunkyard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:772
		ClosedDriveThruAction lClosedDriveThroughAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ClosedDriveThruAction>(/* parameters */);
	}
	{
		// BrnDriveThruManager.cpp:802
		GasStationDriveThruAction lGasStationAction;

		AddGameAction<BrnGameState::GameStateModuleIO::GasStationDriveThruAction>(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	}
	{
		// BrnDriveThruManager.cpp:885
		PaintShopDriveThruAction lPaintShopAction;

		// BrnDriveThruManager.cpp:886
		CarData * lpCarData;

		BrnProgression::ProgressionManager::GetCurrentCarData(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator->(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PaintShopDriveThruAction>(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		BrnProgression::CarData::SetColourIndex(/* parameters */);
		BrnProgression::CarData::SetPaletteIndex(/* parameters */);
		GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	}
	{
		// BrnDriveThruManager.cpp:828
		const CarData * lpCurrentCarData;

		// BrnDriveThruManager.cpp:829
		CgsID lPlayerCarID;

		// BrnDriveThruManager.cpp:837
		BodyShopDriveThruAction lBodyShopAction;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::BodyShopDriveThruAction>(/* parameters */);
		ScoringSystem::ResetRoadRageCrashesForPlayer(/* parameters */);
		BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
		BrnProgression::CarData::GetId(/* parameters */);
		BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
		BrnProgression::ProgressionManager::RepairUnlockedVehicle(/* parameters */);
		BrnProgression::Profile::RepairUnlockedVehicle(/* parameters */);
		GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
		BrnProgression::CarData::SetUnlockDeformationAmount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDriveThruManager.cpp:332
void BrnGameState::DriveThruManager::Update(InputBuffer::GameActionQueue *  lpActionQueue, TimerRequestInterface *  lpTimerRequestInterface, float32_t  lfTimeStep, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpRcOutputInterface, bool  lbIsOnline, bool  lbIsFreeburn, bool  lbIsShowtiming, bool  lbIsAnythingPaused, bool  lbIsInJunkyard, bool  lbInviteInProgress, const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruManager.cpp:334
		uint32_t luDriveThruIndex;

		// BrnDriveThruManager.cpp:335
		const BrnProgression::Profile * lpProfile;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	{
		// BrnDriveThruManager.cpp:364
		DriveThruTriggerData * lpDriveThruTriggerData;

		// BrnDriveThruManager.cpp:365
		BrnTrigger::GenericRegion::Type leTriggerType;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		{
			// BrnDriveThruManager.cpp:409
			CgsID lDriveThruID;

			// BrnDriveThruManager.cpp:410
			float32_t lfSeparationFromPlayerSq;

			// BrnDriveThruManager.cpp:411
			float32_t lfSeparationFromPlayerY;

			// BrnDriveThruManager.cpp:413
			Vector3 lPlayerPos;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
			rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
	}
	BrnTrigger::GenericRegion::GetType(/* parameters */);
	{
		// BrnDriveThruManager.cpp:373
		float32_t lfTimeBefore;

		{
			// BrnDriveThruManager.cpp:381
			StopDriveThruPresentationAction lStopPresentationAction;

			// BrnDriveThruManager.cpp:382
			const GenericRegion * lpGenericRegion;

			// BrnDriveThruManager.cpp:383
			const BoxRegion * lpBoxRegion;

			AddGameAction<BrnGameState::GameStateModuleIO::StopDriveThruPresentationAction>(/* parameters */);
		}
	}
	{
		// BrnDriveThruManager.cpp:582
		CloseDriveThruAction lCloseAction;

		AddGameAction<BrnGameState::GameStateModuleIO::CloseDriveThruAction>(/* parameters */);
	}
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	BrnProgression::Profile::GetNumDriveThrusDiscovered(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetTotalDriveThrusOfType(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInReverseGear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerEngineOn(/* parameters */);
	{
		// BrnDriveThruManager.cpp:446
		DriveThruDiscoveredAction lDriveThruDiscoveredAction;

		AddGameAction<BrnGameState::GameStateModuleIO::DriveThruDiscoveredAction>(/* parameters */);
		{
			// BrnDriveThruManager.cpp:486
			int32_t liTriggerTypeIndex;

			// BrnDriveThruManager.cpp:487
			bool lbAreAllDriveThrusFound;

			{
				// BrnDriveThruManager.cpp:492
				BrnTrigger::GenericRegion::Type leTriggerType;

				// BrnDriveThruManager.cpp:493
				int32_t liNumDriveThrusOfThisTypeFound;

				BrnProgression::Profile::GetNumDriveThrusDiscovered(/* parameters */);
			}
		}
	}
	{
		// BrnDriveThruManager.cpp:572
		HUDMessageMustFixCarAction lMustFixAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageMustFixCarAction>(/* parameters */);
	}
	{
		// BrnDriveThruManager.cpp:563
		HUDMessageCantPaintAction lCantPaintAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageCantPaintAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnDriveThruManager.cpp:550
		AllDriveThrusDiscoveredAction lAllDriveThrusDiscoveredAction;

		AddGameAction<BrnGameState::GameStateModuleIO::AllDriveThrusDiscoveredAction>(/* parameters */);
	}
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
}

