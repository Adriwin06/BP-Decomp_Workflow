// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteRequestManager.cpp:33
	const float32_t KF_MIN_DISTANCE_BIAS_SEPARATION;

	// BrnRouteRequestManager.cpp:34
	const float32_t KF_MIN_DISTANCE_BIAS_PROPORTION;

}

// BrnRouteRequestManager.cpp:116
void BrnAI::RouteRequestManager::ClearBlockSections() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:118
		int32_t liCheckpointIndex;

		CgsContainers::Array<uint32_t,8u>::Clear(/* parameters */);
	}
}

// BrnRouteRequestManager.cpp:218
void BrnAI::RouteRequestManager::GenerateFleeingDestination(AICar *  lpAICar, const AISectionsData *  lpAISectionData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:220
		uint16_t luDestinationSection;

		CgsNumeric::Random::RandomUInt(/* parameters */);
	}
	CgsNumeric::Random::RandomUInt(/* parameters */);
	AICar::SetDestination(/* parameters */);
}

// BrnRouteRequestManager.cpp:99
void BrnAI::RouteRequestManager::SetBlockSections(int32_t  liCheckpointIndex, const Array<uint32_t,8u> *  laBlockSectionIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<uint32_t,8u>::Construct(/* parameters */);
	AppendArray<8u>(/* parameters */);
}

// BrnRouteRequestManager.cpp:240
void BrnAI::RouteRequestManager::GenerateFreeRoamingDestination(AICar *  lpAICar, AICar *  lpPlayerCar, const AISectionsData *  lpAISectionData, BrnAI::BuzzBy *  lpBuzzByManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:242
		uint16_t luAISectionIndex;

	}
	CgsNumeric::Random::RandomInt(/* parameters */);
	{
		// BrnRouteRequestManager.cpp:249
		const AISection * lpAISection;

		AISectionsData::GetAISection(/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		AISection::IsShortcut(/* parameters */);
		AISectionsData::GetAISectionCount(/* parameters */);
		AICar::SetDestination(/* parameters */);
	}
}

