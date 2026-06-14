// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct JpegEncode {
		// CgsJpegEncode.h:97
		struct JpegEncodeWriteData {
			// CgsJpegEncode.h:99
			int32_t liOffset;

			// CgsJpegEncode.h:100
			int32_t liOutputBufferSize;

			// CgsJpegEncode.h:101
			void * lpOutputBuffer;

		}

		// CgsJpegEncode.h:113
		struct ARGB {
			// CgsJpegEncode.h:115
			unsigned char a;

			// CgsJpegEncode.h:116
			unsigned char r;

			// CgsJpegEncode.h:117
			unsigned char g;

			// CgsJpegEncode.h:118
			unsigned char b;

		}

	}

}

// CgsJpegEncode.h:38
struct CgsGraphics::JpegEncodeInputData {
	// CgsJpegEncode.h:40
	int32_t liWidth;

	// CgsJpegEncode.h:41
	int32_t liHeight;

	// CgsJpegEncode.h:42
	int32_t liRowBytes;

	// CgsJpegEncode.h:43
	int32_t liBitsPerPixel;

	// CgsJpegEncode.h:44
	void * lpData;

}

// CgsJpegEncode.h:56
struct CgsGraphics::JpegEncode {
private:
	// CgsJpegEncode.h:121
	HeapMalloc * mpHeapMalloc;

public:
	// CgsJpegEncode.h:61
	void Construct();

	// CgsJpegEncode.h:66
	bool Prepare(HeapMalloc *);

	// CgsJpegEncode.h:70
	bool Release();

	// CgsJpegEncode.h:74
	void Destruct();

	// CgsJpegEncode.h:84
	void Encode(HeapMalloc *, JpegEncodeInputData, int32_t, void *, int32_t, int32_t *);

private:
	// CgsJpegEncode.h:131
	void JpegWriteLine(unsigned char *, unsigned char *, int32_t, int32_t, CgsGraphics::JpegEncode::ARGB *, int32_t);

	// CgsJpegEncode.h:138
	void EncodeCallback(unsigned char *, size_t, void *);

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct JpegEncode {
		// CgsJpegEncode.h:113
		struct ARGB {
			// CgsJpegEncode.h:115
			unsigned char a;

			// CgsJpegEncode.h:116
			unsigned char r;

			// CgsJpegEncode.h:117
			unsigned char g;

			// CgsJpegEncode.h:118
			unsigned char b;

		}

	}

}

// CgsJpegEncode.h:30
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

	struct Instance;

	struct InstanceList;

	struct DispatchCommand;

	struct DispatchFrame;

	struct DispatchBin;

	struct DispatchPacketInterpreter;

	struct DispatchList;

	struct Im3dRenderBufferUntex;

	struct OcclusionQueryList;

}

