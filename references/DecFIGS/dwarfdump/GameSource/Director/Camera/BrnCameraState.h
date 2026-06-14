// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct CameraState {
			// BrnCameraState.h:56
			enum EFlag {
				E_FLAG_WIDESCREEN = 0,
				E_FLAG_VALID = 1,
				E_FLAG_HIDE_PLAYER = 2,
				E_FLAG_RACING_GAMEPLAY_CAMERA = 3,
				E_FLAG_BUMPER_CAM = 4,
				E_FLAG_SUPER_WIDE = 5,
				E_FLAG_NEW_THIS_FRAME = 6,
				E_FLAG_JUMP_CAMERA = 7,
				E_FLAG_HARD_STOP_CAMERA = 8,
				E_FLAG_TUMBLING_PLAYER_FOCUSED = 9,
				E_FLAG_CRASH_CAMERA = 10,
				E_FLAG_TAKEDOWN_CAMERA = 11,
				E_FLAG_INTERNAL_CAR_CAMERA = 12,
				E_FLAG_DONT_UPDATE_SCENESPACE = 13,
				E_FLAG_IS_PICTURE_PARADISE = 14,
				E_FLAG_CRASH_STUNT = 15,
				E_FLAG_SMALL_NEAR_CLIP = 16,
				E_FLAG_RECORD_METRICS = 17,
				E_FLAG_SEND_METRICS = 18,
				E_FLAG_APPLYING_RACE_END_EFFECT = 19,
				E_FLAG_JUMP_PHOTO = 20,
				E_FLAG_JY_FLASH = 21,
				E_FLAG_IN_JY_CAMERA = 22,
				E_FLAG_JY_NEW_CAR_INTRO = 23,
				E_FLAG_ONLINE_RACE_INTRO_START = 24,
				E_FLAG_ONLINE_RACE_INTRO_RIVAL = 25,
				E_FLAG_ONLINE_RACE_INTRO_FINISHED = 26,
				E_FLAG_ROAD_FOLLOWING_CAM = 27,
				E_FLAG_SHOWING_ONLINE_INTRO = 28,
				CONSISTENCY_TEST = 29,
				E_FLAG_COUNT = 30,
			}

		}

	}

}

// BrnCameraState.h:53
struct BrnDirector::Camera::CameraState {
private:
	// BrnCameraState.h:159
	extern const char *[30] KAAC_FLAG_NAMES;

	// BrnCameraState.h:162
	ValidityAccount mValidityAccount;

	// BrnCameraState.h:163
	BitArray<30u> mFlags;

	// BrnCameraState.h:164
	BitArray<30u> mPreviousFlags;

public:
	// BrnCameraState.h:94
	void Construct();

	// BrnCameraState.h:97
	void Clear();

	// Unknown accessibility
	// BrnCameraState.h:47
	typedef DataPoint<bool> BoolDataPoint;

