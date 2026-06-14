// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct PositionFinder {
				// BrnPositionFinder.h:59
				struct Parameters {
				private:
					// BrnPositionFinder.h:61
					void Construct();

				}

			}

		}

	}

}

// BrnPositionFinder.h:55
struct BrnDirector::Camera::Utils::PositionFinder {
private:
	// BrnPositionFinder.h:90
	Vector3 mPosition;

	// BrnPositionFinder.h:92
	Vector3 mTarget;

	// BrnPositionFinder.h:93
	Vector3 mDisplacement;

	// BrnPositionFinder.h:95
	bool mbIsInitialised;

	// BrnPositionFinder.h:96
	bool mbFoundPosition;

	// BrnPositionFinder.h:97
	bool mbConstructed;

public:
	// BrnPositionFinder.h:65
	void Construct();

	// BrnPositionFinder.h:68
	void Clear();

	// BrnPositionFinder.h:73
	void FindPosition(Vector3, Vector3);

	// BrnPositionFinder.h:77
	void Update(const BehaviourSharedInfo &);

	// BrnPositionFinder.h:80
	bool IsInitialised();

	// BrnPositionFinder.h:83
	bool HasFoundPosition();

	// BrnPositionFinder.h:86
	const rw::math::vpu::Vector3 & GetPosition();

}

