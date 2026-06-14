// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct SndPlayer1_CgsStreamMod {
				// sndplayer1.h:239
				struct DecoderIndexToGuidDesc {
					// sndplayer1.h:240
					DecoderDesc::Guid guid;

				}

			}

		}

	}

}

// sndplayer1.h:90
extern const char * spPathPrefix;

// sndplayer1.h:91
extern CgsSound::Playback::IStreamProvider * spStreamProvider;

// sndplayer1.h:197
extern const unsigned char MAX_DECODERFEEDS = 20;

// sndplayer1.h:246
extern rw::audio::core::SndPlayer1_CgsStreamMod::DecoderIndexToGuidDesc[] sDecoderGuidLut;

// sndplayer1.h:487
extern const uint32_t KU_NEWSIZE_BUFFER_SIZE = 4;

// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct SndPlayer1_CgsStreamMod {
				// sndplayer1.h:130
				struct PlayParams {
					// sndplayer1.h:131
					double startTime;

					// sndplayer1.h:132
					double streamFileOffset;

					// sndplayer1.h:133
					const char * pStreamFilePath;

					// sndplayer1.h:134
					void * pRamData;

					// sndplayer1.h:135
					DecoderDesc::Guid streamPoolGuid;

					// sndplayer1.h:136
					float expelMode;

					// sndplayer1.h:137
					float requestHandle;

				}

				// sndplayer1.h:148
				struct IsRequestDoneParams {
					// sndplayer1.h:149
					float requestHandle;

					// sndplayer1.h:150
					float isRequestDone;

				}

				// sndplayer1.h:154
				struct GetRequestBufferedParams {
					// sndplayer1.h:155
					float requestHandle;

					// sndplayer1.h:156
					float streamBytesBuffered;

					// sndplayer1.h:157
					float isFullyBuffered;

				}

				// sndplayer1.h:161
				struct ModifyStartTimeParams {
					// sndplayer1.h:162
					double newStartTime;

					// sndplayer1.h:163
					float requestHandle;

				}

				// sndplayer1.h:172
				struct FileInfo {
					// sndplayer1.h:173
					unsigned char numChannels;

					// sndplayer1.h:174
					int sampleRate;

					// sndplayer1.h:175
					int numSamples;

				}

				// sndplayer1.h:200
				enum RequestState {
					REQUESTSTATE_FREE = 0,
					REQUESTSTATE_QUEUED = 1,
					REQUESTSTATE_FEEDING = 2,
					REQUESTSTATE_FEEDCOMPLETE = 3,
					REQUESTSTATE_COMPLETE = 4,
				}

				// sndplayer1.h:217
				struct PlayCommand : public Command {
					// sndplayer1.h:219
					double startTime;

					// sndplayer1.h:220
					double streamFileOffset;

					// sndplayer1.h:221
					DecoderDesc::Guid streamPoolGuid;

					// sndplayer1.h:222
					void * pRamData;

					// sndplayer1.h:224
					short unsigned int sizeOfCommand;

					// sndplayer1.h:225
					unsigned char expelMode;

					// sndplayer1.h:226
					char pad;

					// sndplayer1.h:228
					float requestHandle;

				}

				// sndplayer1.h:233
				struct ModifyStartTimeCommand : public Command {
					// sndplayer1.h:234
					double startTime;

					// sndplayer1.h:235
					float requestHandle;

				}

				// sndplayer1.h:239
				struct DecoderIndexToGuidDesc {
					// sndplayer1.h:240
					DecoderDesc::Guid guid;

				}

				// sndplayer1.h:249
				struct RequestInternal {
					// sndplayer1.h:250
					double startTime;

					// sndplayer1.h:252
					rw::audio::core::Decoder * pDecoder;

					// sndplayer1.h:254
					float requestHandle;

					// sndplayer1.h:255
					float sampleRate;

					// sndplayer1.h:256
					int numSamples;

					// sndplayer1.h:257
					int loopStart;

					// sndplayer1.h:260
					short unsigned int decoderInstanceSize;

					// sndplayer1.h:262
					unsigned char state;

					// sndplayer1.h:263
					unsigned char numChannels;

				}

				// sndplayer1.h:268
				struct RequestExternal {
					// sndplayer1.h:322
					enum EStreamState {
						E_READ_HEADER = 0,
						E_READ_CHUNK = 1,
						E_SUBMIT_CHUNK = 2,
					}

					// sndplayer1.h:278
					double streamFileOffset;

					// sndplayer1.h:281
					char * pSampleData;

					// sndplayer1.h:284
					int loopStartStreamOffset;

					// sndplayer1.h:285
					int gigaSamplesInRam;

					// sndplayer1.h:287
					int numSamplesFed;

					// sndplayer1.h:288
					int numBytesFed;

					// sndplayer1.h:293
					char * pStreamLoopFileName;

					// sndplayer1.h:328
					ReadStream * mpReadStream;

					// sndplayer1.h:329
					rw::audio::core::SndPlayer1_CgsStreamMod::RequestExternal::EStreamState meState;

					// sndplayer1.h:330
					uint8_t * mpStreamBuffer;

					// sndplayer1.h:333
					struct {
						// sndplayer1.h:334
						uint32_t size;

						// sndplayer1.h:335
						uint8_t * buf;

					}

					// sndplayer1.h:337
					rw::audio::core::SndPlayer1_CgsStreamMod::RequestExternal::structure [8] maChunk;

					// sndplayer1.h:339
					uint32_t mReadBufferSelect;

					// sndplayer1.h:340
					uint32_t mWriteBufferSelect;

					// sndplayer1.h:341
					uint32_t mUnlockBufferSelect;

					// sndplayer1.h:342
					uint32_t mReadSize;

					// sndplayer1.h:343
					uint32_t mReadPointer;

					// sndplayer1.h:344
					uint32_t mQueuedChunks;

					// sndplayer1.h:345
					uint32_t mLockedChunks;

					// sndplayer1.h:348
					unsigned char codec;

					// sndplayer1.h:349
					unsigned char playType;

					// sndplayer1.h:350
					unsigned char feedSlotLatest;

					// sndplayer1.h:351
					unsigned char expelMode;

					// sndplayer1.h:355
					char * pNextChunk;

					// sndplayer1.h:357
					char * pLoopStartChunk;

				}

				// sndplayer1.h:362
				struct SndPlayer1FeedDesc {
					// sndplayer1.h:371
					bool mbStreamed;

					// sndplayer1.h:372
					int chunkSamplesPlayed;

					// sndplayer1.h:374
					unsigned char decoderRequestHandle;

					// sndplayer1.h:377
					unsigned char feedState;

					// sndplayer1.h:378
					unsigned char requestIndex;

				}

			}

		}

	}

}

