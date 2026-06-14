// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct PixelBuffer {
		// pixelbuffer.h:57
		enum Type {
			TYPE_NA = -1,
			TYPE_RENDERTARGET = 0,
			TYPE_DEPTHSTENCIL = 1,
			TYPE_FORCEENUMSIZEINT = 2147483647,
		}

		// pixelbuffer.h:69
		struct Parameters {
			// pixelbuffer.h:127
			renderengine::PixelBuffer::Type type;

			// pixelbuffer.h:128
			uint32_t flags;

			// pixelbuffer.h:130
			uint32_t width;

			// pixelbuffer.h:131
			uint32_t height;

			// pixelbuffer.h:132
			uint32_t pitch;

			// pixelbuffer.h:134
			renderengine::PixelFormat format;

			// pixelbuffer.h:135
			uint8_t multiSampleType;

			// pixelbuffer.h:137
			int8_t tileIndex;

			// pixelbuffer.h:138
			int8_t displayID;

			// pixelbuffer.h:139
			int8_t zCullIndex;

			// pixelbuffer.h:140
			int32_t zCullAddress;

			// pixelbuffer.h:141
			uint32_t zCullDirection;

			// pixelbuffer.h:142
			uint32_t zCullFormat;

			// pixelbuffer.h:143
			bool compressionEnable;

			// pixelbuffer.h:144
			uint16_t compressionBase;

			// pixelbuffer.h:145
			uint8_t compressionBank;

		public:
			// pixelbuffer.h:70
			Parameters();

			// pixelbuffer.h:89
			void SetType(renderengine::PixelBuffer::Type);

			// pixelbuffer.h:90
			void SetFlags(uint32_t);

			// pixelbuffer.h:91
			void SetWidth(uint32_t);

			// pixelbuffer.h:92
			void SetHeight(uint32_t);

			// pixelbuffer.h:93
			void SetPitch(uint32_t);

			// pixelbuffer.h:94
			void SetFormat(renderengine::PixelFormat);

			// pixelbuffer.h:95
			void SetMultiSampleType(uint32_t);

			// pixelbuffer.h:96
			void PS3SetTileIndex(uint8_t);

			// pixelbuffer.h:97
			void PS3SetDisplayID(uint8_t);

			// pixelbuffer.h:98
			void PS3SetZCullIndex(uint8_t);

			// pixelbuffer.h:99
			void PS3SetZCullAddress(uint32_t);

			// pixelbuffer.h:100
			void PS3SetZCullDirection(uint32_t);

			// pixelbuffer.h:101
			void PS3SetZCullFormat(uint32_t);

			// pixelbuffer.h:102
			void PS3SetCompressionEnable(bool);

			// pixelbuffer.h:103
			void PS3SetCompressionBase(uint16_t);

			// pixelbuffer.h:104
			void PS3SetCompressionBank(uint8_t);

			// pixelbuffer.h:106
			renderengine::PixelBuffer::Type GetType() const;

			// pixelbuffer.h:107
			uint32_t GetFlags() const;

			// pixelbuffer.h:108
			uint32_t GetWidth() const;

			// pixelbuffer.h:109
			uint32_t GetHeight() const;

			// pixelbuffer.h:110
			uint32_t GetPitch() const;

			// pixelbuffer.h:111
			renderengine::PixelFormat GetFormat() const;

			// pixelbuffer.h:112
			uint32_t GetMultiSampleType() const;

			// pixelbuffer.h:113
			uint8_t PS3GetTileIndex() const;

			// pixelbuffer.h:114
			uint8_t PS3GetDisplayID() const;

			// pixelbuffer.h:115
			uint8_t PS3GetZCullIndex() const;

			// pixelbuffer.h:116
			uint32_t PS3GetZCullAddress() const;

			// pixelbuffer.h:117
			uint32_t PS3GetZCullDirection() const;

			// pixelbuffer.h:118
			uint32_t PS3GetZCullFormat() const;

			// pixelbuffer.h:119
			bool PS3GetCompressionEnable() const;

			// pixelbuffer.h:123
			uint8_t PS3GetCompressionMode() const;

		}

		// pixelbuffer.h:169
		struct PS3TextureToSurfaceFormat {
			// pixelbuffer.h:170
			uint32_t textureBaseFormat;

			// pixelbuffer.h:171
			uint32_t surfaceFormat;

		}

	}

}

