// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkTexture.cpp:25
	const int32_t KI_DXT1_BLOCK_WIDTH = 4;

	// CgsNetworkTexture.cpp:26
	const int32_t KI_DXT1_BLOCK_HEIGHT = 4;

}

// CgsNetworkTexture.cpp:334
void CgsNetwork::NetworkTexture::GetHeightInBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTexture.cpp:336
		int32_t liHeightInBlocks;

	}
}

// CgsNetworkTexture.cpp:44
void CgsNetwork::NetworkTexture::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkTexture.cpp:140
void CgsNetwork::NetworkTexture::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkTexture.cpp:170
void CgsNetwork::NetworkTexture::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkTexture.cpp:303
void CgsNetwork::NetworkTexture::GetWidthInBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTexture.cpp:305
		int32_t liWidthInBlocks;

	}
}

// CgsNetworkTexture.cpp:367
void CgsNetwork::NetworkTexture::CopyPixelData(const char *  lpcPixelData, int32_t  liDataSizeInBytes, renderengine::PixelFormat  lePixelFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
}

// CgsNetworkTexture.cpp:192
void CgsNetwork::NetworkTexture::GetBitsPerPixel(renderengine::PixelFormat  lFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTexture.cpp:225
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkTexture.cpp:107
void CgsNetwork::NetworkTexture::Prepare(char *  lacTextureBuffer, int32_t  liTextureBufferSize, int32_t  liWidth, int32_t  liHeight, renderengine::PixelFormat  lFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTexture.cpp:111
		ResourceDescriptor lResourceDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsNetworkTexture.cpp:70
void CgsNetwork::NetworkTexture::Prepare(CgsMemory::HeapMalloc *  lpHeapMalloc, int32_t  liWidth, int32_t  liHeight, renderengine::PixelFormat  lFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTexture.cpp:73
		ResourceDescriptor lResourceDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
}

// CgsNetworkTexture.cpp:243
void CgsNetwork::NetworkTexture::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTexture.cpp:246
		int32_t liBytesPerBlock;

	}
	{
		// CgsNetworkTexture.cpp:285
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

