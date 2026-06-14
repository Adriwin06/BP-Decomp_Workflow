// BrnGuiCache.cpp:3772
void BrnGui::GuiCache::GetStateLoadingHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:1189
void BrnGui::StateLoadingHelper::GetAptComponentInfo(uint32_t  luIndex, BrnGui::GuiFlow  leGuiFlow, bool *  lbIsUsed, bool *  lbIsLoaded, uint32_t *  luHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:343
void BrnGui::StateLoadingHelper::GetLoadedResource(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:966
void BrnGui::StateLoadingHelper::ClearExpectedControlledObjects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:3746
void BrnGui::GuiCache::GetOnlinePlayerInfoForWriting(const RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3748
		int32_t liIndex;

	}
}

// BrnGuiCache.cpp:3965
void BrnGui::GuiCache::HandleSetActiveLandmarksEvent(const GuiEventSetActiveLandmarks *  lpActiveLandmarksEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3969
		uint32_t luIndex;

	}
}

// BrnGuiCache.cpp:3151
void BrnGui::GuiCache::GetLoadedResource(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:3398
void BrnGui::GuiCache::ClearExpectedControlledAptComponentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:3882
void BrnGui::GuiCache::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:3897
void BrnGui::GuiCache::GetPlayerNameInQuotes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:3940
void BrnGui::GuiCache::GetRivalryStageFromRivalId(CgsID  lRivalID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3942
		BrnGui::ERivalryStage leStage;

		// BrnGuiCache.cpp:3944
		int32_t liIndex;

	}
}

// BrnGuiCache.cpp:4205
void BrnGui::GuiCache::IsMultiplayerAllowed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:4207
		bool lbMultiplayerAllowed;

		// BrnGuiCache.cpp:4237
		int32_t liError;

		// BrnGuiCache.cpp:4238
		int32_t liIsRestricted;

		// BrnGuiCache.cpp:4239
		int32_t liAge;

	}
}

// BrnGuiCache.cpp:72
void BrnGui::StateLoadingHelper::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:74
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:75
		int32_t liIndex;

		// BrnGuiCache.cpp:76
		uint32_t luIndex;

	}
	ResourceInfo::Construct(/* parameters */);
	CgsContainers::Array<uint32_t,228u>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3640
