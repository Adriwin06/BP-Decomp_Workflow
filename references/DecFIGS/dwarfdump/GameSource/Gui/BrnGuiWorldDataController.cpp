// BrnGuiWorldDataController.cpp:627
void BrnGui::WorldDataController::GetFreeburnChallengeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiWorldDataController.cpp:610
void BrnGui::WorldDataController::GetVehicleList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiWorldDataController.cpp:343
void BrnGui::WorldDataController::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiWorldDataController.cpp:53
void BrnGui::WorldDataController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
}

// BrnGuiWorldDataController.cpp:425
void BrnGui::WorldDataController::GetEventInfoFromEventId(uint32_t  luEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	BrnProgression::ProgressionData::FindOfflineEvent(/* parameters */);
	BrnProgression::EventJunction::GetOfflineEvent(/* parameters */);
	BrnProgression::EventJunction::GetID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiWorldDataController.cpp:363
void BrnGui::WorldDataController::GetLandmarkInfoFromIndex(LandmarkIndex  lLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiWorldDataController.cpp:368
		int32_t liIndex;

	}
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetLandmark(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiWorldDataController.cpp:377
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiWorldDataController.cpp:394
void BrnGui::WorldDataController::GetLandmarkInfoFromID(CgsID  lLandmarkID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiWorldDataController.cpp:399
		int32_t liIndex;

	}
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetLandmark(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiWorldDataController.cpp:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// BrnGuiWorldDataController.cpp:446
void BrnGui::WorldDataController::GetOnlineEventInfoFromEventId(uint32_t  luEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	BrnProgression::ProgressionData::FindOnlineEvent(/* parameters */);
	BrnProgression::EventJunction::GetOnlineEvent(/* parameters */);
	BrnProgression::EventJunction::GetID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiWorldDataController.cpp:467
void BrnGui::WorldDataController::GetLandmarkInfoAtPositionInList(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetLandmark(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:470
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetLandmarkCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnGuiWorldDataController.cpp:489
void BrnGui::WorldDataController::GetOnlineLandmarkInfoAtPositionInList(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetOnlineLandmark(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:492
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetOnlineLandmarkCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnGuiWorldDataController.cpp:512
void BrnGui::WorldDataController::GetTriggerVolumeRegion(CgsID  lTriggerID, BoxRegion *  lpRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiWorldDataController.cpp:514
		int32_t liRegionIndex;

		// BrnGuiWorldDataController.cpp:515
		const GenericRegion * lpGenericRegion;

		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		{
			// BrnGuiWorldDataController.cpp:528
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiWorldDataController.cpp:527
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiWorldDataController.cpp:544
void BrnGui::WorldDataController::GetRoadTriggerVolumeRegions(CgsID  lRoadID, BoxRegion *  lpRegion1, BoxRegion *  lpRegion2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiWorldDataController.cpp:546
		int32_t liRoadIndex;

		// BrnGuiWorldDataController.cpp:547
		const Road * lpRoad;

		// BrnGuiWorldDataController.cpp:548
		int32_t liRegionIndex;

		// BrnGuiWorldDataController.cpp:549
		const GenericRegion * lpGenericRegion;

		// BrnGuiWorldDataController.cpp:550
		bool lbRegions1Found;

		// BrnGuiWorldDataController.cpp:551
		bool lbRegions2Found;

		// BrnGuiWorldDataController.cpp:553
		CgsID lEnd1ID;

		// BrnGuiWorldDataController.cpp:554
		CgsID lEnd2ID;

		BrnStreetData::StreetData::GetRoad(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		BrnStreetData::Road::GetRoadLimitId1(/* parameters */);
		BrnStreetData::Road::GetRoadLimitId0(/* parameters */);
		BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
		BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnGuiWorldDataController.cpp:566
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		{
			// BrnGuiWorldDataController.cpp:595
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnGuiWorldDataController.cpp:567
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
	{
		// BrnGuiWorldDataController.cpp:594
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

// BrnGuiWorldDataController.cpp:75
void BrnGui::WorldDataController::Prepare(InputBuffer *  lpGDMInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiWorldDataController.cpp:323
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiWorldDataController.cpp:224
		const CgsModule::Event * lpEvent;

		// BrnGuiWorldDataController.cpp:225
		const AcquireResourceResponse * lpAcquire;

		// BrnGuiWorldDataController.cpp:226
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::AcquireResource(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<32768>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:259
		const CgsModule::Event * lpEvent;

		// BrnGuiWorldDataController.cpp:260
		const AcquireResourceResponse * lpAcquire;

		// BrnGuiWorldDataController.cpp:261
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::GetFreeburnChallengeList(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:297
		const CgsModule::Event * lpEvent;

		// BrnGuiWorldDataController.cpp:298
		int32_t liEventSize;

		// BrnGuiWorldDataController.cpp:303
		const GetFreeburnChallengeListResponse * lpResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGuiWorldDataController.cpp:306
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::GetVehicleList(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:145
		const CgsModule::Event * lpEvent;

		// BrnGuiWorldDataController.cpp:146
		int32_t liEventSize;

		// BrnGuiWorldDataController.cpp:151
		const GetVehicleListResponse * lpResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGuiWorldDataController.cpp:154
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::AcquireResource(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:185
		const CgsModule::Event * lpEvent;

		// BrnGuiWorldDataController.cpp:186
		const AcquireResourceResponse * lpAcquire;

		// BrnGuiWorldDataController.cpp:187
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::AcquireResource(/* parameters */);
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::AcquireResource(/* parameters */);
	{
		// BrnGuiWorldDataController.cpp:107
		const CgsModule::Event * lpEvent;

		// BrnGuiWorldDataController.cpp:108
		const AcquireResourceResponse * lpAcquire;

		// BrnGuiWorldDataController.cpp:109
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
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

