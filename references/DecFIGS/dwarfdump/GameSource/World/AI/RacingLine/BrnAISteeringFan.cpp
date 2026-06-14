// BrnRoute.h:26
namespace BrnAI {
	// BrnAISteeringFan.cpp:24
	const float32_t KF_STEER_AT_LOW_SPEED;

	// BrnAISteeringFan.cpp:25
	const float32_t KF_STEER_AT_HIGH_SPEED;

	// BrnAISteeringFan.cpp:26
	const float32_t KF_GUESSED_MAX_SPEED;

	// BrnAISteeringFan.cpp:28
	const float32_t KF_SLAM_FROM_BEHIND_RELATIVE_SPEED;

	// BrnAISteeringFan.cpp:30
	const float32_t KF_LOOK_AHEAD_RADIUS_SLOW;

	// BrnAISteeringFan.cpp:31
	const float32_t KF_LOOK_AHEAD_RADIUS_FAST;

	// BrnAISteeringFan.cpp:33
	float32_t KF_CENTRE_TRACKING_MAX;

	// BrnAISteeringFan.cpp:34
	float32_t KF_HARD_NO_GO_BAD_MAX;

	// BrnAISteeringFan.cpp:36
	float32_t KF_HARD_NO_GO_GOOD_MAX;

	// BrnAISteeringFan.cpp:37
	float32_t KF_TRAFFIC_MAX;

	// BrnAISteeringFan.cpp:38
	float32_t KF_ONCOMING_TRAFFIC_MAX;

	// BrnAISteeringFan.cpp:39
	float32_t KF_EDGE_INTERSECTION_MAX;

	// BrnAISteeringFan.cpp:40
	float32_t KF_PARALLEL_MAX;

	// BrnAISteeringFan.cpp:43
	float32_t KF_SLAM_PLAYER_MAX;

	// BrnAISteeringFan.cpp:47
	float32_t KF_MAX_DISTANCE_FOR_EDGE_INTERCEPT;

	// BrnAISteeringFan.cpp:48
	float32_t KF_START_TO_SLOW;

	// BrnAISteeringFan.cpp:50
	float32_t KF_HNG_AHEAD;

	// BrnAISteeringFan.cpp:53
	float32_t KF_SLOW_PASSING_SPACE;

	// BrnAISteeringFan.cpp:55
	float32_t KF_TRAFFIC_IMPACT_TIME;

	// BrnAISteeringFan.cpp:56
	float32_t KF_TRAFFIC_IMPACT_TIME_SQUARED;

	// BrnAISteeringFan.cpp:59
	float32_t KF_CLOSENESS_TO_BRAKE;

	// BrnAISteeringFan.cpp:61
	float32_t KF_STEP_AWAY_FROM_HNG;

	// BrnAISteeringFan.cpp:62
	float32_t KF_STEP_AWAY_FROM_HNG_WHEN_HUGGING;

	// BrnAISteeringFan.cpp:64
	float32_t KF_ANGLE_TO_SLAM_FROM;

	// BrnAISteeringFan.cpp:66
	const float32_t KF_SLAM_AHEADNESS;

	// BrnAISteeringFan.cpp:68
	float32_t[10][14] kfBias;

	// BrnAISteeringFan.cpp:388
	const float32_t KF_RISK_LERP;

	// BrnAISteeringFan.cpp:653
	RGBA[14] laFanColours;

	// BrnAISteeringFan.cpp:2180
	const float32_t KF_CLOSE_PASSING_RANGE;

	// BrnAISteeringFan.cpp:2181
	const float32_t KF_DESIRED_CLOSE_PASSING_SEPERATION;

	// BrnAISteeringFan.cpp:2286
	const float32_t kfDriftLookAhead;

}

// BrnAISteeringFan.cpp:276
void BrnAI::SteeringFan::Interpolate(float32_t  lfFrom, float32_t  lfTo, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAISteeringFan.cpp:364
void BrnAI::SteeringFan::ClearWeightings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:366
		int32_t liWeightIndex;

		// BrnAISteeringFan.cpp:368
		int32_t leContributors;

	}
}

