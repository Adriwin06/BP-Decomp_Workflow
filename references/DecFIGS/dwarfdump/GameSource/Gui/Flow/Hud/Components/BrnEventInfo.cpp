// CgsGuiShared.h:45
namespace BrnGui {
	// BrnEventInfo.cpp:116
	const float32_t KF_MIN_TIME_FOR_GUI_RACE_POSITION_UPDATE;

}

// BrnEventInfo.cpp:376
void BrnGui::EventInfoComponent::ClearEventSpecificData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:431
		int32_t liIndex;

	}
}

// BrnEventInfo.cpp:526
void BrnGui::EventInfoComponent::HandleTrigger(const GuiEventAptTrigger *  lpTrigger, BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventInfo.cpp:680
void BrnGui::EventInfoComponent::BankingTransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:683
		EventInfoComponent * lpThis;

	}
}

// BrnEventInfo.cpp:2088
void BrnGui::EventInfoComponent::SetTextFieldDangerColour(EventInfoComponent::TextFieldComponentType *  lpTextField, float32_t  lfTimeLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:2091
		float32_t lfProgression;

		// BrnEventInfo.cpp:2095
		Vector4 lv4NewColour;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnEventInfo.cpp:1701
void BrnGui::EventInfoComponent::UpdateCrash(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetShowTimeCarsCrashed(/* parameters */);
}

// BrnEventInfo.cpp:1137
void BrnGui::EventInfoComponent::ShowFreeburnWithTitleText(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:1139
		char[128] lacFreeburnWithHost;

		// BrnEventInfo.cpp:1140
		int32_t liPlayerIndex;

		{
			// BrnEventInfo.cpp:1144
			const InGamePlayerStatusData * lpPlayerStatus;

			GuiCache::GetOnlinePlayerInfoByIndex(/* parameters */);
		}
	}
}

// BrnEventInfo.cpp:1235
void BrnGui::EventInfoComponent::UpdateStuntAttack(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:1237
		bool lbScoreIncreasedFromZero;

		// BrnEventInfo.cpp:1238
		bool lbMultiplierIncreasedFromOne;

		// BrnEventInfo.cpp:1239
		bool lbForceRefreshScore;

		// BrnEventInfo.cpp:1373
		int32_t liNewComboScore;

		// BrnEventInfo.cpp:1374
		int32_t liNewMultiplier;

		// BrnEventInfo.cpp:1492
		int32_t liIndex;

		// BrnEventInfo.cpp:1493
		int32_t liStuntCount;

		// BrnEventInfo.cpp:1506
		char[64] lacBuffer;

		// BrnEventInfo.cpp:1507
		int32_t liScore;

		// BrnEventInfo.cpp:1508
		int32_t liTextFieldIndex;

		GuiCache::GetTargetScoreInEvent(/* parameters */);
	}
	{
		// BrnEventInfo.cpp:1246
		char[128] lacNewText;

		GuiCache::GetTargetScoreInEvent(/* parameters */);
	}
	GuiCache::GetCurrentScoreInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1259
		char[128] lacNewText;

		GuiCache::GetCurrentScoreInEvent(/* parameters */);
	}
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1272
		int32_t lnMinutes;

		// BrnEventInfo.cpp:1273
		int32_t lnSeconds;

		// BrnEventInfo.cpp:1275
		char[128] lacNewText;

		GuiCache::GetCurrentTimeInEvent(/* parameters */);
	}
	{
		// BrnEventInfo.cpp:1304
		float32_t lfComboWarningTimeActive;

		// BrnEventInfo.cpp:1307
		int32_t liFrameNameIndex;

		// BrnEventInfo.cpp:1313
		const char * lpcPulseStartFrameName;

		rw::math::fpu::Clamp<int>(/* parameters */);
	}
	GuiCache::GetCurrentComboInEvent(/* parameters */);
	GuiCache::GetMultiplierInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1378
		float32_t lfProgression;

		// BrnEventInfo.cpp:1381
		int32_t liCurrentTotupScore;

		// BrnEventInfo.cpp:1382
		int32_t liCurrentTotupMultiplier;

		GuiCache::GetTime(/* parameters */);
		rw::math::fpu::IntRound<float>(/* parameters */);
		rw::math::fpu::IntRound<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		{
			// BrnEventInfo.cpp:1391
			char[128] lacNewText;

		}
	}
	GuiCache::GetNumberOfStuntsToDisplay(/* parameters */);
	{
		// BrnEventInfo.cpp:1545
		BrnGameState::EStuntType leStuntType;

	}
	GuiCache::GetStuntToDisplay(/* parameters */);
	GuiCache::GetCurrentComboInEvent(/* parameters */);
	GuiCache::GetCurrentComboInEvent(/* parameters */);
	GuiCache::GetMultiplierInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1471
		char[128] lacNewText;

	}
	GuiCache::GetTime(/* parameters */);
}

