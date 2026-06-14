// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPhysicsDeformationModelData.h:54
		const uint32_t KU_DEFORMATION_MODEL_DATA_ALIGNMENT = 16;

		// BrnPhysicsDeformationModelData.h:55
		const uint32_t KU_DEFORMATION_MODEL_DATA_MAX_WHEELS = 6;

		// BrnPhysicsDeformationModelData.h:57
		const float KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET;

		// BrnPhysicsDeformationModelData.h:65
		const uint32_t KU_DEFORMATION_MODEL_DATA_VERSION = 10;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPhysicsDeformationModelData.h:54
		const uint32_t KU_DEFORMATION_MODEL_DATA_ALIGNMENT = 16;

		// BrnPhysicsDeformationModelData.h:55
		const uint32_t KU_DEFORMATION_MODEL_DATA_MAX_WHEELS = 6;

		// BrnPhysicsDeformationModelData.h:57
		const float KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET;

		// BrnPhysicsDeformationModelData.h:65
		const uint32_t KU_DEFORMATION_MODEL_DATA_VERSION = 10;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct ModelData {
			// BrnPhysicsDeformationModelData.h:89
			struct TagPoint {
				// BrnPhysicsDeformationModelData.h:91
				Matrix44Affine mTagPointMatrix;

				// BrnPhysicsDeformationModelData.h:92
				BrnPhysics::Deformation::ETagPointType meTagPointType;

			}

			// BrnPhysicsDeformationModelData.h:98
			struct TagList {
			private:
				// BrnPhysicsDeformationModelData.h:132
				uint32_t muNumTagPoints;

				// BrnPhysicsDeformationModelData.h:133
				char * mpaTagTypes;

				// BrnPhysicsDeformationModelData.h:134
				Matrix44Affine * mpaTagPoints;

			public:
				// BrnPhysicsDeformationModelData.h:101
				const uint32_t GetNumTagPoints() const;

				// BrnPhysicsDeformationModelData.h:105
				BrnPhysics::Deformation::ETagPointType GetTagType(int32_t) const;

				// BrnPhysicsDeformationModelData.h:109
				const rw::math::vpu::Matrix44Affine & GetTagLocation(uint32_t) const;

				// BrnPhysicsDeformationModelData.h:114
				uint32_t FindFirstTag(BrnPhysics::Deformation::ETagPointType) const;

				// BrnPhysicsDeformationModelData.h:119
				BrnPhysics::Deformation::ModelData::TagPoint CreateTagPoint(uint32_t) const;

				// BrnPhysicsDeformationModelData.h:123
				void FixUp(const Resource &);

				// BrnPhysicsDeformationModelData.h:127
				void FixDown(const Resource &);

			}

		}

		// BrnPhysicsDeformationModelData.h:54
		const uint32_t KU_DEFORMATION_MODEL_DATA_ALIGNMENT = 16;

		// BrnPhysicsDeformationModelData.h:55
		const uint32_t KU_DEFORMATION_MODEL_DATA_MAX_WHEELS = 6;

		// BrnPhysicsDeformationModelData.h:57
		const float KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET;

		// BrnPhysicsDeformationModelData.h:65
		const uint32_t KU_DEFORMATION_MODEL_DATA_VERSION = 10;

	}

}

// BrnPhysicsDeformationModelData.h:80
struct BrnPhysics::Deformation::ModelData {
	// BrnPhysicsDeformationModelData.h:276
	uint32_t muVersion;

private:
	// BrnPhysicsDeformationModelData.h:280
	uint32_t muSizeInBytes;

	// BrnPhysicsDeformationModelData.h:282
	uint8_t muNumBodyParts;

	// BrnPhysicsDeformationModelData.h:283
	uint8_t muNumBodies;

	// BrnPhysicsDeformationModelData.h:285
	uint8_t muNumJoints;

	// BrnPhysicsDeformationModelData.h:286
	uint8_t muNumJointDynamics;

	// BrnPhysicsDeformationModelData.h:287
	uint8_t muNumDriveLinearDynamics;

	// BrnPhysicsDeformationModelData.h:288
	uint8_t muNumDriveAngularDynamics;

	// BrnPhysicsDeformationModelData.h:289
	uint8_t muNumBoxVolumes;

	// BrnPhysicsDeformationModelData.h:290
	uint8_t muNumCapsuleVolumes;

	// BrnPhysicsDeformationModelData.h:291
	uint8_t muNumSphereVolumes;

	// BrnPhysicsDeformationModelData.h:292
	uint8_t muNumCylinderVolumes;

	// BrnPhysicsDeformationModelData.h:293
	uint8_t muNumWheels;

	// BrnPhysicsDeformationModelData.h:295
	uint8_t muNumWheelBodies;

	// BrnPhysicsDeformationModelData.h:296
	BodySpec *[6] mapWheelBodies;

	// BrnPhysicsDeformationModelData.h:300
	Matrix44Affine mCarModelSpaceToHandlingBodySpaceTransform;

	// BrnPhysicsDeformationModelData.h:302
	bool mbHasHandlingBody;

	// BrnPhysicsDeformationModelData.h:303
	BodySpec * mpHandlingBody;

	// BrnPhysicsDeformationModelData.h:304
	JointSpec * mpHandlingJoint;

	// BrnPhysicsDeformationModelData.h:306
	BodyGroupSpec * mpBodyParts;

	// BrnPhysicsDeformationModelData.h:307
	BodySpec * mpBodies;

	// BrnPhysicsDeformationModelData.h:308
	BoxVolumeSpec * mpBoxVolumes;

