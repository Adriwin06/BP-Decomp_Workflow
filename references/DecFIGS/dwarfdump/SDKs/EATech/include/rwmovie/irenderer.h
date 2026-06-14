// irenderer.h:221
struct rw::movie::ISubtitleRenderer {
	int (*)(...) * _vptr.ISubtitleRenderer;

public:
	// irenderer.h:223
	virtual void ~ISubtitleRenderer();

	// irenderer.h:227
	virtual void Init(EA::Allocator::ICoreAllocator *);

	// irenderer.h:232
	virtual void SetSubtitlePositionX(float);

	// irenderer.h:236
	virtual void SetSubtitlePositionY(float);

	// irenderer.h:240
	virtual void SetSubtitlePositionZ(float);

	// irenderer.h:245
	virtual float GetSubtitlePositionX();

	// irenderer.h:249
	virtual float GetSubtitlePositionY();

	// irenderer.h:253
	virtual float GetSubtitlePositionZ();

	// irenderer.h:258
	virtual void SetSubtitleBoudningBoxWidth(float);

	// irenderer.h:262
	virtual void SetSubtitleBoudningBoxHeight(float);

	// irenderer.h:267
	virtual float GetSubtitleBoudningBoxWidth();

	// irenderer.h:271
	virtual float GetSubtitleBoudningBoxHeight();

	// irenderer.h:277
	virtual void SetVideoPositionX(float);

	// irenderer.h:281
	virtual void SetVideoPositionY(float);

	// irenderer.h:285
	virtual void SetVideoPositionZ(float);

	// irenderer.h:291
	virtual float GetVideoPositionX();

	// irenderer.h:295
	virtual float GetVideoPositionY();

	// irenderer.h:299
	virtual float GetVideoPositionZ();

	// irenderer.h:305
	virtual void SetScaleX(float);

	// irenderer.h:309
	virtual void SetScaleY(float);

	// irenderer.h:314
	virtual float GetScaleX();

	// irenderer.h:319
	virtual float GetScaleY();

	// irenderer.h:325
	virtual void SetXJustification(rw::movie::SUBTITLE_JUSTIFICATION);

	// irenderer.h:329
	virtual void SetYJustification(rw::movie::SUBTITLE_JUSTIFICATION);

	// irenderer.h:335
	virtual rw::movie::SUBTITLE_JUSTIFICATION GetXJustification();

	// irenderer.h:339
	virtual rw::movie::SUBTITLE_JUSTIFICATION GetYJustification();

	// irenderer.h:344
	virtual void Render(SubtitleRenderable *);

}

// irenderer.h:148
struct rw::movie::IAudioRenderer {
	int (*)(...) * _vptr.IAudioRenderer;

public:
	void IAudioRenderer();

	void IAudioRenderer(const IAudioRenderer &);

	// irenderer.h:150
	virtual void ~IAudioRenderer();

	// irenderer.h:155
	virtual void Init(EA::Allocator::ICoreAllocator *, unsigned int, unsigned int);

	// irenderer.h:160
	virtual float GetRenderingDelay();

	// irenderer.h:166
	virtual float GetRenderingPosition();

	// irenderer.h:173
	virtual void SetAudioDecodeCallback(MovieRenderer::AudioDecodeFunc *, rw::movie::IAudioDecoder *);

	// irenderer.h:180
	virtual void SetAudioFinishedCallback(MovieRenderer::AudioFinishedFunc *, void *);

	// irenderer.h:185
	virtual void SetVolume(float);

	// irenderer.h:190
	virtual float GetVolume();

	// irenderer.h:195
	virtual void Begin();

	// irenderer.h:200
	virtual void Pause();

	// irenderer.h:205
	virtual void UnPause();

	// irenderer.h:210
	virtual void Stop();

}

// irenderer.h:40
struct rw::movie::IVideoRenderer {
	int (*)(...) * _vptr.IVideoRenderer;

public:
	void IVideoRenderer();

	void IVideoRenderer(const IVideoRenderer &);

	// irenderer.h:42
	virtual void ~IVideoRenderer();

	// irenderer.h:47
	virtual void Init(EA::Allocator::ICoreAllocator *, unsigned int, unsigned int);

	// irenderer.h:56
	virtual unsigned int GetNumberOfVideoBuffers(rw::movie::VideoRenderable::VideoFormat);

	// irenderer.h:61
	virtual float GetRenderingDelay();

	// irenderer.h:67
	virtual void SetReleaseRenderableCallback(MovieRenderer::ReleaseVideoRenderableFunc *, rw::movie::MovieDecoder *);

	// irenderer.h:72
	virtual void SetPositionX(float);

	// irenderer.h:76
	virtual void SetPositionY(float);

	// irenderer.h:80
	virtual void SetPositionZ(float);

	// irenderer.h:85
	virtual float GetPositionX();

	// irenderer.h:89
	virtual float GetPositionY();

	// irenderer.h:93
	virtual float GetPositionZ();

	// irenderer.h:98
	virtual void SetScaleX(float);

	// irenderer.h:102
	virtual void SetScaleY(float);

	// irenderer.h:107
	virtual float GetScaleX();

	// irenderer.h:111
	virtual float GetScaleY();

	// irenderer.h:115
	virtual void Render(VideoRenderable *);

}

// irenderer.h:40
void rw::movie::IVideoRenderer::IVideoRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// irenderer.h:148
void rw::movie::IAudioRenderer::IAudioRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

