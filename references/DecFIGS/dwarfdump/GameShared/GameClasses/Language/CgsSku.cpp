// CgsSku.cpp:218
void CgsLanguage::Sku::RequestLoadLanguage(CgsLanguage::ELanguage  leLanguage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSku.cpp:183
void CgsLanguage::Sku::SetLanguage(CgsLanguage::ELanguage  leLanguage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSku.cpp:201
void CgsLanguage::Sku::SetSku(CgsLanguage::ESku  leSku) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSku.cpp:308
void CgsLanguage::Sku::FindLanguage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSku.cpp:322
void CgsLanguage::Sku::FindSku() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSku.cpp:156
void CgsLanguage::Sku::Construct(CgsGui::GuiModule *  lpModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSku.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSku.cpp:237
void CgsLanguage::Sku::Update(InputBuffer *  lpModelInputBuffer, CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSku.cpp:291
		GuiEventSetLanguageNotification lLanguageNotificationEvent;

		AddGuiOutEvent<CgsGui::GuiEventSetLanguageNotification>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventSetLanguageNotification>(/* parameters */);
	}
	{
		// CgsSku.cpp:282
		GuiEventSetSku lSkuEvent;

		AddGuiOutEvent<CgsGui::GuiEventSetSku>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventSetSku>(/* parameters */);
	}
	{
		// CgsSku.cpp:261
		GuiEventLoadRequest lLoadRequest;

		// CgsSku.cpp:262
		ID lLanguageResourceID;

		CgsResource::ID::Construct(/* parameters */);
		CgsGui::ModelIO::InputBuffer::AddResourceRequests(/* parameters */);
		AddGuiEvent<const CgsGui::GuiEventLoadRequest>(/* parameters */);
	}
	{
		// CgsSku.cpp:242
		GuiEventLoadRequest lLoadRequest;

		// CgsSku.cpp:243
		ID lLanguageResourceID;

		CgsResource::ID::Construct(/* parameters */);
		CgsGui::ModelIO::InputBuffer::AddResourceRequests(/* parameters */);
		AddGuiEvent<const CgsGui::GuiEventLoadRequest>(/* parameters */);
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

// CgsSku.cpp:42
// CgsSku.cpp:72
// CgsSku.cpp:137
// CgsSku.cpp:106
