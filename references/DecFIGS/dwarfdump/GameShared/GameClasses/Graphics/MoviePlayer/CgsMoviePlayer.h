// CgsMoviePlayer.h:163
extern const int32_t KI_MAX_CHUNKS_IN_SET = 16;

// CgsMoviePlayer.h:215
extern const int32_t KI_MAX_VIDEOS = 4;

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct MoviePlayerCoreAllocator {
	public:
		// CgsMoviePlayer.h:125
		// Declaration
		virtual void * Alloc(size_t, const char *, unsigned int) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMoviePlayer.h:127
			using namespace CgsDev::Message;

			// CgsMoviePlayer.h:129
			using namespace CgsDev::Message;

		}

		// CgsMoviePlayer.h:140
		// Declaration
		virtual void Free(void *, size_t) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMoviePlayer.h:141
			using namespace CgsDev::Message;

		}

	}

	// Declaration
	struct MoviePlayer {
		// CgsMoviePlayer.h:239
		enum PlayerStateType {
			E_RW_MOVIE_PLAYER_NULL = 0,
			E_RW_MOVIE_PLAYER_CONSTRUCTED = 1,
			E_RW_MOVIE_PLAYER_OPENING_FILE = 2,
			E_RW_MOVIE_PLAYER_LOADING_VIDEO_STREAMS = 3,
			E_RW_MOVIE_PLAYER_LOADING_FIRST_BUFFER = 4,
			E_RW_MOVIE_PLAYER_INIT_DECODERS = 5,
			E_RW_MOVIE_PLAYER_PREPARED = 6,
			E_RW_MOVIE_PLAYER_PLAYING = 7,
			E_RW_MOVIE_PLAYER_STOPPED = 8,
			E_RW_MOVIE_PLAYER_CLOSING_FILE = 9,
			E_RW_MOVIE_PLAYER_MAX = 10,
		}

		// CgsMoviePlayer.h:307
		struct VP6ChunkHeader {
			// CgsMoviePlayer.h:308
			uint32_t mId;

			// CgsMoviePlayer.h:309
			int32_t mLength;

			// CgsMoviePlayer.h:310
			uint32_t mCompressor;

			// CgsMoviePlayer.h:311
			int16_t mWidth;

			// CgsMoviePlayer.h:312
			int16_t mHeight;

			// CgsMoviePlayer.h:313
			int32_t mTotalFrames;

			// CgsMoviePlayer.h:314
			int32_t mSuggestedBufferSize;

			// CgsMoviePlayer.h:315
			int32_t mFpsNumerator;

			// CgsMoviePlayer.h:316
			int16_t mFpsDenominator;

			// CgsMoviePlayer.h:317
			uint16_t mFlags;

		}

	}

}

// CgsMoviePlayer.h:149
struct CgsGraphics::EacChunkDef {
	// CgsMoviePlayer.h:152
	union {
		// CgsMoviePlayer.h:153
		char[4] id;

		// CgsMoviePlayer.h:154
		uint32_t type;

	}

	// CgsMoviePlayer.h:157
	uint32_t muSize;

}

// CgsMoviePlayer.h:161
struct CgsGraphics::ChunkBuffer {
	// CgsMoviePlayer.h:163
	extern const int32_t KI_MAX_CHUNKS_IN_SET = 16;

	// CgsMoviePlayer.h:186
	int32_t miBufferSize;

	// CgsMoviePlayer.h:187
	char * mpcBuffer;

	// CgsMoviePlayer.h:188
	uint32_t[16] mauChunkOffsets;

	// CgsMoviePlayer.h:189
	uint32_t muCurrentChunk;

	// CgsMoviePlayer.h:190
	uint32_t muCurrentChunkRead;

	// CgsMoviePlayer.h:191
	uint32_t muChunkBufferPos;

public:
	// CgsMoviePlayer.h:166
	void Construct(char *, int32_t);

	// CgsMoviePlayer.h:169
	void Reset();

	// CgsMoviePlayer.h:172
	EacChunkDef * GetChunkDef(uint32_t);

	// CgsMoviePlayer.h:175
	uint32_t GetChunkSize(uint32_t);

	// CgsMoviePlayer.h:178
	char * GetChunkId(uint32_t);

	// CgsMoviePlayer.h:181
	void * GetChunkData(uint32_t);

