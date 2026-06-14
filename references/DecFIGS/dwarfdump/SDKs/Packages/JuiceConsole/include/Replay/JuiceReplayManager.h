// JuiceDefines.h:17
namespace Juice {
	// Declaration
	struct ReplayManager {
		// JuiceReplayManager.h:107
		enum ReplayType {
			NONE = 0,
			COMPLETE = 1,
			SEGMENT = 2,
			NUM_TOTAL_TYPES = 3,
		}

	}

}

// JuiceReplayManager.h:28
struct Juice::ReplayManager : public Juice::Processor {
	// JuiceReplayManager.cpp:63
	extern Juice::ReplayManager *(*)() Instance;

private:
	// JuiceReplayManager.h:156
	bool mIsReplaying;

	// JuiceReplayManager.h:157
	bool mIsRecording;

	// JuiceReplayManager.h:159
	bool mSaveGame;

	// JuiceReplayManager.h:160
	bool mForceCompletion;

	// JuiceReplayManager.h:162
	Juice::ReplayManager::ReplayType mPlaybackType;

	// JuiceReplayManager.h:163
	int mPlaybackMask;

	// JuiceReplayManager.h:165
	int mCurrentRecordMask;

	// JuiceReplayManager.h:166
	bool mDeactivateSystem;

	// JuiceReplayManager.h:167
	bool mResetPlaybackType;

	// JuiceReplayManager.h:168
	bool mInternalUpdate;

	// JuiceReplayManager.h:169
	int mNumRepeatEntries;

	// JuiceReplayManager.h:171
	extern const unsigned int SEGMENT_PROGRESS_INTERVAL = 500;

	// JuiceReplayManager.h:172
	extern const unsigned int REPLAY_BUFFER_SIZE = 1024;

	// JuiceReplayManager.h:173
	extern const unsigned int SEGMENT_BUFFER_SIZE = 1024;

	// JuiceReplayManager.h:174
	extern const int BUFFER_SEND_THRESHOLD = 100;

	// JuiceReplayManager.h:175
	unsigned int mSegmentIntervalStart;

	// JuiceReplayManager.h:176
	unsigned int mSegmentIntervalCurrent;

	// JuiceReplayManager.h:178
	ReplaySettings *[3] mSettings;

	// JuiceReplayManager.h:179
	Juice::JuiceComStreamReader mReplayStreamer;

	// JuiceReplayManager.h:180
	Juice::JuiceComStreamReader mSegmentStreamer;

	// JuiceReplayManager.h:181
	Juice::JuiceMsgWriter mReplayWriter;

	// JuiceReplayManager.h:182
	Juice::JuiceMsgWriter mSegmentWriter;

	// JuiceReplayManager.h:183
	char[1024] mReplayBuff;

	// JuiceReplayManager.h:184
	char[1024] mSegmentBuff;

public:
	void ReplayManager(const ReplayManager &);

	// JuiceReplayManager.cpp:194
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceReplayManager.cpp:128
	virtual void ProcessMessage(int);

	// JuiceReplayManager.cpp:521
	virtual void Update();

	// JuiceReplayManager.cpp:549
	virtual void Disable();

	// JuiceReplayManager.cpp:556
	virtual void Flush();

	// JuiceReplayManager.cpp:234
	virtual const bool IsReplayEnabled();

	// JuiceReplayManager.cpp:224
	virtual const bool IsPlayingBackEnabled();

	// JuiceReplayManager.cpp:244
	virtual const bool IsRecordEnabled();

	// JuiceReplayManager.cpp:254
	const bool RequestToSaveGame();

	// JuiceReplayManager.cpp:395
	virtual void Begin();

	// JuiceReplayManager.cpp:210
	virtual void DisableReplayMgr();

	// JuiceReplayManager.cpp:586
	const bool IsNormalMode();

	// JuiceReplayManager.cpp:596
	const bool IsDebugMode();

	// JuiceReplayManager.cpp:606
	const bool IsForceSyncMode();

	// JuiceReplayManager.cpp:981
	virtual void Suspend();

	// JuiceReplayManager.cpp:987
	virtual void Resume();

	// JuiceReplayManager.cpp:958
	void StopReplaying();

	// JuiceReplayManager.cpp:993
	virtual void StartCapturing();

	// JuiceReplayManager.cpp:998
	virtual void StopCapturing();

	// JuiceReplayManager.cpp:952
	void Save();

	// JuiceReplayManager.cpp:1003
	virtual const bool IsReplaying();