// BrnRouteRequestManager.cpp:362
void BrnAI::RouteRequestManager::ChooseDistanceFunction(const AICar *  lpAICar, const AISectionsData *  lpAISectionData, BrnAI::AStarDistanceFunction  leDefaultAStarDistanceFunction, uint16_t  luDestinationSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:364
		const float32_t KF_HACK_CONTRYSIDE_DIVIDE;

		// BrnRouteRequestManager.cpp:366
		Vector3 lStartPos;

		// BrnRouteRequestManager.cpp:367
		Vector3 lEndPos;

		// BrnRouteRequestManager.cpp:368
		Vector2 lDiff;

		// BrnRouteRequestManager.cpp:369
		Vector2 lAbsDiff;

		// BrnRouteRequestManager.cpp:370
		Vector2 lDir;

		// BrnRouteRequestManager.cpp:371
		Vector2 lAbsDir;

		// BrnRouteRequestManager.cpp:372
		bool lbDrivingAway;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AICar::GetDirection(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::operator><VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRouteRequestManager.cpp:425
void BrnAI::RouteRequestManager::GenerateAlternativeRouteRequest(AICar *  lpAICar, const AICar *  lpPlayerCar, const AISectionsData *  lpAISectionData, InputBuffer *  lpRouteInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:430
		RaceRouteRequest lRouteRequest;

		// BrnRouteRequestManager.cpp:431
		uint16_t luDestinationSectionIndex;

		// BrnRouteRequestManager.cpp:432
		uint16_t luBestSectionIndex;

		AICar::GetBestSectionIndex(/* parameters */);
		RaceRouteRequest(/* parameters */);
		AICar::GetPosition(/* parameters */);
		AISectionsData::GetMiddle(/* parameters */);
		RouteMapModuleIO::RaceRouteRequest::SetUseAIShortcuts(/* parameters */);
		RouteMapModuleIO::RaceRouteRequest::SetDistanceFunction(/* parameters */);
		RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::AddEventSafe(/* parameters */);
	}
	RouteMapModuleIO::RaceRouteRequest::SetDistanceFunction(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRouteRequestManager.cpp:477
void BrnAI::RouteRequestManager::GenerateExtrapolatedRouteRequest(AICar *  lpAICar, const AISectionsData *  lpAISectionData, InputBuffer *  lpRouteInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:479
		ExtrapolatedRouteRequest lRouteRequest;

		AICar::GetBestSectionIndex(/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	RouteMapModuleIO::ExtrapolatedRouteRequest::Construct(/* parameters */);
	RouteMapModuleIO::InputBuffer::GetExtrapolatedRouteRequestQueue(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::AddEventSafe(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRouteRequestManager.cpp:507
void BrnAI::RouteRequestManager::GetFleeVector(AICar *  lpCarToAvoid, AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRouteRequestManager.cpp:538
void BrnAI::RouteRequestManager::GenerateRouteFleeingRouteRequest(AICar *  lpAICar, AICar *  lpCarToAvoid, const AISectionsData *  lpAISectionData, InputBuffer *  lpRouteInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:540
		ExtrapolatedRouteRequest lRouteRequest;

		AICar::GetBestSectionIndex(/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	RouteMapModuleIO::ExtrapolatedRouteRequest::Construct(/* parameters */);
	RouteMapModuleIO::InputBuffer::GetExtrapolatedRouteRequestQueue(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::AddEventSafe(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRouteRequestManager.cpp:567
void BrnAI::RouteRequestManager::ComputeSectionBehind(const AICar *  lpAICar, const AISectionsData *  lpAISectionData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:569
		const AISection * lpBestSection;

		// BrnRouteRequestManager.cpp:570
		uint16_t luBlockSectionIndex;

		// BrnRouteRequestManager.cpp:571
		uint8_t luPortalToBlockedSection;

		AICar::GetBestSectionIndex(/* parameters */);
	}
	AISectionsData::GetAISection(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRouteRequestManager.cpp:278
void BrnAI::RouteRequestManager::GenerateStandardRouteRequest(AICar *  lpAICar, const AISectionsData *  lpAISectionData, InputBuffer *  lpRouteInputBuffer, BrnAI::EUTurns  leAllowUTurns) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:282
		RaceRouteRequest lRouteRequest;

		// BrnRouteRequestManager.cpp:283
		uint16_t luDestinationSectionIndex;

		// BrnRouteRequestManager.cpp:284
		uint16_t luBestSectionIndex;

		AICar::GetBestSectionIndex(/* parameters */);
		RaceRouteRequest(/* parameters */);
		{
			// BrnRouteRequestManager.cpp:288
			BrnAI::AStarDistanceFunction leDistanceFunction;

			// BrnRouteRequestManager.cpp:343
			InputBuffer::RaceRouteRequestQueue * lpRaceRouteRequestQueue;

			AICar::GetPosition(/* parameters */);
			AISectionsData::GetMiddle(/* parameters */);
			RouteMapModuleIO::RaceRouteRequest::SetUseAIShortcuts(/* parameters */);
			RouteMapModuleIO::RaceRouteRequest::SetDistanceFunction(/* parameters */);
			{
				// BrnRouteRequestManager.cpp:323
				uint32_t luBlockSectionIndex;

				// BrnRouteRequestManager.cpp:324
				Array<uint32_t,8u> * lpaCheckpointBlockSectionIds;

				RouteMapModuleIO::RaceRouteRequest::SetQuality(/* parameters */);
				RouteMapModuleIO::RaceRouteRequest::AddBlockSectionId(/* parameters */);
				CgsContainers::Array<uint32_t,8u>::GetLength(/* parameters */);
				CgsContainers::Array<uint32_t,8u>::GetItem(/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
			RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue(/* parameters */);
			CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::AddEventSafe(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRouteRequestManager.cpp:339
		int32_t liSectionIndex;

		AISectionsData::GetAISection(/* parameters */);
		AISection::GetId(/* parameters */);
		RouteMapModuleIO::RaceRouteRequest::AddBlockSectionId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRouteRequestManager.cpp:141
void BrnAI::RouteRequestManager::GenerateRoute(AICar *  lpAICar, AICar *  lpPlayerCar, AICar *  lpaAICars, const AISectionsData *  lpAISectionData, InputBuffer *  lpRouteInputBuffer, BrnAI::BuzzBy *  lpBuzzByManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:201
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRouteRequestManager.cpp:62
void BrnAI::RouteRequestManager::Update(AICar *  lpaAICars, AICar *  lpPlayerCar, const AISectionsData *  lpAISectionData, InputBuffer *  lpRouteInputBuffer, BrnAI::BuzzBy *  lpBuzzByManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteRequestManager.cpp:66
		int32_t liAICarIndex;

		{
			// BrnRouteRequestManager.cpp:70
			AICar * lpAICar;

		}
		AICar::GetBestSectionIndex(/* parameters */);
	}
}

// BrnRouteRequestManager.cpp:44
// BrnRouteRequestManager.cpp:31
