// BrnGuiColourCalibrationScreen.cpp:66
void BrnGui::ColourCalibrationScreen::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiColourCalibrationScreen.cpp:216
void BrnGui::ColourCalibrationScreen::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiColourCalibrationScreen.cpp:233
void BrnGui::ColourCalibrationScreen::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiColourCalibrationScreen.cpp:49
void BrnGui::ColourCalibrationScreen::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

// BrnGuiColourCalibrationScreen.cpp:86
void BrnGui::ColourCalibrationScreen::Update(InputBuffer *  lpGDMInput, const OutputBuffer *  lpGDMOutput, CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiColourCalibrationScreen.cpp:199
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiColourCalibrationScreen.cpp:130
		const CgsModule::Event * lpEvent;

		// BrnGuiColourCalibrationScreen.cpp:131
		int32_t liSize;

		// BrnGuiColourCalibrationScreen.cpp:132
		int32_t liEventId;

		// BrnGuiColourCalibrationScreen.cpp:139
		const AcquireResourceResponse * lpAcquire;

		// BrnGuiColourCalibrationScreen.cpp:152
		renderengine::Texture * lpColourCalibrationTexture;

		// BrnGuiColourCalibrationScreen.cpp:157
		Parameters lTextureStateParameters;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourceHandle::operator!=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnGuiColourCalibrationScreen.cpp:176
		GuiOptionsBrightnessContrastPostFxControl lGuiOptionsBrightnessContrastPostFxControl;

		AddGuiOutEvent<BrnGui::GuiOptionsBrightnessContrastPostFxControl>(/* parameters */);
		AddGuiEvent<BrnGui::GuiOptionsBrightnessContrastPostFxControl>(/* parameters */);
	}
	{
		// BrnGuiColourCalibrationScreen.cpp:187
		GuiOptionsBrightnessContrastPostFxControl lGuiOptionsBrightnessContrastPostFxControl;

		AddGuiOutEvent<BrnGui::GuiOptionsBrightnessContrastPostFxControl>(/* parameters */);
		AddGuiEvent<BrnGui::GuiOptionsBrightnessContrastPostFxControl>(/* parameters */);
	}
	BrnResource::GameDataIO::InputBuffer::GetRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<32768>::AcquireResource(/* parameters */);
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

// BrnGuiColourCalibrationScreen.cpp:250
void BrnGui::ColourCalibrationScreen::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiColourCalibrationScreen.cpp:252
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

