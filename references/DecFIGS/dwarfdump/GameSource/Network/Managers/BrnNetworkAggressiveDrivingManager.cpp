// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.cpp:33
	const int32_t KI_MAX_NUMBER_OF_AGGRESSIVE_MOVE_SENDS = 3;

	// BrnNetworkAggressiveDrivingManager.cpp:36
	const float32_t KF_BATTLING_IMPACT_DELAY;

	// BrnNetworkAggressiveDrivingManager.cpp:37
	const int32_t KI_CONSECUTIVE_IMPACTS_FOR_BATTLING = 5;

}

// BrnNetworkAggressiveDrivingManager.cpp:61
void BrnNetwork::NetworkAggressiveDrivingManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:63
		int32_t liIndex;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp
void BrnNetwork::NetworkAggressiveDrivingManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:95
		int32_t liIndex;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp:124
void BrnNetwork::NetworkAggressiveDrivingManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkAggressiveDrivingManager.cpp:141
void BrnNetwork::NetworkAggressiveDrivingManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkAggressiveDrivingManager.cpp:155
void BrnNetwork::NetworkAggressiveDrivingManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkAggressiveDrivingManager.cpp:173
void BrnNetwork::NetworkAggressiveDrivingManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkAggressiveDrivingManager.cpp:434
void BrnNetwork::NetworkAggressiveDrivingManager::CompareMove(AggressiveMoveData *  lpMove0, AggressiveMoveData *  lpMove1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkAggressiveDrivingManager.cpp:1169
void BrnNetwork::NetworkAggressiveDrivingManager::GetAggressiveDrivingDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:1171
		BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * lpEntry;

		// BrnNetworkAggressiveDrivingManager.cpp:1172
		int32_t liIndex;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp:887
void BrnNetwork::NetworkAggressiveDrivingManager::RemoveAggressiveMove(int32_t  liPlayerIndex, int32_t  liMoveIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:889
		AggressiveMoveData * lpMove;

		// BrnNetworkAggressiveDrivingManager.cpp:890
		int32_t liEntriesToMove;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp:1052
void BrnNetwork::NetworkAggressiveDrivingManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:1054
		BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * lpDataEntry;

		// BrnNetworkAggressiveDrivingManager.cpp:1055
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp:1089
void BrnNetwork::NetworkAggressiveDrivingManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:1091
		BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * lpEntry;

		// BrnNetworkAggressiveDrivingManager.cpp:1092
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkAggressiveDrivingManager.cpp:1093
		AggressiveMoveData * lpMove;

		// BrnNetworkAggressiveDrivingManager.cpp:1094
		int32_t liMoveIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:1095
		int32_t liIndex;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp:1141
void BrnNetwork::NetworkAggressiveDrivingManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:1143
		int32_t liIndex;

	}
}

// BrnNetworkAggressiveDrivingManager.cpp:655
void BrnNetwork::NetworkAggressiveDrivingManager::UpdateMarkedPlayersOnMarkedManTakeDown(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:657
		PlayerParams lPlayerParams;

		// BrnNetworkAggressiveDrivingManager.cpp:659
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:660
		bool lbResetMarkedMan;

		// BrnNetworkAggressiveDrivingManager.cpp:661
		BrnNetwork::PlayerMenuData * lpPlayerMenuData;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
}

// BrnNetworkAggressiveDrivingManager.cpp:469
void BrnNetwork::NetworkAggressiveDrivingManager::AddNewMove(BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData *  lpData, AggressiveMoveData *  lpNewMove) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:471
		int32_t liMoveIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:472
		int32_t liBestIndex;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkAggressiveDrivingManager.cpp:495
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkAggressiveDrivingManager.cpp:808
void BrnNetwork::NetworkAggressiveDrivingManager::UpdateOnlineBattling(const ImpactEvent *  lpImpactEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:810
		int32_t liIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:811
		EActiveRaceCarIndex leImpactAggressorActiveRaceCarIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:812
		EActiveRaceCarIndex leImpactVictimActiveRaceCarIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:813
		AggressiveMoveData::NetworkPlayerID lImpactAggressorNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:814
		AggressiveMoveData::NetworkPlayerID lImpactVictimNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:815
		BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * lpEntry;

		// BrnNetworkAggressiveDrivingManager.cpp:816
		AggressiveMoveData lNewMove;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	}
	AggressiveMoveData::Clear(/* parameters */);
}

