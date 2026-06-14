// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct ValidityAccount {
			// BrnCameraValidityAccount.h:55
			enum EFailedFlag {
				E_FIRST_FAILED_FLAG = 0,
				E_FAILED_COLLISION = 0,
				E_FAILED_VISIBILITY = 1,
				E_FAILED_STARTED_OFF_SCREEN = 2,
				E_FAILED_COULDNT_FIND_GROUND = 3,
				E_FAILED_STARTED_IN_GEOMETRY = 4,
				E_FAILED_COLLISION_POLICY = 5,
				E_FAILED_COULDNT_FIND_ROADSIDE = 6,
				E_FAILED_POSITION_TOO_FAR_FROM_SUBJECT = 7,
				E_FAILED_ICE_MOVIE_COMPLETE = 8,
				E_FAILED_STARTED_TOO_NEAR_GEOMETRY = 9,
				E_FAILED_STARTED_TOO_NEAR_VEHICLE = 10,
				E_FAILED_INVALID_VEHICLE_REF = 11,
				E_FAILED_SUBJECT_LEFT_FRAME = 12,
				E_FAILED_SUBJECT_OCCLUDED = 13,
				E_END_FAILED_FLAG = 14,
			}

			// BrnCameraValidityAccount.h:78
			enum ENoCutToFlag {
				E_FIRST_NOCUTTO_FLAG = 14,
				E_NOCUTTO_FINDING_POSITION = 14,
				E_NOCUTTO_SUBJECT_ABOUT_TO_LEAVE_FRAME = 15,
				E_NOCUTTO_SUBJECT_LEFT_FRAME = 16,
				E_NOCUTTO_SUBJECT_OCCLUDED = 17,
				E_NOCUTTO_MOMENT_CONDITIONS_NOT_MET = 18,
				E_NOCUTTO_WAITING_FOR_BEHAVIOUR_TO_PREPARE = 19,
				E_NOCUTTO_WAITING_TO_CUT_TO_BEHAVIOUR = 20,
				E_NOCUTTO_OPPORTUNITY_WINDOW_PASSED = 21,
				E_NOCUTTO_TIME_LIMIT_NEARLY_ELAPSED = 22,
				E_NOCUTTO_MOMENT_INHIBITED = 23,
				E_NOCUTTO_BEHAVIOUR_NOCUTTO = 24,
				E_NOCUTTO_ABOUT_TO_HIT_GEOMETRY = 25,
				E_NOCUTTO_ABOUT_TO_HIT_VEHICLE = 26,
				E_END_NOCUTTO_FLAG = 27,
			}

			// BrnCameraValidityAccount.h:100
			enum ENoCutFromFlag {
				E_FIRST_NOCUTFROM_FLAG = 27,
				E_NOCUTFROM_INTERPOLATING = 27,
				E_NOCUTFROM_MONEY_SHOT = 28,
				E_NOCUTFROM_ICE_MOVIE_NOT_FINISHED = 29,
				E_NOCUTFROM_BEHAVIOUR_NOCUTFROM = 30,
				E_END_NOCUTFROM_FLAG = 31,
			}

		}

	}

}

// BrnCameraValidityAccount.h:47
struct BrnDirector::Camera::ValidityAccount {
private:
	// BrnCameraValidityAccount.h:174
	BitArray<32u> mFlags;

	// BrnCameraValidityAccount.h:176
	extern bool sbFailFlagMaskSet;

	// BrnCameraValidityAccount.h:177
	extern BitArray<32u> sFailFlagMask;

	// BrnCameraValidityAccount.h:178
	extern const char *[32] KAAC_FLAG_NAMES;

public:
	// BrnCameraValidityAccount.h:113
	void Construct();

	// BrnCameraValidityAccount.h:119
	void ClearNonFailFlags();

	// BrnCameraValidityAccount.h:123
	void Print(BrnDirector::DebugPrinter &) const;

	// BrnCameraValidityAccount.h:127
	void Print(BrnDirector::DebugLog &) const;

	// BrnCameraValidityAccount.h:133
	void CombineWith(const ValidityAccount &);

	// BrnCameraValidityAccount.h:137
	void SetFlag(BrnDirector::Camera::ValidityAccount::EFailedFlag);

	// BrnCameraValidityAccount.h:141
	void SetFlag(BrnDirector::Camera::ValidityAccount::ENoCutToFlag);

	// BrnCameraValidityAccount.h:145
	void SetFlag(BrnDirector::Camera::ValidityAccount::ENoCutFromFlag);

