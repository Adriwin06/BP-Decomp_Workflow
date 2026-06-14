// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

// shadowingdevice.h:77
struct CgsGraphics::ShaderPatch {
protected:
	// shadowingdevice.h:167
	const ProgramBuffer * m_pixelProgram;

	// shadowingdevice.h:168
	void * m_rsxBuffer;

	// shadowingdevice.h:169
	void * m_patchBuffer;

	// shadowingdevice.h:170
	uint8_t * m_rsxHeapLow;

	// shadowingdevice.h:171
	uint8_t * m_rsxHeapHigh;

	// shadowingdevice.h:172
	uint32_t m_rsxBufferSize;

	// shadowingdevice.h:173
	uint32_t m_patchBufferSize;

	// shadowingdevice.h:174
	uint32_t m_rsxFrameSize;

	// shadowingdevice.h:175
	uint32_t m_rsxOffset;

	// shadowingdevice.h:176
	uint8_t m_numFrames;

	// shadowingdevice.h:177
	uint8_t m_currentFrame;

	// shadowingdevice.h:178
	bool m_isPixelShaderStateDirty;

	// shadowingdevice.h:179
	bool m_lock;

	// shadowingdevice.h:180
	bool m_initialized;

	// shadowingdevice.h:182
	Builder m_patchBuilder;

	// Unknown accessibility
	// shadowingdevice.h:185
	extern uint8_t[65536] sShaderPatchBuffer;

	// Unknown accessibility
	// shadowingdevice.h:186
	extern bool sbHasPixelShaderConstantChanged;

	// Unknown accessibility
	// shadowingdevice.h:187
	extern Job mJob;

public:
	// shadowingdevice.h:110
	ResourceDescriptor GetResourceDescriptor(const CgsGraphics::ShaderPatch::Parameters &) const;

	// shadowingdevice.h:115
	void Construct(const Resource &, const CgsGraphics::ShaderPatch::Parameters &);

	// shadowingdevice.h:119
	void GetParameters(CgsGraphics::ShaderPatch::Parameters &) const;

	// shadowingdevice.h:122
	void Release();

	// shadowingdevice.h:125
	void BeginPatchTask();

	// shadowingdevice.h:128
	PatchTask<renderengine::shaderpatch::ParameterStream> * EndPatchTask();

	// shadowingdevice.h:133
	void BeginShaderStatesPatch(const ProgramVariableHandle &, FloatShaderStateIterator &);

	// shadowingdevice.h:138
	Vector4 * BeginShaderStatesPatchRaw(uint16_t, uint8_t);

	// shadowingdevice.h:142
	void EndShaderStatesPatch(FloatShaderStateIterator &);

	// shadowingdevice.h:145
	void EndShaderStatesPatchRaw();

	// shadowingdevice.h:148
	uint32_t GetRSXBufferUsage() const;

	// shadowingdevice.h:151
	void FrameBegin();

	// shadowingdevice.h:155
	void SetPixelProgram(const ProgramBuffer *);

	// shadowingdevice.h:164
	void CommitPatchedMicrocode();

}

// vertexbuffer.h:23
namespace shadow {
	// Declaration
	struct Device {
		// shadowingdevice.h:657
		struct StateBlockShadow {
			// shadowingdevice.h:659
			const RenderableMesh * m_pMesh;

			// shadowingdevice.h:661
			const MeshHelper * m_pMeshState;

			// shadowingdevice.h:662
			const VertexDescriptor * m_pVertexDescriptor;

			// shadowingdevice.h:663
			const ProgramBuffer * m_pVertexProgramBuffer;

			// shadowingdevice.h:664
			const ProgramBuffer * m_pPixelProgramBuffer;

			// shadowingdevice.h:665
			const BlendState * m_pBlendState;

			// shadowingdevice.h:666
			const TextureState *[16] m_apTextureStates;

			// shadowingdevice.h:667
			const SamplerState *[16] m_apSamplerStates;

			// shadowingdevice.h:668
			const Texture *[16] m_apTextures;

			// shadowingdevice.h:669
			const DepthStencilState * m_pDepthStencilState;

			// shadowingdevice.h:670
			const RasterizerState * m_pRasterizerState;

