// idecoder.h:109
struct rw::movie::ISubtitleDecoder {
	int (*)(...) * _vptr.ISubtitleDecoder;

public:
	// idecoder.h:111
	virtual void ~ISubtitleDecoder();

	// idecoder.h:115
	virtual void Init(EA::Allocator::ICoreAllocator *);

	// idecoder.h:120
	virtual void Shutdown();

	// idecoder.h:127
	virtual void SetStreamTapHandle(Stream *);

	// idecoder.h:131
	virtual void Decode(VideoRenderable::FrameNumber, SubtitleRenderable *);

}

// idecoder.h:75
struct rw::movie::IAudioDecoder {
	int (*)(...) * _vptr.IAudioDecoder;

public:
	// idecoder.h:77
	virtual void ~IAudioDecoder();

	// idecoder.h:82
	virtual void Init(EA::Allocator::ICoreAllocator *, unsigned int, unsigned int, unsigned int);

	// idecoder.h:87
	virtual void Shutdown();

	// idecoder.h:94
	virtual void SetStreamTapHandle(Stream *, int);

	// idecoder.h:99
	virtual void Decode(AudioRenderable **);

}

// idecoder.h:30
struct rw::movie::IVideoDecoder {
	int (*)(...) * _vptr.IVideoDecoder;

public:
	// idecoder.h:32
	virtual void ~IVideoDecoder();

	// idecoder.h:37
	virtual void Init(EA::Allocator::ICoreAllocator *, unsigned int, unsigned int);

	// idecoder.h:42
	virtual void Shutdown();

	// idecoder.h:48
	virtual rw::movie::VideoRenderable::VideoFormat GetDecodedFormat();

	// idecoder.h:55
	virtual void SetStreamTapHandle(Stream *);

	// idecoder.h:61
	virtual bool Decode(VideoRenderable::FrameNumber, VideoRenderable *);

	// idecoder.h:65
	virtual VideoRenderable::FrameNumber GetCurrentFrameNumber();

}

