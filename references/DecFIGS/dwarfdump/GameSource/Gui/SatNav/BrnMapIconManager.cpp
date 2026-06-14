// BrnMapIconManager.cpp:764
void BrnGui::MapIconManager::UpdateSatNavParams(const GuiEventSatNavParameters *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:3317
void BrnGui::MapIconManager::IsPlayer(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3319
		bool lbIsPlayer;

		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	}
}

// BrnMapIconManager.cpp:3357
void BrnGui::MapIconManager::SetShowDrivethrus(bool  lbShowDrivethrus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:3372
void BrnGui::MapIconManager::SetAllowDriveThruSelection(bool  lbAllowDriveThruSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:3389
void BrnGui::MapIconManager::SetAllowRivalSelection(bool  lbAllowRivalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:3404
void BrnGui::MapIconManager::SetAllowPlayerSelection(bool  lbAllowPlayerSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:2876
void BrnGui::MapIconManager::IsFinishIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetEventFinishLandmark(/* parameters */);
	{
		// BrnMapIconManager.cpp:2891
		const Race * lpPresetRace;

	}
	GuiCache::GetPresetRace(/* parameters */);
	BrnProgression::Race::GetFinishLandmarkIndex(/* parameters */);
}

// BrnMapIconManager.cpp:2127
void BrnGui::MapIconManager::CalculateAlpha(Vector3  lv3IconPosition, Vector2  lv2PlayerPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2132
		const float32_t KF_CLOSE_DISTANCE;

		// BrnMapIconManager.cpp:2133
		const float32_t KF_FAR_DISTANCE;

		// BrnMapIconManager.cpp:2134
		const float32_t KF_MIN_ALPHA;

		// BrnMapIconManager.cpp:2135
		const float32_t KF_MAX_ALPHA;

		// BrnMapIconManager.cpp:2136
		const float32_t KF_MIN_ALPHA_LERP;

		// BrnMapIconManager.cpp:2137
		const float32_t KF_MAX_ALPHA_LERP;

		// BrnMapIconManager.cpp:2139
		Vector2 lv2Distance;

		// BrnMapIconManager.cpp:2141
		float32_t lfDistance;

		MapTransform::Flatten(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:2155
		float32_t lfAlphaProp;

		// BrnMapIconManager.cpp:2156
		float32_t lfAlphaValue;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2802
void BrnGui::MapIconManager::IsStartIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2812
		const Race * lpPresetRace;

		GuiCache::GetPresetRace(/* parameters */);
		BrnProgression::Race::GetStartLandmarkIndex(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2690
void BrnGui::MapIconManager::GetDriveThroughAndJunkyardCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2694
		int32_t liDriveThroughCount;

		// BrnMapIconManager.cpp:2695
		int32_t liIconIndex;

		// BrnMapIconManager.cpp:2697
		bool lbIsMarkedManOrRoadRage;

	}
	{
		// BrnMapIconManager.cpp:2703
		const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpDriveThroughInfo;

		GuiCache::GetDriveThrough(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		GuiCache::IsInFreeburn(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	}
}

// BrnMapIconManager.cpp:3229
void BrnGui::MapIconManager::IsRival(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3231
		bool lbIsRival;

		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2588
void BrnGui::MapIconManager::GetEventIDAtIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2593
		int32_t liEventStartIndex;

	}
	GetNumRivalIcons(/* parameters */);
}

// BrnMapIconManager.cpp:3269
void BrnGui::MapIconManager::IsJunkyard(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
}

// BrnMapIconManager.cpp:3191
void BrnGui::MapIconManager::IsActiveJunkyard(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3193
		bool lbIsActiveJunkyard;

	}
}

// BrnMapIconManager.cpp:3283
void BrnGui::MapIconManager::IsDriveThrough(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3285
		bool lbDriveThrough;

		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2171
void BrnGui::MapIconManager::AppendExpectedAptComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:681
void BrnGui::MapIconManager::UpdateFreeburnChallengeIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:685
		const FreeburnChallengeManager * lpChallengeManager;

		// BrnMapIconManager.cpp:700
		const ChallengeListEntryAction * lpAction;

		// BrnMapIconManager.cpp:702
		uint8_t luLocationIndex;

	}
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	FreeburnChallengeManager::IsActive(/* parameters */);
	FreeburnChallengeManager::GetCurrentAction(/* parameters */);
	{
		// BrnMapIconManager.cpp:709
		BoxRegion lBox;

		GuiCache::GetWorldDataController(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetTriggerID(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::SetIconType(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	}
}

// BrnMapIconManager.cpp:140
void BrnGui::MapIconManager::Construct(BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:171
		int32_t liIndex;

	}
	BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnMapIconManager.cpp:784
void BrnGui::MapIconManager::IconDisplaySort(const void *  lpElemA, const void *  lpElemB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:789
		const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpSatNavIconA;

		// BrnMapIconManager.cpp:790
		const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpSatNavIconB;

	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	{
		// BrnMapIconManager.cpp:787
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:786
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2204
void BrnGui::MapIconManager::GetSatNavIconStateForRival(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2206
		BrnGui::MapIconBrnBase::IconState leIconState;

		// BrnMapIconManager.cpp:2207
		EActiveRaceCarIndex leRivalActiveRaceCarIndex;

		// BrnMapIconManager.cpp:2208
		const InGamePlayerStatusData * lpPlayerData;

		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		{
			// BrnMapIconManager.cpp:2211
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		{
			// BrnMapIconManager.cpp:2266
			bool lbUseViewCone;

			// BrnMapIconManager.cpp:2285
			bool lbShowThisIcon;

			{
				// BrnMapIconManager.cpp:2327
				float32_t lfMaxDistToRival;

				// BrnMapIconManager.cpp:2329
				float32_t lfDistToRivalSquared;

				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::MagnitudeSquared(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				{
					// BrnMapIconManager.cpp:2335
					float32_t lfFOV;

					// BrnMapIconManager.cpp:2336
					Matrix33 lm33CarRotation;

					// BrnMapIconManager.cpp:2337
					Vector3 lv3PlayerLookahead;

					// BrnMapIconManager.cpp:2338
					Vector3 lv3PlayerToRival;

					// BrnMapIconManager.cpp:2339
					float32_t lfCosAngle;

					rw::math::vpu::VecFloat::VecFloat(/* parameters */);
					rw::math::vpu::Matrix33FromYRotationAngle(/* parameters */);
					vec_sel(/* parameters */);
					vec_add(/* parameters */);
					vec_and(/* parameters */);
					vec_cmpeq(/* parameters */);
					vec_madd(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					vec_nmsub(/* parameters */);
					rw::math::vpu::operator-(/* parameters */);
					vec_nmsub(/* parameters */);
					vec_madd(/* parameters */);
					rw::math::vpu::Vector3::Vector3(/* parameters */);
					rw::math::vpu::Normalize(/* parameters */);
					vec_madd(/* parameters */);
					vec_add(/* parameters */);
					vec_and(/* parameters */);
					vec_madd(/* parameters */);
					vec_madd(/* parameters */);
					vec_cts(/* parameters */);
					vec_ctf(/* parameters */);
					rw::math::vpu::VecFloat::VecFloat(/* parameters */);
					rw::math::vpu::operator*(/* parameters */);
					vec_and(/* parameters */);
					vec_and(/* parameters */);
					vec_and(/* parameters */);
					vec_cmpeq(/* parameters */);
					vec_cmpeq(/* parameters */);
					vec_cmpeq(/* parameters */);
					vec_madd(/* parameters */);
					vec_madd(/* parameters */);
					vec_madd(/* parameters */);
					vec_sel(/* parameters */);
					vec_sel(/* parameters */);
					vec_xor(/* parameters */);
					vec_sel(/* parameters */);
					vec_xor(/* parameters */);
					vec_sel(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::Matrix33::Matrix33(/* parameters */);
					{
					}
					rw::math::vpu::VecFloat::VecFloat(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::Vector3::Set(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::Vector3::Set(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					{
						// BrnMapIconManager.cpp:2347
						float32_t lfAngle;

						rw::math::vpu::VecFloat::VecFloat(/* parameters */);
						rw::math::vpu::ACos(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_abs(/* parameters */);
						vec_madd(/* parameters */);
						vec_sub(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						std(/* parameters */);
						vec_nmsub(/* parameters */);
						vec_rsqrte(/* parameters */);
						vec_cmpeq(/* parameters */);
						vec_madd(/* parameters */);
						vec_sra(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_nmsub(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_sel(/* parameters */);
						vec_madd(/* parameters */);
						rw::math::vpu::VecFloat::operator float(/* parameters */);
					}
				}
			}
		}
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetActiveRaceCarIndex(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	rw::math::vpu::DegToRad(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	{
		// BrnMapIconManager.cpp:2300
		EActiveRaceCarIndex leIndexFromIcon;

		GuiEventUpdateSatNav::SatNavIconInfo::GetActiveRaceCarIndex(/* parameters */);
		GuiCache::GetEventPositionOfRaceCar(/* parameters */);
		GuiCache::GetOpponentsInEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2377
void BrnGui::MapIconManager::GetCrashNavIconStateForRival(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2379
		BrnGui::MapIconBrnBase::IconState leIconState;

		// BrnMapIconManager.cpp:2380
		EActiveRaceCarIndex leRivalActiveRaceCarIndex;

		// BrnMapIconManager.cpp:2381
		const InGamePlayerStatusData * lpPlayerData;

		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		{
			// BrnMapIconManager.cpp:2384
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetActiveRaceCarIndex(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
}

// BrnMapIconManager.cpp:2528
void BrnGui::MapIconManager::GetRivalIconAtIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2534
		int32_t liIconIndex;

		// BrnMapIconManager.cpp:2535
		int32_t liRivalIndex;

	}
	GetNumRivalIcons(/* parameters */);
	{
		// BrnMapIconManager.cpp:2548
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2628
void BrnGui::MapIconManager::GetDriveThroughOrJunkyardAtIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2631
		int32_t liDriveThroughIndex;

		// BrnMapIconManager.cpp:2632
		int32_t liIconIndex;

		// BrnMapIconManager.cpp:2642
		bool lbIsMarkedManOrRoadRage;

	}
	{
		// BrnMapIconManager.cpp:2648
		const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpDriveThroughInfo;

		GuiCache::GetDriveThrough(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		GuiCache::IsInFreeburn(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:2676
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetNumRivalIcons(/* parameters */);
}

// BrnMapIconManager.cpp:2454
void BrnGui::MapIconManager::GetSatNavIconPositions(Vector2 *  lv2IconPositions, int32_t *  lpiNumIcons) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2464
		int32_t liIconIndex;

		// BrnMapIconManager.cpp:2465
		int32_t liAddedIcons;

	}
	{
		// BrnMapIconManager.cpp:2502
		int32_t liEventCount;

	}
	{
		// BrnMapIconManager.cpp:2490
		int32_t liIconIndex;

	}
	{
		// BrnMapIconManager.cpp:2480
		int32_t liRoadCount;

	}
}

// BrnMapIconManager.cpp:2739
void BrnGui::MapIconManager::IsTrackedIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2743
		bool lbIsTrackedIcon;

	}
	{
		// BrnMapIconManager.cpp:2747
		const GuiTracker * lpGuiTracker;

		{
			// BrnMapIconManager.cpp:2772
			const BrnGui::GuiTracker::TrackerInfo * lpTrackerInfo;

			GuiTracker::GetCurrentlyTrackedIndex(/* parameters */);
			GuiTracker::GetTrackerInformation(/* parameters */);
			GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
		}
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	{
		// BrnMapIconManager.cpp:2753
		int32_t liIndex;

		// BrnMapIconManager.cpp:2754
		const LandmarkIndex * lpLandmarkIndex;

		GuiCache::GetTargetLandmarks(/* parameters */);
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:2748
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:2835
void BrnGui::MapIconManager::IsPendingRaceLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2845
		BrnGui::GuiTracker * lpTracker;

		// BrnMapIconManager.cpp:2848
		const int32_t liNumTracked;

		// BrnMapIconManager.cpp:2849
		const int32_t liCurrentlyTrackedIndex;

		GuiCache::GetGuiTracker(/* parameters */);
		GuiTracker::GetCurrentlyTrackedIndex(/* parameters */);
		{
			// BrnMapIconManager.cpp:2853
			const BrnGui::GuiTracker::TrackerInfo * lpTrackerInfo;

			GuiTracker::GetTrackerInformation(/* parameters */);
		}
	}
}

// BrnMapIconManager.cpp:3250
void BrnGui::MapIconManager::IsLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3252
		bool lbIsLandmark;

	}
}

// BrnMapIconManager.cpp:2914
void BrnGui::MapIconManager::IsActiveLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2917
		LandmarkIndex[512] laBuiltLandmarkList;

		// BrnMapIconManager.cpp:2918
		uint8_t luNumActiveLandmarks;

		// BrnMapIconManager.cpp:2919
		int32_t liIndex;

		// BrnMapIconManager.cpp:2920
		int32_t liNumLandmarkIcons;

		// BrnMapIconManager.cpp:2921
		const LandmarkIndex * lpActiveLandmarkIndices;

		// BrnMapIconManager.cpp:2997
		bool lbFilteredOut;

		// BrnMapIconManager.cpp:3077
		bool lbIsActiveLandmark;

		IsLandmark(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:2943
		BrnGui::GuiTracker * lpGuiTracker;

		GuiCache::GetGuiTracker(/* parameters */);
	}
	GuiCache::GetActiveLandmarks(/* parameters */);
	BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
	BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	GuiCache::GetTargetLandmarks(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	{
		// BrnMapIconManager.cpp:2961
		BrnGui::GuiTracker * lpGuiTracker;

		GuiCache::GetGuiTracker(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:2970
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lLandmarkInfo;

		GuiCache::GetWorldDataController(/* parameters */);
		WorldDataController::GetTotalNumberOfLandmarks(/* parameters */);
		IsLandmark(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	GuiCache::GetActiveLandmarks(/* parameters */);
}

// BrnMapIconManager.cpp:3108
void BrnGui::MapIconManager::ShouldDisplayLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3112
		bool lbShouldDisplay;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnMapIconManager.cpp:3119
		const rw::math::vpu::Vector4 lv4WorldRect;

	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
}

// BrnMapIconManager.cpp:476
void BrnGui::MapIconManager::UpdateWorldIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:480
		BrnGameState::GameStateModuleIO::EGameModeType leGameMode;

		// BrnMapIconManager.cpp:482
		const rw::math::vpu::Vector4 lv4WorldRect;

		// BrnMapIconManager.cpp:484
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnMapIconManager.cpp:486
		int32_t liIndex;

		// BrnMapIconManager.cpp:487
		int32_t liLandmarksToConsider;

		// BrnMapIconManager.cpp:488
		int32_t liActiveJunkYardIndex;

		// BrnMapIconManager.cpp:489
		int32_t liActiveBodyShopIndex;

		// BrnMapIconManager.cpp:491
		float32_t lfBodyShopDistance;

		// BrnMapIconManager.cpp:492
		float32_t lfCurrentBodyShopDistance;

		// BrnMapIconManager.cpp:493
		float32_t lfCurrentJunkyardDistance;

		// BrnMapIconManager.cpp:494
		float32_t lfJunkyardDistance;

		// BrnMapIconManager.cpp:496
		bool lbIsMarkedManOrRoadRage;

	}
	GuiCache::GetGameMode(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
	WorldDataController::GetTotalNumberOfLandmarks(/* parameters */);
	{
		// BrnMapIconManager.cpp:583
		const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpDriveThroughInfo;

		rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	}
	GuiCache::GetDriveThrough(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiCache::GetDriveThrough(/* parameters */);
	GuiCache::GetDriveThrough(/* parameters */);
	GuiCache::GetCheckpointsInEvent(/* parameters */);
	{
		// BrnMapIconManager.cpp:520
		const LandmarkIndex * laLandmarkIndices;

		// BrnMapIconManager.cpp:521
		LandmarkIndex lNextLandmark;

	}
	{
		// BrnMapIconManager.cpp:547
		int32_t liActiveLandmarkIndex;

		// BrnMapIconManager.cpp:548
		uint8_t luNumActiveLandmarks;

		// BrnMapIconManager.cpp:549
		const LandmarkIndex * lpActiveLandmarkIndices;

		GuiCache::GetActiveLandmarks(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisZ>(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiCache::IsInFreeburn(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	GuiCache::IsInFreeburn(/* parameters */);
}

// BrnMapIconManager.cpp:3150
void BrnGui::MapIconManager::IsActiveRival(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:3152
		bool lbIsActiveRival;

	}
	{
		// BrnMapIconManager.cpp:3155
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:352
void BrnGui::MapIconManager::UpdateSatNavInfo(const GuiEventUpdateSatNav *  lpSatNavInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:362
		BrnGameState::GameStateModuleIO::EGameModeType leGameMode;

		// BrnMapIconManager.cpp:364
		const rw::math::vpu::Vector4 lv4WorldRect;

		// BrnMapIconManager.cpp:366
		const int32_t liNumIcons;

		// BrnMapIconManager.cpp:367
		int32_t liIndex;

	}
	GuiCache::GetGameMode(/* parameters */);
	{
		// BrnMapIconManager.cpp:371
		const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpSatNavIconInfo;

		// BrnMapIconManager.cpp:373
		float32_t lfAdjustmentX;

		// BrnMapIconManager.cpp:374
		float32_t lfAdjustmentY;

		// BrnMapIconManager.cpp:376
		bool lbCheckViewport;

		// BrnMapIconManager.cpp:377
		bool lbVisible;

		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetActiveRaceCarIndex(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetActiveRaceCarIndex(/* parameters */);
	GuiCache::HasRaceCarFinished(/* parameters */);
	{
		// BrnMapIconManager.cpp:456
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:3420
void BrnGui::MapIconManager::SetUseRoadSigns(bool  lbShouldNowUseRoadSigns, StateInterface *  lpStateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RoadSignIconManager::SetSignsVisible(/* parameters */);
	{
	}
	RoadSignIconManager::SetSignsVisible(/* parameters */);
}

// BrnMapIconManager.cpp:2185
void BrnGui::MapIconManager::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:2561
void BrnGui::MapIconManager::GetRoadSignNameAtIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:2566
		int32_t liRoadSignIndex;

	}
	GetNumRivalIcons(/* parameters */);
}

// BrnMapIconManager.cpp:222
void BrnGui::MapIconManager::ReleaseResources(StateInterface *  lpStateInterface, BrnGui::MapIconManager::OwnerId  lOwnerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResetOwnerParameter(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnMapIconManager.cpp:1497
void BrnGui::MapIconManager::UpdateSatNavIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:1499
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpSatNavIconInfo;

		// BrnMapIconManager.cpp:1500
		BrnGui::SatNavMapIcon * lpSatNavIcon;

		// BrnMapIconManager.cpp:1501
		BrnGui::MapIconBrnBase::IconState leIconState;

		// BrnMapIconManager.cpp:1502
		char[128] lacSatNavNameBuffer;

		// BrnMapIconManager.cpp:1503
		Vector2 lIconOffset;

		// BrnMapIconManager.cpp:1504
		Vector2 lv2PlayerPosition;

		// BrnMapIconManager.cpp:1505
		bool lbIgnoreIconAlpha;

		// BrnMapIconManager.cpp:1507
		int32_t liIndex;

		// BrnMapIconManager.cpp:1508
		int32_t liStartPointOffset;

		// BrnMapIconManager.cpp:1509
		const BrnGui::GuiEventNetworkGameParams * lpGameParams;

		// BrnMapIconManager.cpp:1512
		BrnGui::SatNavMapIcon * lpSatNavIconSet;

		// BrnMapIconManager.cpp:1537
		int32_t liNumIcons;

	}
	rw::core::stdc::Min(/* parameters */);
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	{
		// BrnMapIconManager.cpp:1549
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

	}
	{
		// BrnMapIconManager.cpp:1574
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

	}
	MapTransform::Flatten(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	{
		// BrnMapIconManager.cpp:1698
		float32_t lfRotation;

	}
	{
		// BrnMapIconManager.cpp:1535
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1740
		const GuiPlayerInfo * lpPlayerInfo;

		GuiCache::GetPlayerInfo(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1703
		const GuiPlayerInfo * lpPlayerInfo;

		GuiCache::GetPlayerInfo(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:2081
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

	}
	{
		// BrnMapIconManager.cpp:1663
		Vector2 lv2PlayerScreenPos;

		// BrnMapIconManager.cpp:1664
		Vector2[175] lv2IconPositions;

		// BrnMapIconManager.cpp:1665
		int32_t liNumEventIcons;

		// BrnMapIconManager.cpp:1666
		int32_t liEventIconIndex;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1720
		char[32] lacCarIdString;

	}
	{
		// BrnMapIconManager.cpp:1824
		BrnGui::MapIconBrnBase::IconState leCheckpointIconState;

		// BrnMapIconManager.cpp:1825
		BrnGui::MapIconBrnBase::IconState leFinishPointIconState;

		// BrnMapIconManager.cpp:1826
		int32_t liActiveLandmarkIndex;

		// BrnMapIconManager.cpp:1827
		int32_t liCheckpointIndex;

		// BrnMapIconManager.cpp:1828
		int32_t liDuplicateIconNumber;

		// BrnMapIconManager.cpp:1829
		int32_t liDuplicateIconCount;

		BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
		BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
	}
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
	{
		// BrnMapIconManager.cpp:1777
		const GuiTracker * lpGuiTracker;

		// BrnMapIconManager.cpp:1782
		int32_t liTrackedIndex;

		// BrnMapIconManager.cpp:1783
		const BrnGui::GuiTracker::TrackerInfo * lpTrackerInfo;

		GuiTracker::GetCurrentlyTrackedIndex(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
	}
	rw::math::vpu::Vector2::SetY(/* parameters */);
}

// BrnMapIconManager.cpp:842
void BrnGui::MapIconManager::UpdateCrashNavIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapIconManager.cpp:844
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * lpSatNavIconInfo;

		// BrnMapIconManager.cpp:845
		BrnGui::CrashNavMapIcon * lpSatNavIcon;

		// BrnMapIconManager.cpp:846
		BrnGui::MapIconBrnBase::IconState leIconState;

		// BrnMapIconManager.cpp:847
		char[128] lacSatNavNameBuffer;

		// BrnMapIconManager.cpp:848
		Vector2 lIconOffset;

		// BrnMapIconManager.cpp:849
		Vector2 lv2PlayerPosition;

		// BrnMapIconManager.cpp:850
		bool lbIgnoreIconAlpha;

		// BrnMapIconManager.cpp:852
		int32_t liIndex;

		// BrnMapIconManager.cpp:853
		int32_t liStartPointOffset;

		// BrnMapIconManager.cpp:854
		const BrnGui::GuiEventNetworkGameParams * lpGameParams;

		// BrnMapIconManager.cpp:857
		BrnGui::CrashNavMapIcon * lpSatNavIconSet;

		// BrnMapIconManager.cpp:882
		int32_t liNumIcons;

	}
	rw::core::stdc::Min(/* parameters */);
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	{
		// BrnMapIconManager.cpp:894
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

	}
	MapTransform::Flatten(/* parameters */);
	{
		// BrnMapIconManager.cpp:1476
		GuiEventMapIconStatus lGuiEventMapIconStatus;

		OutputGuiEvent<BrnGui::GuiEventMapIconStatus>(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:919
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	{
		// BrnMapIconManager.cpp:1437
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

	}
	{
		// BrnMapIconManager.cpp:1052
		float32_t lfRotation;

	}
	{
		// BrnMapIconManager.cpp:880
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1094
		const GuiPlayerInfo * lpPlayerInfo;

		GuiCache::GetPlayerInfo(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1057
		const GuiPlayerInfo * lpPlayerInfo;

		GuiCache::GetPlayerInfo(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1017
		Vector2 lv2PlayerScreenPos;

		// BrnMapIconManager.cpp:1018
		Vector2[175] lv2IconPositions;

		// BrnMapIconManager.cpp:1019
		int32_t liNumEventIcons;

		// BrnMapIconManager.cpp:1020
		int32_t liEventIconIndex;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:1074
		char[32] lacCarIdString;

	}
	{
		// BrnMapIconManager.cpp:1178
		BrnGui::MapIconBrnBase::IconState leCheckpointIconState;

		// BrnMapIconManager.cpp:1179
		BrnGui::MapIconBrnBase::IconState leFinishPointIconState;

		// BrnMapIconManager.cpp:1180
		int32_t liActiveLandmarkIndex;

		// BrnMapIconManager.cpp:1181
		int32_t liCheckpointIndex;

		// BrnMapIconManager.cpp:1182
		int32_t liDuplicateIconNumber;

		// BrnMapIconManager.cpp:1183
		int32_t liDuplicateIconCount;

		BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
		BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
	}
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
	{
		// BrnMapIconManager.cpp:1131
		const GuiTracker * lpGuiTracker;

		// BrnMapIconManager.cpp:1136
		int32_t liTrackedIndex;

		// BrnMapIconManager.cpp:1137
		const BrnGui::GuiTracker::TrackerInfo * lpTrackerInfo;

		GuiTracker::GetCurrentlyTrackedIndex(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
	}
	rw::math::vpu::Vector2::SetY(/* parameters */);
}

// BrnMapIconManager.cpp:818
void BrnGui::MapIconManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:3335
void BrnGui::MapIconManager::SetIconsVisible(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearIconInfo(/* parameters */);
}

// BrnMapIconManager.cpp:3456
void BrnGui::MapIconManager::SetUseEventIcons(BrnGui::GuiEventDrawEventIcons::EIconDisplayType  leNewEventIconType, StateInterface *  lpStateInterface, float32_t  lfOptionalFadeDuration, uint32_t *  lpuIconsToIgnore, int32_t  liNumIconstoIgnore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapIconManager.cpp:261
void BrnGui::MapIconManager::SetOwnerParameters(StateInterface *  lpStateInterface, const char *  lpcComponentName, int32_t  liMaxNumberIcons, BrnGui::MapIconManager::OwnerId  lCurrentOwnerId, bool  lbUseRoadSigns, bool  lbShowingDriveThrus, bool  lbAllowDriveThruSelection, BrnGui::GuiEventDrawEventIcons::EIconDisplayType  leEventIconDisplayType, const char *  lpcIconParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsCurrentOwner(/* parameters */);
	{
		// BrnMapIconManager.cpp:270
		char[256] lacText;

		// BrnMapIconManager.cpp:271
		int32_t liIndex;

		RoadSignIconManager::SetSignsVisible(/* parameters */);
		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CrashNavMapIcon::SetDirty(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
	{
		// BrnMapIconManager.cpp:302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMapIconManager.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnMapIconManager.cpp:83
// BrnMapIconManager.cpp:103
// BrnMapIconManager.cpp:34
// BrnMapIconManager.cpp:35
// BrnMapIconManager.cpp:39
// BrnMapIconManager.cpp:41
// BrnMapIconManager.cpp:42
// BrnMapIconManager.cpp:45
// BrnMapIconManager.cpp:63
