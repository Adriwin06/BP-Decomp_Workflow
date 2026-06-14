// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnRoadRulesManager.cpp:47
	const float32_t KF_IN_ROAD_TIMEOUT;

	// BrnRoadRulesManager.cpp:49
	const float32_t KF_SECONDS_TO_MILLISECONDS;

	// BrnRoadRulesManager.cpp:52
	const float32_t KF_TIME_RULE_TIMEOUT_PROPORTION;

	// BrnRoadRulesManager.cpp:53
	const float32_t KF_WARNING_TIME_BEFORE_END;

	// BrnRoadRulesManager.cpp:54
	const float32_t KF_WARNING_SPACING;

	// BrnRoadRulesManager.cpp:55
	const int32_t KI_NUM_TIME_WARNINGS = 6;

	// BrnRoadRulesManager.cpp:56
	const float32_t KF_ROAD_RULE_NO_INPUT_QUIT_TIME;

	// BrnRoadRulesManager.cpp:57
	const int32_t KI_DEFAULT_ONLINE_TIME = 600;

	// BrnRoadRulesManager.cpp:1011
	float32_t KF_ROAD_RULE_RESET_TIME;

}

// BrnRoadRulesManager.cpp:77
void BrnGameState::RoadRulesManager::Construct(StreetManager *  lpStreetManager, BrnGameState::ModeManager *  lpModeManager, BrnGameState::TrainingManager *  lpTrainingManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:79
		int32_t liChallengeIndex;

	}
}

