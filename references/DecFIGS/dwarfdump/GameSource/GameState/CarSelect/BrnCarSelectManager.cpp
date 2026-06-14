// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnCarSelectManager.cpp:30
	const float32_t KF_CARSELECT_TRANSITION_IN_MIN_TIME_WITH_CARS;

	// BrnCarSelectManager.cpp:31
	const float32_t KF_CARSELECT_TRANSITION_IN_MIN_TIME_NO_CARS;

	// BrnCarSelectManager.cpp:33
	const float32_t KF_CARSELECT_TRANSITION_IN_REQUEST_STREAMING;

	// BrnCarSelectManager.cpp:35
	const float32_t KF_CARSELECT_DELAY_BEFORE_CHANGE_CAR;

	// BrnCarSelectManager.cpp:36
	const float32_t KF_LIVERYSELECT_DELAY_BEFORE_CHANGE_CAR;

	// BrnCarSelectManager.cpp:37
	const float32_t KF_CARSELECT_CHANGE_CAR_TELEPORT_DELAY;

	// BrnCarSelectManager.cpp:39
	const float32_t KF_CARSELECT_WAIT_FOR_AUDIO_MIN_TIME;

	// BrnCarSelectManager.cpp:41
	const float32_t KF_CARSELECT_UNLOCK_MIN_TIME;

}