// pixelbuffer.h:50
struct renderengine::PixelBuffer {
	// pixelbuffer.h:53
	extern const uint32_t FLAG_DONTALLOCATE = 1;

	// pixelbuffer.h:54
	extern const uint32_t FLAG_SCAN_OUT = 2;

	// pixelbuffer.h:55
	extern const uint32_t FLAG_SYSTEM = 4;

	// pixelbuffer.h:173
	extern renderengine::PixelBuffer::PS3TextureToSurfaceFormat[] m_pixelFormatToColorSurfaceFormatTable;

	// pixelbuffer.h:174
	extern renderengine::PixelBuffer::PS3TextureToSurfaceFormat[] m_pixelFormatToDepthSurfaceFormatTable;

protected:
	// pixelbuffer.h:217
	uint32_t m_offset;

	// pixelbuffer.h:218
	uint32_t m_size;

	// pixelbuffer.h:219
	uint16_t m_width;

	// pixelbuffer.h:220
	uint16_t m_height;

	// pixelbuffer.h:223
	uint8_t m_displayBufferID;

	// pixelbuffer.h:226
	uint8_t m_zCullIndex;

	// pixelbuffer.h:227
	uint32_t m_zCullAddress;

	// pixelbuffer.h:228
	uint32_t m_zCullDirection;

	// pixelbuffer.h:229
	uint32_t m_zCullFormat;

	// pixelbuffer.h:231
	uint32_t m_sFunc;

	// pixelbuffer.h:232
	uint32_t m_sRef;

	// pixelbuffer.h:233
	uint32_t m_sMask;

	// pixelbuffer.h:236
	uint32_t m_tileIndex;

	// pixelbuffer.h:237
	uint32_t m_pitch;

	// pixelbuffer.h:239
	uint8_t m_compressionMode;

	// pixelbuffer.h:241
	uint8_t m_format;

	// pixelbuffer.h:242
	uint8_t m_location;

	// pixelbuffer.h:244
	uint8_t m_antiAlias;

	// pixelbuffer.h:248
	renderengine::PixelFormat m_pixelFormat;

	// pixelbuffer.h:249
	renderengine::PixelBuffer::Type m_type;

	// pixelbuffer.h:250
	uint32_t m_flags;

	// pixelbuffer.h:252
	void * m_buffer;

	// pixelbuffer.h:253
	uint16_t m_compressionBase;

	// pixelbuffer.h:254
	uint8_t m_compressionBank;

public:
	// pixelbuffer.h:150
	ResourceDescriptor GetResourceDescriptor(const renderengine::PixelBuffer::Parameters &);

	// pixelbuffer.h:151
	PixelBuffer * Initialize(const Resource &, const renderengine::PixelBuffer::Parameters &);

	// pixelbuffer.h:152
	void Destruct(PixelBuffer *);

	// pixelbuffer.h:153
	void Release();

	// pixelbuffer.h:154
	void GetParameters(renderengine::PixelBuffer::Parameters &) const;

	// pixelbuffer.h:156
	renderengine::PixelBuffer::Type GetType() const;

	// pixelbuffer.h:157
	uint32_t GetWidth() const;

	// pixelbuffer.h:158
	uint32_t GetHeight() const;

	// pixelbuffer.h:160
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// pixelbuffer.h:160
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// pixelbuffer.h:160
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// pixelbuffer.h:160
	void RegisterArenaReadCallbacks();

	// pixelbuffer.h:160
	void RegisterArenaWriteCallbacks();

	// pixelbuffer.h:160
	void EndianSwapUnfix();

	// pixelbuffer.h:160
	void EndianSwapFixup();

	// pixelbuffer.h:161
	int32_t AddRef();

	// pixelbuffer.h:161
	int32_t RemoveRef();

	// pixelbuffer.h:176
	uint32_t PS3PixelFormatToSurfaceFormat(renderengine::PixelFormat);

	// pixelbuffer.h:177
	uint32_t PS3GetAAPitchFactor(uint32_t);

	// pixelbuffer.h:178
	uint32_t PS3GetAAHeightFactor(uint32_t);

	// pixelbuffer.h:180
	uint32_t PS3GetColorDepth(uint32_t);

	// pixelbuffer.h:181
	uint32_t PS3GetDepthStencilDepth(uint32_t);

	// pixelbuffer.h:183
	renderengine::PixelFormat PS3GetFormat() const;

