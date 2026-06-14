// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct DebugController {
				// BrnDebugController.h:48
				enum EControl {
					E_CONTROL_UP_DPAD = 0,
					E_CONTROL_DOWN_DPAD = 1,
					E_CONTROL_LEFT_DPAD = 2,
					E_CONTROL_RIGHT_DPAD = 3,
					E_CONTROL_UP_BUTTON = 4,
					E_CONTROL_DOWN_BUTTON = 5,
					E_CONTROL_LEFT_BUTTON = 6,
					E_CONTROL_RIGHT_BUTTON = 7,
					E_CONTROL_LOWER_TRIGGER_LEFT = 8,
					E_CONTROL_LOWER_TRIGGER_RIGHT = 9,
					E_CONTROL_UPPER_TRIGGER_LEFT = 10,
					E_CONTROL_UPPER_TRIGGER_RIGHT = 11,
					E_CONTROL_LEFT_STICK_UP = 12,
					E_CONTROL_LEFT_STICK_DOWN = 13,
					E_CONTROL_LEFT_STICK_LEFT = 14,
					E_CONTROL_LEFT_STICK_RIGHT = 15,
					E_CONTROL_RIGHT_STICK_UP = 16,
					E_CONTROL_RIGHT_STICK_DOWN = 17,
					E_CONTROL_RIGHT_STICK_LEFT = 18,
					E_CONTROL_RIGHT_STICK_RIGHT = 19,
					E_CONTROL_LEFT_STICK_BUTTON = 20,
					E_CONTROL_RIGHT_STICK_BUTTON = 21,
					E_CONTROL_COUNT = 22,
				}

				// BrnDebugController.h:113
				struct DebugControllerInfo {
					// BrnDebugController.h:117
					float32_t[22] mafControlValue;

					// BrnDebugController.h:118
					bool[22] mabControlState;

					// BrnDebugController.h:119
					bool[22] mabControlJustPressed;

					// BrnDebugController.h:120
					bool[22] mabControlJustReleased;

					// BrnDebugController.h:122
					float mfLeftStickXAxis;

					// BrnDebugController.h:123
					float mfLeftStickYAxis;

					// BrnDebugController.h:125
					float mfRightStickXAxis;

					// BrnDebugController.h:126
					float mfRightStickYAxis;

				public:
					// BrnDebugController.h:115
					void Clear();

				}

			}

		}

	}

}

// BrnDebugController.h:45
struct BrnDirector::Camera::Utils::DebugController {
	// BrnDebugController.h:82
	extern const char * KAC_CONTROL_UP_DPAD;

	// BrnDebugController.h:83
	extern const char * KAC_CONTROL_DOWN_DPAD;

	// BrnDebugController.h:84
	extern const char * KAC_CONTROL_LEFT_DPAD;

	// BrnDebugController.h:85
	extern const char * KAC_CONTROL_RIGHT_DPAD;

	// BrnDebugController.h:87
	extern const char * KAC_CONTROL_UP_BUTTON;

	// BrnDebugController.h:88
	extern const char * KAC_CONTROL_DOWN_BUTTON;

	// BrnDebugController.h:89
	extern const char * KAC_CONTROL_LEFT_BUTTON;

	// BrnDebugController.h:90
	extern const char * KAC_CONTROL_RIGHT_BUTTON;

	// BrnDebugController.h:92
	extern const char * KAC_CONTROL_LOWER_TRIGGER_LEFT;

	// BrnDebugController.h:93
	extern const char * KAC_CONTROL_LOWER_TRIGGER_RIGHT;

	// BrnDebugController.h:94
	extern const char * KAC_CONTROL_UPPER_TRIGGER_LEFT;

	// BrnDebugController.h:95
	extern const char * KAC_CONTROL_UPPER_TRIGGER_RIGHT;

	// BrnDebugController.h:97
	extern const char * KAC_CONTROL_LEFT_STICK_UP;

	// BrnDebugController.h:98
	extern const char * KAC_CONTROL_LEFT_STICK_DOWN;

	// BrnDebugController.h:99
	extern const char * KAC_CONTROL_LEFT_STICK_LEFT;

	// BrnDebugController.h:100
	extern const char * KAC_CONTROL_LEFT_STICK_RIGHT;

	// BrnDebugController.h:102
	extern const char * KAC_CONTROL_RIGHT_STICK_UP;

	// BrnDebugController.h:103
	extern const char * KAC_CONTROL_RIGHT_STICK_DOWN;

	// BrnDebugController.h:104
	extern const char * KAC_CONTROL_RIGHT_STICK_LEFT;

