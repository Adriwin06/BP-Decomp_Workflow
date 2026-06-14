// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct IceMovie {
		// BrnICEMoviePlayer.h:40
		enum EIceGroup {
			E_ICE_GROUP_INVALID = -1,
			E_ICE_GROUP_EVENTS_START = 0,
			E_ICE_GROUP_EVENTS_END = 1,
			E_ICE_GROUP_WORLD_LANDMARK = 2,
			E_ICE_GROUP_WORLD_SIGNATURE = 3,
			E_ICE_GROUP_VEHICLE_CAR = 4,
			E_ICE_GROUP_VEHICLE_RIV = 5,
			E_ICE_GROUP_GENERIC_ALL = 6,
			E_ICE_GROUP_COUNT = 7,
		}

		// BrnICEMoviePlayer.h:110
		enum ERefType {
			E_REF_TYPE_INVALID = -1,
			E_REF_TYPE_CGSID = 0,
			E_REF_TYPE_GROUP_TAKE = 1,
			E_REF_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct ICEMoviePlaylist {
		// BrnICEMoviePlayer.h:145
		struct DebugMenuRemoveData {
			// BrnICEMoviePlayer.h:150
			BrnDirector::ICEMoviePlaylist * mpThisPlaylist;

			// BrnICEMoviePlayer.h:151
			int32_t miIndex;

		public:
			// BrnICEMoviePlayer.h:147
			bool operator==(const BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData &) const;

		}

	}

}

// BrnICEMoviePlayer.h:37
struct BrnDirector::IceMovie {
private:
	// BrnICEMoviePlayer.h:122
	BrnDirector::IceMovie::ERefType meRefType;

	// BrnICEMoviePlayer.h:123
	ID mCgsID;

	// BrnICEMoviePlayer.h:124
	BrnDirector::IceMovie::EIceGroup meGroup;

	// BrnICEMoviePlayer.h:125
	uint32_t muTakeIndex;

	// BrnICEMoviePlayer.h:127
	float32_t mfStartPosition01;

	// BrnICEMoviePlayer.h:128
	BrnDirector::VehicleRef::EType meVehicleType;

	// BrnICEMoviePlayer.h:129
	uint32_t muVehicleIndex;

	// BrnICEMoviePlayer.h:130
	bool mbPlayFlash;

public:
	// BrnICEMoviePlayer.h:56
	void Construct();

	// BrnICEMoviePlayer.h:59
	const ID GetCgsID() const;

	// BrnICEMoviePlayer.h:62
	const float32_t GetStartPosition() const;

	// BrnICEMoviePlayer.h:65
	const BrnDirector::VehicleRef::EType GetVehicleRefType() const;

	// BrnICEMoviePlayer.h:68
	const uint32_t GetVehicleIndex() const;

	// BrnICEMoviePlayer.h:72
	void SetMovie(ID);

	// BrnICEMoviePlayer.h:76
	void SetMovie(const char *);

	// BrnICEMoviePlayer.h:81
	void SetMovie(BrnDirector::IceMovie::EIceGroup, uint32_t);

	// BrnICEMoviePlayer.h:85
	void SetStartPosition(float32_t);

	// BrnICEMoviePlayer.h:90
	void SetVehicle(BrnDirector::VehicleRef::EType, uint32_t);

	// BrnICEMoviePlayer.h:93
	bool GetShouldFlash() const;

	// BrnICEMoviePlayer.h:100
	void SetShouldFlash(bool);

}

// BrnICEMoviePlayer.h:136
struct BrnDirector::ICEMoviePlaylist {
private:
	// BrnICEMoviePlayer.h:242
	ObjectPool<BrnDirector::IceMovie,20,int32_t> mMoviePool;

	// BrnICEMoviePlayer.h:243
	Array<int32_t,20u> mMoviePoolIndicies;

	// BrnICEMoviePlayer.h:246
	ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t> mDebugMenuRemoveData;

	// BrnICEMoviePlayer.h:247
	int32_t miDebugMenuNewMovieIndex;

	// BrnICEMoviePlayer.h:248
	int32_t miDebugSize;

	// BrnICEMoviePlayer.h:249
	BrnDirector::DebugComponent * mpDebugComponent;

	// BrnICEMoviePlayer.h:250
	const char * mpDebugName;

public:
	// BrnICEMoviePlayer.h:162
	void Construct();

	// BrnICEMoviePlayer.h:167
	void InsertMovieBefore(int32_t, const IceMovie &);

	// BrnICEMoviePlayer.h:171
	void AddMovie(const IceMovie &);

	// BrnICEMoviePlayer.h:179
	void AddMovie(BrnDirector::IceMovie::EIceGroup, uint32_t, bool, BrnDirector::VehicleRef::EType, uint32_t);

	// BrnICEMoviePlayer.h:182
	int32_t GetMovieCount() const;