	// BrnPhysicsDeformationModelData.h:309
	CapsuleVolumeSpec * mpCapsuleVolumes;

	// BrnPhysicsDeformationModelData.h:310
	SphereVolumeSpec * mpSphereVolumes;

	// BrnPhysicsDeformationModelData.h:311
	CylinderVolumeSpec * mpCylinderVolumes;

	// BrnPhysicsDeformationModelData.h:313
	JointDynamicsSpec * mpJointDynamics;

	// BrnPhysicsDeformationModelData.h:314
	DriveLinearDynamicsSpec * mpDriveLinearDynamics;

	// BrnPhysicsDeformationModelData.h:315
	DriveAngularDynamicsSpec * mpDriveAngularDynamics;

	// BrnPhysicsDeformationModelData.h:316
	JointSpec * mpJoints;

	// BrnPhysicsDeformationModelData.h:318
	Vector3 * mpWheelPositions;

	// BrnPhysicsDeformationModelData.h:321
	Vector3 * mpWheelScales;

	// BrnPhysicsDeformationModelData.h:323
	BrnPhysics::Deformation::ModelData::TagList mGenericTags;

	// BrnPhysicsDeformationModelData.h:324
	BrnPhysics::Deformation::ModelData::TagList mCameraTags;

	// BrnPhysicsDeformationModelData.h:325
	BrnPhysics::Deformation::ModelData::TagList mLightTags;

public:
	// BrnPhysicsDeformationModelData.h:150
	void Construct();

	// BrnPhysicsDeformationModelData.h:155
	void FixUp(const Resource &);

	// BrnPhysicsDeformationModelData.h:160
	void FixDown(const Resource &);

	// BrnPhysicsDeformationModelData.h:166
	void Refix(const void *, const void *);

	// BrnPhysicsDeformationModelData.h:169
	uint32_t GetSizeInBytes() const;

	// BrnPhysicsDeformationModelData.h:172
	uint8_t GetNumBodyParts() const;

	// BrnPhysicsDeformationModelData.h:175
	uint8_t GetNumBodies() const;

	// BrnPhysicsDeformationModelData.h:178
	uint8_t GetNumJoints() const;

	// BrnPhysicsDeformationModelData.h:181
	uint8_t GetNumJointDynamics() const;

	// BrnPhysicsDeformationModelData.h:184
	uint8_t GetNumDriveLinearDynamics() const;

	// BrnPhysicsDeformationModelData.h:187
	uint8_t GetNumDriveAngularDynamics() const;

	// BrnPhysicsDeformationModelData.h:190
	uint8_t GetNumBoxVolumes() const;

	// BrnPhysicsDeformationModelData.h:193
	uint8_t GetNumCapsuleVolumes() const;

	// BrnPhysicsDeformationModelData.h:196
	uint8_t GetNumSphereVolumes() const;

	// BrnPhysicsDeformationModelData.h:199
	uint8_t GetNumCylinderVolumes() const;

	// BrnPhysicsDeformationModelData.h:202
	uint8_t GetNumWheels() const;

	// BrnPhysicsDeformationModelData.h:205
	uint8_t GetNumWheelBodies() const;

	// BrnPhysicsDeformationModelData.h:208
	const BodyGroupSpec * GetBodyParts() const;

	// BrnPhysicsDeformationModelData.h:211
	const BodySpec * GetBodies() const;

	// BrnPhysicsDeformationModelData.h:214
	const BoxVolumeSpec * GetBoxVolumes() const;

	// BrnPhysicsDeformationModelData.h:217
	const CapsuleVolumeSpec * GetCapsuleVolumes() const;

	// BrnPhysicsDeformationModelData.h:220
	const SphereVolumeSpec * GetSphereVolumes() const;

	// BrnPhysicsDeformationModelData.h:223
	const CylinderVolumeSpec * GetCylinderVolumes() const;

	// BrnPhysicsDeformationModelData.h:226
	const JointDynamicsSpec * GetJointDynamics() const;

	// BrnPhysicsDeformationModelData.h:229
	const DriveLinearDynamicsSpec * GetDriveLinearDynamics() const;

	// BrnPhysicsDeformationModelData.h:232
	const DriveAngularDynamicsSpec * GetDriveAngularDynamics() const;

	// BrnPhysicsDeformationModelData.h:235
	const JointSpec * GetJoints() const;

	// BrnPhysicsDeformationModelData.h:238
	const BodySpec * GetHandlingBody() const;

	// BrnPhysicsDeformationModelData.h:241
	const JointSpec * GetHandlingJoint() const;

	// BrnPhysicsDeformationModelData.h:244
	bool HasHandlingBody() const;

	// BrnPhysicsDeformationModelData.h:247
	const BodySpec *const* GetWheelBodies() const;

	// BrnPhysicsDeformationModelData.h:250
	const rw::math::vpu::Vector3 * GetWheelPositions() const;

	// BrnPhysicsDeformationModelData.h:253
	const rw::math::vpu::Vector3 * GetWheelScales() const;

	// BrnPhysicsDeformationModelData.h:256
	const rw::math::vpu::Matrix44Affine GetCarModelSpaceToHandlingBodySpaceTransform() const;

	// BrnPhysicsDeformationModelData.h:268
	const BrnPhysics::Deformation::ModelData::TagList & GetGenericTags() const;

	// BrnPhysicsDeformationModelData.h:271
	const BrnPhysics::Deformation::ModelData::TagList & GetCameraTags() const;

	// BrnPhysicsDeformationModelData.h:274
	const BrnPhysics::Deformation::ModelData::TagList & GetLightTags() const;

}

