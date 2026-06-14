// BrnBehaviourRoadRunner.cpp:44
void BrnDirector::Camera::TrafficLaneTruck::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.cpp:159
void BrnDirector::Camera::TrafficLaneTruck::PickSplitToTake(const const Section &  lSection, BrnTraffic::Directions  lePreferredDirection, uint8_t *  lpOutSection, uint16_t *  lpOutHull, uint8_t *  lpOutDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.cpp:205
void BrnDirector::Camera::TrafficLaneTruck::PickSplitToTakeBackwards(const const Section &  lSection, BrnTraffic::Directions  lePreferredDirection, uint8_t *  lpOutSection, uint16_t *  lpOutHull, uint8_t *  lpOutDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.cpp:535
void BrnDirector::Camera::BehaviourRoadRunner::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Behaviour::Parameters::Construct(/* parameters */);
}

// BrnBehaviourRoadRunner.cpp:247
void BrnDirector::Camera::TrafficLaneTruck::CalcTransformFromLanePosition(const const BrnDirector::WorldMap &  lWorldMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourRoadRunner.cpp:252
		const BrnTraffic::Hull * lpHull;

		// BrnBehaviourRoadRunner.cpp:253
		const Section * lpSection;

		// BrnBehaviourRoadRunner.cpp:255
		Vector3 lDirection;

		WorldMap::GetTrafficHullData(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnBehaviourRoadRunner.cpp:60
void BrnDirector::Camera::TrafficLaneTruck::Prepare(const const BrnDirector::WorldMap &  lWorldMap, const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnBehaviourRoadRunner.cpp:273
void BrnDirector::Camera::TrafficLaneTruck::MoveAlongTrafficLaneForwards(BrnTraffic::Directions  lePreferredDirection, const const BrnDirector::WorldMap &  lWorldMap, float32_t  lfDistToMove, BrnDirector::WorldMap::LanePosition *  lpPositionInOut, Matrix44Affine *  lpTransformOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourRoadRunner.cpp:277
		const BrnTraffic::Hull * lpHull;

		// BrnBehaviourRoadRunner.cpp:278
		const Section * lpSection;

		// BrnBehaviourRoadRunner.cpp:280
		float32_t lfParamAlong;

		// BrnBehaviourRoadRunner.cpp:281
		uint32_t luCurrentRung;

		// BrnBehaviourRoadRunner.cpp:282
		const float32_t * lpaCumulativeLengths;

		// BrnBehaviourRoadRunner.cpp:283
		float32_t lfSegmentLength;

		// BrnBehaviourRoadRunner.cpp:284
		uint32_t luNumSegments;

	}
	WorldMap::GetTrafficHullData(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	BrnTraffic::Hull::GetRungLengthsForSection(/* parameters */);
	BrnTraffic::Section::GetNumSegments(/* parameters */);
	{
		// BrnBehaviourRoadRunner.cpp:293
		float32_t lfLocalParam;

		// BrnBehaviourRoadRunner.cpp:295
		float32_t lfRemainingInCurrentSegment;

		{
			// BrnBehaviourRoadRunner.cpp:290
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
		}
		rw::math::fpu::Floor<float>(/* parameters */);
		rw::math::fpu::Floor<float>(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		{
			// BrnBehaviourRoadRunner.cpp:328
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
		}
		{
			// BrnBehaviourRoadRunner.cpp:333
			uint8_t luNewSection;

			// BrnBehaviourRoadRunner.cpp:334
			uint16_t luNewHull;

			// BrnBehaviourRoadRunner.cpp:336
			uint8_t luNewDirection;

			WorldMap::GetNumTrafficHulls(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			WorldMap::GetTrafficHullData(/* parameters */);
			BrnTraffic::Hull::GetSection(/* parameters */);
			BrnTraffic::Hull::GetRungLengthsForSection(/* parameters */);
			BrnTraffic::Section::GetNumSegments(/* parameters */);
		}
		{
			// BrnBehaviourRoadRunner.cpp:365
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnBehaviourRoadRunner.cpp:360
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			WorldMap::GetNumTrafficHulls(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnBehaviourRoadRunner.cpp:300
			float32_t lfLocalParamDelta;

			// BrnBehaviourRoadRunner.cpp:301
			float32_t lfNewParam;

			// BrnBehaviourRoadRunner.cpp:303
			Vector3 lNewPosition;

			// BrnBehaviourRoadRunner.cpp:304
			Vector3 lNewAt;

			// BrnBehaviourRoadRunner.cpp:305
			Vector3 lNewRight;

			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			BrnTraffic::Section::GetNumSegments(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		}
	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
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

// BrnBehaviourRoadRunner.cpp:392
void BrnDirector::Camera::TrafficLaneTruck::MoveAlongTrafficLaneBackwards(BrnTraffic::Directions  lePreferredDirection, const const BrnDirector::WorldMap &  lWorldMap, float32_t  lfDistToMove, BrnDirector::WorldMap::LanePosition *  lpPositionInOut, Matrix44Affine *  lpTransformOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourRoadRunner.cpp:396
		const BrnTraffic::Hull * lpHull;

		// BrnBehaviourRoadRunner.cpp:397
		const Section * lpSection;

		// BrnBehaviourRoadRunner.cpp:399
		float32_t lfParamAlong;

		// BrnBehaviourRoadRunner.cpp:400
		uint32_t luCurrentRung;

		// BrnBehaviourRoadRunner.cpp:401
		const float32_t * lpaCumulativeLengths;

		// BrnBehaviourRoadRunner.cpp:402
		float32_t lfSegmentLength;

		// BrnBehaviourRoadRunner.cpp:403
		uint32_t luNumSegments;

	}
	WorldMap::GetTrafficHullData(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	BrnTraffic::Hull::GetRungLengthsForSection(/* parameters */);
	BrnTraffic::Section::GetNumSegments(/* parameters */);
	{
		// BrnBehaviourRoadRunner.cpp:412
		float32_t lfLocalParam;

		// BrnBehaviourRoadRunner.cpp:415
		float32_t lfRemainingInCurrentSegment;

		{
			// BrnBehaviourRoadRunner.cpp:448
			bool lbOffEnd;

			{
				// BrnBehaviourRoadRunner.cpp:450
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				{
				}
			}
			{
				// BrnBehaviourRoadRunner.cpp:455
				uint8_t luNewSection;

				// BrnBehaviourRoadRunner.cpp:456
				uint16_t luNewHull;

				// BrnBehaviourRoadRunner.cpp:458
				uint8_t luNewDirection;

				{
					// BrnBehaviourRoadRunner.cpp:491
					CgsDev::StrStream lStrStream;

				}
			}
		}
		{
			// BrnBehaviourRoadRunner.cpp:409
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
		}
		rw::math::fpu::Floor<float>(/* parameters */);
		WorldMap::GetNumTrafficHulls(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		WorldMap::GetTrafficHullData(/* parameters */);
		BrnTraffic::Hull::GetSection(/* parameters */);
		BrnTraffic::Hull::GetRungLengthsForSection(/* parameters */);
		BrnTraffic::Section::GetNumSegments(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		{
			// BrnBehaviourRoadRunner.cpp:481
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnBehaviourRoadRunner.cpp:476
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			WorldMap::GetNumTrafficHulls(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnBehaviourRoadRunner.cpp:420
			float32_t lfLocalParamDelta;

			// BrnBehaviourRoadRunner.cpp:421
			float32_t lfNewParam;

			// BrnBehaviourRoadRunner.cpp:423
			Vector3 lNewPosition;

			// BrnBehaviourRoadRunner.cpp:424
			Vector3 lNewAt;

			// BrnBehaviourRoadRunner.cpp:425
			Vector3 lNewRight;

			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			BrnTraffic::Section::GetNumSegments(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		}
	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
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

// BrnBehaviourRoadRunner.cpp:515
void BrnDirector::Camera::TrafficLaneTruck::MoveAlongTrafficLane(BrnTraffic::Directions  lePreferredDirection, const const BrnDirector::WorldMap &  lWorldMap, float32_t  lfDistToMove, BrnDirector::WorldMap::LanePosition *  lpPositionInOut, Matrix44Affine *  lpTransformOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.cpp:93
void BrnDirector::Camera::TrafficLaneTruck::Update(const const BrnDirector::WorldMap &  lWorldMap, float32_t  lfTimestep, Random *  lpRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourRoadRunner.cpp:105
		float32_t lfDistToMove;

		// BrnBehaviourRoadRunner.cpp:107
		float32_t lfBlendDistance;

		// BrnBehaviourRoadRunner.cpp:117
		Matrix44Affine lTransformA;

		// BrnBehaviourRoadRunner.cpp:118
		Matrix44Affine lTransformB;

		// BrnBehaviourRoadRunner.cpp:119
		BrnDirector::WorldMap::LanePosition lLanePositionA;

		// BrnBehaviourRoadRunner.cpp:120
		BrnDirector::WorldMap::LanePosition lLanePositionB;

		// BrnBehaviourRoadRunner.cpp:125
		VecFloat lUnusedAngle;

		// BrnBehaviourRoadRunner.cpp:126
		Matrix44Affine lNewTransform;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	{
		// BrnBehaviourRoadRunner.cpp:130
		VecFloat lFramesPerSec;

		// BrnBehaviourRoadRunner.cpp:135
		Vector3 lNewAngularVelocity;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

