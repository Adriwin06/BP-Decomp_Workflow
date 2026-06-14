// CgsIm2dRenderBuffer.h:79
struct CgsGraphics::ImCommandBatchTransformTextureBlendRender : public ImCommand {
	// CgsIm2dRenderBuffer.h:81
	extern const uint8_t KU_FLAG_SETTEXTURE = 1;

	// CgsIm2dRenderBuffer.h:82
	extern const uint8_t KU_FLAG_SETBLEND = 2;

	// CgsIm2dRenderBuffer.h:84
	Im2dTransform mTransform;

	// CgsIm2dRenderBuffer.h:85
	renderengine::Texture * mpTexture;

	// CgsIm2dRenderBuffer.h:86
	const BlendState * mpBlendState;

	// CgsIm2dRenderBuffer.h:87
	renderengine::PrimitiveType mePrimitiveType;

	// CgsIm2d.h:44
	typedef Basic2dColouredTexturedVertex Im2dVertex;

	// CgsIm2dRenderBuffer.h:88
	const ImCommandBatchTransformTextureBlendRender::Im2dVertex * mpVertices;

	// CgsIm2dRenderBuffer.h:89
	uint32_t muNumVertices;

	// CgsIm2dRenderBuffer.h:90
	uint8_t muFlags;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct Im2dRenderBuffer {
	public:
		// CgsIm2dRenderBuffer.h:171
		void PushMask(TextureState *, ImCommandBatchTransformTextureBlendRender::Im2dVertex *);

		// CgsIm2dRenderBuffer.h:212
		void PopMask();

		// CgsIm2dRenderBuffer.h:159
		void SetTransform(const Im2dTransform &);

		// CgsIm2dRenderBuffer.h:244
		void PushBoostBarColours(Vector3, Vector3);

	}

}

// CgsIm2dRenderBuffer.h:54
struct CgsGraphics::ImCommandSetTransform : public ImCommand {
	// CgsIm2dRenderBuffer.h:56
	Im2dTransform mTransform;

}

// CgsIm2dRenderBuffer.h:71
struct CgsGraphics::ImCommandPushBoostBarColours : public ImCommand {
	// CgsIm2dRenderBuffer.h:73
	Vector3 mv3OuterColour;

	// CgsIm2dRenderBuffer.h:74
	Vector3 mv3InnerColour;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct Im2dRenderBuffer {
	public:
		// CgsIm2dRenderBuffer.h:193
		void PushMask(renderengine::Texture *, GuiGeometryMesh::Im2dVertex *);

		// CgsIm2dRenderBuffer.h:274
		void BatchTransformTextureBlendRenderStatic(const Im2dTransform &, renderengine::Texture *, const BlendState *, renderengine::PrimitiveType, const GuiGeometryMesh::Im2dVertex *, uint32_t, uint8_t);

		// CgsIm2dRenderBuffer.h:159
		void SetTransform(const Im2dTransform &);

		// CgsIm2dRenderBuffer.h:212
		void PopMask();

	}

}

// CgsIm2dRenderBuffer.h:79
struct CgsGraphics::ImCommandBatchTransformTextureBlendRender : public ImCommand {
	// CgsIm2dRenderBuffer.h:81
	extern const uint8_t KU_FLAG_SETTEXTURE = 1;

	// CgsIm2dRenderBuffer.h:82
	extern const uint8_t KU_FLAG_SETBLEND = 2;

	// CgsIm2dRenderBuffer.h:84
	Im2dTransform mTransform;

	// CgsIm2dRenderBuffer.h:85
	renderengine::Texture * mpTexture;

	// CgsIm2dRenderBuffer.h:86
	const BlendState * mpBlendState;

	// CgsIm2dRenderBuffer.h:87
	renderengine::PrimitiveType mePrimitiveType;

	// CgsIm2dRenderBuffer.h:88
	const GuiGeometryMesh::Im2dVertex * mpVertices;

	// CgsIm2dRenderBuffer.h:89
	uint32_t muNumVertices;

	// CgsIm2dRenderBuffer.h:90
	uint8_t muFlags;

}

// CgsIm2dRenderBuffer.h:81
extern const uint8_t KU_FLAG_SETTEXTURE = 1;

// CgsIm2dRenderBuffer.h:82
extern const uint8_t KU_FLAG_SETBLEND = 2;

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct Im2dRenderBuffer {
	public:
		// CgsIm2dRenderBuffer.h:159
		void SetTransform(const Im2dTransform &);

	}

}

// CgsIm2dRenderBuffer.h:102
void CgsGraphics::Im2dRenderBuffer::Im2dRenderBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIm2dRenderBuffer.h:61
struct CgsGraphics::ImCommandSetTransformBasic : public ImCommand {
	// CgsIm2dRenderBuffer.h:63
	Vector2 mOrigin;

	// CgsIm2dRenderBuffer.h:64
	Vector2 mRight;

	// CgsIm2dRenderBuffer.h:65
	Vector2 mUp;

	// CgsIm2dRenderBuffer.h:66
	float32_t mfZ;

}

// CgsIm2dRenderBuffer.h:102
struct CgsGraphics::Im2dRenderBuffer : public ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex> {
	int (*)(...) * _vptr.Im2dRenderBuffer;

public:
	// CgsIm2dRenderBuffer.cpp:38
	virtual void Dispatch(CgsGraphics::Im2d *) const;

	// CgsIm2dRenderBuffer.h:159
	void SetTransform(const Im2dTransform &);

	// CgsIm2dRenderBuffer.h:171
	void PushMask(TextureState *, ImCommandBatchTransformTextureBlendRender::Im2dVertex *);

	// CgsIm2dRenderBuffer.h:193
	void PushMask(renderengine::Texture *, ImCommandBatchTransformTextureBlendRender::Im2dVertex *);

	// CgsIm2dRenderBuffer.h:212
	void PopMask();

	// CgsIm2dRenderBuffer.h:222
	void SetTransform(Vector2, Vector2, Vector2, float32_t);

	// CgsIm2dRenderBuffer.h:244
	void PushBoostBarColours(Vector3, Vector3);

	// CgsIm2dRenderBuffer.h:274
	void BatchTransformTextureBlendRenderStatic(const Im2dTransform &, renderengine::Texture *, const BlendState *, renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, uint32_t, uint8_t);

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct Im2dRenderBuffer {
	public:
		// CgsIm2dRenderBuffer.h:159
		void SetTransform(const Im2dTransform &);

		// CgsIm2dRenderBuffer.h:193
		void PushMask(renderengine::Texture *, GuiGeometryMesh::Im2dVertex *);

		// CgsIm2dRenderBuffer.h:212
		void PopMask();

	}

}

