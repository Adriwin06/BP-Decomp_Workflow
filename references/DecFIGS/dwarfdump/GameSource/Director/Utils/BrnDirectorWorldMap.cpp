// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnDirectorWorldMap.cpp:392
	const VecFloat KVF_RUNG_DISTANCE;

	// BrnDirectorWorldMap.cpp:393
	const uint32_t KU_RUNG_DISTANCE = 10;

}

// BrnDirectorWorldMap.cpp:48
void BrnDirector::WorldMap::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorWorldMap.cpp:57
void BrnDirector::WorldMap::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorWorldMap.cpp:30
void BrnDirector::WorldMap::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<128,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

// BrnDirectorWorldMap.cpp:484
void BrnDirector::WorldMap::WalkLaneLeft(const BrnTraffic::Hull *  lpHull, uint8_t *  lpu8Section, uint8_t *  lpu8Rung, float32_t *  lpfParameterOnSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorWorldMap.cpp:486
		const Section * lpSection;

		// BrnDirectorWorldMap.cpp:487
		uint32_t luNeighbour;

		// BrnDirectorWorldMap.cpp:488
		const Neighbour * lpNeighbour;

		BrnTraffic::Hull::GetSection(/* parameters */);
		BrnTraffic::Hull::GetNeighbour(/* parameters */);
		BrnTraffic::Hull::GetSection(/* parameters */);
	}
}

