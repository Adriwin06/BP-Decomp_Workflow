// ICEWrapper.cpp:390
void BrnDirector::ICEWrapper::IsPlayingMovie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEWrapper.cpp:140
void BrnDirector::ICEWrapper::UpdateAction(const const DebugController &  lControllerInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEWrapper.cpp:235
void BrnDirector::ICEWrapper::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEWrapper.cpp:361
void BrnDirector::ICEWrapper::GetCurrentMovie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ICEWrapper.cpp:363
	ICEPlayingMovie lCurrentMovie;

	{
		// ICEWrapper.cpp:363
		ICEPlayingMovie lCurrentMovie;

	}
}

// ICEWrapper.cpp:407
void BrnDirector::ICEWrapper::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEWrapper.cpp:205
void BrnDirector::ICEWrapper::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleRef::SetToPlayer(/* parameters */);
	ICE::ICETimer::Construct(/* parameters */);
}

// ICEWrapper.cpp:339
void BrnDirector::ICEWrapper::PlayMovie(ID  lMovieID, float32_t  lfParameter, BrnDirector::VehicleRef::EType  lVehicleRefType, EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWrapper.cpp:341
		ICE::ICETakeData * lpTakeData;

	}
	ICE::ICECameraMover::SetTake(/* parameters */);
	VehicleRef::Set(/* parameters */);
	VehicleRef::SetToRaceCar(/* parameters */);
	VehicleRef::SetToRaceCarNearestPlayer(/* parameters */);
	VehicleRef::SetToPlayer(/* parameters */);
}

// ICEWrapper.cpp:113
void BrnDirector::ICEWrapper::Update(const TimerStatusInterface *  lpTimer, const const ICE::CameraSpaceHandler &  lSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICE::ICETimer::Update(/* parameters */);
}

// ICEWrapper.cpp:261
void BrnDirector::ICEWrapper::Prepare(OutputBuffer *  lpOutputBuffer, const AllocatorList *  lpAllocatorList, DirectorResourceManager *  lpResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWrapper.cpp:272
		Resource * lpResource;

		// ICEWrapper.cpp:273
		ResourceDescriptor * lpDesc;

		// ICEWrapper.cpp:287
		ICEPointers lICEPointers;

		BrnResource::GameDataIO::AllocatorList::GetRawResource(/* parameters */);
		BrnResource::GameDataIO::AllocatorList::GetRawResourceDescriptor(/* parameters */);
		ICE::ICEPointers::Construct(/* parameters */);
		{
			// ICEWrapper.cpp:299
			int32_t liLoop;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// _built-in_
namespace :: {
	// ICEWrapper.cpp:19
	const int32_t KI_STREAM_OPEN_EVENT_ID = 111;

	// ICEWrapper.cpp:20
	const int32_t KI_STREAM_CLOSE_EVENT_ID = 2;

	// ICEWrapper.cpp:22
	const int32_t KI_GET_ICE_LIST_EVENT = 1000;

	// ICEWrapper.cpp:23
	const int32_t KI_LOAD_ICE_MOVIES_EVENT = 2001;

	// ICEWrapper.cpp:25
	const int32_t KI_NUM_SHAKE_MOVIES = 4;

}

// ICEWrapper.cpp:27
// ICEWrapper.cpp:61
