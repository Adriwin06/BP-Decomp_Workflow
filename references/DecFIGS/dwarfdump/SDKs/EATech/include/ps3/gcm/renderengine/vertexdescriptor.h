// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct VertexDescriptor {
		// vertexdescriptor.h:64
		enum ElementType {
			ELEMENTTYPE_NA = 255,
			ELEMENTTYPE_PS3ATTRIBUTE0 = 0,
			ELEMENTTYPE_PS3ATTRIBUTE1 = 1,
			ELEMENTTYPE_PS3ATTRIBUTE2 = 2,
			ELEMENTTYPE_PS3ATTRIBUTE3 = 3,
			ELEMENTTYPE_PS3ATTRIBUTE4 = 4,
			ELEMENTTYPE_PS3ATTRIBUTE5 = 5,
			ELEMENTTYPE_PS3ATTRIBUTE6 = 6,
			ELEMENTTYPE_PS3ATTRIBUTE7 = 7,
			ELEMENTTYPE_PS3ATTRIBUTE8 = 8,
			ELEMENTTYPE_PS3ATTRIBUTE9 = 9,
			ELEMENTTYPE_PS3ATTRIBUTE10 = 10,
			ELEMENTTYPE_PS3ATTRIBUTE11 = 11,
			ELEMENTTYPE_PS3ATTRIBUTE12 = 12,
			ELEMENTTYPE_PS3ATTRIBUTE13 = 13,
			ELEMENTTYPE_PS3ATTRIBUTE14 = 14,
			ELEMENTTYPE_PS3ATTRIBUTE15 = 15,
			ELEMENTTYPE_MAX = 15,
			ELEMENTTYPE_NUM = 16,
			ELEMENTTYPE_XYZ = 0,
			ELEMENTTYPE_NORMAL = 2,
			ELEMENTTYPE_VERTEXCOLOR = 3,
			ELEMENTTYPE_TEX0 = 8,
			ELEMENTTYPE_TEX1 = 9,
			ELEMENTTYPE_TEX2 = 10,
			ELEMENTTYPE_TEX3 = 11,
			ELEMENTTYPE_TEX4 = 12,
			ELEMENTTYPE_TEX5 = 13,
			ELEMENTTYPE_TEX6 = 14,
			ELEMENTTYPE_TEX7 = 15,
			ELEMENTTYPE_INDICES = 7,
			ELEMENTTYPE_WEIGHTS = 1,
			ELEMENTTYPE_TANGENT = 14,
			ELEMENTTYPE_BINORMAL = 15,
			ELEMENTTYPE_SPECULAR = 4,
			ELEMENTTYPE_FORCEENUMSIZEINT = 2147483647,
		}

		// vertexdescriptor.h:149
		enum ElementClass {
			ELEMENTCLASS_NA = 0,
			ELEMENTCLASS_PERVERTEX = 1,
			ELEMENTCLASS_PERINSTANCE = 2,
			ELEMENTCLASS_FORCEENUMSIZEINT = 2147483647,
		}

		// vertexdescriptor.h:162
		struct Element {
			// vertexdescriptor.h:163
			uint8_t vertexType;

			// vertexdescriptor.h:164
			uint8_t numComponents;

			// vertexdescriptor.h:165
			uint8_t stream;

			// vertexdescriptor.h:166
			uint8_t offset;

			// vertexdescriptor.h:168
			uint16_t stride;

			// vertexdescriptor.h:169
			uint8_t type;

			// vertexdescriptor.h:170
			uint8_t elementClass;

		}

		// vertexdescriptor.h:178
		struct Parameters {
		protected:
			// vertexdescriptor.h:214
			renderengine::VertexDescriptor::Element[16] elements;

		public:
			// vertexdescriptor.h:179
			Parameters();

			// vertexdescriptor.h:193
			void SetElementStream(uint32_t, uint32_t);

			// vertexdescriptor.h:194
			void SetElementOffset(uint32_t, uint32_t);

			// vertexdescriptor.h:195
			void SetElementFormat(uint32_t, renderengine::VertexFormat);

			// vertexdescriptor.h:196
			void SetElementType(uint32_t, renderengine::VertexDescriptor::ElementType);

			// vertexdescriptor.h:197
			void SetElementStride(uint32_t, uint32_t);

			// vertexdescriptor.h:198
			void SetElementClass(uint32_t, renderengine::VertexDescriptor::ElementClass);

			// vertexdescriptor.h:200
			uint32_t GetElementStream(uint32_t) const;

			// vertexdescriptor.h:201
			uint32_t GetElementOffset(uint32_t) const;

			// vertexdescriptor.h:202
			renderengine::VertexFormat GetElementFormat(uint32_t) const;

			// vertexdescriptor.h:203
			renderengine::VertexDescriptor::ElementType GetElementType(uint32_t) const;

			// vertexdescriptor.h:204
			uint32_t GetElementStride(uint32_t) const;

			// vertexdescriptor.h:205
			renderengine::VertexDescriptor::ElementClass GetElementClass(uint32_t) const;

		protected:
			// vertexdescriptor.h:211
			uint32_t PS3CountElements() const;

			// vertexdescriptor.h:212
			bool PS3IsAnotherElementOnStream(uint32_t, const renderengine::VertexDescriptor::Element *&) const;

		}

	}

}