// BrnDirectorWorldMap.cpp:352
void BrnDirector::WorldMap::GetLanePositionNearestPoint(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnDirectorWorldMap.cpp:354
	BrnDirector::WorldMap::LanePosition lNearest;

	{
		// BrnDirectorWorldMap.cpp:354
		BrnDirector::WorldMap::LanePosition lNearest;

		// BrnDirectorWorldMap.cpp:359
		const BrnTraffic::Hull * lpHull;

		// BrnDirectorWorldMap.cpp:362
		Vector3 lProspectivePosition;

		// BrnDirectorWorldMap.cpp:363
		uint8_t luSection;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
	}
	BrnTraffic::Pvs::GetHullIndexForPoint(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:366
		const Section * lpSection;

		// BrnDirectorWorldMap.cpp:368
		uint8_t luRung;

		// BrnDirectorWorldMap.cpp:369
		float lfSquaredDistance;

		BrnTraffic::Hull::GetSection(/* parameters */);
		BrnTraffic::Section::GetNumSegments(/* parameters */);
		BrnTraffic::Section::CalcPositionAtParameter(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		BrnTraffic::Section::GetNumSegments(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
		}
		rw::math::vpu::Floor(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		BrnTraffic::LaneRung::GetCentrePos(/* parameters */);
		BrnTraffic::LaneRung::GetCentrePos(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	rw::math::vpu::Max<int32_t>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDirectorWorldMap.cpp:398
void BrnDirector::WorldMap::GetLanePositionNearestPointWithDisplacement(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDisplacement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnDirectorWorldMap.cpp:400
	BrnDirector::WorldMap::LanePosition lNearest;

	{
		// BrnDirectorWorldMap.cpp:400
		BrnDirector::WorldMap::LanePosition lNearest;

		// BrnDirectorWorldMap.cpp:405
		const BrnTraffic::Hull * lpHull;

		// BrnDirectorWorldMap.cpp:408
		Vector3 lProspectivePosition;

		// BrnDirectorWorldMap.cpp:409
		uint8_t luSection;

		// BrnDirectorWorldMap.cpp:410
		VecFloat lRung;

		// BrnDirectorWorldMap.cpp:411
		VecFloat lNearestDistance;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
	}
	BrnTraffic::Pvs::GetHullIndexForPoint(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:414
		const Section * lpSection;

		// BrnDirectorWorldMap.cpp:416
		uint8_t luRung;

		// BrnDirectorWorldMap.cpp:417
		VecFloat lSqDistance;

		BrnTraffic::Hull::GetSection(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		BrnTraffic::Section::CalcPositionAtParameter(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		BrnTraffic::Section::GetNumSegments(/* parameters */);
	}
	rw::math::vpu::Max<int32_t>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDirectorWorldMap.cpp:449
void BrnDirector::WorldMap::GetInterestingPointNear(const rw::math::vpu::Vector3  lNearTo, float32_t  lfRadius, Vector3 *  lpExtentsOut, Matrix44Affine *  lpTransformOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorWorldMap.cpp:454
		int32_t liGenericRegionCount;

		// BrnDirectorWorldMap.cpp:455
		int32_t liLoop;

		// BrnDirectorWorldMap.cpp:456
		VecFloat lSquaredRadius;

	}
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetGenericRegionCount(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:460
		BrnTrigger::GenericRegion::Type leType;

	}
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
	BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:464
		Vector3 lPosition;

		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		BrnTrigger::TriggerRegion::GetBoxRegion(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		BrnTrigger::TriggerRegion::GetBoxRegion(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->(/* parameters */);
		BrnTrigger::BoxRegion::GetDimensions(/* parameters */);
		BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
		BrnTrigger::BoxRegion::ComputeTransform(/* parameters */);
		BrnTrigger::TriggerRegion::GetBoxRegion(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
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
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::RotateAroundYAxis(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::RotateAroundZAxis(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
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

// BrnDirectorWorldMap.cpp:66
void BrnDirector::WorldMap::LoadData(OutputBuffer::ResourceRequestInterface *  lpResourceRequestInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::GameDataIO::RequestInterface<512>::AcquireResource(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:166
		const CgsModule::Event * lpEvent;

		// BrnDirectorWorldMap.cpp:167
		const GetAIDataResponse * lpAIDataResponse;

		// BrnDirectorWorldMap.cpp:168
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<512>::GetAILanes(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::Construct(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<512>::LoadTrafficLanes(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:85
		const CgsModule::Event * lpEvent;

		// BrnDirectorWorldMap.cpp:86
		const AcquireResourceResponse * lpAcquire;

		// BrnDirectorWorldMap.cpp:87
		int32_t liEventSize;

		// BrnDirectorWorldMap.cpp:88
		ResourceHandle lResourceHandle;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:126
		const CgsModule::Event * lpEvent;

		// BrnDirectorWorldMap.cpp:127
		int32_t liEventSize;

		// BrnDirectorWorldMap.cpp:128
		int32_t liEventType;

		// BrnDirectorWorldMap.cpp:133
		const GetTrafficLaneDataResponse * lpAcquire;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnDirectorWorldMap.cpp:40
void BrnDirector::WorldMap::Prepare(OutputBuffer::ResourceRequestInterface *  lpResourceRequestInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorWorldMap.cpp:203
void BrnDirector::WorldMap::GetSafePositionNearest(const rw::math::vpu::Vector3  lPosition, const Vector3 &  lOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorWorldMap.cpp:210
		BrnDirector::WorldMap::LanePosition lNearest;

		// BrnDirectorWorldMap.cpp:213
		const BrnTraffic::Hull * lpHull;

	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:219
		Vector3 lDirection;

		// BrnDirectorWorldMap.cpp:220
		Vector3 lRight;

		// BrnDirectorWorldMap.cpp:221
		const Section * lpSection;

		// BrnDirectorWorldMap.cpp:225
		float32_t lfDistance;

		rw::math::vpu::operator-=(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	BrnTraffic::Section::GetNumSegments(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDirectorWorldMap.cpp:276
void BrnDirector::WorldMap::GetSafePositionNearestPointWithDisplacement(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDisplacement, const Vector3 &  lOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorWorldMap.cpp:288
		BrnDirector::WorldMap::LanePosition lNearest;

		// BrnDirectorWorldMap.cpp:291
		const BrnTraffic::Hull * lpHull;

	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnDirectorWorldMap.cpp:297
		Vector3 lDirection;

		// BrnDirectorWorldMap.cpp:298
		Vector3 lRight;

		// BrnDirectorWorldMap.cpp:299
		const Section * lpSection;

		// BrnDirectorWorldMap.cpp:303
		float32_t lfDistance;

		rw::math::vpu::operator-=(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	BrnTraffic::Section::GetNumSegments(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	BrnTraffic::Hull::GetSection(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

