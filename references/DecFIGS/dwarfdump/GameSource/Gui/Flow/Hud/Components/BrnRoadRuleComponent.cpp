// CgsGuiShared.h:45
namespace BrnGui {
	// BrnRoadRuleComponent.cpp:104
	VecFloat[4][2] KAAVF_ROAD_SIGN_SIDE_OFFSETS;

	// BrnRoadRuleComponent.cpp:112
	VecFloat[4][2] KAAVF_ROAD_SIGN_CENTRE_OFFSETS;

	// BrnRoadRuleComponent.cpp:121
	const VecFloat KVF_MAX_ROAD_SIGN_SCREEN_RANGE;

	// BrnRoadRuleComponent.cpp:123
	VecFloat[2] KVF_ROAD_SIGN_CLOSE_OFFSET;

	// BrnRoadRuleComponent.cpp:124
	const VecFloat KVF_MAX_ROAD_SIGN_BASE_DISTANCE;

	// BrnRoadRuleComponent.cpp:125
	const VecFloat KVF_MAX_ROAD_SIGN_DISTANCE;

	// BrnRoadRuleComponent.cpp:126
	const VecFloat KVF_MAX_ROAD_SIGN_DISTANCE_RECIP;

	// BrnRoadRuleComponent.cpp:127
	const VecFloat KVF_ROAD_SIGN_HEIGHT_OFFSET;

	// BrnRoadRuleComponent.cpp:221
	const float32_t KF_CRASH_SCORE_SLIDE_SPEED;

	// BrnRoadRuleComponent.cpp:222
	const float32_t KF_CRASH_SCORE_SLIDE_SPEED_MINIMUM;

}

// BrnRoadRuleComponent.cpp:1978
void BrnGui::RoadRuleComponent::GetRoadSignColourInEvent(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState  leNavigationState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.cpp:2198
void BrnGui::RoadRuleComponent::RepositionUpcomingSign(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide  leSignSide) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:2204
		BrnGui::RoadRuleComponent::ERoadSignSizes leNewSignSize;

		// BrnRoadRuleComponent.cpp:2205
		const char * lpcNewSignSizeFrame;

	}
}

// BrnRoadRuleComponent.cpp:1774
void BrnGui::RoadRuleComponent::GetSignOffsetSizeAdjustment(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide  leRoadSide) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1776
		BrnGui::RoadRuleComponent::ERoadSignSizes leSideSignSize;

		// BrnRoadRuleComponent.cpp:1777
		BrnGui::RoadRuleComponent::ERoadSignSizes leCurrentSignSize;

	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1180
void BrnGui::RoadRuleComponent::GetNameOfRule(char *  lpcLeaderName, int32_t  liLeaderNameLength, const GuiEventRoadRuleEnter *  lpEvent, BrnStreetData::ScoreType  leRRType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.cpp:475
void BrnGui::RoadRuleComponent::HandleLeaveRoadEvent(CgsID  lRoadToLeave) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetCurrentSignState(/* parameters */);
}