	// BrnCameraState.h:100
	const CameraState::BoolDataPoint GetFlagAsDataPoint(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:104
	bool IsFlagSet(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:109
	bool WasFlagSet(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:114
	void SetFlag(BrnDirector::Camera::CameraState::EFlag, bool);

	// BrnCameraState.h:118
	void ClearFlag(BrnDirector::Camera::CameraState::EFlag);

	// BrnCameraState.h:122
	bool HasChanged(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:126
	bool HasChangedToSet(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:130
	bool HasChangedToUnset(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:134
	void MarkStartOfFrame();

	// BrnCameraState.h:140
	const CameraState Interpolate(const CameraState &, const CameraState &, float32_t);

	// BrnCameraState.h:144
	void CopyFlagsToPrevious(const CameraState &);

	// BrnCameraState.h:147
	const ValidityAccount & GetValidityAccount() const;

	// BrnCameraState.h:150
	ValidityAccount & GetValidityAccount();

	// BrnCameraState.h:154
	const char * GetDebugFlagName(BrnDirector::Camera::CameraState::EFlag);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct CameraState {
			// BrnCameraState.h:56
			enum EFlag {
				E_FLAG_WIDESCREEN = 0,
				E_FLAG_VALID = 1,
				E_FLAG_HIDE_PLAYER = 2,
				E_FLAG_RACING_GAMEPLAY_CAMERA = 3,
				E_FLAG_BUMPER_CAM = 4,
				E_FLAG_SUPER_WIDE = 5,
				E_FLAG_NEW_THIS_FRAME = 6,
				E_FLAG_JUMP_CAMERA = 7,
				E_FLAG_HARD_STOP_CAMERA = 8,
				E_FLAG_TUMBLING_PLAYER_FOCUSED = 9,
				E_FLAG_CRASH_CAMERA = 10,
				E_FLAG_TAKEDOWN_CAMERA = 11,
				E_FLAG_INTERNAL_CAR_CAMERA = 12,
				E_FLAG_DONT_UPDATE_SCENESPACE = 13,
				E_FLAG_IS_PICTURE_PARADISE = 14,
				E_FLAG_CRASH_STUNT = 15,
				E_FLAG_SMALL_NEAR_CLIP = 16,
				E_FLAG_RECORD_METRICS = 17,
				E_FLAG_SEND_METRICS = 18,
				E_FLAG_APPLYING_RACE_END_EFFECT = 19,
				E_FLAG_JUMP_PHOTO = 20,
				E_FLAG_JY_FLASH = 21,
				E_FLAG_IN_JY_CAMERA = 22,
				E_FLAG_JY_NEW_CAR_INTRO = 23,
				E_FLAG_ONLINE_RACE_INTRO_START = 24,
				E_FLAG_ONLINE_RACE_INTRO_RIVAL = 25,
				E_FLAG_ONLINE_RACE_INTRO_FINISHED = 26,
				E_FLAG_ROAD_FOLLOWING_CAM = 27,
				E_FLAG_SHOWING_ONLINE_INTRO = 28,
				CONSISTENCY_TEST = 29,
				E_FLAG_COUNT = 30,
			}

		}

	}

}

// BrnCameraState.h:53
struct BrnDirector::Camera::CameraState {
private:
	// BrnCameraState.h:162
	ValidityAccount mValidityAccount;

	// BrnCameraState.h:163
	BitArray<30u> mFlags;

	// BrnCameraState.h:164
	BitArray<30u> mPreviousFlags;

public:
	// BrnCameraState.h:94
	void Construct();

	// BrnCameraState.h:97
	void Clear();

	// Unknown accessibility
	// BrnCameraState.h:47
	typedef DataPoint<bool> BoolDataPoint;

	// BrnCameraState.h:100
	const CameraState::BoolDataPoint GetFlagAsDataPoint(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:104
	bool IsFlagSet(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:109
	bool WasFlagSet(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:114
	void SetFlag(BrnDirector::Camera::CameraState::EFlag, bool);

	// BrnCameraState.h:118
	void ClearFlag(BrnDirector::Camera::CameraState::EFlag);

	// BrnCameraState.h:122
	bool HasChanged(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:126
	bool HasChangedToSet(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:130
	bool HasChangedToUnset(BrnDirector::Camera::CameraState::EFlag) const;

	// BrnCameraState.h:134
	void MarkStartOfFrame();

	// BrnCameraState.h:140
	const CameraState Interpolate(const CameraState &, const CameraState &, float32_t);

	// BrnCameraState.h:144
	void CopyFlagsToPrevious(const CameraState &);

	// BrnCameraState.h:147
	const ValidityAccount & GetValidityAccount() const;

	// BrnCameraState.h:150
	ValidityAccount & GetValidityAccount();

	// BrnCameraState.h:154
	const char * GetDebugFlagName(BrnDirector::Camera::CameraState::EFlag);

}