// vertexdescriptor.h:56
struct renderengine::VertexDescriptor {
	// vertexdescriptor.h:59
	extern const uint32_t MaxNumElements = 16;

	// vertexdescriptor.h:114
	extern const uint32_t ELEMENTTYPEFLAG_XYZ = 1;

	// vertexdescriptor.h:115
	extern const uint32_t ELEMENTTYPEFLAG_NORMAL = 4;

	// vertexdescriptor.h:116
	extern const uint32_t ELEMENTTYPEFLAG_VERTEXCOLOR = 8;

	// vertexdescriptor.h:118
	extern const uint32_t ELEMENTTYPEFLAG_TEX0 = 256;

	// vertexdescriptor.h:119
	extern const uint32_t ELEMENTTYPEFLAG_TEX1 = 512;

	// vertexdescriptor.h:120
	extern const uint32_t ELEMENTTYPEFLAG_TEX2 = 1024;

	// vertexdescriptor.h:121
	extern const uint32_t ELEMENTTYPEFLAG_TEX3 = 2048;

	// vertexdescriptor.h:122
	extern const uint32_t ELEMENTTYPEFLAG_TEX4 = 4096;

	// vertexdescriptor.h:123
	extern const uint32_t ELEMENTTYPEFLAG_TEX5 = 8192;

	// vertexdescriptor.h:124
	extern const uint32_t ELEMENTTYPEFLAG_TEX6 = 16384;

	// vertexdescriptor.h:125
	extern const uint32_t ELEMENTTYPEFLAG_TEX7 = 32768;

	// vertexdescriptor.h:127
	extern const uint32_t ELEMENTTYPEFLAG_INDICES = 128;

	// vertexdescriptor.h:128
	extern const uint32_t ELEMENTTYPEFLAG_WEIGHTS = 2;

	// vertexdescriptor.h:130
	extern const uint32_t ELEMENTTYPEFLAG_TANGENT = 16384;

	// vertexdescriptor.h:131
	extern const uint32_t ELEMENTTYPEFLAG_BINORMAL = 32768;

	// vertexdescriptor.h:132
	extern const uint32_t ELEMENTTYPEFLAG_SPECULAR = 16;

	// vertexdescriptor.h:141
	extern const uint32_t ELEMENTTYPEFLAG_TEX_MASK = 65280;

	// vertexdescriptor.h:143
	extern const uint32_t ELEMENTTYPEFLAG_MASK = 65535;

protected:
	// vertexdescriptor.h:257
	int32_t m_refCount;

	// vertexdescriptor.h:258
	uint32_t m_typesFlags;

	// vertexdescriptor.h:259
	uint16_t m_numStreams;

	// vertexdescriptor.h:260
	uint16_t m_numElements;

	// vertexdescriptor.h:261
	uint16_t m_frequencyDividerOperation;

	// vertexdescriptor.h:262
	uint16_t m_pad0;