	// CgsMoviePlayer.h:184
	void * GetChunk(uint32_t);

}

// CgsMoviePlayer.h:206
struct CgsGraphics::MoviePlayer {
	// CgsMoviePlayer.h:209
	extern const char * KPC_LANGUAGE_CODE_ENGLISH;

	// CgsMoviePlayer.h:210
	extern const char * KPC_LANGUAGE_CODE_FRENCH;

	// CgsMoviePlayer.h:211
	extern const char * KPC_LANGUAGE_CODE_GERMAN;

	// CgsMoviePlayer.h:212
	extern const char * KPC_LANGUAGE_CODE_SPANISH;

	// CgsMoviePlayer.h:213
	extern const char * KPC_LANGUAGE_CODE_ITALIAN;

	// CgsMoviePlayer.h:214
	extern const char * KPC_LANGUAGE_CODE_JAPANESE;

	// CgsMoviePlayer.h:215
	extern const int32_t KI_MAX_VIDEOS = 4;

	// CgsMoviePlayer.h:216
	extern const int32_t KI_STREAM_BUFFER_SIZE = 1048576;

private:
	// CgsMoviePlayer.h:321
	extern const int32_t KI_NUM_VIDEORENDERABLES = 4;

	// CgsMoviePlayer.h:323
	CgsGraphics::MoviePlayer::PlayerStateType mePlayerState;

	// CgsMoviePlayer.h:325
	char[256] macMovieFileName;

	// CgsMoviePlayer.h:326
	bool mbIsLooped;

	// CgsMoviePlayer.h:329
	float32_t mfRectLeft;

	// CgsMoviePlayer.h:330
	float32_t mfRectTop;

	// CgsMoviePlayer.h:331
	float32_t mfRectRight;

	// CgsMoviePlayer.h:332
	float32_t mfRectBottom;

	// CgsMoviePlayer.h:334
	int32_t miCrossfadeInFrames;

	// CgsMoviePlayer.h:335
	int32_t miCrossfadeOutFrames;

	// CgsMoviePlayer.h:337
	int32_t miVideoRender;

	// CgsMoviePlayer.h:339
	rw::IResourceAllocator * mpRwAllocator;

	// CgsMoviePlayer.h:340
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsMoviePlayer.h:342
	xPB_INST[4] maVP6Decoders;

	// CgsMoviePlayer.h:343
	YUV_BUFFER_CONFIG[4] maYUVConfigs;

	// CgsMoviePlayer.h:344
	StreamDeviceDiskRead mMovieStream;

	// CgsMoviePlayer.h:345
	void * mpMoviePlayerBuffer;

	// CgsMoviePlayer.h:346
	ChunkBuffer mChunkBuffer;

	// CgsMoviePlayer.h:348
	CgsGraphics::MoviePlayer::VP6ChunkHeader[4] maVP6Headers;

	// CgsMoviePlayer.h:349
	int32_t miCurrentFrame;

	// CgsMoviePlayer.h:350
	uint64_t muStartTimeInCycles;

	// CgsMoviePlayer.h:351
	bool mbReadyToRender;

	// CgsMoviePlayer.h:352
	bool mbDroppingFrames;

	// CgsMoviePlayer.h:353
	CgsGraphics::MoviePlayerCoreAllocator mAllocator;

	// CgsMoviePlayer.h:354
	int32_t miNumVideos;

	// CgsMoviePlayer.h:355
	int32_t miNumAudios;

	// CgsMoviePlayer.h:356
	bool mbDecodingFrame;

	// CgsMoviePlayer.h:358
	Resource mRwVideoRendererResource;

	// CgsMoviePlayer.h:359
	CgsGraphics::MovieVideoRenderer * mpRwVideoRenderer;

	// CgsMoviePlayer.h:360
	Resource mRwVideoRenderableOperationsResource;

	// CgsMoviePlayer.h:361
	rw::movie::IVideoRenderableOperations * mpRwVideoRenderableOperations;

	// CgsMoviePlayer.h:366
	JobThreadHandle mPPUThreadHandle;

public:
	// CgsMoviePlayer.h:222
	void Construct();

	// CgsMoviePlayer.h:228
	bool Prepare(rw::IResourceAllocator *, const char *, const char *);

	// CgsMoviePlayer.h:231
	bool Release();

