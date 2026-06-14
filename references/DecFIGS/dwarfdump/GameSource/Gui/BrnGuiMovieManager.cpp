// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiMovieManager.cpp:59
	const char[8] KAC_MOVIE_DIRECTORY;

}

// BrnGuiMovieManager.cpp:967
void BrnGui::MovieManager::AllocateCollisionPoolMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiMovieManager.cpp:223
void BrnGui::MovieManager::UpdateMoviePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiMovieManager.cpp:611
void BrnGui::MovieManager::Render(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiMovieManager.cpp:580
void BrnGui::MovieManager::DestroyMemoryResourceAndDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::Resource::GetMemoryResource(/* parameters */);
	sys_memory_free(/* parameters */);
}

// BrnGuiMovieManager.cpp:926
void BrnGui::MovieManager::FreeCollisionPoolMemory(const SwapOutCollisionWorldResponse *  lpSwapOutResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiMovieManager.cpp:503
void BrnGui::MovieManager::CreateMemoryResourceAndDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiMovieManager.cpp:507
		const uint32_t KU_TOTAL_ALLOCATION_SIZE;

		// BrnGuiMovieManager.cpp:508
		const uint32_t KU_MAIN_ALLOCATION_SIZE;

		// BrnGuiMovieManager.cpp:549
		sys_addr_t lAddr;

		CgsResource::SmallResource::ConvertToRWResource(/* parameters */);
	}
	rw::Resource::GetMemoryResource(/* parameters */);
	rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	sys_memory_allocate(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
}

// BrnGuiMovieManager.cpp:74
void BrnGui::MovieManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VideoDefinition::Construct(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	VideoDefinition::Construct(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
}

// BrnGuiMovieManager.cpp:176
void BrnGui::MovieManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VideoDefinition::Release(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	VideoDefinition::Release(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
}

// BrnGuiMovieManager.cpp:879
void BrnGui::MovieManager::HasFinishedPlayingVideo(BrnGui::MovieManager::VideoDefinition *  lpMovieDefinitionOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VideoDefinition::Copy(/* parameters */);
	CgsSound::Playback::Name::Name(/* parameters */);
	VideoDefinition::Prepare(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	rw::math::vpu::Vector4::SetVector(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:684
void BrnGui::MovieManager::HandlePlayVideoEvent(const BrnGui::GuiEventPlayVideo *  lpPlayVideoEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VideoDefinition::Copy(/* parameters */);
	VideoDefinition::Prepare(/* parameters */);
	CgsSound::Playback::Name::Name(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	rw::math::vpu::Vector4::SetVector(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:198
void BrnGui::MovieManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiMovieManager.cpp:201
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiMovieManager.cpp:200
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:704
void BrnGui::MovieManager::HandleStopVideoEvent(const BrnGui::GuiEventStopVideo *  lpStopVideoEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VideoDefinition::Prepare(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	{
		// BrnGuiMovieManager.cpp:740
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:631
void BrnGui::MovieManager::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiMovieManager.cpp:639
		const BrnGui::GuiEventPlayVideo * lpPlayMovieEvent;

	}
	{
		// BrnGuiMovieManager.cpp:647
		const BrnGui::GuiEventStopVideo * lpStopMovieEvent;

	}
	{
		// BrnGuiMovieManager.cpp:633
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:757
void BrnGui::MovieManager::QueueNextMovie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiMovieManager.cpp:776
		CgsResource::VideoDataResource::VideoFile * lpVideoFile;

		VideoDefinition::Copy(/* parameters */);
		CgsSound::Playback::Name::Name(/* parameters */);
		VideoDefinition::Prepare(/* parameters */);
		VideoDefinition::Prepare(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		rw::math::vpu::Vector4::SetVector(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
		CgsSound::Playback::Name::operator=(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator->(/* parameters */);
		CgsResource::VideoDataResource::GetVideoFile(/* parameters */);
		CgsResource::VideoDataResource::VideoFile::GetName(/* parameters */);
		CgsCore::StrCat(/* parameters */);
	}
	{
		// BrnGuiMovieManager.cpp:760
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiMovieManager.cpp:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator->(/* parameters */);
	CgsResource::VideoDataResource::GetVideoFile(/* parameters */);
	CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator->(/* parameters */);
	CgsResource::VideoDataResource::GetVideoFile(/* parameters */);
	CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator->(/* parameters */);
	CgsResource::VideoDataResource::GetVideoFile(/* parameters */);
	CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator->(/* parameters */);
	CgsResource::VideoDataResource::GetVideoFile(/* parameters */);
	CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator->(/* parameters */);
	CgsResource::VideoDataResource::GetVideoFile(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:242
void BrnGui::MovieManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RequestValidationOfCollisionWorldState(/* parameters */);
	RequestValidationOfCarPool(/* parameters */);
	{
		// BrnGuiMovieManager.cpp:387
		const CgsModule::Event * lpEvent;

		// BrnGuiMovieManager.cpp:388
		int32_t liSize;

		// BrnGuiMovieManager.cpp:389
		int32_t liEventId;

		// BrnGuiMovieManager.cpp:396
		const AcquireResourceResponse * lpAcquire;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<CgsResource::VideoDataResource>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	~ResourceDescriptor(/* parameters */);
	RequestInvalidationOfCollisionWorld(/* parameters */);
	RequestInvalidationOfCarPool(/* parameters */);
}

// BrnGuiMovieManager.cpp:898
void BrnGui::MovieManager::IsRequestingSound(BrnGui::MovieManager::VideoDefinition *  lpMovieDefinitionOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VideoDefinition::Copy(/* parameters */);
	CgsSound::Playback::Name::Name(/* parameters */);
	VideoDefinition::Prepare(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	rw::math::vpu::Vector4::SetVector(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiMovieManager.cpp:113
void BrnGui::MovieManager::Prepare(InputBuffer *  lpGDMInput, const OutputBuffer *  lpGDMOutput, CgsLanguage::ELanguage  leLanguage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiMovieManager.cpp:155
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::LoadBundle(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	VideoDefinition::Prepare(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	VideoDefinition::Prepare(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsSound::Playback::Name::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

