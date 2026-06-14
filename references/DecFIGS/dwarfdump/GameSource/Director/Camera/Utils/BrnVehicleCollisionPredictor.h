// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct VehicleCollisionPredictor {
				// BrnVehicleCollisionPredictor.h:51
				struct PredictedCollision {
					// BrnVehicleCollisionPredictor.h:52
					float32_t mfTimeUntilCollision;

				}

			}

		}

	}

}

// BrnVehicleCollisionPredictor.h:47
struct BrnDirector::Camera::Utils::VehicleCollisionPredictor {
private:
	// BrnVehicleCollisionPredictor.h:73
	bool mbHasPredictedCollision;

	// BrnVehicleCollisionPredictor.h:74
	BrnDirector::Camera::Utils::VehicleCollisionPredictor::PredictedCollision mSoonestPredictedCollision;

public:
	// BrnVehicleCollisionPredictor.h:56
	void Construct();

	// BrnVehicleCollisionPredictor.h:63
	void Update(const AllVehicleData &, VecFloat, Vector3, Vector3);

	// BrnVehicleCollisionPredictor.h:66
	bool HasPredictedCollision() const;

	// BrnVehicleCollisionPredictor.h:69
	const BrnDirector::Camera::Utils::VehicleCollisionPredictor::PredictedCollision & GetSoonestPredictedCollision() const;

}

