// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnBurnoutSkillzManager.cpp:28
	const float32_t KF_MAX_TIME_ALLOWED_BETWEEN_AIR;

}

// BrnBurnoutSkillzManager.cpp:131
void BrnGameState::BurnoutSkillzManager::ClearAllCurrentSkillzEarningData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBurnoutSkillzManager.cpp:1320
void BrnGameState::BurnoutSkillzManager::OnModeEnd(bool  lbExitingFreeburnLobby) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBurnoutSkillzManager.cpp:451
void BrnGameState::BurnoutSkillzManager::BufferNewRoadScore(ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, Road::ChallengeIndex  lChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBurnoutSkillzManager.cpp:1154
void BrnGameState::BurnoutSkillzManager::SendUpdatePlayerSkillsEvent(EActiveRaceCarIndex  leActiveRaceCarIndex, bool  lbShowHudMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<8>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:511
void BrnGameState::BurnoutSkillzManager::SetNewSkillIfGreater(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType, BurnoutSkillzData *  lpSkillzData, EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex, float32_t  lfNewValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
	BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
	CgsContainers::FastBitArray<8>::SetBit(/* parameters */);
	BurnoutSkillzData::GetSkillAccuracy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:471
void BrnGameState::BurnoutSkillzManager::UpdateBoostChains(BurnoutSkillzData *  lpSkillzData, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:473
		const BoostOutputInfo * lpBoostInfo;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
}

// BrnBurnoutSkillzManager.cpp:776
void BrnGameState::BurnoutSkillzManager::SetRoadRuleHighScore(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, Road::ChallengeIndex  liIndex, ChallengeHighScoreEntry *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:778
		CarData * lpCarData;

		ScoringSystem::GetCarData(/* parameters */);
		GameStateModuleIO::operator++(/* parameters */);
		CarData::SetRoadRulesScores(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:744
void BrnGameState::BurnoutSkillzManager::GetRoadRuleHighScore(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, Road::ChallengeIndex  liIndex, ChallengeHighScoreEntry *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:751
		const CarData * lpCarData;

		ScoringSystem::GetCarData(/* parameters */);
		GameStateModuleIO::operator++(/* parameters */);
	}
	CarData::GetRoadRulesScores(/* parameters */);
}

// BrnBurnoutSkillzManager.cpp:1179
void BrnGameState::BurnoutSkillzManager::GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:1181
		const CarData * lpData;

	}
	ScoringSystem::GetCarData(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	CarData::GetActiveRaceCarIndex(/* parameters */);
}

// BrnBurnoutSkillzManager.cpp:804
void BrnGameState::BurnoutSkillzManager::ProcessGameEventInputQueuePostWorld(BurnoutSkillzData *  lpSkillzData, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, const GameEventQueue *  lpQueue, EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:806
		const CgsModule::Event * lpEvent;

		// BrnBurnoutSkillzManager.cpp:807
		int32_t liEventSize;

		// BrnBurnoutSkillzManager.cpp:808
		int32_t liEventType;

		// BrnBurnoutSkillzManager.cpp:809
		bool lbInAirReceived;

		// BrnBurnoutSkillzManager.cpp:810
		bool lbTrafficChainRecieved;

	}
	CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:873
		const OncomingCompletedEvent * lpOncomingEvent;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:909
		const InAirEvent * lpInAirEvent;

	}
	{
		// BrnBurnoutSkillzManager.cpp:936
		const PowerParkResultEvent * lpPowerParkEvent;

	}
	{
		// BrnBurnoutSkillzManager.cpp:922
		const TrafficCheckingChainEvent * lpTrafficCheckEvent;

	}
	{
		// BrnBurnoutSkillzManager.cpp:831
		const CompletedStuntEvent * lpCompletedStuntEvent;

	}
	{
		// BrnBurnoutSkillzManager.cpp:889
		const NearMissChainCompleteEvent * lpNearMissEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:309
void BrnGameState::BurnoutSkillzManager::UpdatePostWorld(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:311
		BurnoutSkillzData * lpSkillzData;

		// BrnBurnoutSkillzManager.cpp:312
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveCarInterface;

	}
	GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetBurnoutSkillzData(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
	ScoringSystem::GetBurnoutSkillzData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:47
void BrnGameState::BurnoutSkillzManager::Construct(BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:49
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	ModeManager::GetScoringSystem(/* parameters */);
	CgsContainers::FastBitArray<8>::Construct(/* parameters */);
	operator++(/* parameters */);
}

// BrnBurnoutSkillzManager.cpp:1201
void BrnGameState::BurnoutSkillzManager::OnEnterRoad(SpanBase::RoadIndex  liRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:1203
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsContainers::FastBitArray<8>::SetAll(/* parameters */);
	operator++(/* parameters */);
}

// BrnBurnoutSkillzManager.cpp:1225
void BrnGameState::BurnoutSkillzManager::UpdateBurnoutSkillzTotals(EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:1227
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnBurnoutSkillzManager.cpp:1228
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillType;

		// BrnBurnoutSkillzManager.cpp:1229
		float32_t[9] lafNewRecord;

		// BrnBurnoutSkillzManager.cpp:1230
		EActiveRaceCarIndex[9] laeRecordHolder;

		// BrnBurnoutSkillzManager.cpp:1231
		float32_t[8] lafNewTotals;

		// BrnBurnoutSkillzManager.cpp:1232
		BurnoutSkillzData *[8] lapBurnoutSkillzData;

		// BrnBurnoutSkillzManager.cpp:1233
		bool[9] labRecordShared;

		operator++(/* parameters */);
		ScoringSystem::GetBurnoutSkillzData(/* parameters */);
		GameStateModuleIO::operator++(/* parameters */);
		operator++(/* parameters */);
		CarData::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::GetBurnoutSkillzData(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:1257
			float32_t lfSkillValue;

			BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
		}
		operator++(/* parameters */);
		operator++(/* parameters */);
		operator++(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:1293
			float32_t lfOldTotal;

		}
		operator++(/* parameters */);
	}
	BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
	CgsContainers::FastBitArray<8>::SetBit(/* parameters */);
	ScoringSystem::GetNumberOfNetworkPlayers(/* parameters */);
}

// BrnBurnoutSkillzManager.cpp:622
void BrnGameState::BurnoutSkillzManager::ProcessNetworkRoadRulePB(InputBuffer::GameActionQueue *  lpActionQueue, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *  lpPersonalBestEvent, EActiveRaceCarIndex  leLocalActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:624
		ChallengeHighScoreEntry lPersonalBestScore;

		// BrnBurnoutSkillzManager.cpp:625
		ChallengeHighScoreEntry lCurrentHighScoreEntry;

		// BrnBurnoutSkillzManager.cpp:626
		Road::ChallengeIndex lChallengeIndex;

		// BrnBurnoutSkillzManager.cpp:627
		EActiveRaceCarIndex leNetworkPlayerActiveRaceCarIndex;

		// BrnBurnoutSkillzManager.cpp:628
		BrnStreetData::ScoreType leScoreType;

	}
	{
		// BrnBurnoutSkillzManager.cpp:642
		PlayerName lNetworkPBPlayerName;

		// BrnBurnoutSkillzManager.cpp:643
		int32_t liCurrentHighScore;

		// BrnBurnoutSkillzManager.cpp:644
		int32_t liNetworkPBScore;

		// BrnBurnoutSkillzManager.cpp:645
		EActiveRaceCarIndex leCurrentHighScoreRaceCarIndex;

		{
			// BrnBurnoutSkillzManager.cpp:657
			EActiveRaceCarIndex leNewOwnerActiveRaceCarIndex;

			{
				// BrnBurnoutSkillzManager.cpp:663
				BurnoutRoadRulesSkillzAction lSkillzAction;

				StreetManager::GetRoad(/* parameters */);
			}
		}
	}
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::BurnoutRoadRulesSkillzAction>(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:682
		RequestGameTrainingAction lTrainingRequest;

		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:539
void BrnGameState::BurnoutSkillzManager::UpdateLobbyRoadRulesScores(const NetworkToGameStateInterface::RoadRulesReceivedQueue *  lpRoadRulesRecvQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:541
		int32_t liIndex;

	}
	{
		// BrnBurnoutSkillzManager.cpp:551
		int32_t liRecvScoreIndex;

		// BrnBurnoutSkillzManager.cpp:552
		const RoadRulesRecvData lRecvDataEvent;

		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetEvent(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:557
			ChallengeHighScoreEntry lCurrentHighScoreEntry;

			// BrnBurnoutSkillzManager.cpp:558
			ChallengeHighScoreEntry lNewHighScoreEntry;

			// BrnBurnoutSkillzManager.cpp:559
			Road::ChallengeIndex lChallengeIndex;

			// BrnBurnoutSkillzManager.cpp:560
			BrnStreetData::ScoreType leScoreType;

			// BrnBurnoutSkillzManager.cpp:561
			EActiveRaceCarIndex leNetworkPlayerActiveRaceCarIndex;

			BrnStreetData::operator++(/* parameters */);
			{
				// BrnBurnoutSkillzManager.cpp:572
				PlayerName lPlayerName;

				// BrnBurnoutSkillzManager.cpp:573
				int32_t liScoreValue;

				BrnStreetData::ChallengeHighScoreEntry::SetScore(/* parameters */);
			}
		}
	}
	{
		// BrnBurnoutSkillzManager.cpp:564
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:89
void BrnGameState::BurnoutSkillzManager::ClearAllBurnoutSkillzData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:91
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnBurnoutSkillzManager.cpp:92
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

	}
	GameStateModuleIO::operator++(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:98
		CarData * lpCarData;

		ScoringSystem::GetCarDataFromPlayerScoringIndex(/* parameters */);
		CarData::ResetRoadRulesScores(/* parameters */);
	}
	ScoringSystem::ClearAllBurnoutSkillzData(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
	CgsContainers::FastBitArray<8>::UnSetAll(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:1004
void BrnGameState::BurnoutSkillzManager::ProcessGameEventInputQueuePreWorld(const GameEventQueue *  lpEventQueue, InputBuffer::GameActionQueue *  lpActionQueue, EActiveRaceCarIndex  leLocalPlayersActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:1006
		const CgsModule::Event * lpEvent;

		// BrnBurnoutSkillzManager.cpp:1007
		int32_t liEventSize;

		// BrnBurnoutSkillzManager.cpp:1008
		int32_t liEventType;

	}
	CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:1079
		EActiveRaceCarIndex leNetworkPlayerActiveRaceCarIndex;

		// BrnBurnoutSkillzManager.cpp:1080
		const NewRemoteBurnoutSkillzEvent * lpBurnoutSkillzEvent;

		{
			// BrnBurnoutSkillzManager.cpp:1096
			BurnoutSkillzAction lBurnoutSkillzAction;

			// BrnBurnoutSkillzManager.cpp:1097
			ChallengeHighScoreEntry lHighScoreEntry;

			// BrnBurnoutSkillzManager.cpp:1098
			PlayerName lPlayerName;

			// BrnBurnoutSkillzManager.cpp:1099
			int32_t liScore;

			AddGameAction<BrnGameState::GameStateModuleIO::BurnoutSkillzAction>(/* parameters */);
		}
	}
	{
		// BrnBurnoutSkillzManager.cpp:1033
		BurnoutSkillzData * lpSkillzData;

		// BrnBurnoutSkillzManager.cpp:1034
		CarData * lpCarData;

		// BrnBurnoutSkillzManager.cpp:1035
		const OnlinePlayerFinalisedEvent * lpPlayerFinalisedEvent;

		GameStateModuleIO::OnlinePlayerFinalisedEvent::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		GameStateModuleIO::OnlinePlayerFinalisedEvent::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::GetBurnoutSkillzData(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:1043
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CarData::ResetRoadRulesScores(/* parameters */);
		ScoringSystem::GetBurnoutSkillzData(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:1055
			BurnoutSkillzAction lAction;

			AddGameAction<BrnGameState::GameStateModuleIO::BurnoutSkillzAction>(/* parameters */);
		}
		CarData::GetNetworkPlayerID(/* parameters */);
		ScoringSystem::GetBurnoutSkillzData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:1110
		float32_t lfTime;

		BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:345
void BrnGameState::BurnoutSkillzManager::ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, Road::ChallengeIndex  lChallengeIndex, EActiveRaceCarIndex  leLocalActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:347
		ChallengeHighScoreEntry lNewScoreAsHighScore;

		// BrnBurnoutSkillzManager.cpp:348
		ChallengeHighScoreEntry lCurrentLocalHighScore;

		// BrnBurnoutSkillzManager.cpp:349
		int32_t liCurrentHighScore;

		// BrnBurnoutSkillzManager.cpp:350
		EActiveRaceCarIndex leCurrentHighScoreRaceCarIndex;

		// BrnBurnoutSkillzManager.cpp:351
		CarData * lpLocalCarData;

		// BrnBurnoutSkillzManager.cpp:352
		bool lbPlayerSetNewPersonalBest;

	}
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	CarData::GetRoadRulesScores(/* parameters */);
	CarData::SetRoadRulesScores(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:418
		RoadRulesPersonalBestAction lNewPBScoreAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesPersonalBestAction>(/* parameters */);
		CgsContainers::FastBitArray<8>::SetBit(/* parameters */);
	}
	{
		// BrnBurnoutSkillzManager.cpp:363
		BurnoutRoadRulesSkillzAction lSkillzAction;

		// BrnBurnoutSkillzManager.cpp:393
		RequestGameTrainingAction lTrainingRequest;

		StreetManager::GetRoad(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		StreetManager::GetRoad(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::BurnoutRoadRulesSkillzAction>(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBurnoutSkillzManager.cpp:152
void BrnGameState::BurnoutSkillzManager::PreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, bool  lbIsShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzManager.cpp:154
		BurnoutSkillzData * lpSkillzData;

		// BrnBurnoutSkillzManager.cpp:155
		Iterator lDirtyFlagIterator;

		// BrnBurnoutSkillzManager.cpp:156
		const RaceCarState * lpRaceCarState;

		// BrnBurnoutSkillzManager.cpp:157
		EActiveRaceCarIndex leLocalPlayerActiveRaceCarIndex;

	}
	CgsContainers::FastBitArray<8>::Iterator::Iterator(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetGameEventQueue(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	ScoringSystem::GetBurnoutSkillzData(/* parameters */);
	CgsContainers::FastBitArray<8>::Begin(/* parameters */);
	CgsContainers::FastBitArray<8>::Iterator::operator!=(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:240
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnBurnoutSkillzManager.cpp:241
		CarData * lpCarData;

		CgsContainers::FastBitArray<8>::Iterator::GetIndex(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:251
			const BurnoutSkillzData * lpBurnoutSkillzData;

			ScoringSystem::GetBurnoutSkillzData(/* parameters */);
		}
	}
	AreAllCarWheelsOnTheGround(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
	ScoringSystem::GetBurnoutSkillzData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
	ScoringSystem::GetBurnoutSkillzData(/* parameters */);
	{
		// BrnBurnoutSkillzManager.cpp:258
		ChallengeHighScoreEntry lHighScoreEntry;

		// BrnBurnoutSkillzManager.cpp:259
		PlayerName lPlayerName;

		// BrnBurnoutSkillzManager.cpp:260
		int32_t liScore;

		// BrnBurnoutSkillzManager.cpp:261
		BurnoutSkillzAction lBurnoutSkillzAction;

		CgsContainers::FastBitArray<8>::UnSetBit(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		AddGameAction<BrnGameState::GameStateModuleIO::BurnoutSkillzAction>(/* parameters */);
		BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
		{
			// BrnBurnoutSkillzManager.cpp:275
			float32_t lfTime;

			BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
		}
	}
}

