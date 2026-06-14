// BrnDistrictMarker.cpp:144
void BrnGui::DistrictMarkerComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDistrictMarker.cpp:324
void BrnGui::DistrictMarkerComponent::OnLoad(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDistrictMarker.cpp:52
void BrnGui::DistrictMarkerComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

// BrnDistrictMarker.cpp:109
void BrnGui::DistrictMarkerComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDistrictMarker.cpp:111
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnDistrictMarker.cpp:112
		char[64] lacTempString;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnDistrictMarker.cpp:425
void BrnGui::DistrictMarkerComponent::ProcessDistrictTransitionComplete(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDistrictMarker.cpp:490
void BrnGui::DistrictMarkerComponent::DistrictTransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDistrictMarker.cpp:494
		DistrictMarkerComponent * lpThis;

	}
}

// BrnDistrictMarker.cpp:382
void BrnGui::DistrictMarkerComponent::ProcessCountyTransitionComplete(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDistrictMarker.cpp:469
void BrnGui::DistrictMarkerComponent::CountyTransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDistrictMarker.cpp:473
		DistrictMarkerComponent * lpThis;

	}
}

// BrnDistrictMarker.cpp:249
void BrnGui::DistrictMarkerComponent::SetDistrict(BrnWorld::EDistrict  leDistrictID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDistrictMarker.cpp:252
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDistrictMarker.cpp:160
void BrnGui::DistrictMarkerComponent::SetCounty(BrnWorld::ECounty  leCountyID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDistrictMarker.cpp:163
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDistrictMarker.cpp:25
// BrnDistrictMarker.cpp:26
// BrnDistrictMarker.cpp:28
// BrnDistrictMarker.cpp:29