// BrnRoadRuleComponent.cpp:497
void BrnGui::RoadRuleComponent::HandleEnterRoadEvent(const GuiEventRoadRuleEnter *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:521
		BrnStreetData::ScoreType leScoreType;

		BrnStreetData::operator++(/* parameters */);
	}
	SetCurrentSignState(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:512
		BrnStreetData::ScoreType leScoreType;

		BrnStreetData::operator++(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:386
void BrnGui::RoadRuleComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:390
		char[128] lacSubcomponentName;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1904
void BrnGui::RoadRuleComponent::GetRoadSignColour(const BrnGui::RoadRuleLeaderType *  laeRoadRuleLeaderTypes, CgsID  lRoadIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1906
		BrnGui::FlaptRoadSignIconComponent::ESignColour leReturnColour;

		// BrnRoadRuleComponent.cpp:1909
		BrnStreetData::ScoreType leActiveRR;

		GetActiveRoadRuleType(/* parameters */);
	}
	{
		// BrnRoadRuleComponent.cpp:1956
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:1935
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:2070
void BrnGui::RoadRuleComponent::AnimateCurrentCrash(BrnGui::RoadRuleComponent::EAnimationState  leNewState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:2072
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:2158
void BrnGui::RoadRuleComponent::SetUpcomingRoadAnimation(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState  leNavigationState, BrnGui::RoadRulesAnimator *  lpSignAnimator, BrnGui::RoadRuleComponent::EUpcomingRoadAnimState  leNewAnim) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:2165
		const char *const* lppcActiveAnimationSet;

	}
	{
		// BrnRoadRuleComponent.cpp:2171
		GuiEventRequestTraining lRequestTraining;

		OutputGuiEvent<BrnGui::GuiEventRequestTraining>(/* parameters */);
	}
	CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestTraining,40>::SetRawEvent(/* parameters */);
}

// BrnRoadRuleComponent.cpp:2010
void BrnGui::RoadRuleComponent::AnimateCurrentTime(BrnGui::RoadRuleComponent::EAnimationState  leNewState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsCurrentTimeLeaving(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:2020
		GuiEventSoundTrigger lAudioEvent;

		CgsCore::StrnCpy(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventSoundTrigger>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventSoundTrigger> >(/* parameters */);
	}
	{
		// BrnRoadRuleComponent.cpp:2012
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
		// BrnRoadRuleComponent.cpp:2018
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:1573
void BrnGui::RoadRuleComponent::ShowRoadRules(bool  lbShowRules) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.cpp:587
void BrnGui::RoadRuleComponent::HandleRoadRuleBegin(BrnStreetData::ScoreType  leRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:589
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:1343
void BrnGui::RoadRuleComponent::UpdateCurrentTime(float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1349
		bool lbWasSafe;

		// BrnRoadRuleComponent.cpp:1350
		bool lbWasDangerous;

		FlaptTimerFieldComponent::IsTimeSafe(/* parameters */);
		FlaptTimerFieldComponent::IsTimeDangerous(/* parameters */);
		FlaptTimerFieldComponent::IsTimeSafe(/* parameters */);
		{
			// BrnRoadRuleComponent.cpp:1359
			GuiEventSoundTrigger lAudioEvent;

			CgsCore::StrnCpy(/* parameters */);
			CgsCore::StrnCpy(/* parameters */);
			CgsCore::StrnCpy(/* parameters */);
			OutputGuiEvent<CgsGui::GuiEventSoundTrigger>(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventSoundTrigger> >(/* parameters */);
		}
		FlaptTimerFieldComponent::IsTimeDangerous(/* parameters */);
		{
			// BrnRoadRuleComponent.cpp:1370
			GuiEventRoadRuleFail lFailureMessage;

			// BrnRoadRuleComponent.cpp:1371
			char[32] lacBestTimeName;

			CgsCore::StrnCpy(/* parameters */);
			OutputGuiEvent<BrnGui::GuiEventRoadRuleFail>(/* parameters */);
			AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleFail> >(/* parameters */);
			IsCurrentTimeLeaving(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnRoadRuleComponent.cpp:1357
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:1542
void BrnGui::RoadRuleComponent::EndTimers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsCurrentTimeLeaving(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:1552
		GuiEventSoundTrigger lAudioEvent;

		CgsCore::StrnCpy(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		OutputGuiEvent<CgsGui::GuiEventSoundTrigger>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventSoundTrigger> >(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRoadRuleComponent.cpp:1550
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:244
void BrnGui::RoadRuleComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, int32_t  liParentAptLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:254
		int32_t liRuleIndex;

		// BrnRoadRuleComponent.cpp:256
		const char * lpcParentName;

		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	FlaptTimerFieldComponent::SetSafeColours(/* parameters */);
	FlaptTimerFieldComponent::SetDangerColours(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

// BrnRoadRuleComponent.cpp:940
void BrnGui::RoadRuleComponent::RefreshBestData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:954
		float32_t lfLeadingTime;

		// BrnRoadRuleComponent.cpp:955
		float32_t lfSafeTime;

		// BrnRoadRuleComponent.cpp:989
		char[32] lacBestTimeName;

		rw::math::vpu::Max<float>(/* parameters */);
		FlaptTimerFieldComponent::SetCountingMode(/* parameters */);
		GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
		GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
	}
	{
		// BrnRoadRuleComponent.cpp:1018
		char[32] lacBestCrashName;

		GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
		GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
	}
	FlaptTimerFieldComponent::SetCountingMode(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1738
void BrnGui::RoadRuleComponent::UpdateRoadSignDistance(const rw::math::vpu::Vector3  lPlayerPosition, BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide  leRoadSide, const VecFloat  lvfDirection, BrnGui::RoadRulesRoadSign *  lpSign) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1740
		Vector3 lJoin;

		{
			// BrnRoadRuleComponent.cpp:1748
			VecFloat lvfDistanceToRoad;

			// BrnRoadRuleComponent.cpp:1749
			VecFloat lvfOffset;

			rw::math::vpu::Magnitude(/* parameters */);
		}
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1718
void BrnGui::RoadRuleComponent::UpdateRoadSignDistances(const rw::math::vpu::Vector3  lPlayerPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.cpp:2115
void BrnGui::RoadRuleComponent::RefreshSignColours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:2117
		BrnGui::FlaptRoadSignIconComponent::ESignColour leRequiredColour;

	}
}

// BrnRoadRuleComponent.cpp:1235
void BrnGui::RoadRuleComponent::Update(float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1237
		float32_t lfCrashScoreDiff;

		// BrnRoadRuleComponent.cpp:1238
		float32_t lfAbsCrashScoreDiff;

		rw::math::fpu::IsZero(/* parameters */);
	}
	rw::math::fpu::Abs<float>(/* parameters */);
	GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:1292
		BrnStreetData::ScoreType leScoreType;

		BrnStreetData::operator++(/* parameters */);
	}
	{
		// BrnRoadRuleComponent.cpp:1257
		char[32] lacCurrentCrash;

		// BrnRoadRuleComponent.cpp:1258
		UnicodeBuffer::CgsUtf8[32] laScore;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
	{
		// BrnRoadRuleComponent.cpp:1283
		BrnStreetData::ScoreType leScoreType;

		BrnStreetData::operator++(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:807
void BrnGui::RoadRuleComponent::SwitchModes(const BrnGameState::EActiveRoadRule  leRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:837
		int32_t liCurrentRule;

	}
	{
		// BrnRoadRuleComponent.cpp:809
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:1523
void BrnGui::RoadRuleComponent::InitialiseMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.cpp:668
void BrnGui::RoadRuleComponent::HandleRoadRuleEnd(const GuiEventRoadRuleEnd *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:671
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	FlaptTimerFieldComponent::IsTimeDangerous(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:548
void BrnGui::RoadRuleComponent::HandleRoadRuleTargetUpdate(const GuiEventRoadRuleUpdateTargetScores *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:555
		BrnStreetData::ScoreType leScoreType;

		GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
	}
	BrnStreetData::operator++(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1822
void BrnGui::RoadRuleComponent::UpdateUpcomingRoadSign(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide  leRoadSide, BrnGui::RoadRulesRoadSign *  lpSign, BrnGui::RoadRulesAnimator *  lpSignAnimator, const GuiEventRoadRuleUpcomingRoads *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsSameAsCurrentRoad(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:1864
		BrnGui::FlaptRoadSignIconComponent::ESignColour leRequiredColour;

		ShouldUseInEventColouring(/* parameters */);
	}
}

// BrnRoadRuleComponent.cpp:745
void BrnGui::RoadRuleComponent::HandleUpcomingRoadEvent(const GuiEventRoadRuleUpcomingRoads *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:761
		GuiEventRoadRuleUpcomingRoads lNewUpcomingRoadData;

	}
	UpdateUpcomingRoadLeaders(/* parameters */);
	GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
	{
		BrnStreetData::operator++(/* parameters */);
	}
	{
		BrnStreetData::operator++(/* parameters */);
	}
	UpdateUpcomingRoadLeaders(/* parameters */);
	ShouldUseInEventColouring(/* parameters */);
	{
		// BrnRoadRuleComponent.cpp:770
		BrnGui::FlaptRoadSignIconComponent::ESignColour leRoadSignColour;

	}
	BrnStreetData::operator++(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1640
void BrnGui::RoadRuleComponent::ShowUpcomingRoads(bool  lbShowRoads) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1675
		BrnGui::FlaptRoadSignIconComponent::ESignColour leRequiredColour;

	}
	{
		// BrnRoadRuleComponent.cpp:1695
		BrnGui::FlaptRoadSignIconComponent::ESignColour leRequiredColour;

	}
}

// BrnRoadRuleComponent.cpp:880
void BrnGui::RoadRuleComponent::EnterRoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:912
		int32_t liRuleIndex;

		// BrnRoadRuleComponent.cpp:923
		BrnGui::FlaptRoadSignIconComponent::ESignColour leRequiredColour;

		SetCurrentSignState(/* parameters */);
	}
	SetCurrentSignState(/* parameters */);
}

// BrnRoadRuleComponent.cpp:1406
void BrnGui::RoadRuleComponent::TransitionComplete(int32_t  liTransitionIdentifier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:1507
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	IsCurrentTimeLeaving(/* parameters */);
}

// BrnRoadRuleComponent.cpp:2229
void BrnGui::RoadRuleComponent::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.cpp:2232
		RoadRuleComponent * lpThis;

	}
}

// BrnRoadRuleComponent.cpp:23
// BrnRoadRuleComponent.cpp:94
// BrnRoadRuleComponent.cpp:96
// BrnRoadRuleComponent.cpp:129
// BrnRoadRuleComponent.cpp:140
// BrnRoadRuleComponent.cpp:148
// BrnRoadRuleComponent.cpp:178
// BrnRoadRuleComponent.cpp:175
// BrnRoadRuleComponent.cpp:180
// BrnRoadRuleComponent.cpp:181
// BrnRoadRuleComponent.cpp:182
// BrnRoadRuleComponent.cpp:183
// BrnRoadRuleComponent.cpp:184
// BrnRoadRuleComponent.cpp:185
// BrnRoadRuleComponent.cpp:188
// BrnRoadRuleComponent.cpp:189
// BrnRoadRuleComponent.cpp:190
// BrnRoadRuleComponent.cpp:195
// BrnRoadRuleComponent.cpp:196
// BrnRoadRuleComponent.cpp:197
// BrnRoadRuleComponent.cpp:199
// BrnRoadRuleComponent.cpp:200
// BrnRoadRuleComponent.cpp:202
// BrnRoadRuleComponent.cpp:203
// BrnRoadRuleComponent.cpp:157
// BrnRoadRuleComponent.cpp:166
// BrnRoadRuleComponent.cpp:205
// BrnRoadRuleComponent.cpp:206
// BrnRoadRuleComponent.cpp:211
// BrnRoadRuleComponent.cpp:212
// BrnRoadRuleComponent.cpp:214
// BrnRoadRuleComponent.cpp:215
// BrnRoadRuleComponent.cpp:216
// BrnRoadRuleComponent.cpp:217
// BrnRoadRuleComponent.cpp:218
// BrnRoadRuleComponent.cpp:219
