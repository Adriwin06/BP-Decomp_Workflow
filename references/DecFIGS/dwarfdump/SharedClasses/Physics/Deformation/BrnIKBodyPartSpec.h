// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnIKBodyPartSpec.h:37
		enum EDeformationJointType {
			eNone = 0,
			eHinge = 1,
			eBallAndSocket = 2,
			eJointTypeCount = 3,
		}

	}

}

// BrnIKBodyPartSpec.h:49
struct BrnPhysics::Deformation::BBoxPointSkinData {
	// BrnIKBodyPartSpec.h:63
	Vector3 mVertex;

	// BrnIKBodyPartSpec.h:64
	float32_t[3] mafWeights;

	// BrnIKBodyPartSpec.h:65
	uint8_t[3] mauBoneIndices;

public:
	// BrnIKBodyPartSpec.h:52
	void FixUp(void *);

	// BrnIKBodyPartSpec.h:55
	void FixDown(void *);

	// BrnIKBodyPartSpec.h:60
	void HackSwapHandedness(Matrix44Affine);

}

// BrnIKBodyPartSpec.h:69
struct BrnPhysics::Deformation::BodyPartBBoxSpec {
	// BrnIKBodyPartSpec.h:82
	Matrix44Affine mOrientation;

	// BrnIKBodyPartSpec.h:83
	BBoxPointSkinData[8] maCornerSkinData;

	// BrnIKBodyPartSpec.h:84
	BBoxPointSkinData mCentreSkinData;

	// BrnIKBodyPartSpec.h:85
	BBoxPointSkinData mJointSkinData;

public:
	// BrnIKBodyPartSpec.h:72
	void FixUp(void *);

	// BrnIKBodyPartSpec.h:75
	void FixDown(void *);

	// BrnIKBodyPartSpec.h:79
	void HackCheckHandedness();

}

// BrnIKBodyPartSpec.h:90
struct BrnPhysics::Deformation::DeformationJointSpec {
private:
	// BrnIKBodyPartSpec.h:130
	Vector3 mJointPosition;

	// BrnIKBodyPartSpec.h:131
	Vector3 mJointAxis;

	// BrnIKBodyPartSpec.h:132
	Vector3 mJointDefaultDirection;

	// BrnIKBodyPartSpec.h:133
	float32_t mfMaxJointAngle;

	// BrnIKBodyPartSpec.h:134
	float32_t mfJointDetachThreshold;

	// BrnIKBodyPartSpec.h:135
	BrnPhysics::Deformation::EDeformationJointType meJointType;

public:
	// BrnIKBodyPartSpec.h:94
	void Construct();

	// BrnIKBodyPartSpec.h:97
	BrnPhysics::Deformation::EDeformationJointType GetType() const;

	// BrnIKBodyPartSpec.h:100
	Vector3 GetCarSpacePosition() const;

	// BrnIKBodyPartSpec.h:103
	Vector3 GetRotationAxis() const;

	// BrnIKBodyPartSpec.h:106
	Vector3 GetDefaultDirection() const;

	// BrnIKBodyPartSpec.h:109
	float32_t GetMaxAngle() const;

	// BrnIKBodyPartSpec.h:112
	float32_t GetMaxStress() const;

	// BrnIKBodyPartSpec.h:115
	void FixUp(void *);

	// BrnIKBodyPartSpec.h:118
	void FixDown(void *);

	// BrnIKBodyPartSpec.h:121
	void Translate(Vector3);

	// BrnIKBodyPartSpec.h:124
	bool IsBreakable() const;

}

// BrnIKBodyPartSpec.h:150
struct BrnPhysics::Deformation::IKBodyPartSpec {
private:
	// BrnIKBodyPartSpec.h:214
	Matrix44Affine mGraphicsTransform;

	// BrnIKBodyPartSpec.h:216
	BodyPartBBoxSpec mBBoxSkinData;

	// BrnIKBodyPartSpec.h:218
	DeformationJointSpec * mpaJointSpecs;

	// BrnIKBodyPartSpec.h:219
	int32_t miNumJoints;

	// BrnIKBodyPartSpec.h:221
	int32_t miPartGraphics;

	// BrnIKBodyPartSpec.h:223
	int32_t miStartIndexOfDrivenPoints;

	// BrnIKBodyPartSpec.h:224
	int32_t miNumberOfDrivenPoints;

	// BrnIKBodyPartSpec.h:226
	int32_t miStartIndexOfTagPoints;

	// BrnIKBodyPartSpec.h:227
	int32_t miNumberOfTagPoints;

	// BrnIKBodyPartSpec.h:229
	EBodyParts mePartType;

public:
	// BrnIKBodyPartSpec.h:158
	void Construct(EBodyParts, int32_t, int32_t, int32_t, int32_t);

	// BrnIKBodyPartSpec.h:162
	int32_t GetStartIndexOfDrivenPoints() const;

	// BrnIKBodyPartSpec.h:165
	int32_t GetNumberOfDrivenPoints() const;

	// BrnIKBodyPartSpec.h:168
	int32_t GetStartIndexOfTagPoints() const;

	// BrnIKBodyPartSpec.h:171
	int32_t GetNumberOfTagPoints() const;

	// BrnIKBodyPartSpec.h:174
	EBodyParts GetPartType() const;

	// BrnIKBodyPartSpec.h:177
	int32_t GetMeshId() const;

	// BrnIKBodyPartSpec.h:180
	const rw::math::vpu::Matrix44Affine & GetPartGraphicsTransform() const;

	// BrnIKBodyPartSpec.h:184
	const BodyPartBBoxSpec * GetBBoxSpec() const;

	// BrnIKBodyPartSpec.h:189
	void FixUp(void *);

	// BrnIKBodyPartSpec.h:192
	void FixDown(void *);

	// BrnIKBodyPartSpec.h:195
	int32_t GetNumberOfJoints() const;

	// BrnIKBodyPartSpec.h:199
	const DeformationJointSpec * GetJointSpec(int32_t) const;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnIKBodyPartSpec.h:37
		enum EDeformationJointType {
			eNone = 0,
			eHinge = 1,
			eBallAndSocket = 2,
			eJointTypeCount = 3,
		}

	}

}

