// BrnOverlayComponent.cpp:85
void BrnGui::OverlayComponent::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOverlayComponent.cpp:89
		OverlayComponent * lpThis;

	}
	SetTransitionComplete(/* parameters */);
}

// BrnOverlayComponent.cpp:43
void BrnGui::OverlayComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	SetTransitionComplete(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

// BrnOverlayComponent.cpp:64
void BrnGui::OverlayComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFlaptFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	SetTransitionComplete(/* parameters */);
}

