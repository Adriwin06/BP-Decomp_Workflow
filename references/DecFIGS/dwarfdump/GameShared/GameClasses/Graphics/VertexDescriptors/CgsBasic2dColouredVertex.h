// CgsBasic2dColouredVertex.h:44
struct CgsGraphics::Basic2dColouredVertex {
	// vector2.h:123
	typedef Vector2Template<float> Vector2;

	// CgsBasic2dColouredVertex.h:46
	Basic2dColouredVertex::Vector2 mv2Pos;

	// CgsBasic2dColouredVertex.h:47
	RGBA8 mv4Colour;

public:
	// CgsBasic2dColouredVertex.h:62
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Basic2dColouredVertex {
		// CgsBasic2dColouredVertex.h:95
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasic2dColouredVertex.h:99
			void Write(const CgsGraphics::Basic2dColouredVertex &);

			// CgsBasic2dColouredVertex.h:116
			void Read(CgsGraphics::Basic2dColouredVertex &);

			// CgsBasic2dColouredVertex.h:132
			uint32_t GetStride();

		}

	}

}

// CgsBasic2dColouredVertex.h:44
struct CgsGraphics::Basic2dColouredVertex {
	// CgsBasic2dColouredVertex.h:46
	SmoothStep::Vector2 mv2Pos;

	// CgsBasic2dColouredVertex.h:47
	RGBA8 mv4Colour;

public:
	// CgsBasic2dColouredVertex.h:62
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