			// shadowingdevice.h:671
			const RenderTargetState * m_pRenderTargetState;

			// shadowingdevice.h:672
			bool mbVertexProgramStateDirty;

		}

	}

}

// shadowingdevice.h:459
struct shadow::Device : public Device {
private:
	// shadowingdevice.h:651
	extern VertexProgramState s_vertexProgramState;

	// shadowingdevice.h:654
	extern const uint32_t MaxTextureStates = 16;

	// Unknown accessibility
	// shadowingdevice.h:771
	extern shadow::Device::StateBlockShadow m_Shadow;

	// Unknown accessibility
	// shadowingdevice.h:775
	extern bool mbRasteriserStateLocked;

	// Unknown accessibility
	// shadowingdevice.h:776
	extern bool mbBlendStateLocked;

	// Unknown accessibility
	// shadowingdevice.h:777
	extern bool mbDepthStencilStateLocked;

	// Unknown accessibility
	// shadowingdevice.h:778
	extern bool mbForceStencilWrite;

	// Unknown accessibility
	// shadowingdevice.h:779
	extern uint32_t muForceStencilWriteValue;

	// Unknown accessibility
	// shadowingdevice.h:782
	extern ShaderPatch mShaderPatch;

	// Unknown accessibility
	// shadowingdevice.h:783
	extern uint8_t mu8MultisampledSurface;

public:
	// shadowingdevice.h:463
	bool Initialize();

	// shadowingdevice.h:464
	void Release();

	// shadowingdevice.h:468
	void SetSynchronisationLabel(uint8_t);

	// shadowingdevice.h:469
	const uint8_t GetSynchronisationLabel();

	// shadowingdevice.h:470
	void SetEnableSynchronisation(bool);

	// shadowingdevice.h:471
	const bool GetEnableSynchronisation();

	// shadowingdevice.h:474
	void ResetAllState();

	// shadowingdevice.h:475
	void ResetShadowing();

	// shadowingdevice.h:477
	bool FrameBegin();

	// shadowingdevice.h:478
	void FrameEnd();

	// shadowingdevice.h:482
	void SetMeshBuffers(const RenderableMesh *);

	// shadowingdevice.h:484
	void SetState(const MeshHelper *);

	// shadowingdevice.h:487
	void SetState(const SamplerState *, uint32_t);

	// shadowingdevice.h:490
	void SetState(const TextureState *, uint32_t);

	// shadowingdevice.h:493
	void SetState(const RenderTargetState *);

	// shadowingdevice.h:496
	void SetState(const BlendState *);

	// shadowingdevice.h:499
	void SetState(const DepthStencilState *);

	// shadowingdevice.h:500
	void SetState(const DepthStencilState *, uint32_t);

	// shadowingdevice.h:503
	void SetState(const RasterizerState *);

	// shadowingdevice.h:506
	bool SetVertexProgram(const ProgramBuffer *);

	// shadowingdevice.h:507
	bool SetPixelProgram(const ProgramBuffer *);

	// shadowingdevice.h:509
	void SetVertexDescriptor(const VertexDescriptor *);

	// shadowingdevice.h:512
	void SetResource(renderengine::Texture *, uint32_t);

	// shadowingdevice.h:514
	void SetResource(renderengine::VertexBuffer *, uint32_t);

	// shadowingdevice.h:516
	void SetResource(IndexBuffer *, uint32_t);

	// shadowingdevice.h:520
	void ForceSetMeshBuffers(const RenderableMesh *);

	// shadowingdevice.h:522
	void ForceSetState(const MeshHelper *);

	// shadowingdevice.h:525
	void ForceSetState(const SamplerState *, uint32_t);

	// shadowingdevice.h:528
	void ForceSetResource(renderengine::Texture *, uint32_t);

	// shadowingdevice.h:531
	void ForceSetState(const TextureState *, uint32_t);

	// shadowingdevice.h:534
	void ForceSetState(const RenderTargetState *);

	// shadowingdevice.h:537
	void ForceSetState(const BlendState *);

	// shadowingdevice.h:540
	void ForceSetState(const DepthStencilState *);

	// shadowingdevice.h:543
	void ForceSetState(const RasterizerState *);

	// shadowingdevice.h:546
	void ForceSetVertexProgram(const ProgramBuffer *);

