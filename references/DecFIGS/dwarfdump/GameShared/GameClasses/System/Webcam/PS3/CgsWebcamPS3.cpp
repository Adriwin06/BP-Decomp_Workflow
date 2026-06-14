// CgsHardwareInit.h:34
namespace CgsSystem {
	// CgsWebcamPS3.cpp:23
	const CellCameraResolution KE_CAMERA_RESOLUTION;

	// CgsWebcamPS3.cpp:24
	const int32_t KI_CAMERA_FRAME_RATE = 25;

	// CgsWebcamPS3.cpp:26
	const renderengine::PixelFormat KI_WEBCAM_PHOTO_FORMAT;

}

// CgsWebcamPS3.cpp:788
void CgsSystem::WebcamPS3::ConvertRaw8ToARGB(unsigned char *  lpcSource, unsigned char *  lpcDest, int32_t  liWidth, int32_t  liHeight, uint8_t  liAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:790
		int32_t liColumn;

		// CgsWebcamPS3.cpp:791
		int32_t liRow;

		// CgsWebcamPS3.cpp:792
		int32_t liDoubleWidth;

		// CgsWebcamPS3.cpp:793
		int32_t liQuadrupleWidth;

	}
}

// CgsWebcamPS3.cpp:486
void CgsSystem::WebcamPS3::Update(bool  lbDoFullUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:704
void CgsSystem::WebcamPS3::CloseCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:355
void CgsSystem::WebcamPS3::HandleCameraReadCellDeviceNotFound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:729
void CgsSystem::WebcamPS3::GetCameraPicture(CgsSystem::WebcamPS3::CameraPicture *  lpOutPicture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:770
void CgsSystem::WebcamPS3::GetCameraPictureFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:845
void CgsSystem::WebcamPS3::ConvertYUV422ToARGB(unsigned char *  lpcSource, unsigned char *  lpcDest, int32_t  liWidth, int32_t  liHeight, uint8_t  liAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:847
		int32_t liColumn;

		// CgsWebcamPS3.cpp:848
		int32_t liRow;

		// CgsWebcamPS3.cpp:849
		long int liU;

		// CgsWebcamPS3.cpp:850
		long int liV;

		// CgsWebcamPS3.cpp:851
		long int liUDiv2VDiv8;

		// CgsWebcamPS3.cpp:852
		long int liY1;

		// CgsWebcamPS3.cpp:853
		long int liY2;

		// CgsWebcamPS3.cpp:854
		long int liRed1;

		// CgsWebcamPS3.cpp:855
		long int liGreen1;

		// CgsWebcamPS3.cpp:856
		long int liBlue1;

		// CgsWebcamPS3.cpp:857
		long int liRed2;

		// CgsWebcamPS3.cpp:858
		long int liGreen2;

		// CgsWebcamPS3.cpp:859
		long int liBlue2;

	}
}

// CgsWebcamPS3.cpp:301
void CgsSystem::WebcamPS3::HandleCameraReadCellOK() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:63
void CgsSystem::WebcamPS3::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:65
		int32_t liBufferIndex;

		EA::Thread::AtomicInt<std::int32_t>::operator=(/* parameters */);
	}
}

// CgsWebcamPS3.cpp:122
void CgsSystem::WebcamPS3::Prepare(HeapMalloc *  lpHeapMalloc, sys_memory_container_t  lMemoryContainer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:124
		int32_t liBufferIndex;

		// CgsWebcamPS3.cpp:125
		char[32] lacBackgroundWorkerThreadName;

		// CgsWebcamPS3.cpp:162
		ThreadParameters lThreadParams;

		EA::Thread::AtomicInt<std::int32_t>::operator=(/* parameters */);
	}
}

// CgsWebcamPS3.cpp:182
void CgsSystem::WebcamPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:184
		int32_t liBufferIndex;

	}
	EA::Thread::AtomicInt<std::int32_t>::operator=(/* parameters */);
}

// CgsWebcamPS3.cpp:239
void CgsSystem::WebcamPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:241
		int32_t liBufferIndex;

		EA::Thread::AtomicInt<std::int32_t>::operator=(/* parameters */);
	}
}

// CgsWebcamPS3.cpp:971
void CgsSystem::WebcamPS3::UpdateSPUJob() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
}

// CgsWebcamPS3.cpp:451
void CgsSystem::WebcamPS3::UpdateCameraAttachedLightUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsWebcamPS3.cpp:502
void CgsSystem::WebcamPS3::StartStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsWebcamPS3.cpp:368
void CgsSystem::WebcamPS3::HandleCameraReadDeviceNotStarted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:381
void CgsSystem::WebcamPS3::UpdateCameraAttachedFullUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:383
		int32_t liReadRetVal;

		// CgsWebcamPS3.cpp:384
		uint32_t luFrameNum;

		// CgsWebcamPS3.cpp:385
		uint32_t luBytesRead;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsWebcamPS3.cpp:537
void CgsSystem::WebcamPS3::OpenCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:539
		int32_t liBufferSize;

		// CgsWebcamPS3.cpp:540
		int32_t liResult;

		// CgsWebcamPS3.cpp:541
		sys_memory_info_t lMemoryInfo;

	}
	sys_memory_container_get_size(/* parameters */);
	{
		// CgsWebcamPS3.cpp:562
		uint32_t luFormatCap;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsWebcamPS3.cpp:661
		int32_t liBufferSize;

		// CgsWebcamPS3.cpp:662
		int32_t liBufferIndex;

	}
}

// CgsWebcamPS3.cpp:278
void CgsSystem::WebcamPS3::UpdateDetachedCameraState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsWebcamPS3.cpp:913
void CgsSystem::WebcamPS3::CameraBackgroundWorkerThread(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsWebcamPS3.cpp:915
		WebcamPS3 * lpWebCamPS3;

		EA::Thread::AtomicInt<std::int32_t>::operator const std::int32_t(/* parameters */);
	}
}

// CgsWebcamPS3.cpp:27