	// BrnICEMoviePlayer.h:185
	int32_t GetCapacity() const;

	// BrnICEMoviePlayer.h:192
	const IceMovie & GetMovie(int32_t) const;

	// BrnICEMoviePlayer.h:196
	IceMovie & GetMovie(int32_t);

	// BrnICEMoviePlayer.h:201
	const char * DebugGetMovieName(int32_t) const;

	// BrnICEMoviePlayer.h:212
	BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData GetRemoveData(int32_t);

	// BrnICEMoviePlayer.h:216
	void DebugMenuRemoveMovie(void *);

	// BrnICEMoviePlayer.h:220
	void DebugMenuNewMovie(void *);

	// BrnICEMoviePlayer.h:223
	const ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t> & GetDebugMenuRemoveDataPool() const;

	// BrnICEMoviePlayer.h:227
	void SetDebugComponent(BrnDirector::DebugComponent *);

	// BrnICEMoviePlayer.h:230
	int32_t & GetDebugMenuNewMovieIndex();

	// BrnICEMoviePlayer.h:233
	const char * GetDebugName() const;

	// BrnICEMoviePlayer.h:237
	void SetDebugName(const char *);

}

// BrnICEMoviePlayer.h:257
struct BrnDirector::SharedPlaylists {
private:
	// BrnICEMoviePlayer.h:284
	ICEMoviePlaylist mRaceIntroPlaylist;

	// BrnICEMoviePlayer.h:285
	ICEMoviePlaylist mPostRacePlaylist;

	// BrnICEMoviePlayer.h:286
	ICEMoviePlaylist[3] maPausePlaylists;

	// BrnICEMoviePlayer.h:288
	uint32_t muCurrentPausePlaylist;

public:
	// BrnICEMoviePlayer.h:261
	void Construct();

	// BrnICEMoviePlayer.h:269
	const ICEMoviePlaylist & GetRaceIntroPlaylist() const;

	// BrnICEMoviePlayer.h:272
	const ICEMoviePlaylist & GetPostRacePlaylist() const;

	// BrnICEMoviePlayer.h:275
	const ICEMoviePlaylist & GetPausePlaylist() const;

}

// BrnICEMoviePlayer.h:294
struct BrnDirector::ICEMoviePlayer {
private:
	// BrnICEMoviePlayer.h:365
	Camera mCamera;

	// BrnICEMoviePlayer.h:367
	ICEMoviePlaylist mPlaylist;

	// BrnICEMoviePlayer.h:368
	BrnDirector::ICEWrapper * mpICEWrapper;

	// BrnICEMoviePlayer.h:370
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInInterpolator;

	// BrnICEMoviePlayer.h:371
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mOutInterpolator;

	// BrnICEMoviePlayer.h:373
	BehaviourHelperIndex mFromBehaviourHelperIndex;

	// BrnICEMoviePlayer.h:374
	BehaviourHelperIndex mToBehaviourHelperIndex;

	// BrnICEMoviePlayer.h:376
	const BrnDirector::Camera::BehaviourInterpolate::Parameters * mpInterpolateInParams;

	// BrnICEMoviePlayer.h:377
	const BrnDirector::Camera::BehaviourInterpolate::Parameters * mpInterpolateOutParams;

	// BrnICEMoviePlayer.h:379
	float32_t mfInterpolateInDuration;

	// BrnICEMoviePlayer.h:380
	float32_t mfInterpolateOutDuration;

	// BrnICEMoviePlayer.h:381
	float32_t mfMaxInterpolateOutOverlapTime;

	// BrnICEMoviePlayer.h:383
	int32_t miCurrentMovie;

	// BrnICEMoviePlayer.h:385
	EActiveRaceCarIndex meTargetRaceCar;

	// BrnICEMoviePlayer.h:386
	BrnDirector::VehicleRef::EType meTargetVehicleRefType;

	// BrnICEMoviePlayer.h:388
	bool mbInterpolateIn;

	// BrnICEMoviePlayer.h:389
	bool mbInterpolateOutNow;

	// BrnICEMoviePlayer.h:390
	bool mbHasReachedEnd;

	// BrnICEMoviePlayer.h:391
	bool mbIsLooping;

	// BrnICEMoviePlayer.h:392
	bool mbIsPlaying;

	// BrnICEMoviePlayer.h:393
	bool mbShouldInterpolateOut;

	// BrnICEMoviePlayer.h:394
	bool mbInterpolateOutUpdatesDuringPause;

	// BrnICEMoviePlayer.h:395
	bool mbFirstFrameOfPlaying;

public:
	// BrnICEMoviePlayer.h:298
	void Construct();

	// BrnICEMoviePlayer.h:302
	bool Prepare(BrnDirector::ICEWrapper *);

