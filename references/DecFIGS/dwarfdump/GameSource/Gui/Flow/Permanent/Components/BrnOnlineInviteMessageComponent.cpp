// BrnOnlineInviteMessageComponent.cpp:479
void BrnGui::OnlineInviteMessageComponent::IsMessageAllowed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineInviteMessageComponent.cpp:483
		bool lbAllowed;

	}
}

// BrnOnlineInviteMessageComponent.cpp:583
void BrnGui::OnlineInviteMessageComponent::RemoveMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnOnlineInviteMessageComponent.cpp:560
void BrnGui::OnlineInviteMessageComponent::DisallowMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnOnlineInviteMessageComponent.cpp:621
void BrnGui::OnlineInviteMessageComponent::DoTransitionComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnOnlineInviteMessageComponent.cpp:647
void BrnGui::OnlineInviteMessageComponent::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineInviteMessageComponent.cpp:650
		OnlineInviteMessageComponent * lpThis;

	}
	DoTransitionComplete(/* parameters */);
}

// BrnOnlineInviteMessageComponent.cpp:339
void BrnGui::OnlineInviteMessageComponent::ShowMessage(int32_t  liNumberOnline, BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType  leNotificationType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineInviteMessageComponent.cpp:379
		CgsLanguage::LanguageManager::ParameterFormatType leParameter;

		GuiCache::GetTime(/* parameters */);
	}
}

// BrnOnlineInviteMessageComponent.cpp:250
void BrnGui::OnlineInviteMessageComponent::ShowMessage(const char *  lpcPlayerName, BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType  leNotificationType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineInviteMessageComponent.cpp:260
		CgsLanguage::LanguageManager::ParameterFormatType leParameter;

		GuiCache::GetTime(/* parameters */);
	}
}

// BrnOnlineInviteMessageComponent.cpp:503
void BrnGui::OnlineInviteMessageComponent::AllowMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnOnlineInviteMessageComponent.cpp:94
void BrnGui::OnlineInviteMessageComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lpParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnOnlineInviteMessageComponent.cpp:135
void BrnGui::OnlineInviteMessageComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnOnlineInviteMessageComponent.cpp:158
void BrnGui::OnlineInviteMessageComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	{
		// BrnOnlineInviteMessageComponent.cpp:162
		GuiEventWrapper<CgsGui::GuiEvent<107>,40>::GuiOnlineNotificationChyronFinishedEvent lEvent;

		OutputGuiEvent<BrnGui::GuiOnlineNotificationChyronFinishedEvent>(/* parameters */);
	}
}

// BrnOnlineInviteMessageComponent.cpp:29
// BrnOnlineInviteMessageComponent.cpp:30
// BrnOnlineInviteMessageComponent.cpp:34
// BrnOnlineInviteMessageComponent.cpp:44
// BrnOnlineInviteMessageComponent.cpp:31
// BrnOnlineInviteMessageComponent.cpp:32
// BrnOnlineInviteMessageComponent.cpp:54