// sndplayer1.h:59
struct rw::audio::core::SndPlayer1_CgsStreamMod : public rw::audio::core::PlugIn {
private:
	// sndplayer1.cpp:148
	extern const char * spPathPrefix;

	// sndplayer1.cpp:149
	extern CgsSound::Playback::IStreamProvider * spStreamProvider;

	// Unknown accessibility
	// sndplayer1.h:96
	extern const DecoderDesc::Guid GUID = 1246983282;

	// sndplayer1.cpp:154
	extern unsigned char[98048] sSpuElf;

	// sndplayer1.cpp:475
	extern PlugInDescRunTime sPlugInDescRunTime;

	// sndplayer1.cpp:226
	extern ChannelMapPair[2] sChannelMaps;

	// sndplayer1.h:188
	extern PlugInDescToolSide sPlugInDescToolSide;

	// sndplayer1.cpp:232
	extern ParameterDescRunTime[18] sParameterDescRunTime;

	// sndplayer1.h:190
	extern ParameterDescToolSide[] sParameterDescToolSide;

	// sndplayer1.cpp:441
	extern EventDescRunTime[5] sEventDescRunTime;

	// sndplayer1.h:192
	extern EventDescToolSide[] sEventDescToolSide;

	// sndplayer1.h:194
	extern const int MAX_REQUEST_HANDLE_VALUE = 4194304;

	// sndplayer1.h:197
	extern const unsigned char MAX_DECODERFEEDS = 20;

	// sndplayer1.cpp:161
	extern const rw::audio::core::SndPlayer1_CgsStreamMod::DecoderIndexToGuidDesc[6] sDecoderGuidLut;

	// sndplayer1.h:460
	rw::audio::core::PlugIn::Attribute_t[3] mAttribute;

	// sndplayer1.h:462
	TimerHandle mTimerHandle;

	// sndplayer1.h:464
	rw::audio::core::SndPlayer1_CgsStreamMod::RequestExternal * mpRequestExternal;

	// sndplayer1.h:466
	rw::audio::core::SndPlayer1_CgsStreamMod::SndPlayer1FeedDesc[20] mFeedDesc;

	// sndplayer1.h:469
	uintptr_t mpLoadedDecoder;

	// sndplayer1.h:471
	float mCurrentRequestHandle;

	// sndplayer1.h:472
	float mCurrentRequestSampleRate;

	// sndplayer1.h:473
	int mCurrentRequestSamplesPlayed;

	// sndplayer1.h:474
	int mCurrentRequestNumSamples;

	// sndplayer1.h:478
	float mRequestHandle;

	// sndplayer1.h:482
	float mLastRequestHandleProcessed;

	// sndplayer1.h:483
	float mLastRequestHandleSuccessfullyProcessed;

	// sndplayer1.h:485
	float mPreviousSampleRate;

	// sndplayer1.h:487
	extern const uint32_t KU_NEWSIZE_BUFFER_SIZE = 4;

	// sndplayer1.h:489
	uint32_t muDataReadForNewSize;

	// sndplayer1.h:490
	uint8_t[4] mau8NewSize;

	// sndplayer1.h:492
	short unsigned int mSamplesRequested;

	// sndplayer1.h:493
	short unsigned int mDeclickBufferOffset;

	// sndplayer1.h:494
	short unsigned int mRequestInternalOffset;

