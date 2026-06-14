// CgsPositionOnlyVertex.h:42
struct CgsGraphics::PositionOnlyVertex {
	// CgsPositionOnlyVertex.h:44
	Vector3 mv3Pos;

public:
	// CgsPositionOnlyVertex.h:60
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct PositionOnlyVertex {
		// CgsPositionOnlyVertex.h:81
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// CgsPositionOnlyVertex.h:85
			void Write(const CgsGraphics::PositionOnlyVertex &);

			// CgsPositionOnlyVertex.h:99
			void Read(CgsGraphics::PositionOnlyVertex &);

			// CgsPositionOnlyVertex.h:113
			uint32_t GetStride();

		}

	}

}

