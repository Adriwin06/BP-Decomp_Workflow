// CgsGuiShared.h:45
namespace BrnGui {
	// BrnAchievementPopupComponent.cpp:26
	const float32_t KF_TIME_FOR_DISPLAYING_POPUP_SECS;

	// BrnAchievementPopupComponent.cpp:27
	const float32_t KF_TIME_BETWEEN_POPUPS_SECS;

}

// BrnAchievementPopupComponent.cpp:208
void BrnGui::AchievementPopupComponent::SetTime(float32_t  lfGameTime_Seconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAchievementPopupComponent.cpp:236
void BrnGui::AchievementPopupComponent::BecomeInvisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAchievementPopupComponent.cpp:94
void BrnGui::AchievementPopupComponent::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAchievementPopupComponent.cpp:221
void BrnGui::AchievementPopupComponent::DisplayNewAchievementNotification(const AchievementPopupComponent::AchievementsBitArray *  lpAchievementsToShow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAchievementPopupComponent.cpp:51
void BrnGui::AchievementPopupComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

// BrnAchievementPopupComponent.cpp:73
void BrnGui::AchievementPopupComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementPopupComponent.cpp:80
		MovieClipRef lAchievementPopupBox;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnAchievementPopupComponent.cpp:110
void BrnGui::AchievementPopupComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementPopupComponent.cpp:122
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnAchievementPopupComponent.cpp:123
		char[64] lacTempString;

		// BrnAchievementPopupComponent.cpp:124
		int32_t liNextAchievementToShow;

		// BrnAchievementPopupComponent.cpp:125
		const BrnProgression::Profile * lpProfile;

		// BrnAchievementPopupComponent.cpp:126
		uint32_t luNumAchievementsEarnt;

		// BrnAchievementPopupComponent.cpp:133
		const char * lpcNextAchievementId;

		CgsContainers::BitArray<60u>::GetFirstNonZeroBit(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetProgressionProfile(/* parameters */);
		BrnProgression::Profile::GetNumAchievementsWritten(/* parameters */);
		CgsContainers::BitArray<60u>::CountSetBits(/* parameters */);
	}
	CgsContainers::BitArray<60u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<60u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAchievementPopupComponent.cpp:29
// BrnAchievementPopupComponent.cpp:30
// BrnAchievementPopupComponent.cpp:31
// BrnAchievementPopupComponent.cpp:33
