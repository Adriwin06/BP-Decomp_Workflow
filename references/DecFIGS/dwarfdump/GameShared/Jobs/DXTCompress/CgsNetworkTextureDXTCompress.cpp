// CgsNetworkTextureDXTCompress.cpp:41
void CgsNetwork::NetworkTextureDXTCompress::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTextureDXTCompress.cpp:43
		int32_t liBufferIndex;

	}
}

// CgsNetworkTextureDXTCompress.cpp:85
void CgsNetwork::NetworkTextureDXTCompress::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTextureDXTCompress.cpp:87
		int32_t liBufferIndex;

	}
}

// CgsNetworkTextureDXTCompress.cpp:169
void CgsNetwork::NetworkTextureDXTCompress::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTextureDXTCompress.cpp:171
		int32_t liBufferIndex;

	}
}

// CgsNetworkTextureDXTCompress.cpp:475
void CgsNetwork::NetworkTextureDXTCompress::GetDecompressedTexture(char *  lpUncompressedPixels, int32_t  liUncompressedPixelSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
}

// CgsNetworkTextureDXTCompress.cpp:130
void CgsNetwork::NetworkTextureDXTCompress::Prepare(CgsMemory::HeapMalloc *  lpHeapMalloc, int32_t  liSrcPixelBufferSize, int32_t  liDstPixelBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTextureDXTCompress.cpp:132
		int32_t liBufferIndex;

	}
}

// CgsNetworkTextureDXTCompress.cpp:336
void CgsNetwork::NetworkTextureDXTCompress::SetNewTextureToCompress(char *  lpNewSourcePixels, int32_t  liNewSourcePixelsSize, int32_t  liTextureWidth, int32_t  liTextureHeight, int32_t  liSrcPitch, int32_t  liCmpPitch, int32_t  liQuality, renderengine::PixelFormat  leSourceFormat, bool  lbInputIsUncompressedYUYV, NetworkTextureDXTCompress::CompressionCompleteCallback  lCompressionCompleteCallback, void *  lCompressionCompleteData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
}

// CgsNetworkTextureDXTCompress.cpp:389
void CgsNetwork::NetworkTextureDXTCompress::GetCompressedTexture(char *  lpCompressedPixels, int32_t  liCompressedPixelsSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
}

// CgsNetworkTextureDXTCompress.cpp:207
void CgsNetwork::NetworkTextureDXTCompress::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTextureDXTCompress.cpp:301
		NetworkTextureDXTCompress::CompressionCompleteCallback lDecodeCompleteCallback;

		// CgsNetworkTextureDXTCompress.cpp:302
		void * lpDecodeCompleteData;

	}
	{
		// CgsNetworkTextureDXTCompress.cpp:249
		NetworkTextureDXTCompress::CompressionCompleteCallback lCompressionCompleteCallback;

		// CgsNetworkTextureDXTCompress.cpp:250
		void * lpUserData;

	}
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
}

// CgsNetworkTextureDXTCompress.cpp:421
void CgsNetwork::NetworkTextureDXTCompress::SetNewTextureToDecompress(char *  lpCompressedPixels, int32_t  liCompressedPixelSize, int32_t  liCompressedWidth, int32_t  liCompressedHeight, NetworkTextureDXTCompress::CompressionCompleteCallback  lDecodeCompleteCallback, void *  lDecodeCompleteData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkTextureDXTCompress.cpp:440
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
}

