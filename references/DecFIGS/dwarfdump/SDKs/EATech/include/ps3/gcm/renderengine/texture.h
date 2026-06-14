// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct Texture {
		// texture.h:47
		enum Type {
			TYPE_NA = -1,
			TYPE_1D = 1,
			TYPE_2D = 2,
			TYPE_CUBE = 65538,
			TYPE_3D = 3,
			TYPE_FORCEENUMSIZEINT = 2147483647,
		}

		// texture.h:67
		struct Parameters {
		protected:
			// texture.h:111
			renderengine::Texture::Type type;

			// texture.h:112
			uint32_t flags;

			// texture.h:113
			uint32_t width;

			// texture.h:114
			uint32_t height;

			// texture.h:115
			uint32_t depth;

			// texture.h:116
			uint32_t pitch;

			// texture.h:117
			uint32_t mipLevels;

			// texture.h:118
			renderengine::PixelFormat format;

			// texture.h:121
			uint8_t multiSampleType;

			// texture.h:122
			int8_t tileIndex;

		public:
			// texture.h:68
			Parameters();

			// texture.h:80
			void SetType(renderengine::Texture::Type);

			// texture.h:81
			void SetFlags(uint32_t);

			// texture.h:82
			void SetWidth(uint32_t);

			// texture.h:83
			void SetHeight(uint32_t);

			// texture.h:84
			void SetDepth(uint32_t);

			// texture.h:85
			void SetPitch(uint32_t);

			// texture.h:86
			void SetMipLevels(uint32_t);

			// texture.h:87
			void SetFormat(renderengine::PixelFormat);

			// texture.h:88
			void PS3SetMultiSampleType(uint32_t);

			// texture.h:89
			void PS3SetTileIndex(int8_t);

			// texture.h:91
			renderengine::Texture::Type GetType() const;

			// texture.h:92
			uint32_t GetFlags() const;

			// texture.h:93
			uint32_t GetWidth() const;

			// texture.h:94
			uint32_t GetHeight() const;

			// texture.h:95
			uint32_t GetDepth() const;

			// texture.h:96
			uint32_t GetPitch() const;

			// texture.h:97
			uint32_t GetMipLevels() const;

			// texture.h:98
			renderengine::PixelFormat GetFormat() const;

			// texture.h:100
			uint32_t PS3GetMultiSampleType() const;

			// texture.h:101
			uint8_t PS3GetTileIndex() const;

		protected:
			// texture.h:105
			void PS3ConvertToPixelBufferParams(renderengine::PixelBuffer::Parameters &) const;

		}

		// texture.h:132
		struct Locked {
			// texture.h:133
			renderengine::Texture * texture;

			// texture.h:134
			void * pixelData;

			// texture.h:135
			uint32_t stride;

			// texture.h:136
			uint16_t width;

			// texture.h:137
			uint16_t height;

			// texture.h:138
			uint16_t volumeDepth;

			// texture.h:139
			uint8_t mipLevel;

			// texture.h:140
			uint8_t index;

			// texture.h:141
			uint32_t sliceStride;

			// texture.h:142
			uint32_t lockFlags;

		}

	}

}

// texture.h:26
struct renderengine::Texture {
	// texture.h:29
	extern const uint32_t MaxSize = 4096;

	// texture.h:30
	extern const uint32_t PS3MaxNumMipLevels = 13;

	// texture.h:32
	extern const uint32_t FLAG_DONTALLOCATE = 1;

	// texture.h:33
	extern const uint32_t FLAG_RENDERABLE = 2;

	// texture.h:34
	extern const uint32_t FLAG_PS3RENDERABLEDEPTH = 4;

	// texture.h:35
	extern const uint32_t FLAG_SYSTEM = 8;

	// texture.h:36
	extern const uint32_t FLAG_DYNAMIC = 8;

	// texture.h:38
	extern const uint32_t ALL_MIP_LEVELS;

	// texture.h:40
	extern const uint32_t LOCK_READ = 1;

	// texture.h:41
	extern const uint32_t LOCK_WRITE = 2;

	// texture.h:42
	extern const uint32_t LOCK_READWRITE = 3;

	// texture.h:236
	uint8_t m_format;

	// texture.h:237
	uint8_t m_mipmap;

	// texture.h:238
	uint8_t m_dimension;

	// texture.h:239
	uint8_t m_cubemap;

	// texture.h:241
	uint32_t m_remap;

	// texture.h:243
	uint16_t m_width;

	// texture.h:244
	uint16_t m_height;

	// texture.h:245
	uint16_t m_depth;

	// texture.h:246
	uint8_t m_location;

	// texture.h:247
	uint8_t m_padding;

	// texture.h:249
	uint32_t m_pitch;

	// texture.h:250
	uint32_t m_offset;

	// texture.h:254
	void * m_buffer;

	// texture.h:256
	renderengine::Texture::Type m_storeType;

	// texture.h:257
	uint32_t m_storeFlags;

public:
	// texture.h:148
	ResourceDescriptor GetResourceDescriptor(const renderengine::Texture::Parameters &);

