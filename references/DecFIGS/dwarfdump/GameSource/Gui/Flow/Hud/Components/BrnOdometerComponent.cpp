// BrnOdometerComponent.cpp:340
void BrnGui::OdometerComponent::TransIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
}

// BrnOdometerComponent.cpp:63
void BrnGui::OdometerComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, int32_t  liParentAptLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
}

// BrnOdometerComponent.cpp:95
void BrnGui::OdometerComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnOdometerComponent.cpp:272
void BrnGui::OdometerComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOdometerComponent.cpp:324
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnOdometerComponent.cpp:287
		float32_t lfDistanceDriven;

	}
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsGui::GuiEventTimeInfo::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
}

// BrnOdometerComponent.cpp:360
void BrnGui::OdometerComponent::TransOutActiveText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOdometerComponent.cpp:392
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
}

// BrnOdometerComponent.cpp:173
void BrnGui::OdometerComponent::HandleDriveThruDiscovered(const GuiEventDriveThruDiscovered *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOdometerComponent.cpp:177
		const int32_t KI_STRING_LENGTH;

		// BrnOdometerComponent.cpp:178
		char[8] lacDiscoveredString;

		// BrnOdometerComponent.cpp:179
		char[8] lacTotalString;

		// BrnOdometerComponent.cpp:182
		int32_t liNumDiscovered;

		// BrnOdometerComponent.cpp:183
		int32_t liNumTotal;

		// BrnOdometerComponent.cpp:185
		const char * lpDriveThruStringID;

	}
	GuiCache::GetTime(/* parameters */);
}

// BrnOdometerComponent.cpp:122
void BrnGui::OdometerComponent::HandleJunctionChange(const GuiEventJunctionInfo *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOdometerComponent.cpp:130
		const int32_t KI_STRING_LENGTH;

		// BrnOdometerComponent.cpp:131
		char[8] lacDiscoveredString;

		// BrnOdometerComponent.cpp:132
		char[8] lacTotalString;

		// BrnOdometerComponent.cpp:135
		int32_t liNumDiscovered;

		// BrnOdometerComponent.cpp:136
		int32_t liNumTotal;

		BrnProgression::Profile::GetGameModeTypeDiscovered(/* parameters */);
		BrnProgression::Profile::GetGameModeTypeAmount(/* parameters */);
		GuiCache::GetTime(/* parameters */);
	}
}

// BrnOdometerComponent.cpp:25
// BrnOdometerComponent.cpp:27
// BrnOdometerComponent.cpp:28
// BrnOdometerComponent.cpp:30
// BrnOdometerComponent.cpp:32
// BrnOdometerComponent.cpp:33
// BrnOdometerComponent.cpp:35
// BrnOdometerComponent.cpp:37
// BrnOdometerComponent.cpp:38
// BrnOdometerComponent.cpp:40
// BrnOdometerComponent.cpp:41
