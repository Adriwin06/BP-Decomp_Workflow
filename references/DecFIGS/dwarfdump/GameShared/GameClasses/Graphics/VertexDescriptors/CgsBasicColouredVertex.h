// CgsBasicColouredVertex.h:44
struct CgsGraphics::BasicColouredVertex {
	// CgsBasicColouredVertex.h:46
	Vector3 mv3Pos;

	// CgsBasicColouredVertex.h:47
	RGBA8 mv4Colour;

public:
	// CgsBasicColouredVertex.h:63
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct BasicColouredVertex {
		// CgsBasicColouredVertex.h:97
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasicColouredVertex.h:101
			void Write(const CgsGraphics::BasicColouredVertex &);

			// CgsBasicColouredVertex.h:119
			void Read(CgsGraphics::BasicColouredVertex &);

			// CgsBasicColouredVertex.h:136
			uint32_t GetStride();

		}

	}

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct BasicColouredVertex {
		// CgsBasicColouredVertex.h:97
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasicColouredVertex.h:101
			void Write(const CgsGraphics::BasicColouredVertex &);

			// CgsBasicColouredVertex.h:119
			void Read(CgsGraphics::BasicColouredVertex &);

			// CgsBasicColouredVertex.h:136
			uint32_t GetStride();

		}

	}

}

