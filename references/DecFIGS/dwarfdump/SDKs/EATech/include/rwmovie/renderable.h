// importnamespaces.h:8
namespace rw {
	// renderable.h:15
	namespace movie {
	}

}

// renderable.h:257
extern const uint32_t MAGIC_NUMBER = 923039540;

// importnamespaces.h:8
namespace rw {
	// renderable.h:15
	namespace movie {
		// Declaration
		struct VideoRenderable {
			// renderable.h:99
			enum VideoFormat {
				VIDEOFORMAT_YV12 = 0,
				VIDEOFORMAT_YV12_BORDER48 = 1,
				VIDEOFORMAT_RGB24 = 2,
				VIDEOFORMAT_ARGB32 = 3,
				VIDEOFORMAT_MAXNUM = 4,
			}

		}

		struct IVideoRenderableOperations;

	}

}

// renderable.h:27
struct rw::movie::VideoRenderable {
private:
	// renderable.h:257
	extern const uint32_t MAGIC_NUMBER = 923039540;

	// renderable.h:258
	uint32_t mMagicNumber;

	// renderable.h:259
	uint8_t *[3] mData;

	// renderable.h:260
	uint32_t[3] mSize;

	// renderable.h:261
	uint32_t[3] mStride;

	// renderable.h:262
	unsigned int mWidth;

	// renderable.h:263
	unsigned int mHeight;

	// renderable.h:264
	rw::movie::VideoRenderable::VideoFormat mFormat;

	// Unknown accessibility
	// renderable.h:21
	typedef int32_t FrameNumber;

	// renderable.h:265
	VideoRenderable::FrameNumber mFrameNumber;

	// renderable.h:266
	unsigned int mNumBuffersUsed;

	// renderable.h:267
	int mUseCount;

	// renderable.h:268
	bool volatile mIsReadyToRender;

	// renderable.h:270
	void *[3] mContext;

	// renderable.h:272
	bool mDropFrameFlag;

	// renderable.h:273
	bool mFlipFlag;

public:
	// renderable.h:29
	void VideoRenderable();

	// renderable.h:30
	void ~VideoRenderable();

	// renderable.h:39
	void SetData(uint8_t *, unsigned int);

	// renderable.h:48
	uint8_t * GetData(unsigned int);

	// renderable.h:53
	void SetSize(uint32_t, unsigned int);

	// renderable.h:58
	uint32_t GetSize(unsigned int);

	// renderable.h:66
	void SetStride(uint32_t, unsigned int);

	// renderable.h:74
	uint32_t GetStride(unsigned int);

	// renderable.h:79
	void SetWidth(unsigned int);

	// renderable.h:84
	unsigned int GetWidth();

	// renderable.h:89
	void SetHeight(unsigned int);

	// renderable.h:94
	unsigned int GetHeight();

	// renderable.h:111
	void SetFormat(rw::movie::VideoRenderable::VideoFormat);

	// renderable.h:116
	rw::movie::VideoRenderable::VideoFormat GetFormat();

	// renderable.h:121
	void SetFrameNumber(VideoRenderable::FrameNumber);

	// renderable.h:126
	VideoRenderable::FrameNumber GetFrameNumber();

	// renderable.h:135
	void IncrementUseCount();

	// renderable.h:140
	void DecrementUseCount();

	// renderable.h:147
	int GetUseCount();

	// renderable.h:152
	void SetNumBuffersUsed(unsigned int);

	// renderable.h:157
	unsigned int GetNumBuffersUsed();

	// renderable.h:163
	uint32_t GetDataBufSize(unsigned int, unsigned int, rw::movie::VideoRenderable::VideoFormat);

	// renderable.h:206
	void GetDataBufSizes(unsigned int, unsigned int, rw::movie::VideoRenderable::VideoFormat, unsigned int, uint32_t *);

	// renderable.h:214
	void SetContext(void *, unsigned int);

	// renderable.h:219
	void * GetContext(unsigned int);

	// renderable.h:222
	bool IsReadyToRender();

	// renderable.h:226
	void SetReadyToRender(bool);

	// renderable.h:229
	bool CheckValidity();

