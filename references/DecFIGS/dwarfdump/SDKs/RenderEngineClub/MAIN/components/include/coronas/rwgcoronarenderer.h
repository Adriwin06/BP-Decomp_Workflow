// rwgcoronarenderer.h:43
extern const uint32_t FLAG_OCCLUSION_ZTEST = 1;

// rwgcoronarenderer.h:44
extern const uint32_t FLAG_OCCLUSION_CONDITIONALRENDER = 2;

// rwgcoronarenderer.h:102
extern uint32_t s_numSubImages;

// rwgcoronarenderer.h:103
extern bool s_beginLock;

// rwgcoronarenderer.h:104
extern bool s_beginBatchLock;

// rwgcoronarenderer.h:105
extern VertexDescriptor * s_vertexDescriptor;

// rwgcoronarenderer.h:106
extern ProgramBuffer * s_pixelProgram;

// rwgcoronarenderer.h:107
extern ProgramBuffer * s_vertexProgram;

// rwgcoronarenderer.h:108
extern ProgramVariableHandle s_cameraPositionHandle;

// rwgcoronarenderer.h:109
extern ProgramVariableHandle s_viewProjectionMatrixHandle;

// rwgcoronarenderer.h:110
extern ProgramVariableHandle s_viewXyScaleHandle;

// rwgcoronarenderer.h:115
extern const rw::math::vpu::Vector2 * s_atlasUVs;

// rwgcoronarenderer.h:116
extern const TextureState * s_textureState;

// rwgcoronarenderer.h:117
extern const BlendState * s_blendState;

// rwgcoronarenderer.h:118
extern const DepthStencilState * s_enabledZTestState;

// rwgcoronarenderer.h:119
extern const DepthStencilState * s_disabledZTestState;

// rwgcoronarenderer.h:22
struct renderengine::CoronaRenderer {
private:
	// rwgcoronarenderer.h:102
	extern uint32_t s_numSubImages;

	// rwgcoronarenderer.h:103
	extern bool s_beginLock;

	// rwgcoronarenderer.h:104
	extern bool s_beginBatchLock;

	// rwgcoronarenderer.h:105
	extern VertexDescriptor * s_vertexDescriptor;

	// rwgcoronarenderer.h:106
	extern ProgramBuffer * s_pixelProgram;

	// rwgcoronarenderer.h:107
	extern ProgramBuffer * s_vertexProgram;

	// rwgcoronarenderer.h:108
	extern ProgramVariableHandle s_cameraPositionHandle;

	// rwgcoronarenderer.h:109
	extern ProgramVariableHandle s_viewProjectionMatrixHandle;

	// rwgcoronarenderer.h:110
	extern ProgramVariableHandle s_viewXyScaleHandle;

	// rwgcoronarenderer.h:111
	extern Resource s_vertexDescriptorResource;

	// rwgcoronarenderer.h:112
	extern Resource s_pixelProgramResource;

	// rwgcoronarenderer.h:113
	extern Resource s_vertexProgramResource;

	// rwgcoronarenderer.h:115
	extern const rw::math::vpu::Vector2 * s_atlasUVs;

	// rwgcoronarenderer.h:116
	extern const TextureState * s_textureState;

	// rwgcoronarenderer.h:117
	extern const BlendState * s_blendState;

	// rwgcoronarenderer.h:118
	extern const DepthStencilState * s_enabledZTestState;

	// rwgcoronarenderer.h:119
	extern const DepthStencilState * s_disabledZTestState;

public:
	// rwgcoronarenderer.h:73
	void Initialize(rw::IResourceAllocator &);

	// rwgcoronarenderer.h:74
	void Release(rw::IResourceAllocator &);

	// rwgcoronarenderer.h:75
	void SetBlendState(const BlendState *);

	// rwgcoronarenderer.h:77
	void SetDepthStencilStates(const DepthStencilState *, const DepthStencilState *);

	// rwgcoronarenderer.h:80
	void SetTextureAtlas(const TextureState *, uint32_t, Vector2 *);

}

// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct CoronaRenderer {
		// rwgcoronarenderer.h:25
		struct RenderParameters {
			// rwgcoronarenderer.h:26
			extern const uint32_t FLAG_USE_DIRECTION = 1;

			// rwgcoronarenderer.h:27
			extern const uint32_t FLAG_CALCULATE_ROTATION = 2;

			// rwgcoronarenderer.h:28
			extern const uint32_t FLAG_CALCULATE_INTENSITY = 4;

			// rwgcoronarenderer.h:35
			uint32_t m_flags;

			// rwgcoronarenderer.h:36
			Vector4 m_cameraPositionPlusWhiteLevel;

			// rwgcoronarenderer.h:37
			Matrix44 m_viewProjectionMatrix;

			// rwgcoronarenderer.h:38
			Vector4 m_viewXyScale;

		public:
			// rwgcoronarenderer.h:30
			void SetFlags(uint32_t);

			// rwgcoronarenderer.h:31
			void SetCameraPositionPlusWhiteLevel(Vector4 &);

			// rwgcoronarenderer.h:32
			void SetViewProjectionMatrix(Matrix44 &);

			// rwgcoronarenderer.h:33
			void SetViewXyScale(Vector4);

		}

		// rwgcoronarenderer.h:42
		struct BatchParameters {
			// rwgcoronarenderer.h:43
			extern const uint32_t FLAG_OCCLUSION_ZTEST = 1;

			// rwgcoronarenderer.h:44
			extern const uint32_t FLAG_OCCLUSION_CONDITIONALRENDER = 2;

			// rwgcoronarenderer.h:49
			uint32_t m_numCoronas;

			// rwgcoronarenderer.h:50
			uint32_t m_flags;

		public:
			// rwgcoronarenderer.h:46
			void SetNumCoronas(uint32_t);

			// rwgcoronarenderer.h:47
			void SetFlags(uint32_t);

		}

	}

}

// rwgcoronarenderer.h:202
extern void Begin<shadow::Device>(const renderengine::CoronaRenderer::RenderParameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgcoronarenderer.h:218
		FloatShaderStateIterator iterator;

	}
}

// rwgcoronarenderer.h:246
extern void Dispatch<shadow::Device>(const renderengine::CoronaRenderer::BatchParameters &  parameters, CoronaBuffer *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgcoronarenderer.h:269
		VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color> vertexIterator;

		// rwgcoronarenderer.h:270
		uint32_t maxCoronasPerBatch;

		// rwgcoronarenderer.h:271
		uint32_t numCoronasLeft;

		// rwgcoronarenderer.h:272
		const Corona * coronas;

		// rwgcoronarenderer.h:274
		renderengine::Device::DirectDraw::Parameters drawParameters;

		// rwgcoronarenderer.h:280
		renderengine::Device::DirectDraw::BatchIterator batchIterator;

		{
			// rwgcoronarenderer.h:289
			uint32_t numCoronas;

			{
				// rwgcoronarenderer.h:293
				uint32_t i;

				{
					// rwgcoronarenderer.h:296
					float sizeX;

					// rwgcoronarenderer.h:297
					float sizeY;

					// rwgcoronarenderer.h:298
					float oneMinusSizeX;

					// rwgcoronarenderer.h:299
					float oneMinusSizeY;

					// rwgcoronarenderer.h:301
					Vector4 positionAndDistance;

				}
			}
		}
	}
}

// rwgcoronarenderer.h:439
extern uint32_t GetMaxCoronasBatch<shadow::Device, renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(const const VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color> &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgcoronarenderer.h:235
extern void End<shadow::Device>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

