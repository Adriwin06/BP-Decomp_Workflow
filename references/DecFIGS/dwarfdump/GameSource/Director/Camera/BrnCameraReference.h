// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct CameraReference {
			// BrnCameraReference.h:90
			enum EType {
				E_TYPE_INVALID = 0,
				E_TYPE_CACHED = 1,
				E_TYPE_BEHAVIOUR = 2,
				E_TYPE_ICE = 3,
				E_TYPE_COUNT = 4,
			}

		}

	}

}

// BrnCameraReference.h:45
struct BrnDirector::Camera::CameraReference {
private:
	// BrnCameraReference.h:85
	Camera mCamera;

	// BrnCameraReference.h:87
	const BrnDirector::ICEWrapper * mpIceWrapper;

	// BrnCameraReference.h:88
	BehaviourHelperIndex mBehaviourHelperIndex;

	// BrnCameraReference.h:101
	BrnDirector::Camera::CameraReference::EType meType;

	// BrnCameraReference.h:102
	bool mbBehaviourLocked;

public:
	// BrnCameraReference.h:49
	void Construct();

	// BrnCameraReference.h:54
	void Setup(BehaviourHelperIndex, const BrnDirector::Camera::BehaviourManager *);

	// BrnCameraReference.h:58
	void Setup(Camera);

	// BrnCameraReference.h:62
	void Setup(const BrnDirector::ICEWrapper *);

	// BrnCameraReference.h:66
	const Camera & GetCamera(const BrnDirector::Camera::BehaviourManager *);

	// BrnCameraReference.h:70
	void Prepare(const BrnDirector::Camera::BehaviourControllerLockInterface &);

	// BrnCameraReference.h:74
	void Unlock(const BrnDirector::Camera::BehaviourControllerLockInterface &);

	// BrnCameraReference.h:78
	void Release(const BrnDirector::Camera::BehaviourControllerLockInterface &);

	// BrnCameraReference.h:81
	bool IsValid() const;

}

