// BrnAStar.cpp:222
void BrnAI::AStar::Construct(const AISectionsData *  lpAISectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAStar.cpp:90
void BrnAI::AStarNodePool::NewNode(const const Vector2Template<float> &  lPosition, uint16_t  luLinkSectionIndex, uint16_t  luSectionIndex, uint8_t  luPortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.cpp:93
		uint16_t luPartitionIndex;

		// BrnAStar.cpp:94
		AStarNode * lpNode;

	}
	{
		// BrnAStar.cpp:99
		uint16_t luNodeIndex;

	}
	AStarNode::Construct(/* parameters */);
}

// BrnAStar.cpp:257
void BrnAI::AStar::Prepare(const const Vector2Template<float> &  lStartPosition, const const Vector2Template<float> &  lEndPosition, uint16_t  luStartSectionIndex, uint16_t  luEndSectionIndex, BrnAI::AStarQuality  leQuality, BrnAI::AStarDistanceFunction  leDistanceFunction, bool  lbUseAIShortcuts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	AStarNodePool::Construct(/* parameters */);
	Distance(/* parameters */);
	AStarNode::SetCost(/* parameters */);
	AStarNode::GetPosition(/* parameters */);
	AStarNode::SetHeuristic(/* parameters */);
}

// BrnAStar.cpp:124
void BrnAI::AStarNodePool::ExtractBestOpenNode(uint16_t *  lpuBestNodeIndex, float32_t  lfCostWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.cpp:130
		AStarNode * lpBestNode;

		// BrnAStar.cpp:131
		float32_t lfMinFunction;

		// BrnAStar.cpp:132
		uint16_t luBestOpenNodeIndex;

		// BrnAStar.cpp:133
		uint16_t luNodeIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnAStar.cpp:138
		AStarNode * lpNode;

		// BrnAStar.cpp:139
		float32_t lfFunction;

		GetNode(/* parameters */);
	}
	AStarNode::Close(/* parameters */);
	GetNode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAStar.cpp:186
void BrnAI::AStarNodePool::FindNode(uint16_t  luSectionIndex, uint8_t  luPortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.cpp:190
		uint16_t luPartitionIndex;

		// BrnAStar.cpp:191
		uint16_t luFirstNode;

		// BrnAStar.cpp:192
		uint16_t luPostLastNode;

		// BrnAStar.cpp:193
		uint16_t luNodeIndex;

		// BrnAStar.cpp:194
		AStarNode * lpNode;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnAStar.cpp:198
		AStarNode * lpCurrentNode;

		GetNode(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAStar.cpp:298
void BrnAI::AStar::Compute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	AStarNodePool::GetNodeCount(/* parameters */);
	{
		// BrnAStar.cpp:310
		const AISection * lpAISection;

		// BrnAStar.cpp:311
		uint16_t luBestNodeIndex;

		// BrnAStar.cpp:312
		uint16_t luSectionIndex;

		// BrnAStar.cpp:313
		uint8_t luPortalIndex;

		AISectionsData::GetAISection(/* parameters */);
		{
			// BrnAStar.cpp:340
			const Portal * lpPortal;

			// BrnAStar.cpp:341
			uint16_t luLinkSectionIndex;

			// BrnAStar.cpp:342
			const AISection * lpLinkAISection;

			// BrnAStar.cpp:343
			Basic2dColouredVertex::Vector2 lPortalPosition2D;

			// BrnAStar.cpp:344
			AStarNode * lpNeighbourNode;

			AStarNode::GetPosition(/* parameters */);
			Portal::GetPositionZ(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
			AISectionsData::GetAISection(/* parameters */);
			IsBlockSection(/* parameters */);
			AISection::GetId(/* parameters */);
		}
		AISection::IsShortcut(/* parameters */);
		{
			// BrnAStar.cpp:402
			float32_t lfNewCost;

			Distance(/* parameters */);
			AStarNode::GetPosition(/* parameters */);
			AStarNode::GetCost(/* parameters */);
			AStarNode::GetPosition(/* parameters */);
			AStarNode::SetParentIndex(/* parameters */);
			AStarNode::SetCost(/* parameters */);
		}
	}
	Distance(/* parameters */);
	AStarNode::GetPosition(/* parameters */);
	AStarNode::GetCost(/* parameters */);
	AStarNode::SetParentIndex(/* parameters */);
	AStarNode::GetPosition(/* parameters */);
	Distance(/* parameters */);
	AStarNode::SetCost(/* parameters */);
	AStarNode::GetPosition(/* parameters */);
	AStarNode::SetHeuristic(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAStar.cpp:457
void BrnAI::AStar::BuildRoute(AStarNode *  lpBestNode, Route *  lpOutRoute) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.cpp:461
		const AStarNode * lpNode;

		// BrnAStar.cpp:462
		RouteNode[1024] laRouteNodes;

		// BrnAStar.cpp:463
		int32_t liNodeIndex;

		// BrnAStar.cpp:464
		int32_t liNodeCount;

	}
	AStarNode::GetPosition(/* parameters */);
	RouteNode::Construct(/* parameters */);
	AStarNodePool::GetNode(/* parameters */);
	Route::AddNode(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	{
		// BrnAStar.cpp:492
		RouteNode lRouteNode;

		// BrnAStar.cpp:493
		const RouteNode * lpLastNode;

		// BrnAStar.cpp:494
		const RouteNode * lpSecondLastNode;

		// BrnAStar.cpp:495
		Vector2 lLastPosition;

		// BrnAStar.cpp:496
		Vector2 lSecondLastPosition;

		// BrnAStar.cpp:497
		Vector2 lPreviousDirection;

		// BrnAStar.cpp:498
		const AISection * lpFinishAISection;

		// BrnAStar.cpp:499
		float32_t lfBestCosine;

		// BrnAStar.cpp:500
		int32_t liBestPortalIndex;

		// BrnAStar.cpp:501
		int32_t liPortalIndex;

		Route::GetNode(/* parameters */);
		Route::GetNode(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		Portal::GetPositionX(/* parameters */);
		Route::AddNode(/* parameters */);
		Portal::GetPositionZ(/* parameters */);
		RouteNode::Construct(/* parameters */);
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
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	{
		// BrnAStar.cpp:505
		Vector2 lPosition;

		// BrnAStar.cpp:506
		Vector2 lRelativePosition;

		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
			// BrnAStar.cpp:510
			float32_t lfCosine;

			rw::math::vpu::Normalize(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::Dot(/* parameters */);
		}
	}
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnAStar.cpp:432
void BrnAI::AStar::BuildRoute(Route *  lpOutRoute) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Route::SetStatus(/* parameters */);
}

// BrnAStar.cpp:27
// BrnAStar.cpp:28
// BrnAStar.cpp:29
// BrnAStar.cpp:37
// BrnAStar.cpp:40
// BrnAStar.cpp:60
// BrnAStar.cpp:66