	// BrnDebugController.h:105
	extern const char * KAC_CONTROL_RIGHT_STICK_RIGHT;

	// BrnDebugController.h:107
	extern const char * KAC_CONTROL_LEFT_STICK_BUTTON;

	// BrnDebugController.h:108
	extern const char * KAC_CONTROL_RIGHT_STICK_BUTTON;

	// BrnDebugController.h:110
	extern const char *[22] KAAC_CONTROL_NAMES;

private:
	// BrnDebugController.h:176
	BrnDirector::Camera::Utils::DebugController::DebugControllerInfo mDebugControllerInfo;

public:
	// BrnDebugController.h:130
	void Clear();

	// BrnDebugController.h:134
	bool GetIsPressed(BrnDirector::Camera::Utils::DebugController::EControl) const;

	// BrnDebugController.h:138
	bool GetJustPressed(BrnDirector::Camera::Utils::DebugController::EControl) const;

	// BrnDebugController.h:142
	bool GetJustReleased(BrnDirector::Camera::Utils::DebugController::EControl) const;

	// BrnDebugController.h:145
	float GetLowerTriggerAxis() const;

	// BrnDebugController.h:148
	float GetUpperTriggerAxis() const;

	// BrnDebugController.h:151
	float GetDPadYAxis() const;

	// BrnDebugController.h:154
	float GetDPadXAxis() const;

	// BrnDebugController.h:157
	float GetButtonsLeftRightAxis() const;

	// BrnDebugController.h:160
	Vector2 GetLeftStick() const;

	// BrnDebugController.h:163
	Vector2 GetRightStick() const;

	// BrnDebugController.h:166
	const BrnDirector::Camera::Utils::DebugController::DebugControllerInfo & GetControllerInfo() const;

	// BrnDebugController.h:170
	void SetControllerInfo(const BrnDirector::Camera::Utils::DebugController::DebugControllerInfo &);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// Declaration
			struct DebugController {
				// BrnDebugController.h:48
				enum EControl {
					E_CONTROL_UP_DPAD = 0,
					E_CONTROL_DOWN_DPAD = 1,
					E_CONTROL_LEFT_DPAD = 2,
					E_CONTROL_RIGHT_DPAD = 3,
					E_CONTROL_UP_BUTTON = 4,
					E_CONTROL_DOWN_BUTTON = 5,
					E_CONTROL_LEFT_BUTTON = 6,
					E_CONTROL_RIGHT_BUTTON = 7,
					E_CONTROL_LOWER_TRIGGER_LEFT = 8,
					E_CONTROL_LOWER_TRIGGER_RIGHT = 9,
					E_CONTROL_UPPER_TRIGGER_LEFT = 10,
					E_CONTROL_UPPER_TRIGGER_RIGHT = 11,
					E_CONTROL_LEFT_STICK_UP = 12,
					E_CONTROL_LEFT_STICK_DOWN = 13,
					E_CONTROL_LEFT_STICK_LEFT = 14,
					E_CONTROL_LEFT_STICK_RIGHT = 15,
					E_CONTROL_RIGHT_STICK_UP = 16,
					E_CONTROL_RIGHT_STICK_DOWN = 17,
					E_CONTROL_RIGHT_STICK_LEFT = 18,
					E_CONTROL_RIGHT_STICK_RIGHT = 19,
					E_CONTROL_LEFT_STICK_BUTTON = 20,
					E_CONTROL_RIGHT_STICK_BUTTON = 21,
					E_CONTROL_COUNT = 22,
				}

				// BrnDebugController.h:113
				struct DebugControllerInfo {
					// BrnDebugController.h:117
					float32_t[22] mafControlValue;

					// BrnDebugController.h:118
					bool[22] mabControlState;

					// BrnDebugController.h:119
					bool[22] mabControlJustPressed;

					// BrnDebugController.h:120
					bool[22] mabControlJustReleased;

					// BrnDebugController.h:122
					float mfLeftStickXAxis;

					// BrnDebugController.h:123
					float mfLeftStickYAxis;

					// BrnDebugController.h:125
					float mfRightStickXAxis;

					// BrnDebugController.h:126
					float mfRightStickYAxis;

