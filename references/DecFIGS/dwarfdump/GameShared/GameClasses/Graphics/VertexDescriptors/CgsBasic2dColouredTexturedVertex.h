// CgsBasic2dColouredTexturedVertex.h:44
struct CgsGraphics::Basic2dColouredTexturedVertex {
	// CgsBasic2dColouredTexturedVertex.h:46
	Basic2dColouredVertex::Vector2 mv2Pos;

	// CgsBasic2dColouredTexturedVertex.h:47
	RGBA8 mv4Colour;

	// CgsBasic2dColouredTexturedVertex.h:48
	Basic2dColouredVertex::Vector2 mv2Tex0UV;

public:
	// CgsBasic2dColouredTexturedVertex.h:67
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsBasic2dColouredTexturedVertex.h:44
struct CgsGraphics::Basic2dColouredTexturedVertex {
	// CgsBasic2dColouredTexturedVertex.h:46
	FontChar::Vector2 mv2Pos;

	// CgsBasic2dColouredTexturedVertex.h:47
	RGBA8 mv4Colour;

	// CgsBasic2dColouredTexturedVertex.h:48
	FontChar::Vector2 mv2Tex0UV;

public:
	// CgsBasic2dColouredTexturedVertex.h:67
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsBasic2dColouredTexturedVertex.h:44
struct CgsGraphics::Basic2dColouredTexturedVertex {
	// CgsBasic2dColouredTexturedVertex.h:46
	SmoothStep::Vector2 mv2Pos;

	// CgsBasic2dColouredTexturedVertex.h:47
	RGBA8 mv4Colour;

	// CgsBasic2dColouredTexturedVertex.h:48
	SmoothStep::Vector2 mv2Tex0UV;

public:
	// CgsBasic2dColouredTexturedVertex.h:67
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsBasic2dColouredTexturedVertex.h:44
struct CgsGraphics::Basic2dColouredTexturedVertex {
	// CgsBasic2dColouredTexturedVertex.h:46
	AISection::Vector2 mv2Pos;

	// CgsBasic2dColouredTexturedVertex.h:47
	RGBA8 mv4Colour;

	// CgsBasic2dColouredTexturedVertex.h:48
	AISection::Vector2 mv2Tex0UV;

public:
	// CgsBasic2dColouredTexturedVertex.h:67
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct Basic2dColouredTexturedVertex {
		// CgsBasic2dColouredTexturedVertex.h:111
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasic2dColouredTexturedVertex.h:115
			void Write(const CgsGraphics::Basic2dColouredTexturedVertex &);

			// CgsBasic2dColouredTexturedVertex.h:134
			void Read(CgsGraphics::Basic2dColouredTexturedVertex &);

			// CgsBasic2dColouredTexturedVertex.h:152
			uint32_t GetStride();

		}

	}

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct Basic2dColouredTexturedVertex {
		// CgsBasic2dColouredTexturedVertex.h:111
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasic2dColouredTexturedVertex.h:115
			void Write(const CgsGraphics::Basic2dColouredTexturedVertex &);

			// CgsBasic2dColouredTexturedVertex.h:134
			void Read(CgsGraphics::Basic2dColouredTexturedVertex &);

			// CgsBasic2dColouredTexturedVertex.h:152
			uint32_t GetStride();

		}

	}

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct Basic2dColouredTexturedVertex {
		// CgsBasic2dColouredTexturedVertex.h:111
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsBasic2dColouredTexturedVertex.h:115
			void Write(const CgsGraphics::Basic2dColouredTexturedVertex &);

			// CgsBasic2dColouredTexturedVertex.h:134
			void Read(CgsGraphics::Basic2dColouredTexturedVertex &);

			// CgsBasic2dColouredTexturedVertex.h:152
			uint32_t GetStride();

		}

	}

}