	// renderable.h:236
	bool GetDropFrameFlag();

	// renderable.h:242
	void SetDropFrameFlag(bool);

	// renderable.h:248
	bool IsFrameContentFlipped();

	// renderable.h:253
	void SetFrameContentFlippedFlag(bool);

}

// renderable.h:302
struct rw::movie::IVideoRenderableOperations {
	int (*)(...) * _vptr.IVideoRenderableOperations;

public:
	// renderable.h:304
	virtual void ~IVideoRenderableOperations();

	// renderable.h:315
	virtual void Prepare(VideoRenderable *, unsigned int, unsigned int, rw::movie::VideoRenderable::VideoFormat, unsigned int);

	// renderable.h:319
	virtual void Init(EA::Allocator::ICoreAllocator *);

	// renderable.h:324
	virtual void Shutdown();

	// renderable.h:327
	virtual void Release(VideoRenderable *);

	// renderable.h:332
	virtual void PreModify(VideoRenderable *);

	// renderable.h:337
	virtual void PostModify(VideoRenderable *);

}

// importnamespaces.h:8
namespace rw {
	// renderable.h:15
	namespace movie {
		// Declaration
		struct VideoRenderable {
			// renderable.h:99
			enum VideoFormat {
				VIDEOFORMAT_YV12 = 0,
				VIDEOFORMAT_YV12_BORDER48 = 1,
				VIDEOFORMAT_RGB24 = 2,
				VIDEOFORMAT_ARGB32 = 3,
				VIDEOFORMAT_MAXNUM = 4,
			}

		}

		// Declaration
		struct AudioRenderable {
			// renderable.h:350
			enum AudioFormat {
				AUDIOFORMAT_PCM16 = 0,
				AUDIOFORMAT_MAXNUM = 1,
			}

		}

		// renderable.h:419
		enum SUBTITLE_JUSTIFICATION {
			LEFT = 0,
			CENTER = 1,
			RIGHT = 2,
			TOP = 3,
			BOTTOM = 4,
		}

		struct SubtitleRenderable;

		struct IVideoDecoder;

		struct IAudioDecoder;

		struct ISubtitleDecoder;

		struct IVideoRenderer;

		struct IAudioRenderer;

		struct ISubtitleRenderer;

		struct IVideoRenderableOperations;

		struct EventLogger;

		struct VideoRenderableManager;

		struct AudioDecoder_Snd9;

	}

}

// renderable.h:346
struct rw::movie::AudioRenderable {
private:
	// renderable.h:410
	uint8_t * mData;

	// renderable.h:411
	uint32_t mSize;

	// renderable.h:412
	unsigned int mNumChannels;

	// renderable.h:413
	unsigned int mNumSamples;

	// renderable.h:414
	rw::movie::AudioRenderable::AudioFormat mFormat;

public:
	// renderable.h:356
	void AudioRenderable();

	// renderable.h:357
	void ~AudioRenderable();

	// renderable.h:362
	void SetData(uint8_t *);

	// renderable.h:367
	uint8_t * GetData();

	// renderable.h:372
	void SetSize(uint32_t);

	// renderable.h:377
	uint32_t GetSize();

	// renderable.h:382
	void SetNumChannels(unsigned int);

	// renderable.h:387
	unsigned int GetNumChannels();

	// renderable.h:392
	void SetNumSamples(unsigned int);

	// renderable.h:397
	unsigned int GetNumSamples();

	// renderable.h:402
	void SetFormat(rw::movie::AudioRenderable::AudioFormat);

	// renderable.h:407
	rw::movie::AudioRenderable::AudioFormat GetFormat();

}

// renderable.h:432
struct rw::movie::SubtitleRenderable {
private:
	// renderable.h:523
	char * mData;

	// renderable.h:524
	wchar_t * mDataW;

	// renderable.h:525
	int mLength;

	// renderable.h:526
	VideoRenderable::FrameNumber mStartFrameNumber;

	// renderable.h:527
	VideoRenderable::FrameNumber mEndFrameNumber;

	// renderable.h:528
	int mPosX;

	// renderable.h:529
	int mPosY;

	// renderable.h:530
	int mPosZ;

