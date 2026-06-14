// BrnTrafficParam.cpp:275
void BrnTraffic::ParamListNode::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficParam.cpp:44
void BrnTraffic::ParamTransform::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// BrnTrafficParam.cpp:209
void BrnTraffic::Param::ReinsertInLanes(uint32_t  luHullIndex, uint32_t  luSectionIndex, float32_t  lfParamAlong, const BrnTraffic::Hull *  lpHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.cpp:211
		const Section * lpSection;

		// BrnTrafficParam.cpp:212
		uint32_t luHistoryIndex;

		// BrnTrafficParam.cpp:213
		uint32_t luSegmentId;

		// BrnTrafficParam.cpp:214
		uint32_t luPlan;

		// BrnTrafficParam.cpp:215
		uint32_t luSide;

		Hull::GetSection(/* parameters */);
		SetChangedSection(/* parameters */);
		SetParamAlong(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		CgsSceneManager::EntityId::SetInvalid(/* parameters */);
	}
}

// BrnTrafficParam.cpp:62
void BrnTraffic::Param::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.cpp:64
		uint32_t luPlan;

		// BrnTrafficParam.cpp:65
		uint32_t luSide;

		SetParamAlong(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
}

// BrnTrafficParam.cpp:118
void BrnTraffic::Param::Initialise(uint32_t  luHullIndex, uint32_t  luSectionIndex, float32_t  lfParamAlong, float32_t  lfRandomVal, uint32_t  luVehicleType, const BrnTraffic::Hull *  lpHull, const VehicleTypeData *  lpVehicleTypeData, const VehicleTypeRuntime *  lpVehicleTypeRuntime, const BrnTraffic::VehicleTraits *  lpVehicleTraits, uint32_t  luParam, const ParamSoaData &  lParamSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.cpp:120
		const Section * lpSection;

		// BrnTrafficParam.cpp:121
		uint32_t luHistoryIndex;

		// BrnTrafficParam.cpp:122
		uint32_t luSegmentId;

		// BrnTrafficParam.cpp:123
		uint32_t luPlan;

		// BrnTrafficParam.cpp:124
		uint32_t luSide;

	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	Hull::GetSection(/* parameters */);
	SetParamAlong(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