	// shadowingdevice.h:547
	void ForceSetPixelProgram(const ProgramBuffer *);

	// shadowingdevice.h:550
	void LockRasteriserState();

	// shadowingdevice.h:551
	void UnlockRasteriserState();

	// shadowingdevice.h:553
	void LockBlendState();

	// shadowingdevice.h:554
	void UnlockBlendState();

	// shadowingdevice.h:556
	void LockDepthStencilState();

	// shadowingdevice.h:557
	void UnlockDepthStencilState();

	// shadowingdevice.h:559
	void BeginForceStencilWrite(uint32_t);

	// shadowingdevice.h:560
	void EndForceStencilWrite();

	// shadowingdevice.h:563
	void Draw(const DrawParameters &);

	// shadowingdevice.h:564
	void Draw(const DrawIndexedParameters &);

	// shadowingdevice.h:565
	void Draw(const DrawInstancedParameters &);

	// shadowingdevice.h:566
	void Draw(const DrawIndexedInstancedParameters &);

	// shadowingdevice.h:573
	void DrawInstancedIndexedPrimitive_Custom(DrawIndexedParameters &, int32_t, int32_t);

	// shadowingdevice.h:577
	void DrawIndexedMultipleStreams_Custom(const DrawIndexedParameters &);

	// shadowingdevice.h:581
	void DrawIndexedSingleStream_Custom(const DrawIndexedParameters &);

	// shadowingdevice.h:587
	void PS3DrawOcclusionBoxSetStreams_Custom(const VertexDescriptor *, const VertexBuffer *);

	// shadowingdevice.h:592
	void PS3DrawOcclusionBox_Custom(const DrawIndexedParameters &, const IndexBuffer *);

	// shadowingdevice.h:601
	void PS3SetShaderStates(const ProgramVariableHandle &, const rw::math::vpu::Vector4 *, uint32_t);

	// shadowingdevice.h:617
	void FlushBeforeRendering();

	// shadowingdevice.h:620
	void FlushVertexProgramState();

	// shadowingdevice.h:625
	void ResetShadowingForShaders();

private:
	// shadowingdevice.h:629
	void SetVertexProgramInternal(const ProgramBuffer *);

	// shadowingdevice.h:632
	void SetStateFastPS3(const BlendState *);

	// shadowingdevice.h:633
	void SetStateFastPS3(const DepthStencilState *);

	// shadowingdevice.h:634
	void SetStateFastPS3(const RasterizerState *);

	// shadowingdevice.h:635
	void SetSamplerStateFastPS3(const SamplerState *, uint32_t);

	// shadowingdevice.h:636
	void SetTextureStateFastPS3(const TextureState *, uint32_t);

	// shadowingdevice.h:649
	const VertexProgramState * GetVertexProgramState(const ProgramBuffer *, const VertexDescriptor *);

}

// shadowingdevice.h:654
extern const uint32_t MaxTextureStates = 16;

// shadowingdevice.h:771
extern shadow::Device::StateBlockShadow m_Shadow;

// shadowingdevice.h:775
extern bool mbRasteriserStateLocked;

// shadowingdevice.h:776
extern bool mbBlendStateLocked;

// shadowingdevice.h:777
extern bool mbDepthStencilStateLocked;

// shadowingdevice.h:778
extern bool mbForceStencilWrite;

// shadowingdevice.h:779
extern uint32_t muForceStencilWriteValue;

// shadowingdevice.h:782
extern ShaderPatch mShaderPatch;

// shadowingdevice.h:783
extern uint8_t mu8MultisampledSurface;

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