	// texture.h:149
	renderengine::Texture * Initialize(const Resource &, const renderengine::Texture::Parameters &);

	// texture.h:150
	void Destruct(renderengine::Texture *);

	// texture.h:151
	void Release();

	// texture.h:153
	void GetParameters(renderengine::Texture::Parameters &) const;

	// texture.h:154
	renderengine::Texture::Type GetType() const;

	// texture.h:156
	uint32_t GetWidth() const;

	// texture.h:157
	uint32_t GetHeight() const;

	// texture.h:158
	uint32_t GetDepth() const;

	// texture.h:159
	uint32_t GetNumMipLevels() const;

	// texture.h:160
	uint32_t GetArraySize() const;

	// texture.h:165
	bool Lock(uint32_t, uint32_t, uint32_t, renderengine::Texture::Locked &);

	// texture.h:166
	void Unlock(const renderengine::Texture::Locked &);

	// texture.h:168
	ResourceDescriptor GetPixelBufferResourceDescriptor(uint32_t, uint32_t) const;

	// texture.h:169
	PixelBuffer * InitializePixelBuffer(const Resource &, uint32_t, uint32_t) const;

	// texture.h:171
	ResourceDescriptor GetPixelBufferResourceDescriptor(uint32_t, uint32_t, renderengine::PixelBuffer::Parameters &) const;

	// texture.h:172
	PixelBuffer * InitializePixelBuffer(const Resource &, uint32_t, uint32_t, renderengine::PixelBuffer::Parameters &) const;

	// texture.h:174
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// texture.h:174
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// texture.h:174
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// texture.h:174
	void RegisterArenaReadCallbacks();

	// texture.h:174
	void RegisterArenaWriteCallbacks();

	// texture.h:174
	void EndianSwapUnfix();

	// texture.h:174
	void EndianSwapFixup();

	// texture.h:175
	int32_t AddRef();

	// texture.h:175
	int32_t RemoveRef();

	// texture.h:182
	uint32_t GetDefaultNumMipLevels(uint32_t, uint32_t);

	// texture.h:185
	uint8_t PS3DimensionFromType(renderengine::Texture::Type);

	// texture.h:186
	uint8_t PS3CubeMapFromType(renderengine::Texture::Type);

	// texture.h:188
	uint16_t PS3CalculateMipLinearDimension(uint16_t, uint8_t);

	// texture.h:189
	uint16_t PS3CalculateMipSwizzledDimension(uint16_t, uint8_t);

	// texture.h:190
	uint16_t PS3CalculateMipCompressedDimension(uint16_t, uint8_t);

	// texture.h:193
	uint32_t PS3CalculateMipLinearBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, uint8_t);

	// texture.h:195
	uint32_t PS3CalculateMipSwizzledBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, uint8_t);

	// texture.h:197
	uint32_t PS3CalculateMipCompressedBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, uint8_t);

	// texture.h:200
	uint32_t PS3CalculateLinearBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t);

	// texture.h:202
	uint32_t PS3CalculateSwizzledBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t);

	// texture.h:204
	uint32_t PS3CalculateCompressedBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t);

	// texture.h:208
	uint32_t PS3CalculateLinearBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t);

	// texture.h:211
	uint32_t PS3CalculateSwizzledBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t);

	// texture.h:214
	uint32_t PS3CalculateCompressedBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t);

	// texture.h:225
	uint32_t PS3CalculateBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t, renderengine::PixelFormat);

	// texture.h:227
	void PS3CalculatePixelBufferParameters(renderengine::PixelBuffer::Parameters &, uint8_t) const;

protected:
	// texture.h:268
	void Texture();

	// texture.h:269
	void Texture(const Texture &);

	// texture.h:270
	void ~Texture();

}

// texture.h:35
extern const uint32_t FLAG_SYSTEM = 8;

// texture.h:40
extern const uint32_t LOCK_READ = 1;

// texture.h:41
extern const uint32_t LOCK_WRITE = 2;

// texture.h:33
extern const uint32_t FLAG_RENDERABLE = 2;

// texture.h:34
extern const uint32_t FLAG_PS3RENDERABLEDEPTH = 4;

// texture.h:36
extern const uint32_t FLAG_DYNAMIC = 8;

// texture.h:26
struct renderengine::Texture {
	// texture.h:29
	extern const uint32_t MaxSize = 4096;

	// texture.h:30
	extern const uint32_t PS3MaxNumMipLevels = 13;

	// texture.h:32
	extern const uint32_t FLAG_DONTALLOCATE = 1;

	// texture.h:33
	extern const uint32_t FLAG_RENDERABLE = 2;

	// texture.h:34
	extern const uint32_t FLAG_PS3RENDERABLEDEPTH = 4;

	// texture.h:35
	extern const uint32_t FLAG_SYSTEM = 8;

	// texture.h:36
	extern const uint32_t FLAG_DYNAMIC = 8;

	// texture.h:38
	extern const uint32_t ALL_MIP_LEVELS;

	// texture.h:40
	extern const uint32_t LOCK_READ = 1;