	// BrnICEMoviePlayer.h:305
	bool HasReachedEnd() const;

	// BrnICEMoviePlayer.h:308
	bool IsLooping() const;

	// BrnICEMoviePlayer.h:311
	bool IsPlaying() const;

	// BrnICEMoviePlayer.h:314
	void Play();

	// BrnICEMoviePlayer.h:317
	void Loop();

	// BrnICEMoviePlayer.h:320
	void CutToInterpolateOut();

	// BrnICEMoviePlayer.h:323
	void Stop();

	// BrnICEMoviePlayer.h:327
	void Update(BehaviourManager &);

	// BrnICEMoviePlayer.h:330
	const Camera & GetCamera() const;

	// BrnICEMoviePlayer.h:338
	void InterpolateFrom(BehaviourManager &, BehaviourHelperIndex, float32_t, const BrnDirector::Camera::BehaviourInterpolate::Parameters *, bool);

	// BrnICEMoviePlayer.h:346
	void WhenFinishedInterpolateTo(BehaviourHelperIndex, float32_t, float32_t, const BrnDirector::Camera::BehaviourInterpolate::Parameters *, bool);

	// BrnICEMoviePlayer.h:349
	ICEMoviePlaylist & GetPlaylist();

	// BrnICEMoviePlayer.h:353
	void SetPlaylist(const ICEMoviePlaylist &);

	// BrnICEMoviePlayer.h:358
	void SetTargetRaceCar(EActiveRaceCarIndex, BrnDirector::VehicleRef::EType);

	// BrnICEMoviePlayer.h:361
	EActiveRaceCarIndex GetTargetRaceCar();

}

// BrnICEMoviePlayer.h:638
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnICEMoviePlayer.h:638
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnICEMoviePlayer.h:638
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnICEMoviePlayer.h:654
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.h:669
		int32_t liLoop;

		BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	}
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	BrnDirector::ICEMoviePlaylist::GetMovie(/* parameters */);
	CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::operator[](/* parameters */);
	Serialise<BrnDirector::IceMovie>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	{
		// BrnICEMoviePlayer.h:676
		IceMovie lNullMovie;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnICEMoviePlayer.h:654
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.h:669
		int32_t liLoop;

		BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	}
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	BrnDirector::ICEMoviePlaylist::GetMovie(/* parameters */);
	CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::operator[](/* parameters */);
	Serialise<BrnDirector::IceMovie>(/* parameters */);
	{
	}
	BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	{
		// BrnICEMoviePlayer.h:676
		IceMovie lNullMovie;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnICEMoviePlayer.h:596
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::ICEMoviePlaylist>(/* parameters */);
	Serialise<BrnDirector::ICEMoviePlaylist>(/* parameters */);
	{
	}
	Serialise<BrnDirector::ICEMoviePlaylist>(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnICEMoviePlayer.h:654
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnICEMoviePlayer.h:669
		int32_t liLoop;

		BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	}
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	BrnDirector::ICEMoviePlaylist::GetMovieCount(/* parameters */);
	BrnDirector::ICEMoviePlaylist::GetMovie(/* parameters */);
	CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t>::operator[](/* parameters */);
	Serialise<BrnDirector::IceMovie>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnICEMoviePlayer.h:676
		IceMovie lNullMovie;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnICEMoviePlayer.h:596
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::ICEMoviePlaylist>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::ICEMoviePlaylist>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::ICEMoviePlaylist>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnICEMoviePlayer.h:596
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct IceMovie {
		// BrnICEMoviePlayer.h:40
		enum EIceGroup {
			E_ICE_GROUP_INVALID = -1,
			E_ICE_GROUP_EVENTS_START = 0,
			E_ICE_GROUP_EVENTS_END = 1,
			E_ICE_GROUP_WORLD_LANDMARK = 2,
			E_ICE_GROUP_WORLD_SIGNATURE = 3,
			E_ICE_GROUP_VEHICLE_CAR = 4,
			E_ICE_GROUP_VEHICLE_RIV = 5,
			E_ICE_GROUP_GENERIC_ALL = 6,
			E_ICE_GROUP_COUNT = 7,
		}

		// BrnICEMoviePlayer.h:110
		enum ERefType {
			E_REF_TYPE_INVALID = -1,
			E_REF_TYPE_CGSID = 0,
			E_REF_TYPE_GROUP_TAKE = 1,
			E_REF_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct ICEMoviePlaylist {
		// BrnICEMoviePlayer.h:145
		struct DebugMenuRemoveData {
			// BrnICEMoviePlayer.h:150
			BrnDirector::ICEMoviePlaylist * mpThisPlaylist;

			// BrnICEMoviePlayer.h:151
			int32_t miIndex;

		public:
			// BrnICEMoviePlayer.h:147
			bool operator==(const BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData &) const;

		}

	}

}

