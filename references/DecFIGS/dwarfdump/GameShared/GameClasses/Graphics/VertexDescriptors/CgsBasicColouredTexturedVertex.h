// CgsBasicColouredTexturedVertex.h:44
struct CgsGraphics::BasicColouredTexturedVertex {
	// CgsBasicColouredTexturedVertex.h:46
	Vector3 mv3Pos;

	// CgsBasicColouredTexturedVertex.h:47
	RGBA8 mv4Colour;

	// vector2.h:129
	typedef Vector2Template<float> Vector2U_32;

	// CgsBasicColouredTexturedVertex.h:48
	BasicColouredTexturedVertex::Vector2U_32 mv2Tex0UV;

public:
	// CgsBasicColouredTexturedVertex.h:68
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct BasicColouredTexturedVertex {
		// CgsBasicColouredTexturedVertex.h:113
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasicColouredTexturedVertex.h:117
			void Write(const CgsGraphics::BasicColouredTexturedVertex &);

			// CgsBasicColouredTexturedVertex.h:137
			void Read(CgsGraphics::BasicColouredTexturedVertex &);

			// CgsBasicColouredTexturedVertex.h:156
			uint32_t GetStride();

		}

	}

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct BasicColouredTexturedVertex {
		// CgsBasicColouredTexturedVertex.h:113
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasicColouredTexturedVertex.h:117
			void Write(const CgsGraphics::BasicColouredTexturedVertex &);

			// CgsBasicColouredTexturedVertex.h:137
			void Read(CgsGraphics::BasicColouredTexturedVertex &);

			// CgsBasicColouredTexturedVertex.h:156
			uint32_t GetStride();

		}

	}

}

