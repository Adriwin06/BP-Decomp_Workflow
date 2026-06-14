// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct Vignette {
				// rwgpfxvignette.h:38
				struct State {
					// rwgpfxvignette.h:40
					Vector4 m_gradientScalars;

					// rwgpfxvignette.h:41
					Vector4 m_innerColour;

					// rwgpfxvignette.h:42
					Vector4 m_outerColour;

					// rwgpfxvignette.h:43
					Vector4 m_centerScale;

				public:
					// rwgpfxvignette.h:45
					State();

					// rwgpfxvignette.h:53
					void SetSharpness(float32_t);

					// rwgpfxvignette.h:58
					void SetAngle(float32_t);

					// rwgpfxvignette.h:63
					void SetInnerColour(Vector4);

					// rwgpfxvignette.h:68
					void SetOuterColour(Vector4);

					// rwgpfxvignette.h:73
					void SetCenter(Vector2);

					// rwgpfxvignette.h:79
					void SetAmount(Vector2);

				}

				// rwgpfxvignette.h:87
				struct Parameters {
					// rwgpfxvignette.h:89
					rw::IResourceAllocator * m_allocator;

					// rwgpfxvignette.h:90
					rw::graphics::postfx::Vignette::State m_state;

				public:
					// rwgpfxvignette.h:92
					Parameters();

					// rwgpfxvignette.h:97
					rw::IResourceAllocator * GetAllocator();

					// rwgpfxvignette.h:102
					void SetAllocator(rw::IResourceAllocator *);

					// rwgpfxvignette.h:107
					const rw::graphics::postfx::Vignette::State & GetState() const;

					// rwgpfxvignette.h:112
					rw::graphics::postfx::Vignette::State & GetState();

					// rwgpfxvignette.h:117
					void SetState(rw::graphics::postfx::Vignette::State &);

				}

			}

		}

	}

}

// rwgpfxvignette.h:35
struct rw::graphics::postfx::Vignette {
protected:
	// rwgpfxvignette.h:149
	Vector4 m_gradientScalars;

	// rwgpfxvignette.h:150
	Vector4 m_innerColour;

	// rwgpfxvignette.h:151
	Vector4 m_outerColour;

	// rwgpfxvignette.h:152
	Vector4 m_centerScale;

	// rwgpfxvignette.h:153
	float32_t m_angle;

	// rwgpfxvignette.h:155
	ProgramVariableHandle m_controlScalarsHandle;

	// rwgpfxvignette.h:156
	ProgramVariableHandle m_innerColourHandle;

	// rwgpfxvignette.h:157
	ProgramVariableHandle m_outerColourHandle;

	// rwgpfxvignette.h:158
	ProgramVariableHandle m_uvOffsetHandle;

	// rwgpfxvignette.h:160
	Resource m_blendStateResource;

	// rwgpfxvignette.h:161
	Resource m_vertexDescriptorResource;

	// rwgpfxvignette.h:162
	Resource m_depthStencilResource;

	// rwgpfxvignette.h:163
	Resource m_rasterizerStateResource;

	// rwgpfxvignette.h:165
	ProgramBuffer * m_vertexProgram;

	// rwgpfxvignette.h:166
	ProgramBuffer * m_pixelProgram;

	// rwgpfxvignette.h:167
	ProgramBuffer * m_textureProgram;

	// rwgpfxvignette.h:168
	BlendState * m_blendState;

	// rwgpfxvignette.h:170
	RasterizerState * m_rasterizerState;

	// rwgpfxvignette.h:171
	VertexDescriptor * m_vertexDescriptor;

	// rwgpfxvignette.h:172
	DepthStencilState * m_depthStencilState;

	// rwgpfxvignette.h:176
	rw::IResourceAllocator * m_allocator;

public:
	// rwgpfxvignette.h:123
	ResourceDescriptor GetResourceDescriptor(const rw::graphics::postfx::Vignette::Parameters &);

	// rwgpfxvignette.h:124
	Vignette * Initialize(const Resource &, const rw::graphics::postfx::Vignette::Parameters &);

	// rwgpfxvignette.h:125
	void Release();

	// rwgpfxvignette.h:126
	rw::IResourceAllocator * GetAllocator();

	// rwgpfxvignette.h:131
	void SetState(const rw::graphics::postfx::Vignette::State &);

	// rwgpfxvignette.h:136
	void Apply(RenderTarget *, bool);

protected:
	// rwgpfxvignette.h:139
	void Vignette(const rw::graphics::postfx::Vignette::Parameters &);

	// rwgpfxvignette.h:145
	void RenderVignetteQuad(const rw::math::vpu::Vector4 *);

}

