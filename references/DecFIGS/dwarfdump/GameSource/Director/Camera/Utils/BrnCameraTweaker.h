// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct Tweaker {
				// BrnCameraTweaker.h:49
				enum EMap {
					E_MAP_NORMAL = 0,
					E_MAP_BUTTON_DOWN = 1,
					E_MAP_BUTTON_UP = 2,
					E_MAP_COUNT = 3,
				}

				// BrnCameraTweaker.h:62
				enum EAxis {
					E_AXIS_LEFT_STICK_X = 0,
					E_AXIS_LEFT_STICK_Y = 1,
					E_AXIS_RIGHT_STICK_X = 2,
					E_AXIS_RIGHT_STICK_Y = 3,
					E_AXIS_DPAD_Y = 4,
					E_AXIS_DPAD_X = 5,
					E_AXIS_LOWER_TRIGGERS = 6,
					E_AXIS_UPPER_TRIGGERS = 7,
					E_AXIS_BUTTONS_LEFT_RIGHT = 8,
					E_AXIS_COUNT = 9,
				}

				// BrnCameraTweaker.h:161
				struct AxisMapping {
					// BrnCameraTweaker.h:162
					const char * lpcName;

					// BrnCameraTweaker.h:163
					float * mpfVariableToTweak;

					// BrnCameraTweaker.h:164
					float * mpfScale;

					// BrnCameraTweaker.h:165
					float mfScale;

					// BrnCameraTweaker.h:166
					bool mbUsed;

				}

				// BrnCameraTweaker.h:170
				struct ControlFunctionMapping {
					// BrnCameraTweaker.h:171
					const char * mpcName;

					// BrnCameraTweaker.h:172
					void (*)(void *) mpFunction;

					// BrnCameraTweaker.h:173
					void * mpUserData;

					// BrnCameraTweaker.h:174
					bool mbUsed;

				}

			}

		}

	}

}

// BrnCameraTweaker.h:45
struct BrnDirector::Camera::Utils::Tweaker {
	// BrnCameraTweaker.h:77
	extern const char * KAC_AXIS_LEFT_STICK_X;

	// BrnCameraTweaker.h:78
	extern const char * KAC_AXIS_LEFT_STICK_Y;

	// BrnCameraTweaker.h:79
	extern const char * KAC_AXIS_RIGHT_STICK_X;

	// BrnCameraTweaker.h:80
	extern const char * KAC_AXIS_RIGHT_STICK_Y;

	// BrnCameraTweaker.h:81
	extern const char * KAC_AXIS_DPAD_Y;

	// BrnCameraTweaker.h:82
	extern const char * KAC_AXIS_DPAD_X;

	// BrnCameraTweaker.h:83
	extern const char * KAC_AXIS_LOWER_TRIGGERS;

	// BrnCameraTweaker.h:84
	extern const char * KAC_AXIS_UPPER_TRIGGERS;

	// BrnCameraTweaker.h:85
	extern const char * KAC_AXIS_BUTTONS_LEFT_RIGHT;

	// BrnCameraTweaker.h:87
	extern const char *[9] KAAC_AXIS_NAMES;

private:
	// BrnCameraTweaker.h:182
	BrnDirector::Camera::Utils::Tweaker::AxisMapping[3][9] maAxisMapping;

	// BrnCameraTweaker.h:184
	BrnDirector::Camera::Utils::Tweaker::ControlFunctionMapping[3][22] mJustPressedMapping;

	// BrnCameraTweaker.h:185
	BrnDirector::Camera::Utils::Tweaker::ControlFunctionMapping[3][22] mJustReleasedMapping;

	// BrnCameraTweaker.h:187
	bool mbHideInstructions;

public:
	// BrnCameraTweaker.h:92
	void Construct();

	// BrnCameraTweaker.h:124
	void AddMapping(const char *, float *, float, BrnDirector::Camera::Utils::Tweaker::EAxis, BrnDirector::Camera::Utils::Tweaker::EMap);

	// BrnCameraTweaker.h:132
	void AddMapping(const char *, float *, float *, BrnDirector::Camera::Utils::Tweaker::EAxis, BrnDirector::Camera::Utils::Tweaker::EMap);

	// BrnCameraTweaker.h:140
	void AddJustPressedMapping(const char *, void (*)(void *), void *, BrnDirector::Camera::Utils::DebugController::EControl, BrnDirector::Camera::Utils::Tweaker::EMap);

	// BrnCameraTweaker.h:148
	void AddJustReleasedMapping(const char *, void (*)(void *), void *, BrnDirector::Camera::Utils::DebugController::EControl, BrnDirector::Camera::Utils::Tweaker::EMap);

	// BrnCameraTweaker.h:152
	void Update(const DebugController &);

	// BrnCameraTweaker.h:156
	void Render(BrnDirector::DebugPrinter &);

private:
	// BrnCameraTweaker.h:180
	float32_t GetAxisValue(BrnDirector::Camera::Utils::Tweaker::EAxis, const DebugController &);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// Declaration
			struct Tweaker {
				// BrnCameraTweaker.h:49
				enum EMap {
					E_MAP_NORMAL = 0,
					E_MAP_BUTTON_DOWN = 1,
					E_MAP_BUTTON_UP = 2,
					E_MAP_COUNT = 3,
				}

				// BrnCameraTweaker.h:62
				enum EAxis {
					E_AXIS_LEFT_STICK_X = 0,
					E_AXIS_LEFT_STICK_Y = 1,
					E_AXIS_RIGHT_STICK_X = 2,
					E_AXIS_RIGHT_STICK_Y = 3,
					E_AXIS_DPAD_Y = 4,
					E_AXIS_DPAD_X = 5,
					E_AXIS_LOWER_TRIGGERS = 6,
					E_AXIS_UPPER_TRIGGERS = 7,
					E_AXIS_BUTTONS_LEFT_RIGHT = 8,
					E_AXIS_COUNT = 9,
				}

				// BrnCameraTweaker.h:161
				struct AxisMapping {
					// BrnCameraTweaker.h:162
					const char * lpcName;

					// BrnCameraTweaker.h:163
					float * mpfVariableToTweak;

					// BrnCameraTweaker.h:164
					float * mpfScale;

					// BrnCameraTweaker.h:165
					float mfScale;

					// BrnCameraTweaker.h:166
					bool mbUsed;

				}

				// BrnCameraTweaker.h:170
				struct ControlFunctionMapping {
					// BrnCameraTweaker.h:171
					const char * mpcName;

					// BrnCameraTweaker.h:172
					void (*)(void *) mpFunction;

					// BrnCameraTweaker.h:173
					void * mpUserData;

					// BrnCameraTweaker.h:174
					bool mbUsed;

				}

			}

		}

	}

}

