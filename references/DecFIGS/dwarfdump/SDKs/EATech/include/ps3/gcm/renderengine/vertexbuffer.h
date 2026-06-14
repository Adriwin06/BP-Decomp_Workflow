// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct VertexBuffer {
		// vertexbuffer.h:92
		struct Parameters {
		protected:
			// vertexbuffer.h:110
			uint32_t flags;

			// vertexbuffer.h:111
			uint32_t type;

			// vertexbuffer.h:112
			uint32_t bufferSize;

		public:
			// vertexbuffer.h:96
			Parameters();

			// vertexbuffer.h:98
			void SetType(uint32_t);

			// vertexbuffer.h:99
			void SetBufferSize(uint32_t);

			// vertexbuffer.h:101
			uint32_t GetType() const;

			// vertexbuffer.h:102
			uint32_t GetBufferSize() const;

		protected:
			// vertexbuffer.h:106
			void PS3SetFlags(uint32_t);

			// vertexbuffer.h:107
			uint32_t PS3GetFlags() const;

			// vertexbuffer.h:108
			uint32_t PS3GetFlagsFromType() const;

		}

		// vertexbuffer.h:123
		struct BatchIterator {
		protected:
			// vertexbuffer.h:143
			uint32_t m_flags;

			// vertexbuffer.h:144
			uint32_t m_bufferSize;

			// vertexbuffer.h:145
			uint8_t * m_lockedBuffer;

			// vertexbuffer.h:146
			renderengine::VertexBuffer * m_vb;

		public:
			// vertexbuffer.h:126
			BatchIterator();

			// vertexbuffer.h:127
			BatchIterator(const renderengine::VertexBuffer::BatchIterator &);

			// vertexbuffer.h:135
			void * GetLockedBuffer() const;

			// vertexbuffer.h:136
			uint32_t GetLockedBufferSize() const;

			// vertexbuffer.h:137
			uint32_t GetFlags() const;

		protected:
			// vertexbuffer.h:141
			void Initialize(void *, uint32_t, renderengine::VertexBuffer *, uint32_t);

		}

	}

}

// vertexbuffer.h:65
struct renderengine::VertexBuffer {
	// vertexbuffer.h:68
	extern const uint32_t MAXNUMELEMENTS = 16;

	// vertexbuffer.h:71
	extern const uint32_t FLAG_DONTALLOCATE = 1;

	// vertexbuffer.h:72
	extern const uint32_t FLAG_SYSTEM = 2;

	// vertexbuffer.h:76
	extern const uint32_t TYPE_STATIC = 1;

	// vertexbuffer.h:77
	extern const uint32_t TYPE_DYNAMIC = 2;

	// vertexbuffer.h:78
	extern const uint32_t TYPE_MASK = 3;

	// vertexbuffer.h:79
	extern const uint32_t TYPE_MAX = 3;

	// vertexbuffer.h:82
	extern const uint32_t LOCK_READ = 1;

	// vertexbuffer.h:83
	extern const uint32_t LOCK_WRITE = 2;

	// vertexbuffer.h:84
	extern const uint32_t LOCK_DISCARD = 4;

	// vertexbuffer.h:85
	extern const uint32_t LOCK_NOOVERWRITE = 8;

	// vertexbuffer.h:86
	extern const uint32_t LOCK_READWRITE = 3;

protected:
	// vertexbuffer.h:181
	void * m_buffer;

	// vertexbuffer.h:182
	uint32_t m_offset;

	// vertexbuffer.h:183
	uint32_t m_bufferSize;

	// vertexbuffer.h:185
	uint8_t m_location;

	// vertexbuffer.h:186
	uint8_t m_lockFlags;

	// vertexbuffer.h:187
	uint16_t m_pad0;

public:
	// vertexbuffer.h:156
	ResourceDescriptor GetResourceDescriptor(const renderengine::VertexBuffer::Parameters &);

	// vertexbuffer.h:157
	renderengine::VertexBuffer * Initialize(const Resource &, const renderengine::VertexBuffer::Parameters &);

	// vertexbuffer.h:158
	void Destruct(renderengine::VertexBuffer *);

	// vertexbuffer.h:159
	void Release();

	// vertexbuffer.h:160
	void GetParameters(renderengine::VertexBuffer::Parameters &) const;

	// vertexbuffer.h:162
	bool Lock(uint32_t, renderengine::VertexBuffer::BatchIterator &, uint32_t, uint32_t);

	// vertexbuffer.h:163
	void Unlock(const renderengine::VertexBuffer::BatchIterator &);

	// vertexbuffer.h:164
	uint32_t GetType() const;

	// vertexbuffer.h:165
	uint32_t GetBufferSize() const;

	// vertexbuffer.h:167
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// vertexbuffer.h:167
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// vertexbuffer.h:167
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// vertexbuffer.h:167
	void RegisterArenaReadCallbacks();

	// vertexbuffer.h:167
	void RegisterArenaWriteCallbacks();

	// vertexbuffer.h:167
	void EndianSwapUnfix();

	// vertexbuffer.h:167
	void EndianSwapFixup();

	// vertexbuffer.h:168
	int32_t AddRef();

	// vertexbuffer.h:168
	int32_t RemoveRef();

	// vertexbuffer.h:170
	void * PS3GetBuffer();

