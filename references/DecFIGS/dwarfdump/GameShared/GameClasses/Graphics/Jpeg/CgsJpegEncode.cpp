// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsJpegEncode.cpp:28
	const int32_t KI_ALLOCATOR_SIZE = 61440;

}

// CgsJpegEncode.cpp:49
void CgsGraphics::JpegEncode::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJpegEncode.cpp:64
void CgsGraphics::JpegEncode::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJpegEncode.cpp:83
void CgsGraphics::JpegEncode::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJpegEncode.cpp:104
void CgsGraphics::JpegEncode::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJpegEncode.cpp:370
void _GLOBAL__D__ZN20CgsBlendStateFactory13saBlendStatesE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJpegEncode.cpp:369
void _GLOBAL__I__ZN20CgsBlendStateFactory13saBlendStatesE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJpegEncode.cpp:241
void CgsGraphics::JpegEncode::JpegWriteLine(unsigned char *  lpSource, unsigned char *  lpDest, int32_t  liWidth, int32_t  liDestColourSpace, CgsGraphics::JpegEncode::ARGB *  liSourceColourTbl, int32_t  liSourceBitsPerPixel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsJpegEncode.cpp:243
		unsigned char * d;

		// CgsJpegEncode.cpp:244
		unsigned char * s;

		// CgsJpegEncode.cpp:245
		int32_t liPixel;

	}
	{
		// CgsJpegEncode.cpp:333
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsJpegEncode.cpp:132
void CgsGraphics::JpegEncode::Encode(HeapMalloc *  lpExportHeapMalloc, JpegEncodeInputData  lJpegEncodeInputData, int32_t  liQuality, void *  lpOutputBuffer, int32_t  liOutputBufferSize, int32_t *  lpiEncodedSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsJpegEncode.cpp:134
		CgsMemory::HeapMallocCoreAllocator lAlloc;

		// CgsJpegEncode.cpp:135
		CgsGraphics::JpegEncode::JpegEncodeWriteData lWriteBuffer;

		// CgsJpegEncode.cpp:136
		jpeg_compress_struct lJpgCompressInfo;

		// CgsJpegEncode.cpp:137
		jpeg_error_mgr lJpgErr;

		// CgsJpegEncode.cpp:138
		int32_t y;

		// CgsJpegEncode.cpp:139
		J_COLOR_SPACE lColourSpace;

		// CgsJpegEncode.cpp:140
		JSAMPROW[1] lRowPointer;

		// CgsJpegEncode.cpp:141
		unsigned char * lpInputBufferRow;

		// CgsJpegEncode.cpp:142
		unsigned char * lpRGBRow;

		// CgsJpegEncode.cpp:143
		void * lpAllocBuffer;

		CgsMemory::HeapMallocCoreAllocator::HeapMallocCoreAllocator(/* parameters */);
	}
	CgsMemory::HeapMallocCoreAllocator::~HeapMallocCoreAllocator(/* parameters */);
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
}

// CgsJpegEncode.cpp:351
void CgsGraphics::JpegEncode::EncodeCallback(unsigned char *  lpData, size_t  liNumBytes, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsJpegEncode.cpp:356
		CgsGraphics::JpegEncode::JpegEncodeWriteData * lpWriteBuffer;

	}
	CgsCore::MemCpy(/* parameters */);
	{
		// CgsJpegEncode.cpp:359
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

