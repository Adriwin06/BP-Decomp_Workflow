// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:67
struct CgsGraphics::ImCommand {
	// CgsImRenderBuffer.h:69
	uint32_t muType;

	// CgsImRenderBuffer.h:70
	uint32_t muSize;

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	// Declaration
	void Render() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm3d.h:42
		typedef BasicColouredTexturedVertex Im3dVertex;

	}

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	Im3dVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	Im3dVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	// Declaration
	void SetBufferFullRewindToLastEndRender() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImRenderBuffer.h:1350
		using namespace CgsDev::Message;

	}

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3d;

	struct Im3dUntex;

	struct Im3dZOnly;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredTexturedVertex;

	struct Im2d;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	// Declaration
	void Render() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm3d.h:43
		typedef BasicColouredVertex Im3dUntexVertex;

	}

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	Im3dUntexVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	Im3dUntexVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	void SetBufferFullRewindToLastEndRender();

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	void Render(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	// Declaration
	void SetBufferFullRewindToLastEndRender() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImRenderBuffer.h:1350
		using namespace CgsDev::Message;

	}

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:95
struct CgsGraphics::ImCommandSetStateBlend : public ImCommand {
	// CgsImRenderBuffer.h:97
	const BlendState * mpBlendState;

}

// CgsImRenderBuffer.h:102
struct CgsGraphics::ImCommandSetStateDepthStencil : public ImCommand {
	// CgsImRenderBuffer.h:104
	const DepthStencilState * mpDepthStencilState;

}

// CgsImRenderBuffer.h:117
struct CgsGraphics::ImCommandSetStateRasterizer : public ImCommand {
	// CgsImRenderBuffer.h:119
	const RasterizerState * mpRasterizerState;

}

// CgsImRenderBuffer.h:131
struct CgsGraphics::ImCommandSetStateTexture : public ImCommand {
	// CgsImRenderBuffer.h:133
	const TextureState * mpTextureState;

}

// CgsImRenderBuffer.h:167
struct CgsGraphics::ImCommandSetClear : public ImCommand {
	// CgsImRenderBuffer.h:169
	ClearColorParameters mClearParams;

}

// CgsImRenderBuffer.h:183
struct CgsGraphics::ImCommandSetTexture : public ImCommand {
	// CgsImRenderBuffer.h:185
	renderengine::Texture * mpTexture;

}

// CgsImRenderBuffer.h:208
struct CgsGraphics::ImCommandPopMask : public ImCommand {
}

// CgsImRenderBuffer.h:214
struct CgsGraphics::ImCommandSetShaderProgram : public ImCommand {
	// CgsImRenderBuffer.h:216
	int8_t mi8ShaderProgram;

}

// CgsImRenderBuffer.h:191
struct CgsGraphics::ImCommandPushMaskTextureState<CgsGraphics::Basic2dColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:193
	TextureState * mpTextureState;

	// CgsImRenderBuffer.h:194
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * mpVertices;

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	// Declaration
	void Render(renderengine::PrimitiveType, const Im3dVertex *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm3d.h:42
		typedef BasicColouredTexturedVertex Im3dVertex;

	}

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	Im3dVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const Im3dVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	Im3dVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	// Declaration
	void SetBufferFullRewindToLastEndRender() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImRenderBuffer.h:1350
		using namespace CgsDev::Message;

	}

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	// Declaration
	void Render(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm3d.h:43
		typedef BasicColouredVertex Im3dUntexVertex;

	}

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	Im3dUntexVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	Im3dUntexVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	// Declaration
	void SetBufferFullRewindToLastEndRender() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImRenderBuffer.h:1350
		using namespace CgsDev::Message;

	}

}

// CgsImRenderBuffer.h:191
struct CgsGraphics::ImCommandPushMaskTextureState<CgsGraphics::BasicColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:193
	TextureState * mpTextureState;

	// CgsImRenderBuffer.h:194
	Im3dVertex * mpVertices;

}

// CgsImRenderBuffer.h:86
struct CgsGraphics::ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:88
	renderengine::PrimitiveType mePrimitiveType;

	// CgsImRenderBuffer.h:89
	const ImCommandBatchTransformTextureBlendRender::Im2dVertex * mpVertices;

	// CgsImRenderBuffer.h:90
	uint32_t muNumVertices;

}

// CgsImRenderBuffer.h:86
struct CgsGraphics::ImCommandRenderPrimitives<CgsGraphics::BasicColouredVertex> : public ImCommand {
	// CgsImRenderBuffer.h:88
	renderengine::PrimitiveType mePrimitiveType;