	// CgsMoviePlayer.h:234
	void Destruct();

	// CgsMoviePlayer.h:257
	CgsGraphics::MoviePlayer::PlayerStateType GetPlayerState() const;

	// CgsMoviePlayer.h:261
	bool IsFinished() const;

	// CgsMoviePlayer.h:265
	bool SetMovieFile(const char *, const char *, bool);

	// CgsMoviePlayer.h:277
	void SetRectangle(float32_t, float32_t, float32_t, float32_t);

	// CgsMoviePlayer.h:281
	void SetCrossfade(int32_t, int32_t);

	// CgsMoviePlayer.h:284
	void Play();

	// CgsMoviePlayer.h:287
	void Stop();

	// CgsMoviePlayer.h:293
	void Update();

	// CgsMoviePlayer.h:298
	void Render(CgsGraphics::Im2dRenderBuffer *);

	// CgsMoviePlayer.h:301
	float32_t GetTime();

private:
	// CgsMoviePlayer.h:370
	void PrepareResources(const char *);

	// CgsMoviePlayer.h:373
	void ReleaseResources();

	// CgsMoviePlayer.h:376
	void ResetChunkSet();

	// CgsMoviePlayer.h:379
	bool ReadChunkSet(uint32_t);

	// CgsMoviePlayer.h:382
	int32_t ByteSwap(int32_t);

	// CgsMoviePlayer.h:385
	uint32_t ByteSwap(uint32_t);

	// CgsMoviePlayer.h:388
	int16_t ByteSwap(int16_t);

	// CgsMoviePlayer.h:391
	uint16_t ByteSwap(uint16_t);

	// CgsMoviePlayer.h:394
	void AddVideoStream(uint32_t);

	// CgsMoviePlayer.h:397
	void AddAudioStream(uint32_t);

	// CgsMoviePlayer.h:400
	void StartDecodes();

	// CgsMoviePlayer.h:403
	void WaitForDecode();

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct MoviePlayerCoreAllocator {
	public:
		// CgsMoviePlayer.h:125
		// Declaration
		virtual void * Alloc(size_t, const char *, unsigned int) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMoviePlayer.h:127
			using namespace CgsDev::Message;

			// CgsMoviePlayer.h:129
			using namespace CgsDev::Message;

		}

		// CgsMoviePlayer.h:140
		// Declaration
		virtual void Free(void *, size_t) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMoviePlayer.h:141
			using namespace CgsDev::Message;

		}

	}

	// Declaration
	struct MoviePlayer {
		// CgsMoviePlayer.h:239
		enum PlayerStateType {
			E_RW_MOVIE_PLAYER_NULL = 0,
			E_RW_MOVIE_PLAYER_CONSTRUCTED = 1,
			E_RW_MOVIE_PLAYER_OPENING_FILE = 2,
			E_RW_MOVIE_PLAYER_LOADING_VIDEO_STREAMS = 3,
			E_RW_MOVIE_PLAYER_LOADING_FIRST_BUFFER = 4,
			E_RW_MOVIE_PLAYER_INIT_DECODERS = 5,
			E_RW_MOVIE_PLAYER_PREPARED = 6,
			E_RW_MOVIE_PLAYER_PLAYING = 7,
			E_RW_MOVIE_PLAYER_STOPPED = 8,
			E_RW_MOVIE_PLAYER_CLOSING_FILE = 9,
			E_RW_MOVIE_PLAYER_MAX = 10,
		}

		// CgsMoviePlayer.h:307
		struct VP6ChunkHeader {
			// CgsMoviePlayer.h:308
			uint32_t mId;

			// CgsMoviePlayer.h:309
			int32_t mLength;

			// CgsMoviePlayer.h:310
			uint32_t mCompressor;

			// CgsMoviePlayer.h:311
			int16_t mWidth;

			// CgsMoviePlayer.h:312
			int16_t mHeight;

			// CgsMoviePlayer.h:313
			int32_t mTotalFrames;

			// CgsMoviePlayer.h:314
			int32_t mSuggestedBufferSize;

			// CgsMoviePlayer.h:315
			int32_t mFpsNumerator;

			// CgsMoviePlayer.h:316
			int16_t mFpsDenominator;

			// CgsMoviePlayer.h:317
			uint16_t mFlags;

		}

	}

}