// BrnAISteeringFan.cpp:332
void BrnAI::SteeringFan::GetStateCounter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAISteeringFan.cpp:346
void BrnAI::SteeringFan::ClearWeighting(int32_t  leContributors) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:348
		int32_t liWeightIndex;

	}
}

// BrnAISteeringFan.cpp:439
void BrnAI::SteeringFan::InterpToSigned(float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAISteeringFan.cpp:457
void BrnAI::SteeringFan::GetAngleFromInterp(float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAISteeringFan.cpp:531
void BrnAI::SteeringFan::GetMinMaxWeightings(float *  lfWeighting, const float32_t &  lfBestWeighting, const float32_t &  lfWorstWeighting) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:536
		int32_t liBestIndex;

		// BrnAISteeringFan.cpp:537
		int32_t liFanIndex;

	}
}

// BrnAISteeringFan.cpp:733
void BrnAI::SteeringFan::GetBestIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:735
		float32_t lfBestWeighting;

		// BrnAISteeringFan.cpp:737
		int32_t liBestIndex;

		// BrnAISteeringFan.cpp:738
		int32_t liFanIndex;

	}
}

// BrnAISteeringFan.cpp:760
void BrnAI::SteeringFan::GetBestTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:762
		int32_t liBestIndex;

	}
}

// BrnAISteeringFan.cpp:860
void BrnAI::SteeringFan::GetBestAccumulation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:862
		int32_t liIndex;

		// BrnAISteeringFan.cpp:863
		float32_t lfCount;

		// BrnAISteeringFan.cpp:864
		float32_t lfTotalWeighting;

		// BrnAISteeringFan.cpp:866
		float32_t lfBestRightAverage;

		// BrnAISteeringFan.cpp:867
		int32_t liBestRightIndex;

		// BrnAISteeringFan.cpp:885
		int32_t liBestLeftIndex;

		// BrnAISteeringFan.cpp:889
		float32_t lfBestLeftAverage;

		{
			// BrnAISteeringFan.cpp:874
			float32_t lfAverage;

		}
		{
			// BrnAISteeringFan.cpp:896
			float32_t lfAverage;

		}
	}
}

// BrnAISteeringFan.cpp:2155
void BrnAI::SteeringFan::FindVictimInTraffic(const BrnAI::NearbyVehicles *  lpNearbyTraffic, EGlobalRaceCarIndex  leAggressionVictim) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2157
		const BrnAI::NearbyVehicle * lpPlayer;

		// BrnAISteeringFan.cpp:2159
		int32_t liTrafficIndex;

	}
}

// BrnAISteeringFan.cpp:2133
void BrnAI::SteeringFan::FindPlayerInTraffic(const BrnAI::NearbyVehicles *  lpNearbyTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2135
		const BrnAI::NearbyVehicle * lpPlayer;

		// BrnAISteeringFan.cpp:2137
		int32_t liTrafficIndex;

	}
}

// BrnAISteeringFan.cpp:1918
void BrnAI::SteeringFan::IncludePreferCurrentDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1920
		int32_t liWeightIndex;

		{
			// BrnAISteeringFan.cpp:1926
			float32_t lfInterp;

			rw::math::fpu::Abs<float>(/* parameters */);
		}
	}
}

// BrnAISteeringFan.cpp:391
void BrnAI::SteeringFan::AccumulateWeightings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:393
		int32_t liWeightIndex;

		// BrnAISteeringFan.cpp:394
		int32_t liContributor;

		// BrnAISteeringFan.cpp:398
		float32_t[17] lfNewWeights;

		{
			// BrnAISteeringFan.cpp:409
			float32_t lfMax;

		}
	}
}

// BrnAISteeringFan.cpp:774
void BrnAI::SteeringFan::GetSpeedRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:776
		int32_t liBestIndex;

		// BrnAISteeringFan.cpp:778
		float32_t lfInterp;

		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Lerp<float>(/* parameters */);
	}
}

