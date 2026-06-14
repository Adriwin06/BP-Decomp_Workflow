// BrnDeformationState.h:38
struct BrnPhysics::Deformation::SensorState {
	// BrnDeformationState.h:41
	Vector3 mOriginalLocalPos;

	// BrnDeformationState.h:42
	Vector3 mWorldPosition;

	// BrnDeformationState.h:43
	Vector3 mTotalLocalDeformation;

	// BrnDeformationState.h:44
	Vector3 mFrameLocalDeformation;

	// BrnDeformationState.h:45
	float32_t mfRadius;

}

// BrnDeformationState.h:49
struct BrnPhysics::Deformation::CarState {
private:
	// BrnDeformationState.h:79
	SensorState[20] maSensors;

	// BrnDeformationState.h:80
	AxisAlignedBox mDeformedBBox;

	// BrnDeformationState.h:81
	Vector3[4] maAxlePositions;

	// BrnDeformationState.h:82
	float32_t mfTotalDeformationSquared;

	// BrnDeformationState.h:83
	uint8_t mu8NumSensors;

public:
	// BrnDeformationState.h:54
	uint8_t GetNumSensors() const;

	// BrnDeformationState.h:57
	void SetNumSensors(uint8_t);

	// BrnDeformationState.h:60
	const SensorState * GetSensor(uint8_t) const;

	// BrnDeformationState.h:67
	float32_t GetTotalDeformationSquared() const;

	// BrnDeformationState.h:70
	const AxisAlignedBox * GetDeformedBBox() const;

	// BrnDeformationState.h:74
	const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

}

// BrnDeformationState.h:87
struct BrnPhysics::Deformation::DeformationState {
private:
	// BrnDeformationState.h:96
	CarState[28] maCarStates;

	// BrnDeformationState.h:97
	EntityId[28] maEntityIds;

	// BrnDeformationState.h:98
	BitArray<28u> mModelsAdded;

public:
	// BrnDeformationState.h:93
	const CarState * GetCarStateFromEntityId(EntityId) const;

}

