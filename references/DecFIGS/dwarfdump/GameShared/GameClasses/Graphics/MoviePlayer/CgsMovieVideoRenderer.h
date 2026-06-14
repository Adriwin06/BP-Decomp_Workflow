// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct MovieVideoRenderer {
		// CgsMovieVideoRenderer.h:59
		extern const uint32_t KU_NUM_TEXTURES = 4;

	}

}

// CgsMovieVideoRenderer.h:59
extern const uint32_t KU_NUM_TEXTURES = 4;

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct MovieVideoRenderer {
		// CgsMovieVideoRenderer.h:132
		struct TextureInfoType {
			// CgsMovieVideoRenderer.h:135
			Resource mTextureResource;

			// CgsMovieVideoRenderer.h:136
			Texture2D * mpTexture;

			// CgsMovieVideoRenderer.h:137
			Resource mTextureStateResource;

			// CgsMovieVideoRenderer.h:138
			TextureState * mpTextureState;

			// CgsMovieVideoRenderer.h:139
			uint32_t * mpPixelData;

		public:
			// CgsMovieVideoRenderer.h:134
			TextureInfoType();

		}

	}

}

// CgsMovieVideoRenderer.h:174
struct CgsGraphics::MovieVideoRenderableOperations : public rw::movie::IVideoRenderableOperations {
private:
	// CgsMovieVideoRenderer.h:216
	EA::Allocator::ICoreAllocator * mpAllocator;

	// CgsMovieVideoRenderer.h:217
	MoviePlayer * mpParentMoviePlayer;

public:
	void MovieVideoRenderableOperations(const MovieVideoRenderableOperations &);

	// CgsMovieVideoRenderer.h:227
	void SetParentMoviePlayer(MoviePlayer *);

	// CgsMovieVideoRenderer.cpp:615
	ResourceDescriptor GetResourceDescriptor();

	// CgsMovieVideoRenderer.cpp:633
	MovieVideoRenderableOperations * Initialize(Resource &);

	// CgsMovieVideoRenderer.cpp:680
	void MovieVideoRenderableOperations();

	// CgsMovieVideoRenderer.cpp:697
	virtual void ~MovieVideoRenderableOperations();

	// CgsMovieVideoRenderer.cpp:719
	virtual void Prepare(VideoRenderable *, unsigned int, unsigned int, rw::movie::VideoRenderable::VideoFormat, unsigned int);

	// CgsMovieVideoRenderer.cpp:771
	virtual void Release(VideoRenderable *);

	// CgsMovieVideoRenderer.cpp:813
	virtual void PreModify(VideoRenderable *);

	// CgsMovieVideoRenderer.cpp:833
	virtual void PostModify(VideoRenderable *);

	// CgsMovieVideoRenderer.cpp:650
	virtual void Init(EA::Allocator::ICoreAllocator *);

	// CgsMovieVideoRenderer.cpp:666
	virtual void Shutdown();

}

// CgsMovieVideoRenderer.h:56
struct CgsGraphics::MovieVideoRenderer : public rw::movie::IVideoRenderer {
	// CgsMovieVideoRenderer.h:59
	extern const uint32_t KU_NUM_TEXTURES = 4;

private:
	// CgsMovieVideoRenderer.h:122
	MoviePlayer * mpParentMoviePlayer;

	// CgsMovieVideoRenderer.h:123
	EA::Allocator::ICoreAllocator * mpAllocator;

	// CgsMovieVideoRenderer.h:124
	MovieRenderer::ReleaseVideoRenderableFunc * mpReleaseFunc;

	// CgsMovieVideoRenderer.h:125
	rw::movie::MovieDecoder * mpReleaseFuncContext;

	// CgsMovieVideoRenderer.h:127
	unsigned int muWidth;

	// CgsMovieVideoRenderer.h:128
	unsigned int muHeight;

	// CgsMovieVideoRenderer.h:142
	CgsGraphics::MovieVideoRenderer::TextureInfoType[4] maTextureInfoTypes;

	// CgsMovieVideoRenderer.h:144
	uint32_t muTextureIndex;

	// CgsMovieVideoRenderer.h:146
	MovieTextureData mJobData;

	// CgsMovieVideoRenderer.h:147
	Job mJob;

	// CgsMovieVideoRenderer.h:166
	int32_t miMoviePlayerPM1;

	// CgsMovieVideoRenderer.h:167
	int32_t miMoviePlayerPM2;

public:
	void MovieVideoRenderer(const MovieVideoRenderer &);

	// CgsMovieVideoRenderer.cpp:57
	void SetParentMoviePlayer(MoviePlayer *);

	// CgsMovieVideoRenderer.cpp:74
	ResourceDescriptor GetResourceDescriptor();

	// CgsMovieVideoRenderer.cpp:92
	CgsGraphics::MovieVideoRenderer * Initialize(Resource &);

	// CgsMovieVideoRenderer.cpp:109
	void MovieVideoRenderer();

	// CgsMovieVideoRenderer.cpp:134
	virtual void ~MovieVideoRenderer();

	// CgsMovieVideoRenderer.cpp:165
	virtual void Init(EA::Allocator::ICoreAllocator *, unsigned int, unsigned int);

	// CgsMovieVideoRenderer.cpp:202
	virtual unsigned int GetNumberOfVideoBuffers(rw::movie::VideoRenderable::VideoFormat);

	// CgsMovieVideoRenderer.h:95
	virtual float GetRenderingDelay();

	// CgsMovieVideoRenderer.cpp:219
	virtual void SetReleaseRenderableCallback(MovieRenderer::ReleaseVideoRenderableFunc *, rw::movie::MovieDecoder *);

	// CgsMovieVideoRenderer.cpp:384
	virtual void Render(VideoRenderable *);

	// CgsMovieVideoRenderer.cpp:393
	void Render(int32_t, VideoRenderable *, bool);

	// CgsMovieVideoRenderer.h:109
	virtual void SetPositionX(float);

	// CgsMovieVideoRenderer.h:110
	virtual void SetPositionY(float);

	// CgsMovieVideoRenderer.h:111
	virtual void SetPositionZ(float);

	// CgsMovieVideoRenderer.h:112
	virtual float GetPositionX();

	// CgsMovieVideoRenderer.h:113
	virtual float GetPositionY();

	// CgsMovieVideoRenderer.h:114
	virtual float GetPositionZ();

	// CgsMovieVideoRenderer.h:115
	virtual void SetScaleX(float);

	// CgsMovieVideoRenderer.h:116
	virtual void SetScaleY(float);

	// CgsMovieVideoRenderer.h:117
	virtual float GetScaleX();

	// CgsMovieVideoRenderer.h:118
	virtual float GetScaleY();

private:
	// CgsMovieVideoRenderer.cpp:549
	void CreateOutputTexture(CgsGraphics::MovieVideoRenderer::TextureInfoType *, uint32_t, uint32_t);

	// CgsMovieVideoRenderer.cpp:239
	void EncodeYuvOntoRgbaTexture(VideoRenderable *, uint32_t *);

}