// BrnAISteeringFan.cpp:1709
void BrnAI::SteeringFan::FanIntersectsEdge(Vector2 *  laEdgeCache, int32_t  liEdgeIndex, const rw::math::vpu::Vector2  lFrom, const rw::math::vpu::Vector2  lTo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1712
		float32_t lfR;

		// BrnAISteeringFan.cpp:1713
		float32_t lfS;

		// BrnAISteeringFan.cpp:1715
		Vector2 * lpEdge;

		// BrnAISteeringFan.cpp:1719
		float32_t lfAX;

		// BrnAISteeringFan.cpp:1720
		float32_t lfAY;

		// BrnAISteeringFan.cpp:1724
		float32_t lfBX;

		// BrnAISteeringFan.cpp:1725
		float32_t lfBY;

		// BrnAISteeringFan.cpp:1727
		float32_t lfCX;

		// BrnAISteeringFan.cpp:1728
		float32_t lfCY;

		// BrnAISteeringFan.cpp:1730
		float32_t lfDX;

		// BrnAISteeringFan.cpp:1731
		float32_t lfDY;

		// BrnAISteeringFan.cpp:1733
		float32_t lfDenominator;

		// BrnAISteeringFan.cpp:1759
		Vector2 lIntersection2D;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
			{
			}
		}
	}
}

