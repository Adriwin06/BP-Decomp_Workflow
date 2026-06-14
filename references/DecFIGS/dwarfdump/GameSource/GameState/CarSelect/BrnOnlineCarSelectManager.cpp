// BrnOnlineCarSelectManager.cpp:745
void BrnGameState::OnlineCarSelectManager::SaveChosenLiveryForCar(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:747
		CgsID lBaseCarId;

		// BrnOnlineCarSelectManager.cpp:748
		const VehicleListEntry * lpVehicleListEntry;

		// BrnOnlineCarSelectManager.cpp:749
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

// BrnOnlineCarSelectManager.cpp:435
void BrnGameState::OnlineCarSelectManager::RequestChangeCar(InputBuffer::GameActionQueue *  lpActionQueue, const const CgsID &  lCardId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:450
		const BrnProgression::Profile * lpProfile;

		{
			// BrnOnlineCarSelectManager.cpp:461
			CgsID lBaseCarID;

		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnOnlineCarSelectManager.cpp:467
		const VehicleListEntry * lpVehicleListEntry;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
		BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

// BrnOnlineCarSelectManager.cpp:658
void BrnGameState::OnlineCarSelectManager::GetCurrentPlayerVehicle(const CgsID &  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:673
void BrnGameState::OnlineCarSelectManager::GetProfileCarData(const CgsID &  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:678
		Profile * lpProfile;

		// BrnOnlineCarSelectManager.cpp:679
		const CarData * lpCarData;

	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:725
void BrnGameState::OnlineCarSelectManager::UpdateCarColour(CgsID  lCarId, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:727
		CarSelectChangeColourAction lChangeCarColourAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectChangeColourAction>(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:699
void BrnGameState::OnlineCarSelectManager::SendOnlineChangeCarAction(InputBuffer::GameActionQueue *  lpActionQueue, bool  lbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:701
		CarSelectOnlineSelectCarAction lSelectCarAction;

		// BrnOnlineCarSelectManager.cpp:702
		uint32_t lu32ColourIndex;

		// BrnOnlineCarSelectManager.cpp:703
		uint32_t lu32PaletteIndex;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineSelectCarAction>(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:625
void BrnGameState::OnlineCarSelectManager::SpawnInStartCar(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:628
		ResetPlayerCarAction lResetPlayerCarAction;

		// BrnOnlineCarSelectManager.cpp:643
		CarSelectionChangedOnlineAction lCarSelectOnlineAction;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetKeepResetSection(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedOnlineAction>(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:373
void BrnGameState::OnlineCarSelectManager::StartWaitForOnline(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineEndAction>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:129
void BrnGameState::OnlineCarSelectManager::SubmitFinalCarSelection(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:526
void BrnGameState::OnlineCarSelectManager::UpdateChangeCarState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:528
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnOnlineCarSelectManager.cpp:535
		CarSelectionChangedOnlineAction lCarSelectOnlineAction;

		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedOnlineAction>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:112
void BrnGameState::OnlineCarSelectManager::StreamingFinished(CgsID  lActiveCarZeroId, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnOnlineCarSelectManager.cpp:259
void BrnGameState::OnlineCarSelectManager::StartCarSelectState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:292
		CarSelectReadyAction lReadyAction;

		// BrnOnlineCarSelectManager.cpp:297
		CarSelectModificationScreen lModScreenAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectReadyAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnOnlineCarSelectManager.cpp:263
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnOnlineCarSelectManager.cpp:313
void BrnGameState::OnlineCarSelectManager::StartCarModificationState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:328
		CarSelectModificationScreen lModScreenAction;

		// BrnOnlineCarSelectManager.cpp:334
		DerivedCarArray lDerivedCarArray;

	}
	{
		// BrnOnlineCarSelectManager.cpp:317
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(/* parameters */);
	DerivedCarArray(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	{
		// BrnOnlineCarSelectManager.cpp:344
		CarSelectionRequestStreamingAction lRequestStreaming;

		// BrnOnlineCarSelectManager.cpp:345
		uint32_t luCarIndex;

		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionRequestStreamingAction>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnOnlineCarSelectManager.cpp:336
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnOnlineCarSelectManager.cpp:580
void BrnGameState::OnlineCarSelectManager::TeleportCurrentVehicle(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:582
		float32_t lfDeformationAmount;

		// BrnOnlineCarSelectManager.cpp:585
		const CarData * lpCarData;

		// BrnOnlineCarSelectManager.cpp:601
		ResetPlayerCarAction lResetPlayerCarAction;

	}
	BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::Construct(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarData(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformationResetType(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetDeformAmount(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectType(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetKeepResetSection(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetInCarSelect(/* parameters */);
	GameStateModuleIO::ResetPlayerCarAction::SetCarSelectDontStreamAudio(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:494
void BrnGameState::OnlineCarSelectManager::UpdateRequestCarChangeState(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:496
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:49
void BrnGameState::OnlineCarSelectManager::Update(InputBuffer::GameActionQueue *  lpActionQueue, const ControllerInput *  lpControllerInput, float32_t  lfFrameDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:58
		CarSelectOnlineTimeLeftAction lTimeLeftAction;

		// BrnOnlineCarSelectManager.cpp:98
		CarSelectOnlineCarIsShowable lCarSelectOnlineIsShowable;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineTimeLeftAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineCarIsShowable>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:150
void BrnGameState::OnlineCarSelectManager::EnterOnlineCarSelect(InputBuffer::GameActionQueue *  lpActionQueue, const rw::math::vpu::Vector3  lPlayerPosition, const rw::math::vpu::Vector3  lPlayerDirection, int32_t  liVehicleClassLimit, bool  lbHostChoiceAndNotHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:152
		uint32_t luCar;

		// BrnOnlineCarSelectManager.cpp:153
		Array<CgsID,92u> lCars;

		// BrnOnlineCarSelectManager.cpp:154
		uint32_t luCurrentVehicleIndex;

		// BrnOnlineCarSelectManager.cpp:167
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnOnlineCarSelectManager.cpp:173
		AllowBoostEarningAction lAllowBoostEarningAction;

		// BrnOnlineCarSelectManager.cpp:178
		StopBoostingAction lStopBoostingAction;

	}
	CgsContainers::Array<CgsID,92u>::Array(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::AllowBoostEarningAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::StopBoostingAction>(/* parameters */);
	GameStateModule::IsShowtimeGameMode(/* parameters */);
	ModeManager::IsShowtimeGameMode(/* parameters */);
	CgsContainers::Array<CgsID,92u>::Construct(/* parameters */);
	CgsContainers::Array<CgsID,92u>::FindFirstInstanceOf(/* parameters */);
	{
		// BrnOnlineCarSelectManager.cpp:206
		const VehicleListEntry * lpCurrentVehicleData;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
		CgsContainers::Array<CgsID,92u>::FindFirstInstanceOf(/* parameters */);
		{
			// BrnOnlineCarSelectManager.cpp:224
			const BrnProgression::Profile * lpProfile;

			CgsContainers::Array<CgsID,92u>::GetLength(/* parameters */);
			CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
			BrnResource::VehicleList::GetVehicleData(/* parameters */);
			BrnResource::VehicleList::GetVehicleData(/* parameters */);
			{
			}
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			BrnResource::VehicleList::GetVehicleData(/* parameters */);
			CgsContainers::Array<CgsID,92u>::operator[](/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::PlayerResetOnTrackAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnOnlineCarSelectManager.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnOnlineCarSelectManager.cpp:395
void BrnGameState::OnlineCarSelectManager::ExitOnlineCarSelect(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineCarSelectManager.cpp:406
		CarSelectModificationScreen lModScreenAction;

		// BrnOnlineCarSelectManager.cpp:412
		CarSelectExitAction lCarSelectExitAction;

		// BrnOnlineCarSelectManager.cpp:417
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::CarSelectExitAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
}

// BrnOnlineCarSelectManager.cpp:27
