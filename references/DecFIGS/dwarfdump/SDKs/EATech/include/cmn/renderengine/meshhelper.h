// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct MeshHelper {
		// meshhelper.h:63
		struct Parameters {
		protected:
			// meshhelper.h:77
			IndexBuffer *[1] indexBuffers;

			// meshhelper.h:78
			renderengine::VertexBuffer *[16] vertexBuffers;

		public:
			// meshhelper.h:66
			Parameters();

			// meshhelper.h:67
			void SetIndexBuffer(IndexBuffer *, uint32_t);

			// meshhelper.h:68
			void SetVertexBuffer(renderengine::VertexBuffer *, uint32_t);

			// meshhelper.h:69
			const IndexBuffer * GetIndexBuffer(uint32_t) const;

			// meshhelper.h:70
			const VertexBuffer * GetVertexBuffer(uint32_t) const;

		protected:
			// meshhelper.h:74
			uint32_t CountVertexBuffers() const;

			// meshhelper.h:75
			uint32_t CountIndexBuffers() const;

		}

	}

}

// meshhelper.h:59
struct renderengine::MeshHelper {
protected:
	// meshhelper.h:108
	uint32_t m_numIndexBuffers;

	// meshhelper.h:109
	uint32_t m_numVertexBuffers;

	// meshhelper.h:111
	void *[1] m_buffers;

public:
	// meshhelper.h:83
	ResourceDescriptor GetResourceDescriptor(const renderengine::MeshHelper::Parameters &);

	// meshhelper.h:84
	MeshHelper * Initialize(const Resource &, const renderengine::MeshHelper::Parameters &);

	// meshhelper.h:85
	void Destruct(MeshHelper *);

	// meshhelper.h:86
	void Release();

	// meshhelper.h:87
	void GetParameters(renderengine::MeshHelper::Parameters &) const;

	// meshhelper.h:92
	uint32_t GetNumIndexBuffers() const;

	// meshhelper.h:93
	uint32_t GetNumVertexBuffers() const;

	// meshhelper.h:94
	const VertexBuffer * GetVertexBuffer(uint32_t) const;

	// meshhelper.h:95
	const IndexBuffer * GetIndexBuffer(uint32_t) const;

	// meshhelper.h:96
	renderengine::VertexBuffer * GetVertexBuffer(uint32_t);

	// meshhelper.h:97
	IndexBuffer * GetIndexBuffer(uint32_t);

	// meshhelper.h:99
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// meshhelper.h:99
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// meshhelper.h:99
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// meshhelper.h:99
	void RegisterArenaReadCallbacks();

	// meshhelper.h:99
	void RegisterArenaWriteCallbacks();

	// meshhelper.h:99
	void EndianSwapUnfix();

	// meshhelper.h:99
	void EndianSwapFixup();

protected:
	// meshhelper.h:104
	void MeshHelper();

	// meshhelper.h:105
	void MeshHelper(const MeshHelper &);

	// meshhelper.h:106
	void ~MeshHelper();

}

// meshhelper.h:172
extern void Dispatch<shadow::RwDevice>(RwDevice *  device) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// shadowingdevice.h:450
	typedef Device RwDevice;

	{
		// meshhelper.h:176
		uint32_t i;

		// meshhelper.h:177
		uint32_t bufferIdx;

	}
}

// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct MeshHelper {
		// meshHelper.h:63
		struct Parameters {
		protected:
			// meshHelper.h:77
			IndexBuffer *[1] indexBuffers;

			// meshHelper.h:78
			renderengine::VertexBuffer *[16] vertexBuffers;

		public:
			// meshHelper.h:66
			Parameters();

			// meshHelper.h:67
			void SetIndexBuffer(IndexBuffer *, uint32_t);

			// meshHelper.h:68
			void SetVertexBuffer(renderengine::VertexBuffer *, uint32_t);

			// meshHelper.h:69
			const IndexBuffer * GetIndexBuffer(uint32_t) const;

			// meshHelper.h:70
			const VertexBuffer * GetVertexBuffer(uint32_t) const;

		protected:
			// meshHelper.h:74
			uint32_t CountVertexBuffers() const;

			// meshHelper.h:75
			uint32_t CountIndexBuffers() const;

		}

	}

}

// meshHelper.h:59
struct renderengine::MeshHelper {
protected:
	// meshHelper.h:108
	uint32_t m_numIndexBuffers;

	// meshHelper.h:109
	uint32_t m_numVertexBuffers;

	// meshHelper.h:111
	void *[1] m_buffers;

public:
	// meshHelper.h:83
	ResourceDescriptor GetResourceDescriptor(const renderengine::MeshHelper::Parameters &);

	// meshHelper.h:84
	MeshHelper * Initialize(const Resource &, const renderengine::MeshHelper::Parameters &);

	// meshHelper.h:85
	void Destruct(MeshHelper *);

	// meshHelper.h:86
	void Release();

	// meshHelper.h:87
	void GetParameters(renderengine::MeshHelper::Parameters &) const;

	// meshHelper.h:92
	uint32_t GetNumIndexBuffers() const;

	// meshHelper.h:93
	uint32_t GetNumVertexBuffers() const;

	// meshHelper.h:94
	const VertexBuffer * GetVertexBuffer(uint32_t) const;

	// meshHelper.h:95
	const IndexBuffer * GetIndexBuffer(uint32_t) const;

	// meshHelper.h:96
	renderengine::VertexBuffer * GetVertexBuffer(uint32_t);

	// meshHelper.h:97
	IndexBuffer * GetIndexBuffer(uint32_t);

	// meshHelper.h:99
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// meshHelper.h:99
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// meshHelper.h:99
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// meshHelper.h:99
	void RegisterArenaReadCallbacks();

	// meshHelper.h:99
	void RegisterArenaWriteCallbacks();

	// meshHelper.h:99
	void EndianSwapUnfix();

	// meshHelper.h:99
	void EndianSwapFixup();

protected:
	// meshHelper.h:104
	void MeshHelper();

	// meshHelper.h:105
	void MeshHelper(const MeshHelper &);

	// meshHelper.h:106
	void ~MeshHelper();

}