	// pixelbuffer.h:184
	uint8_t PS3GetSurfaceFormat() const;

	// pixelbuffer.h:185
	uint32_t PS3GetFlags() const;

	// pixelbuffer.h:186
	uint16_t PS3GetWidth() const;

	// pixelbuffer.h:187
	uint16_t PS3GetHeight() const;

	// pixelbuffer.h:188
	uint32_t PS3GetPitch() const;

	// pixelbuffer.h:189
	uint8_t PS3GetLocation() const;

	// pixelbuffer.h:190
	uint32_t PS3GetOffset() const;

	// pixelbuffer.h:191
	uint8_t PS3GetAntiAliasType() const;

	// pixelbuffer.h:192
	uint8_t PS3GetDisplayBufferID() const;

	// pixelbuffer.h:193
	uint32_t PS3IsSwizzled() const;

	// pixelbuffer.h:194
	void * PS3GetBuffer() const;

	// pixelbuffer.h:199
	void PS3CalculateBufferProperties(const renderengine::PixelBuffer::Parameters &, uint32_t &, uint32_t &, uint32_t &);

	// pixelbuffer.h:202
	ResourceDescriptor PS3GetProxyResourceDescriptor();

	// pixelbuffer.h:203
	PixelBuffer * PS3InitializeProxy(const Resource &, const PixelBuffer *);

	// pixelbuffer.h:204
	void PS3UpdateProxy(const PixelBuffer *);

	// pixelbuffer.h:206
	ResourceDescriptor GetTextureResourceDescriptor() const;

	// pixelbuffer.h:207
	renderengine::Texture * InitializeTexture(const Resource &) const;

protected:
	// pixelbuffer.h:259
	void PixelBuffer();

	// pixelbuffer.h:260
	void PixelBuffer(const PixelBuffer &);

	// pixelbuffer.h:261
	void ~PixelBuffer();

}

// pixelbuffer.h:173
extern renderengine::PixelBuffer::PS3TextureToSurfaceFormat[] m_pixelFormatToColorSurfaceFormatTable;

// pixelbuffer.h:174
extern renderengine::PixelBuffer::PS3TextureToSurfaceFormat[] m_pixelFormatToDepthSurfaceFormatTable;

// pixelbuffer.h:53
extern const uint32_t FLAG_DONTALLOCATE = 1;

// pixelbuffer.h:55
extern const uint32_t FLAG_SYSTEM = 4;

// pixelbuffer.h:50
struct renderengine::PixelBuffer {
	// pixelbuffer.h:53
	extern const uint32_t FLAG_DONTALLOCATE = 1;

	// pixelbuffer.h:54
	extern const uint32_t FLAG_SCAN_OUT = 2;

	// pixelbuffer.h:55
	extern const uint32_t FLAG_SYSTEM = 4;

	// pixelbuffer.h:173
	extern renderengine::PixelBuffer::PS3TextureToSurfaceFormat[] m_pixelFormatToColorSurfaceFormatTable;

	// pixelbuffer.h:174
	extern renderengine::PixelBuffer::PS3TextureToSurfaceFormat[] m_pixelFormatToDepthSurfaceFormatTable;

protected:
	// pixelbuffer.h:217
	uint32_t m_offset;

	// pixelbuffer.h:218
	uint32_t m_size;

	// pixelbuffer.h:219
	uint16_t m_width;

	// pixelbuffer.h:220
	uint16_t m_height;

	// pixelbuffer.h:223
	uint8_t m_displayBufferID;

	// pixelbuffer.h:226
	uint8_t m_zCullIndex;

	// pixelbuffer.h:227
	uint32_t m_zCullAddress;

	// pixelbuffer.h:228
	uint32_t m_zCullDirection;

	// pixelbuffer.h:229
	uint32_t m_zCullFormat;

	// pixelbuffer.h:231
	uint32_t m_sFunc;

	// pixelbuffer.h:232
	uint32_t m_sRef;

	// pixelbuffer.h:233
	uint32_t m_sMask;

	// pixelbuffer.h:236
	uint32_t m_tileIndex;

	// pixelbuffer.h:237
	uint32_t m_pitch;

	// pixelbuffer.h:239
	uint8_t m_compressionMode;

	// pixelbuffer.h:241
	uint8_t m_format;

	// pixelbuffer.h:242
	uint8_t m_location;