// shadowingdevice.h:1356
extern bool BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(const const renderengine::Device::DirectDraw::Parameters &  params, const renderengine::Device::DirectDraw::BatchIterator &  batchIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// shadowingdevice.h:1363
extern void EndDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(const renderengine::Device::DirectDraw::BatchIterator &  batchIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

// shadowingdevice.h:187
extern Job mJob;

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

// shadowingdevice.h:77
struct CgsGraphics::ShaderPatch {
protected:
	// shadowingdevice.h:167
	const renderengine::ProgramBuffer * m_pixelProgram;

	// shadowingdevice.h:168
	void * m_rsxBuffer;

	// shadowingdevice.h:169
	void * m_patchBuffer;

	// shadowingdevice.h:170
	uint8_t * m_rsxHeapLow;

	// shadowingdevice.h:171
	uint8_t * m_rsxHeapHigh;

	// shadowingdevice.h:172
	uint32_t m_rsxBufferSize;

	// shadowingdevice.h:173
	uint32_t m_patchBufferSize;

	// shadowingdevice.h:174
	uint32_t m_rsxFrameSize;

	// shadowingdevice.h:175
	uint32_t m_rsxOffset;

	// shadowingdevice.h:176
	uint8_t m_numFrames;

	// shadowingdevice.h:177
	uint8_t m_currentFrame;

	// shadowingdevice.h:178
	bool m_isPixelShaderStateDirty;

	// shadowingdevice.h:179
	bool m_lock;

	// shadowingdevice.h:180
	bool m_initialized;

	// shadowingdevice.h:182
	Builder m_patchBuilder;

	// Unknown accessibility
	// shadowingdevice.h:185
	extern uint8_t[65536] sShaderPatchBuffer;

	// Unknown accessibility
	// shadowingdevice.h:186
	extern bool sbHasPixelShaderConstantChanged;

	// Unknown accessibility
	// shadowingdevice.h:187
	extern Job mJob;

public:
	// shadowingdevice.h:110
	ResourceDescriptor GetResourceDescriptor(const CgsGraphics::ShaderPatch::Parameters &) const;

	// shadowingdevice.h:115
	void Construct(const Resource &, const CgsGraphics::ShaderPatch::Parameters &);

	// shadowingdevice.h:119
	void GetParameters(CgsGraphics::ShaderPatch::Parameters &) const;

	// shadowingdevice.h:122
	void Release();

	// shadowingdevice.h:125
	void BeginPatchTask();

	// shadowingdevice.h:128
	PatchTask<renderengine::shaderpatch::ParameterStream> * EndPatchTask();

	// shadowingdevice.h:133
	void BeginShaderStatesPatch(const ProgramVariableHandle &, FloatShaderStateIterator &);

	// shadowingdevice.h:138
	Vector4 * BeginShaderStatesPatchRaw(uint16_t, uint8_t);

	// shadowingdevice.h:142
	void EndShaderStatesPatch(FloatShaderStateIterator &);

	// shadowingdevice.h:145
	void EndShaderStatesPatchRaw();

	// shadowingdevice.h:148
	uint32_t GetRSXBufferUsage() const;

	// shadowingdevice.h:151
	void FrameBegin();

	// shadowingdevice.h:155
	void SetPixelProgram(const renderengine::ProgramBuffer *);

	// shadowingdevice.h:164
	void CommitPatchedMicrocode();

}

// vertexbuffer.h:23
namespace shadow {
	// Declaration
	struct Device {
		// shadowingdevice.h:657
		struct StateBlockShadow {
			// shadowingdevice.h:659
			const RenderableMesh * m_pMesh;

			// shadowingdevice.h:661
			const MeshHelper * m_pMeshState;

			// shadowingdevice.h:662
			const renderengine::VertexDescriptor * m_pVertexDescriptor;

			// shadowingdevice.h:663
			const renderengine::ProgramBuffer * m_pVertexProgramBuffer;

			// shadowingdevice.h:664
			const renderengine::ProgramBuffer * m_pPixelProgramBuffer;

			// shadowingdevice.h:665
			const BlendState * m_pBlendState;

			// shadowingdevice.h:666
			const TextureState *[16] m_apTextureStates;

			// shadowingdevice.h:667
			const SamplerState *[16] m_apSamplerStates;

			// shadowingdevice.h:668
			const Texture *[16] m_apTextures;

			// shadowingdevice.h:669
			const DepthStencilState * m_pDepthStencilState;

			// shadowingdevice.h:670
			const RasterizerState * m_pRasterizerState;

			// shadowingdevice.h:671
			const RenderTargetState * m_pRenderTargetState;

			// shadowingdevice.h:672
			bool mbVertexProgramStateDirty;

		}

	}

}

// shadowingdevice.h:459
struct shadow::Device : public Device {
private:
	// shadowingdevice.h:651
	extern VertexProgramState s_vertexProgramState;

	// shadowingdevice.h:654
	extern const uint32_t MaxTextureStates = 16;

	// Unknown accessibility
	// shadowingdevice.h:771
	extern shadow::Device::StateBlockShadow m_Shadow;

	// Unknown accessibility
	// shadowingdevice.h:775
	extern bool mbRasteriserStateLocked;

	// Unknown accessibility
	// shadowingdevice.h:776
	extern bool mbBlendStateLocked;

	// Unknown accessibility
	// shadowingdevice.h:777
	extern bool mbDepthStencilStateLocked;

	// Unknown accessibility
	// shadowingdevice.h:778
	extern bool mbForceStencilWrite;

	// Unknown accessibility
	// shadowingdevice.h:779
	extern uint32_t muForceStencilWriteValue;

	// Unknown accessibility
	// shadowingdevice.h:782
	extern ShaderPatch mShaderPatch;

	// Unknown accessibility
	// shadowingdevice.h:783
	extern uint8_t mu8MultisampledSurface;

public:
	// shadowingdevice.h:463
	bool Initialize();

	// shadowingdevice.h:464
	void Release();

	// shadowingdevice.h:468
	void SetSynchronisationLabel(uint8_t);

	// shadowingdevice.h:469
	const uint8_t GetSynchronisationLabel();

	// shadowingdevice.h:470
	void SetEnableSynchronisation(bool);

	// shadowingdevice.h:471
	const bool GetEnableSynchronisation();

	// shadowingdevice.h:474
	void ResetAllState();

	// shadowingdevice.h:475
	void ResetShadowing();

	// shadowingdevice.h:477
	bool FrameBegin();

	// shadowingdevice.h:478
	void FrameEnd();

	// shadowingdevice.h:482
	void SetMeshBuffers(const RenderableMesh *);

	// shadowingdevice.h:484
	void SetState(const MeshHelper *);

	// shadowingdevice.h:487
	void SetState(const SamplerState *, uint32_t);

	// shadowingdevice.h:490
	void SetState(const TextureState *, uint32_t);

	// shadowingdevice.h:493
	void SetState(const RenderTargetState *);

	// shadowingdevice.h:496
	void SetState(const BlendState *);

	// shadowingdevice.h:499
	void SetState(const DepthStencilState *);

	// shadowingdevice.h:500
	void SetState(const DepthStencilState *, uint32_t);

	// shadowingdevice.h:503
	void SetState(const RasterizerState *);

	// shadowingdevice.h:506
	bool SetVertexProgram(const renderengine::ProgramBuffer *);

	// shadowingdevice.h:507
	bool SetPixelProgram(const renderengine::ProgramBuffer *);

	// shadowingdevice.h:509
	void SetVertexDescriptor(const renderengine::VertexDescriptor *);

	// shadowingdevice.h:512
	void SetResource(renderengine::Texture *, uint32_t);

	// shadowingdevice.h:514
	void SetResource(renderengine::VertexBuffer *, uint32_t);

	// shadowingdevice.h:516
	void SetResource(IndexBuffer *, uint32_t);

	// shadowingdevice.h:520
	void ForceSetMeshBuffers(const RenderableMesh *);

	// shadowingdevice.h:522
	void ForceSetState(const MeshHelper *);

	// shadowingdevice.h:525
	void ForceSetState(const SamplerState *, uint32_t);

	// shadowingdevice.h:528
	void ForceSetResource(renderengine::Texture *, uint32_t);

	// shadowingdevice.h:531
	void ForceSetState(const TextureState *, uint32_t);

	// shadowingdevice.h:534
	void ForceSetState(const RenderTargetState *);

	// shadowingdevice.h:537
	void ForceSetState(const BlendState *);

	// shadowingdevice.h:540
	void ForceSetState(const DepthStencilState *);

	// shadowingdevice.h:543
	void ForceSetState(const RasterizerState *);

	// shadowingdevice.h:546
	void ForceSetVertexProgram(const renderengine::ProgramBuffer *);

	// shadowingdevice.h:547
	void ForceSetPixelProgram(const renderengine::ProgramBuffer *);

	// shadowingdevice.h:550
	void LockRasteriserState();

	// shadowingdevice.h:551
	void UnlockRasteriserState();

	// shadowingdevice.h:553
	void LockBlendState();

	// shadowingdevice.h:554
	void UnlockBlendState();

	// shadowingdevice.h:556
	void LockDepthStencilState();

	// shadowingdevice.h:557
	void UnlockDepthStencilState();

	// shadowingdevice.h:559
	void BeginForceStencilWrite(uint32_t);

	// shadowingdevice.h:560
	void EndForceStencilWrite();

	// shadowingdevice.h:563
	void Draw(const DrawParameters &);

	// shadowingdevice.h:564
	void Draw(const DrawIndexedParameters &);

	// shadowingdevice.h:565
	void Draw(const DrawInstancedParameters &);

	// shadowingdevice.h:566
	void Draw(const DrawIndexedInstancedParameters &);

	// shadowingdevice.h:573
	// Declaration
	void DrawInstancedIndexedPrimitive_Custom(DrawIndexedParameters &, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// shadowingdevice.cpp:590
		using namespace renderengine;

		// shadowingdevice.cpp:591
		using namespace InstancingPrototype;

	}

	// shadowingdevice.h:577
	void DrawIndexedMultipleStreams_Custom(const DrawIndexedParameters &);

	// shadowingdevice.h:581
	void DrawIndexedSingleStream_Custom(const DrawIndexedParameters &);

	// shadowingdevice.h:587
	void PS3DrawOcclusionBoxSetStreams_Custom(const renderengine::VertexDescriptor *, const VertexBuffer *);

	// shadowingdevice.h:592
	void PS3DrawOcclusionBox_Custom(const DrawIndexedParameters &, const IndexBuffer *);

	// shadowingdevice.h:601
	// Declaration
	void PS3SetShaderStates(const ProgramVariableHandle &, const rw::math::vpu::Vector4 *, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// shadowingdevice.cpp:338
		using namespace rw::graphics::core;

	}

	// shadowingdevice.h:617
	void FlushBeforeRendering();

	// shadowingdevice.h:620
	void FlushVertexProgramState();

	// shadowingdevice.h:625
	void ResetShadowingForShaders();

private:
	// shadowingdevice.h:629
	void SetVertexProgramInternal(const renderengine::ProgramBuffer *);

	// shadowingdevice.h:632
	// Declaration
	void SetStateFastPS3(const BlendState *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// shadowingdevice.cpp:949
		using namespace renderengine;

	}

	// shadowingdevice.h:633
	// Declaration
	void SetStateFastPS3(const DepthStencilState *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// shadowingdevice.cpp:1010
		using namespace renderengine;

	}

	// shadowingdevice.h:634
	// Declaration
	void SetStateFastPS3(const RasterizerState *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// shadowingdevice.cpp:1127
		using namespace renderengine;

	}

	// shadowingdevice.h:635
	void SetSamplerStateFastPS3(const SamplerState *, uint32_t);

	// shadowingdevice.h:636
	void SetTextureStateFastPS3(const TextureState *, uint32_t);

	// shadowingdevice.h:649
	const VertexProgramState * GetVertexProgramState(const renderengine::ProgramBuffer *, const renderengine::VertexDescriptor *);

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

// CgsDefaultValues.h:26
namespace CgsGraphics {
	// Declaration
	struct ShaderPatch {
		// shadowingdevice.h:85
		struct Parameters {
			// shadowingdevice.h:100
			uint32_t m_rsxBufferSize;

			// shadowingdevice.h:101
			uint32_t m_patchBufferSize;

			// shadowingdevice.h:102
			uint8_t m_numFrames;

		public:
			// shadowingdevice.h:86
			Parameters();

			// shadowingdevice.h:92
			void SetRSXBufferSize(uint32_t);

			// shadowingdevice.h:93
			void SetPatchBufferSize(uint32_t);

			// shadowingdevice.h:94
			void SetNumFramesToBuffer(uint8_t);

			// shadowingdevice.h:96
			uint32_t GetRSXBufferSize() const;

			// shadowingdevice.h:97
			uint32_t GetPatchBufferSize() const;

			// shadowingdevice.h:98
			uint8_t GetNumFramesToBuffer() const;

		}

	}

}

