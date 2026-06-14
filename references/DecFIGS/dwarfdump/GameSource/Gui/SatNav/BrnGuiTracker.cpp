// BrnGuiTracker.cpp:390
void BrnGui::GuiTracker::ClearTracker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Construct(/* parameters */);
}

// BrnGuiTracker.cpp:317
void BrnGui::GuiTracker::GetNumActivelyTrackedLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiTracker.cpp:339
void BrnGui::GuiTracker::GetActivelyTrackedLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:343
		int32_t liActiveTrackedCount;

		// BrnGuiTracker.cpp:344
		int32_t liIndex;

	}
}

// BrnGuiTracker.cpp:269
void BrnGui::GuiTracker::RegenerateRouteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:272
		BrnGui::GuiTracker::TrackerInfo[64] lTrackedItems;

		// BrnGuiTracker.cpp:286
		int32_t liNumTrackedItemsLeft;

		// BrnGuiTracker.cpp:291
		int32_t liIndex;

	}
}

// BrnGuiTracker.cpp:41
void BrnGui::GuiTracker::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Construct(/* parameters */);
}

// BrnGuiTracker.cpp:231
void BrnGui::GuiTracker::GenerateRouteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:240
		int32_t liEndIndex;

		// BrnGuiTracker.cpp:243
		int32_t liRouteIndex;

		// BrnGuiTracker.cpp:244
		int32_t liNodeIndex;

	}
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Clear(/* parameters */);
	{
		// BrnGuiTracker.cpp:247
		GuiEventRouteInformation * lpRouteInfo;

		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Append(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiTracker.cpp:102
void BrnGui::GuiTracker::RecEvent(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:141
		const GuiEventEnterLandmarkArea * lpEnterLandmarkArea;

	}
	{
		// BrnGuiTracker.cpp:165
		const GuiEventRouteInformation * lpRouteInformaton;

	}
	{
		// BrnGuiTracker.cpp:206
		const GuiEventForceUpdateTracker * lpForceUpdateEvent;

	}
	{
		// BrnGuiTracker.cpp:110
		const GuiEventSetTracker * lpSetTrackerEvent;

		// BrnGuiTracker.cpp:131
		int32_t liIndex;

	}
	{
		// BrnGuiTracker.cpp:188
		const GuiEventCache * lpcacheEvent;

		// BrnGuiTracker.cpp:191
		const GuiPlayerInfo * lpPlayerInfo;

		GuiCache::GetPlayerInfo(/* parameters */);
	}
	{
		// BrnGuiTracker.cpp:104
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiTracker.cpp:112
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiTracker.cpp:368
void BrnGui::GuiTracker::SetNodes(const rw::math::vpu::Vector3 *  lpaNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:370
		int32_t liNodeIndex;

	}
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Construct(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Append(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiTracker.cpp:416
void BrnGui::GuiTracker::ContructRouteNodeFromTrackedItem(const BrnGui::GuiTracker::TrackerInfo *  lpInTrackedItem, CalculateRoute *  lpOutCalculateRouteEvent, int32_t  liNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:457
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiTracker.cpp:428
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lpRouteCheckpointInfo;

	}
}

// BrnGuiTracker.cpp:71
void BrnGui::GuiTracker::Update(CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.cpp:75
		CalculateRoute lCalculateRoute;

		CalculateRoute(/* parameters */);
		AddGuiOutEvent<BrnGui::CalculateRoute>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

