// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnTagPoint.h:32
		const float32_t KF_JOINT_DETACH_THRESHOLD_MODIFIER;

		// BrnTagPoint.h:33
		const float32_t KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnTagPoint.h:32
		const float32_t KF_JOINT_DETACH_THRESHOLD_MODIFIER;

		// BrnTagPoint.h:33
		const float32_t KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED;

	}

}

// BrnTagPoint.h:52
struct BrnPhysics::Deformation::TagPoint {
private:
	// BrnTagPoint.h:101
	Vector3 mPos;

	// BrnTagPoint.h:103
	const TagPointSpec * mpSpec;

	// BrnTagPoint.h:105
	const BrnPhysics::Deformation::DeformationSensor * mpSensorA;

	// BrnTagPoint.h:106
	const BrnPhysics::Deformation::DeformationSensor * mpSensorB;

	// BrnTagPoint.h:107
	float32_t mfScratchAmount;

public:
	// BrnTagPoint.h:57
	void Construct(const TagPointSpec *, const BrnPhysics::Deformation::DeformationSensor *);

	// BrnTagPoint.h:60
	const rw::math::vpu::Vector3 & GetPosition() const;

	// BrnTagPoint.h:63
	Vector3 GetInitialPosition() const;

	// BrnTagPoint.h:66
	void Update(VecFloat);

	// BrnTagPoint.h:69
	const BrnPhysics::Deformation::DeformationSensor * GetDeformationSensorA() const;

	// BrnTagPoint.h:72
	const BrnPhysics::Deformation::DeformationSensor * GetDeformationSensorB() const;

	// BrnTagPoint.h:75
	Vector3 GetOffsetFromInitialPosition() const;

	// BrnTagPoint.h:78
	float32_t GetScratchAmount() const;

	// BrnTagPoint.h:81
	void SetPosition(Vector3);

	// BrnTagPoint.h:84
	float32_t GetDetachThresholdSquared() const;

	// BrnTagPoint.h:87
	float32_t GetJointDetachThresholdSquared() const;

	// BrnTagPoint.h:90
	int32_t GetJointIndex() const;

	// BrnTagPoint.h:93
	const TagPointSpec * GetSpec();

	// BrnTagPoint.h:97
	bool HasJoint() const;

}

