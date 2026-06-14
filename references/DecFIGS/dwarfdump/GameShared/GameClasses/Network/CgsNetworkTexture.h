// CgsNetworkTexture.h:50
struct CgsNetwork::NetworkTexture {
private:
	// CgsNetworkTexture.h:143
	HeapMalloc * mpHeapMalloc;

	// CgsNetworkTexture.h:144
	int32_t miBitsPerPixel;

	// CgsNetworkTexture.h:145
	int32_t miWidth;

	// CgsNetworkTexture.h:146
	int32_t miHeight;

	// CgsNetworkTexture.h:147
	renderengine::PixelFormat mFormat;

	// CgsNetworkTexture.h:148
	char * mpcTexture;

	// CgsNetworkTexture.h:149
	bool mbTextureAllocatedFromHeap;

	// CgsNetworkTexture.h:151
	bool mbIsUncompressedYUV;

public:
	// CgsNetworkTexture.h:55
	void Construct();

	// CgsNetworkTexture.h:63
	bool Prepare(HeapMalloc *, int32_t, int32_t, renderengine::PixelFormat);

	// CgsNetworkTexture.h:72
	bool Prepare(char *, int32_t, int32_t, int32_t, renderengine::PixelFormat);

	// CgsNetworkTexture.h:76
	bool Release();

	// CgsNetworkTexture.h:80
	void Destruct();

	// CgsNetworkTexture.h:83
	int32_t GetHeight() const;

	// CgsNetworkTexture.h:86
	int32_t GetWidth() const;

	// CgsNetworkTexture.h:89
	int32_t GetBitsPerPixel() const;

	// CgsNetworkTexture.h:92
	int32_t GetStride() const;

	// CgsNetworkTexture.h:95
	renderengine::PixelFormat GetFormat() const;

	// CgsNetworkTexture.h:98
	char * GetTexture();

	// CgsNetworkTexture.h:101
	char * GetTexture() const;

	// CgsNetworkTexture.h:105
	int32_t GetTextureSize() const;

	// CgsNetworkTexture.h:109
	void ClearPixels();

	// CgsNetworkTexture.h:115
	void SetIsUncompressedYUV(bool);

	// CgsNetworkTexture.h:119
	bool IsUncompressedYUV() const;

	// CgsNetworkTexture.h:128
	int32_t GetWidthInBlocks() const;

	// CgsNetworkTexture.h:132
	int32_t GetHeightInBlocks() const;

	// CgsNetworkTexture.h:139
	void CopyPixelData(const char *, int32_t, renderengine::PixelFormat);

private:
	// CgsNetworkTexture.h:155
	int32_t GetBitsPerPixel(renderengine::PixelFormat);

}

// CgsNetworkTexture.h:50
struct CgsNetwork::NetworkTexture {
private:
	// CgsNetworkTexture.h:143
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// CgsNetworkTexture.h:144
	int32_t miBitsPerPixel;

	// CgsNetworkTexture.h:145
	int32_t miWidth;

	// CgsNetworkTexture.h:146
	int32_t miHeight;

	// CgsNetworkTexture.h:147
	renderengine::PixelFormat mFormat;

	// CgsNetworkTexture.h:148
	char * mpcTexture;

	// CgsNetworkTexture.h:149
	bool mbTextureAllocatedFromHeap;

	// CgsNetworkTexture.h:151
	bool mbIsUncompressedYUV;

public:
	// CgsNetworkTexture.h:55
	void Construct();

	// CgsNetworkTexture.h:63
	bool Prepare(CgsMemory::HeapMalloc *, int32_t, int32_t, renderengine::PixelFormat);

	// CgsNetworkTexture.h:72
	bool Prepare(char *, int32_t, int32_t, int32_t, renderengine::PixelFormat);

	// CgsNetworkTexture.h:76
	bool Release();

	// CgsNetworkTexture.h:80
	void Destruct();

	// CgsNetworkTexture.h:83
	int32_t GetHeight() const;

	// CgsNetworkTexture.h:86
	int32_t GetWidth() const;

	// CgsNetworkTexture.h:89
	int32_t GetBitsPerPixel() const;

	// CgsNetworkTexture.h:92
	int32_t GetStride() const;

	// CgsNetworkTexture.h:95
	renderengine::PixelFormat GetFormat() const;

	// CgsNetworkTexture.h:98
	char * GetTexture();

	// CgsNetworkTexture.h:101
	char * GetTexture() const;

	// CgsNetworkTexture.h:105
	int32_t GetTextureSize() const;

	// CgsNetworkTexture.h:109
	void ClearPixels();

	// CgsNetworkTexture.h:115
	void SetIsUncompressedYUV(bool);

	// CgsNetworkTexture.h:119
	bool IsUncompressedYUV() const;

	// CgsNetworkTexture.h:128
	int32_t GetWidthInBlocks() const;

	// CgsNetworkTexture.h:132
	int32_t GetHeightInBlocks() const;

	// CgsNetworkTexture.h:139
	void CopyPixelData(const char *, int32_t, renderengine::PixelFormat);

private:
	// CgsNetworkTexture.h:155
	int32_t GetBitsPerPixel(renderengine::PixelFormat);

}

