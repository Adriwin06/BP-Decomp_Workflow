// CgsCamera.h:44
namespace CgsGraphics {
	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:43
struct CgsGraphics::Im2dTransform {
	// CgsIm2dTransform.h:126
	Vector4 mOriginXYZ;

	// CgsIm2dTransform.h:127
	Vector4 mRightUp;

	// CgsIm2dTransform.h:128
	Vector4 mColourShift;

	// CgsIm2dTransform.h:129
	Vector4 mColourScale;

protected:
	// CgsIm2dTransform.h:133
	extern Im2dTransform mgDefault;

	// CgsIm2dTransform.h:134
	extern Im2dTransform mgIdentity;

	// CgsIm2dTransform.h:135
	extern Im2dTransform mgAspectCorrected;

	// Unknown accessibility
	// matrix33.h:277
	typedef Matrix33Template<float> Matrix33;

	// CgsIm2dTransform.h:136
	extern Im2dTransform::Matrix33 mgAspectRatioCorrection;

public:
	// CgsIm2dTransform.h:56
	void Construct(Vector2, Vector2, Vector2, float, Vector4, Vector4);

	// CgsIm2dTransform.h:59
	const Im2dTransform & GetDefault();

	// CgsIm2dTransform.h:62
	const Im2dTransform & GetIdentity();

	// CgsIm2dTransform.h:66
	void SetAspectCorrectionMatrix(const Im2dTransform::Matrix33 &);

	// CgsIm2dTransform.h:69
	const Im2dTransform & GetAspectCorrected();

	// CgsIm2dTransform.h:76
	const Im2dTransform::Matrix33 & GetAspectCorrectionMatrix();

	// CgsIm2dTransform.h:83
	void SetTransform(const Matrix33Template<float> &);

	// CgsIm2dTransform.h:96
	void Transform(const Matrix33Template<float> &, Im2dTransform &) const;

	// CgsIm2dTransform.h:103
	// Declaration
	void Transform(const Im2dTransform &, Im2dTransform &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIm2dTransform.h:274
		using namespace rw::math::vpl;

	}

	// CgsIm2dTransform.h:108
	void TransformByAspectRatio();

	// CgsIm2dTransform.h:116
	Im2dTransform & operator=(const Im2dTransform &);

}

// CgsIm2dTransform.h:228
extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

// CgsIm2dTransform.h:229
extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

// CgsIm2dTransform.h:230
extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

// CgsIm2dTransform.h:133
extern Im2dTransform mgDefault;

// CgsIm2dTransform.h:134
extern Im2dTransform mgIdentity;

// CgsIm2dTransform.h:135
extern Im2dTransform mgAspectCorrected;

// CgsIm2dTransform.h:136
extern Im2dTransform::Matrix33 mgAspectRatioCorrection;

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommand;

	struct ImCommandSetStateBlend;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetStateTexture;

	struct ImCommandSetClear;

	struct ImCommandSetTexture;

	struct ImCommandPopMask;

	struct ImCommandSetShaderProgram;

	struct ImCommandSetTransform;

	struct ImCommandPushBoostBarColours;

	struct ImCommandBatchTransformTextureBlendRender;

	struct ImCommandPushMaskTextureState<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct ImCommandSetTransform3dVp;

	struct ImCommandSetTransform3dMtwVp;

	struct ImCommandPushMaskTextureState<CgsGraphics::BasicColouredTexturedVertex>;

	struct TextBackground;

	struct Im3dRenderBufferUntex;

	struct ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct ImCommandRenderPrimitives<CgsGraphics::BasicColouredVertex>;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredTexturedVertex;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct ImCommand;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetShaderProgram;

	struct ImCommandSetTransform;

	struct ImCommandBatchTransformTextureBlendRender;

	struct ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct Im3dRenderBufferUntex;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct EacChunkDef;

	struct ChunkBuffer;

	struct MovieVideoRenderer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct ImCommand;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct TextBackground;

	struct Im2dRenderBuffer;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	struct EacChunkDef;

	struct ChunkBuffer;

	struct MovieVideoRenderer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredTexturedVertex;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct OcclusionQueryList;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct BasicColouredVertex;

	struct BasicColouredTexturedVertex;

	struct PositionOnlyVertex;

	struct Im3dUntex;

	struct Im3dZOnly;

	struct ImCommand;

	struct Im2dRenderBuffer;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	struct Im2dTransform;

	struct PackedOobb;

	struct MaterialAssembly;

	struct Basic2dColouredVertex;

	struct Basic2dColouredTexturedVertex;

	struct Im2d;

	struct Im2dUntex;

	struct ImCommand;

	struct ImCommandSetStateBlend;

	struct ImCommandSetStateDepthStencil;

	struct ImCommandSetStateRasterizer;

	struct ImCommandSetStateTexture;

	struct ImCommandSetTexture;

	struct ImCommandSetShaderProgram;

	struct ImCommandSetTransform;

	struct ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex>;

	struct BasicColouredTexturedVertex;

	struct Im3d;

	struct Im3dUntex;

	struct TextBackground;

	struct Im3dRenderBuffer;

	struct Im3dRenderBufferUntex;

	struct JpegEncodeInputData;

	struct ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex>;

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// CgsIm2dTransform.h:228
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSRIGHT;

	// CgsIm2dTransform.h:229
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSUP;

	// CgsIm2dTransform.h:230
	extern VectorIntrinsicUnion::VectorIntrinsic KV_IM2DTRANSFORMPERMUTECONST_LHSOUTRIGHTUP;

}

