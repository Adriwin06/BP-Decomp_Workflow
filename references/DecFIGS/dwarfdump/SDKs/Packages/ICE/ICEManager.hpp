// ICEManager.hpp:34
struct ICE::ICEManager {
private:
	// ICEManager.hpp:90
	ICETake mTake;

	// ICEManager.hpp:91
	ICETake mCopyTake;

	// ICEManager.hpp:92
	ICETake mShakeTake;

	// ICEManager.hpp:95
	ICETake mPlaybackTake;

	// ICEManager.hpp:96
	bool mbPlaybackDataSet;

	// ICEManager.hpp:98
	float32_t mfAnimElevation;

	// ICEManager.hpp:100
	uint32_t muPlayGenericGroupHash;

	// ICEManager.hpp:101
	int32_t miPlayGenericTakeIndex;

	// ICEManager.hpp:102
	bool mbSmoothExit;

	// ICEManager.hpp:103
	ICE::ICETimer * mpTimer;

	// ICEManager.hpp:105
	ICEFileHandler * mpFileHandler;

	// ICEManager.hpp:106
	ICEMemory * mpICEMemory;

	// ICEManager.hpp:108
	float32_t mfOldTimeElapsed;

public:
	// ICEManager.hpp:38
	void Construct(ICEPointers *);

	// ICEManager.hpp:39
	void Prepare();

	// ICEManager.hpp:40
	void Destruct();

	// ICEManager.hpp:55
	bool IsEditorOn();

	// ICEManager.hpp:56
	bool IsEditorOff();

	// ICEManager.hpp:58
	bool IsCameraPaused();

	// ICEManager.hpp:59
	float32_t GetPlaybackCameraLength();

	// ICEManager.hpp:61
	void Update();

	// ICEManager.hpp:62
	void Resolve();

	// ICEManager.hpp:63
	void Render();

	// ICEManager.hpp:64
	void ReleaseCameraTake();

	// ICEManager.hpp:65
	ICETake * GetCameraTake();

	// ICEManager.hpp:66
	void FixAnimElevation(Vector3 *);

	// ICEManager.hpp:67
	void SetupAnimElevation();

	// ICEManager.hpp:68
	float32_t GetAnimElevationFixup(Vector3 *);

	// ICEManager.hpp:69
	void SetGenericCameraToPlay(const char *, int32_t);

	// ICEManager.hpp:71
	void SetTakeToPlay(ICE::ICETakeData *);

	// ICEManager.hpp:72
	void SetTakeToPlay(ICE::ICETakeData *, float32_t);

	// ICEManager.hpp:73
	bool IsPlaybackDataSet();

	// ICEManager.hpp:75
	bool IsGenericCameraPlaying();

	// ICEManager.hpp:76
	void ChooseReplayCamera();

	// ICEManager.hpp:78
	void SetSmoothExit(bool);

	// ICEManager.hpp:79
	bool IsSmoothExit();

	// ICEManager.hpp:80
	float32_t GetCurrentTakeParameter();

	// ICEManager.hpp:82
	void AddShakeTake(ICE::ICETakeData *);

}