	// texture.h:41
	extern const uint32_t LOCK_WRITE = 2;

	// texture.h:42
	extern const uint32_t LOCK_READWRITE = 3;

	// texture.h:236
	uint8_t m_format;

	// texture.h:237
	uint8_t m_mipmap;

	// texture.h:238
	uint8_t m_dimension;

	// texture.h:239
	uint8_t m_cubemap;

	// texture.h:241
	uint32_t m_remap;

	// texture.h:243
	uint16_t m_width;

	// texture.h:244
	uint16_t m_height;

	// texture.h:245
	uint16_t m_depth;

	// texture.h:246
	uint8_t m_location;

	// texture.h:247
	uint8_t m_padding;

	// texture.h:249
	uint32_t m_pitch;

	// texture.h:250
	uint32_t m_offset;

	// texture.h:254
	void * m_buffer;

	// texture.h:256
	renderengine::Texture::Type m_storeType;

	// texture.h:257
	uint32_t m_storeFlags;

public:
	// texture.h:148
	ResourceDescriptor GetResourceDescriptor(const renderengine::Texture::Parameters &);

	// texture.h:149
	renderengine::Texture * Initialize(const Resource &, const renderengine::Texture::Parameters &);

	// texture.h:150
	void Destruct(renderengine::Texture *);

	// texture.h:151
	void Release();

	// texture.h:153
	void GetParameters(renderengine::Texture::Parameters &) const;

	// texture.h:154
	renderengine::Texture::Type GetType() const;

	// texture.h:156
	uint32_t GetWidth() const;

	// texture.h:157
	uint32_t GetHeight() const;

	// texture.h:158
	uint32_t GetDepth() const;

	// texture.h:159
	uint32_t GetNumMipLevels() const;

	// texture.h:160
	uint32_t GetArraySize() const;

	// texture.h:165
	bool Lock(uint32_t, uint32_t, uint32_t, renderengine::Texture::Locked &);

	// texture.h:166
	void Unlock(const renderengine::Texture::Locked &);

	// texture.h:168
	ResourceDescriptor GetPixelBufferResourceDescriptor(uint32_t, uint32_t) const;

	// texture.h:169
	renderengine::PixelBuffer * InitializePixelBuffer(const Resource &, uint32_t, uint32_t) const;

	// texture.h:171
	ResourceDescriptor GetPixelBufferResourceDescriptor(uint32_t, uint32_t, renderengine::PixelBuffer::Parameters &) const;

	// texture.h:172
	renderengine::PixelBuffer * InitializePixelBuffer(const Resource &, uint32_t, uint32_t, renderengine::PixelBuffer::Parameters &) const;

	// texture.h:174
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// texture.h:174
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// texture.h:174
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// texture.h:174
	void RegisterArenaReadCallbacks();

	// texture.h:174
	void RegisterArenaWriteCallbacks();

	// texture.h:174
	void EndianSwapUnfix();

	// texture.h:174
	void EndianSwapFixup();

	// texture.h:175
	int32_t AddRef();

	// texture.h:175
	int32_t RemoveRef();

	// texture.h:182
	uint32_t GetDefaultNumMipLevels(uint32_t, uint32_t);

	// texture.h:185
	uint8_t PS3DimensionFromType(renderengine::Texture::Type);

	// texture.h:186
	uint8_t PS3CubeMapFromType(renderengine::Texture::Type);

	// texture.h:188
	uint16_t PS3CalculateMipLinearDimension(uint16_t, uint8_t);

	// texture.h:189
	uint16_t PS3CalculateMipSwizzledDimension(uint16_t, uint8_t);

	// texture.h:190
	uint16_t PS3CalculateMipCompressedDimension(uint16_t, uint8_t);

	// texture.h:193
	uint32_t PS3CalculateMipLinearBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, uint8_t);

	// texture.h:195
	uint32_t PS3CalculateMipSwizzledBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, uint8_t);

	// texture.h:197
	uint32_t PS3CalculateMipCompressedBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, uint8_t);

	// texture.h:200
	uint32_t PS3CalculateLinearBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t);

	// texture.h:202
	uint32_t PS3CalculateSwizzledBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t);

	// texture.h:204
	uint32_t PS3CalculateCompressedBufferSize(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t);

	// texture.h:208
	uint32_t PS3CalculateLinearBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t);

	// texture.h:211
	uint32_t PS3CalculateSwizzledBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t);

	// texture.h:214
	uint32_t PS3CalculateCompressedBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t);

	// texture.h:225
	uint32_t PS3CalculateBufferOffset(uint16_t, uint16_t, uint16_t, uint32_t, uint32_t, renderengine::Texture::Type, uint8_t, uint8_t, uint32_t, renderengine::PixelFormat);

	// texture.h:227
	void PS3CalculatePixelBufferParameters(renderengine::PixelBuffer::Parameters &, uint8_t) const;

protected:
	// texture.h:268
	void Texture();

	// texture.h:269
	void Texture(const Texture &);

	// texture.h:270
	void ~Texture();

}