	// renderable.h:531
	uint8_t mColorR;

	// renderable.h:532
	uint8_t mColorG;

	// renderable.h:533
	uint8_t mColorB;

	// renderable.h:534
	uint8_t mColorA;

	// renderable.h:535
	float mBoudningBoxWidth;

	// renderable.h:536
	float mBoudningBoxHeight;

	// renderable.h:537
	rw::movie::SUBTITLE_JUSTIFICATION mJustificationX;

	// renderable.h:538
	rw::movie::SUBTITLE_JUSTIFICATION mJustificationY;

	// renderable.h:539
	bool volatile mIsReadyToRender;

public:
	// renderable.h:434
	void SubtitleRenderable();

	// renderable.h:435
	void ~SubtitleRenderable();

	// renderable.h:440
	void SetData(char *);

	// renderable.h:445
	void SetData(wchar_t *);

	// renderable.h:450
	char * GetSubtitleData();

	// renderable.h:455
	wchar_t * GetSubtitleDataWide();

	// renderable.h:460
	void SetLength(int);

	// renderable.h:465
	int GetLength();

	// renderable.h:470
	void SetStartFrameNumber(VideoRenderable::FrameNumber);

	// renderable.h:475
	VideoRenderable::FrameNumber GetStartFrameNumber();

	// renderable.h:481
	void SetEndFrameNumber(VideoRenderable::FrameNumber);

	// renderable.h:486
	VideoRenderable::FrameNumber GetEndFrameNumber();

	// renderable.h:488
	bool IsReadyToRender();

	// renderable.h:489
	void SetReadyToRender(bool);

	// renderable.h:491
	void SetPositionX(int);

	// renderable.h:492
	void SetPositionY(int);

	// renderable.h:493
	void SetPositionZ(int);

	// renderable.h:495
	int GetPositionX();

	// renderable.h:496
	int GetPositionY();

	// renderable.h:497
	int GetPositionZ();

	// renderable.h:499
	void SetBoudningBoxWidth(float);

	// renderable.h:500
	void SetBoudningBoxHeight(float);

	// renderable.h:502
	float GetBoudningBoxWidth();

	// renderable.h:503
	float GetBoudningBoxHeight();

	// renderable.h:505
	void SetJustificationX(rw::movie::SUBTITLE_JUSTIFICATION);

	// renderable.h:506
	void SetJustificationY(rw::movie::SUBTITLE_JUSTIFICATION);

	// renderable.h:508
	rw::movie::SUBTITLE_JUSTIFICATION GetJustificationX();

	// renderable.h:509
	rw::movie::SUBTITLE_JUSTIFICATION GetJustificationY();

	// renderable.h:511
	void SetColorR(uint8_t);

	// renderable.h:512
	void SetColorG(uint8_t);

	// renderable.h:513
	void SetColorB(uint8_t);

	// renderable.h:514
	void SetColorA(uint8_t);

	// renderable.h:516
	uint8_t GetColorR();

	// renderable.h:517
	uint8_t GetColorG();

	// renderable.h:518
	uint8_t GetColorB();

	// renderable.h:519
	uint8_t GetColorA();

}

// renderable.h:302
struct rw::movie::IVideoRenderableOperations {
	int (*)(...) * _vptr.IVideoRenderableOperations;

public:
	void IVideoRenderableOperations();

	void IVideoRenderableOperations(const IVideoRenderableOperations &);

	// renderable.h:304
	virtual void ~IVideoRenderableOperations();

	// renderable.h:315
	virtual void Prepare(VideoRenderable *, unsigned int, unsigned int, rw::movie::VideoRenderable::VideoFormat, unsigned int);

	// renderable.h:319
	virtual void Init(EA::Allocator::ICoreAllocator *);

	// renderable.h:324
	virtual void Shutdown();

	// renderable.h:327
	virtual void Release(VideoRenderable *);

	// renderable.h:332
	virtual void PreModify(VideoRenderable *);

	// renderable.h:337
	virtual void PostModify(VideoRenderable *);

}

// renderable.h:302
void rw::movie::IVideoRenderableOperations::IVideoRenderableOperations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