	// vertexdescriptor.h:263
	renderengine::VertexDescriptor::Element[1] m_elements;

public:
	// vertexdescriptor.h:223
	ResourceDescriptor GetResourceDescriptor(const renderengine::VertexDescriptor::Parameters &);

	// vertexdescriptor.h:224
	VertexDescriptor * Initialize(const Resource &, const renderengine::VertexDescriptor::Parameters &);

	// vertexdescriptor.h:225
	void Release();

	// vertexdescriptor.h:226
	void Destruct(VertexDescriptor *);

	// vertexdescriptor.h:228
	void GetParameters(renderengine::VertexDescriptor::Parameters &) const;

	// vertexdescriptor.h:231
	uint32_t GetNumElements() const;

	// vertexdescriptor.h:232
	const renderengine::VertexDescriptor::Element * GetElements() const;

	// vertexdescriptor.h:233
	uint32_t GetStride() const;

	// vertexdescriptor.h:236
	RwBool AreEqual(const VertexDescriptor *, const VertexDescriptor *);

	// vertexdescriptor.h:238
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// vertexdescriptor.h:238
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// vertexdescriptor.h:238
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// vertexdescriptor.h:238
	void RegisterArenaReadCallbacks();

	// vertexdescriptor.h:238
	void RegisterArenaWriteCallbacks();

	// vertexdescriptor.h:238
	void EndianSwapUnfix();

	// vertexdescriptor.h:238
	void EndianSwapFixup();

	// vertexdescriptor.h:239
	int32_t AddRef();

	// vertexdescriptor.h:239
	int32_t RemoveRef();

	// vertexdescriptor.h:245
	uint32_t PS3GetNumStreams() const;

	// vertexdescriptor.h:246
	uint32_t PS3GetVertexTypesFlags() const;

	// vertexdescriptor.h:247
	uint16_t PS3GetFrequencyDividerOperation() const;

	// vertexdescriptor.h:248
	bool PS3HasInstanceData() const;

protected:
	// vertexdescriptor.h:252
	void VertexDescriptor();

	// vertexdescriptor.h:253
	void VertexDescriptor(const VertexDescriptor &);

	// vertexdescriptor.h:254
	void ~VertexDescriptor();

}

// vertexdescriptor.h:59
extern const uint32_t MaxNumElements = 16;

// vertexdescriptor.h:118
extern const uint32_t ELEMENTTYPEFLAG_TEX0 = 256;

// vertexdescriptor.h:119
extern const uint32_t ELEMENTTYPEFLAG_TEX1 = 512;

// vertexdescriptor.h:120
extern const uint32_t ELEMENTTYPEFLAG_TEX2 = 1024;

// vertexdescriptor.h:121
extern const uint32_t ELEMENTTYPEFLAG_TEX3 = 2048;

// vertexdescriptor.h:122
extern const uint32_t ELEMENTTYPEFLAG_TEX4 = 4096;

// vertexdescriptor.h:123
extern const uint32_t ELEMENTTYPEFLAG_TEX5 = 8192;

// vertexdescriptor.h:124
extern const uint32_t ELEMENTTYPEFLAG_TEX6 = 16384;

// vertexdescriptor.h:125
extern const uint32_t ELEMENTTYPEFLAG_TEX7 = 32768;

// vertexdescriptor.h:56
struct renderengine::VertexDescriptor {
	// vertexdescriptor.h:59
	extern const uint32_t MaxNumElements = 16;

	// vertexdescriptor.h:114
	extern const uint32_t ELEMENTTYPEFLAG_XYZ = 1;

	// vertexdescriptor.h:115
	extern const uint32_t ELEMENTTYPEFLAG_NORMAL = 4;

	// vertexdescriptor.h:116
	extern const uint32_t ELEMENTTYPEFLAG_VERTEXCOLOR = 8;

	// vertexdescriptor.h:118
	extern const uint32_t ELEMENTTYPEFLAG_TEX0 = 256;

	// vertexdescriptor.h:119
	extern const uint32_t ELEMENTTYPEFLAG_TEX1 = 512;

	// vertexdescriptor.h:120
	extern const uint32_t ELEMENTTYPEFLAG_TEX2 = 1024;

	// vertexdescriptor.h:121
	extern const uint32_t ELEMENTTYPEFLAG_TEX3 = 2048;

