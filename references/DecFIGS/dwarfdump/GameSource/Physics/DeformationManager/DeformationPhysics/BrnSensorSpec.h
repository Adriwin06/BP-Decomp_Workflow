// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct SensorSpec {
			// BrnSensorSpec.h:123
			struct PerDirectionParams {
				// BrnSensorSpec.h:125
				float32_t mCompressionLimits;

			}

		}

	}

}

// BrnSensorSpec.h:48
struct BrnPhysics::Deformation::SensorSpec {
private:
	// BrnSensorSpec.h:128
	Vector3 mInitialOffset;

	// BrnSensorSpec.h:129
	BrnPhysics::Deformation::SensorSpec::PerDirectionParams[6] maDirectionParams;

	// BrnSensorSpec.h:131
	float32_t mfRadius;

	// BrnSensorSpec.h:133
	uint8_t[6] maNextSensor;

	// BrnSensorSpec.h:134
	uint8_t mu8SceneIndex;

	// BrnSensorSpec.h:135
	uint8_t mu8AbsorbtionLevel;

	// BrnSensorSpec.h:136
	uint8_t[2] mau8NextBoundarySensor;

	// BrnSensorSpec.h:139
	extern const int32_t KI_SPHERE_VOL_MEM_SIZE = 128;

	// BrnSensorSpec.h:140
	extern uint8_t[128] gacBoxVolumeBuffer;

public:
	// BrnSensorSpec.h:51
	void Construct();

	// BrnSensorSpec.h:54
	void Destruct();

	// BrnSensorSpec.h:59
	void Prepare(Vector3, uint8_t);

	// BrnSensorSpec.h:65
	void AddToScene(uint8_t, InSceneUpdateInterface *);

	// BrnSensorSpec.h:71
	void SetNextSensor(uint8_t, BrnPhysics::Deformation::ENextSensorDirection);

	// BrnSensorSpec.h:75
	uint8_t GetNextSensor(BrnPhysics::Deformation::ENextSensorDirection) const;

	// BrnSensorSpec.h:80
	VolumeId GetVolumeID(uint8_t) const;

	// BrnSensorSpec.h:84
	uint8_t GetSceneIndex() const;

	// BrnSensorSpec.h:88
	Vector3 GetInitialOffset() const;

	// BrnSensorSpec.h:93
	void SetInitialOffset(Vector3);

	// BrnSensorSpec.h:98
	VecFloat GetCompressionLimit(BrnPhysics::Deformation::ENextSensorDirection) const;

	// BrnSensorSpec.h:102
	float32_t GetRadius() const;

	// BrnSensorSpec.h:105
	void FixUp(void *);

	// BrnSensorSpec.h:108
	void FixDown(void *);

	// BrnSensorSpec.h:111
	uint8_t GetAbsorptionLevel() const;

	// BrnSensorSpec.h:115
	uint8_t GetNeighbourIndex(int32_t) const;

}

// BrnSensorSpec.h:139
extern const int32_t KI_SPHERE_VOL_MEM_SIZE = 128;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct SensorSpec {
			// BrnSensorSpec.h:123
			struct PerDirectionParams {
				// BrnSensorSpec.h:125
				float32_t mCompressionLimits;

			}

		}

	}

}

