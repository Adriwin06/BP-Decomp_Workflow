// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnIKBodyPart.h:370
		VecFloat KVF_MIN_IMPULSE_FOR_DETACHMENT;

		// BrnIKBodyPart.h:371
		VecFloat KVF_MAX_IMPULSE_FOR_DETACHMENT;

		// BrnIKBodyPart.h:372
		VecFloat KVF_MAX_IMPULSE_FOR_DETACHMENT_TOUGH;

	}

}

// BrnIKBodyPart.h:55
extern const int32_t KI_DETACH_WITHOUT_JOINT = 4294967295;

// BrnIKBodyPart.h:59
extern const uint8_t KU8_NO_ACTIVE_JOINT = 255;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnIKBodyPart.h:370
		VecFloat KVF_MIN_IMPULSE_FOR_DETACHMENT;

		// BrnIKBodyPart.h:371
		VecFloat KVF_MAX_IMPULSE_FOR_DETACHMENT;

		// BrnIKBodyPart.h:372
		VecFloat KVF_MAX_IMPULSE_FOR_DETACHMENT_TOUGH;

	}

}

// BrnIKBodyPart.h:51
struct BrnPhysics::Deformation::IKBodyPart {
	// BrnIKBodyPart.h:55
	extern const int32_t KI_DETACH_WITHOUT_JOINT = 4294967295;

	// BrnIKBodyPart.h:56
	extern const int32_t KI_DONT_DETACH = 4294967294;

	// BrnIKBodyPart.h:59
	extern const uint8_t KU8_NO_ACTIVE_JOINT = 255;

private:
	// BrnIKBodyPart.h:202
	IKDrivenPoint * maDrivenPoints;

	// BrnIKBodyPart.h:203
	TagPoint * maTagPoints;

	// BrnIKBodyPart.h:204
	const IKBodyPartSpec * mpSpec;

	// BrnIKBodyPart.h:205
	int16_t miPartPoolIndex;

	// BrnIKBodyPart.h:206
	uint8_t mu8ActiveJointIndex;

public:
	// BrnIKBodyPart.h:65
	void Construct(const IKBodyPartSpec *, IKDrivenPoint *, TagPoint *);

	// BrnIKBodyPart.h:68
	void Destruct();

	// BrnIKBodyPart.h:71
	bool Prepare();

	// BrnIKBodyPart.h:74
	bool Release();

	// BrnIKBodyPart.h:77
	IKDrivenPoint * GetDrivenPoint(int32_t);

	// BrnIKBodyPart.h:80
	const IKDrivenPoint * GetDrivenPoint(int32_t) const;

	// BrnIKBodyPart.h:83
	int32_t GetNumberOfDrivenPoints() const;

	// BrnIKBodyPart.h:86
	TagPoint * GetTagPoint(int32_t);

	// BrnIKBodyPart.h:89
	const TagPoint * GetTagPoint(int32_t) const;

	// BrnIKBodyPart.h:92
	int32_t GetNumberOfTagPoints() const;

	// BrnIKBodyPart.h:95
	void Update();

	// BrnIKBodyPart.h:99
	void UpdateSkinningOffsets(Vector3Plus *);

	// BrnIKBodyPart.h:104
	bool CheckForDetachment(float32_t, int32_t &) const;

	// BrnIKBodyPart.h:108
	bool CheckForJointDetachment(float32_t) const;

	// BrnIKBodyPart.h:111
	EBodyParts GetPartType() const;

	// BrnIKBodyPart.h:114
	int32_t GetMeshId() const;

	// BrnIKBodyPart.h:117
	void Reset();

	// BrnIKBodyPart.h:120
	bool DetachablePart();

	// BrnIKBodyPart.h:123
	int32_t GetNumberOfJoints() const;

	// BrnIKBodyPart.h:127
	const DeformationJointSpec * GetJointSpec(int32_t) const;

	// BrnIKBodyPart.h:130
	const rw::math::vpu::Matrix44Affine & GetPartGraphicsTransform() const;

	// BrnIKBodyPart.h:134
	const IKBodyPartSpec * GetSpec() const;

	// BrnIKBodyPart.h:138
	int32_t FindLeftMostTagPoint();

	// BrnIKBodyPart.h:141
	int32_t FindRightMostTagPoint();

	// BrnIKBodyPart.h:144
	int32_t GetActiveJointIndex() const;

	// BrnIKBodyPart.h:147
	const DeformationJointSpec * GetActiveJointSpec() const;

	// BrnIKBodyPart.h:151
	void SetActiveJointIndex(int32_t);

	// BrnIKBodyPart.h:154
	int16_t GetPartPoolIndex() const;

	// BrnIKBodyPart.h:158
	void SetPartPoolIndex(int16_t);

	// BrnIKBodyPart.h:162
	bool IsExhaustPart();

	// BrnIKBodyPart.h:170
	bool IsToughenedPart() const;

	// BrnIKBodyPart.h:191
	bool CheckSensorForcesForJointDetachment(bool) const;

	// BrnIKBodyPart.h:196
	void UpdateSkinningOffsetsWithinBox(Vector3Plus *, const AxisAlignedBox *);

}

