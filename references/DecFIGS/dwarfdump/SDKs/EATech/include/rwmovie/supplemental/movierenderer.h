// importnamespaces.h:8
namespace rw {
	// renderable.h:15
	namespace movie {
		// Declaration
		struct MovieRenderer {
			// movierenderer.h:127
			enum MovieRendererAudioState {
				AUDIOSTATE_CREATED = 0,
				AUDIOSTATE_PREPARED = 1,
				AUDIOSTATE_RENDERING = 2,
				AUDIOSTATE_PAUSED = 3,
				AUDIOSTATE_FINISHED = 4,
				AUDIOSTATE_SHUTDOWN = 5,
				AUDIOSTATE_ERROR = 6,
			}

			// movierenderer.h:144
			enum MovieRendererState {
				STATE_CREATED = 0,
				STATE_PREPARED = 1,
				STATE_RENDERING = 2,
				STATE_SHUTDOWN = 3,
				STATE_ERROR = 4,
			}

		}

	}

}

// movierenderer.h:13
struct rw::movie::MovieRenderer {
private:
	// movierenderer.h:97
	EA::Allocator::ICoreAllocator * mAllocator;

	// movierenderer.h:99
	rw::movie::IVideoRenderer * mVideoRenderer;

	// movierenderer.h:100
	rw::movie::IAudioRenderer * mAudioRenderer;

	// movierenderer.h:101
	rw::movie::ISubtitleRenderer * mSubtitleRenderer;

	// Unknown accessibility
	// irenderer.h:131
	typedef void (AudioRenderable **, rw::movie::IAudioDecoder *) AudioDecodeFunc;

	// movierenderer.h:103
	MovieRenderer::AudioDecodeFunc * mAudioDecodeCallbackFcn;

	// movierenderer.h:104
	rw::movie::IAudioDecoder * mAudioDecodeCallbackContext;

	// Unknown accessibility
	// irenderer.h:140
	typedef void (void *) AudioFinishedFunc;

	// movierenderer.h:105
	MovieRenderer::AudioFinishedFunc * mAudioFinishedCallbackFcn;

	// Unknown accessibility
	// irenderer.h:32
	typedef void (VideoRenderable *, rw::movie::MovieDecoder *) ReleaseVideoRenderableFunc;

	// movierenderer.h:106
	MovieRenderer::ReleaseVideoRenderableFunc * mReleaseVideoRenderableCallbackFcn;

	// movierenderer.h:107
	rw::movie::MovieDecoder * mReleaseVideoRenderableCallbackContext;

	// movierenderer.h:109
	float mVideoRenderingDelay;

	// movierenderer.h:110
	float mAudioRenderingDelay;

	// movierenderer.h:111
	float mVideoAudioDelay;

	// movierenderer.h:113
	float mVolume;

	// movierenderer.h:115
	float mVideoPositionX;

	// movierenderer.h:116
	float mVideoPositionY;

	// movierenderer.h:117
	float mVideoPositionZ;

	// movierenderer.h:118
	float mVideoScaleX;

	// movierenderer.h:119
	float mVideoScaleY;

	// movierenderer.h:137
	rw::movie::MovieRenderer::MovieRendererAudioState mAudioState;

	// movierenderer.h:152
	rw::movie::MovieRenderer::MovieRendererState mState;

public:
	// movierenderer.h:17
	void MovieRenderer(EA::Allocator::ICoreAllocator *);

	// movierenderer.h:18
	void ~MovieRenderer();

	// movierenderer.h:23
	void SetVideoRenderer(rw::movie::IVideoRenderer *);

	// movierenderer.h:24
	void SetAudioRenderer(rw::movie::IAudioRenderer *);

	// movierenderer.h:25
	void SetSubtitleRenderer(rw::movie::ISubtitleRenderer *);

	// movierenderer.h:29
	void SetAudioDecodeCallback(MovieRenderer::AudioDecodeFunc *, rw::movie::IAudioDecoder *);

	// movierenderer.h:33
	void SetReleaseVideoRenderableCallback(MovieRenderer::ReleaseVideoRenderableFunc *, rw::movie::MovieDecoder *);

	// movierenderer.h:36
	void AudioFinishedFcn(void *);

	// movierenderer.h:40
	void PrepareRenderer(unsigned int, unsigned int, unsigned int, unsigned int);

	// movierenderer.h:46
	float GetVideoAudioDelay();

	// movierenderer.h:49
	void SetVolume(float);

	// movierenderer.h:54
	void Begin();

	// movierenderer.h:57
	void Pause();

	// movierenderer.h:60
	void UnPause();

	// movierenderer.h:64
	void SetVideoPositionX(float);

	// movierenderer.h:65
	void SetVideoPositionY(float);

	// movierenderer.h:66
	void SetVideoPositionZ(float);

	// movierenderer.h:69
	float GetVideoPositionX();

	// movierenderer.h:70
	float GetVideoPositionY();

	// movierenderer.h:71
	float GetVideoPositionZ();

	// movierenderer.h:74
	void SetVideoScaleX(float);

	// movierenderer.h:75
	void SetVideoScaleY(float);

	// movierenderer.h:78
	float GetVideoScaleX();

	// movierenderer.h:79
	float GetVideoScaleY();

	// movierenderer.h:84
	void Render(VideoRenderable *, SubtitleRenderable *);

	// movierenderer.h:91
	float GetAudioRenderingPosition();

	// movierenderer.h:94
	void Shutdown();

}

