// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiHudMessageAnalyzer.cpp:26
	const const char *[13] KAPC_TAKEDOWN_TYPES;

	// BrnGuiHudMessageAnalyzer.cpp:54
	const char[11] KAC_TAKEDOWN_DOUBLE;

	// BrnGuiHudMessageAnalyzer.cpp:56
	const char[11] KAC_TAKEDOWN_TRIPLE;

	// BrnGuiHudMessageAnalyzer.cpp:58
	const char[6] KAC_TAKEDOWN_X;

	// BrnGuiHudMessageAnalyzer.cpp:60
	const char *[9] KAPC_TAKEDOWN_CHAIN;

	// BrnGuiHudMessageAnalyzer.cpp:73
	const const char *[9] KAPC_IMPACT_LIST_OF_GOOD_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:84
	const const char *[9] KAPC_IMPACT_LIST_OF_BAD_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:95
	const const char *[6] KAPC_DRIVE_THROUGH_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:105
	const const char *[6] KAPC_DRIVE_THROUGH_MAGIC_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:115
	const const char *[6] KPAC_DRIVE_THROUGH_INEFFECTIVE_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:125
	const const char *[4] KAPC_PAYBACK_TAKEDOWN_BD_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:137
	const const char *[4] KAPC_PAYBACK_TAKEDOWN_GD_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:149
	const const char *[11] KAPC_FINISH_POSITION_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:164
	const const char *[7] KAPC_OVERTAKE_LIST_MESSAGES;

	// BrnGuiHudMessageAnalyzer.cpp:175
	const const char *[3] KAPC_BOOST_EARNING_MSGS_BOOSTING;

	// BrnGuiHudMessageAnalyzer.cpp:182
	const const char *[3] KAPC_BOOST_EARNING_MSGS_ONCOMING;

	// BrnGuiHudMessageAnalyzer.cpp:189
	const const char *[3] KAPC_BOOST_EARNING_MSGS_AIR;

	// BrnGuiHudMessageAnalyzer.cpp:196
	const const char *[3] KAPC_BOOST_EARNING_MSGS_DRIFT;

	// BrnGuiHudMessageAnalyzer.cpp:203
	const const char *[3] KAPC_BOOST_EARNING_MSGS_SPIN;

	// BrnGuiHudMessageAnalyzer.cpp:210
	const const char *[3] KAPC_BOOST_EARNING_MSGS_CHECKING;

	// BrnGuiHudMessageAnalyzer.cpp:217
	const const char *[3] KAPC_BOOST_EARNING_MSGS_NRMISS;

	// BrnGuiHudMessageAnalyzer.cpp:224
	const const char *[3] KAPC_BOOST_EARNING_MSGS_STUNTS;

	// BrnGuiHudMessageAnalyzer.cpp:231
	const const char *[3] KAPC_NETWORK_COLLECTABLE_STRINGID;

	// BrnGuiHudMessageAnalyzer.cpp:238
	const const char *[3] KAPC_COLLECTABLE_COMPLETION_STRINGID;

	// BrnGuiHudMessageAnalyzer.cpp:245
	const const char *[3] KAPC_SHOWTIME_STRINGID;

	// BrnGuiHudMessageAnalyzer.cpp:252
	const const char *[2] KAPC_POWER_PARKING_STRINGID;

	// BrnGuiHudMessageAnalyzer.cpp:427
	const float32_t KF_MIN_ROADRAGE_TARGET_ACHIEVED_DELAY;

	// BrnGuiHudMessageAnalyzer.cpp:428
	const float32_t KF_TIMEUNTIL_ONE_HUNDRED_MESSAGE;

	// BrnGuiHudMessageAnalyzer.cpp:429
	const float32_t KF_ROADRULEMESSAGEDELAY;

}