// BrnRoadRulesManager.cpp:753
void BrnGameState::RoadRulesManager::IsRoadLimitRegionValid(CgsID  lRoadLimitId, CgsID  lRoadLimitGroupId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:755
		int32_t liRoadIndex;

		{
			// BrnRoadRulesManager.cpp:761
			const Road * lpRoad;

			StreetManager::GetRoad(/* parameters */);
		}
		StreetManager::GetRoadCount(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		StreetManager::GetRoadCount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnRoadRulesManager.cpp:1257
void BrnGameState::RoadRulesManager::OnUpdateActiveRoadScores(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:1259
		RoadRulesUpdateAction lAction;

		GameStateModuleIO::RoadRulesUpdateAction::Construct(/* parameters */);
		IsValidRoad(/* parameters */);
		GameStateModuleIO::RoadRulesUpdateAction::SetScore(/* parameters */);
		GameStateModuleIO::RoadRulesUpdateAction::SetScore(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesUpdateAction>(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:999
void BrnGameState::RoadRulesManager::OnLeaveRoad(InputBuffer::GameActionQueue *  lpGameActionQueue, SpanBase::RoadIndex  liRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:1003
		RoadRulesLeaveRoadAction lAction;

		StreetManager::GetRoad(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesLeaveRoadAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:519
void BrnGameState::RoadRulesManager::SendRoadRuleModeSwitchMessage(InputBuffer::GameActionQueue *  lpGameActionQueue, bool  lbIsOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:521
		RoadRulesModeSwitchAction lRoadRulesSwitchAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesModeSwitchAction>(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:644
void BrnGameState::RoadRulesManager::SendActiveRuleState(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:646
		RoadRulesActiveRuleChangeAction lRuleChangeAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesActiveRuleChangeAction>(/* parameters */);
		IsRoadRuleOnline(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:627
void BrnGameState::RoadRulesManager::SetActiveRoadRule(InputBuffer::GameActionQueue *  lpGameActionQueue, BrnGameState::EActiveRoadRule  leActiveRoadRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRulesManager.cpp:1026
void BrnGameState::RoadRulesManager::OnStartRule(InputBuffer::GameActionQueue *  lpGameActionQueue, SpanBase::RoadIndex  liRoadIndex, BrnStreetData::ScoreType  leScoreType, bool  lbAllowTimeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:1028
		RoadRulesStartRuleAction lStartRuleAction;

		// BrnRoadRulesManager.cpp:1029
		bool lbUsingDefaultOnlineScore;

	}
	StreetManager::GetRoad(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesStartRuleAction>(/* parameters */);
	{
		// BrnRoadRulesManager.cpp:1046
		ChallengePlayerScoreEntry lUserScoreData;

		// BrnRoadRulesManager.cpp:1047
		ChallengeParScoresEntry lParScoreData;

		// BrnRoadRulesManager.cpp:1048
		ChallengeHighScoreEntry lFriendScoreData;

		// BrnRoadRulesManager.cpp:1050
		Road::ChallengeIndex lChallengeIndex;

		// BrnRoadRulesManager.cpp:1052
		CgsID lRivalID;

		// BrnRoadRulesManager.cpp:1054
		int32_t liParScore;

		// BrnRoadRulesManager.cpp:1055
		int32_t liBestScore;

		BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
		rw::math::vpu::Min<int>(/* parameters */);
	}
	{
		// BrnRoadRulesManager.cpp:1088
		PlayerName lPlayerName;

		// BrnRoadRulesManager.cpp:1089
		int32_t liFriendScore;

		rw::math::vpu::Min<int>(/* parameters */);
	}
	{
		// BrnRoadRulesManager.cpp:1116
		ChallengePlayerScoreEntry lUserScoreData;

		// BrnRoadRulesManager.cpp:1117
		ChallengeHighScoreEntry lFriendScoreData;

		// BrnRoadRulesManager.cpp:1119
		Road::ChallengeIndex lChallengeIndex;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:957
void BrnGameState::RoadRulesManager::OnEnterRoad(InputBuffer::GameActionQueue *  lpGameActionQueue, SpanBase::RoadIndex  liRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:961
		RoadRulesEnterRoadAction lAction;

		// BrnRoadRulesManager.cpp:962
		int32_t liScoreIndex;

		StreetManager::OnEnterNewRoad(/* parameters */);
		StreetManager::GetRoad(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		StreetManager::GetParRivalId(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesEnterRoadAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:715
void BrnGameState::RoadRulesManager::OnRoadRulesDataRequest(CgsID  lRoadId, InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:724
		int32_t liRoadIndex;

		{
			// BrnRoadRulesManager.cpp:728
			const Road * lpRoad;

			StreetManager::GetRoad(/* parameters */);
			BrnStreetData::Road::GetId(/* parameters */);
		}
		StreetManager::GetRoadCount(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:1290
void BrnGameState::RoadRulesManager::OnScoreCompleted(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:1292
		ChallengePlayerScoreEntry lChallengeData;

		// BrnRoadRulesManager.cpp:1293
		SpanBase::RoadIndex liRoadIndex;

	}
	StreetManager::GetRoad(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:1177
void BrnGameState::RoadRulesManager::OnEndRule(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, BrnStreetData::ScoreType  leScoreType, bool  lbAllowScoring) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:1179
		RoadRulesEndRuleAction lEndRuleAction;

		// BrnRoadRulesManager.cpp:1180
		InputBuffer::GameActionQueue * lpGameActionQueue;

	}
	StreetManager::GetRoad(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesEndRuleAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:932
void BrnGameState::RoadRulesManager::QuitAnyActiveRules(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRulesManager.cpp:915
void BrnGameState::RoadRulesManager::OnShowtimeEnd(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRulesManager.cpp:882
void BrnGameState::RoadRulesManager::OnShowtimeStart(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:884
		InputBuffer::GameActionQueue * lpGameActionQueue;

	}
}

// BrnRoadRulesManager.cpp:793
void BrnGameState::RoadRulesManager::OnRoadLimit(CgsID  lRoadLimitId, bool  lbEntryDirection, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, bool  lbIsPlayerCarCrashing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:795
		int32_t liRoadIndex;

		// BrnRoadRulesManager.cpp:796
		InputBuffer::GameActionQueue * lpGameActionQueue;

		// BrnRoadRulesManager.cpp:797
		CgsID lOtherRoadLimitId;

	}
	{
		// BrnRoadRulesManager.cpp:805
		const Road * lpRoad;

		StreetManager::GetRoad(/* parameters */);
		BrnStreetData::Road::GetRoadLimitId1(/* parameters */);
		BrnStreetData::Road::GetRoadLimitId0(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnRoadRulesManager.cpp:829
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
}

// BrnRoadRulesManager.cpp:669
void BrnGameState::RoadRulesManager::UpdateTimeRule(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:687
		float32_t lfTimeRemaining;

		// BrnRoadRulesManager.cpp:689
		RoadRulesTimeWarningAction lTimeWarningAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesTimeWarningAction>(/* parameters */);
}

// BrnRoadRulesManager.cpp:542
void BrnGameState::RoadRulesManager::SetRoadRulesMode(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, bool  lbMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:544
		bool lbHasModeChanged;

	}
}

// BrnRoadRulesManager.cpp:371
void BrnGameState::RoadRulesManager::UpdateActiveRoadRule(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, InputBuffer::GameActionQueue *  lpGameActionQueue, bool  lbStartEventPressed, bool  lbDisableSwitchingOnline, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle  leFreeburnChallengeStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnProgression::ProgressionManager::AreRoadRulesAvailable(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
}

// BrnRoadRulesManager.cpp:134
void BrnGameState::RoadRulesManager::UpdateSwitchingRoadRulesOnOrOff(InputBuffer::GameActionQueue *  lpGameActionQueue, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, bool  lbCarSelectActive, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle  leFreeburnChallengeStyle, float32_t  lfTimeStep, bool  lbFreeburnActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:137
		bool lbRoadRulesNotAllowed;

		// BrnRoadRulesManager.cpp:146
		bool lbTimeout;

	}
	GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
}

// BrnRoadRulesManager.cpp:200
void BrnGameState::RoadRulesManager::Update(const ControllerInput *  lpControllerInput, SpanBase::RoadIndex  liCurrentRoadIndex, float32_t  lfTimeStep, bool  lbInAir, bool  lbPlayerIsCrashing, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, bool  lbShowtimeActive, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, float32_t  lfPlayerNoInputTime, bool  lbCarSelectActive, bool  lbDisableSwitchingOnline, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle  leFreeburnChallengeStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesManager.cpp:202
		InputBuffer::GameActionQueue * lpGameActionQueue;

		// BrnRoadRulesManager.cpp:254
		bool lbStartEventPressed;

	}
	IsValidRoad(/* parameters */);
	{
		// BrnRoadRulesManager.cpp:256
		Profile * lpProfile;

	}
	BrnProgression::ProgressionManager::AreRoadRulesAvailable(/* parameters */);
	IsCrashRuleActive(/* parameters */);
}