// BrnAISteeringFan.cpp:2372
void BrnAI::SteeringFan::IncludeDriftLocationTracking(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2380
		Vector2 lVectorToCentre;

		// BrnAISteeringFan.cpp:2387
		Vector2 lLineVector;

		// BrnAISteeringFan.cpp:2405
		int32_t liFanIndex;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// BrnAISteeringFan.cpp:2409
		Vector2 lVectorToFanTarget;

		// BrnAISteeringFan.cpp:2413
		float32_t lfAheadness;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnAISteeringFan.cpp:1180
void BrnAI::SteeringFan::IncludeCentreLineTracking(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1200
		Vector2 lCentreHere;

		// BrnAISteeringFan.cpp:1204
		Vector2 lVectorToCentre;

		// BrnAISteeringFan.cpp:1205
		Vector2 lCarPosition;

		// BrnAISteeringFan.cpp:1219
		int32_t liFanIndex;

		// BrnAISteeringFan.cpp:1221
		float32_t lfCentreLineAheadness;

		// BrnAISteeringFan.cpp:1222
		float32_t lfCentreLineAheadnessRecip;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	{
		// BrnAISteeringFan.cpp:1226
		float32_t lfAheadness;

	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnAISteeringFan.cpp:1256
void BrnAI::SteeringFan::IncludeRouteParallelTracking(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1258
		Vector2 lCentreAhead;

		// BrnAISteeringFan.cpp:1283
		Vector2 lRouteDirection;

		// BrnAISteeringFan.cpp:1297
		int32_t liFanIndex;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// BrnAISteeringFan.cpp:1301
		float32_t lfAheadness;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnAISteeringFan.cpp:2327
void BrnAI::SteeringFan::IncludeDriftDirectionTracking(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2339
		Vector2 lVectorToCentre;

		// BrnAISteeringFan.cpp:2341
		Vector2 lLineVector;

		// BrnAISteeringFan.cpp:2350
		int32_t liFanIndex;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// BrnAISteeringFan.cpp:2354
		Vector2 lVectorToFanTarget;

		// BrnAISteeringFan.cpp:2358
		float32_t lfAheadness;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnAISteeringFan.cpp:926
void BrnAI::SteeringFan::WriteWeightingValues(int32_t  liWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:930
		int32_t leContributors;

		// BrnAISteeringFan.cpp:932
		float32_t lfYCoord;

		// BrnAISteeringFan.cpp:933
		float32_t lfXCoord;

		// BrnAISteeringFan.cpp:934
		float32_t lfTextSize;

		// BrnAISteeringFan.cpp:940
		DebugInterface lDebugInterface;

		// BrnAISteeringFan.cpp:942
		char[64] laText;

		// BrnAISteeringFan.cpp:944
		RGBA lColour;

		// BrnAISteeringFan.cpp:959
		Vector2 lTextPos1;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// BrnAISteeringFan.cpp:971
		float32_t lfMax;

		{
			// BrnAISteeringFan.cpp:975
			Vector2 lTextPos;

			rw::math::vpu::Vector2::Vector2(/* parameters */);
		}
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnAISteeringFan.cpp:567
void BrnAI::SteeringFan::RenderEdge(int32_t  liEdge, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:570
		Vector3 lA;

		// BrnAISteeringFan.cpp:573
		DebugInterface lDebugInterface;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
}

// BrnAISteeringFan.cpp:591
void BrnAI::SteeringFan::RenderContributor(float32_t *  lfWeighting, RGBA  lColour, float32_t  lfScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:596
		int32_t liBestIndex;

		// BrnAISteeringFan.cpp:597
		float32_t lfBestWeighting;

		// BrnAISteeringFan.cpp:598
		float32_t lfWorstWeighting;

		// BrnAISteeringFan.cpp:607
		Vector3 lPrev;

		// BrnAISteeringFan.cpp:608
		Vector3 lA;

		// BrnAISteeringFan.cpp:611
		int32_t liFanIndex;

	}
	{
		// BrnAISteeringFan.cpp:615
		float32_t lfWeight;

		// BrnAISteeringFan.cpp:630
		Vector3 lCurrent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		{
			// BrnAISteeringFan.cpp:637
			DebugInterface lDebugInterface;

			CgsDev::DebugInterface::DebugInterface(/* parameters */);
			CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		}
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnAISteeringFan.cpp:671
void BrnAI::SteeringFan::RenderFanVectors(int32_t  liBestVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:675
		Vector3 lA;

		// BrnAISteeringFan.cpp:679
		DebugInterface lDebugInterface;

		// BrnAISteeringFan.cpp:683
		int32_t leContributors;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	{
		// BrnAISteeringFan.cpp:687
		float32_t lfMax;

	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnAISteeringFan.cpp:801
void BrnAI::SteeringFan::BestTargetInArea(int32_t  liStart, int32_t  liEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:803
		float32_t lfBestWeighting;

		// BrnAISteeringFan.cpp:804
		int32_t liBestIndex;

		// BrnAISteeringFan.cpp:805
		int32_t liIndex;

	}
	{
		// BrnAISteeringFan.cpp:809
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnAISteeringFan.cpp:807
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnAISteeringFan.cpp:808
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnAISteeringFan.cpp:833
void BrnAI::SteeringFan::AccumulateInArea(int32_t  liStart, int32_t  liEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:835
		float32_t lfTotalWeighting;

		// BrnAISteeringFan.cpp:841
		int32_t liIndex;

		// BrnAISteeringFan.cpp:842
		float32_t lfCount;

	}
	{
		// BrnAISteeringFan.cpp:839
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnAISteeringFan.cpp:837
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnAISteeringFan.cpp:838
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnAISteeringFan.cpp:1121
void BrnAI::SteeringFan::GetDrivingTarget(AICar *  lpCar, RacingLine *  lpRacingLine, RacingLineGenerator *  lpRacingLineGenerator, const BrnAI::NearbyVehicles *  lpNearbyTraffic, bool  lbRenderThinking) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1125
		Vector2 lResult;

		// BrnAISteeringFan.cpp:1127
		int32_t liBestRight;

		// BrnAISteeringFan.cpp:1128
		int32_t liBestLeft;

		// BrnAISteeringFan.cpp:1133
		float32_t lfRightGoodness;

		// BrnAISteeringFan.cpp:1134
		float32_t lfLeftGoodness;

	}
}

// BrnAISteeringFan.cpp:999
void BrnAI::SteeringFan::SetBiasMode(BrnAI::EBiasMode  leBiasMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1001
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAISteeringFan.cpp:288
void BrnAI::SteeringFan::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:318
		float32_t lfAngleInterp;

		// BrnAISteeringFan.cpp:319
		int32_t liFanIndex;

	}
	{
		// BrnAISteeringFan.cpp:323
		float32_t lfAngle;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::fpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_add(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnAISteeringFan.cpp:711
void BrnAI::SteeringFan::CalculateFanAngle(AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:714
		float32_t lfSpeedRatio;

		AICar::GetSpeed(/* parameters */);
	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
}

// BrnAISteeringFan.cpp:2299
void BrnAI::SteeringFan::CachePointAhead(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAISteeringFan.cpp:1322
void BrnAI::SteeringFan::IncludeHardNoGo(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1329
		int32_t liBestGuessTargetSection;

		// BrnAISteeringFan.cpp:1354
		int32_t liFanIndex;

		// BrnAISteeringFan.cpp:1446
		float32_t lfMin;

		// BrnAISteeringFan.cpp:1447
		float32_t lfMax;

		// BrnAISteeringFan.cpp:1472
		float32_t lfRatio;

	}
	{
		// BrnAISteeringFan.cpp:1358
		Vector2 lVectorToFanTarget;

		{
			// BrnAISteeringFan.cpp:1376
			SectionData * lpSection;

			// BrnAISteeringFan.cpp:1390
			float32_t lfDistanceToEdge;

			// BrnAISteeringFan.cpp:1392
			bool lbSolidHere;

			RacingLineGenerator::GetSectionPointer(/* parameters */);
		}
	}
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	{
		// BrnAISteeringFan.cpp:1413
		float32_t lfDistanceToHugEdge;

	}
}

// BrnAISteeringFan.cpp:1776
void BrnAI::SteeringFan::IncludeRouteEdgeIntersection(RacingLineGenerator *  lpRacingLineGenerator, RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1783
		const int32_t KF_MAX_EDGES_CACHED;

		// BrnAISteeringFan.cpp:1785
		Vector2[4] laLeftEdgeCache;

		// BrnAISteeringFan.cpp:1786
		Vector2[4] laRightEdgeCache;

		// BrnAISteeringFan.cpp:1788
		Vector2 lCarPos2d;

		// BrnAISteeringFan.cpp:1792
		int32_t liSection;

		// BrnAISteeringFan.cpp:1809
		int32_t liEdgeCount;

		// BrnAISteeringFan.cpp:1813
		SectionData * lpSection;

		// BrnAISteeringFan.cpp:1846
		int32_t liIndex;

		RacingLineGenerator::GetSectionPointer(/* parameters */);
		HardNoGoMap::GetPreviousLeft(/* parameters */);
		HardNoGoMap::GetPreviousRight(/* parameters */);
		{
			// BrnAISteeringFan.cpp:1852
			Vector2 lEnd;

			// BrnAISteeringFan.cpp:1854
			int32_t liCacheIndex;

			{
				// BrnAISteeringFan.cpp:1861
				float32_t lfZDistanceLeft;

				// BrnAISteeringFan.cpp:1862
				float32_t lfZDistanceRight;

				// BrnAISteeringFan.cpp:1873
				float32_t lfBestZ;

				// BrnAISteeringFan.cpp:1895
				float32_t lfRatio;

			}
		}
		rw::math::vpu::Clamp(/* parameters */);
	}
}

// BrnAISteeringFan.cpp:471
void BrnAI::SteeringFan::GenerateFanVectors(AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:473
		Vector3 lStartPosition;

		// BrnAISteeringFan.cpp:474
		Vector3 lForwardVector;

		// BrnAISteeringFan.cpp:475
		float32_t lfAngleInterp;

		// BrnAISteeringFan.cpp:476
		float32_t lfCarAngle;

		// BrnAISteeringFan.cpp:477
		int32_t liFanIndex;

		// BrnAISteeringFan.cpp:485
		Vector2 lDueNorth;

		// BrnAISteeringFan.cpp:486
		Vector2 lForward2D;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	{
		{
		}
	}
	{
		// BrnAISteeringFan.cpp:499
		float32_t lfAngle;

		rw::math::vpu::Vector2::operator=(/* parameters */);
		rw::math::vpu::SinCosFast(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAISteeringFan.cpp:1503
void BrnAI::SteeringFan::IncludeConstantBearing(RacingLine *  lpRacingLine, AICar *  lpCar, const BrnAI::NearbyVehicles *  lpNearbyTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1505
		int32_t liFanIndex;

		// BrnAISteeringFan.cpp:1506
		float lfPlayerSpeed;

		// BrnAISteeringFan.cpp:1507
		Vector2 lPlayerPosition;

		// BrnAISteeringFan.cpp:1509
		float32_t lfSpeedRatio;

		// BrnAISteeringFan.cpp:1511
		float32_t lfAllowedPassingSpace;

		// BrnAISteeringFan.cpp:1513
		float32_t lfReciprocalAllowedPassingSpace;

		// BrnAISteeringFan.cpp:1517
		float32_t lfClosestCollision;

		// BrnAISteeringFan.cpp:1519
		Vector3 lImmmediateApproachSpeedOfTrafficAhead;

		// BrnAISteeringFan.cpp:1521
		Vector2 lPlayerDirection;

		AICar::GetSpeed(/* parameters */);
	}
	rw::math::vpu::Clamp(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetDirection(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnAISteeringFan.cpp:1529
		Vector2 lPlayerMotion;

		// BrnAISteeringFan.cpp:1533
		int32_t liTrafficIndex;

		// BrnAISteeringFan.cpp:1535
		const BrnAI::NearbyVehicle * lpTraffic;

		// BrnAISteeringFan.cpp:1537
		float32_t * lfAvoidTraffic;

		// BrnAISteeringFan.cpp:1538
		float32_t * lfAvoidOncomingTraffic;

		// BrnAISteeringFan.cpp:1540
		float32_t lfOldTraffic;

		// BrnAISteeringFan.cpp:1541
		float32_t lfOldOncoming;

		rw::math::vpu::operator*(/* parameters */);
	}
	{
		// BrnAISteeringFan.cpp:1550
		Vector2 lRelativeVelocity;

		// BrnAISteeringFan.cpp:1551
		Vector2 lRelativePosition;

		// BrnAISteeringFan.cpp:1553
		float32_t lfAheadness;

		// BrnAISteeringFan.cpp:1578
		float32_t lfDistanceSquared;

		// BrnAISteeringFan.cpp:1579
		float32_t lfTimeToCollision;

		// BrnAISteeringFan.cpp:1608
		float32_t lfPassingSpace;

		// BrnAISteeringFan.cpp:1643
		float32_t lfNewBias;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		DistancePosVelToOrigin(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::SqrtFast(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnAISteeringFan.cpp:1615
			float32_t lfSeparation;

			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
		rw::math::fpu::Abs<float>(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		{
			// BrnAISteeringFan.cpp:1660
			float32_t lfDistance;

			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		// BrnAISteeringFan.cpp:1512
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnAISteeringFan.cpp:2005
void BrnAI::SteeringFan::IncludeSmashIntoTarget(AICar *  lpCar, const BrnAI::NearbyVehicle *  lpTarget, BrnAI::EFan_Contributors  leContributor, float32_t  lfMinAheadness, float32_t  lfMaxAheadness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2007
		Vector2 lCarPosition;

		// BrnAISteeringFan.cpp:2008
		Vector2 lCarDirection;

		// BrnAISteeringFan.cpp:2009
		Vector2 lRelativeVector;

		// BrnAISteeringFan.cpp:2010
		Vector2 lRelativeDirection;

		// BrnAISteeringFan.cpp:2011
		float32_t lfSeparation;

		// BrnAISteeringFan.cpp:2012
		float32_t lfAheadness;

		// BrnAISteeringFan.cpp:2013
		int32_t liFanIndex;

		// BrnAISteeringFan.cpp:2015
		const float32_t KF_MAX_SEPERATION_FOR_SLAM;

		AICar::GetPosition(/* parameters */);
	}
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
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
	}
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnAISteeringFan.cpp:2031
		float32_t lfDirectionFactor;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
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

// BrnAISteeringFan.cpp:1949
void BrnAI::SteeringFan::IncludeSmashIntoPlayer(AICar *  lpCar, const BrnAI::NearbyVehicles *  lpNearbyTraffic, EGlobalRaceCarIndex  leAggressionVictim) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1954
		const BrnAI::NearbyVehicle * lpPlayer;

	}
	{
		// BrnAISteeringFan.cpp:1952
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAISteeringFan.cpp:2048
void BrnAI::SteeringFan::FindNeabyAIInTraffic(const BrnAI::NearbyVehicles *  lpNearbyTraffic, AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2050
		const BrnAI::NearbyVehicle * lpRival;

		// BrnAISteeringFan.cpp:2051
		const BrnAI::NearbyVehicle * lpBestRival;

		// BrnAISteeringFan.cpp:2053
		int32_t liTrafficIndex;

		// BrnAISteeringFan.cpp:2055
		float32_t lfBestProximity;

		// BrnAISteeringFan.cpp:2057
		Vector2 lOurPosition;

		// BrnAISteeringFan.cpp:2058
		Vector2 lOurMotion;

		// BrnAISteeringFan.cpp:2060
		float32_t lfOurSpeed;

	}
	AICar::GetSpeed(/* parameters */);
	AICar::GetPosition(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	{
		// BrnAISteeringFan.cpp:2072
		Vector2 lRelativePosition;

		// BrnAISteeringFan.cpp:2076
		const float32_t KF_AI_SMASH_SEPERATION;

		// BrnAISteeringFan.cpp:2078
		float32_t lfSeparation;

		// BrnAISteeringFan.cpp:2088
		float32_t lfAheadness;

		// BrnAISteeringFan.cpp:2100
		float32_t lfRelativeSpeed;

		// BrnAISteeringFan.cpp:2112
		float32_t lfProximity;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
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

// BrnAISteeringFan.cpp:1976
void BrnAI::SteeringFan::IncludeSmashIntoNearbyAI(AICar *  lpCar, const BrnAI::NearbyVehicles *  lpNearbyTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:1979
		const BrnAI::NearbyVehicle * lpNearbyAI;

	}
}

// BrnAISteeringFan.cpp:2186
void BrnAI::SteeringFan::IncludeDriveCloseToPlayer(RacingLine *  lpRacingLine, AICar *  lpCar, const BrnAI::NearbyVehicles *  lpNearbyTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAISteeringFan.cpp:2188
		int32_t liFanIndex;

		// BrnAISteeringFan.cpp:2189
		float32_t lfOurCarSpeed;

		// BrnAISteeringFan.cpp:2190
		Vector2 lOurCarPosition;

		// BrnAISteeringFan.cpp:2192
		const BrnAI::NearbyVehicle * lpPlayer;

		// BrnAISteeringFan.cpp:2207
		Vector2 lPlayerUnitVelocity;

		// BrnAISteeringFan.cpp:2220
		Vector2 lRelativePosition;

		// BrnAISteeringFan.cpp:2224
		Vector2 lPosA;

		// BrnAISteeringFan.cpp:2225
		Vector2 lPosB;

		// BrnAISteeringFan.cpp:2226
		Vector2 lPosC;

		// BrnAISteeringFan.cpp:2232
		float32_t lfCarSide;

		AICar::GetSpeed(/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	{
		// BrnAISteeringFan.cpp:2245
		Vector2 lOurCarMotion;

		// BrnAISteeringFan.cpp:2251
		Vector2 lRelativeVelocity;

		// BrnAISteeringFan.cpp:2256
		float32_t lfAheadness;

		// BrnAISteeringFan.cpp:2260
		const float32_t KF_PROJECT_AHEAD;

		// BrnAISteeringFan.cpp:2264
		float32_t lfPassingSpace;

		DistancePosVelToOrigin(/* parameters */);
	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Clamp(/* parameters */);
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
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnAISteeringFan.cpp:1027
void BrnAI::SteeringFan::UpdateWeightings(AICar *  lpCar, RacingLine *  lpRacingLine, RacingLineGenerator *  lpRacingLineGenerator, const BrnAI::NearbyVehicles *  lpNearbyTraffic, EGlobalRaceCarIndex  leAggressionVictim) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAISteeringFan.cpp:259