	// CgsImRenderBuffer.h:89
	const Im3dUntexVertex * mpVertices;

	// CgsImRenderBuffer.h:90
	uint32_t muNumVertices;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	void Render(renderengine::PrimitiveType, const GuiGeometryMesh::Im2dVertex *, unsigned int);

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const GuiGeometryMesh::Im2dVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	GuiGeometryMesh::Im2dVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const GuiGeometryMesh::Im2dVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	GuiGeometryMesh::Im2dVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	// Declaration
	void SetBufferFullRewindToLastEndRender() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImRenderBuffer.h:1350
		using namespace CgsDev::Message;

	}

}

// CgsImRenderBuffer.h:200
struct CgsGraphics::ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:202
	renderengine::Texture * mpTexture;

	// CgsImRenderBuffer.h:203
	GuiGeometryMesh::Im2dVertex * mpVertices;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredTexturedVertex;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct OcclusionCullManager;

	struct DispatchPacketInterpreter;

	struct DispatchList;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct ImCommandSetStateBlend;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetTexture;

	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandSetTransform;

	struct ImCommandBatchTransformTextureBlendRender;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

	struct ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex>;

	// Declaration
	struct InstanceListResourceType {
	public:
		InstanceListResourceType();

	}

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:109
struct CgsGraphics::ImCommandSetStateDepthStencilStencilRef : public ImCommand {
	// CgsImRenderBuffer.h:111
	const DepthStencilState * mpDepthStencilState;

	// CgsImRenderBuffer.h:112
	const uint32_t muStencilRef;

}

// CgsImRenderBuffer.h:124
struct CgsGraphics::ImCommandSetStateRenderTarget : public ImCommand {
	// CgsImRenderBuffer.h:126
	const RenderTargetState * mpRenderTargetState;

}

// CgsImRenderBuffer.h:138
struct CgsGraphics::ImCommandSetStateSampler : public ImCommand {
	// CgsImRenderBuffer.h:140
	const SamplerState * mpSamplerState;

}

// CgsImRenderBuffer.h:156
struct CgsGraphics::ImCommandSetScissor : public ImCommand {
	// CgsImRenderBuffer.h:158
	uint32_t mu32RenderTarget;

	// CgsImRenderBuffer.h:159
	uint32_t mu32StartPosX;

	// CgsImRenderBuffer.h:160
	uint32_t mu32StartPosY;

	// CgsImRenderBuffer.h:161
	uint32_t mu32Width;

	// CgsImRenderBuffer.h:162
	uint32_t mu32Height;

}

// CgsImRenderBuffer.h:229
struct CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
private:
	// CgsImRenderBuffer.h:424
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer[2] maBuffers;

	// CgsImRenderBuffer.h:425
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer * mpWriteBuffer;

	// CgsImRenderBuffer.h:426
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SingleBuffer * mpDispatchBuffer;

	// CgsImRenderBuffer.h:427
	int32_t miWriteBufferIndex;

	// CgsImRenderBuffer.h:428
	uint32_t muVertexBufferSize;

	// CgsImRenderBuffer.h:429
	uint32_t muCommandBufferSize;

	// CgsImRenderBuffer.h:430
	bool mbInRenderBlock;

	// CgsImRenderBuffer.h:431
	int32_t miNumRendersStarted;

	// CgsImRenderBuffer.h:434
	uint32_t muLastEndRenderPos;

	// CgsImRenderBuffer.h:435
	bool mbBufferIsFull;

	// CgsImRenderBuffer.h:436
	bool mbFailGracefully;

