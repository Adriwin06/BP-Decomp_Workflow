// BrnGuiEventTypeDefs.cpp:87
void BrnGui::GuiEventRoadRuleEnter::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.cpp:89
		int32_t liType;

		CgsNetwork::PlayerName::Clear(/* parameters */);
	}
}

// BrnGuiEventTypeDefs.cpp:318
void BrnGui::GuiEventRoadRuleUpcomingRoads::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.cpp:320
		int32_t liSide;

		{
			// BrnGuiEventTypeDefs.cpp:323
			int32_t liType;

			rw::math::vpu::Vector3::SetZero(/* parameters */);
		}
	}
}

// BrnGuiEventTypeDefs.cpp:556
void BrnGui::GuiEventRankProgressResponse::Construct(const RankInfoResponseAction *  lpRankInfoResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::RankInfoResponseAction::PlayerHasFinishedLastRank(/* parameters */);
}

// BrnGuiEventTypeDefs.cpp:589
void BrnGui::GuiChallengeUpdateEvent::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

// BrnGuiEventTypeDefs.cpp:247
void BrnGui::GuiEventRoadRuleData::RoadRuleType::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.cpp:252
		int32_t liIndex;

		CgsNetwork::PlayerName::Construct(/* parameters */);
	}
}

// BrnGuiEventTypeDefs.cpp:269
void BrnGui::GuiEventRoadRuleData::Construct(const RoadRulesEnterRoadAction *  lpGamePlayAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.cpp:275
		BrnStreetData::ScoreType leRuleType;

	}
	BrnStreetData::operator++(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:278
		int32_t liScore;

		// BrnGuiEventTypeDefs.cpp:279
		BrnGui::GuiEventRoadRuleData::RoadRuleType * lpBestRoadRules;

		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
		{
			// BrnGuiEventTypeDefs.cpp:287
			CgsID lRivalId;

			BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
		}
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		BrnStreetData::ChallengeData::GetScore(/* parameters */);
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnGuiEventTypeDefs.cpp:203
void BrnGui::GuiEventRoadRuleUpdateTargetScores::SetupRoadRule(const RoadRulesUpdateTargetScoreAction *  lpGamePlayAction, BrnStreetData::ScoreType  leRoadRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:218
		int32_t liFriendBest;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:230
		int32_t liUserBest;

		BrnStreetData::ChallengeData::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnGuiEventTypeDefs.cpp:186
void BrnGui::GuiEventRoadRuleUpdateTargetScores::Construct(const RoadRulesUpdateTargetScoreAction *  lpGamePlayAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiEventTypeDefs.cpp:113
void BrnGui::GuiEventRoadRuleEnter::SetupRoadRule(const RoadRulesEnterRoadAction *  lpGamePlayAction, BrnStreetData::ScoreType  leRoadRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
	BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:130
		int32_t liFriendBest;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:149
		int32_t liUserBest;

		BrnStreetData::ChallengeData::GetScore(/* parameters */);
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnGuiEventTypeDefs.cpp:69
void BrnGui::GuiEventRoadRuleEnter::Construct(const RoadRulesEnterRoadAction *  lpGamePlayAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

// BrnGuiEventTypeDefs.cpp:405
void BrnGui::GuiEventRoadRuleUpcomingRoads::FindRoadRuler(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide  leRoadSide, const UpcomingRoadChangeAction *  lpGamePlayAction, BrnStreetData::ScoreType  leRoadRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.cpp:407
		const ChallengeParScoresEntry * lpParScores;

		// BrnGuiEventTypeDefs.cpp:408
		const ChallengeHighScoreEntry * lpFriendScores;

		// BrnGuiEventTypeDefs.cpp:409
		const ChallengeData * lpUserScores;

		// BrnGuiEventTypeDefs.cpp:428
		int32_t liBestKnownScore;

		// BrnGuiEventTypeDefs.cpp:429
		CgsID lTempRivalID;

		// BrnGuiEventTypeDefs.cpp:434
		int32_t liParScore;

		// BrnGuiEventTypeDefs.cpp:438
		int32_t liFriendBest;

	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	{
	}
	BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiEventTypeDefs.cpp:424
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:441
		PlayerName lTempName;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnGuiEventTypeDefs.cpp:454
		int32_t liUserBest;

		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	}
	{
		// BrnGuiEventTypeDefs.cpp:417
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// BrnGuiEventTypeDefs.cpp:506
void BrnGui::GuiEventRoadRuleUpcomingRoads::ConvertGamestateEnumToGuiEnum(int32_t  liCastGamestateEnum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.cpp:508
		BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction::ESignState leGamestateEnum;

		// BrnGuiEventTypeDefs.cpp:515
		BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState leGuiEnum;

	}
	{
		// BrnGuiEventTypeDefs.cpp:539
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiEventTypeDefs.cpp:511
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEventTypeDefs.cpp:346
void BrnGui::GuiEventRoadRuleUpcomingRoads::Construct(const UpcomingRoadChangeAction *  lpGamePlayAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiEventTypeDefs.cpp:52
// BrnGuiEventTypeDefs.cpp:53
// BrnGuiEventTypeDefs.cpp:55
// BrnGuiEventTypeDefs.cpp:48
// BrnGuiEventTypeDefs.cpp:49
// BrnGuiEventTypeDefs.cpp:30
// BrnGuiEventTypeDefs.cpp:31
// BrnGuiEventTypeDefs.cpp:35
// BrnGuiEventTypeDefs.cpp:39
// BrnGuiEventTypeDefs.cpp:43
// BrnGuiEventTypeDefs.cpp:44
