// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct VertexBufferHelper {
		// vertexbufferhelper.h:69
		struct Parameters : public renderengine::VertexBuffer::Parameters {
		protected:
			// vertexbufferhelper.h:84
			uint32_t numVertices;

			// vertexbufferhelper.h:85
			renderengine::VertexFormat[16] elementFormats;

			// vertexbufferhelper.h:88
			uint32_t numElements;

			// vertexbufferhelper.h:89
			uint32_t stride;

		public:
			// vertexbufferhelper.h:72
			Parameters();

			// vertexbufferhelper.h:74
			void SetNumVertices(uint32_t);

			// vertexbufferhelper.h:75
			void SetElementFormat(uint32_t, renderengine::VertexFormat);

			// vertexbufferhelper.h:77
			uint32_t GetNumVertices() const;

			// vertexbufferhelper.h:78
			renderengine::VertexFormat GetElementFormat(uint32_t) const;

			// vertexbufferhelper.h:80
			void CalculateBufferSize();

		}

	}

}

// vertexbufferhelper.h:61
struct renderengine::VertexBufferHelper : public VertexBuffer {
protected:
	// vertexbufferhelper.h:104
	extern uint32_t[16] m_elementStrides;

	// vertexbufferhelper.h:105
	extern uint32_t[16] m_elementComponents;

public:
	// vertexbufferhelper.h:94
	ResourceDescriptor GetResourceDescriptor(renderengine::VertexBufferHelper::Parameters &);

	// vertexbufferhelper.h:95
	VertexBufferHelper * Initialize(const Resource &, renderengine::VertexBufferHelper::Parameters &);

	// vertexbufferhelper.h:97
	uint32_t CalculateStride(const renderengine::VertexFormat *, uint32_t);

	// vertexbufferhelper.h:99
	bool Lock(renderengine::VertexBuffer::BatchIterator &, const renderengine::VertexBufferHelper::Parameters &, uint32_t, uint32_t, uint32_t);

	// vertexbufferhelper.h:100
	void Unlock(const renderengine::VertexBuffer::BatchIterator &, const renderengine::VertexBufferHelper::Parameters &);

protected:
	// vertexbufferhelper.h:107
	void EndianSwap(const renderengine::VertexBufferHelper::Parameters &, void *, uint32_t);

}

