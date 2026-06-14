// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct Decoder {
				// decoder.h:95
				enum FeedType {
					FEEDTYPE_NEW = 0,
					FEEDTYPE_CONTINUE = 1,
				}

				// decoder.h:268
				struct RequestDesc {
					// decoder.h:269
					void * pSrc;

					// decoder.h:271
					void * pSeekData;

					// decoder.h:273
					int decoderSkip;

					// decoder.h:276
					int numSamples;

					// decoder.h:280
					unsigned char feedType;

					// decoder.h:283
					unsigned char seekDataVersion;

				}

			}

		}

	}

}

// decoder.h:61
struct rw::audio::core::DecoderDesc {
	// decoder.h:53
	typedef unsigned int (unsigned int, unsigned int *) DecoderGetSizeFn;

	// decoder.h:62
	DecoderDesc::DecoderGetSizeFn * pGetSize;

	// decoder.h:54
	typedef bool (rw::audio::core::Decoder *) DecoderCreateInstanceEventFn;

	// decoder.h:63
	DecoderDesc::DecoderCreateInstanceEventFn * pCreateInstanceEvent;

	// decoder.h:55
	typedef void (rw::audio::core::Decoder *) DecoderReleaseEventFn;

	// decoder.h:64
	DecoderDesc::DecoderReleaseEventFn * pReleaseEvent;

	// decoder.h:56
	typedef int (rw::audio::core::Decoder *, SampleBuffer *, int) DecoderDecodeEventFn;

	// decoder.h:65
	DecoderDesc::DecoderDecodeEventFn * pDecodeEvent;

	// decoder.h:66
	void * listNode;

	// base.h:384
	typedef unsigned int Guid;

	// decoder.h:68
	DecoderDesc::Guid guid;

	// decoder.h:70
	short unsigned int maxBlockSize;

}

// decoder.h:486
struct rw::audio::core::DecoderExtended {
private:
	// decoder.h:688
	rw::audio::core::Decoder * mpDecoder;

	// decoder.h:689
	SampleBuffer * mpSampleBuffer;

	// decoder.h:690
	void * mpSampleBufferStorage;

public:
	// decoder.h:490
	int GetSamplesRemaining(unsigned char);

	// decoder.h:519
	unsigned char Feed(void *, int, rw::audio::core::Decoder::FeedType);

	// decoder.h:551
	int Decode(float **, int);

	// decoder.h:583
	int Decode(float *, int);

	// decoder.h:615
	int Decode(short int *, int);

	// decoder.h:649
	int Decode(short int **, int);

	// decoder.h:665
	void Release();

private:
	// decoder.h:670
	DecoderExtended * CreateInstance(System *, unsigned int);

	// decoder.h:674
	void ~DecoderExtended();

	// decoder.h:676
	void SetDecoder(rw::audio::core::Decoder *);

	// decoder.h:681
	rw::audio::core::Decoder * GetDecoder();

	// decoder.h:686
	void TranslateF32ToS16(void *, void *, int);

}

// decoder.h:88
struct rw::audio::core::Decoder {
	int (*)(...) * _vptr.Decoder;

private:
	// decoder.h:419
	System * mpSystemUseGetSystemAccessor;

	// decoder.h:422
	System * mpSystemSpuUseGetSystemAccessor;

	// decoder.h:427
	void * mpDecoder;

	// decoder.h:429
	DecoderDesc::DecoderReleaseEventFn * mpReleaseEvent;

	// decoder.h:431
	void * mSampleBufferStorage;

	// decoder.h:434
	uintptr_t mpDecodeEvent;

	// decoder.h:437
	DecoderDesc::Guid mGuid;

	// decoder.h:441
	int mDecodeSlotSamplesDecoded;

	// decoder.h:442
	unsigned int mInstanceSize;

	// decoder.h:443
	unsigned int mRequestDescOffset;

	// decoder.h:444
	unsigned int mSampleBufferOffset;

	// decoder.h:447
	short unsigned int mDecodedSamplesAvailable;

	// decoder.h:449
	unsigned char mNumChannels;

	// decoder.h:451
	unsigned char mFeedSlot;

	// decoder.h:459
	unsigned char mPrepareSlot;

	// decoder.h:462
	unsigned char mDecodeSlot;

	// decoder.h:465
	unsigned char mMaxSlots;

	// decoder.h:467
	unsigned char mIsBlockBased;

public:
	void Decoder(const Decoder &);

	// decoder.h:108
	rw::audio::core::Decoder * LoadDecoder(void *, void *, int, System *);

	// decoder.h:118
	void SaveDecoder();

	// decoder.h:164
	unsigned char Feed(void *, int, rw::audio::core::Decoder::FeedType, int, void *, int);

	// decoder.h:198
	int Decode(SampleBuffer *, int);

	// decoder.h:207
	int GetSamplesRemaining(unsigned char);

	// decoder.h:244
	void Release();

	// decoder.h:259
	unsigned int GetInstanceSize();

protected:
	// decoder.h:292
	virtual void FeedEvent(unsigned char);

	// decoder.h:297
	System * GetSystem();

	// decoder.h:307
	unsigned int GetChannels();

	// decoder.h:317
	rw::audio::core::Decoder::RequestDesc * GetCurrentRequestDesc();

	// decoder.h:339
	void ResetPrepareSlot();

	// decoder.h:347
	const rw::audio::core::Decoder::RequestDesc * GetDecodingRequestDesc();

	// decoder.h:363
	void Decoder();

	// decoder.h:364
	virtual void ~Decoder();

private:
	// decoder.h:373
	void SetSystem(System *);

	// decoder.h:379
	void AdvanceDecodeState(int);

	// decoder.h:382
	rw::audio::core::Decoder::RequestDesc * GetRequestDescArray();

	// decoder.h:388
	rw::audio::core::Decoder::RequestDesc * GetRequestDesc(unsigned int);

	// decoder.h:395
	void SetChannels(unsigned int);

	// decoder.h:402
	SampleBuffer * GetSampleBuffer();

	// decoder.h:407
	rw::audio::core::Decoder::RequestDesc * AdvanceSlot(unsigned char *);

}