	// vertexbuffer.h:171
	uint32_t PS3GetOffset();

	// vertexbuffer.h:172
	uint8_t PS3GetLocation() const;

protected:
	// vertexbuffer.h:176
	void VertexBuffer();

	// vertexbuffer.h:177
	void VertexBuffer(const VertexBuffer &);

	// vertexbuffer.h:178
	void ~VertexBuffer();

}

// vertexbuffer.h:23
namespace shadow {
}

// vertexbuffer.h:76
extern const uint32_t TYPE_STATIC = 1;

// vertexbuffer.h:82
extern const uint32_t LOCK_READ = 1;

// vertexbuffer.h:83
extern const uint32_t LOCK_WRITE = 2;

// vertexbuffer.h:27
namespace BrnParticle {
	struct ParticleDescription;

	struct ParticleDescriptionCollection;

	struct VFXLocator;

	struct VFXMaterial;

	struct VFXCoronaTypeData;

	struct VFXCoronaType;

	struct VFXPropState;

	struct VFXProp;

	struct VFXPropCollection;

	struct NativeParticleVertex;

	struct FXBucketBase;

	struct FXBucketManager;

	struct FXBucket<BrnParticle::Native::BrnSpark,4>;

	struct FXBucket<BrnParticle::Native::BrnDebris,32>;

	struct LionParticleRender;

	struct SpawnSparksFromPointEvent;

	struct SpawnSparkShowerFromPointEvent;

	struct SpawnSparksAlongLineEvent;

	struct FireDebrisBurstEvent;

	struct LionEffect;

	struct InterThreadEventQueue<16384>;

	struct ParticleCpuMonitors;

	struct IInternalAllocator;

}

// vertexbuffer.h:77
extern const uint32_t TYPE_DYNAMIC = 2;

// vertexbuffer.h:27
namespace BrnParticle {
	struct VFXLocator;

	struct VFXMaterial;

	struct VFXCoronaTypeData;

	struct VFXCoronaType;

	struct VFXPropState;

	struct VFXProp;

	struct VFXPropCollection;

}

// vertexbuffer.h:27
namespace BrnParticle {
}

// vertexbuffer.h:27
namespace BrnParticle {
	struct LionEffect;

	struct InterThreadEventQueue<16384>;

}

// vertexbuffer.h:285
extern bool BeginBatch<rw::graphics::postfx::PfxHelper::PfxHelper(const rw::graphics::postfx::PfxHelper::Parameters&)::QuadVertexIterator>(const uint32_t &  batchSize, const QuadVertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// rwgpfxhelper.cpp:138
	typedef VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> QuadVertexIterator;

}

// vertexbuffer.h:299
extern void EndBatch<rw::graphics::postfx::PfxHelper::PfxHelper(const rw::graphics::postfx::PfxHelper::Parameters&)::QuadVertexIterator>(const QuadVertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct ParticleDescriptionCollectionResourceType {
	public:
		ParticleDescriptionCollectionResourceType();

	}

	// Declaration
	struct ParticleDescriptionResourceType {
	public:
		ParticleDescriptionResourceType();

	}

	// Declaration
	struct TextureNameMapResourceType {
	public:
		TextureNameMapResourceType();

	}

	// Declaration
	struct BrnVFXMeshCollectionResourceType {
	public:
		BrnVFXMeshCollectionResourceType();

	}

	// Declaration
	struct VFXPropCollectionResourceType {
	public:
		VFXPropCollectionResourceType();

	}

}

// vertexbuffer.h:27
namespace BrnParticle {
	struct ParticleDescription;

	struct ParticleDescriptionCollection;

	struct VFXLocator;

	struct VFXMaterial;

	struct VFXCoronaTypeData;

	struct VFXCoronaType;

	struct VFXPropState;

	struct VFXProp;

	struct VFXPropCollection;

	struct VFXPropCollectionResourceType;

	struct BrnVFXMeshCollectionResourceType;

	struct TextureNameMapResourceType;

	struct ParticleDescriptionResourceType;

	struct ParticleDescriptionCollectionResourceType;

}

// vertexbuffer.h:27
namespace BrnParticle {
	struct ParticleDescription;

	struct ParticleDescriptionCollection;

	struct VFXLocator;

	struct VFXMaterial;

	struct VFXCoronaTypeData;

	struct VFXCoronaType;

	struct VFXPropState;

	struct VFXProp;

	struct VFXPropCollection;

	struct FXBucketBase;

	struct FXBucketManager;

	struct FXBucket<BrnParticle::Native::BrnSpark,4>;

	struct FXBucket<BrnParticle::Native::BrnDebris,32>;

	struct LionEffect;

	struct InterThreadEventQueue<16384>;

}

// vertexbuffer.h:23
namespace shadow {
	struct VertexProgramStateData;

}

// vertexbuffer.h:285
extern bool BeginBatch<renderengine::StrideVertexIterator>(const uint32_t &  batchSize, const StrideVertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexbuffer.h:299
extern void EndBatch<renderengine::StrideVertexIterator>(const StrideVertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// vertexbuffer.h:86
extern const uint32_t LOCK_READWRITE = 3;

// vertexbuffer.h:72
extern const uint32_t FLAG_SYSTEM = 2;

// vertexbuffer.h:27
namespace BrnParticle {
	struct LionParticleRender;

}