// BrnNetworkAggressiveDrivingManager.cpp:697
void BrnNetwork::NetworkAggressiveDrivingManager::AddImpactEvent(ImpactEvent *  lpImpactEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:699
		BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * lpEntry;

		// BrnNetworkAggressiveDrivingManager.cpp:700
		EActiveRaceCarIndex leRemoteActiveRaceCarIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:701
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:702
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:703
		EActiveRaceCarIndex leLocalActiveRaceCarIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:704
		AggressiveMoveData::NetworkPlayerID lAggressorNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:705
		AggressiveMoveData::NetworkPlayerID lVictimNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:706
		AggressiveMoveData lNewMove;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	AggressiveMoveData::Clear(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkAggressiveDrivingManager.cpp:961
void BrnNetwork::NetworkAggressiveDrivingManager::HandleSendingMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:963
		int32_t liPlayerIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:964
		int32_t liMoveIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:965
		int32_t liMovesToSendToPlayer;

		// BrnNetworkAggressiveDrivingManager.cpp:966
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:967
		AggressiveMoveData * lpMove;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkAggressiveDrivingManager.cpp:521
void BrnNetwork::NetworkAggressiveDrivingManager::AddTakedownEvent(const TakedownEvent *  lpTakedownEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:523
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:524
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:525
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:526
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:527
		AggressiveMoveData::NetworkPlayerID lAggressorNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:528
		AggressiveMoveData::NetworkPlayerID lVictimNetworkPlayerID;

		// BrnNetworkAggressiveDrivingManager.cpp:529
		int32_t liIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:530
		int32_t liLocalPlayerLiveRevengeScore;

		// BrnNetworkAggressiveDrivingManager.cpp:531
		bool lbScoreSettled;

		// BrnNetworkAggressiveDrivingManager.cpp:532
		bool lbAggressor;

		// BrnNetworkAggressiveDrivingManager.cpp:533
		bool lbVictim;

		// BrnNetworkAggressiveDrivingManager.cpp:534
		BrnNetwork::NetworkAggressiveDrivingManager::AggressiveDrivingData * lpEntry;

		// BrnNetworkAggressiveDrivingManager.cpp:535
		const LiveRevengeRelationship * lpLiveRevengeRelationship;

		// BrnNetworkAggressiveDrivingManager.cpp:536
		int32_t liNumberOfNetworkPlayers;

		// BrnNetworkAggressiveDrivingManager.cpp:537
		AggressiveMoveData lNewMove;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	AggressiveMoveData::Clear(/* parameters */);
	{
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
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	LiveRevengeManager::GetRevengeRelationship(/* parameters */);
	LiveRevengeRelationship::GetCurrentScoreForLocalPlayer(/* parameters */);
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

// BrnNetworkAggressiveDrivingManager.cpp:920
void BrnNetwork::NetworkAggressiveDrivingManager::ProcessInputQueue(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:922
		int32_t liQueueIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:923
		ImpactEvent lImpactEvent;

		// BrnNetworkAggressiveDrivingManager.cpp:928
		const VehicleInputInterface::ImpactEventQueue * lpImpactEventQueue;

		// BrnNetworkAggressiveDrivingManager.cpp:942
		const InputBuffer::TakedownEventQueue * lpTakedownEventQueue;

	}
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetVehicleOutputInterface(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetEvent(/* parameters */);
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetTakedownEventInputQueue(/* parameters */);
	{
		// BrnNetworkAggressiveDrivingManager.cpp:947
		const TakedownEvent lTakedownEvent;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
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

// BrnNetworkAggressiveDrivingManager.cpp:213
void BrnNetwork::NetworkAggressiveDrivingManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkAggressiveDrivingManager.cpp:235
void BrnNetwork::NetworkAggressiveDrivingManager::HandleReceivingMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkAggressiveDrivingManager.cpp:237
		int32_t liIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:238
		int32_t liMoveIndex;

		// BrnNetworkAggressiveDrivingManager.cpp:239
		int32_t liNumberOfAggressiveMoves;

		// BrnNetworkAggressiveDrivingManager.cpp:240
		AggressiveMoveData[10] laAggressiveMoveDataArray;

		// BrnNetworkAggressiveDrivingManager.cpp:245
		VehicleInputInterface * lpVehicleInputInterface;

		// BrnNetworkAggressiveDrivingManager.cpp:246
		InputBuffer::TakedownEventQueue * lpTakedownOutputEventQueue;

		BrnNetworkModuleIO::OutputBuffer::GetVehicleInputInterface(/* parameters */);
		BrnNetworkModuleIO::OutputBuffer::GetTakedownEventOutputQueue(/* parameters */);
		BrnPhysics::Vehicle::VehicleInputInterface::ClearImpactEventQueue(/* parameters */);
		{
			// BrnNetworkAggressiveDrivingManager.cpp:262
			ImpactEvent lEvent;

			// BrnNetworkAggressiveDrivingManager.cpp:263
			EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

			// BrnNetworkAggressiveDrivingManager.cpp:264
			EActiveRaceCarIndex leVictimActiveRaceCarIndex;

			BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
			BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
			{
				// BrnNetworkAggressiveDrivingManager.cpp:281
				TakedownEvent lTakedownEvent;

				// BrnNetworkAggressiveDrivingManager.cpp:317
				bool lbVictimAlreadyPartOfEventQueue;

				CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::AddEvent(/* parameters */);
			}
			BrnPhysics::Vehicle::VehicleInputInterface::AddImpactEvent(/* parameters */);
		}
	}
	{
		// BrnNetworkAggressiveDrivingManager.cpp:389
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkAggressiveDrivingManager.cpp:411
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkAggressiveDrivingManager.cpp:319
		int32_t liEventIndex;

		{
			// BrnNetworkAggressiveDrivingManager.cpp:321
			TakedownEvent lTakedownEvent;

			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		}
	}
	{
		// BrnNetworkAggressiveDrivingManager.cpp:343
		GuiNetworkPlayerBattlingEvent lNetworkPlayersBattlingEvent;

		// BrnNetworkAggressiveDrivingManager.cpp:344
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModuleIO::OutputBuffer::GetGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiNetworkPlayerBattlingEvent>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkAggressiveDrivingManager.cpp:189
void BrnNetwork::NetworkAggressiveDrivingManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

