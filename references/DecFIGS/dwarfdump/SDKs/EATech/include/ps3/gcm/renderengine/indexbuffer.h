// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct IndexBuffer {
		// indexbuffer.h:82
		struct Parameters {
			// indexbuffer.h:97
			uint32_t type;

			// indexbuffer.h:98
			uint32_t depth;

			// indexbuffer.h:99
			uint32_t numIndices;

		public:
			// indexbuffer.h:83
			Parameters();

			// indexbuffer.h:86
			void SetType(uint32_t);

			// indexbuffer.h:87
			void SetDepth(uint32_t);

			// indexbuffer.h:88
			void SetNumIndices(uint32_t);

			// indexbuffer.h:90
			uint32_t GetType() const;

			// indexbuffer.h:91
			uint32_t GetDepth() const;

			// indexbuffer.h:92
			uint32_t GetNumIndices() const;

		}

		// indexbuffer.h:106
		struct Locked {
			// indexbuffer.h:107
			void * indices;

			// indexbuffer.h:108
			uint32_t indexStride;

		}

	}

}

// indexbuffer.h:69
struct renderengine::IndexBuffer {
	// indexbuffer.h:71
	extern const uint32_t TYPE_STATIC;

	// indexbuffer.h:72
	extern const uint32_t TYPE_DYNAMIC = 1;

	// indexbuffer.h:73
	extern const uint32_t TYPE_MASK = 1;

	// indexbuffer.h:75
	extern const uint32_t LOCK_READ = 1;

	// indexbuffer.h:76
	extern const uint32_t LOCK_WRITE = 2;

	// indexbuffer.h:77
	extern const uint32_t LOCK_READWRITE = 3;

	// indexbuffer.h:78
	extern const uint32_t LOCK_NOOVERWRITE = 8;

protected:
	// indexbuffer.h:140
	void * m_buffer;

	// indexbuffer.h:142
	uint32_t m_offset;

	// indexbuffer.h:143
	uint32_t m_numIndices;

	// indexbuffer.h:144
	uint32_t m_stride;

	// indexbuffer.h:146
	uint8_t m_indexType;

	// indexbuffer.h:147
	uint8_t m_location;

	// indexbuffer.h:149
	uint8_t m_type;

	// indexbuffer.h:150
	uint8_t m_lockFlags;

public:
	// indexbuffer.h:112
	ResourceDescriptor GetResourceDescriptor(const renderengine::IndexBuffer::Parameters &);

	// indexbuffer.h:113
	IndexBuffer * Initialize(const Resource &, const renderengine::IndexBuffer::Parameters &);

	// indexbuffer.h:114
	void Destruct(IndexBuffer *);

	// indexbuffer.h:115
	void Release();

	// indexbuffer.h:117
	bool Lock(uint32_t, renderengine::IndexBuffer::Locked &);

	// indexbuffer.h:118
	void Unlock(const renderengine::IndexBuffer::Locked &);

	// indexbuffer.h:119
	void GetParameters(renderengine::IndexBuffer::Parameters &) const;

	// indexbuffer.h:120
	uint32_t GetNumIndices() const;

	// indexbuffer.h:121
	uint32_t GetDepth() const;

	// indexbuffer.h:123
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// indexbuffer.h:123
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// indexbuffer.h:123
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// indexbuffer.h:123
	void RegisterArenaReadCallbacks();

	// indexbuffer.h:123
	void RegisterArenaWriteCallbacks();

	// indexbuffer.h:123
	void EndianSwapUnfix();

	// indexbuffer.h:123
	void EndianSwapFixup();

	// indexbuffer.h:124
	int32_t AddRef();

	// indexbuffer.h:124
	int32_t RemoveRef();

protected:
	// indexbuffer.h:131
	void IndexBuffer();

	// indexbuffer.h:132
	void IndexBuffer(const IndexBuffer &);

	// indexbuffer.h:133
	void ~IndexBuffer();

	// indexbuffer.h:137
	uint32_t PS3GetIndexStride(uint8_t);

	// indexbuffer.h:138
	void PS3EndianSwapBuffer();

}

// indexbuffer.h:71
extern const uint32_t TYPE_STATIC;

// indexbuffer.h:72
extern const uint32_t TYPE_DYNAMIC = 1;

// indexbuffer.h:75
extern const uint32_t LOCK_READ = 1;

// indexbuffer.h:76
extern const uint32_t LOCK_WRITE = 2;

