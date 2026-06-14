// CgsMoviePlayer.cpp:64
void CgsGraphics::MoviePlayer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:776
void CgsGraphics::MoviePlayer::ResetChunkSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ChunkBuffer::Reset(/* parameters */);
}

// CgsMoviePlayer.cpp:290
void CgsGraphics::MoviePlayer::AddAudioStream(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:498
void CgsGraphics::MoviePlayer::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:389
void CgsGraphics::MoviePlayer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:407
void CgsGraphics::MoviePlayer::GetPlayerState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:425
void CgsGraphics::MoviePlayer::IsFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:443
void CgsGraphics::MoviePlayer::SetRectangle(float32_t  fLeft, float32_t  fTop, float32_t  fRight, float32_t  fBottom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:463
void CgsGraphics::MoviePlayer::SetCrossfade(int32_t  liCrossfadeInFrames, int32_t  liCrossfadeOutFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:478
void CgsGraphics::MoviePlayer::Play() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:513
extern void DecodeCallback(int  frameNumber, char *  YUVBuffer, int  srcWidth, int  srcHeigh, void *  userData1, void *  userData2, void *  userdata3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMoviePlayer.cpp:865
void CgsGraphics::MoviePlayer::WaitForDecode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:869
		int32_t liIndex;

	}
}

// CgsMoviePlayer.cpp:740
void CgsGraphics::MoviePlayer::ReleaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

// CgsMoviePlayer.cpp:698
void CgsGraphics::MoviePlayer::PrepareResources(const char *  lpcLanguageCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:704
		JobThreadParameters jtpPPU;

	}
	EA::Jobs::JobThreadParameters::JobThreadParameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	MoviePlayerCoreAllocator::Construct(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	ChunkBuffer::Construct(/* parameters */);
}

// CgsMoviePlayer.cpp:264
void CgsGraphics::MoviePlayer::AddVideoStream(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ChunkBuffer::GetChunkId(/* parameters */);
	ByteSwap(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsMoviePlayer.cpp:794
void CgsGraphics::MoviePlayer::ReadChunkSet(uint32_t  luNumChunksInSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:796
		const ChunkBuffer & lBuffer;

	}
	{
		// CgsMoviePlayer.cpp:822
		uint32_t luRequiredSize;

		// CgsMoviePlayer.cpp:823
		uint32_t luAmountRequired;

		// CgsMoviePlayer.cpp:824
		uint32_t luAmountRead;

		ChunkBuffer::GetChunkSize(/* parameters */);
	}
	{
		// CgsMoviePlayer.cpp:809
		uint32_t luAmountRequired;

		// CgsMoviePlayer.cpp:810
		uint32_t luAmountRead;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsMoviePlayer.cpp:307
void CgsGraphics::MoviePlayer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:367
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMoviePlayer.cpp:335
		int32_t liIndex;

	}
	CgsFileSystem::StreamDeviceDiskRead::GetStatus(/* parameters */);
	CgsFileSystem::StreamDeviceDiskRead::GetStatus(/* parameters */);
}

// CgsMoviePlayer.cpp:845
void CgsGraphics::MoviePlayer::StartDecodes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:848
		const ChunkBuffer & lBuffer;

		// CgsMoviePlayer.cpp:849
		int32_t liIndex;

	}
	ChunkBuffer::GetChunkId(/* parameters */);
	ChunkBuffer::GetChunkData(/* parameters */);
	ChunkBuffer::GetChunkSize(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	ChunkBuffer::GetChunkSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	ChunkBuffer::GetChunkSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsMoviePlayer.cpp:527
void CgsGraphics::MoviePlayer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:538
		uint64_t luCurrentTimeInCycles;

		// CgsMoviePlayer.cpp:539
		int32_t liNumFramesToDecode;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			// CgsMoviePlayer.cpp:548
			uint64_t luCyclesElapsed;

			// CgsMoviePlayer.cpp:551
			uint64_t luNumerator;

			// CgsMoviePlayer.cpp:552
			uint64_t luScaled;

			// CgsMoviePlayer.cpp:553
			uint64_t luDivideByFreq;

			CgsNumeric::Max(/* parameters */);
			{
				// CgsMoviePlayer.cpp:569
				uint64_t luCyclesElapsed;

				// CgsMoviePlayer.cpp:570
				uint64_t luNumerator;

				// CgsMoviePlayer.cpp:571
				uint64_t luScaled;

				// CgsMoviePlayer.cpp:572
				uint64_t luDivideByFreq;

			}
		}
	}
}

// CgsMoviePlayer.cpp:103
void CgsGraphics::MoviePlayer::Prepare(rw::IResourceAllocator *  lpResourceAllocator, const char *  lpMovieFileName, const char *  lpcLanguageCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.cpp:244
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMoviePlayer.cpp:200
		int32_t liVideoIndex;

		// CgsMoviePlayer.cpp:201
		int32_t liTotalHeight;

	}
	CgsFileSystem::StreamDeviceDiskRead::GetStatus(/* parameters */);
	ChunkBuffer::GetChunkId(/* parameters */);
	ChunkBuffer::GetChunkId(/* parameters */);
	{
		// CgsMoviePlayer.cpp:124
		uint32_t luCharIndex;

		CgsCore::StrCpy(/* parameters */);
		std(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsMoviePlayer.cpp:633
void CgsGraphics::MoviePlayer::Render(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// CgsMoviePlayer.cpp:646
		int32_t liIndex;

		// CgsMoviePlayer.cpp:647
		int32_t liRow;

		{
			// CgsMoviePlayer.cpp:650
			VideoRenderable lRenderable;

			// CgsMoviePlayer.cpp:652
			YUV_BUFFER_CONFIG lYUVConfig;

			rw::movie::VideoRenderable::SetWidth(/* parameters */);
			rw::movie::VideoRenderable::SetHeight(/* parameters */);
			rw::movie::VideoRenderable::SetFrameNumber(/* parameters */);
			rw::movie::VideoRenderable::SetNumBuffersUsed(/* parameters */);
			rw::movie::VideoRenderable::SetFormat(/* parameters */);
			rw::movie::VideoRenderable::SetDropFrameFlag(/* parameters */);
			rw::movie::VideoRenderable::SetReadyToRender(/* parameters */);
			rw::movie::VideoRenderable::SetStride(/* parameters */);
			rw::movie::VideoRenderable::SetStride(/* parameters */);
			rw::movie::VideoRenderable::SetStride(/* parameters */);
			rw::movie::VideoRenderable::SetData(/* parameters */);
			rw::movie::VideoRenderable::SetData(/* parameters */);
			rw::movie::VideoRenderable::SetData(/* parameters */);
			rw::movie::VideoRenderable::SetSize(/* parameters */);
			rw::movie::VideoRenderable::SetSize(/* parameters */);
			rw::movie::VideoRenderable::SetSize(/* parameters */);
		}
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// CgsMoviePlayer.cpp:512
	extern Semaphore gDecodeSemaphore;

}

// CgsMoviePlayer.cpp:44
// CgsMoviePlayer.cpp:45
// CgsMoviePlayer.cpp:46
// CgsMoviePlayer.cpp:47
// CgsMoviePlayer.cpp:48
// CgsMoviePlayer.cpp:49