// BrnEventInfo.cpp:1878
void BrnGui::EventInfoComponent::UpdateTrafficAttack(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTargetScoreInEvent(/* parameters */);
	GuiCache::GetTargetScoreInEvent(/* parameters */);
	GuiCache::GetCurrentScoreInEvent(/* parameters */);
	GuiCache::GetCurrentScoreInEvent(/* parameters */);
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
}

// BrnEventInfo.cpp:183
void BrnGui::EventInfoComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:187
		int32_t liTextFieldIndex;

		// BrnEventInfo.cpp:204
		const char * lpComponentName;

		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::FileRef::ConstructEmpty(/* parameters */);
	CgsGui::StateInterface::IsUsingMetricUnits(/* parameters */);
}

// BrnEventInfo.cpp:262
void BrnGui::EventInfoComponent::Prepare(const char *  lacFullName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnEventInfo.cpp:284
void BrnGui::EventInfoComponent::PrepareComponentsForGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:287
		int32_t liTextFieldIndex;

	}
}

// BrnEventInfo.cpp:470
void BrnGui::EventInfoComponent::MoveAnimation(const char *  lpcAnimation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetEventType(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	SetEventState(/* parameters */);
	SetEventType(/* parameters */);
	SetEventType(/* parameters */);
}

// BrnEventInfo.cpp:1110
void BrnGui::EventInfoComponent::UpdateFreeBurnLobbyBasic(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventInfo.cpp:974
void BrnGui::EventInfoComponent::UpdateFreeBurnLobbyChallenge(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:976
		const ChallengeListEntry * lpChallengeEntry;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
	}
	FreeburnChallengeManager::GetCurrentChallenge(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
}

// BrnEventInfo.cpp:449
void BrnGui::EventInfoComponent::SetEventType(BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventInfo.cpp:1598
void BrnGui::EventInfoComponent::UpdatePursuit(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:1606
		char[128] lacNewText;

		GuiCache::GetPursuitCarID(/* parameters */);
	}
	{
		// BrnEventInfo.cpp:1611
		char[13] lacCarNameId;

		GuiCache::GetPursuitCarID(/* parameters */);
	}
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
	}
}

// BrnEventInfo.cpp:1964
void BrnGui::EventInfoComponent::UpdateDestinationText(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:1966
		LandmarkIndex lCurrentLandmark;

	}
	{
		// BrnEventInfo.cpp:1970
		const GuiTracker * lpGuiTracker;

		// BrnEventInfo.cpp:1973
		int32_t liIndex;

		GuiTracker::GetCurrentlyTrackedIndex(/* parameters */);
		GuiCache::GetOnlineLandmarkIndex(/* parameters */);
	}
	GuiCache::GetEventDestinationLandmarkIndex(/* parameters */);
	{
		// BrnEventInfo.cpp:1994
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lLandmarkInfo;

		// BrnEventInfo.cpp:1998
		const int32_t KI_MAX_DEST_STRING_LENGTH;

		// BrnEventInfo.cpp:1999
		char[32] lacDestinationString;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
}

// BrnEventInfo.cpp:1729
void BrnGui::EventInfoComponent::UpdateBurningRoute(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetTargetTimeInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1746
		int32_t lnMinutes;

		// BrnEventInfo.cpp:1747
		int32_t lnSeconds;

		// BrnEventInfo.cpp:1749
		char[128] lacNewText;

		GuiCache::GetTargetTimeInEvent(/* parameters */);
	}
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1759
		int32_t lnMinutes;

		// BrnEventInfo.cpp:1760
		int32_t lnSeconds;

		// BrnEventInfo.cpp:1762
		char[128] lacNewText;

		// BrnEventInfo.cpp:1766
		float32_t lfTimeLeft;

		GuiCache::GetCurrentTimeInEvent(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnEventInfo.cpp:1055
void BrnGui::EventInfoComponent::UpdateFreeBurnLobbyEvent(BrnGui::GuiCache *  lpCache, const BrnGui::GuiEventNetworkGameParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:1087
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEventInfo.cpp:929
void BrnGui::EventInfoComponent::UpdateFreeBurnLobby(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:945
		const BrnGui::GuiEventNetworkGameParams * lpParams;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
	}
}

// BrnEventInfo.cpp:1839
void BrnGui::EventInfoComponent::UpdateSurvivor(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetTargetTimeInEvent(/* parameters */);
	GuiCache::GetTargetTimeInEvent(/* parameters */);
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnEventInfo.cpp:2026
void BrnGui::EventInfoComponent::SetPositionData(BrnGui::GuiCache *  lpCache, EventInfoComponent::TextFieldComponentType *  lpPosition, EventInfoComponent::TextFieldComponentType *  lpNumberOfRivals) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetOpponentsInEvent(/* parameters */);
	GuiCache::GetOpponentsInEvent(/* parameters */);
	SetPositionTextState(/* parameters */);
}

// BrnEventInfo.cpp:1798
void BrnGui::EventInfoComponent::UpdateEliminator(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
	}
}

// BrnEventInfo.cpp:1669
void BrnGui::EventInfoComponent::UpdateFaceOff(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetDistanceInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1678
		char[128] lacNewText;

		GuiCache::GetDistanceInEvent(/* parameters */);
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
		{
		}
	}
	{
	}
}

