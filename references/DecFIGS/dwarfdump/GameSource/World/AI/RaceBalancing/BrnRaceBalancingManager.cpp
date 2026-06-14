// BrnRaceBalancingManager.cpp:149
void BrnAI::RaceBalancingManager::Update(const AICar *  lpPlayerCar, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceBalancingManager.cpp:114
void BrnAI::RaceBalancingManager::OnRaceStartPlaying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceBalancingManager.cpp:129
void BrnAI::RaceBalancingManager::OnRaceEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Clear(/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Clear(/* parameters */);
}

// BrnRaceBalancingManager.cpp:55
void BrnAI::RaceBalancingManager::Construct(BrnAI::AIModule *  lpAIModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Construct(/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Construct(/* parameters */);
}

// BrnRaceBalancingManager.cpp:415
void _GLOBAL__D__ZN5BrnAI8AIModule10miUpdatePME() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceBalancingManager.cpp:414
void _GLOBAL__I__ZN5BrnAI8AIModule10miUpdatePME() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceBalancingManager.cpp:229
void BrnAI::RaceBalancingManager::OnOpponentReachedCheckpoint(const AICar *  lpAICar, int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingManager.cpp:235
		RaceBalancingRoute * lpRaceBalancingRoute;

		CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
		RaceBalancingRoute::OnCheckpoint(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRaceBalancingManager.cpp:83
void BrnAI::RaceBalancingManager::OnRaceStart(const Array<BrnAI::RaceBalancingGraph,7u> *  lpRaceBalancingGraphArray, int32_t  liCheckpointCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingManager.cpp:87
		uint32_t liGraphIndex;

	}
	CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Construct(/* parameters */);
	AppendArray<7u>(/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Construct(/* parameters */);
	RaceBalancingRoute::Construct(/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRaceBalancingManager.cpp:252
void BrnAI::RaceBalancingManager::OnOpponentTakenDown(const AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
	RaceBalancingRoute::OnTakenDown(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRaceBalancingManager.cpp:311
void BrnAI::RaceBalancingManager::CalculateScheduleOffset(const AICar *  lpAICar, float32_t *  lafOutScheduleOffsets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingManager.cpp:318
		const RaceBalancingRoute * lpRaceBalancingRoute;

		CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
		AICar::HasValidRoute(/* parameters */);
		AICar::GetNextRouteNodeIndex(/* parameters */);
		RaceBalancingRoute::GetTime(/* parameters */);
		RaceBalancingRoute::GetTime(/* parameters */);
		AICar::GetNextRouteNodeIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRaceBalancingManager.cpp:177
void BrnAI::RaceBalancingManager::UpdateOpponentRoute(const AICar *  lpAICar, const AISectionsData *  lpAISectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingManager.cpp:186
		const Route * lpRoute;

		{
			// BrnRaceBalancingManager.cpp:191
			RaceBalancingRoute * lpRaceBalancingRoute;

			// BrnRaceBalancingManager.cpp:192
			RaceBalancingGraph * lpRaceBalancingGraph;

			CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
			CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::operator[](/* parameters */);
			RaceBalancingRoute::Recalculate(/* parameters */);
			RaceBalancingRoute::GetTotalTime(/* parameters */);
			RaceBalancingRoute::GetTotalTime(/* parameters */);
			Route::GetNodeCount(/* parameters */);
			{
				AISectionsData::GetAISection(/* parameters */);
				RouteNode::GetPosition(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				RouteNode::GetPosition(/* parameters */);
				rw::math::vpu::Magnitude(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
				rw::math::fpu::Clamp<int>(/* parameters */);
				rw::math::fpu::Clamp<int>(/* parameters */);
				rw::math::fpu::Clamp<float>(/* parameters */);
				RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
				rw::math::fpu::Min<float>(/* parameters */);
			}
			RaceBalancingRoute::Prepare(/* parameters */);
		}
	}
	rw::math::fpu::Min<int>(/* parameters */);
	rw::math::fpu::Min<int>(/* parameters */);
	Route::GetDistance(/* parameters */);
	RouteNode::GetDistanceLeft(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	Route::GetDistance(/* parameters */);
	{
	}
	AISectionsData::GetAISection(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
	rw::math::fpu::Clamp<int>(/* parameters */);
	rw::math::fpu::Clamp<int>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
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
	rw::math::fpu::Min<int>(/* parameters */);
	rw::math::fpu::Min<int>(/* parameters */);
	rw::math::fpu::Max<int>(/* parameters */);
	rw::math::fpu::Max<int>(/* parameters */);
	rw::math::fpu::Max<int>(/* parameters */);
	rw::math::fpu::Max<int>(/* parameters */);
}

// BrnRaceBalancingManager.cpp:395
void BrnAI::RaceBalancingManager::ComputeParSpeed(BrnAI::GraphType  leGraphType, const AICar *  lpAICar, const AISectionsData *  lpAISectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::HasValidRoute(/* parameters */);
	{
		// BrnRaceBalancingManager.cpp:399
		const RaceBalancingGraph * lpRaceBalancingGraph;

		// BrnRaceBalancingManager.cpp:400
		const RaceBalancingRoute * lpRaceBalancingRoute;

		// BrnRaceBalancingManager.cpp:401
		const RouteNode * lpNode;

		// BrnRaceBalancingManager.cpp:402
		const AISection * lpAISection;

		// BrnRaceBalancingManager.cpp:404
		float32_t lfRaceCompletionRatio;

		CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
		AICar::GetNextRouteNode(/* parameters */);
		Route::GetNode(/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
		rw::math::fpu::Clamp<int>(/* parameters */);
		rw::math::fpu::Min<int>(/* parameters */);
		rw::math::fpu::Clamp<int>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	rw::math::fpu::Max<int>(/* parameters */);
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

// BrnRaceBalancingManager.cpp:340
void BrnAI::RaceBalancingManager::ComputeTargetSpeed(BrnAI::GraphType  leGraphType, const AICar *  lpAICar, const AISectionsData *  lpAISectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingManager.cpp:342
		float32_t lfSpeed;

	}
	AICar::HasValidRoute(/* parameters */);
	{
		// BrnRaceBalancingManager.cpp:346
		const RaceBalancingRoute * lpRaceBalancingRoute;

		CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
		{
			// BrnRaceBalancingManager.cpp:352
			float32_t lfTargetTime;

			// BrnRaceBalancingManager.cpp:353
			float32_t lfSpeedMultiplier;

			AICar::GetNextRouteNodeIndex(/* parameters */);
			RaceBalancingRoute::GetTime(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
		}
		AICar::GetMaxPlayerSpeed(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRaceBalancingManager.cpp:275
void BrnAI::RaceBalancingManager::ComputeTargetSpeed(const AICar *  lpAICar, const AISectionsData *  lpAISectionsData, bool  lbPlayerIsCrashing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingManager.cpp:277
		float32_t lfTargetSpeed;

	}
	AICar::HasValidRoute(/* parameters */);
	AICar::GetNextRouteNodeIndex(/* parameters */);
	CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRaceBalancingManager.cpp:25
// BrnRaceBalancingManager.cpp:26
// BrnRaceBalancingManager.cpp:27
// BrnRaceBalancingManager.cpp:28
// BrnRaceBalancingManager.cpp:29
// BrnRaceBalancingManager.cpp:30
// BrnRaceBalancingManager.cpp:31
// BrnRaceBalancingManager.cpp:32
