// CgsNetworkTextureDXTCompress.h:51
struct CgsNetwork::NetworkTextureDXTCompress {
private:
	// CgsNetworkTextureDXTCompress.h:117
	extern const int32_t KI_NUM_IMAGE_BUFFERS = 2;

	// CgsNetworkTextureDXTCompress.h:119
	Job mDXTCompressJob;

	// CgsNetworkTextureDXTCompress.h:120
	Job mDXTDecodeJob;

	// CgsNetworkTextureDXTCompress.h:121
	DXTCompressData mDXTCompressData;

	// CgsNetworkTextureDXTCompress.h:122
	DXTDecodeData mDXTDecodeData;

	// CgsNetworkTextureDXTCompress.h:123
	int32_t miWriteToSource;

	// CgsNetworkTextureDXTCompress.h:124
	int32_t miJobReadFromSource;

	// CgsNetworkTextureDXTCompress.h:125
	int32_t miJobWriteToTexture;

	// CgsNetworkTextureDXTCompress.h:126
	int32_t miReadFromTexture;

	// CgsNetworkTextureDXTCompress.h:127
	char *[2] mapUncompressedBuffers;

	// CgsNetworkTextureDXTCompress.h:128
	char *[2] mapCompressedBuffers;

	// CgsNetworkTextureDXTCompress.h:129
	bool mbRunningCompressionJob;

	// CgsNetworkTextureDXTCompress.h:130
	bool mbNewImageToCompress;

	// CgsNetworkTextureDXTCompress.h:131
	bool mbRunningDecodeJob;

	// CgsNetworkTextureDXTCompress.h:132
	bool mbNewImageToDecode;

	// CgsNetworkTextureDXTCompress.h:133
	HeapMalloc * mpHeapMalloc;

	// Unknown accessibility
	// CgsNetworkTextureDXTCompress.h:40
	typedef void (*)(void *, void *) CompressionCompleteCallback;

	// CgsNetworkTextureDXTCompress.h:134
	NetworkTextureDXTCompress::CompressionCompleteCallback mCompressionCompleteCallback;

	// CgsNetworkTextureDXTCompress.h:135
	void * mpCompressionCompleteData;

	// CgsNetworkTextureDXTCompress.h:136
	NetworkTextureDXTCompress::CompressionCompleteCallback mDecodeCompleteCallback;

	// CgsNetworkTextureDXTCompress.h:137
	void * mpDecodeCompleteData;

	// CgsNetworkTextureDXTCompress.h:140
	int32_t miUncompressedBufferSize;

	// CgsNetworkTextureDXTCompress.h:141
	int32_t miCompressedBufferSize;

public:
	// CgsNetworkTextureDXTCompress.h:56
	void Construct();

	// CgsNetworkTextureDXTCompress.h:63
	bool Prepare(HeapMalloc *, int32_t, int32_t);

	// CgsNetworkTextureDXTCompress.h:67
	bool Release();

	// CgsNetworkTextureDXTCompress.h:71
	void Destruct();

	// CgsNetworkTextureDXTCompress.h:75
	void Update();

	// CgsNetworkTextureDXTCompress.h:90
	void SetNewTextureToCompress(char *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, renderengine::PixelFormat, bool, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// CgsNetworkTextureDXTCompress.h:96
	void GetCompressedTexture(char *, int32_t);

	// CgsNetworkTextureDXTCompress.h:106
	void SetNewTextureToDecompress(char *, int32_t, int32_t, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// CgsNetworkTextureDXTCompress.h:112
	void GetDecompressedTexture(char *, int32_t);

}

// CgsNetworkTextureDXTCompress.h:117
extern const int32_t KI_NUM_IMAGE_BUFFERS = 2;

// CgsNetworkTextureDXTCompress.h:51
struct CgsNetwork::NetworkTextureDXTCompress {
private:
	// CgsNetworkTextureDXTCompress.h:117
	extern const int32_t KI_NUM_IMAGE_BUFFERS = 2;

	// CgsNetworkTextureDXTCompress.h:119
	Job mDXTCompressJob;

	// CgsNetworkTextureDXTCompress.h:120
	Job mDXTDecodeJob;

	// CgsNetworkTextureDXTCompress.h:121
	DXTCompressData mDXTCompressData;

	// CgsNetworkTextureDXTCompress.h:122
	DXTDecodeData mDXTDecodeData;

	// CgsNetworkTextureDXTCompress.h:123
	int32_t miWriteToSource;

	// CgsNetworkTextureDXTCompress.h:124
	int32_t miJobReadFromSource;

	// CgsNetworkTextureDXTCompress.h:125
	int32_t miJobWriteToTexture;

	// CgsNetworkTextureDXTCompress.h:126
	int32_t miReadFromTexture;

	// CgsNetworkTextureDXTCompress.h:127
	char *[2] mapUncompressedBuffers;

	// CgsNetworkTextureDXTCompress.h:128
	char *[2] mapCompressedBuffers;

	// CgsNetworkTextureDXTCompress.h:129
	bool mbRunningCompressionJob;

	// CgsNetworkTextureDXTCompress.h:130
	bool mbNewImageToCompress;

	// CgsNetworkTextureDXTCompress.h:131
	bool mbRunningDecodeJob;

	// CgsNetworkTextureDXTCompress.h:132
	bool mbNewImageToDecode;

	// CgsNetworkTextureDXTCompress.h:133
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// Unknown accessibility
	// CgsNetworkTextureDXTCompress.h:40
	typedef void (*)(void *, void *) CompressionCompleteCallback;

	// CgsNetworkTextureDXTCompress.h:134
	NetworkTextureDXTCompress::CompressionCompleteCallback mCompressionCompleteCallback;

	// CgsNetworkTextureDXTCompress.h:135
	void * mpCompressionCompleteData;

	// CgsNetworkTextureDXTCompress.h:136
	NetworkTextureDXTCompress::CompressionCompleteCallback mDecodeCompleteCallback;

	// CgsNetworkTextureDXTCompress.h:137
	void * mpDecodeCompleteData;

	// CgsNetworkTextureDXTCompress.h:140
	int32_t miUncompressedBufferSize;

	// CgsNetworkTextureDXTCompress.h:141
	int32_t miCompressedBufferSize;

public:
	// CgsNetworkTextureDXTCompress.h:56
	void Construct();

	// CgsNetworkTextureDXTCompress.h:63
	bool Prepare(CgsMemory::HeapMalloc *, int32_t, int32_t);

	// CgsNetworkTextureDXTCompress.h:67
	bool Release();

	// CgsNetworkTextureDXTCompress.h:71
	void Destruct();

	// CgsNetworkTextureDXTCompress.h:75
	void Update();

	// CgsNetworkTextureDXTCompress.h:90
	void SetNewTextureToCompress(char *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, renderengine::PixelFormat, bool, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// CgsNetworkTextureDXTCompress.h:96
	void GetCompressedTexture(char *, int32_t);

	// CgsNetworkTextureDXTCompress.h:106
	void SetNewTextureToDecompress(char *, int32_t, int32_t, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// CgsNetworkTextureDXTCompress.h:112
	void GetDecompressedTexture(char *, int32_t);

}