	// pixelbuffer.h:244
	uint8_t m_antiAlias;

	// pixelbuffer.h:248
	renderengine::PixelFormat m_pixelFormat;

	// pixelbuffer.h:249
	renderengine::PixelBuffer::Type m_type;

	// pixelbuffer.h:250
	uint32_t m_flags;

	// pixelbuffer.h:252
	void * m_buffer;

	// pixelbuffer.h:253
	uint16_t m_compressionBase;

	// pixelbuffer.h:254
	uint8_t m_compressionBank;

public:
	// pixelbuffer.h:150
	ResourceDescriptor GetResourceDescriptor(const renderengine::PixelBuffer::Parameters &);

	// pixelbuffer.h:151
	renderengine::PixelBuffer * Initialize(const Resource &, const renderengine::PixelBuffer::Parameters &);

	// pixelbuffer.h:152
	void Destruct(renderengine::PixelBuffer *);

	// pixelbuffer.h:153
	void Release();

	// pixelbuffer.h:154
	void GetParameters(renderengine::PixelBuffer::Parameters &) const;

	// pixelbuffer.h:156
	renderengine::PixelBuffer::Type GetType() const;

	// pixelbuffer.h:157
	uint32_t GetWidth() const;

	// pixelbuffer.h:158
	uint32_t GetHeight() const;

	// pixelbuffer.h:160
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// pixelbuffer.h:160
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// pixelbuffer.h:160
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// pixelbuffer.h:160
	void RegisterArenaReadCallbacks();

	// pixelbuffer.h:160
	void RegisterArenaWriteCallbacks();

	// pixelbuffer.h:160
	void EndianSwapUnfix();

	// pixelbuffer.h:160
	void EndianSwapFixup();

	// pixelbuffer.h:161
	int32_t AddRef();

	// pixelbuffer.h:161
	int32_t RemoveRef();

	// pixelbuffer.h:176
	uint32_t PS3PixelFormatToSurfaceFormat(renderengine::PixelFormat);

	// pixelbuffer.h:177
	uint32_t PS3GetAAPitchFactor(uint32_t);

	// pixelbuffer.h:178
	uint32_t PS3GetAAHeightFactor(uint32_t);

	// pixelbuffer.h:180
	uint32_t PS3GetColorDepth(uint32_t);

	// pixelbuffer.h:181
	uint32_t PS3GetDepthStencilDepth(uint32_t);

	// pixelbuffer.h:183
	renderengine::PixelFormat PS3GetFormat() const;

	// pixelbuffer.h:184
	uint8_t PS3GetSurfaceFormat() const;

	// pixelbuffer.h:185
	uint32_t PS3GetFlags() const;

	// pixelbuffer.h:186
	uint16_t PS3GetWidth() const;

	// pixelbuffer.h:187
	uint16_t PS3GetHeight() const;

	// pixelbuffer.h:188
	uint32_t PS3GetPitch() const;

	// pixelbuffer.h:189
	uint8_t PS3GetLocation() const;

	// pixelbuffer.h:190
	uint32_t PS3GetOffset() const;

	// pixelbuffer.h:191
	uint8_t PS3GetAntiAliasType() const;

	// pixelbuffer.h:192
	uint8_t PS3GetDisplayBufferID() const;

	// pixelbuffer.h:193
	uint32_t PS3IsSwizzled() const;

	// pixelbuffer.h:194
	void * PS3GetBuffer() const;

	// pixelbuffer.h:199
	void PS3CalculateBufferProperties(const renderengine::PixelBuffer::Parameters &, uint32_t &, uint32_t &, uint32_t &);

	// pixelbuffer.h:202
	ResourceDescriptor PS3GetProxyResourceDescriptor();

	// pixelbuffer.h:203
	renderengine::PixelBuffer * PS3InitializeProxy(const Resource &, const PixelBuffer *);

	// pixelbuffer.h:204
	void PS3UpdateProxy(const PixelBuffer *);

	// pixelbuffer.h:206
	ResourceDescriptor GetTextureResourceDescriptor() const;

	// pixelbuffer.h:207
	renderengine::Texture * InitializeTexture(const Resource &) const;

protected:
	// pixelbuffer.h:259
	void PixelBuffer();

	// pixelbuffer.h:260
	void PixelBuffer(const PixelBuffer &);

	// pixelbuffer.h:261
	void ~PixelBuffer();

}

