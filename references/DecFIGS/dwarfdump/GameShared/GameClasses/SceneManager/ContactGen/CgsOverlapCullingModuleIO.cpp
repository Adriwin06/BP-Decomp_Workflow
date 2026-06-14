// CgsOverlapCullingModuleIO.cpp:72
void CgsSceneManager::OverlapCullingIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsOverlapCullingModuleIO.cpp:119
void CgsSceneManager::OverlapCullingIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::Contact>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsOverlapCullingModuleIO.cpp:46
void CgsSceneManager::OverlapCullingIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlappingPair,16384>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair>::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume>::Clear(/* parameters */);
}

// CgsOverlapCullingModuleIO.cpp:98
void CgsSceneManager::OverlapCullingIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::Contact,16384>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::Contact>::Clear(/* parameters */);
}

