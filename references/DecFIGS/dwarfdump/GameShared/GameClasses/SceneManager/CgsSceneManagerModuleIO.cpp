// CgsSceneManagerModuleIO.cpp:93
void CgsSceneManager::SceneManagerIO::InputBuffer_Update::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InSceneUpdateInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Clear(/* parameters */);
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
}

// CgsSceneManagerModuleIO.cpp:76
void CgsSceneManager::SceneManagerIO::InputBuffer_Update::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InSceneUpdateInterface::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsSceneManagerModuleIO.cpp:147
void CgsSceneManager::SceneManagerIO::InputBuffer_Query::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsSceneManagerModuleIO.cpp:298
void CgsSceneManager::SceneManagerIO::TriCacheQueryBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsSceneManagerModuleIO.cpp:56
void CgsSceneManager::SceneManagerIO::InputBuffer_Update::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	InSceneUpdateInterface::Clear(/* parameters */);
}

// CgsSceneManagerModuleIO.cpp:278
void CgsSceneManager::SceneManagerIO::TriCacheQueryBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>::SetEventPointer(/* parameters */);
}

// CgsSceneManagerModuleIO.cpp:108
void CgsSceneManager::SceneManagerIO::InputBuffer_Query::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>::Clear(/* parameters */);
	SceneQueryInterface::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSceneManagerModuleIO.cpp:175
void CgsSceneManager::SceneManagerIO::InputBuffer_Query::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SceneQueryInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsSceneManagerModuleIO.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSceneManagerModuleIO.cpp:214
void CgsSceneManager::SceneManagerIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::ErrorEvent,128>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Prepare(/* parameters */);
	TriangleCacheInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Prepare(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Clear(/* parameters */);
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

// CgsSceneManagerModuleIO.cpp:246
void CgsSceneManager::SceneManagerIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::Release(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Release(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Release(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Release(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Destruct(/* parameters */);
	TriangleCacheInterface::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
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
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

