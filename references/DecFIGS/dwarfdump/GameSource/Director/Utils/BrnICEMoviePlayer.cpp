// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnICEMoviePlayer.cpp:35
	extern const ID MakeCGSId(BrnDirector::IceMovie::EIceGroup, uint32_t);

}

// BrnICEMoviePlayer.cpp:458
void BrnDirector::ICEMoviePlayer::Prepare(BrnDirector::ICEWrapper *  lpICEWrapper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:504
void BrnDirector::ICEMoviePlayer::CutToInterpolateOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:102
void BrnDirector::IceMovie::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:144
void BrnDirector::IceMovie::GetStartPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:152
void BrnDirector::IceMovie::GetVehicleRefType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:160
void BrnDirector::IceMovie::GetVehicleIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:169
void BrnDirector::IceMovie::SetMovie(ID  lCgsID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:180
void BrnDirector::IceMovie::SetMovie(BrnDirector::IceMovie::EIceGroup  leGroup, uint32_t  luTakeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:191
void BrnDirector::IceMovie::SetStartPosition(float32_t  lfStartPosition01) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:201
void BrnDirector::IceMovie::SetVehicle(BrnDirector::VehicleRef::EType  leType, uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:210
void BrnDirector::ICEMoviePlaylist::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::Construct(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::Clear(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::Construct(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Construct(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::Clear(/* parameters */);
}

// BrnICEMoviePlayer.cpp:426
void BrnDirector::ICEMoviePlayer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Construct(/* parameters */);
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Construct(/* parameters */);
	Camera::BehaviourHelperIndex::operator=(/* parameters */);
}

// BrnICEMoviePlayer.cpp:303
void BrnDirector::ICEMoviePlaylist::GetRemoveData(int32_t  liMovie) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnICEMoviePlayer.cpp:305
	BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData lRemoveData;

	{
		// BrnICEMoviePlayer.cpp:305
		BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData lRemoveData;

	}
	CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnICEMoviePlayer.cpp:287
void BrnDirector::ICEMoviePlaylist::DebugGetMovieName(int32_t  liMovie) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.cpp:290
		const char[20][10] laacMovieNames;

	}
	CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnICEMoviePlayer.cpp:517
void BrnDirector::ICEMoviePlayer::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Release(/* parameters */);
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Release(/* parameters */);
}

// BrnICEMoviePlayer.cpp:113
void BrnDirector::IceMovie::GetCgsID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnICEMoviePlayer.cpp:115
	ID lCgsID;

	{
		// BrnICEMoviePlayer.cpp:115
		ID lCgsID;

	}
	{
		// BrnICEMoviePlayer.cpp:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnICEMoviePlayer.cpp:469
void BrnDirector::ICEMoviePlayer::Play() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEMoviePlaylist::GetMovie(/* parameters */);
	ICEMoviePlaylist::GetMovie(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

// BrnICEMoviePlayer.cpp:492
void BrnDirector::ICEMoviePlayer::Loop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnICEMoviePlayer.cpp:230
void BrnDirector::ICEMoviePlaylist::InsertMovieBefore(int32_t  liDesiredZeroBasedIndex, const const IceMovie &  lMovie) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.cpp:233
		int32_t liMoviePoolIndex;

		// BrnICEMoviePlayer.cpp:242
		int32_t liIndex;

		CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::AllocateObject(/* parameters */);
	}
	{
		CgsContainers::BitArray<20u>::SetBit(/* parameters */);
	}
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::operator[](/* parameters */);
	CgsContainers::Array<int32_t,20u>::InsertBefore(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::AllocateObject(/* parameters */);
	{
		CgsContainers::BitArray<20u>::SetBit(/* parameters */);
	}
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::operator[](/* parameters */);
	GetMovieCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnICEMoviePlayer.cpp:258
void BrnDirector::ICEMoviePlaylist::AddMovie(const const IceMovie &  lMovie) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetMovieCount(/* parameters */);
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
}

// BrnICEMoviePlayer.cpp:271
void BrnDirector::ICEMoviePlaylist::AddMovie(BrnDirector::IceMovie::EIceGroup  leGroup, uint32_t  luTake, bool  lbShouldFlash, BrnDirector::VehicleRef::EType  leVehicleType, uint32_t  luVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.cpp:273
		IceMovie lMovie;

	}
	IceMovie::SetShouldFlash(/* parameters */);
}

// BrnICEMoviePlayer.cpp:369
void BrnDirector::SharedPlaylists::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.cpp:371
		uint32_t luLoop;

	}
}

// BrnICEMoviePlayer.cpp:345
void BrnDirector::ICEMoviePlaylist::DebugMenuNewMovie(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.cpp:347
		BrnDirector::ICEMoviePlaylist * lpThisPlaylist;

		// BrnICEMoviePlayer.cpp:350
		DebugMenuSerialiser lDebugMenuSerialiser;

		// BrnICEMoviePlayer.cpp:355
		IceMovie lIceMovie;

	}
	Camera::DebugMenuSerialiser::Construct(/* parameters */);
	Camera::DebugMenuSerialiser::Construct(/* parameters */);
}

// BrnICEMoviePlayer.cpp:316
void BrnDirector::ICEMoviePlaylist::DebugMenuRemoveMovie(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.cpp:318
		BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData * lpRemoveData;

		// BrnICEMoviePlayer.cpp:321
		DebugMenuSerialiser lDebugMenuSerialiser;

		Camera::DebugMenuSerialiser::Construct(/* parameters */);
	}
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::FreeObject(/* parameters */);
	CgsContainers::Array<int32_t,20u>::EraseInstancesOf(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::FindObject(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>::FreeObject(/* parameters */);
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	Camera::DebugMenuSerialiser::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	DebugMenuRemoveData::operator==(/* parameters */);
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
}

// BrnICEMoviePlayer.cpp:536
void BrnDirector::ICEMoviePlayer::Update(const BehaviourManager &  lBehaviourController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::GetCamera(/* parameters */);
	ICEMoviePlaylist::GetMovieCount(/* parameters */);
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::GetCamera(/* parameters */);
	Camera::Camera::GetEffects(/* parameters */);
	Camera::CameraEffects::SetStartHookNameString(/* parameters */);
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::Release(/* parameters */);
	Camera::BehaviourManager::BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate>::SetUpdatesDuringPause(/* parameters */);
	Camera::BehaviourManager::SetBehaviourUpdatesDuringPause(/* parameters */);
	CgsContainers::BitArray<28u>::UnSetBit(/* parameters */);
	Camera::Behaviour::SetTimestepType(/* parameters */);
	Camera::BehaviourInterpolate::SetParameters(/* parameters */);
	Camera::BehaviourInterpolate::SetupDuration(/* parameters */);
	Camera::BehaviourInterpolate::GetCameraAForSetup(/* parameters */);
	Camera::BehaviourInterpolate::GetCameraBForSetup(/* parameters */);
	Camera::BehaviourInterpolate::Setup(/* parameters */);
	Camera::Camera::GetEffects(/* parameters */);
	Camera::CameraEffects::SetStartHookNameString(/* parameters */);
	Camera::Camera::GetEffects(/* parameters */);
	Camera::CameraEffects::SetStartHookNameString(/* parameters */);
}

