// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsImageExportPS3.cpp:33
	const char[12] KAC_EXPORTED_JPEG_FILENAME;

	// CgsImageExportPS3.cpp:34
	const int32_t KI_JPEG_ENCODED_BUFFER_SIZE = 262144;

	// CgsImageExportPS3.cpp:35
	const int32_t KI_WAIT_PERIOD_MICROSECOND = 10000;

	// CgsImageExportPS3.cpp:36
	const float KF_DISK_SPACE_REQUIRED;

	// CgsImageExportPS3.cpp:37
	const int32_t KI_JPEG_ENCODING_BUFFER_SIZE = 2097152;

}

// CgsImageExportPS3.cpp:59
void CgsGui::ImageExportPS3::Construct(sys_memory_container_t  lMemoryContainer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImageExportPS3.cpp:90
void CgsGui::ImageExportPS3::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImageExportPS3.cpp:74
void CgsGui::ImageExportPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImageExportPS3.cpp:107
void CgsGui::ImageExportPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImageExportPS3.cpp:428
void CgsGui::ImageExportPS3::HandlePhotoUtilError(int32_t  liResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImageExportPS3.cpp:394
void CgsGui::ImageExportPS3::PhotoUtilCallback(int32_t  liResult, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImageExportPS3.cpp:396
		ImageExportPS3 * lpThis;

	}
}

// CgsImageExportPS3.cpp:518
void CgsGui::ImageExportPS3::DumpJpegToDisk(const char *  lpcJpeg, int32_t  liJpegSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImageExportPS3.cpp:522
		char[128] lacOutputFileName;

		// CgsImageExportPS3.cpp:523
		rw::core::filesys::Handle * lpWriteHandle;

		// CgsImageExportPS3.cpp:524
		AsyncOp * lpOpenWriteOperator;

		// CgsImageExportPS3.cpp:525
		AsyncOp * lpWriteOperator;

		// CgsImageExportPS3.cpp:526
		AsyncOp * lpCloseWriteOperator;

	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::Wait(/* parameters */);
	{
		// CgsImageExportPS3.cpp:538
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::Wait(/* parameters */);
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::Wait(/* parameters */);
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
}

// CgsImageExportPS3.cpp:343
void CgsGui::ImageExportPS3::SaveJpegToGameData(const char *  lpacGameDataPath, char *  lpcJpegEncodedData, int32_t  liJpegSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImageExportPS3.cpp:345
		char[1055] lacSavePath;

		// CgsImageExportPS3.cpp:346
		uint64_t lu64WriteLen;

		// CgsImageExportPS3.cpp:347
		int32_t liResult;

		// CgsImageExportPS3.cpp:348
		int32_t liFileDescriptor;

	}
	{
		// CgsImageExportPS3.cpp:362
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsImageExportPS3.cpp:372
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsImageExportPS3.cpp:379
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsImageExportPS3.cpp:124
void CgsGui::ImageExportPS3::ExportImage(const char *  lpacGameDataPath, void *  lpRGBData, const char *  lpImageName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImageExportPS3.cpp:126
		char[1055] lacSafeGameDataPath;

		// CgsImageExportPS3.cpp:127
		uint64_t lu64FreeBlockcount;

		// CgsImageExportPS3.cpp:128
		uint32_t lu32BlockSize;

		// CgsImageExportPS3.cpp:129
		int32_t liResult;

		// CgsImageExportPS3.cpp:130
		int32_t liFinalizeResult;

		// CgsImageExportPS3.cpp:131
		char * lpcSlash;

		// CgsImageExportPS3.cpp:132
		char * lpcTerminator;

		// CgsImageExportPS3.cpp:133
		bool lbInsufficientDiskSpace;

	}
	CgsCore::StrnCpy(/* parameters */);
	{
		// CgsImageExportPS3.cpp:174
		JpegEncodeInputData lJpegEncodeInputData;

		// CgsImageExportPS3.cpp:175
		sys_addr_t lpEncodingBuffer;

		// CgsImageExportPS3.cpp:176
		HeapMalloc lEncodingHeap;

		// CgsImageExportPS3.cpp:177
		JpegEncode lJpegEncoder;

		// CgsImageExportPS3.cpp:178
		char * lpcJpegEncodedData;

		// CgsImageExportPS3.cpp:179
		int32_t liJpegSize;

		// CgsImageExportPS3.cpp:180
		uint64_t lu64RequiredSpaceInBlocks;

		HeapMalloc(/* parameters */);
		sys_memory_allocate_from_container(/* parameters */);
		sys_memory_free(/* parameters */);
		~HeapMalloc(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsImageExportPS3.cpp:249
		CellPhotoExportSetParam lExportParam;

		sys_timer_usleep(/* parameters */);
		sys_timer_usleep(/* parameters */);
		sys_timer_usleep(/* parameters */);
	}
	{
		// CgsImageExportPS3.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// CgsImageExportPS3.cpp:26
	extern int32_t giImageExportErrorStatus;

}