	// sndplayer1.h:496
	unsigned char mMaxChannels;

	// sndplayer1.h:497
	unsigned char mNextFreeRequest;

	// sndplayer1.h:498
	unsigned char mNextRequestToFree;

	// sndplayer1.h:499
	unsigned char mCurrentRequest;

	// sndplayer1.h:500
	unsigned char mMaxRequests;

	// sndplayer1.h:501
	unsigned char mDcOffsetsGathered;

	// sndplayer1.h:504
	unsigned char mNumDeclickSamples;

	// sndplayer1.h:505
	unsigned char mNextFeedSlotToFill;

	// sndplayer1.h:506
	unsigned char mNextFeedSlotToFree;

	// sndplayer1.h:507
	unsigned char mTimerAdded;

public:
	void SndPlayer1_CgsStreamMod(const SndPlayer1_CgsStreamMod &);

	void SndPlayer1_CgsStreamMod();

	// sndplayer1.h:65
	void SetStreamPathPrefix(const char *);

	// sndplayer1.h:71
	const char * GetStreamPathPrefix();

	// sndplayer1.h:78
	void SetStreamProvider(CgsSound::Playback::IStreamProvider *);

	// sndplayer1.h:84
	CgsSound::Playback::IStreamProvider * GetStreamProvider();

	// sndplayer1.cpp:514
	PlugInDescRunTime * GetPlugInDescRunTime();

	// sndplayer1.h:98
	const PlugInDescToolSide * GetPlugInDescToolSide();

	// sndplayer1.cpp:520
	void GetFileInfo(void *, rw::audio::core::SndPlayer1_CgsStreamMod::FileInfo *);

private:
	// sndplayer1.cpp:630
	// Declaration
	void RwacTimerClient(void *, float) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// sndplayer1.cpp:714
		using namespace CgsDev::Message;

	}

	// sndplayer1.cpp:928
	unsigned int GetSize(rw::audio::core::PlugInConfig *);

	// sndplayer1.cpp:1039
	bool CreateInstance(rw::audio::core::PlugIn *, void *);

public:
	// sndplayer1.h:386
	int PreProcess(rw::audio::core::PlugIn *, Mixer *, bool, int);

	// sndplayer1.h:387
	rw::audio::core::BufferStatus Process(rw::audio::core::PlugIn *, Mixer *, bool);

private:
	// sndplayer1.cpp:1176
	virtual void ReleaseEvent();

	// sndplayer1.cpp:1208
	virtual void EventEvent(int, void *);

	// sndplayer1.h:393
	virtual unsigned int GetPpuTicksEvent() const;

	// sndplayer1.cpp:1485
	int PlayHandler(Command *);

	// sndplayer1.cpp:1788
	int StopHandler(Command *);

	// sndplayer1.cpp:1818
	int ModifyStartTimeHandler(Command *);

	// sndplayer1.cpp:904
	void StreamLostCallback(void *);

	// sndplayer1.h:414
	rw::audio::core::SndPlayer1_CgsStreamMod::RequestInternal * GetRequestInternal(unsigned int);

	// sndplayer1.h:426
	float * GetDeclickBuffer();

	// sndplayer1.cpp:1861
	void * GetDecoderHandle(rw::audio::core::DecoderRegistry *, int);

	// sndplayer1.cpp:1893
	bool StreamNextChunk(unsigned int, bool);

	// sndplayer1.cpp:1996
	char * SubmitChunk(char *, unsigned int, bool);

	// sndplayer1.cpp:2045
	void UnpackHeader(unsigned int, void *);

	// sndplayer1.cpp:2142
	bool HandleLoopStart(unsigned int);

	// sndplayer1.cpp:2221
	bool HandleSampleEnd(unsigned int, bool *);

	// sndplayer1.cpp:2365
	bool StartRequest(unsigned int);

	// sndplayer1.cpp:2447
	void RemoveRequest(unsigned int);

	// sndplayer1.h:443
	rw::audio::core::BufferStatus Declick(Mixer *);

	// sndplayer1.h:444
	bool WaitForStartTime(Mixer *, double, unsigned int *);

	// sndplayer1.h:446
	bool IsRequestActive(unsigned char);

	// sndplayer1.cpp:956
	void FeedCleanup();

	// sndplayer1.cpp:619
	void RequestCleanup();

	// sndplayer1.cpp:1023
	bool GetFeedSlot(int *);

	// sndplayer1shared.cpp:14
	void AdvanceCurrentRequest();

public:
	virtual void ~SndPlayer1_CgsStreamMod();

}

// sndplayer1.h:59
void rw::audio::core::SndPlayer1_CgsStreamMod::~SndPlayer1_CgsStreamMod() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// sndplayer1.h:59
void rw::audio::core::SndPlayer1_CgsStreamMod::SndPlayer1_CgsStreamMod() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// sndplayer1.h:96
extern const DecoderDesc::Guid GUID = 1246983282;

// sndplayer1.h:194
extern const int MAX_REQUEST_HANDLE_VALUE = 4194304;

// sndplayer1.h:91
extern IStreamProvider * spStreamProvider;

