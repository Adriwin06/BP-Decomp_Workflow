// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct B4Blur {
				// rwgpfxb4blur.h:39
				struct State {
					// rwgpfxb4blur.h:41
					Vector2 m_blendAmount;

					// rwgpfxb4blur.h:42
					Vector2 m_blurAmount;

					// rwgpfxb4blur.h:43
					Vector2 m_blendCenter;

					// rwgpfxb4blur.h:44
					Vector2 m_blurCenter;

					// rwgpfxb4blur.h:45
					float32_t m_blurOpacity;

					// rwgpfxb4blur.h:46
					float32_t m_blurVelocity;

					// rwgpfxb4blur.h:47
					float32_t m_blendSharpMUL;

					// rwgpfxb4blur.h:48
					float32_t m_blendSharpADD;

					// rwgpfxb4blur.h:49
					float32_t m_blendNoise;

					// rwgpfxb4blur.h:50
					float32_t m_blendAngle;

				public:
					// rwgpfxb4blur.h:52
					State();

					// rwgpfxb4blur.h:66
					void SetBlendAmount(Vector2);

					// rwgpfxb4blur.h:71
					void SetBlurAmount(Vector2);

					// rwgpfxb4blur.h:76
					void SetBlendCenter(Vector2);

					// rwgpfxb4blur.h:81
					void SetBlurCenter(Vector2);

					// rwgpfxb4blur.h:86
					void SetBlurOpacity(float32_t);

					// rwgpfxb4blur.h:91
					void SetBlurVelocity(float32_t);

					// rwgpfxb4blur.h:96
					void SetBlendSharpness(float32_t);

					// rwgpfxb4blur.h:104
					void SetBlendGradientMUL(float32_t);

					// rwgpfxb4blur.h:109
					void SetBlendGradientADD(float32_t);

					// rwgpfxb4blur.h:114
					void SetBlendNoise(float32_t);

					// rwgpfxb4blur.h:119
					void SetBlendAngle(float32_t);

				}

				// rwgpfxb4blur.h:126
				struct Parameters {
					// rwgpfxb4blur.h:128
					rw::IResourceAllocator * m_allocator;

					// rwgpfxb4blur.h:129
					BlendState * m_scatterBlendState;

					// rwgpfxb4blur.h:130
					rw::graphics::postfx::B4Blur::State m_state;

				public:
					// rwgpfxb4blur.h:132
					Parameters();

					// rwgpfxb4blur.h:137
					rw::IResourceAllocator * GetAllocator();

					// rwgpfxb4blur.h:142
					void SetAllocator(rw::IResourceAllocator *);

					// rwgpfxb4blur.h:147
					BlendState * GetBlendState();

					// rwgpfxb4blur.h:152
					void SetBlendState(BlendState *);

					// rwgpfxb4blur.h:157
					const rw::graphics::postfx::B4Blur::State & GetState() const;

					// rwgpfxb4blur.h:162
					rw::graphics::postfx::B4Blur::State & GetState();

					// rwgpfxb4blur.h:167
					void SetState(rw::graphics::postfx::B4Blur::State &);

				}

			}

		}

	}

}

// rwgpfxb4blur.h:33
struct rw::graphics::postfx::B4Blur {
protected:
	// rwgpfxb4blur.h:254
	rw::graphics::postfx::B4Blur::State m_state;

	// rwgpfxb4blur.h:256
	ProgramBuffer * m_blurProgram;

	// rwgpfxb4blur.h:257
	ProgramBuffer * m_downsampleProgram;

	// rwgpfxb4blur.h:259
	Resource m_rasterizerStateResource;

	// rwgpfxb4blur.h:260
	RasterizerState * m_rasterizerState;

	// rwgpfxb4blur.h:262
	ProgramBuffer * m_textureProgram;

	// rwgpfxb4blur.h:263
	ProgramVariableHandle m_blendFactorTextureHandle;

	// rwgpfxb4blur.h:265
	ProgramVariableHandle m_sampleOffsetHandle;