	// BrnCameraValidityAccount.h:160
	void SetupFailFlagMask();

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct ValidityAccount {
			// BrnCameraValidityAccount.h:55
			enum EFailedFlag {
				E_FIRST_FAILED_FLAG = 0,
				E_FAILED_COLLISION = 0,
				E_FAILED_VISIBILITY = 1,
				E_FAILED_STARTED_OFF_SCREEN = 2,
				E_FAILED_COULDNT_FIND_GROUND = 3,
				E_FAILED_STARTED_IN_GEOMETRY = 4,
				E_FAILED_COLLISION_POLICY = 5,
				E_FAILED_COULDNT_FIND_ROADSIDE = 6,
				E_FAILED_POSITION_TOO_FAR_FROM_SUBJECT = 7,
				E_FAILED_ICE_MOVIE_COMPLETE = 8,
				E_FAILED_STARTED_TOO_NEAR_GEOMETRY = 9,
				E_FAILED_STARTED_TOO_NEAR_VEHICLE = 10,
				E_FAILED_INVALID_VEHICLE_REF = 11,
				E_FAILED_SUBJECT_LEFT_FRAME = 12,
				E_FAILED_SUBJECT_OCCLUDED = 13,
				E_END_FAILED_FLAG = 14,
			}

			// BrnCameraValidityAccount.h:78
			enum ENoCutToFlag {
				E_FIRST_NOCUTTO_FLAG = 14,
				E_NOCUTTO_FINDING_POSITION = 14,
				E_NOCUTTO_SUBJECT_ABOUT_TO_LEAVE_FRAME = 15,
				E_NOCUTTO_SUBJECT_LEFT_FRAME = 16,
				E_NOCUTTO_SUBJECT_OCCLUDED = 17,
				E_NOCUTTO_MOMENT_CONDITIONS_NOT_MET = 18,
				E_NOCUTTO_WAITING_FOR_BEHAVIOUR_TO_PREPARE = 19,
				E_NOCUTTO_WAITING_TO_CUT_TO_BEHAVIOUR = 20,
				E_NOCUTTO_OPPORTUNITY_WINDOW_PASSED = 21,
				E_NOCUTTO_TIME_LIMIT_NEARLY_ELAPSED = 22,
				E_NOCUTTO_MOMENT_INHIBITED = 23,
				E_NOCUTTO_BEHAVIOUR_NOCUTTO = 24,
				E_NOCUTTO_ABOUT_TO_HIT_GEOMETRY = 25,
				E_NOCUTTO_ABOUT_TO_HIT_VEHICLE = 26,
				E_END_NOCUTTO_FLAG = 27,
			}

			// BrnCameraValidityAccount.h:100
			enum ENoCutFromFlag {
				E_FIRST_NOCUTFROM_FLAG = 27,
				E_NOCUTFROM_INTERPOLATING = 27,
				E_NOCUTFROM_MONEY_SHOT = 28,
				E_NOCUTFROM_ICE_MOVIE_NOT_FINISHED = 29,
				E_NOCUTFROM_BEHAVIOUR_NOCUTFROM = 30,
				E_END_NOCUTFROM_FLAG = 31,
			}

		}

	}

}

// BrnCameraValidityAccount.h:176
extern bool sbFailFlagMaskSet;

// BrnCameraValidityAccount.h:177
extern BitArray<32u> sFailFlagMask;

// BrnCameraValidityAccount.h:47
struct BrnDirector::Camera::ValidityAccount {
public:
	// BrnCameraValidityAccount.h:113
	void Construct();

	// BrnCameraValidityAccount.h:119
	void ClearNonFailFlags();

	// BrnCameraValidityAccount.h:123
	void Print(BrnDirector::DebugPrinter &) const;

	// BrnCameraValidityAccount.h:127
	void Print(BrnDirector::DebugLog &) const;

	// BrnCameraValidityAccount.h:133
	void CombineWith(const ValidityAccount &);

	// BrnCameraValidityAccount.h:137
	void SetFlag(BrnDirector::Camera::ValidityAccount::EFailedFlag);

	// BrnCameraValidityAccount.h:141
	void SetFlag(BrnDirector::Camera::ValidityAccount::ENoCutToFlag);

	// BrnCameraValidityAccount.h:145
	void SetFlag(BrnDirector::Camera::ValidityAccount::ENoCutFromFlag);

	// BrnCameraValidityAccount.h:160
	void SetupFailFlagMask();

}

