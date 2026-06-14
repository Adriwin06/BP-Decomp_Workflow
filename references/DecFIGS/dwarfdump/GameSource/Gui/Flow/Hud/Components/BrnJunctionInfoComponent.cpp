// BrnJunctionInfoComponent.cpp:178
void BrnGui::JunctionInfoComponent::HandleTransitionComplete(const char *  lpcComponentName, int32_t  liUniqueId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJunctionInfoComponent.cpp:332
void BrnGui::JunctionInfoComponent::GetMedalFrameNameFromMedal(int8_t  li8Medal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJunctionInfoComponent.cpp:464
void BrnGui::JunctionInfoComponent::TransitionInMainClip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnJunctionInfoComponent.cpp:467
		const char * lpTransInFrameName;

	}
}

// BrnJunctionInfoComponent.cpp:492
void BrnGui::JunctionInfoComponent::TransitionOutMainClip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnJunctionInfoComponent.cpp:495
		const char * lpTransOutFrameName;

	}
}

// BrnJunctionInfoComponent.cpp:287
void BrnGui::JunctionInfoComponent::Refresh(const char *  lpComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJunctionInfoComponent.cpp:446
void BrnGui::JunctionInfoComponent::Run(const char *  lpcAnimation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJunctionInfoComponent.cpp:74
void BrnGui::JunctionInfoComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, int32_t  liParentAptLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnJunctionInfoComponent.cpp:119
void BrnGui::JunctionInfoComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnJunctionInfoComponent.cpp:123
		const char * lpJunctionInfoName;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnJunctionInfoComponent.cpp:379
void BrnGui::JunctionInfoComponent::SetEventNameText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnJunctionInfoComponent.cpp:429
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnJunctionInfoComponent.cpp:391
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnJunctionInfoComponent.cpp:392
		char[32] lacTempCarStringID;

		// BrnJunctionInfoComponent.cpp:393
		char[13] lacCarID;

		// BrnJunctionInfoComponent.cpp:403
		const char *[1] lapStringParams;

		// BrnJunctionInfoComponent.cpp:404
		CgsLanguage::LanguageManager::ParameterFormatType[1] laStringFormatTypes;

	}
}

// BrnJunctionInfoComponent.cpp:192
void BrnGui::JunctionInfoComponent::SetupAptVariables() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnJunctionInfoComponent.cpp:212
		GuiEventTickerCustomMessage lAlreadyWonTickerMessage;

		GuiEventTickerCustomMessage::Construct(/* parameters */);
		GuiEventTickerCustomMessage::AddString(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(/* parameters */);
	}
}

// BrnJunctionInfoComponent.cpp:150
void BrnGui::JunctionInfoComponent::HandleJunctionChange(const GuiEventJunctionInfo *  lpEvent, CgsID  lCurrentCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnJunctionInfoComponent.cpp:26
// BrnJunctionInfoComponent.cpp:27
// BrnJunctionInfoComponent.cpp:28
// BrnJunctionInfoComponent.cpp:29
// BrnJunctionInfoComponent.cpp:30
// BrnJunctionInfoComponent.cpp:31
// BrnJunctionInfoComponent.cpp:32
// BrnJunctionInfoComponent.cpp:34
// BrnJunctionInfoComponent.cpp:50
// BrnJunctionInfoComponent.cpp:52
