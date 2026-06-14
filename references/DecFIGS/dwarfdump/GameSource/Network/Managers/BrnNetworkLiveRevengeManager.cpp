// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkLiveRevengeManager.cpp:38
	const int32_t KI_INVALID_RACE_CAR_INDEX_TO_REVENGE_TABLE = 4294967295;

}

// BrnNetworkLiveRevengeManager.cpp:887
void BrnNetwork::LiveRevengeManager::ResetRevengeTableMappings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:889
		int32_t liIndex;

	}
}

// BrnNetworkLiveRevengeManager.cpp:1118
void BrnNetwork::LiveRevengeManager::FindMappingEntry(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1120
		int32_t liIndex;

	}
}

// BrnNetworkLiveRevengeManager.cpp:612
void BrnNetwork::LiveRevengeManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeManager.cpp:1608
void BrnNetwork::LiveRevengeManager::GetRivalTopIndex(int32_t  liTableIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1610
		int32_t liRivalIndex;

	}
}

// BrnNetworkLiveRevengeManager.cpp:1643
void BrnNetwork::LiveRevengeManager::ClearTopRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1645
		int32_t liRivalIndex;

		CgsContainers::FastBitArray<10>::UnSetAll(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:175
void BrnNetwork::LiveRevengeManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeManager.cpp:135
void BrnNetwork::LiveRevengeManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	LiveRevengeProfile::Clear(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1582
void BrnNetwork::LiveRevengeManager::_SortTopRivals(const void *  lpRival1, const void *  lpRival2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1584
		const BrnNetwork::LiveRevengeManager::LiveRevengeQSortData * lpRivalDetails1;

		// BrnNetworkLiveRevengeManager.cpp:1585
		const BrnNetwork::LiveRevengeManager::LiveRevengeQSortData * lpRivalDetails2;

	}
}

// BrnNetworkLiveRevengeManager.cpp:1103
void BrnNetwork::LiveRevengeManager::NetworkPlayerIDToActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:95
void BrnNetwork::LiveRevengeManager::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	LiveRevengeProfile::Clear(/* parameters */);
	CgsMemory::HeapMalloc::GetAllocator(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:331
void BrnNetwork::LiveRevengeManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::IsDoingFreeBurnLobby(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1276
void BrnNetwork::LiveRevengeManager::GetNumberOfRelationships() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1278
		BrnNetwork::LiveRevengeProfile * lpProfile;

		GetProfile(/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:57
void BrnNetwork::LiveRevengeManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1434
void BrnNetwork::LiveRevengeManager::GetUniqueIDByName(PlayerName *  lpPlayerName, LiveRevengeRelationship::UniquePlayerID *  lpUniqueID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1436
		PlayerParams lPlayerParams;

		PlayerParams::PlayerParams(/* parameters */);
		CgsNetwork::UniquePlayerIDPS3::Construct(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1453
void BrnNetwork::LiveRevengeManager::GetUniqueIDByPlayerID(AggressiveMoveData::NetworkPlayerID  lPlayerID, LiveRevengeRelationship::UniquePlayerID *  lpUniqueID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1455
		PlayerParams lPlayerParams;

		PlayerParams::PlayerParams(/* parameters */);
		CgsNetwork::UniquePlayerIDPS3::Construct(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:349
void BrnNetwork::LiveRevengeManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:351
		int32_t liMappingIndex;

	}
	{
		// BrnNetworkLiveRevengeManager.cpp:362
		LiveRevengeMappingEntry * lpEntry;

		{
			// BrnNetworkLiveRevengeManager.cpp:365
			BrnNetwork::LiveRevengeProfile * lpProfile;

			GetProfile(/* parameters */);
			CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		}
	}
	AutoSaveLiveRevengeProfile(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:512
void BrnNetwork::LiveRevengeManager::FindPlayerInTableByName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:514
		int32_t liRivalIndex;

		// BrnNetworkLiveRevengeManager.cpp:515
		int32_t liNumberOfRivals;

		// BrnNetworkLiveRevengeManager.cpp:516
		BrnNetwork::LiveRevengeProfile * lpProfile;

		GetProfile(/* parameters */);
	}
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsNetwork::UsernameCompare(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1243
void BrnNetwork::LiveRevengeManager::GetNumberOfRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1245
		int32_t liRivalCount;

		// BrnNetworkLiveRevengeManager.cpp:1246
		int32_t liRivalIndex;

		// BrnNetworkLiveRevengeManager.cpp:1247
		int32_t liNumberOfRivals;

		// BrnNetworkLiveRevengeManager.cpp:1248
		BrnNetwork::LiveRevengeProfile * lpProfile;

		GetProfile(/* parameters */);
	}
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1303
void BrnNetwork::LiveRevengeManager::AddRelationshipToDebugMenu(int32_t  liLiveRevengeTableIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1316
void BrnNetwork::LiveRevengeManager::RemoveRelationshipFromDebugMenu(int32_t  liLiveRevengeTableIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:547
void BrnNetwork::LiveRevengeManager::AddNewTableEntry(const LiveRevengeRelationship::UniquePlayerID *  lpUniqueID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:549
		LiveRevengeRelationship lRelationship;

		// BrnNetworkLiveRevengeManager.cpp:550
		BrnNetwork::LiveRevengeProfile * lpProfile;

		GetProfile(/* parameters */);
	}
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::Append(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	{
		// BrnNetworkLiveRevengeManager.cpp:571
		DateAndTime lOldestDateAndTime;

		// BrnNetworkLiveRevengeManager.cpp:572
		int32_t liOldestIndex;

		// BrnNetworkLiveRevengeManager.cpp:573
		int32_t liRivalIndex;

		// BrnNetworkLiveRevengeManager.cpp:574
		int32_t liNumberOfRivals;

		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
		{
		}
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		{
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
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1142
void BrnNetwork::LiveRevengeManager::AddMappingEntry(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID, int32_t  liRevengeTableIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[16] __FUNCTION__;

	{
		// BrnNetworkLiveRevengeManager.cpp:1144
		LiveRevengeMappingEntry * lpEntry;

		// BrnNetworkLiveRevengeManager.cpp:1145
		int32_t liTopRivalIndex;

	}
	CgsContainers::FastBitArray<10>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:1152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1179
void BrnNetwork::LiveRevengeManager::RemoveMappingEntry(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[19] __FUNCTION__;

	{
		// BrnNetworkLiveRevengeManager.cpp:1181
		LiveRevengeMappingEntry * lpEntry;

	}
	{
		// BrnNetworkLiveRevengeManager.cpp:1189
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:485
void BrnNetwork::LiveRevengeManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:487
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkLiveRevengeManager.cpp:1211
void BrnNetwork::LiveRevengeManager::GetNonConstRevengeRelationship(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[31] __FUNCTION__;

	{
		// BrnNetworkLiveRevengeManager.cpp:1213
		const LiveRevengeMappingEntry * lpEntry;

		// BrnNetworkLiveRevengeManager.cpp:1214
		BrnNetwork::LiveRevengeProfile * lpProfile;

	}
	GetProfile(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:1222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1762
void BrnNetwork::LiveRevengeManager::UpdateMarkedManInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1764
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkLiveRevengeManager.cpp:1765
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:1776
		BrnNetwork::PlayerMenuData * lpPlayerMenuData;

		{
			// BrnNetworkLiveRevengeManager.cpp:1783
			LiveRevengeRelationship * lpRelationship;

		}
	}
	AutoSaveLiveRevengeProfile(/* parameters */);
	AutoSaveLiveRevengeProfile(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1406
void BrnNetwork::LiveRevengeManager::RemotePlayerFinalised(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1409
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkLiveRevengeManager.cpp:1410
		BrnNetwork::LiveRevengeSyncMessage * lpLiveRevengeSyncMessage;

		// BrnNetworkLiveRevengeManager.cpp:1411
		const LiveRevengeRelationship * lpRevengeRelationship;

	}
	GetRevengeRelationship(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:799
void BrnNetwork::LiveRevengeManager::UpdatePaybacksData(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus  leDirtyTrickStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:801
		bool lbLocalPlayerWasPaybackVictim;

		// BrnNetworkLiveRevengeManager.cpp:802
		AggressiveMoveData::NetworkPlayerID lLocalPlayerNetworkID;

		// BrnNetworkLiveRevengeManager.cpp:803
		AggressiveMoveData::NetworkPlayerID lRivalPlayerID;

		// BrnNetworkLiveRevengeManager.cpp:804
		LiveRevengeRelationship * lpRelationship;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	AutoSaveLiveRevengeProfile(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:303
void BrnNetwork::LiveRevengeManager::ProcessGameDirtyTrickInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:305
		int32_t liIndex;

		// BrnNetworkLiveRevengeManager.cpp:306
		DirtyTrickEvent lDirtyTrickEvent;

		// BrnNetworkLiveRevengeManager.cpp:307
		const GameStateToNetworkInterface::DirtyTrickQueue * lpDirtyTrickEventQueue;

	}
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:283
void BrnNetwork::LiveRevengeManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetTakedownEventInputQueue(/* parameters */);
	Append<8>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:907
void BrnNetwork::LiveRevengeManager::DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer, EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:909
		BrnNetwork::NetworkToGuiLiveRevengeUpdate::LiveRevengeStatus leLiveRevengeStatus;

		// BrnNetworkLiveRevengeManager.cpp:910
		const LiveRevengeRelationship * lpRelationship;

		// BrnNetworkLiveRevengeManager.cpp:916
		EActiveRaceCarIndex leLocalActiveRaceCarIndex;

		// BrnNetworkLiveRevengeManager.cpp:917
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	GetRevengeRelationship(/* parameters */);
	LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
	LiveRevengeRelationship::GetCurrentScoreForLocalPlayer(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetNetworkToGuiInterface(/* parameters */);
	BrnNetworkModuleIO::NetworkToGuiInterface::AddLiveRevengeUpdate(/* parameters */);
	LiveRevengeRelationship::GetCurrentScoreForLocalPlayer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:992
void BrnNetwork::LiveRevengeManager::DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer, EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:994
		BrnNetwork::NetworkToGuiLiveRevengeUpdate::LiveRevengeStatus leLiveRevengeStatus;

		// BrnNetworkLiveRevengeManager.cpp:995
		const LiveRevengeRelationship * lpRelationship;

		// BrnNetworkLiveRevengeManager.cpp:1000
		EActiveRaceCarIndex leLocalActiveRaceCarIndex;

		// BrnNetworkLiveRevengeManager.cpp:1001
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	GetRevengeRelationship(/* parameters */);
	LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
	LiveRevengeRelationship::GetCurrentScoreForLocalPlayer(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetNetworkToGuiInterface(/* parameters */);
	BrnNetworkModuleIO::NetworkToGuiInterface::AddLiveRevengeUpdate(/* parameters */);
	LiveRevengeRelationship::GetCurrentScoreForRival(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:721
void BrnNetwork::LiveRevengeManager::UpdateLiveRevengeRelationShip(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, bool  lbMarkedManTakedown, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:723
		int32_t liNumberOfRivals;

		CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		CgsNetwork::PlayerManager::IsLocalPlayer(/* parameters */);
		CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		CgsNetwork::PlayerManager::IsLocalPlayer(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:733
		LiveRevengeRelationship * lpRelationship;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:756
		LiveRevengeRelationship * lpRelationship;

		AutoSaveLiveRevengeProfile(/* parameters */);
	}
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1079
void BrnNetwork::LiveRevengeManager::GetRelationshipStatus(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1081
		const LiveRevengeRelationship * lpRelationship;

		GetRevengeRelationship(/* parameters */);
		LiveRevengeRelationship::GetRelationshipStatus(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:1087
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1390
void BrnNetwork::LiveRevengeManager::_SyncMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[30] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1468
void BrnNetwork::LiveRevengeManager::UpdateTopRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1470
		BrnNetwork::LiveRevengeManager::LiveRevengeQSortData[250] laRivals;

		// BrnNetworkLiveRevengeManager.cpp:1471
		int32_t liRivalIndex;

		// BrnNetworkLiveRevengeManager.cpp:1472
		int32_t liTotalRivals;

		// BrnNetworkLiveRevengeManager.cpp:1473
		BrnNetwork::LiveRevengeProfile * lpProfile;

		GetProfile(/* parameters */);
	}
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::FastBitArray<10>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1507
void BrnNetwork::LiveRevengeManager::SendLiveRevengeRivalsToServer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1510
		Iterator mIterator;

		// BrnNetworkLiveRevengeManager.cpp:1511
		BrnNetwork::LiveRevengeProfile * lpProfile;

		// BrnNetworkSharedServerTypes.h:102
		typedef RivalDataT RivalDataT;

		// BrnNetworkLiveRevengeManager.cpp:1512
		RivalDataT[10] laRivals;

		// BrnNetworkLiveRevengeManager.cpp:1513
		int32_t[10] laiRivalIDs;

		// BrnNetworkLiveRevengeManager.cpp:1514
		int32_t liNumberOfChangeRecords;

		CgsContainers::FastBitArray<10>::Iterator::Iterator(/* parameters */);
	}
	GetProfile(/* parameters */);
	CgsContainers::FastBitArray<10>::Begin(/* parameters */);
	CgsContainers::FastBitArray<10>::Iterator::operator!=(/* parameters */);
	{
		// BrnNetworkLiveRevengeManager.cpp:1532
		LiveRevengeRelationship * lpRelationship;

		// BrnNetworkLiveRevengeManager.cpp:1533
		int32_t liRivalIndex;

		CgsContainers::FastBitArray<10>::Iterator::GetIndex(/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<10>::UnSetAll(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1631
void BrnNetwork::LiveRevengeManager::OnGameFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeManager.cpp:386
void BrnNetwork::LiveRevengeManager::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeManager.cpp:1688
void BrnNetwork::LiveRevengeManager::HandleRoundResults(const OnlineRoundResults *  lpResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1690
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkLiveRevengeManager.cpp:1691
		int32_t liMappingIndex;

		// BrnNetworkLiveRevengeManager.cpp:1692
		int32_t liLocalPlayersPosition;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnGameState::GameStateModuleIO::OnlineRoundResults::GetPosition(/* parameters */);
	{
		// BrnNetworkLiveRevengeManager.cpp:1710
		int32_t liRivalPosition;

		// BrnNetworkLiveRevengeManager.cpp:1711
		AggressiveMoveData::NetworkPlayerID lRivalPlayerID;

		// BrnNetworkLiveRevengeManager.cpp:1712
		LiveRevengeRelationship * lpLiveRevengeRelationship;

		BrnGameState::GameStateModuleIO::OnlineRoundResults::GetPosition(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnNetworkLiveRevengeManager.cpp:1836
void BrnNetwork::LiveRevengeManager::IsTableValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1838
		uint32_t luTableIndex;

		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:400
void BrnNetwork::LiveRevengeManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:402
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		{
			// BrnNetworkLiveRevengeManager.cpp:413
			PlayerName lPlayerName;

			// BrnNetworkLiveRevengeManager.cpp:414
			int32_t liPlayerIndexInTable;

			// BrnNetworkLiveRevengeManager.cpp:415
			LiveRevengeMappingEntry * lpEntry;

			CgsNetwork::NetworkPlayer::GetName(/* parameters */);
			CgsNetwork::PlayerName::Construct(/* parameters */);
		}
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
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:433
		LiveRevengeRelationship::UniquePlayerID lUniquePlayerID;

	}
}

// BrnNetworkLiveRevengeManager.cpp:1663
void BrnNetwork::LiveRevengeManager::HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *  lpLiveRevengeProfile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1669
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:1352
void BrnNetwork::LiveRevengeManager::SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lRemotePlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1355
		LiveRevengeRelationship lRemoteRelationship;

		// BrnNetworkLiveRevengeManager.cpp:1356
		LiveRevengeRelationship * lpLocalRelationship;

	}
	AutoSaveLiveRevengeProfile(/* parameters */);
}

// BrnNetworkLiveRevengeManager.cpp:1332
void BrnNetwork::LiveRevengeManager::_SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:1334
		LiveRevengeManager * lpManager;

		// BrnNetworkLiveRevengeManager.cpp:1335
		BrnNetwork::LiveRevengeSyncMessage * lpLiveRevengeMessage;

	}
}

// BrnNetworkLiveRevengeManager.cpp:626
void BrnNetwork::LiveRevengeManager::ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:628
		BrnGameState::GameStateModuleIO::EGameModeType leCurrentGameModeType;

		// BrnNetworkLiveRevengeManager.cpp:629
		const GameStateToNetworkInterface * lpGameStateToNetworkInterface;

		// BrnNetworkLiveRevengeManager.cpp:630
		int32_t liOldNumberOfRivals;

		// BrnNetworkLiveRevengeManager.cpp:631
		int32_t liNewNumberOfRivals;

		// BrnNetworkLiveRevengeManager.cpp:632
		int32_t liNumberOfTakedowns;

	}
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetworkModuleIO::GameStateToNetworkInterface::GetCurrentGameMode(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	{
		// BrnNetworkLiveRevengeManager.cpp:702
		NetworkOutRivalCount lRivalCountMessage;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRivalCount>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:660
		int32_t liEventCounter;

	}
	{
		// BrnNetworkLiveRevengeManager.cpp:664
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkLiveRevengeManager.cpp:665
		TakedownEvent lEvent;

		// BrnNetworkLiveRevengeManager.cpp:666
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnNetworkLiveRevengeManager.cpp:667
		EActiveRaceCarIndex leAggressorActiveCarIndex;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		BrnNetworkModuleIO::GameStateToNetworkInterface::GetPlayerInFreeburnChallenge(/* parameters */);
		BrnNetworkModuleIO::GameStateToNetworkInterface::GetPlayerInFreeburnChallenge(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeManager.cpp:205
void BrnNetwork::LiveRevengeManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.cpp:207
		NetworkOutLiveRevengeProfileData lLiveRevengeProfileEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLiveRevengeProfileData>(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:267
		NetworkOutAutosaveProfile lAutosaveEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAutosaveProfile>(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeManager.cpp:253
		int32_t liNumberOfMarksRecieved;

		// BrnNetworkLiveRevengeManager.cpp:254
		int32_t liNumberOfPlayersInGame;

		MarkedManManager::GetNumberOfPlayersFinishedMarking(/* parameters */);
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
		// BrnNetworkLiveRevengeManager.cpp:264
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

