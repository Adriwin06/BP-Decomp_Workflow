// BrnGuiFreeburnChallengeManager.cpp:301
void BrnGui::FreeburnChallengeManager::SelectNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiFreeburnChallengeManager.cpp:181
void BrnGui::FreeburnChallengeManager::EndNotActiveChallenge() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiFreeburnChallengeManager.cpp:331
void BrnGui::FreeburnChallengeManager::HandleCompletionStatus(const GuiEventFburnChallengeEveryPlayerStatus *  lpCompletionEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiFreeburnChallengeManager.cpp:285
void BrnGui::FreeburnChallengeManager::FinishChallenge() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiFreeburnChallengeManager.cpp:346
void BrnGui::FreeburnChallengeManager::GetCurrentContributionOverall() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFreeburnChallengeManager.cpp:348
		float32_t lfCurrentTotal;

		// BrnGuiFreeburnChallengeManager.cpp:349
		EActiveRaceCarIndex leCurrentCar;

		GetCurrentContributionForARCI(/* parameters */);
		operator++(/* parameters */);
	}
}

// BrnGuiFreeburnChallengeManager.cpp:252
void BrnGui::FreeburnChallengeManager::HandleNewData(const GuiChallengeUpdateEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// BrnGuiFreeburnChallengeManager.cpp:44
void BrnGui::FreeburnChallengeManager::Construct(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::Construct(/* parameters */);
}

// BrnGuiFreeburnChallengeManager.cpp:73
void BrnGui::FreeburnChallengeManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
}

// BrnGuiFreeburnChallengeManager.cpp:164
void BrnGui::FreeburnChallengeManager::StartNotActiveChallenge(const GuiChallengeNotActiveStartEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetFreeburnChallengeList(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
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

// BrnGuiFreeburnChallengeManager.cpp:112
void BrnGui::FreeburnChallengeManager::StartChallenge(const GuiChallengeStartEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFreeburnChallengeManager.cpp:114
		const ChallengeListEntryAction * lpCurrentAction;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetCurrentAction(/* parameters */);
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	{
		// BrnGuiFreeburnChallengeManager.cpp:139
		int32_t liIndex;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
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

// BrnGuiFreeburnChallengeManager.cpp:198
void BrnGui::FreeburnChallengeManager::TriggerChallenge(const GuiChallengeTriggerResponse *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFreeburnChallengeManager.cpp:200
		const ChallengeListEntryAction * lpCurrentAction;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetCurrentAction(/* parameters */);
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetCombineAction(/* parameters */);
	{
		// BrnGuiFreeburnChallengeManager.cpp:227
		int32_t liIndex;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
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

// BrnGuiFreeburnChallengeManager.cpp:25