// CgsMoviePlayer.h:209
extern const char * KPC_LANGUAGE_CODE_ENGLISH;

// CgsMoviePlayer.h:210
extern const char * KPC_LANGUAGE_CODE_FRENCH;

// CgsMoviePlayer.h:211
extern const char * KPC_LANGUAGE_CODE_GERMAN;

// CgsMoviePlayer.h:212
extern const char * KPC_LANGUAGE_CODE_SPANISH;

// CgsMoviePlayer.h:213
extern const char * KPC_LANGUAGE_CODE_ITALIAN;

// CgsMoviePlayer.h:214
extern const char * KPC_LANGUAGE_CODE_JAPANESE;

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct MoviePlayer {
		// CgsMoviePlayer.h:239
		enum PlayerStateType {
			E_RW_MOVIE_PLAYER_NULL = 0,
			E_RW_MOVIE_PLAYER_CONSTRUCTED = 1,
			E_RW_MOVIE_PLAYER_OPENING_FILE = 2,
			E_RW_MOVIE_PLAYER_LOADING_VIDEO_STREAMS = 3,
			E_RW_MOVIE_PLAYER_LOADING_FIRST_BUFFER = 4,
			E_RW_MOVIE_PLAYER_INIT_DECODERS = 5,
			E_RW_MOVIE_PLAYER_PREPARED = 6,
			E_RW_MOVIE_PLAYER_PLAYING = 7,
			E_RW_MOVIE_PLAYER_STOPPED = 8,
			E_RW_MOVIE_PLAYER_CLOSING_FILE = 9,
			E_RW_MOVIE_PLAYER_MAX = 10,
		}

		// CgsMoviePlayer.h:307
		struct VP6ChunkHeader {
			// CgsMoviePlayer.h:308
			uint32_t mId;

			// CgsMoviePlayer.h:309
			int32_t mLength;

			// CgsMoviePlayer.h:310
			uint32_t mCompressor;

			// CgsMoviePlayer.h:311
			int16_t mWidth;

			// CgsMoviePlayer.h:312
			int16_t mHeight;

			// CgsMoviePlayer.h:313
			int32_t mTotalFrames;

			// CgsMoviePlayer.h:314
			int32_t mSuggestedBufferSize;

			// CgsMoviePlayer.h:315
			int32_t mFpsNumerator;

			// CgsMoviePlayer.h:316
			int16_t mFpsDenominator;

			// CgsMoviePlayer.h:317
			uint16_t mFlags;

		}

	}

}

// CgsMoviePlayer.h:113
struct CgsGraphics::MoviePlayerCoreAllocator : public EA::Allocator::ICoreAllocator {
private:
	// CgsMoviePlayer.h:144
	int miAllocations;

	// CgsMoviePlayer.h:145
	rw::IResourceAllocator * mpAllocator;

public:
	void MoviePlayerCoreAllocator(const MoviePlayerCoreAllocator &);

	void MoviePlayerCoreAllocator();

	// CgsMoviePlayer.h:117
	void Construct(rw::IResourceAllocator *);

	// CgsMoviePlayer.h:121
	void Destruct();

	// CgsMoviePlayer.h:125
	// Declaration
	virtual void * Alloc(size_t, const char *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMoviePlayer.h:127
		using namespace CgsDev::Message;

		// CgsMoviePlayer.h:129
		using namespace CgsDev::Message;

	}

	// CgsMoviePlayer.h:136
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// CgsMoviePlayer.h:140
	// Declaration
	virtual void Free(void *, size_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMoviePlayer.h:141
		using namespace CgsDev::Message;

	}

	virtual void ~MoviePlayerCoreAllocator();

}