				public:
					// BrnDebugController.h:115
					void Clear();

				}

			}

		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct DebugController {
				// BrnDebugController.h:48
				enum EControl {
					E_CONTROL_UP_DPAD = 0,
					E_CONTROL_DOWN_DPAD = 1,
					E_CONTROL_LEFT_DPAD = 2,
					E_CONTROL_RIGHT_DPAD = 3,
					E_CONTROL_UP_BUTTON = 4,
					E_CONTROL_DOWN_BUTTON = 5,
					E_CONTROL_LEFT_BUTTON = 6,
					E_CONTROL_RIGHT_BUTTON = 7,
					E_CONTROL_LOWER_TRIGGER_LEFT = 8,
					E_CONTROL_LOWER_TRIGGER_RIGHT = 9,
					E_CONTROL_UPPER_TRIGGER_LEFT = 10,
					E_CONTROL_UPPER_TRIGGER_RIGHT = 11,
					E_CONTROL_LEFT_STICK_UP = 12,
					E_CONTROL_LEFT_STICK_DOWN = 13,
					E_CONTROL_LEFT_STICK_LEFT = 14,
					E_CONTROL_LEFT_STICK_RIGHT = 15,
					E_CONTROL_RIGHT_STICK_UP = 16,
					E_CONTROL_RIGHT_STICK_DOWN = 17,
					E_CONTROL_RIGHT_STICK_LEFT = 18,
					E_CONTROL_RIGHT_STICK_RIGHT = 19,
					E_CONTROL_LEFT_STICK_BUTTON = 20,
					E_CONTROL_RIGHT_STICK_BUTTON = 21,
					E_CONTROL_COUNT = 22,
				}

				// BrnDebugController.h:113
				struct DebugControllerInfo {
					// BrnDebugController.h:117
					float32_t[22] mafControlValue;

					// BrnDebugController.h:118
					bool[22] mabControlState;

					// BrnDebugController.h:119
					bool[22] mabControlJustPressed;

					// BrnDebugController.h:120
					bool[22] mabControlJustReleased;

					// BrnDebugController.h:122
					float mfLeftStickXAxis;

					// BrnDebugController.h:123
					float mfLeftStickYAxis;

					// BrnDebugController.h:125
					float mfRightStickXAxis;

					// BrnDebugController.h:126
					float mfRightStickYAxis;

				public:
					// BrnDebugController.h:115
					void Clear();

				}

			}

		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// Declaration
			struct DebugController {
				// BrnDebugController.h:48
				enum EControl {
					E_CONTROL_UP_DPAD = 0,
					E_CONTROL_DOWN_DPAD = 1,
					E_CONTROL_LEFT_DPAD = 2,
					E_CONTROL_RIGHT_DPAD = 3,
					E_CONTROL_UP_BUTTON = 4,
					E_CONTROL_DOWN_BUTTON = 5,
					E_CONTROL_LEFT_BUTTON = 6,
					E_CONTROL_RIGHT_BUTTON = 7,
					E_CONTROL_LOWER_TRIGGER_LEFT = 8,
					E_CONTROL_LOWER_TRIGGER_RIGHT = 9,
					E_CONTROL_UPPER_TRIGGER_LEFT = 10,
					E_CONTROL_UPPER_TRIGGER_RIGHT = 11,
					E_CONTROL_LEFT_STICK_UP = 12,
					E_CONTROL_LEFT_STICK_DOWN = 13,
					E_CONTROL_LEFT_STICK_LEFT = 14,
					E_CONTROL_LEFT_STICK_RIGHT = 15,
					E_CONTROL_RIGHT_STICK_UP = 16,
					E_CONTROL_RIGHT_STICK_DOWN = 17,
					E_CONTROL_RIGHT_STICK_LEFT = 18,
					E_CONTROL_RIGHT_STICK_RIGHT = 19,
					E_CONTROL_LEFT_STICK_BUTTON = 20,
					E_CONTROL_RIGHT_STICK_BUTTON = 21,
					E_CONTROL_COUNT = 22,
				}

				// BrnDebugController.h:113
				struct DebugControllerInfo {
					// BrnDebugController.h:117
					float32_t[22] mafControlValue;

					// BrnDebugController.h:118
					bool[22] mabControlState;

					// BrnDebugController.h:119
					bool[22] mabControlJustPressed;

					// BrnDebugController.h:120
					bool[22] mabControlJustReleased;

					// BrnDebugController.h:122
					float mfLeftStickXAxis;

					// BrnDebugController.h:123
					float mfLeftStickYAxis;

					// BrnDebugController.h:125
					float mfRightStickXAxis;

					// BrnDebugController.h:126
					float mfRightStickYAxis;

				public:
					// BrnDebugController.h:115
					void Clear();

				}

			}

			struct VersionNumber;

			struct FOV;

			struct CameraSphericalRotationController;

			struct Camera2DRotationController;

			struct CameraShake;

			struct CameraImpactEffect;

			struct CameraRig;

			struct OrientationLag;

			struct PositionLag;

			struct Interpolater;

			struct TempCameraBoostResponder;

			struct SpeedResponder;

		}

	}

}