	// vertexdescriptor.h:122
	extern const uint32_t ELEMENTTYPEFLAG_TEX4 = 4096;

	// vertexdescriptor.h:123
	extern const uint32_t ELEMENTTYPEFLAG_TEX5 = 8192;

	// vertexdescriptor.h:124
	extern const uint32_t ELEMENTTYPEFLAG_TEX6 = 16384;

	// vertexdescriptor.h:125
	extern const uint32_t ELEMENTTYPEFLAG_TEX7 = 32768;

	// vertexdescriptor.h:127
	extern const uint32_t ELEMENTTYPEFLAG_INDICES = 128;

	// vertexdescriptor.h:128
	extern const uint32_t ELEMENTTYPEFLAG_WEIGHTS = 2;

	// vertexdescriptor.h:130
	extern const uint32_t ELEMENTTYPEFLAG_TANGENT = 16384;

	// vertexdescriptor.h:131
	extern const uint32_t ELEMENTTYPEFLAG_BINORMAL = 32768;

	// vertexdescriptor.h:132
	extern const uint32_t ELEMENTTYPEFLAG_SPECULAR = 16;

	// vertexdescriptor.h:141
	extern const uint32_t ELEMENTTYPEFLAG_TEX_MASK = 65280;

	// vertexdescriptor.h:143
	extern const uint32_t ELEMENTTYPEFLAG_MASK = 65535;

protected:
	// vertexdescriptor.h:257
	int32_t m_refCount;

	// vertexdescriptor.h:258
	uint32_t m_typesFlags;

	// vertexdescriptor.h:259
	uint16_t m_numStreams;

	// vertexdescriptor.h:260
	uint16_t m_numElements;

	// vertexdescriptor.h:261
	uint16_t m_frequencyDividerOperation;

	// vertexdescriptor.h:262
	uint16_t m_pad0;

	// vertexdescriptor.h:263
	renderengine::VertexDescriptor::Element[1] m_elements;

public:
	// vertexdescriptor.h:223
	ResourceDescriptor GetResourceDescriptor(const renderengine::VertexDescriptor::Parameters &);

	// vertexdescriptor.h:224
	VertexDescriptor * Initialize(const Resource &, const renderengine::VertexDescriptor::Parameters &);

	// vertexdescriptor.h:225
	void Release();

	// vertexdescriptor.h:226
	void Destruct(VertexDescriptor *);

	// vertexdescriptor.h:228
	void GetParameters(renderengine::VertexDescriptor::Parameters &) const;

	// vertexdescriptor.h:231
	uint32_t GetNumElements() const;

	// vertexdescriptor.h:232
	const renderengine::VertexDescriptor::Element * GetElements() const;

	// vertexdescriptor.h:233
	uint32_t GetStride() const;

	// vertexdescriptor.h:236
	RwBool AreEqual(const renderengine::VertexDescriptor *, const renderengine::VertexDescriptor *);

	// vertexdescriptor.h:238
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// vertexdescriptor.h:238
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// vertexdescriptor.h:238
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// vertexdescriptor.h:238
	void RegisterArenaReadCallbacks();

	// vertexdescriptor.h:238
	void RegisterArenaWriteCallbacks();

	// vertexdescriptor.h:238
	void EndianSwapUnfix();

	// vertexdescriptor.h:238
	void EndianSwapFixup();

	// vertexdescriptor.h:239
	int32_t AddRef();

	// vertexdescriptor.h:239
	int32_t RemoveRef();

	// vertexdescriptor.h:245
	uint32_t PS3GetNumStreams() const;

	// vertexdescriptor.h:246
	uint32_t PS3GetVertexTypesFlags() const;

	// vertexdescriptor.h:247
	uint16_t PS3GetFrequencyDividerOperation() const;

	// vertexdescriptor.h:248
	bool PS3HasInstanceData() const;

protected:
	// vertexdescriptor.h:252
	void VertexDescriptor();

	// vertexdescriptor.h:253
	void VertexDescriptor(const renderengine::VertexDescriptor &);

	// vertexdescriptor.h:254
	void ~VertexDescriptor();

}

