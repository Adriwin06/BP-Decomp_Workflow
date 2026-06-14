// CgsOverlapGenerationModuleIO.cpp:102
void CgsSceneManager::OverlapGenerationIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlappingPair,16384>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair>::Clear(/* parameters */);
}

// CgsOverlapGenerationModuleIO.cpp:123
void CgsSceneManager::OverlapGenerationIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsOverlapGenerationModuleIO.cpp:74
void CgsSceneManager::OverlapGenerationIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsOverlapGenerationModuleIO.cpp:46
void CgsSceneManager::OverlapGenerationIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody,16384>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody,16384>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody,16384>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding,128>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody>::Clear(/* parameters */);
}

