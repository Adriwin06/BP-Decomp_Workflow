// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnTriggerQueryManager.cpp:36
	const int32_t KI_POSITION_TRIGGERS = 999;

	// BrnTriggerQueryManager.cpp:39
	const float32_t KF_SOUND_TRIGGER_LOOK_AHEAD_TIME;

	// BrnTriggerQueryManager.cpp:42
	const float32_t KF_SOUND_TRIGGER_MAX_LOOK_AHEAD_DIST;

}

// BrnTriggerQueryManager.cpp:278
void BrnGameState::TriggerQueryManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTriggerQueryManager.cpp:293
void BrnGameState::TriggerQueryManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTriggerQueryManager.cpp:75
void BrnGameState::TriggerQueryManager::Construct(BrnProgression::ProgressionManager *  lpProgressionManager, TakedownManager *  lpTakedownManager, BrnGameState::RoadRulesManager *  lpRoadRulesManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:81
		uint32_t luIndex;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Construct(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::Construct(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::Construct(/* parameters */);
	CgsContainers::Array<uint16_t,256u>::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Construct(/* parameters */);
}

// BrnTriggerQueryManager.cpp:786
void BrnGameState::TriggerQueryManager::SubmitTriggerQueries(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:788
		int32_t liCarInRaceIndex;

		// BrnTriggerQueryManager.cpp:789
		Vector3 lRaceCarAt;

		// BrnTriggerQueryManager.cpp:790
		OutputBuffer::TriggerQueryInputInterface * lpTriggerInterface;

		// BrnTriggerQueryManager.cpp:791
		TriggerQueryId lTriggerQueryID;

	}
	GameStateModuleIO::OutputBuffer::GetTriggerQueryInputInterface(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:808
		const CarsInTheRaceData * lpCar;

		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:818
			PackedIndex lPackedCarIndexes;

			PackedIndex::SetGlobalRaceCarIndex(/* parameters */);
			PackedIndex::SetActiveRaceCarIndex(/* parameters */);
			BrnWorld::TriggerQueryId::SetIndex(/* parameters */);
			BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::LineTest(/* parameters */);
			AddEvent<BrnWorld::TriggerEntityModuleIO::InLineTestEvent>(/* parameters */);
		}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTriggerQueryManager.cpp:833
		Vector3 lfLookAheadDist;

		// BrnTriggerQueryManager.cpp:834
		Vector3 lfForward;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		BrnWorld::TriggerQueryId::SetIndex(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::LineTest(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTriggerQueryManager.cpp:913
void BrnGameState::TriggerQueryManager::IsSoundActionPresent(EntityId  lEntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType  leResultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:915
		uint32_t luActionIndex;

		// BrnTriggerQueryManager.cpp:916
		bool lbFound;

		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTriggerQueryManager.cpp:866
void BrnGameState::TriggerQueryManager::CheckSoundActions(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:868
		SoundTriggerAction lAction;

		// BrnTriggerQueryManager.cpp:869
		EntityId lEntityId;

		// BrnTriggerQueryManager.cpp:871
		bool lbFound;

		// BrnTriggerQueryManager.cpp:872
		EActiveRaceCarIndex leActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		GameStateModuleIO::SoundTriggerAction::Construct(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Append(/* parameters */);
		operator++(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		GameStateModuleIO::SoundTriggerAction::Construct(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnTriggerQueryManager.cpp:135
void BrnGameState::TriggerQueryManager::Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::LoadBundle(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:178
		const CgsModule::Event * lpEvent;

		// BrnTriggerQueryManager.cpp:179
		const AcquireResourceResponse * lpAcquire;

		// BrnTriggerQueryManager.cpp:180
		int32_t liEventSize;

		// BrnTriggerQueryManager.cpp:181
		ResourceHandle lResourceHandle;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::LoadTrafficLanes(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTriggerQueryManager.cpp:228
		const CgsModule::Event * lpEvent;

		// BrnTriggerQueryManager.cpp:229
		int32_t liEventSize;

		// BrnTriggerQueryManager.cpp:230
		int32_t liEventType;

		// BrnTriggerQueryManager.cpp:235
		const GetTrafficLaneDataResponse * lpAcquire;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
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
	}
}

// BrnTriggerQueryManager.cpp:395
void BrnGameState::TriggerQueryManager::PostWorldUpdate(const PostWorldInputBuffer *  lpInput, BrnGameState::ModeManager *  lpModeManager, EActiveRaceCarIndex  lePlayerCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:399
		const CgsModule::Event * lpEvent;

		// BrnTriggerQueryManager.cpp:400
		int32_t liEventSize;

		// BrnTriggerQueryManager.cpp:401
		int32_t liEventId;

		// BrnTriggerQueryManager.cpp:403
		const PostWorldInputBuffer::TriggerEntityModuleOutputInterface * lpTriggerResults;

		// BrnTriggerQueryManager.cpp:404
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		// BrnTriggerQueryManager.cpp:406
		const TriggerEntityModuleOutputInterface::OutTriggerQueryResultEventQueue * lpTriggerResultQueue;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetTriggerEntityOutputInterface(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface(/* parameters */);
	ModeManager::SetPlayerIsInStartRegion(/* parameters */);
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::GetFirstEvent(/* parameters */);
	{
	}
	{
		// BrnTriggerQueryManager.cpp:442
		SoundTriggerAction lSoundAction;

		// BrnTriggerQueryManager.cpp:444
		const OutLineTestResultEvent * lpResult;

		// BrnTriggerQueryManager.cpp:447
		TriggerId * lpTriggerIDs;

		// BrnTriggerQueryManager.cpp:448
		TriggerQueryId lQueryID;

		// BrnTriggerQueryManager.cpp:449
		int32_t liTriggerCount;

		// BrnTriggerQueryManager.cpp:451
		PackedIndex lPackedCarIndexes;

		// BrnTriggerQueryManager.cpp:453
		int32_t liPackedData;

		// BrnTriggerQueryManager.cpp:457
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnTriggerQueryManager.cpp:458
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTriggerQueryManager.cpp:460
		int32_t liIndex;

		// BrnTriggerQueryManager.cpp:461
		bool lbIsPlayer;

		// BrnTriggerQueryManager.cpp:462
		bool lbAddSoundAction;

		BrnWorld::TriggerEntityModuleIO::OutLineTestResultEvent::GetTriggerIds(/* parameters */);
		BrnWorld::TriggerQueryId::GetIndex(/* parameters */);
		PackedIndex::SetPackedData(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:484
			TriggerId lTriggerID;

			BrnWorld::TriggerId::SetIndex(/* parameters */);
		}
		{
			// BrnTriggerQueryManager.cpp:586
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Append(/* parameters */);
	}
	GameStateModuleIO::SoundTriggerAction::IsEmpty(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Append(/* parameters */);
	GameStateModuleIO::SoundTriggerAction::ClearAction(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:488
		uint32_t luTriggerIndex;

		// BrnTriggerQueryManager.cpp:489
		const TriggerRegion * lpTriggerRegion;

		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnWorld::TriggerId::GetIndex(/* parameters */);
		BrnTrigger::TriggerData::GetRegion(/* parameters */);
		CgsContainers::Array<uint16_t,32u>::Append(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:519
			const GenericRegion * lpGenericRegion;

			// BrnTriggerQueryManager.cpp:522
			BrnTrigger::GenericRegion::Type leTriggerType;

			BrnTrigger::GenericRegion::GetType(/* parameters */);
			GameStateModuleIO::SoundTriggerAction::SetTriggerActive(/* parameters */);
			BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
		}
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
	ModeManager::IsOnlineGameMode(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	GameStateModuleIO::SoundTriggerAction::Construct(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:610
		TriggerId lTriggerID;

		{
			// BrnTriggerQueryManager.cpp:614
			uint32_t luTriggerIndex;

			// BrnTriggerQueryManager.cpp:615
			const TriggerRegion * lpTriggerRegion;

			BrnWorld::TriggerId::GetIndex(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetRegion(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:619
			const GenericRegion * lpGenericRegion;

			BrnTrigger::GenericRegion::GetType(/* parameters */);
			GameStateModuleIO::SoundTriggerAction::SetTriggerActive(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Append(/* parameters */);
	GameStateModuleIO::SoundTriggerAction::Construct(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnTriggerQueryManager.cpp:675
void BrnGameState::TriggerQueryManager::UpdateTriggers(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:680
		bool lbCheckedTriggers;

		// BrnTriggerQueryManager.cpp:704
		OutputBuffer::TriggerManagementInputInterface * lpTriggerInterface;

	}
	{
		// BrnTriggerQueryManager.cpp:683
		int32_t lnTriggerIndex;

		{
			// BrnTriggerQueryManager.cpp:685
			const GenericRegion * lpTrigger;

		}
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		BrnTrigger::TriggerRegion::GetId(/* parameters */);
		BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:690
			CgsDev::StrStream lStrStream;

			BrnTrigger::TriggerRegion::GetId(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
			BrnTrigger::TriggerRegion::GetId(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	GameStateModuleIO::OutputBuffer::GetTriggerManagementInputInterface(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:710
		uint8_t luiCurrentLandmark;

		{
			// BrnTriggerQueryManager.cpp:713
			const TriggerRegion * lpTriggerRegion;

			LandmarkIndex::operator std::int32_t(/* parameters */);
			BrnTrigger::TriggerData::GetRegion(/* parameters */);
			BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::AddTriggerRegion(/* parameters */);
			BrnTrigger::BoxRegion::GetDimensions(/* parameters */);
			BrnWorld::TriggerId::Set(/* parameters */);
			rw::math::vpu::Abs(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			AddEvent<BrnWorld::TriggerEntityModuleIO::InAddBoxTriggerEvent>(/* parameters */);
		}
		CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::GetLength(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::operator[](/* parameters */);
		{
		}
		{
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:721
		Vector3 lPlayerPosition;

		// BrnTriggerQueryManager.cpp:722
		Vector2 lPlayerPosition2D;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:726
			int32_t liTriggerIndex;

			{
				// BrnTriggerQueryManager.cpp:731
				TriggerId lTriggerId;

				BrnWorld::TriggerId::Set(/* parameters */);
				BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::RemoveTrigger(/* parameters */);
			}
			CgsContainers::Array<uint16_t,256u>::GetLength(/* parameters */);
			CgsContainers::Array<uint16_t,256u>::operator[](/* parameters */);
			{
			}
		}
	}
	CgsContainers::Array<uint16_t,256u>::Construct(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:744
		const TriggerRegion * lpTriggerRegion;

		{
			// BrnTriggerQueryManager.cpp:748
			const BoxRegion * lpBoxRegion;

			// BrnTriggerQueryManager.cpp:749
			Vector2 lTriggerPosition2D;

			// BrnTriggerQueryManager.cpp:750
			float32_t lfHalfX;

			// BrnTriggerQueryManager.cpp:751
			float32_t lfHalfZ;

			// BrnTriggerQueryManager.cpp:752
			float32_t lfMaxHalfDimension;

			// BrnTriggerQueryManager.cpp:753
			float32_t lfClipDistance;

			CgsContainers::Array<uint16_t,256u>::Append(/* parameters */);
		}
	}
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetRegion(/* parameters */);
	{
	}
	BrnTrigger::BoxRegion::GetPosition2D(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::AddTriggerRegion(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
	}
	{
	}
}

// BrnTriggerQueryManager.cpp:948
void BrnGameState::TriggerQueryManager::ProcessPlayerTriggers(bool  lbFirstFrame, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const TriggerRegion *  lpTriggerRegion, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnGameState::StuntManager *  lpStuntManager, BrnGameState::DriveThruManager *  lpDriveThruManager, const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:956
		const GenericRegion * lpGenericRegion;

		{
			// BrnTriggerQueryManager.cpp:963
			int32_t liKillzoneIndex;

			CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
			{
				// BrnTriggerQueryManager.cpp:967
				int32_t liTriggerIndex;

				// BrnTriggerQueryManager.cpp:968
				const Killzone * lpKillzone;

			}
			CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
			BrnTrigger::TriggerData::GetKillzone(/* parameters */);
			{
				// BrnTriggerQueryManager.cpp:975
				KillzoneAction lAction;

				// BrnTriggerQueryManager.cpp:976
				int32_t liRegionIndex;

				CgsContainers::Array<CgsID,32u>::Construct(/* parameters */);
				CgsContainers::Array<CgsID,32u>::Append(/* parameters */);
				BrnTrigger::Killzone::GetRegionId(/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
				GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
				AddGameAction<BrnGameState::GameStateModuleIO::KillzoneAction>(/* parameters */);
			}
		}
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		{
			// BrnTriggerQueryManager.cpp:998
			Vector3 lVelocity;

			// BrnTriggerQueryManager.cpp:999
			bool lbEntryDirection;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
			BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
			BrnTrigger::TriggerRegion::GetId(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
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
}

// BrnTriggerQueryManager.cpp:316
void BrnGameState::TriggerQueryManager::PreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnGameState::StuntManager *  lpStuntManager, BrnGameState::DriveThruManager *  lpDriveThruManager, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerQueryManager.cpp:320
		uint32_t luTriggerIndex;

		// BrnTriggerQueryManager.cpp:327
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::GetLength(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:339
		const TriggerRegion * lpTriggerRegion;

		// BrnTriggerQueryManager.cpp:340
		TriggerAction lTriggerAction;

	}
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::operator[](/* parameters */);
	BrnTrigger::TriggerData::GetRegion(/* parameters */);
	BrnTrigger::TriggerRegion::GetType(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::operator[](/* parameters */);
	CgsContainers::Array<uint16_t,32u>::FindFirstInstanceOf(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::TriggerAction>(/* parameters */);
	{
		// BrnTriggerQueryManager.cpp:366
		uint32_t luActionIndex;

		AddGameAction<BrnGameState::GameStateModuleIO::SoundTriggerAction>(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
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
	CgsContainers::Array<uint16_t,32u>::Clear(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Clear(/* parameters */);
	AppendArray<32u>(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnTriggerQueryManager.cpp:32
// BrnTriggerQueryManager.cpp:33
// BrnTriggerQueryManager.cpp:34
// BrnTriggerQueryManager.cpp:51
// BrnTriggerQueryManager.cpp:52
// BrnTriggerQueryManager.cpp:53
// BrnTriggerQueryManager.cpp:55
// BrnTriggerQueryManager.cpp:56
