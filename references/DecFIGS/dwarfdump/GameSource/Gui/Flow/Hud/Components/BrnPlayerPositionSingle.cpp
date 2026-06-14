// BrnPlayerPositionSingle.cpp:868
void BrnGui::PlayerPositionSingleComponent::IsChallengeWow(BrnResource::ChallengeListEntryAction::EChallengeDataType  leDataType, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerPositionSingle.cpp:889
void BrnGui::PlayerPositionSingleComponent::IsTodaysBestWow(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerPositionSingle.cpp:145
void BrnGui::PlayerPositionSingleData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

// BrnPlayerPositionSingle.cpp:351
void BrnGui::PlayerPositionSingleComponent::RenderValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionSingle.cpp:401
		const FreeburnChallengeManager * lpChallengeManager;

	}
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	{
		// BrnPlayerPositionSingle.cpp:374
		char[128] lacDistance;

		GuiCache::GetCheckpointsInEvent(/* parameters */);
	}
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	FreeburnChallengeManager::IsStarted(/* parameters */);
	{
		// BrnPlayerPositionSingle.cpp:622
		char[64] lacBuffer;

	}
	{
		// BrnPlayerPositionSingle.cpp:748
		char[128] lacTotal;

	}
	FreeburnChallengeManager::GetCurrentTargetType(/* parameters */);
	FreeburnChallengeManager::GetCurrentTargetType(/* parameters */);
	{
		// BrnPlayerPositionSingle.cpp:560
		char[64] lacBuffer;

	}
}

// BrnPlayerPositionSingle.cpp:230
void BrnGui::PlayerPositionSingleComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionSingle.cpp:232
		char[128] lacTempString;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnPlayerPositionSingle.cpp:174
void BrnGui::PlayerPositionSingleComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnFlaptComponent::Construct(/* parameters */);
	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	SetValueChanged(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnPlayerPositionSingle.cpp:264
void BrnGui::PlayerPositionSingleComponent::Update(PlayerPositionSingleData *  lpPlayerData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetValueChanged(/* parameters */);
	SetValueChanged(/* parameters */);
	{
		// BrnPlayerPositionSingle.cpp:292
		GuiAudioTriggerEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
	}
	{
		// BrnPlayerPositionSingle.cpp:275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPlayerPositionSingle.cpp:272
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPlayerPositionSingle.cpp:274
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPlayerPositionSingle.cpp:269
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPlayerPositionSingle.cpp:271
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPlayerPositionSingle.cpp:268
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPlayerPositionSingle.cpp:73
// BrnPlayerPositionSingle.cpp:34
// BrnPlayerPositionSingle.cpp:35
// BrnPlayerPositionSingle.cpp:37
// BrnPlayerPositionSingle.cpp:49
// BrnPlayerPositionSingle.cpp:57
// BrnPlayerPositionSingle.cpp:65
// BrnPlayerPositionSingle.cpp:75
// BrnPlayerPositionSingle.cpp:76
// BrnPlayerPositionSingle.cpp:79
// BrnPlayerPositionSingle.cpp:96
// BrnPlayerPositionSingle.cpp:118
