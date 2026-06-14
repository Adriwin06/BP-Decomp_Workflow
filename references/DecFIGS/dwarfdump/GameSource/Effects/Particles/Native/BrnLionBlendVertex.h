// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// Declaration
	struct LionBlendVertex {
		// BrnLionBlendVertex.h:101
		struct VertexIterator : public EffectsVertexBufferIterator {
		public:
			// BrnLionBlendVertex.h:114
			void Write(Vector4, const RGBA8 &, Vector4);

		}

	}

}

// BrnLionBlendVertex.h:49
struct BrnGraphics::LionBlendVertex {
public:
	// BrnLionBlendVertex.h:61
	void FillVertexDescriptorParameters(renderengine::VertexDescriptor::Parameters &);

	// BrnLionBlendVertex.h:92
	uint32_t GetStride();

}

// BrnLionBlendVertex.h:35
namespace BrnGraphics {
	struct LionBlendRenderer;

}