// BrnEventInfo.cpp:900
void BrnGui::EventInfoComponent::UpdateOnlineRace(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
	}
}

// BrnEventInfo.cpp:2061
void BrnGui::EventInfoComponent::SetTakedownsTextState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.cpp:2063
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnEventInfo.cpp:2064
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEventInfo.cpp:1173
void BrnGui::EventInfoComponent::UpdateRoadRage(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetCurrentTimeInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:1180
		int32_t lnMinutes;

		// BrnEventInfo.cpp:1181
		int32_t lnSeconds;

		// BrnEventInfo.cpp:1183
		char[128] lacNewText;

		GuiCache::GetCurrentTimeInEvent(/* parameters */);
	}
	GuiCache::GetCurrentTakedownsInEvent(/* parameters */);
	GuiCache::GetCurrentTakedownsInEvent(/* parameters */);
	GuiCache::GetTargetTakedownsInEvent(/* parameters */);
	GuiCache::GetTargetTakedownsInEvent(/* parameters */);
}

// BrnEventInfo.cpp:806
void BrnGui::EventInfoComponent::UpdateRace(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	GuiCache::GetDistanceInEvent(/* parameters */);
	{
		// BrnEventInfo.cpp:868
		float32_t lfLargeDist;

		// BrnEventInfo.cpp:878
		float32_t lfProportion;

		CgsGui::StateInterface::IsUsingMetricUnits(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiCache::GetDistanceInEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
}

// BrnEventInfo.cpp:703
void BrnGui::EventInfoComponent::Update(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetGameMode(/* parameters */);
}

// BrnEventInfo.cpp:23
// BrnEventInfo.cpp:44
// BrnEventInfo.cpp:66
// BrnEventInfo.cpp:88
// BrnEventInfo.cpp:89
// BrnEventInfo.cpp:90
// BrnEventInfo.cpp:73
// BrnEventInfo.cpp:84
// BrnEventInfo.cpp:85
// BrnEventInfo.cpp:92
// BrnEventInfo.cpp:93
// BrnEventInfo.cpp:94
// BrnEventInfo.cpp:95
// BrnEventInfo.cpp:96
// BrnEventInfo.cpp:97
// BrnEventInfo.cpp:98
// BrnEventInfo.cpp:99
// BrnEventInfo.cpp:100
// BrnEventInfo.cpp:101
// BrnEventInfo.cpp:102
// BrnEventInfo.cpp:104
// BrnEventInfo.cpp:107
// BrnEventInfo.cpp:108
// BrnEventInfo.cpp:109
// BrnEventInfo.cpp:110
// BrnEventInfo.cpp:111
// BrnEventInfo.cpp:114
// BrnEventInfo.cpp:122
// BrnEventInfo.cpp:140
// BrnEventInfo.cpp:118
// BrnEventInfo.cpp:147
// BrnEventInfo.cpp:148
// BrnEventInfo.cpp:149
// BrnEventInfo.cpp:120
// BrnEventInfo.cpp:151
// BrnEventInfo.cpp:159