void BrnGui::GuiCache::GetEventStartInfoFromIndex(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3642
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetEventStart(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetItem(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiCache.cpp:192
void BrnGui::StateLoadingHelper::EnsureResourceIsLoaded(const const sResourceTuple &  lResourceTuple) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:197
		uint32_t luId;

		// BrnGuiCache.cpp:198
		const BrnGui::StateLoadingHelper::ResourceInfo & lResourceInfo;

		// BrnGuiCache.cpp:199
		BrnGui::StateLoadingHelper::EResourceState lePreviousState;

	}
	{
		// BrnGuiCache.cpp:258
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<uint32_t,228u>::EraseInstancesOf(/* parameters */);
	CgsContainers::Array<uint32_t,228u>::Append(/* parameters */);
	{
		// BrnGuiCache.cpp:194
		CgsDev::StrStream lStrStream;

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
		// BrnGuiCache.cpp:210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3118
void BrnGui::GuiCache::EnsureResourceIsLoaded(const const sResourceTuple &  lResourceTuple) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:285
void BrnGui::StateLoadingHelper::EnsureResourcesAreLoaded(const sResourceTuple *  laResourceTuples, uint32_t  luNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:292
		uint32_t luActualUnloadPendingCount;

		// BrnGuiCache.cpp:293
		uint32_t luIndex;

		// BrnGuiCache.cpp:320
		bool lbAllResourcesLoaded;

	}
	{
		// BrnGuiCache.cpp:308
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:322
		uint32_t luIndex;

	}
}

// BrnGuiCache.cpp:3135
void BrnGui::GuiCache::EnsureResourcesAreLoaded(const sResourceTuple *  laResourceTuples, uint32_t  luNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:363
void BrnGui::StateLoadingHelper::UnloadResource(const const sResourceTuple &  lResourceTuple) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:365
		uint32_t luId;

		// BrnGuiCache.cpp:366
		const BrnGui::StateLoadingHelper::ResourceInfo & lResourceInfo;

		// BrnGuiCache.cpp:367
		BrnGui::StateLoadingHelper::EResourceState lePreviousState;

	}
	{
		// BrnGuiCache.cpp:429
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<uint32_t,228u>::EraseInstancesOf(/* parameters */);
	CgsContainers::Array<uint32_t,228u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	IncrementUnloadPending(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:379
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	IncrementUnloadPending(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGuiCache.cpp:3170
void BrnGui::GuiCache::UnloadResource(const const sResourceTuple &  lResourceTuple) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:475
void BrnGui::StateLoadingHelper::UnloadAllResources(CgsGui::ResourceRequestTypes  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:477
		uint32_t luIndex;

		{
			// BrnGuiCache.cpp:481
			sResourceTuple lResourceTuple;

		}
	}
}

// BrnGuiCache.cpp:3205
void BrnGui::GuiCache::UnloadAllResources(CgsGui::ResourceRequestTypes  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:455
void BrnGui::StateLoadingHelper::UnloadResources(const sResourceTuple *  laResourceTuples, uint32_t  luNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:457
		uint32_t luIndex;

	}
}

// BrnGuiCache.cpp:3188
void BrnGui::GuiCache::UnloadResources(const sResourceTuple *  laResourceTuples, uint32_t  luNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:502
void BrnGui::StateLoadingHelper::EnsureResourceIsUnloaded(const const sResourceTuple &  lResourceTuple) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:507
		bool lbIsUnloaded;

		// BrnGuiCache.cpp:509
		const BrnGui::StateLoadingHelper::ResourceInfo & lResourceInfo;

	}
	{
		// BrnGuiCache.cpp:504
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3222
void BrnGui::GuiCache::EnsureResourceIsUnloaded(const const sResourceTuple &  lResourceTuple) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:536
void BrnGui::StateLoadingHelper::EnsureResourcesAreUnloaded(const sResourceTuple *  laResourceTuples, uint32_t  luNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:539
		int32_t liIndex;

		// BrnGuiCache.cpp:550
		bool lbAllResourcesUnloaded;

	}
}

// BrnGuiCache.cpp:3239
void BrnGui::GuiCache::EnsureResourcesAreUnloaded(const sResourceTuple *  laResourceTuples, uint32_t  luNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:574
void BrnGui::StateLoadingHelper::OnLoadNotification(const GuiEventLoadNotification *  lpLoadEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:581
		uint32_t luId;

		// BrnGuiCache.cpp:582
		const BrnGui::StateLoadingHelper::ResourceInfo & lResourceInfo;

	}
	{
		// BrnGuiCache.cpp:633
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:578
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:607
		sResourceTuple lResourceTuple;

		DecrementUnloadPending(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:620
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGuiCache.cpp:576
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:593
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:602
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:650
void BrnGui::StateLoadingHelper::OnUnloadNotification(const GuiEventUnloadNotification *  lpUnloadEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:657
		uint32_t luId;

		// BrnGuiCache.cpp:658
		const BrnGui::StateLoadingHelper::ResourceInfo & lResourceInfo;

	}
	{
		// BrnGuiCache.cpp:704
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:654
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:681
		sResourceTuple lResourceTuple;

		DecrementUnloadPending(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	DecrementUnloadPending(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGuiCache.cpp:652
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:723
void BrnGui::StateLoadingHelper::SetExpectedAptComponentList(BrnGui::GuiFlow  leFlow, uint32_t *  lauExpectedComponentIds, uint32_t  luNumExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:726
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:735
		uint32_t luIndex;

	}
	{
		// BrnGuiCache.cpp:725
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:729
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:730
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3271
void BrnGui::GuiCache::SetExpectedAptComponentList(BrnGui::GuiFlow  leFlow, uint32_t *  lauExpectedComponentIds, uint32_t  luNumExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:753
void BrnGui::StateLoadingHelper::AppendExpectedAptComponentList(BrnGui::GuiFlow  leFlow, uint32_t *  lauExpectedComponentIds, uint32_t  luNumExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:756
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:764
		uint32_t luIndex;

	}
	{
		// BrnGuiCache.cpp:755
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:761
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3317
void BrnGui::GuiCache::AppendExpectedAptComponentList(BrnGui::GuiFlow  leFlow, uint32_t *  lauExpectedComponentIds, uint32_t  luNumExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:829
void BrnGui::StateLoadingHelper::RemoveExpectedAptComponent(BrnGui::GuiFlow  leFlow, uint32_t  luExpectedComponentId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:831
		uint32_t luIndex;

		// BrnGuiCache.cpp:834
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

	}
	{
		// BrnGuiCache.cpp:833
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3332
void BrnGui::GuiCache::RemoveExpectedAptComponent(BrnGui::GuiFlow  leFlow, uint32_t  luExpectedAptComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:808
void BrnGui::StateLoadingHelper::RemoveExpectedAptComponentList(BrnGui::GuiFlow  leFlow, uint32_t *  lauExpectedComponentIds, uint32_t  luNumExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:812
		uint32_t luIndex;

	}
	{
		// BrnGuiCache.cpp:810
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3348
void BrnGui::GuiCache::RemoveExpectedAptComponentlist(BrnGui::GuiFlow  leFlow, uint32_t *  lauExpectedAptComponentIds, uint32_t  luNumExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:865
void BrnGui::StateLoadingHelper::IsWaitingAptComponent(BrnGui::GuiFlow  leFlow, uint32_t  luAptComponentId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:868
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:871
		uint32_t luIndex;

	}
	{
		// BrnGuiCache.cpp:867
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3431
void BrnGui::GuiCache::IsWaitingAptComponent(BrnGui::GuiFlow  leFlow, uint32_t  luAptComponentId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:782
void BrnGui::StateLoadingHelper::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, uint32_t  luExpectedComponentId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:785
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

	}
	{
		// BrnGuiCache.cpp:790
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:788
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:784
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3301
void BrnGui::GuiCache::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
}

// BrnGuiCache.cpp:3286
void BrnGui::GuiCache::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, uint32_t  lauExpectedComponentId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:893
void BrnGui::StateLoadingHelper::AreAllAptComponentsInitialised(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:896
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:899
		bool lbAllLoaded;

		// BrnGuiCache.cpp:901
		uint32_t luIndex;

	}
	{
		// BrnGuiCache.cpp:895
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3414
void BrnGui::GuiCache::AreAllAptComponentsInitialised(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:924
void BrnGui::StateLoadingHelper::AppendExpectedControlledObject(uint32_t  luHashedComponentName, CgsGui::ObjectController *  lpObjectController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:928
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:926
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:927
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:945
void BrnGui::StateLoadingHelper::AppendExpectedControlledObject(const char *  lpComponentName, CgsGui::ObjectController *  lpObjectController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:951
		uint32_t luHashedName;

	}
	{
		// BrnGuiCache.cpp:949
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// BrnGuiCache.cpp:948
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:947
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:982
void BrnGui::StateLoadingHelper::MarkAptComponentInitialised(const GuiEventAptTrigger *  lpAptTriggerEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:984
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:985
		uint32_t luIndex;

		// BrnGuiCache.cpp:986
		int32_t liFlow;

	}
	{
		// BrnGuiCache.cpp:988
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.cpp:1010
		CgsGui::ObjectController * lpController;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiCache.cpp:1037
void BrnGui::StateLoadingHelper::ClearComponentInitialised(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:1040
		BrnGui::StateLoadingHelper::ComponentsToWatch * lpComponentsToWatch;

		// BrnGuiCache.cpp:1043
		uint32_t luIndex;

	}
	{
		// BrnGuiCache.cpp:1039
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3253
void BrnGui::GuiCache::ClearExpectedAptComponentList(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:1061
void BrnGui::StateLoadingHelper::AppendResourceInfo(uint32_t  luIndex, CgsDev::StrStream &  lStream) {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiCache.cpp:3062
void BrnGui::GuiCache::GetOriginalCarId(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3070
		const BrnResource::VehicleList * lpVehicleList;

		// BrnGuiCache.cpp:3073
		const VehicleListEntry * lpVehicleListEntry;

		// BrnGuiCache.cpp:3083
		CgsID lParentCarId;

		// BrnGuiCache.cpp:3089
		const VehicleListEntry * lpParentVehicleListEntry;

		// BrnGuiCache.cpp:3096
		CgsID lParentOfParentCarId;

	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
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
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
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

// BrnGuiCache.cpp:3363
void BrnGui::GuiCache::AppendExpectedControlledAptComponent(uint32_t  luNameHash, CgsGui::ObjectController *  lpObjectController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3365
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:3366
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3381
void BrnGui::GuiCache::AppendExpectedControlledAptComponent(const char *  lpComponentName, CgsGui::ObjectController *  lpObjectController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3385
		uint32_t luNameHash;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// BrnGuiCache.cpp:3384
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:3383
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3658
void BrnGui::GuiCache::GetEventStartInfoFromLightTriggerID(LightTriggerId  lLightTriggerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3660
		uint32_t luIndex;

		// BrnGuiCache.cpp:3661
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetEventStart(/* parameters */);
		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetNumEventStarts(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:3672
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnWorld::TriggerId::GetIndex(/* parameters */);
	}
}

// BrnGuiCache.cpp:3687
void BrnGui::GuiCache::GetEventStartInfoFromJunctionID(const uint32_t  luJunctionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3689
		uint32_t luIndex;

		// BrnGuiCache.cpp:3690
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetEventStart(/* parameters */);
		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetNumEventStarts(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:3701
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3716
void BrnGui::GuiCache::GetEventStartInfoFromEventID(const int32_t  liEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3718
		uint32_t luIndex;

		// BrnGuiCache.cpp:3719
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetEventStart(/* parameters */);
		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetNumEventStarts(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:3731
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3911
void BrnGui::GuiCache::GetActiveRaceCarFromRivalId(CgsID  lRivalID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3913
		EActiveRaceCarIndex leRaceCar;

		operator++(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// BrnGuiCache.cpp:3987
void BrnGui::GuiCache::HandleSpecificPreSetRacesEvent(const GuiEventSpecificPresetRaces *  lpPreSetRacesEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3989
		int32_t liIndex1;

		// BrnGuiCache.cpp:3990
		int32_t liIndex2;

		// BrnGuiCache.cpp:3992
		LandmarkIndex lLandmarkIndex;

	}
	CgsContainers::BitArray<256u>::SetBit(/* parameters */);
	GetNumPresetEvents(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:3994
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:4150
void BrnGui::GuiCache::GetOnlinePlayerColourFromARCI(EActiveRaceCarIndex  leRequestedIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:4152
		int32_t liPlayerIndex;

		IsActiveRaceCarDisconnected(/* parameters */);
	}
	IsOnlinePlayerEliminated(/* parameters */);
	{
		// BrnGuiCache.cpp:4167
		const LobbyPlayerStatusData * lpLobbyData;

		GetActiveRaceCarFromNetworkId(/* parameters */);
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
	}
	{
		// BrnGuiCache.cpp:4183
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:1219
void BrnGui::GuiCache::Construct(BrnGui::GuiTracker *  lpGuiTracker, SystemUserProfile *  lpSystemUserProfile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:1221
		int32_t liIndex;

		// BrnGuiCache.cpp:1384
		EActiveRaceCarIndex leCurrentARCI;

	}
	BrnWorld::WorldRegion::Construct(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData::Clear(/* parameters */);
	BrnNetwork::CommonRelationship::Clear(/* parameters */);
	BrnNetwork::CommonRelationshipStats::Clear(/* parameters */);
	GuiRaceCarInfoEvent::Construct(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Construct(/* parameters */);
	GuiTrafficCarInfoEvent::Construct(/* parameters */);
	operator++(/* parameters */);
	GuiPlayerInfo::Construct(/* parameters */);
	CgsGui::GuiEventTimeInfo::Construct(/* parameters */);
	GuiEventNetworkGameParams::Construct(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Construct(/* parameters */);
	InGameMessagesQueue::Construct(/* parameters */);
	GuiEventPreRaceMessages::Construct(/* parameters */);
	CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:1223
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3588
void BrnGui::GuiCache::GetOnlineFinishPoint(int32_t  liIndexIn, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpLandmarkInfoOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3590
		int32_t liSetBit;

		// BrnGuiCache.cpp:3591
		int32_t liCurrentIndex;

		// BrnGuiCache.cpp:3593
		const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * lpEventWithUniqueFinish;

		// BrnGuiCache.cpp:3610
		const Landmark * lpLandmark;

	}
	CgsContainers::BitArray<256u>::CountSetBits(/* parameters */);
	CgsContainers::BitArray<256u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<256u>::GetNextNonZeroBit(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetEvent(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetActiveRaceCarIndex(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3518
void BrnGui::GuiCache::GetLandmarkInfoFromIndex(LandmarkIndex  lLandmarkIndex, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpLandmarkInfoOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3522
		const Landmark * lpLandmark;

	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetActiveRaceCarIndex(/* parameters */);
}

// BrnGuiCache.cpp:3552
void BrnGui::GuiCache::GetLandmarkInfoFromID(CgsID  lLandmarkID, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpLandmarkInfoOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3556
		const Landmark * lpLandmark;

	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetActiveRaceCarIndex(/* parameters */);
}

// BrnGuiCache.cpp:3449
void BrnGui::GuiCache::GetLandmarkInfoAtPositionInList(int32_t  liIndexIn, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpLandmarkInfoOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3453
		const Landmark * lpLandmark;

	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetActiveRaceCarIndex(/* parameters */);
}

// BrnGuiCache.cpp:3484
void BrnGui::GuiCache::GetOnlineLandmarkInfoAtPositionInList(int32_t  liIndexIn, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpLandmarkInfoOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3488
		const Landmark * lpLandmark;

	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetDistrict(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::SetActiveRaceCarIndex(/* parameters */);
}

// BrnGuiCache.cpp:4072
void BrnGui::GuiCache::HACK_FindABetterPlaceForMe_SetActiveLandmarksByEventID(uint32_t  luEventID, float32_t  lfProgression, bool  lbRestoreActiveTrackerPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:4074
		GuiEventSetTracker lSetTrackerEvent;

		// BrnGuiCache.cpp:4075
		GuiEventSetActiveLandmarks lActiveLandmarks;

		// BrnGuiCache.cpp:4076
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lLandmarkInfo;

		// BrnGuiCache.cpp:4077
		const BrnProgression::RaceEventData * lpRaceEventData;

		// BrnGuiCache.cpp:4078
		int32_t liIndex;

		// BrnGuiCache.cpp:4079
		int32_t liNumCheckpoints;

		GuiEventSetTracker(/* parameters */);
		GuiEventSetActiveLandmarks(/* parameters */);
		GetWorldDataController(/* parameters */);
		BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
	}
	GetCheckpointReached(/* parameters */);
}

// BrnGuiCache.cpp:3845
void BrnGui::GuiCache::UpdateTrackerInfo(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3848
		uint32_t luNumLandmarks;

		// BrnGuiCache.cpp:3849
		GuiEventSetTracker lSetTrackerEvent;

		// BrnGuiCache.cpp:3853
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lSatNavInfo;

		// BrnGuiCache.cpp:3854
		uint32_t luIndex;

	}
	GuiEventSetTracker(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:3867
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3811
void BrnGui::GuiCache::UpdateTrackerInfo(const LandmarkIndex *  lpLandmarkIndices, uint32_t  luNumLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:3815
		GuiEventSetTracker lSetTrackerEvent;

		// BrnGuiCache.cpp:3819
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lSatNavInfo;

		// BrnGuiCache.cpp:3820
		uint32_t luIndex;

	}
	GuiEventSetTracker(/* parameters */);
	{
		// BrnGuiCache.cpp:3832
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiCache.cpp:3789
void BrnGui::GuiCache::RefreshMapState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:1516
void BrnGui::GuiCache::RecEvent(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:2370
		const GuiMugshotControlEvent * lpControlEvent;

	}
	{
		// BrnGuiCache.cpp:2543
		const GuiEventActiveUserIndex * lpActiveUserIndex;

	}
	{
		// BrnGuiCache.cpp:1746
		const GuiEventLoadNotification * lpLoadEvent;

	}
	{
		// BrnGuiCache.cpp:1762
		const GuiEventUnloadNotification * lpUnloadEvent;

	}
	{
		// BrnGuiCache.cpp:1776
		const GuiEventAptTrigger * lpAptTrigger;

	}
	{
		// BrnGuiCache.cpp:1964
		const GuiEventTimeInfo * lpTimeInfo;

	}
	{
		// BrnGuiCache.cpp:2856
		const GuiEventSetSku * lpEventSetSku;

	}
	{
		// BrnGuiCache.cpp:2863
		const GuiEventSetLanguageNotification * lpNotificationEvent;

	}
	{
		// BrnGuiCache.cpp:2993
		const GuiEventLoadingScreenState * lpLoadingScreenStateEvent;

	}
	SetFriendsListWaitReason(/* parameters */);
	{
		// BrnGuiCache.cpp:1971
		int32_t liIndex;

		// BrnGuiCache.cpp:1979
		EActiveRaceCarIndex leCurrentARCI;

		operator++(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2626
		const GuiEventChangeReplayState * lpNewRecordState;

	}
	{
		// BrnGuiCache.cpp:1989
		int32_t liIndex;

		// BrnGuiCache.cpp:1992
		const GuiEventPrepareForModeStart * lpGuiEventPrepareForModeStart;

		GuiEventOnlinePostEvent::Clear(/* parameters */);
		CgsSystem::Time::SetFloatVal(/* parameters */);
		{
			// BrnGuiCache.cpp:2043
			int32_t liIndex;

		}
		{
			// BrnGuiCache.cpp:2090
			int32_t liIndex;

			// BrnGuiCache.cpp:2097
			EActiveRaceCarIndex leCurrentARCI;

			operator++(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:2764
		const GuiEventFriendListShowing * lpFriendListShowingEvent;

	}
	{
		// BrnGuiCache.cpp:2321
		const GuiSetEasyDriveNotAllowedEvent * lpEasyDriveNotAllowed;

	}
	{
		// BrnGuiCache.cpp:1678
		const GuiEventOnlineTimeout * lpTimeoutEvent;

	}
	{
		// BrnGuiCache.cpp:2453
		const GuiEnteredJunkyard * lpEnteredJunkyardEvent;

	}
	{
		// BrnGuiCache.cpp:2460
		const GuiCarSelectStartEvent * lpStartEvent;

	}
	{
		// BrnGuiCache.cpp:2738
		const GuiCarUnlockNewCarEvent * lpNewCarEvent;

	}
	GuiEventPreRaceMessages::Construct(/* parameters */);
	{
		// BrnGuiCache.cpp:1700
		const GuiEventChangeDistrict * lpChangeDistrict;

	}
	{
		// BrnGuiCache.cpp:1728
		const GuiEventSetAvailablePresetRaces * lpSaprEvent;

		// BrnGuiCache.cpp:1737
		const int32_t liRaceNo;

	}
	{
		// BrnGuiCache.cpp:1879
		const GuiEventUpdateHud * lpUpdateHudEvent;

	}
	{
		// BrnGuiCache.cpp:2508
		int32_t liIndex;

		// BrnGuiCache.cpp:2516
		EActiveRaceCarIndex leCurrentARCI;

		operator++(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2648
		const GuiDirtyTrickNewEvent * lpDTNewEvent;

	}
	{
		// BrnGuiCache.cpp:2666
		const GuiDirtyTrickTriggerEvent * lpDirtyTrickTriggeredEvent;

	}
	{
		// BrnGuiCache.cpp:2467
		const GuiEventActivateCarSelect * lpActivateCarSelectEvent;

	}
	{
		// BrnGuiCache.cpp:1532
		const GuiEventUpdateSatNav * lpSatNavInfo;

		// BrnGuiCache.cpp:1535
		int32_t liNumberOfLandmarksToHandle;

		// BrnGuiCache.cpp:1538
		int32_t liIndex;

		rw::math::vpu::Min<int>(/* parameters */);
		{
			// BrnGuiCache.cpp:1541
			const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpSatNavIconInfo;

			GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
			IsActiveRaceCarIndexUsed(/* parameters */);
			GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
			GuiEventUpdateSatNav::SatNavIconInfo::GetDistrict(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:1621
		const GuiEventHideDriveThru * lpHideEvent;

		// BrnGuiCache.cpp:1622
		int32_t liDriveThruIndex;

	}
	{
		// BrnGuiCache.cpp:2882
		const GuiEventProgressionProfileData * lpProfileEvent;

		DetermineCarUnlockPending(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2565
		const GuiNetworkRemotePlayerDisconnectEvent * lpRemotePlayerDisconnectEvent;

	}
	{
		// BrnGuiCache.cpp:2240
		const GuiPursuitScoreUpdate * lpScoreUpdate;

	}
	{
		// BrnGuiCache.cpp:2250
		const GuiCrashScoreUpdate * lpScoreUpdate;

		BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2680
		const GuiEventRivalryFullInfoResponse * lpRivalryUpdate;

		// BrnGuiCache.cpp:2684
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnGuiCache.cpp:2693
			CgsID luTargetID;

			// BrnGuiCache.cpp:2695
			int32_t liCurrentRival;

		}
	}
	{
		// BrnGuiCache.cpp:2980
		const GuiOnlineTeamChangeEvent * lpTeamChangeEvent;

	}
	{
		// BrnGuiCache.cpp:2558
		const GuiPlayerEliminatedEvent * lpEliminated;

	}
	{
		// BrnGuiCache.cpp:2493
		const GuiEATraxChyronActive * lpChyronActive;

	}
	{
		// BrnGuiCache.cpp:1708
		const GuiEventCurrentStatus * lpCurrentStatusEvent;

		// BrnGuiCache.cpp:1709
		int32_t liIndex;

	}
	{
		// BrnGuiCache.cpp:2617
		const GuiPFXHookEnumeration * lpEnumeration;

	}
	{
		// BrnGuiCache.cpp:1523
		const GuiGamePausedEvent * lpPausedEvent;

	}
	{
		// BrnGuiCache.cpp:2802
		const GuiEventEnableAutoSave * lpGuiEnableAutoSaveEvent;

	}
	{
		// BrnGuiCache.cpp:2831
		const GuiEventEventStateResponse * lpEventStateResponse;

	}
	{
		// BrnGuiCache.cpp:2754
		const GuiEventSystemUserProfile * lpSystemUserProfileEvent;

	}
	{
		// BrnGuiCache.cpp:2602
		const GuiOnlineCarStatusEvent * lpCarSelectStatusEvent;

	}
	{
		// BrnGuiCache.cpp:2972
		const GuiEventCamStatus * lpCamStatusEvent;

	}
	{
		// BrnGuiCache.cpp:1863
		const GuiPlayerEngineEvent * lpNewEngineState;

	}
	{
		// BrnGuiCache.cpp:1871
		const GuiPlayerInShortcutEvent * lpShortcutStatus;

	}
	{
		// BrnGuiCache.cpp:2793
		const GuiShowtimeScoreUpdate * lpShowtimeUpdate;

	}
	{
		// BrnGuiCache.cpp:2961
		const GuiChangeCarEvent * lpChangeCarEvent;

	}
	{
		// BrnGuiCache.cpp:1670
		const GuiOverheadSignInfoEvent * lpSignInfoEvent;

	}
	{
		// BrnGuiCache.cpp:2926
		const GuiEventTrophyCarUnlock * lpTrophyCarEvent;

	}
	{
		// BrnGuiCache.cpp:1849
		const GuiPlayerRaceCarIdEvent * lpRaceCarIdEvent;

	}
	{
		// BrnGuiCache.cpp:1803
		const GuiPlayerCrashingStateChangeEvent * lpCrashEvent;

		SetHudMessagingActive(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:3001
		const GuiDriveThroughEvent * lpGuiDriveThroughEvent;

	}
	{
		// BrnGuiCache.cpp:2912
		const GuiShutdownEvent * lpShutdownEvent;

	}
	{
		// BrnGuiCache.cpp:2168
		const GuiEventScoreUpdate * lpScoreUpdate;

	}
	{
		// BrnGuiCache.cpp:2141
		const GuiRaceCheckpointReached * lpCheckpointReached;

	}
	SetWaitingForShowtimeResults(/* parameters */);
	{
		// BrnGuiCache.cpp:2268
		const GuiEventStopMode * lpStopModeEvent;

		// BrnGuiCache.cpp:2269
		int32_t liDriveThruIndex;

		{
			// BrnGuiCache.cpp:2283
			int32_t liIndex;

			BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData::Clear(/* parameters */);
			BrnNetwork::CommonRelationship::Clear(/* parameters */);
			BrnNetwork::CommonRelationshipStats::Clear(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:2197
		const GuiRoadRageScoreUpdate * lpScoreUpdate;

	}
	{
		// BrnGuiCache.cpp:2209
		const GuiAttackScoreUpdate * lpScoreUpdate;

		// BrnGuiCache.cpp:2221
		int32_t liIndex;

	}
	{
		// BrnGuiCache.cpp:1638
		const GuiEventUpdateEventStarts * lpEventStarts;

	}
	{
		// BrnGuiCache.cpp:3030
		const GuiEventEnableSatNavIcons * lpEnableSatNavIcons;

	}
	{
		// BrnGuiCache.cpp:1654
		const GuiRaceCarInfoEvent * lpRaceCarInfo;

	}
	{
		// BrnGuiCache.cpp:1662
		const GuiTrafficCarInfoEvent * lpTrafficCarInfo;

	}
	{
		// BrnGuiCache.cpp:1897
		int32_t liIndex;

		// BrnGuiCache.cpp:1898
		const GuiEventNetworkPlayerList * lpNetworkPlayerList;

		BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData::Clear(/* parameters */);
		BrnNetwork::CommonRelationship::Clear(/* parameters */);
		BrnNetwork::CommonRelationshipStats::Clear(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:1889
		const GuiEventNetworkLobbyPlayerList * lpNetworkPlayerList;

	}
	{
		// BrnGuiCache.cpp:1925
		int32_t liIndex;

		// BrnGuiCache.cpp:1926
		const GuiEventNetworkPlayerStatus * lpNetworkPlayerStatus;

		// BrnGuiCache.cpp:1927
		InGamePlayerStatusData * lpData;

		// BrnGuiCache.cpp:1928
		RoadRulesRecvData::NetworkPlayerID lNetworkPlayerID;

		CgsCore::MemCpy(/* parameters */);
		CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2328
		const GuiEventRacePositionInfo * lpPositionInfo;

		// BrnGuiCache.cpp:2334
		EActiveRaceCarIndex lePlayerActiveRaceCar;

		GetPlayerActiveRaceCarIndex(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:1956
		const BrnGui::GuiEventNetworkGameParams * lpGameParams;

	}
	{
		// BrnGuiCache.cpp:2126
		const GuiEventRaceDistanceToCheckpoint * lpDistanceLeft;

	}
	{
		// BrnGuiCache.cpp:2781
		const GuiEventMedalUpdate * lpMedalUpdateEvent;

	}
	{
		// BrnGuiCache.cpp:1830
		const GuiEventOnlineEventFinishingOrder * lpOnlineFinishingOrder;

		{
			// BrnGuiCache.cpp:1832
			int i;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGuiCache.cpp:1842
		const GuiEventOnlinePostEvent * lpOnlinePostEventData;

		operator=(/* parameters */);
		operator=(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2260
		const GuiEventOfflinePostEvent * lpPostEvent;

		// BrnGuiCache.cpp:2261
		const BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData * lpPostEventData;

	}
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	DetermineCarUnlockPending(/* parameters */);
	{
		// BrnGuiCache.cpp:2710
		const GuiEventSetRoadRuleScoreMode * lpChangeRoadRuleMode;

	}
	{
		// BrnGuiCache.cpp:2717
		const GuiEventRoadRuleBegin * lpRoadRuleEvent;

	}
	{
		// BrnGuiCache.cpp:2724
		const GuiEventRoadRuleEnd * lpRoadRuleEvent;

	}
	{
		// BrnGuiCache.cpp:2731
		const GuiEventRoadRuleChangeMode * lpRRMode;

	}
	{
		// BrnGuiCache.cpp:1575
		int32_t liDriveThruIndex;

		// BrnGuiCache.cpp:1576
		bool lbCanAdd;

	}
	operator++(/* parameters */);
	{
		// BrnGuiCache.cpp:1594
		int32_t liHackedPositionIndex;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		// BrnGuiCache.cpp:2166
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetTime(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiCache.cpp:2070
		const Landmark * lpLandmark;

		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
}

// BrnGuiCache.cpp:116
void BrnGui::StateLoadingHelper::Update(InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.cpp:123
		int32_t liRequestQueueToFill;

		CgsGui::ModelIO::InputBuffer::GetLoadRequests(/* parameters */);
		AppendGuiQueue<4096, 16>(/* parameters */);
		CgsGui::GuiEventQueueBase<4096,16>::Clear(/* parameters */);
		{
			// BrnGuiCache.cpp:130
			uint32_t luIndex;

			CgsContainers::Array<uint32_t,228u>::GetLength(/* parameters */);
			{
				// BrnGuiCache.cpp:132
				uint32_t luId;

				// BrnGuiCache.cpp:133
				const BrnGui::StateLoadingHelper::ResourceInfo & lResourceInfo;

				// BrnGuiCache.cpp:135
				GuiEventLoadRequest lLoadRequest;

				AddGuiEvent<CgsGui::GuiEventLoadRequest>(/* parameters */);
			}
			CgsContainers::Array<uint32_t,228u>::operator[](/* parameters */);
		}
		CgsContainers::Array<uint32_t,228u>::Clear(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiEventLoadRequest>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiCache.cpp:1492
void BrnGui::GuiCache::Update(InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiCache.cpp:34
