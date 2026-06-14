// CgsMovieSoundRenderer.h:38
struct CgsGraphics::MovieSoundRenderer : public rw::movie::IAudioRenderer {
private:
	// CgsMovieSoundRenderer.h:115
	EA::Allocator::ICoreAllocator * mpAllocator;

	// CgsMovieSoundRenderer.h:116
	int32_t miSndStrmHandle;

	// CgsMovieSoundRenderer.h:117
	int32_t miSndRequestHandle;

	// CgsMovieSoundRenderer.h:118
	MovieRenderer::AudioDecodeFunc * mAudioDecodeCallbackFunc;

	// CgsMovieSoundRenderer.h:119
	rw::movie::IAudioDecoder * mAudioDecodeCallbackFuncContext;

	// CgsMovieSoundRenderer.h:120
	MovieRenderer::AudioFinishedFunc * mAudioFinishedCallbackFunc;

	// CgsMovieSoundRenderer.h:121
	void * mpvAudioFinishedCallbackFuncContext;

	// CgsMovieSoundRenderer.h:122
	float32_t mfVolume;

public:
	void MovieSoundRenderer(const MovieSoundRenderer &);

	// CgsMovieSoundRenderer.cpp:53
	ResourceDescriptor GetResourceDescriptor();

	// CgsMovieSoundRenderer.cpp:73
	MovieSoundRenderer * Initialize(Resource &);

	// CgsMovieSoundRenderer.cpp:89
	void MovieSoundRenderer();

	// CgsMovieSoundRenderer.cpp:110
	virtual void ~MovieSoundRenderer();

	// CgsMovieSoundRenderer.cpp:128
	virtual void Init(EA::Allocator::ICoreAllocator *, uint32_t, uint32_t);

	// CgsMovieSoundRenderer.cpp:148
	virtual float32_t GetRenderingDelay();

	// CgsMovieSoundRenderer.cpp:167
	virtual float32_t GetRenderingPosition();

	// CgsMovieSoundRenderer.cpp:199
	virtual void SetAudioDecodeCallback(MovieRenderer::AudioDecodeFunc *, rw::movie::IAudioDecoder *);

	// CgsMovieSoundRenderer.cpp:221
	virtual void SetAudioFinishedCallback(MovieRenderer::AudioFinishedFunc *, void *);

	// CgsMovieSoundRenderer.cpp:239
	virtual void SetVolume(float32_t);

	// CgsMovieSoundRenderer.cpp:260
	virtual float32_t GetVolume();

	// CgsMovieSoundRenderer.cpp:275
	virtual void Begin();

	// CgsMovieSoundRenderer.cpp:324
	virtual void Pause();

	// CgsMovieSoundRenderer.cpp:341
	virtual void UnPause();

	// CgsMovieSoundRenderer.cpp:359
	virtual void Stop();

	// CgsMovieSoundRenderer.cpp:307
	virtual void SetSndHandles();

}