// CgsMoviePlayer.h:113
void CgsGraphics::MoviePlayerCoreAllocator::~MoviePlayerCoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.h:113
void CgsGraphics::MoviePlayerCoreAllocator::MoviePlayerCoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct MoviePlayerCoreAllocator {
	public:
		// CgsMoviePlayer.h:125
		// Declaration
		virtual void * Alloc(size_t, const char *, unsigned int) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMoviePlayer.h:127
			using namespace CgsDev::Message;

			// CgsMoviePlayer.h:129
			using namespace CgsDev::Message;

		}

		// CgsMoviePlayer.h:140
		// Declaration
		virtual void Free(void *, size_t) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMoviePlayer.h:141
			using namespace CgsDev::Message;

		}

		// CgsMoviePlayer.h:117
		void Construct(rw::IResourceAllocator *);

	}

	// Declaration
	struct MoviePlayer {
		// CgsMoviePlayer.h:239
		enum PlayerStateType {
			E_RW_MOVIE_PLAYER_NULL = 0,
			E_RW_MOVIE_PLAYER_CONSTRUCTED = 1,
			E_RW_MOVIE_PLAYER_OPENING_FILE = 2,
			E_RW_MOVIE_PLAYER_LOADING_VIDEO_STREAMS = 3,
			E_RW_MOVIE_PLAYER_LOADING_FIRST_BUFFER = 4,
			E_RW_MOVIE_PLAYER_INIT_DECODERS = 5,
			E_RW_MOVIE_PLAYER_PREPARED = 6,
			E_RW_MOVIE_PLAYER_PLAYING = 7,
			E_RW_MOVIE_PLAYER_STOPPED = 8,
			E_RW_MOVIE_PLAYER_CLOSING_FILE = 9,
			E_RW_MOVIE_PLAYER_MAX = 10,
		}

		// CgsMoviePlayer.h:307
		struct VP6ChunkHeader {
			// CgsMoviePlayer.h:308
			uint32_t mId;

			// CgsMoviePlayer.h:309
			int32_t mLength;

			// CgsMoviePlayer.h:310
			uint32_t mCompressor;

			// CgsMoviePlayer.h:311
			int16_t mWidth;

			// CgsMoviePlayer.h:312
			int16_t mHeight;

			// CgsMoviePlayer.h:313
			int32_t mTotalFrames;

			// CgsMoviePlayer.h:314
			int32_t mSuggestedBufferSize;

			// CgsMoviePlayer.h:315
			int32_t mFpsNumerator;

			// CgsMoviePlayer.h:316
			int16_t mFpsDenominator;

			// CgsMoviePlayer.h:317
			uint16_t mFlags;

		}

	}

}

// CgsMoviePlayer.h:206
struct CgsGraphics::MoviePlayer {
	// CgsMoviePlayer.h:209
	extern const char * KPC_LANGUAGE_CODE_ENGLISH;

	// CgsMoviePlayer.h:210
	extern const char * KPC_LANGUAGE_CODE_FRENCH;

	// CgsMoviePlayer.h:211
	extern const char * KPC_LANGUAGE_CODE_GERMAN;

	// CgsMoviePlayer.h:212
	extern const char * KPC_LANGUAGE_CODE_SPANISH;

	// CgsMoviePlayer.h:213
	extern const char * KPC_LANGUAGE_CODE_ITALIAN;

	// CgsMoviePlayer.h:214
	extern const char * KPC_LANGUAGE_CODE_JAPANESE;

	// CgsMoviePlayer.h:215
	extern const int32_t KI_MAX_VIDEOS = 4;

	// CgsMoviePlayer.h:216
	extern const int32_t KI_STREAM_BUFFER_SIZE = 1048576;

private:
	// CgsMoviePlayer.h:321
	extern const int32_t KI_NUM_VIDEORENDERABLES = 4;

	// CgsMoviePlayer.h:323
	CgsGraphics::MoviePlayer::PlayerStateType mePlayerState;

	// CgsMoviePlayer.h:325
	char[256] macMovieFileName;

	// CgsMoviePlayer.h:326
	bool mbIsLooped;

	// CgsMoviePlayer.h:329
	float32_t mfRectLeft;

	// CgsMoviePlayer.h:330
	float32_t mfRectTop;

	// CgsMoviePlayer.h:331
	float32_t mfRectRight;

	// CgsMoviePlayer.h:332
	float32_t mfRectBottom;

	// CgsMoviePlayer.h:334
	int32_t miCrossfadeInFrames;

	// CgsMoviePlayer.h:335
	int32_t miCrossfadeOutFrames;

	// CgsMoviePlayer.h:337
	int32_t miVideoRender;

	// CgsMoviePlayer.h:339
	rw::IResourceAllocator * mpRwAllocator;

	// CgsMoviePlayer.h:340
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsMoviePlayer.h:342
	xPB_INST[4] maVP6Decoders;