// BrnGuiHudMessageAnalyzer.cpp:2990
void BrnGui::HudMessageAnalyzer::HandleRoadRagePlayerDamageEvent(const GuiEventRoadRagePlayerDamage *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:3821
void BrnGui::HudMessageAnalyzer::HandleRoadRageTimeExtension() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:1817
void BrnGui::HudMessageAnalyzer::HandleRoadRageTargetReached(const GuiEventPlayerReachedRoadRageTarget *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:4509
void BrnGui::HudMessageAnalyzer::HandleNewRoadRulesHighScore(const GuiEventRoadRuleNewHighScore *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:3250
void BrnGui::HudMessageAnalyzer::HandleNearMiss(const GuiNearMissEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:4351
void BrnGui::HudMessageAnalyzer::HandleNearMissEarningMessages(const GuiNearMissEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:4367
void BrnGui::HudMessageAnalyzer::HandleStuntsEarningMessages(const GuiStuntEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:447
void BrnGui::HudMessageAnalyzer::Construct(HudMessageDirector *  lpHudMessageDirector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2439
void BrnGui::HudMessageAnalyzer::ConstructTakedownMessage(GuiHudMessage *  lpHudMessage, const GuiTakedownEvent *  lpTakedown) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2488
		int32_t liChainIndex;

		// BrnGuiHudMessageAnalyzer.cpp:2489
		int32_t liChainHudMessageCount;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4922
void BrnGui::HudMessageAnalyzer::HandlePlayerLeftLobby(const GuiEventNetworkPlayerLeftLobby *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
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

// BrnGuiHudMessageAnalyzer.cpp:2869
void BrnGui::HudMessageAnalyzer::HandleImpact(const GuiImpactEvent *  lpImpactEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2873
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2872
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2871
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3755
void BrnGui::HudMessageAnalyzer::HandleEventFinisher(const GuiInEventFinisher *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3775
		bool lbSuccess;

		GetOnlineName(/* parameters */);
		CgsNetwork::PlayerName::Construct(/* parameters */);
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
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:4053
void BrnGui::HudMessageAnalyzer::HandleOncomingEarningMessages(const GuiOncomingEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4058
		float32_t lfCurrentOncomingDist;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4108
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4127
void BrnGui::HudMessageAnalyzer::HandleAirEarningMessages(const GuiInAirEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4131
		float32_t lfCurrentAirTime;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4183
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4202
void BrnGui::HudMessageAnalyzer::HandleDriftEarningMessages(const GuiDriftingEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4207
		float32_t lfCurrentDriftDist;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4260
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4277
void BrnGui::HudMessageAnalyzer::HandleSpinEarningMessages(const GuiSpinningEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4281
		int32_t liCurrentSpinAngle;

	}
	rw::math::fpu::FastFloatToInt32<float>(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4333
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5123
void BrnGui::HudMessageAnalyzer::HandleChallengeEnded(const GuiChallengeEndEvent *  lpEndEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5525
void BrnGui::HudMessageAnalyzer::AddGamerTagToMessage(GuiHudMessage *  lpMessage, const char *  lpcStringID, EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5533
		bool lbSuccess;

		// BrnGuiHudMessageAnalyzer.cpp:5535
		const char * lpcGamertag;

	}
	GetOnlineName(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:5161
void BrnGui::HudMessageAnalyzer::TriggerChallengeEndedMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5165
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:5166
		const ChallengeList * lpChallengeList;

		// BrnGuiHudMessageAnalyzer.cpp:5167
		CgsID lMessageId;

	}
	GuiCache::GetWorldDataController(/* parameters */);
	GuiCache::GetHudMessageDirector(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:5210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeIndex(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	{
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
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
}

// BrnGuiHudMessageAnalyzer.cpp:4526
void BrnGui::HudMessageAnalyzer::TriggerNewRoadRulesHighScoreMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4528
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:4529
		GuiHudMessage lScoreUpdateMessage;

	}
	GuiCache::IsInFreeburn(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4601
		char[13] lacRoadName;

		GuiHudMessage::AddParam(/* parameters */);
	}
	GuiHudMessage::AddParam(/* parameters */);
	{
	}
	{
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4637
		GuiHudMessage lMessage2;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4675
		GuiHudMessage lMessage2;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:5561
void BrnGui::HudMessageAnalyzer::GetMyString(const char *  lacStringId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5563
		const UnicodeBuffer::CgsUtf8 * lpUtf8String;

		{
			// BrnGuiHudMessageAnalyzer.cpp:5564
			CgsDev::StrStream lStrStream;

		}
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1884
void BrnGui::HudMessageAnalyzer::HandleStuntPerformed(const GuiHUDMessageStuntPerformed *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1886
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:1888
		char[128] lacBuffer;

		// BrnGuiHudMessageAnalyzer.cpp:1889
		char[64] lacDetail;

	}
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	GetMyString(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:1896
		const char * lpTitleText;

		// BrnGuiHudMessageAnalyzer.cpp:1897
		const char * lpSubtitleText;

		GetMyString(/* parameters */);
	}
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	GetMyString(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2582
void BrnGui::HudMessageAnalyzer::HandleCrashedEvent(const BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState  lCrashingState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2649
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2613
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2679
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2604
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2634
		GuiHudMessage lMessage;

	}
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2671
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2513
void BrnGui::HudMessageAnalyzer::HandleShutdown(const GuiShutdownEvent *  lpShutdown) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2517
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	TriggerMessage(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:2516
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1628
void BrnGui::HudMessageAnalyzer::HandleBlueTeamIsEscaping(const GuiBlueTeamIsEscapingEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1630
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1642
void BrnGui::HudMessageAnalyzer::HandleBlueTeamIsBehindYou(const GuiBlueTeamIsBehindYouEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1644
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1656
void BrnGui::HudMessageAnalyzer::HandlePlayerEliminated(const GuiPlayerEliminatedEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1658
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:1661
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1678
void BrnGui::HudMessageAnalyzer::HandleLocalPlayerEliminated(const GuiLocalPlayerEliminatedEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1680
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1692
void BrnGui::HudMessageAnalyzer::HandleLastBlueTeamMember(const GuiLastBlueTeamMemberEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1694
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1707
void BrnGui::HudMessageAnalyzer::HandleTraitorousTakedown(const GuiTraitorousTakedownEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1713
		bool lbSuccess;

		// BrnGuiHudMessageAnalyzer.cpp:1714
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1734
void BrnGui::HudMessageAnalyzer::HandleBurningHomeRunCheckpointReached(const GuiBHRCheckpointReachedEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1736
		GuiHudMessage lMessage;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1768
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
		GetOnlineName(/* parameters */);
	}
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
	}
	GuiHudMessage::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:1789
void BrnGui::HudMessageAnalyzer::HandleRaceCheckpointReached(const GuiRaceCheckpointReached *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1798
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:1830
void BrnGui::HudMessageAnalyzer::HandleBurningHomeRunRunnerCrashes(const GuiHUDMessageBHRRunnerCrashed *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:1832
		GuiHudMessage lMessage;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1867
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		GetOnlineName(/* parameters */);
	}
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	GuiHudMessage::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:2026
void BrnGui::HudMessageAnalyzer::HandleComboPerformed(const GuiHUDMessageComboPerformed *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2028
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:2051
void BrnGui::HudMessageAnalyzer::HandleShowtimeMultiplierMessage(const GuiHUDMessageShowtimeMultiplier *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2055
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2074
void BrnGui::HudMessageAnalyzer::HandleSignSmashMessage(const GuiHUDMessageSignSmashed *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2076
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:2093
void BrnGui::HudMessageAnalyzer::HandleCrushComboMessage(const GuiHUDMessageCrushCombo *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2095
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:2111
void BrnGui::HudMessageAnalyzer::HandleGenericHUDMessage(const GuiGenericHUDMessage *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2113
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2166
void BrnGui::HudMessageAnalyzer::HandleBurningHomeRunTeamChange(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2168
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:2169
		BrnGameState::GameStateModuleIO::EPlayerTeam leOnlinePlayerTeam;

	}
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:2205
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
		GetOnlineName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2134
void BrnGui::HudMessageAnalyzer::HandleOnlineTeamChangeMessage(const GuiOnlineTeamChangeEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiHudMessageAnalyzer.cpp:2224
void BrnGui::HudMessageAnalyzer::HandleLeaderPassedMileBoundary(const GuiLeaderPassedMileBoundaryEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2226
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:2227
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2248
void BrnGui::HudMessageAnalyzer::HandleLeaderPassedKMBoundary(const GuiLeaderPassedKMBoundaryEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2250
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:2251
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2275
void BrnGui::HudMessageAnalyzer::HandleTakedown(const GuiTakedownEvent *  lpTakedown) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2365
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		{
			// BrnGuiHudMessageAnalyzer.cpp:2383
			char[1024] lacBuffer;

			// BrnGuiHudMessageAnalyzer.cpp:2384
			UnicodeBuffer::CgsUtf8 * lpcString;

			// BrnGuiHudMessageAnalyzer.cpp:2385
			EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

			// BrnGuiHudMessageAnalyzer.cpp:2386
			EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		}
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2292
		GuiHudMessage lMessage;

		AbortWreckedMessage(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2333
		GuiHudMessage lMessage;

		AbortWreckedMessage(/* parameters */);
		{
			// BrnGuiHudMessageAnalyzer.cpp:2349
			char[13] lacTEMPCarThatTookThePlayerDownName;

			GuiHudMessage::Construct(/* parameters */);
		}
		TriggerMessage(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:2336
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnGuiHudMessageAnalyzer.cpp:2337
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
		GetOnlineName(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2278
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2277
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2295
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnGuiHudMessageAnalyzer.cpp:2296
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
		GetOnlineName(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
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

// BrnGuiHudMessageAnalyzer.cpp:2548
void BrnGui::HudMessageAnalyzer::HandleEndShutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2552
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:2556
		char[13] lacCarId;

		// BrnGuiHudMessageAnalyzer.cpp:2560
		char[64] lacCarString;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2699
void BrnGui::HudMessageAnalyzer::HandleWreckedEvent(const GuiEventPlayerWrecked *  lpWreckedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2738
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2752
		GuiHudMessage lMessage;

		TriggerMessage(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2783
void BrnGui::HudMessageAnalyzer::HandleNetworkPlayerCrashedEvent(const GuiNetworkPlayerCrashingEvent *  lpNetworkPlayerCrashedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2790
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2829
void BrnGui::HudMessageAnalyzer::HandleNetworkTailing(const GuiNetworkPlayerOnTailEvent *  lpOnTailEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2834
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:2846
		char[13] lacRivalName;

		// BrnGuiHudMessageAnalyzer.cpp:2850
		char[32] lacRivalId;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2908
void BrnGui::HudMessageAnalyzer::HandleNetworkBattling(const GuiNetworkPlayerBattlingEvent *  lpBattlingEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2916
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:2917
		bool lbSuccess;

	}
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	GetOnlineName(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:2914
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2912
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2913
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2911
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:2910
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2944
void BrnGui::HudMessageAnalyzer::HandleJoinedEvent(const GuiEventCarJoinedEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2946
		char[32] lacRivalId;

		// BrnGuiHudMessageAnalyzer.cpp:2949
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:2967
void BrnGui::HudMessageAnalyzer::HandleEliminatedEvent(const GuiEventCarEliminatedFromEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:2972
		int32_t liLastEliminatedPosition;

		// BrnGuiHudMessageAnalyzer.cpp:2974
		GuiHudMessage lMessage;

		GuiCache::GetOpponentsInEvent(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3010
void BrnGui::HudMessageAnalyzer::HandleFailedToStartBurningRoute(const GuiEventFailedToStartEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3015
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:3020
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnGuiHudMessageAnalyzer.cpp:3021
		char[32] lacTempCarStringID;

		// BrnGuiHudMessageAnalyzer.cpp:3022
		char[13] lacCarID;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3048
void BrnGui::HudMessageAnalyzer::HandleRivalryChangeEvent(const GuiRivalryStatusChange *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3050
		char[32] lacRivalName;

		// BrnGuiHudMessageAnalyzer.cpp:3053
		GuiHudMessage lMessage;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3094
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3083
		char[13] lacCarId;

		// BrnGuiHudMessageAnalyzer.cpp:3086
		char[32] lacCarName;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3112
void BrnGui::HudMessageAnalyzer::HandleRivalFleeingEvent(const GuiRivalIsFleeing *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3114
		char[32] lacRivalName;

		// BrnGuiHudMessageAnalyzer.cpp:3117
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3135
void BrnGui::HudMessageAnalyzer::HandleStartPursuitEvent(const GuiEventStartPursuitEvent *  lpStartPursuitEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3140
		char[13] lacCarId;

		// BrnGuiHudMessageAnalyzer.cpp:3144
		char[32] lacCarName;

		// BrnGuiHudMessageAnalyzer.cpp:3148
		GuiHudMessage lMessage;

	}
	GuiCache::GetPursuitCarID(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3164
void BrnGui::HudMessageAnalyzer::HandleDriveThrough(const GuiDriveThroughEvent *  lpDriveThroughEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3169
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3178
		int32_t liRandomNumber;

		CgsNumeric::Random::RandomInt(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3167
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3166
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

// BrnGuiHudMessageAnalyzer.cpp:3227
void BrnGui::HudMessageAnalyzer::HandleSignatureStunt(const GuiSignatureStuntEvent *  lpStuntEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3229
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:3232
		char[32] lacStuntName;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3277
void BrnGui::HudMessageAnalyzer::HandleDirtyTrickNew(const GuiDirtyTrickNewEvent *  lpDTEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3285
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3302
void BrnGui::HudMessageAnalyzer::HandleDirtyTrickTriggered(const GuiDirtyTrickTriggerEvent *  lpDTEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3311
		GuiHudMessage lMessage;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3304
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3369
void BrnGui::HudMessageAnalyzer::HandleDirtyTrickEnded(const GuiDirtyTrickEndedEvent *  lpDTEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3378
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:3379
		bool lbSuccess;

	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3372
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3371
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	GetOnlineName(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3456
void BrnGui::HudMessageAnalyzer::HandleLiveRevengeUpdate(const GuiLiveRevengeUpdateEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3470
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:3471
		bool lbSuccess;

	}
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	GetOnlineName(/* parameters */);
	GetOnlineName(/* parameters */);
	TriggerMessage(/* parameters */);
	GetOnlineName(/* parameters */);
	GetOnlineName(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3458
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetOnlineName(/* parameters */);
	GetOnlineName(/* parameters */);
	GetOnlineName(/* parameters */);
	GetOnlineName(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3591
void BrnGui::HudMessageAnalyzer::HandleOvertake(const GuiOvertakeEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::IsActiveRaceCarDisconnected(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3603
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3601
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3600
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3593
		CgsDev::StrStream lStrStream;

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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3621
void BrnGui::HudMessageAnalyzer::HandleEventDistanceToFinish(const GuiInEventDistanceToFinish *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3626
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:3648
void BrnGui::HudMessageAnalyzer::HandleEventLeaderSplitTime(const GuiInEventLeaderSplit *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3652
		GuiHudMessage lMessage;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3667
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3675
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiCache::GetCheckpointReached(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		GuiCache::GetCheckpointsInEvent(/* parameters */);
		BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:3693
void BrnGui::HudMessageAnalyzer::HandleEventNeckAndNeck() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3695
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3711
void BrnGui::HudMessageAnalyzer::HandleEventRivalProgress(const GuiInEventRivalProgress *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3715
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:3737
		char[128] lacLandmarkDbId;

	}
	GuiHudMessage::Construct(/* parameters */);
	GetLandmarkName(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3727
		char[13] lacRivalName;

		// BrnGuiHudMessageAnalyzer.cpp:3731
		char[32] lacRivalId;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3797
void BrnGui::HudMessageAnalyzer::TriggerEventFinisher() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3803
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3841
void BrnGui::HudMessageAnalyzer::HandleTookLead(const GuiTookLeadEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3847
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3843
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3872
void BrnGui::HudMessageAnalyzer::HandleTookLast(const GuiTookLastEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3878
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:3874
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3903
void BrnGui::HudMessageAnalyzer::HandleFinishRace(const GuiFinishRaceEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3911
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3909
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3905
		CgsDev::StrStream lStrStream;

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

// BrnGuiHudMessageAnalyzer.cpp:3927
void BrnGui::HudMessageAnalyzer::HandleShortcut(const GuiOffenceShortcutEvent *  lpShortcut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:3931
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:3935
		char[13] lacShortcutName;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3929
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:3953
void BrnGui::HudMessageAnalyzer::HandleBoostEarningMessages(const GuiEventBoostInfo *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4035
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4020
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4007
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:3994
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
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

// BrnGuiHudMessageAnalyzer.cpp:4382
void BrnGui::HudMessageAnalyzer::HandleChainedBoost(const GuiEventBoostInfo *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4385
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

// BrnGuiHudMessageAnalyzer.cpp:4447
void BrnGui::HudMessageAnalyzer::HandleRemotePlayerDisconnect(const GuiNetworkRemotePlayerDisconnectEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetPlayerActiveRaceCarIndex(/* parameters */);
	GuiCache::GetOnlinePlayerDisconnected(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4455
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:4456
		bool lbSuccess;

		GuiHudMessage::Construct(/* parameters */);
		GuiNetworkRemotePlayerDisconnectEvent::GetNetworkPlayerID(/* parameters */);
		GetOnlineName(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4449
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4478
void BrnGui::HudMessageAnalyzer::HandleGameModeStarted(const GuiGameModeStarted *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4484
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:4488
		char[128] lacLandmarkDbId;

		GetLandmarkName(/* parameters */);
		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4480
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4715
void BrnGui::HudMessageAnalyzer::HandleRoadRuleFailed(const GuiEventRoadRuleFail *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4717
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:4718
		char[13] lacRoadName;

	}
	GuiHudMessage::Construct(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4752
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:4786
void BrnGui::HudMessageAnalyzer::HandleShowtimeModeSwitch(const GuiShowtimeModeSwitch *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4791
		GuiHudMessage lMessage;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:4825
		const InGamePlayerStatusData * lpPlayerInfo;

		GuiHudMessage::Construct(/* parameters */);
		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
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

// BrnGuiHudMessageAnalyzer.cpp:4852
void BrnGui::HudMessageAnalyzer::HandlePowerParkingResult(const GuiPowerParkResult *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4856
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:4860
		char[32] lacBuffer;

		// BrnGuiHudMessageAnalyzer.cpp:4862
		uint32_t luRatingIndex;

		GuiHudMessage::Construct(/* parameters */);
		GuiHudMessage::AddParam(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:4891
void BrnGui::HudMessageAnalyzer::HandlePlayerJoinedLobby(const GuiEventNetworkPlayerJoinedLobby *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4893
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:4894
		PlayerName lPlayerName;

		// BrnGuiHudMessageAnalyzer.cpp:4895
		const InGamePlayerStatusData * lpPlayerData;

	}
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4942
void BrnGui::HudMessageAnalyzer::TriggerPlayerLeftLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4946
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4966
void BrnGui::HudMessageAnalyzer::HandleJumpStarted(const GuiEventJumpStarted *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4968
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:4986
void BrnGui::HudMessageAnalyzer::HandleStuntInfo(const GuiEventStuntInfo *  lpStuntInfoEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:4988
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::AddParam(/* parameters */);
	GuiHudMessage::AddParam(/* parameters */);
	TriggerMessage(/* parameters */);
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageAnalyzer.cpp:5010
void BrnGui::HudMessageAnalyzer::HandleStuntsComplete(const GuiEventStuntAreaComplete *  lpStuntAreaCompleteEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5014
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5027
void BrnGui::HudMessageAnalyzer::HandleStuntsComplete(const GuiEventStuntAllComplete *  lpStuntAllCompleteEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5031
		GuiHudMessage lMessage;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5053
void BrnGui::HudMessageAnalyzer::HandleTrophyCarUnlocked(const GuiEventTrophyCarUnlock *  lpTrophyUnlockedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5057
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:5060
		char[13] lacCarId;

		// BrnGuiHudMessageAnalyzer.cpp:5064
		const int32_t KI_MAX_CAR_NAME_LENGTH;

		// BrnGuiHudMessageAnalyzer.cpp:5065
		char[32] lacCarName;

	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5085
void BrnGui::HudMessageAnalyzer::TriggerChallengeTriggeredMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5087
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:5088
		CgsID lMessageId;

	}
	GuiCache::GetHudMessageDirector(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	GuiHudMessage::Construct(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	FreeburnChallengeManager::GetCurrentChallenge(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5360
void BrnGui::HudMessageAnalyzer::HandleAllEventsOfTypeComplete(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5398
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5366
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5382
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5390
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5374
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5423
void BrnGui::HudMessageAnalyzer::HandleAllJunctionsOfTypeFound(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5461
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5429
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5445
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5453
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:5437
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5486
void BrnGui::HudMessageAnalyzer::HandleAllJunctionsFound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5488
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:5504
void BrnGui::HudMessageAnalyzer::HandleAllDriveThrusFound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:5506
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
	}
	GuiHudMessage::Construct(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:529
void BrnGui::HudMessageAnalyzer::Update(const InputBuffer::GuiEventInputQueue *  lpEventQueue, GuiStackEventQueue::GuiEventQueueLarge *  lpViewOutputQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageAnalyzer.cpp:544
		bool lbIsWrecked;

		// BrnGuiHudMessageAnalyzer.cpp:546
		const CgsModule::Event * lpEvent;

		// BrnGuiHudMessageAnalyzer.cpp:547
		int32_t liEventSize;

		// BrnGuiHudMessageAnalyzer.cpp:548
		int32_t liEventType;

	}
	CgsGui::GuiEventQueueBase<32768,16>::GetFirstEvent(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:1220
		const GuiNewBurnoutHudMessageEvent * lpHudMessageEvent;

		// BrnGuiHudMessageAnalyzer.cpp:1221
		GuiHudMessage lMessage;

		// BrnGuiHudMessageAnalyzer.cpp:1222
		bool lbSendMessage;

		GuiHudMessage::Construct(/* parameters */);
		{
			// BrnGuiHudMessageAnalyzer.cpp:1302
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		TriggerMessage(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<32768,16>::GetNextEvent(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	GuiCache::GetPlayerActiveRaceCarIndex(/* parameters */);
	GuiCache::IsRaceCarCrashing(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:1592
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
		BrnProgression::Profile::SetOneHundredHudMessageViewed(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1558
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:532
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:613
		const GuiEventTrophyCarUnlock * lpTrophyCarUnlockedEvent;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:690
		const GuiPlayerCrashingStateChangeEvent * lpCrashedEvent;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:719
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	TriggerMessage(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:1405
		const GuiEventTickerStatus * lpTickerStatus;

	}
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:731
		const GuiEventTimeUp * lpTimeUpEvent;

		TriggerMessage(/* parameters */);
	}
	TriggerMessage(/* parameters */);
	TriggerMessage(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:1373
		const GuiEventAllOfTypeComplete * lpGuiEventAllOfTypeComplete;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1365
		GuiHudMessage lMessage;

		GuiHudMessage::Construct(/* parameters */);
		TriggerMessage(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:595
		const GuiEventGameCompletedOnline * lpGuiEventGameCompletedOnline;

	}
	GuiCache::GetHudMessagesQueue(/* parameters */);
	InGameMessagesQueue::ClearPending(/* parameters */);
	{
		// BrnGuiHudMessageAnalyzer.cpp:1397
		const GuiEventProgressionProfileData * lpProfileData;

	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1382
		const GuiEventAllJunctionsDiscoveredOfType * lpGuiEventAllJunctionsDiscoveredOfType;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	TriggerMessage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1263
		const InGamePlayerStatusData * lpNextOwner;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1280
		const InGamePlayerStatusData * lpNextOwner;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1237
		const InGamePlayerStatusData * lpNextOwner;

		// BrnGuiHudMessageAnalyzer.cpp:1245
		const InGamePlayerStatusData * lpPreviousOwner;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
		GuiCache::GetOnlinePlayerInfo(/* parameters */);
		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	{
		// BrnGuiHudMessageAnalyzer.cpp:1313
		char[13] lacRoadName;

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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageAnalyzer.cpp:314
// BrnGuiHudMessageAnalyzer.cpp:321
// BrnGuiHudMessageAnalyzer.cpp:329
// BrnGuiHudMessageAnalyzer.cpp:425
// BrnGuiHudMessageAnalyzer.cpp:337
// BrnGuiHudMessageAnalyzer.cpp:258
// BrnGuiHudMessageAnalyzer.cpp:265
// BrnGuiHudMessageAnalyzer.cpp:272
// BrnGuiHudMessageAnalyzer.cpp:279
// BrnGuiHudMessageAnalyzer.cpp:286
// BrnGuiHudMessageAnalyzer.cpp:293
// BrnGuiHudMessageAnalyzer.cpp:300
// BrnGuiHudMessageAnalyzer.cpp:307
// BrnGuiHudMessageAnalyzer.cpp:409
