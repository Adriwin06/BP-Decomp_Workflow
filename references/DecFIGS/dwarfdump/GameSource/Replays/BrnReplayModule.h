// BrnReplayShared.h:96
namespace BrnReplays {
	// Declaration
	struct ReplayModule {
		// BrnReplayModule.h:63
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// BrnReplayModule.h:70
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// BrnReplayModule.h:77
		enum EState {
			E_STATE_IDLE = 0,
			E_STATE_RECORDING = 1,
			E_STATE_PLAYING = 2,
			E_STATE_RESTORING = 3,
			E_STATE_COUNT = 4,
		}

		// BrnReplayModule.h:86
		enum EFileStreamStage {
			E_STREAMS_CLOSED = 0,
			E_STREAMS_OPENING = 1,
			E_STREAMS_OPEN = 2,
			E_STREAMS_HEADER = 3,
			E_STREAMS_CLOSING = 4,
		}

		// BrnReplayModule.h:95
		enum EMode {
			E_MODE_INGAME = 0,
			E_MODE_PAUSEMENU = 1,
			E_MODE_COUNT = 2,
		}

	}

}

// BrnReplayModule.h:60
struct BrnReplays::ReplayModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnReplayModule.h:135
	BrnReplays::ReplayModule::EPrepareStage mePrepareStage;

	// BrnReplayModule.h:136
	BrnReplays::ReplayModule::EReleaseStage meReleaseStage;

	// BrnReplayModule.h:137
	BrnReplays::ReplayModule::EState meState;

	// BrnReplayModule.h:138
	BrnReplays::ReplayModule::EFileStreamStage meFileStreamStage;

	// BrnReplayModule.h:139
	BrnReplays::ReplayModule::EMode meMode;

	// BrnReplayModule.h:141
	GameEventQueue mGameEventCache;

	// BrnReplayModule.h:143
	BaseSerialiser *[5] mapSerialisers;

	// BrnReplayModule.h:145
	LinearMalloc * mpAllocator;

	// BrnReplayModule.h:147
	WriteStream mWriteStream;

	// BrnReplayModule.h:148
	ReadStream mReadStream;

	// BrnReplayModule.h:149
	char * mpcHeaderBuffer;

	// BrnReplayModule.h:150
	char * mpcPrimaryStreamBuffer;

	// BrnReplayModule.h:151
	char * mpcHeaderStreamBuffer;

	// BrnReplayModule.h:152
	int32_t miHeaderStreamPos;

	// BrnReplayModule.h:153
	MemBuffer * mpSecondaryStreamBuffer;

	// BrnReplayModule.h:155
	int32_t miCurrentFrame;

	// BrnReplayModule.h:156
	float32_t mfCurrentTime;

	// BrnReplayModule.h:157
	int32_t miKeyFrameInterval;

	// BrnReplayModule.h:158
	float32_t mfStartTime;

	// BrnReplayModule.h:159
	float32_t mfEndTime;

	// BrnReplayModule.h:161
	FileHandle mHeaderFile;

	// BrnReplayModule.h:162
	DiskWriteStream mPrimaryDiskWriteStream;

	// BrnReplayModule.h:163
	DiskReadStream mPrimaryDiskReadStream;

	// Unknown accessibility
	// BrnReplayModule.h:49
	typedef EventReceiverQueue<1024,16> GameDataReceiverQueue;

	// BrnReplayModule.h:165
	ReplayModule::GameDataReceiverQueue mGameDataReceiverQueue;

	// BrnReplayModule.h:167
	bool mbReadyToPlay;

	// BrnReplayModule.h:168
	bool mbPlaybackDataReady;

	// BrnReplayModule.h:169
	bool mbStreamDataReady;

	// BrnReplayModule.h:170
	bool mbWaitingForRecordPause;

	// BrnReplayModule.h:171
	int32_t miLastRecordFrame;

	// BrnReplayModule.h:173
	bool mbDEBUG_StartPlaying;

	// BrnReplayModule.h:174
	bool mbDEBUG_StopPlaying;

	// BrnReplayModule.h:175
	bool mbDEBUG_StartRecording;

	// BrnReplayModule.h:176
	bool mbDEBUG_StopRecording;

	// BrnReplayModule.h:177
	bool mbDEBUG_MarkActionReplayPoint;

	// BrnReplayModule.h:178
	bool mbDEBUG_ActionReplay;

	// BrnReplayModule.h:179
	bool mbDEBUG_EnableAutoStart;

	// BrnReplayModule.h:180
	bool mbPlayNext;

	// BrnReplayModule.h:182
	Reel[5] maReels;

	// BrnReplayModule.h:183
	int32_t miCurrentRecordReel;

	// BrnReplayModule.h:184
	int32_t miCurrentPlayReel;

	// BrnReplayModule.h:185
	bool mbStopPlayingRequestReceived;

	// BrnReplayModule.h:186
	float32_t mfDebugHudAlpha;

	// BrnReplayModule.h:189
	DebugComponent mDebugComponent;

public:
	// BrnReplayModule.cpp:56
	virtual void Construct();

	// BrnReplayModule.cpp:144
	virtual bool Prepare(const AllocatorList *);

	// BrnReplayModule.cpp:215
	virtual bool Release();

	// BrnReplayModule.cpp:265
	virtual void Destruct();

	// BrnReplayModule.cpp:289
	virtual void Update_PreSim(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:371
	virtual void Update_PostSim(const InputBuffer_PostSim *, OutputBuffer_PostSim *, BrnUpdateSet);

private:
	// BrnReplayModule.cpp:497
	void BeginRecording(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:557
	void BeginPlaying(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet, bool);

	// BrnReplayModule.cpp:608
	bool BeginActionReplay(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:631
	void BeginRestoring(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:660
	void UpdateIdle(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:721
	void UpdateRecording_PreSim(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:868
	void UpdatePlaying_PreSim(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1057
	void UpdateRestoring_PreSim(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1083
	void UpdateRecording_PostSim(const InputBuffer_PostSim *, OutputBuffer_PostSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1142
	void UpdatePlaying_PostSim(const InputBuffer_PostSim *, OutputBuffer_PostSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1158
	void UpdateRestoring_PostSim(const InputBuffer_PostSim *, OutputBuffer_PostSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1200
	void StopRecording(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1223
	void StopPlaying(const InputBuffer_PreSim *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnReplayModule.cpp:1249
	void SetStatusInterface(StatusInterface *);

	// BrnReplayModule.cpp:1301
	void StoreSerialisers(const RequestInterface *);

	// BrnReplayModule.cpp:1372
	void LockSerialisers();

	// BrnReplayModule.cpp:1392
	void UnlockSerialisers();

	// BrnReplayModule.cpp:1412
	void ClearSerialisers(BrnReplays::BaseSerialiser::EMode, bool);

	// BrnReplayModule.cpp:1437
	void OpenReplayFiles(OutputBuffer_PreSim *, int32_t, CgsFileSystem::FileAccess);

	// BrnReplayModule.cpp:1465
	bool WaitForOpenReplayFiles();

	// BrnReplayModule.cpp:1510
	void CloseReplayFiles(OutputBuffer_PreSim *);

	// BrnReplayModule.cpp:1532
	bool WaitForCloseReplayFiles();

	// BrnReplayModule.cpp:1544
	void RenderDebugHUD();

}

// BrnReplayModule.h:60
void BrnReplays::ReplayModule::ReplayModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayModule.h:60
void BrnReplays::ReplayModule::~ReplayModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

