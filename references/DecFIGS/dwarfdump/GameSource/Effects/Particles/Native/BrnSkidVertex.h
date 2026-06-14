// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// Declaration
	struct SkidVertex {
		// BrnSkidVertex.h:64
		struct VertexIterator : public VertexIteratorBaseClass {
		public:
			// BrnSkidVertex.h:68
			void Write(const BrnGraphics::SkidVertex &);

			// BrnSkidVertex.h:75
			uint32_t GetStride();

		}

	}

}

// BrnSkidVertex.h:45
struct BrnGraphics::SkidVertex {
	// BrnSkidVertex.h:47
	Vector3 mv3Pos;

	// BrnSkidVertex.h:48
	Vector4 mv4UvTimeAlpha;

public:
	// BrnSkidVertex.h:50
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

}

