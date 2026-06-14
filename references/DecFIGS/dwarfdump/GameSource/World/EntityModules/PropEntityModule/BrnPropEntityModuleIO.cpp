// BrnPropEntityModuleIO.cpp:404
void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnPhysics::Props::PropInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Clear(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:429
void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:116
void BrnWorld::PropEntityIO::InputBuffer_PreScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:156
void BrnWorld::PropEntityIO::OutputBuffer_PreScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:190
void BrnWorld::PropEntityIO::InputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:221
void BrnWorld::PropEntityIO::OutputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:250
void BrnWorld::PropEntityIO::InputBuffer_Prepare::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:284
void BrnWorld::PropEntityIO::OutputBuffer_Prepare::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:319
void BrnWorld::PropEntityIO::OutputBuffer_PrePhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:352
void BrnWorld::PropEntityIO::InputBuffer_PrePhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:389
void BrnWorld::PropEntityIO::InputBuffer_PostPhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:57
void BrnWorld::PropEntityIO::InputBuffer_Dispatch::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropEntityModuleIO.cpp:36
void BrnWorld::PropEntityIO::InputBuffer_Dispatch::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropEntityModuleIO.cpp:75
void BrnWorld::PropEntityIO::InputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::Clear(/* parameters */);
	{
		// BrnPropEntityModuleIO.cpp:98
		int32_t liRaceCarIndex;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:131
void BrnWorld::PropEntityIO::OutputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnPhysics::Props::PropInputInterface::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	BrnResource::GameDataIO::RequestInterface<1024>::Clear(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Construct(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear(/* parameters */);
	BrnPhysics::Props::PropInputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropEntityModuleIO.cpp:174
void BrnWorld::PropEntityIO::InputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>::Construct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:206
void BrnWorld::PropEntityIO::OutputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:236
void BrnWorld::PropEntityIO::InputBuffer_Prepare::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:263
void BrnWorld::PropEntityIO::OutputBuffer_Prepare::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	BrnPhysics::Props::PropInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Clear(/* parameters */);
	BrnPhysics::Props::PropInputInterface::Clear(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropEntityModuleIO.cpp:299
void BrnWorld::PropEntityIO::OutputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnPhysics::Props::PropInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
	PropToTrafficInterface::Construct(/* parameters */);
	BrnPhysics::Props::PropInputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Clear(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:334
void BrnWorld::PropEntityIO::InputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::SetEventPointer(/* parameters */);
}

// BrnPropEntityModuleIO.cpp:371
void BrnWorld::PropEntityIO::InputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Clear(/* parameters */);
}

