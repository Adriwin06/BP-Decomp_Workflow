// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ICEWrapper {
		// ICEWrapper.hpp:87
		enum EICELoadStage {
			E_ICE_LOAD_STAGE_REQUEST_LIST = 0,
			E_ICE_LOAD_STAGE_AQUIRE_LIST = 1,
			E_ICE_LOAD_STAGE_LOAD_ALL_MOVIES = 2,
			E_ICE_LOAD_STAGE_LOAD_MOVIES_WAIT = 3,
			E_ICE_LOAD_STAGE_REQUEST_SHAKES = 4,
			E_ICE_LOAD_STAGE_AQUIRE_SHAKES = 5,
			E_ICE_LOAD_STAGE_REQUEST_MOVIES = 6,
			E_ICE_LOAD_STAGE_AQUIRE_MOVIES = 7,
			E_ICE_LOAD_STAGE_AQUIRE_FINISHED = 8,
		}

		// ICEWrapper.hpp:100
		enum EICEPrepareStage {
			E_ICE_PREPARE_MEMORY = 0,
			E_ICE_PREPARE_MOVIES = 1,
			E_ICE_PREPARE = 2,
		}

	}

	// ICEWrapper.hpp:63
	const uint32_t KU_ICE_MEMORY = 128000;

}

// ICEWrapper.hpp:68
struct BrnDirector::ICEPlayingMovie {
	// ICEWrapper.hpp:69
	ID mID;

	// ICEWrapper.hpp:70
	float32_t mfPlaybackPositionParameter;

	// ICEWrapper.hpp:71
	bool mbIsValid;

}

// ICEWrapper.hpp:84
struct BrnDirector::ICEWrapper {
private:
	// ICEWrapper.hpp:215
	ICEMemory mICEMemory;

	// ICEWrapper.hpp:216
	ICEManager mICEManager;

	// ICEWrapper.hpp:217
	ICETimer mICETimer;

	// ICEWrapper.hpp:223
	DirectorResourceManager * mpResourceManager;

	// ICEWrapper.hpp:225
	ActionQueue mActionQueue;

	// ICEWrapper.hpp:226
	extern EControlToICEAction[] mPressConverter;

	// ICEWrapper.hpp:227
	extern EControlToICEAction[] mPadConverter;

	// ICEWrapper.hpp:228
	ICECameraMover mICECameraMover;

	// ICEWrapper.hpp:229
	ICECamera mICECamera;

	// ICEWrapper.hpp:230
	ICECameraAnchor mICECameraAnchor;

	// ICEWrapper.hpp:232
	const BrnResource::ICEList * mpICEList;

	// ICEWrapper.hpp:233
	BrnDirector::ICEWrapper::EICELoadStage meICELoadStage;

	// ICEWrapper.hpp:234
	BrnDirector::ICEWrapper::EICEPrepareStage meICEPrepareStage;

	// ICEWrapper.hpp:235
	int32_t miNextMovieToAcquire;

	// ICEWrapper.hpp:237
	VehicleRef mVehicleRef;

	// ICEWrapper.hpp:239
	extern const int32_t KI_MAX_ACQUIRES_PER_FRAME = 50;

	// ICEWrapper.hpp:240
	extern const uint32_t KU_GROUPS = 5;

	// ICEWrapper.hpp:241
	extern const uint32_t KU_SUBGROUPS_PER_GROUP = 5;

	// ICEWrapper.hpp:242
	extern const uint32_t KU_MOVIES_PER_SUBGROUP = 32;

	// ICEWrapper.hpp:244
	ID mCurrentMovieID;

	// ICEWrapper.hpp:246
	bool mbAcceptInput;

public:
	// ICEWrapper.hpp:110
	void Construct();

	// ICEWrapper.hpp:115
	bool Prepare(OutputBuffer *, const AllocatorList *, DirectorResourceManager *);

	// ICEWrapper.hpp:117
	void Release();

	// ICEWrapper.hpp:118
	void Destruct();

	// ICEWrapper.hpp:124
	void PlayMovie(ID, float32_t, BrnDirector::VehicleRef::EType, EActiveRaceCarIndex);

	// ICEWrapper.hpp:133
	ICEPlayingMovie GetCurrentMovie();

	// ICEWrapper.hpp:136
	float32_t GetTimeRemaining();

	// ICEWrapper.hpp:139
	ICEManager & GetIceManager();

	// ICEWrapper.hpp:183
	bool IsPlayingMovie();

	// ICEWrapper.hpp:188
	void Update(const TimerStatusInterface *, const ICE::CameraSpaceHandler &);

	// ICEWrapper.hpp:192
	void UpdateAction(const DebugController &);

	// ICEWrapper.hpp:198
	const Camera * GetCamera() const;

	// ICEWrapper.hpp:203
	void SetCamera(Camera *);

	// ICEWrapper.hpp:206
	void ReconstructCameraMover(const ICE::IResourceManager *);

	// ICEWrapper.hpp:212
	ICE::ICETakeData * GetICETakeData(CgsID);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// ICEWrapper.hpp:63
	const uint32_t KU_ICE_MEMORY = 128000;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct ICEWrapper {
		// ICEWrapper.hpp:87
		enum EICELoadStage {
			E_ICE_LOAD_STAGE_REQUEST_LIST = 0,
			E_ICE_LOAD_STAGE_AQUIRE_LIST = 1,
			E_ICE_LOAD_STAGE_LOAD_ALL_MOVIES = 2,
			E_ICE_LOAD_STAGE_LOAD_MOVIES_WAIT = 3,
			E_ICE_LOAD_STAGE_REQUEST_SHAKES = 4,
			E_ICE_LOAD_STAGE_AQUIRE_SHAKES = 5,
			E_ICE_LOAD_STAGE_REQUEST_MOVIES = 6,
			E_ICE_LOAD_STAGE_AQUIRE_MOVIES = 7,
			E_ICE_LOAD_STAGE_AQUIRE_FINISHED = 8,
		}

		// ICEWrapper.hpp:100
		enum EICEPrepareStage {
			E_ICE_PREPARE_MEMORY = 0,
			E_ICE_PREPARE_MOVIES = 1,
			E_ICE_PREPARE = 2,
		}

	}

	// ICEWrapper.hpp:63
	const uint32_t KU_ICE_MEMORY = 128000;

}

