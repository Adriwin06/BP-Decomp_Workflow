// CgsGuiShared.h:45
namespace BrnGui {
	// BrnEATraxInGameComponent.cpp:28
	const float32_t KF_TIME_FOR_DISPLAYING_EA_TRAX_SECS;

}

// BrnEATraxInGameComponent.cpp:94
void BrnGui::EATraxInGameComponent::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEATraxInGameComponent.cpp:150
void BrnGui::EATraxInGameComponent::SetTime(float32_t  lfGameTime_Seconds_Seconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEATraxInGameComponent.cpp:51
void BrnGui::EATraxInGameComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnEATraxInGameComponent.cpp:72
void BrnGui::EATraxInGameComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxInGameComponent.cpp:77
		MovieClipRef lEATraxBox;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnEATraxInGameComponent.cpp:209
void BrnGui::EATraxInGameComponent::BecomeInvisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxInGameComponent.cpp:219
		GuiEATraxChyronActive lActiveEvent;

	}
	OutputGuiEvent<BrnGui::GuiEATraxChyronActive>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEATraxChyronActive> >(/* parameters */);
}

// BrnEATraxInGameComponent.cpp:107
void BrnGui::EATraxInGameComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxInGameComponent.cpp:128
		GuiEATraxChyronActive lActiveEvent;

	}
	OutputGuiEvent<BrnGui::GuiEATraxChyronActive>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEATraxChyronActive> >(/* parameters */);
}

// BrnEATraxInGameComponent.cpp:166
void BrnGui::EATraxInGameComponent::DisplayNewTrackNotification(const char *  lpArtistName, const char *  lpSongName, const char *  lpAlbumName, bool  lbLocalised) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxInGameComponent.cpp:197
		GuiEATraxChyronActive lActiveEvent;

	}
	OutputGuiEvent<BrnGui::GuiEATraxChyronActive>(/* parameters */);
}

// BrnEATraxInGameComponent.cpp:30
// BrnEATraxInGameComponent.cpp:31
// BrnEATraxInGameComponent.cpp:32
