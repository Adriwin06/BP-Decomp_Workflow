// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficData.cpp:38
	const uint32_t KU_DATA_VERSION = 44;

}

// BrnTrafficData.cpp:407
void BrnTraffic::TrafficData::FindNearestLaneForPointInHull(uint32_t  luHull, const rw::math::vpu::Vector3  lPosition, const VecFloat  lfMaxDistance, const rw::math::vpu::Vector3  lDirection, const VecFloat  lfMinCosAngleToDir, uint32_t *  lpuOutSection, float32_t *  lpfOutParam, uint32_t *  lpuOutSegment, const VecFloat &  lfOutDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.cpp:409
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficData.cpp:410
		uint32_t luSection;

		// BrnTrafficData.cpp:411
		bool lbFoundLane;

		// BrnTrafficData.cpp:412
		float32_t lfMinDistanceSquared;

		// BrnTrafficData.cpp:413
		uint32_t luBestSection;

		// BrnTrafficData.cpp:414
		uint32_t luBestSegment;

	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnTrafficData.cpp:423
		const Section * lpSection;

		// BrnTrafficData.cpp:424
		const BrnTraffic::LaneRung * lpRung0;

		// BrnTrafficData.cpp:425
		const BrnTraffic::LaneRung * lpRung1;

		// BrnTrafficData.cpp:427
		uint32_t luSegment;

		Hull::GetSection(/* parameters */);
		Section::GetNumSegments(/* parameters */);
		{
			// BrnTrafficData.cpp:430
			Vector3 lLanePos;

			// BrnTrafficData.cpp:431
			VecFloat lfDistanceSquared;

			// BrnTrafficData.cpp:438
			Vector3 lLaneDir;

			// BrnTrafficData.cpp:439
			VecFloat lfCosAngle;

			rw::math::vpu::operator>=(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::CompNotEqual(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
}

// BrnTrafficData.cpp:164
void BrnTraffic::TrafficData::FixDown(const void *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.cpp:166
		uint32_t luHull;

		// BrnTrafficData.cpp:167
		uint32_t luFlowType;

		// BrnTrafficData.cpp:168
		uint32_t luVehicleType;

		// BrnTrafficData.cpp:169
		uint32_t luVehicleAsset;

		// BrnTrafficData.cpp:170
		uint32_t luVehicleTraits;

		// BrnTrafficData.cpp:171
		uint32_t luKillZone;

		// BrnTrafficData.cpp:172
		uint32_t luKillZoneRegion;

		// BrnTrafficData.cpp:173
		uint32_t luPaintColour;

	}
}

// BrnTrafficData.cpp:275
void BrnTraffic::TrafficData::FindKillZone(TrafficData::KillZoneId  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.cpp:278
		int32_t liLo;

		// BrnTrafficData.cpp:279
		int32_t liHi;

		// BrnTrafficData.cpp:280
		int32_t liMid;

	}
	{
		// BrnTrafficData.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// BrnTrafficData.cpp:326
void BrnTraffic::TrafficData::FindNearestLaneForPoint(const rw::math::vpu::Vector3  lPosition, const VecFloat  lfMaxDistance, const rw::math::vpu::Vector3  lDirection, const VecFloat  lfMinCosAngleToDir, uint32_t *  lpuOutHull, uint32_t *  lpuOutSection, float32_t *  lpfOutParam, uint32_t *  lpuOutSegment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.cpp:328
		Array<uint16_t,400u> lHullsToLookIn;

		// BrnTrafficData.cpp:329
		Vector3[4] laDirections;

		// BrnTrafficData.cpp:330
		uint32_t luDirection;

		// BrnTrafficData.cpp:331
		uint32_t luHullToLookForIndex;

		// BrnTrafficData.cpp:332
		uint32_t luHull;

		// BrnTrafficData.cpp:333
		uint32_t luSection;

		// BrnTrafficData.cpp:334
		float32_t lfParam;

		// BrnTrafficData.cpp:335
		uint32_t luSegment;

		// BrnTrafficData.cpp:336
		VecFloat lfDistance;

		// BrnTrafficData.cpp:337
		bool lbFoundLane;

		CgsContainers::Array<uint16_t,400u>::Array(/* parameters */);
	}
	Pvs::GetCellSize(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	Pvs::GetHullIndexForPoint(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::Construct(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::Append(/* parameters */);
	Pvs::GetHullIndexForPoint(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::Contains(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::FindFirstInstanceOf(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::Append(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,400u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnTrafficData.cpp:54
void BrnTraffic::TrafficData::FixUp(const void *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.cpp:56
		uint32_t luHull;

		// BrnTrafficData.cpp:57
		uint32_t luFlowType;

		// BrnTrafficData.cpp:58
		uint32_t luVehicleType;

		// BrnTrafficData.cpp:59
		uint32_t luVehicleAsset;

		// BrnTrafficData.cpp:60
		uint32_t luVehicleTraits;

		// BrnTrafficData.cpp:61
		uint32_t luKillZone;

		// BrnTrafficData.cpp:62
		uint32_t luKillZoneRegion;

		// BrnTrafficData.cpp:63
		uint32_t luPaintColour;

		{
			// BrnTrafficData.cpp:65
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnTrafficData.cpp:151
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficData.cpp:152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