	// CgsMoviePlayer.h:343
	YUV_BUFFER_CONFIG[4] maYUVConfigs;

	// CgsMoviePlayer.h:344
	StreamDeviceDiskRead mMovieStream;

	// CgsMoviePlayer.h:345
	void * mpMoviePlayerBuffer;

	// CgsMoviePlayer.h:346
	ChunkBuffer mChunkBuffer;

	// CgsMoviePlayer.h:348
	CgsGraphics::MoviePlayer::VP6ChunkHeader[4] maVP6Headers;

	// CgsMoviePlayer.h:349
	int32_t miCurrentFrame;

	// CgsMoviePlayer.h:350
	uint64_t muStartTimeInCycles;

	// CgsMoviePlayer.h:351
	bool mbReadyToRender;

	// CgsMoviePlayer.h:352
	bool mbDroppingFrames;

	// CgsMoviePlayer.h:353
	CgsGraphics::MoviePlayerCoreAllocator mAllocator;

	// CgsMoviePlayer.h:354
	int32_t miNumVideos;

	// CgsMoviePlayer.h:355
	int32_t miNumAudios;

	// CgsMoviePlayer.h:356
	bool mbDecodingFrame;

	// CgsMoviePlayer.h:358
	Resource mRwVideoRendererResource;

	// CgsMoviePlayer.h:359
	CgsGraphics::MovieVideoRenderer * mpRwVideoRenderer;

	// CgsMoviePlayer.h:360
	Resource mRwVideoRenderableOperationsResource;

	// CgsMoviePlayer.h:361
	rw::movie::IVideoRenderableOperations * mpRwVideoRenderableOperations;

	// CgsMoviePlayer.h:366
	JobThreadHandle mPPUThreadHandle;

public:
	// CgsMoviePlayer.h:222
	void Construct();

	// CgsMoviePlayer.h:228
	bool Prepare(rw::IResourceAllocator *, const char *, const char *);

	// CgsMoviePlayer.h:231
	bool Release();

	// CgsMoviePlayer.h:234
	void Destruct();

	// CgsMoviePlayer.h:257
	CgsGraphics::MoviePlayer::PlayerStateType GetPlayerState() const;

	// CgsMoviePlayer.h:261
	bool IsFinished() const;

	// CgsMoviePlayer.h:265
	bool SetMovieFile(const char *, const char *, bool);

	// CgsMoviePlayer.h:277
	void SetRectangle(float32_t, float32_t, float32_t, float32_t);

	// CgsMoviePlayer.h:281
	void SetCrossfade(int32_t, int32_t);

	// CgsMoviePlayer.h:284
	void Play();

	// CgsMoviePlayer.h:287
	void Stop();

	// CgsMoviePlayer.h:293
	// Declaration
	void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMoviePlayer.cpp:596
		using namespace CgsDev::Message;

	}

	// CgsMoviePlayer.h:298
	void Render(CgsGraphics::Im2dRenderBuffer *);

	// CgsMoviePlayer.h:301
	float32_t GetTime();

private:
	// CgsMoviePlayer.h:370
	void PrepareResources(const char *);

	// CgsMoviePlayer.h:373
	void ReleaseResources();

	// CgsMoviePlayer.h:376
	void ResetChunkSet();

	// CgsMoviePlayer.h:379
	bool ReadChunkSet(uint32_t);

	// CgsMoviePlayer.h:382
	int32_t ByteSwap(int32_t);

	// CgsMoviePlayer.h:385
	uint32_t ByteSwap(uint32_t);

	// CgsMoviePlayer.h:388
	int16_t ByteSwap(int16_t);

	// CgsMoviePlayer.h:391
	uint16_t ByteSwap(uint16_t);

	// CgsMoviePlayer.h:394
	void AddVideoStream(uint32_t);

	// CgsMoviePlayer.h:397
	void AddAudioStream(uint32_t);

	// CgsMoviePlayer.h:400
	// Declaration
	void StartDecodes() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMoviePlayer.cpp:853
		using namespace CgsDev::Message;

		// CgsMoviePlayer.cpp:858
		using namespace CgsDev::Message;

	}

	// CgsMoviePlayer.h:403
	void WaitForDecode();

}

// CgsMoviePlayer.h:216
extern const int32_t KI_STREAM_BUFFER_SIZE = 1048576;

