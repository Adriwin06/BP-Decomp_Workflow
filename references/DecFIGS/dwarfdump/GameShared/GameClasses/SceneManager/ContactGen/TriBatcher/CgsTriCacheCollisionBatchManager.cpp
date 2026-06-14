// CgsTriCacheCollisionBatchManager.cpp:65
void CgsSceneManager::TriCacheCollisionBatchManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriCacheCollisionBatchManager.cpp:291
void CgsSceneManager::TriCacheCollisionBatchManager::TCCJob::Start() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Jobs::Job::SetName(/* parameters */);
	EA::Jobs::Job::SetCode(/* parameters */);
}

// CgsTriCacheCollisionBatchManager.cpp:48
void CgsSceneManager::TriCacheCollisionBatchManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriCacheCollisionBatchManager.cpp:177
void CgsSceneManager::TriCacheCollisionBatchManager::FinishCurrentBatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	TriCacheCollisionBatch::GetNumTrianges(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsTriCacheCollisionBatchManager.cpp:204
void CgsSceneManager::TriCacheCollisionBatchManager::OutputBatchContacts(int32_t  liBatchIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriCacheCollisionBatchManager.cpp:208
		const IntermedateContact * lpaResults;

		// CgsTriCacheCollisionBatchManager.cpp:209
		int32_t liNumResults;

		// CgsTriCacheCollisionBatchManager.cpp:218
		int32_t i;

	}
	TriCacheCollisionBatchResult::GetNumResults(/* parameters */);
	TriCacheCollisionBatchResult::GetGeneratedContactQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::IntermedateContact>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::IntermedateContact>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	TCCJob::Release(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsTriCacheCollisionBatchManager.cpp:101
void CgsSceneManager::TriCacheCollisionBatchManager::StartNewBatch(const GPTriangle *  lpaTriangles, uint32_t  luNumTriangles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TCCJob::WaitOn(/* parameters */);
	TCCJob::Prepare(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsTriCacheCollisionBatchManager.cpp:136
void CgsSceneManager::TriCacheCollisionBatchManager::AddVolumeInstance(int32_t  liInstanceIndex, const VolumeInstance *  lpVolumeInstance, const VolRef::Volume *  lpVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriCacheCollisionBatchManager.cpp:153
		int32_t liFinishedBatch;

	}
}

// CgsTriCacheCollisionBatchManager.cpp:250
void CgsSceneManager::TriCacheCollisionBatchManager::FinishAllJobs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTriCacheCollisionBatchManager.cpp:256
		int32_t i;

		TCCJob::WaitOn(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsTriCacheCollisionBatchManager.cpp:266
		int32_t i;

	}
	TCCJob::WaitOn(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::IntermedateContact>::GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

