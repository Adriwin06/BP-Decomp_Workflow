// BrnInGameMessagesComponent.cpp:633
void BrnGui::InGameMessagesComponent::IsMessageUpdatable(CgsID  lMessageId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnInGameMessagesComponent.cpp:431
void BrnGui::InGameMessagesComponent::SetIcon(const char *  lacIconTypeName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnInGameMessagesComponent.cpp:722
void BrnGui::InGameMessagesComponent::RefreshString(int32_t  liStringIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:737
		char *[4] lapcTempArray;

		// BrnInGameMessagesComponent.cpp:738
		int32_t liIter;

	}
}

// BrnInGameMessagesComponent.cpp:331
void BrnGui::InGameMessagesComponent::SendGameMessage(const char *  lpcStartPoint, bool  lbNewIcon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:333
		HudMessageEvent * lpCurrentMessage;

		// BrnInGameMessagesComponent.cpp:358
		MovieClipRef lTextComponent;

		// BrnInGameMessagesComponent.cpp:360
		int32_t liIndex;

		// BrnInGameMessagesComponent.cpp:391
		int32_t liIter;

		// BrnInGameMessagesComponent.cpp:392
		int32_t liIter2;

	}
	GetCurrentIndex(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:371
		MovieClipRef lTextFieldParent;

	}
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:552
void BrnGui::InGameMessagesComponent::EndTransition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentIndex(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:558
		float32_t lfTimeToAdd;

		GetCurrentIndex(/* parameters */);
		GetCurrentIndex(/* parameters */);
	}
	GetCurrentIndex(/* parameters */);
	SwitchCurrentIndex(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:774
void BrnGui::InGameMessagesComponent::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:777
		InGameMessagesComponent * lpThis;

	}
}

// BrnInGameMessagesComponent.cpp:157
void BrnGui::InGameMessagesComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:470
void BrnGui::InGameMessagesComponent::QueueMessage(HudMessageEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:472
		uint8_t liNextIndex;

		GetNextIndex(/* parameters */);
	}
	{
		// BrnInGameMessagesComponent.cpp:474
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnInGameMessagesComponent.cpp:590
void BrnGui::InGameMessagesComponent::UpdateInPlace(HudMessageEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentIndex(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:592
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:611
		float32_t lfTimeToAdd;

		GetCurrentIndex(/* parameters */);
		GetCurrentIndex(/* parameters */);
	}
	{
		// BrnInGameMessagesComponent.cpp:593
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnInGameMessagesComponent.cpp:514
void BrnGui::InGameMessagesComponent::EndMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:530
		GuiAudioEvent lAudioEvent;

	}
	GetCurrentIndex(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:516
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40>::SetRawEvent(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:93
void BrnGui::InGameMessagesComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:100
		GuiEventWrapper<CgsGui::GuiEvent<155>,40>::GuiHudMessageControllerRequest lRequestEvent;

		// BrnInGameMessagesComponent.cpp:107
		int32_t liIndex;

		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	OutputGuiEvent<BrnGui::GuiHudMessageControllerRequest>(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:282
void BrnGui::InGameMessagesComponent::StartMessage(HudMessageEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:291
		char[13] lacMsgName;

		// BrnInGameMessagesComponent.cpp:307
		GuiAudioEvent lAudioEvent;

	}
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	OutputGuiEvent<BrnGui::GuiAudioEvent>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40>::SetRawEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:284
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnInGameMessagesComponent.cpp:659
void BrnGui::InGameMessagesComponent::TerminateMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentIndex(/* parameters */);
	GetNextIndex(/* parameters */);
	SwitchCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:244
void BrnGui::InGameMessagesComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
}

// BrnInGameMessagesComponent.cpp:181
void BrnGui::InGameMessagesComponent::AddMessage(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessagesComponent.cpp:190
		const GuiHudMessage * lpInHudMessage;

		// BrnInGameMessagesComponent.cpp:192
		HudMessageEvent lMessageEvent;

	}
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	GetCurrentIndex(/* parameters */);
	{
		// BrnInGameMessagesComponent.cpp:183
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnInGameMessagesComponent.cpp:30
// BrnInGameMessagesComponent.cpp:42
// BrnInGameMessagesComponent.cpp:65
// BrnInGameMessagesComponent.cpp:73