public:
	// CgsImRenderBuffer.h:456
	void Construct();

	// CgsImRenderBuffer.h:496
	bool Prepare(unsigned int, unsigned int, rw::IResourceAllocator *, bool);

	// CgsImRenderBuffer.h:551
	bool Release();

	// CgsImRenderBuffer.h:255
	void Destruct();

	// CgsImRenderBuffer.h:570
	void Swap();

	// CgsImRenderBuffer.h:595
	void Clear();

	// CgsImRenderBuffer.h:638
	bool IsInARenderingBlock();

	// CgsImRenderBuffer.h:617
	void BeginRendering();

	// CgsImRenderBuffer.h:656
	void EndRendering();

	// CgsImRenderBuffer.h:680
	// Declaration
	void Render(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm3d.h:43
		typedef BasicColouredVertex Im3dUntexVertex;

	}

	// CgsImRenderBuffer.h:729
	void RenderFromStaticVertexBuffer(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderBuffer.h:752
	Im3dUntexVertex * RenderStart(unsigned int);

	// CgsImRenderBuffer.h:789
	void RenderEnd(renderengine::PrimitiveType, const Im3dUntexVertex *, unsigned int);

	// CgsImRenderBuffer.h:823
	void SetTexture(renderengine::Texture *);

	// CgsImRenderBuffer.h:847
	void SetState(const BlendState *);

	// CgsImRenderBuffer.h:872
	void SetState(const DepthStencilState *);

	// CgsImRenderBuffer.h:897
	void SetState(const DepthStencilState *, unsigned int);

	// CgsImRenderBuffer.h:922
	void SetState(const RasterizerState *);

	// CgsImRenderBuffer.h:945
	void SetState(const RenderTargetState *);

	// CgsImRenderBuffer.h:970
	void SetState(const SamplerState *);

	// CgsImRenderBuffer.h:995
	void SetState(const TextureState *);

	// CgsImRenderBuffer.h:1022
	void SetViewport(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1053
	void SetScissor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

	// CgsImRenderBuffer.h:1080
	void SetClear(ClearColorParameters);

	// CgsImRenderBuffer.h:1101
	void SetProgram(signed char);

protected:
	// CgsImRenderBuffer.h:1154
	void PostCommand(int, ImCommand *, unsigned int);

	// CgsImRenderBuffer.h:1213
	void * AllocateCommand(int, unsigned int);

	// CgsImRenderBuffer.h:1273
	const ImCommand * GetFirstCommand() const;

	// CgsImRenderBuffer.h:1296
	const ImCommand * GetNextCommand(const ImCommand *) const;

	// CgsImRenderBuffer.h:1324
	Im3dUntexVertex * AllocVertices(unsigned int);

private:
	// CgsImRenderBuffer.h:1343
	void SetBufferFullRewindToLastEndRender();

}

// CgsImRenderBuffer.h:200
struct CgsGraphics::ImCommandPushMaskTexture<CgsGraphics::BasicColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:202
	renderengine::Texture * mpTexture;

	// CgsImRenderBuffer.h:203
	Im3dVertex * mpVertices;

}

// CgsImRenderBuffer.h:86
struct CgsGraphics::ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:88
	renderengine::PrimitiveType mePrimitiveType;

	// CgsImRenderBuffer.h:89
	const Im3dVertex * mpVertices;

	// CgsImRenderBuffer.h:90
	uint32_t muNumVertices;

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:145
struct CgsGraphics::ImCommandSetViewport : public ImCommand {
	// CgsImRenderBuffer.h:147
	uint32_t mu32RenderTarget;

	// CgsImRenderBuffer.h:148
	uint32_t mu32StartPosX;

	// CgsImRenderBuffer.h:149
	uint32_t mu32StartPosY;

	// CgsImRenderBuffer.h:150
	uint32_t mu32Width;

	// CgsImRenderBuffer.h:151
	uint32_t mu32Height;

}

// CgsImRenderBuffer.h:200
struct CgsGraphics::ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:202
	renderengine::Texture * mpTexture;

	// CgsImRenderBuffer.h:203
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * mpVertices;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredTexturedVertex;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandBatchTransformTextureBlendRender;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

}

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	struct ImCommand;

	struct ImCommandSetStateBlend;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetStateTexture;

	struct PackedOobb;

	struct MaterialAssembly;

	struct BasicColouredTexturedVertex;

	struct ImCommandSetTransform3dVp;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct Im2dTransform;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommandSetTransform;

	struct ImCommandBatchTransformTextureBlendRender;

	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex>;

	struct ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex>;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

// CgsImRenderBuffer.h:86
struct CgsGraphics::ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> : public ImCommand {
	// CgsImRenderBuffer.h:88
	renderengine::PrimitiveType mePrimitiveType;

	// CgsImRenderBuffer.h:89
	const GuiGeometryMesh::Im2dVertex * mpVertices;

	// CgsImRenderBuffer.h:90
	uint32_t muNumVertices;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

	// Declaration
	struct ImRenderBuffer<CgsGraphics::BasicColouredVertex> {
		// CgsImRenderBuffer.h:232
		struct SingleBuffer {
			// CgsImRenderBuffer.h:234
			uint8_t * mpu8VertexBuffer;

			// CgsImRenderBuffer.h:235
			uint8_t * mpu8CommandBuffer;

			// CgsImRenderBuffer.h:236
			uint32_t muCommandBufferWritePos;

			// CgsImRenderBuffer.h:237
			uint32_t muVertexBufferWritePos;

		}

	}

}