	// rwgpfxb4blur.h:266
	ProgramVariableHandle m_controlScalarsHandle;

	// rwgpfxb4blur.h:271
	Resource m_quadVertexDescriptorResource;

	// rwgpfxb4blur.h:272
	VertexDescriptor * m_quadVertexDescriptor;

	// rwgpfxb4blur.h:274
	Resource m_quadDepthStencilStateResource;

	// rwgpfxb4blur.h:275
	DepthStencilState * m_quadDepthStencilState;

	// rwgpfxb4blur.h:277
	ProgramBuffer * m_quadVertexProgram;

	// rwgpfxb4blur.h:282
	Resource m_scatterVertexDescriptorResource;

	// rwgpfxb4blur.h:283
	VertexDescriptor * m_scatterVertexDescriptor;

	// rwgpfxb4blur.h:285
	Resource m_scatterDepthStencilStateResource;

	// rwgpfxb4blur.h:286
	DepthStencilState * m_scatterDepthStencilState;

	// rwgpfxb4blur.h:288
	ProgramBuffer * m_scatterVertexProgram;

	// rwgpfxb4blur.h:289
	ProgramVariableHandle m_scatterUVOffsetHandle;

	// rwgpfxb4blur.h:291
	ProgramBuffer * m_scatterPixelProgram;

	// rwgpfxb4blur.h:292
	ProgramVariableHandle m_scatterScalars1Handle;

	// rwgpfxb4blur.h:293
	ProgramVariableHandle m_scatterScalars2Handle;

	// rwgpfxb4blur.h:295
	BlendState * m_scatterBlendState;

	// rwgpfxb4blur.h:299
	ProgramBuffer * m_radialVertexProgram;

	// rwgpfxb4blur.h:300
	ProgramVariableHandle m_radialUVOffsetHandle;

	// rwgpfxb4blur.h:302
	ProgramBuffer * m_radialPixelProgram;

	// rwgpfxb4blur.h:303
	ProgramVariableHandle m_radialScalars1Handle;

	// rwgpfxb4blur.h:304
	ProgramVariableHandle m_radialScalars2Handle;

	// rwgpfxb4blur.h:308
	rw::IResourceAllocator * m_allocator;

public:
	// rwgpfxb4blur.h:173
	ResourceDescriptor GetResourceDescriptor(const rw::graphics::postfx::B4Blur::Parameters &);

	// rwgpfxb4blur.h:174
	B4Blur * Initialize(const Resource &, const rw::graphics::postfx::B4Blur::Parameters &);

	// rwgpfxb4blur.h:175
	void Release();

	// rwgpfxb4blur.h:176
	rw::IResourceAllocator * GetAllocator();

	// rwgpfxb4blur.h:181
	void SetState(const rw::graphics::postfx::B4Blur::State &);

	// rwgpfxb4blur.h:183
	void CommitRenderTargetToBackBuffer(RenderTarget *, RenderTarget *);

	// rwgpfxb4blur.h:188
	void DownSample(RenderTarget *, RenderTarget *);

	// rwgpfxb4blur.h:193
	void Apply(RenderTarget *, RenderTarget *, RenderTarget *);

protected:
	// rwgpfxb4blur.h:196
	void B4Blur(const rw::graphics::postfx::B4Blur::Parameters &);

	// rwgpfxb4blur.h:202
	void RenderBlurQuad(const rw::math::vpu::Vector4 *);

	// rwgpfxb4blur.h:203
	void RenderRadialQuad(const rw::math::vpu::Vector4 *);

	// rwgpfxb4blur.h:204
	void RenderScatterQuad(const rw::math::vpu::Vector4 *);

	// rwgpfxb4blur.h:211
	void CalculateDownSampleTaps(float32_t *, int, int);

	// rwgpfxb4blur.h:218
	float32_t Min(float32_t, float32_t);

	// rwgpfxb4blur.h:219
	float32_t Max(float32_t, float32_t);

}

