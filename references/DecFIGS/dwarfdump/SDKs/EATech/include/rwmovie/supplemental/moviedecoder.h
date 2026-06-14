// importnamespaces.h:8
namespace rw {
	// renderable.h:15
	namespace movie {
		// Declaration
		struct MovieDecoder {
			// moviedecoder.h:121
			enum MovieDecoderState {
				STATE_CREATED = 0,
				STATE_PREPARED = 1,
				STATE_DECODING = 2,
				STATE_FINISHED = 3,
				STATE_SHUTDOWN = 4,
				STATE_ERROR = 5,
			}

		}

	}

}

// moviedecoder.h:38
struct rw::movie::MovieDecoder {
private:
	// moviedecoder.h:92
	EA::Allocator::ICoreAllocator * mAllocator;

	// moviedecoder.h:94
	rw::movie::IVideoDecoder * mVideoDecoder;

	// moviedecoder.h:95
	rw::movie::IAudioDecoder * mAudioDecoder;

	// moviedecoder.h:96
	rw::movie::ISubtitleDecoder * mSubtitleDecoder;

	// moviedecoder.h:98
	rw::movie::IVideoRenderableOperations * mVideoRenderableOperations;

	// moviedecoder.h:100
	Stream * mVideoStreamTapHandle;

	// moviedecoder.h:101
	Stream * mAudioStreamTapHandle;

	// moviedecoder.h:102
	int mAudioStreamRequestId;

	// moviedecoder.h:103
	Stream * mSubtitleStreamTapHandle;

	// moviedecoder.h:105
	Thread * mVideoDecodeThread;

	// moviedecoder.h:106
	void * mVideoDecodeThreadMem;

	// moviedecoder.h:108
	Semaphore * mEmptyVideoRenderablesSemaphore;

	// moviedecoder.h:109
	void * mEmptyVideoRenderablesSemaphoreMem;

	// moviedecoder.h:113
	rw::movie::VideoRenderableManager * mVideoRenderableManager;

	// moviedecoder.h:114
	unsigned int mNumVideoRenderables;

	// moviedecoder.h:116
	VideoRenderable::FrameNumber mCurFrameNumber;

	// moviedecoder.h:117
	unsigned int mTotalFrames;

	// moviedecoder.h:119
	rw::movie::EventLogger * mEventLogger;

	// moviedecoder.h:130
	rw::movie::MovieDecoder::MovieDecoderState mState;

public:
	// moviedecoder.h:42
	void MovieDecoder(EA::Allocator::ICoreAllocator *);

	// moviedecoder.h:45
	void ~MovieDecoder();

	// moviedecoder.h:50
	void SetVideoDecoder(rw::movie::IVideoDecoder *);

	// moviedecoder.h:51
	void SetAudioDecoder(rw::movie::IAudioDecoder *);

	// moviedecoder.h:52
	void SetSubtitleDecoder(rw::movie::ISubtitleDecoder *);

	// moviedecoder.h:55
	void SetVideoRenderableOperations(rw::movie::IVideoRenderableOperations *);

	// moviedecoder.h:59
	void SetVideoStreamTapHandle(Stream *);

	// moviedecoder.h:61
	void SetAudioStreamTapHandle(Stream *, int);

	// moviedecoder.h:62
	void SetSubtitleStreamTapHandle(Stream *);

	// moviedecoder.h:65
	void SetEventLogger(rw::movie::EventLogger *);

	// moviedecoder.h:69
	void PrepareDecoder(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);

	// moviedecoder.h:73
	void Decode(VideoRenderable::FrameNumber, VideoRenderable **, SubtitleRenderable *);

	// moviedecoder.h:76
	void ReleaseVideoRenderable(VideoRenderable *, rw::movie::MovieDecoder *);

	// moviedecoder.h:80
	void AudioDecodeCallback(AudioRenderable **, rw::movie::IAudioDecoder *);

	// moviedecoder.h:83
	void Shutdown();

private:
	// moviedecoder.h:89
	void MovieDecoder(const MovieDecoder &);

	// moviedecoder.h:90
	MovieDecoder & operator=(const MovieDecoder &);

	// moviedecoder.h:111
	intptr_t VideoDecodeThreadFcn(void *);

}

