// BrnCompassComponent.cpp:489
void BrnGui::CompassComponent::FormatDirectionLetters(CgsLanguage::ELanguage  leLanguage, BrnFlapt::MovieClipRef *  lpMovieClipRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.cpp:491
		MovieClipRef lEast;

		// BrnCompassComponent.cpp:492
		MovieClipRef lWest;

	}
}

// BrnCompassComponent.cpp:323
void BrnGui::CompassComponent::SetVisibility(bool  lbVisible, bool  lbImmediate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetViewState(/* parameters */);
	SetViewState(/* parameters */);
	SetViewState(/* parameters */);
	SetViewState(/* parameters */);
}

// BrnCompassComponent.cpp:123
void BrnGui::CompassComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, int32_t  liParentAptLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

// BrnCompassComponent.cpp:428
void BrnGui::CompassComponent::ShowPositionOnCompass(const rw::math::vpu::Vector3  lv3Destination, float32_t  lfBearing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.cpp:430
		float32_t lfMarkerPos;

		// BrnCompassComponent.cpp:432
		Vector3 lv3CarToDest;

		// BrnCompassComponent.cpp:433
		Vector3 lv3North;

		// BrnCompassComponent.cpp:435
		float32_t lfDestinationBearing;

		// BrnCompassComponent.cpp:454
		BrnGui::CompassComponent::EPlayerRouteState lePlayerRouteState;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::AngleBetweenVectors(/* parameters */);
	{
	}
	rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
	rw::math::vpu::ACos(/* parameters */);
	std(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	vec_sub(/* parameters */);
	{
		{
			{
			}
		}
	}
	vec_madd(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_sra(/* parameters */);
	{
	}
	{
	}
	{
	}
	vec_abs(/* parameters */);
	vec_madd(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	FindAngleInRange(/* parameters */);
	FindAngleInRange(/* parameters */);
	std::fabs(/* parameters */);
	UpdatePlayerMarkerState(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	SetMarkerPos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnCompassComponent.cpp:388
void BrnGui::CompassComponent::ShowChallengeOnCompass(float32_t  lfBearing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.cpp:390
		const FreeburnChallengeManager * lpChallengeManager;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
	}
	FreeburnChallengeManager::IsActive(/* parameters */);
	{
		// BrnCompassComponent.cpp:394
		const ChallengeListEntryAction * lpAction;

		// BrnCompassComponent.cpp:396
		uint8_t luLocationIndex;

		FreeburnChallengeManager::GetCurrentAction(/* parameters */);
		{
			// BrnCompassComponent.cpp:401
			BoxRegion lBox;

			GuiCache::GetWorldDataController(/* parameters */);
			BrnResource::ChallengeListEntryAction::GetTriggerID(/* parameters */);
			BrnTrigger::BoxRegion::GetPosition(/* parameters */);
			SetMarkerIcon(/* parameters */);
		}
	}
}

// BrnCompassComponent.cpp:367
void BrnGui::CompassComponent::ShowLandmarkOnCompass(LandmarkIndex  lLandmark, float32_t  lfBearing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.cpp:369
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lLandmarkInfo;

	}
}

// BrnCompassComponent.cpp:220
void BrnGui::CompassComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.cpp:224
		float32_t lfRotation;

		// BrnCompassComponent.cpp:225
		float32_t lfBearing;

		// BrnCompassComponent.cpp:227
		const GuiPlayerInfo * lpGuiPlayerInfo;

	}
	FindAngleInRange(/* parameters */);
	SetBearing(/* parameters */);
	{
		// BrnCompassComponent.cpp:244
		BrnGameState::GameStateModuleIO::EGameModeType leGameMode;

	}
	SetMarkerPos(/* parameters */);
	SetMarkerIcon(/* parameters */);
	GuiCache::GetEventDestinationLandmarkIndex(/* parameters */);
	SetMarkerIcon(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCompassComponent.cpp:261
		const LandmarkIndex * lpLandmarks;

		// BrnCompassComponent.cpp:262
		GuiTracker * lpTracker;

		GuiCache::GetGuiTracker(/* parameters */);
		SetMarkerIcon(/* parameters */);
	}
	SetMarkerIcon(/* parameters */);
}

// BrnCompassComponent.cpp:156
void BrnGui::CompassComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.cpp:158
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnCompassComponent.cpp:159
		char[32] lacTempString;

		// BrnCompassComponent.cpp:164
		MovieClipRef lCompassViewParent;

		// BrnCompassComponent.cpp:171
		MovieClipRef lCompassViewFrontLeft;

		// BrnCompassComponent.cpp:172
		MovieClipRef lCompassViewFrontCentre;

		// BrnCompassComponent.cpp:173
		MovieClipRef lCompassViewFrontRight;

		// BrnCompassComponent.cpp:174
		MovieClipRef lCompassViewBackLeft;

		// BrnCompassComponent.cpp:175
		MovieClipRef lCompassViewBackCentre;

		// BrnCompassComponent.cpp:176
		MovieClipRef lCompassViewBackRight;

		// BrnCompassComponent.cpp:194
		CgsLanguage::ELanguage leLanguage;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
	BrnFlapt::MovieClipRef::GetPosition(/* parameters */);
	BrnFlapt::MovieClipRef::GetPosition(/* parameters */);
	rw::math::vpu::Vector4::GetX(/* parameters */);
	BrnFlapt::MovieClipRef::GetPosition(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	Set<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::GetX(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	Set<VectorAxisX, VectorAxisY>(/* parameters */);
	BrnFlapt::MovieClipRef::GetPosition(/* parameters */);
	rw::math::vpu::Vector4::GetX(/* parameters */);
	Set<VectorAxisX, VectorAxisY>(/* parameters */);
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

// BrnCompassComponent.cpp:27
// BrnCompassComponent.cpp:34
// BrnCompassComponent.cpp:36
// BrnCompassComponent.cpp:44
// BrnCompassComponent.cpp:72