// BrnCarSelectManager.cpp:1326
void BrnGameState::CarSelectManager::GetCurrentPlayerVehicle(const CgsID &  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCarSelectManager.cpp:1339
void BrnGameState::CarSelectManager::GetProfileCarData(const CgsID &  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1343
		Profile * lpProfile;

		// BrnCarSelectManager.cpp:1344
		const CarData * lpCarData;

	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
}

// BrnCarSelectManager.cpp:1542
void BrnGameState::CarSelectManager::SaveChosenLiveryForCar(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1544
		CgsID lBaseCarId;

		// BrnCarSelectManager.cpp:1545
		const VehicleListEntry * lpVehicleListEntry;

		// BrnCarSelectManager.cpp:1546
		Profile * lpProfile;

		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
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
}

// BrnCarSelectManager.cpp:1154
void BrnGameState::CarSelectManager::IsThisCarInCurrentUnlockSequence(const CarData *  lpProfileCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnProgression::CarData::IsUnlockType(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1168
		const VehicleListEntry * lpVehicleListEntry;

		// BrnCarSelectManager.cpp:1171
		const VehicleListEntryGamePlayData * lpVehicleListEntryGamePlayData;

		BrnResource::VehicleListEntry::GetGamePlayData(/* parameters */);
	}
	BrnProgression::CarData::GetId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:1365
void BrnGameState::CarSelectManager::GetNextUnlockCarID(CgsID  lCurrentID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1367
		int32_t liProfileIndex;

		// BrnCarSelectManager.cpp:1368
		int32_t liCurrentIndex;

		// BrnCarSelectManager.cpp:1369
		const BrnProgression::Profile * lpProfile;

	}
	{
		// BrnCarSelectManager.cpp:1392
		const CarData * lpProfileCar;

		BrnProgression::Profile::GetCarData(/* parameters */);
	}
	BrnProgression::Profile::GetCarCount(/* parameters */);
	BrnProgression::Profile::GetCarCount(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1379
		const CarData * lpProfileCar;

		BrnProgression::Profile::GetCarData(/* parameters */);
	}
	BrnProgression::CarData::GetId(/* parameters */);
}

// BrnCarSelectManager.cpp:1237
void BrnGameState::CarSelectManager::SetupShutdownUnlockList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1241
		const BrnProgression::Profile * lpProfile;

	}
	GameStateModule::IsOnlineGameMode(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1254
		int32_t liProfileIndex;

		{
			// BrnCarSelectManager.cpp:1257
			const CarData * lpProfileCar;

			BrnProgression::Profile::GetCarData(/* parameters */);
		}
		BrnProgression::Profile::GetCarCount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:1197
void BrnGameState::CarSelectManager::SetupNormalUnlockList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1201
		const BrnProgression::Profile * lpProfile;

	}
	GameStateModule::IsOnlineGameMode(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1213
		int32_t liProfileIndex;

		{
			// BrnCarSelectManager.cpp:1216
			const CarData * lpProfileCar;

			BrnProgression::Profile::GetCarData(/* parameters */);
		}
		BrnProgression::Profile::GetCarCount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:1673
void BrnGameState::CarSelectManager::DEBUG_UnlockCarsForTesting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1675
		Profile * lpProfile;

		// BrnCarSelectManager.cpp:1676
		uint32_t luIndex;

		// BrnCarSelectManager.cpp:1677
		uint32_t luUnlockCount;

		// BrnCarSelectManager.cpp:1678
		bool lbUnlockShutdown;

		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleCount(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1686
		const VehicleListEntry * lpVehicleEntry;

		// BrnCarSelectManager.cpp:1687
		const VehicleListEntryGamePlayData * lpGamePlayEntry;

		// BrnCarSelectManager.cpp:1688
		CarData * lpCarData;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnProgression::CarData::SetUnlockDeformationAmount(/* parameters */);
}

// BrnCarSelectManager.cpp:562
void BrnGameState::CarSelectManager::RequestChangeCar(const const CgsID &  lCardId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:564
		Profile * lpProfile;

	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:1061
void BrnGameState::CarSelectManager::SetupSpawnLocations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1074
		uint32_t luClearIndex;

		// BrnCarSelectManager.cpp:1080
		const TriggerData * lpTriggerData;

		// BrnCarSelectManager.cpp:1084
		int32_t liSpawnLocation;

		// BrnCarSelectManager.cpp:1117
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpLastActiveRaceCarInterface;

		// BrnCarSelectManager.cpp:1137
		uint32_t luDebugIndex;

	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1087
		const SpawnLocation * lpSpawnLocation;

		BrnTrigger::TriggerData::GetSpawnLocation(/* parameters */);
		{
			// BrnCarSelectManager.cpp:1092
			BrnTrigger::SpawnLocation::Type lSpawnLocationType;

			BrnTrigger::SpawnLocation::GetType(/* parameters */);
		}
	}
	GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnCarSelectManager.cpp:1127
		const SpawnLocation * lpTemp;

	}
	{
		// BrnCarSelectManager.cpp:1140
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:501
void BrnGameState::CarSelectManager::ExitJunkyard(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:508
		CarSelectWaitingForAudioAction lWaitingForAudioAction;

	}
	{
		// BrnCarSelectManager.cpp:503
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectWaitingForAudioAction>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:165
void BrnGameState::CarSelectManager::StreamingFinished(CgsID  lActiveCarZeroId, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:178
		CarSelectWaitingForAudioAction lWaitingForAudioAction;

		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectWaitingForAudioAction>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:1523
void BrnGameState::CarSelectManager::UpdateCarColour(CgsID  lCarId, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1525
		CarSelectChangeColourAction lChangeCarColourAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectChangeColourAction>(/* parameters */);
}

// BrnCarSelectManager.cpp:1413
void BrnGameState::CarSelectManager::RequestStreamingForUnlock(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1424
		CarSelectionRequestStreamingAction lRequestStreaming;

		// BrnCarSelectManager.cpp:1432
		uint32_t luCarsRemaining;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionRequestStreamingAction>(/* parameters */);
}

// BrnCarSelectManager.cpp:609
void BrnGameState::CarSelectManager::UpdateRequestCarChangeState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:611
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCarSelectManager.cpp:642
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:646
		CarSelectionChangedAction lCarSelectionChangedAction;

		BrnTrigger::SpawnLocation::GetType(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedAction>(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:324
void BrnGameState::CarSelectManager::StartCarSelectState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:354
		CarSelectReadyAction lReadyAction;

		// BrnCarSelectManager.cpp:359
		CarSelectModificationScreen lModScreenAction;

	}
	{
		// BrnCarSelectManager.cpp:326
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectReadyAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:446
void BrnGameState::CarSelectManager::StartUnlockState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:448
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:292
void BrnGameState::CarSelectManager::EndTransitionInState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:299
		CarSelectTransitionInAction lTransitionAction;

	}
	{
		// BrnCarSelectManager.cpp:294
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectTransitionInAction>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:380
void BrnGameState::CarSelectManager::StartCarModificationState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:382
		DerivedCarArray lDerivedCarArray;

		// BrnCarSelectManager.cpp:393
		CarSelectModificationScreen lModScreenAction;

		DerivedCarArray(/* parameters */);
	}
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
	{
		// BrnCarSelectManager.cpp:384
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(/* parameters */);
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	{
		// BrnCarSelectManager.cpp:417
		CarSelectionRequestStreamingAction lRequestStreaming;

		// BrnCarSelectManager.cpp:418
		uint32_t luCarIndex;

		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionRequestStreamingAction>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnCarSelectManager.cpp:406
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:876
void BrnGameState::CarSelectManager::EndUnlockState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:897
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:902
		const CarData * lpCarData;

		// BrnCarSelectManager.cpp:905
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnCarSelectManager.cpp:917
		CarSelectionChangedAction lCarSelectionChangedAction;

		// BrnCarSelectManager.cpp:928
		CarSelectionChangedDropInAction lCarSelectDropInAction;

		// BrnCarSelectManager.cpp:941
		CarUnlockEndAction lCarUnlockEndAction;

	}
	{
		// BrnCarSelectManager.cpp:878
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedAction>(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedDropInAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarUnlockEndAction>(/* parameters */);
}

// BrnCarSelectManager.cpp:754
void BrnGameState::CarSelectManager::UpdateUnlockState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:756
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCarSelectManager.cpp:776
		const CarData * lpUnlockCarData;

		// BrnCarSelectManager.cpp:780
		NewCarUnlockedAction lNewCarUnlockedAction;

		// BrnCarSelectManager.cpp:823
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:826
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnCarSelectManager.cpp:827
		BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType leResetCarSelectType;

		// BrnCarSelectManager.cpp:852
		CarUnlockAction lCarUnlockAction;

		AddGameAction<BrnGameState::GameStateModuleIO::NewCarUnlockedAction>(/* parameters */);
		GameStateModule::SetCarUnlockAlreadyShown(/* parameters */);
		BrnProgression::CarData::GetId(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
		GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CarUnlockAction>(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:1277
void BrnGameState::CarSelectManager::SpawnInStartCar(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1280
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:1285
		const CarData * lpCarData;

		// BrnCarSelectManager.cpp:1288
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnCarSelectManager.cpp:1301
		CarSelectionChangedAction lCarSelectionChangedAction;

		// BrnCarSelectManager.cpp:1312
		CarSelectionChangedDropInAction lCarSelectDropInAction;

	}
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedAction>(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedDropInAction>(/* parameters */);
}

// BrnCarSelectManager.cpp:249
void BrnGameState::CarSelectManager::StartTransitionInState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:275
		CarSelectTransitionInAction lTransitionAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectTransitionInAction>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnCarSelectManager.cpp:251
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:1469
void BrnGameState::CarSelectManager::TeleportCurrentVehicle(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1472
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:1476
		const CarData * lpCarData;

		// BrnCarSelectManager.cpp:1480
		BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType leCarSelectType;

		// BrnCarSelectManager.cpp:1491
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnCarSelectManager.cpp:1504
		CarSelectionChangedDropInAction lCarSelectDropInAction;

	}
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedDropInAction>(/* parameters */);
}

// BrnCarSelectManager.cpp:676
void BrnGameState::CarSelectManager::UpdateChangeCarState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:678
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameStateModule::GetCurrentCarId(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnCarSelectManager.cpp:736
		CarSelectionDropInCompleteAction lCarSelectDropInCompleteAction;

		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionDropInCompleteAction>(/* parameters */);
	}
	{
		// BrnCarSelectManager.cpp:699
		CarSelectionChangedDropInAction lCarSelectDropInAction;

		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedDropInAction>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnCarSelectManager.cpp:1581
void BrnGameState::CarSelectManager::EnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *  lpActionQueue, CgsID  lJunkyardId, CgsID  lCarModelId, CgsID  lWheelId, BrnGameState::GameStateModuleIO::EPlayerScoringIndex  leScoringIndex, CarSelectionChangedAction *  lpCarSelectChangedAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1588
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:1592
		ResetPlayerCarAction lResetPlayerCarAction;

	}
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetPlayerScoringIndex(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
	BrnTrigger::SpawnLocation::GetType(/* parameters */);
}

// BrnCarSelectManager.cpp:194
void BrnGameState::CarSelectManager::EnterJunkyard(InputBuffer::GameActionQueue *  lpActionQueue, CgsID  lJunkyardId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:212
		JunkYardDriveThruAction lJunkYardAction;

		// BrnCarSelectManager.cpp:217
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnCarSelectManager.cpp:223
		AllowBoostEarningAction lAllowBoostEarningAction;

		// BrnCarSelectManager.cpp:228
		StopBoostingAction lStopBoostingAction;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::JunkYardDriveThruAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::AllowBoostEarningAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::StopBoostingAction>(/* parameters */);
	{
		// BrnCarSelectManager.cpp:196
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:956
void BrnGameState::CarSelectManager::UpdateExitState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:973
		CarSelectModificationScreen lModScreenAction;

		// BrnCarSelectManager.cpp:983
		AllowBoostEarningAction lAllowBoostEarningAction;

		// BrnCarSelectManager.cpp:987
		const SpawnLocation * lpSpawnLocation;

		// BrnCarSelectManager.cpp:991
		CarSelectExitAction lCarSelectExitAction;

		// BrnCarSelectManager.cpp:997
		JunkYardDriveThruAction lJunkYardAction;

		// BrnCarSelectManager.cpp:1002
		const CarData * lpCarData;

		// BrnCarSelectManager.cpp:1007
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnCarSelectManager.cpp:1019
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnCarSelectManager.cpp:1026
		RequestGameTrainingAction lTrainingAction;

		// BrnCarSelectManager.cpp:1047
		RequestAutoSaveAction lAutosaveAction;

	}
	{
		// BrnCarSelectManager.cpp:958
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::AllowBoostEarningAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectExitAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::JunkYardDriveThruAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	BrnProgression::ProgressionManager::SetDriveThrusDirtyFlag(/* parameters */);
	GameStateModule::IsOnlineGameMode(/* parameters */);
	BrnProgression::ProgressionManager::RequestUpdateRivals(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCarSelectManager.cpp:531
void BrnGameState::CarSelectManager::ForceExitJunkyard(InputBuffer::GameActionQueue *  lpActionQueue, bool  lbToOnlineEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:544
		CarSelectAbortAction lAbortAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectAbortAction>(/* parameters */);
}

// BrnCarSelectManager.cpp:64
void BrnGameState::CarSelectManager::Update(InputBuffer::GameActionQueue *  lpActionQueue, const ControllerInput *  lpControllerInput, float32_t  lfGameTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AddGameAction<BrnGameState::GameStateModuleIO::PausedInCarSelectAction>(/* parameters */);
	{
		// BrnCarSelectManager.cpp:97
		bool lbMinTransitionTimeElapsed;

	}
}

// BrnCarSelectManager.cpp:1626
void BrnGameState::CarSelectManager::ReallyEnterJunkyardAtStartOfGame(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectManager.cpp:1628
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnCarSelectManager.cpp:1629
		CarData * lpCarData;

		// BrnCarSelectManager.cpp:1640
		JunkYardDriveThruOnGameStartAction lGameAction;

		// BrnCarSelectManager.cpp:1661
		JunkYardDriveThruAction lJunkYardAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::JunkYardDriveThruOnGameStartAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::JunkYardDriveThruAction>(/* parameters */);
	BrnProgression::CarData::SetUnlockDeformationAmount(/* parameters */);
}