	// JuiceReplayManager.cpp:1101
	virtual unsigned int GetData(int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1106
	virtual int GetSignedData(int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1111
	virtual float GetData(Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1119
	virtual void GetData(void *, int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1196
	virtual const bool CheckNextEntry(Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1127
	virtual const bool IsCapturing();

	// JuiceReplayManager.cpp:1163
	virtual void AddData(int, int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1183
	virtual void AddData(float, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1188
	virtual void AddData(const void *, int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:632
	virtual unsigned int AddOrGetData(unsigned int, int, Juice::ReplayChannel, const char *, int);

	// JuiceReplayManager.cpp:664
	virtual int AddOrGetSignedData(int, int, Juice::ReplayChannel, const char *, int);

	// JuiceReplayManager.cpp:695
	virtual float AddOrGetData(float, Juice::ReplayChannel, const char *, int);

	// JuiceReplayManager.cpp:725
	virtual void AddOrGetData(char *, Juice::ReplayChannel, const char *, int);

	// JuiceReplayManager.cpp:785
	virtual void AddOrGetData(short unsigned int *, Juice::ReplayChannel, const char *, int);

	// JuiceReplayManager.cpp:843
	virtual void AddOrGetData(char *, int, Juice::ReplayChannel, const char *, int);

	// JuiceReplayManager.cpp:1223
	virtual const bool CheckPlaybackMask(Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1228
	virtual const bool CheckRecordMask(Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1233
	virtual const bool CheckVerifyMask(Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1242
	virtual const bool CheckOverWriteMask(Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1251
	virtual const bool CheckMask(int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1311
	virtual void HandleVerifyResult(const char *, int, int, Juice::ReplayChannel, char, char);

	// JuiceReplayManager.cpp:1327
	virtual void HandleVerifyResult(const char *, int, int, Juice::ReplayChannel, int, int);

	// JuiceReplayManager.cpp:1343
	virtual void HandleVerifyResult(const char *, int, int, Juice::ReplayChannel, unsigned int, unsigned int);

	// JuiceReplayManager.cpp:1358
	virtual void HandleVerifyResult(const char *, int, int, Juice::ReplayChannel, float, float);

	// JuiceReplayManager.cpp:1374
	virtual void HandleVerifyResult(const char *, int, int, Juice::ReplayChannel, short unsigned int, short unsigned int);

private:
	// JuiceReplayManager.cpp:65
	void ReplayManager();

	// JuiceReplayManager.h:117
	virtual void ~ReplayManager();

	// JuiceReplayManager.cpp:117
	Juice::ReplayManager * InstanceFunction();

	// JuiceReplayManager.cpp:334
	void SetSegmentState(Juice::SegmentState, int, int);

	// JuiceReplayManager.cpp:323
	const bool IsPlayBackComplete();

	// JuiceReplayManager.cpp:916
	void Init();

	// JuiceReplayManager.cpp:97
	void InitReplaySettings(ReplaySettings *);

	// JuiceReplayManager.cpp:406
	void SendReplayCommand(Juice::Command);

	// JuiceReplayManager.cpp:412
	void SendReplayCommand(Juice::Command, int);

	// JuiceReplayManager.cpp:425
	void SendReplayEntry(char *, int, Juice::ReplayChannel);

	// JuiceReplayManager.cpp:1012
	const bool CheckForData(int);

	// JuiceReplayManager.cpp:460
	unsigned char GetReplayHeader();

	// JuiceReplayManager.cpp:492
	const unsigned char * GetReplayBody(int);

	// JuiceReplayManager.cpp:1263
	void ProcessHeader();

	// JuiceReplayManager.cpp:622
	void SendVerifyResult(const char *, int, int, int);

	// JuiceReplayManager.cpp:1079
	unsigned int GetEntry(int);

	// JuiceReplayManager.cpp:1132
	void AddEntry(int, int, int);

	// JuiceReplayManager.cpp:1045
	void DecodeReplayEntry(ReplayEntry &);

	// JuiceReplayManager.cpp:272
	void IncrementPos(int, Juice::ReplayManager::ReplayType);

	// JuiceReplayManager.cpp:900
	int GetWStrLen(short unsigned int *);

	// JuiceReplayManager.cpp:279
	void CloseFile();

	// JuiceReplayManager.cpp:299
	void NotifyDesync();

}

// JuiceReplayManager.h:171
extern const unsigned int SEGMENT_PROGRESS_INTERVAL = 500;

// JuiceReplayManager.h:172
extern const unsigned int REPLAY_BUFFER_SIZE = 1024;

// JuiceReplayManager.h:173
extern const unsigned int SEGMENT_BUFFER_SIZE = 1024;

// JuiceReplayManager.h:174
extern const int BUFFER_SEND_THRESHOLD = 100;

