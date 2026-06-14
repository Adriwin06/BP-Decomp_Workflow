// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct TakedownManager {
		// BrnTakedownManager.h:56
		struct RaceCarData {
			// BrnTakedownManager.h:61
			bool[8] mabRevengeRelationships;

			// BrnTakedownManager.h:62
			float32_t mfTimeSinceLastTakenDown;

			// BrnTakedownManager.h:64
			float32_t mfTimeSinceVictimCrashed;

			// BrnTakedownManager.h:65
			bool mbWaitingOnTakedown;

			// BrnTakedownManager.h:66
			TakedownEvent mPendingTakedownEvent;

			// BrnTakedownManager.h:67
			float32_t mfTimeSinceLastTakedown;

			// BrnTakedownManager.h:68
			int32_t miTakedownChainLength;

			// BrnTakedownManager.h:69
			int32_t miMultipleTakedownLength;

		public:
			// BrnTakedownManager.h:59
			void Clear();

		}

	}

}

// BrnTakedownManager.h:50
struct BrnGameState::TakedownManager {
private:
	// BrnTakedownManager.h:203
	extern const float32_t KF_POST_TAKEDOWN_INVULNERABLE_TIME;

	// BrnTakedownManager.h:204
	extern const float32_t KF_DOUBLE_TAKEDOWN_TIME_LIMIT;

	// BrnTakedownManager.h:206
	extern const float32_t KF_TAKEDOWN_TIME_CONTACT;

	// BrnTakedownManager.h:207
	extern const float32_t KF_TAKEDOWN_TIME_CONTACT_ONLINE;

	// BrnTakedownManager.h:209
	extern const float32_t KF_TAKEDOWN_IGNORE_TIME;

	// BrnTakedownManager.h:210
	extern const float32_t KF_ONLINE_TAKEDOWN_IGNORE_TIME;

	// BrnTakedownManager.h:211
	extern const float32_t KF_TAKEDOWN_CONFIRMATION_TIME;

	// BrnTakedownManager.h:212
	extern const float32_t KF_ONLINE_TAKEDOWN_CONFIRMATION_TIME;

	// BrnTakedownManager.h:214
	extern const float32_t KF_SPEED_DROP_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:215
	extern const float32_t KF_MIN_SPEED_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:216
	extern const float32_t KF_MAX_SPEED_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:217
	extern const float32_t KF_MIN_ANGLE_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:218
	extern const float32_t KF_MAX_ANGULAR_VELOCITY_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:219
	extern const float32_t KF_MIN_TIME_IN_AIR_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:220
	extern const int32_t KI_WHEELS_OFF_GROUND_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:222
	extern const float32_t KF_TAKEDOWN_CHAIN_TIMEOUT_SECONDS;

	// BrnTakedownManager.h:224
	extern const float32_t KF_INVALID_TIME;

	// BrnTakedownManager.h:225
	extern const float32_t KF_MIN_TAKEDOWN_SPEED;

	// BrnTakedownManager.h:227
	extern const float32_t KF_FRONT_CONTACT_TOLERANCE;

	// BrnTakedownManager.h:230
	BrnGameState::TakedownManager::RaceCarData[8] maRaceCarData;

	// BrnTakedownManager.h:233
	float32_t mfTakedownCameraTimer;

	// BrnTakedownManager.h:234
	float32_t mfTakedownCameraEarlyOutTimer;

	// BrnTakedownManager.h:235
	EActiveRaceCarIndex meCurrentVictimActiveRaceCarIndex;

	// BrnTakedownManager.h:238
	BrnGameState::ModeManager * mpModeManager;

	// BrnTakedownManager.h:239
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTakedownManager.h:241
	float32_t mfPlayerSpeedAtTakedown;

	// BrnTakedownManager.h:242
	float32_t mfTimeWithWheelsOffGround;

	// BrnTakedownManager.h:243
	float32_t mfPlayerControlTimer;

	// BrnTakedownManager.h:244
	bool mbPlayerWaitingForControl;

	// BrnTakedownManager.h:245
	bool mbDoneResetThisTakedown;

	// BrnTakedownManager.h:248
	BrnGameState::TakedownManagerDebugComponent mTakedownManagerDebugComponent;

public:
	// BrnTakedownManager.h:76
	void Construct(BrnGameState::ModeManager *, BrnProgression::ProgressionManager *);

	// BrnTakedownManager.h:80
	bool Prepare();

	// BrnTakedownManager.h:91
	void Update(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, VehicleManagerOutputInterface::RaceCarCrashEventQueue *, CrashingRaceCarInterface *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:94
	bool IsInTakedownCamera() const;

	// BrnTakedownManager.h:97
	void ClearRaceCarData();

	// BrnTakedownManager.h:102
	bool IsBeingAttacked(const RaceCarState *, EActiveRaceCarIndex *);

	// BrnTakedownManager.h:107
	bool IsValidTakedownSituation(const RaceCarState *, const RaceCarState *);

	// BrnTakedownManager.h:111
	void ClearAllTakedowns(InputBuffer::GameActionQueue *);

private:
	// BrnTakedownManager.h:117
	BrnGameState::TakedownManager::RaceCarData * GetRaceCarData(EActiveRaceCarIndex);

	// BrnTakedownManager.h:120
	float32_t GetTakedownTime();

	// BrnTakedownManager.h:125
	void UpdateTakedownTimes(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnTakedownManager.h:131
	void UpdatePlayerResetStatus(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *, float32_t);

	// BrnTakedownManager.h:139
	void DetectTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:146
	bool DetectInstantTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const RaceCarCrashEvent *);

	// BrnTakedownManager.h:154
	void DetectStandardTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const RaceCarCrashEvent *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:160
	void DetectNetworkTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnTakedownManager.h:167
	void ProcessQueuedTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnTakedownManager.h:174
	void ProcessTakedownEvent(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, TakedownEvent *);

	// BrnTakedownManager.h:181
	// Declaration
	BrnGameState::ETakedownType GetTakedownTypeFromTrafficVehicleIndex(const TrafficTypeResponseQueue *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTakedownManagerTypes.h:98
		typedef OutputBuffer_PostPhysics::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	}

	// BrnTakedownManager.h:187
	void StartTakedownCamera(InputBuffer::GameActionQueue *, EActiveRaceCarIndex, BrnGameState::ETakedownType);

	// BrnTakedownManager.h:192
	void EndTakedownCamera(InputBuffer::GameActionQueue *, EActiveRaceCarIndex);

	// BrnTakedownManager.h:198
	void UpdateTakedownCamera(float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTakedownManager.h:201
	bool IsAllowedToResetPlayer();

}

// BrnTakedownManager.h:203
extern const float32_t KF_POST_TAKEDOWN_INVULNERABLE_TIME;

// BrnTakedownManager.h:204
extern const float32_t KF_DOUBLE_TAKEDOWN_TIME_LIMIT;

// BrnTakedownManager.h:206
extern const float32_t KF_TAKEDOWN_TIME_CONTACT;

// BrnTakedownManager.h:207
extern const float32_t KF_TAKEDOWN_TIME_CONTACT_ONLINE;

// BrnTakedownManager.h:209
extern const float32_t KF_TAKEDOWN_IGNORE_TIME;

// BrnTakedownManager.h:210
extern const float32_t KF_ONLINE_TAKEDOWN_IGNORE_TIME;

// BrnTakedownManager.h:211
extern const float32_t KF_TAKEDOWN_CONFIRMATION_TIME;

// BrnTakedownManager.h:212
extern const float32_t KF_ONLINE_TAKEDOWN_CONFIRMATION_TIME;

// BrnTakedownManager.h:214
extern const float32_t KF_SPEED_DROP_FOR_PLAYER_RESET;

// BrnTakedownManager.h:215
extern const float32_t KF_MIN_SPEED_FOR_PLAYER_RESET;

// BrnTakedownManager.h:216
extern const float32_t KF_MAX_SPEED_FOR_PLAYER_RESET;

// BrnTakedownManager.h:217
extern const float32_t KF_MIN_ANGLE_FOR_PLAYER_RESET;

// BrnTakedownManager.h:218
extern const float32_t KF_MAX_ANGULAR_VELOCITY_FOR_PLAYER_RESET;

// BrnTakedownManager.h:219
extern const float32_t KF_MIN_TIME_IN_AIR_FOR_PLAYER_RESET;

// BrnTakedownManager.h:220
extern const int32_t KI_WHEELS_OFF_GROUND_FOR_PLAYER_RESET;

// BrnTakedownManager.h:222
extern const float32_t KF_TAKEDOWN_CHAIN_TIMEOUT_SECONDS;

// BrnTakedownManager.h:224
extern const float32_t KF_INVALID_TIME;

// BrnTakedownManager.h:225
extern const float32_t KF_MIN_TAKEDOWN_SPEED;

// BrnTakedownManager.h:227
extern const float32_t KF_FRONT_CONTACT_TOLERANCE;

// BrnTakedownManager.h:50
struct BrnGameState::TakedownManager {
private:
	// BrnTakedownManager.h:203
	extern const float32_t KF_POST_TAKEDOWN_INVULNERABLE_TIME;

	// BrnTakedownManager.h:204
	extern const float32_t KF_DOUBLE_TAKEDOWN_TIME_LIMIT;

	// BrnTakedownManager.h:206
	extern const float32_t KF_TAKEDOWN_TIME_CONTACT;

	// BrnTakedownManager.h:207
	extern const float32_t KF_TAKEDOWN_TIME_CONTACT_ONLINE;

	// BrnTakedownManager.h:209
	extern const float32_t KF_TAKEDOWN_IGNORE_TIME;

	// BrnTakedownManager.h:210
	extern const float32_t KF_ONLINE_TAKEDOWN_IGNORE_TIME;

	// BrnTakedownManager.h:211
	extern const float32_t KF_TAKEDOWN_CONFIRMATION_TIME;

	// BrnTakedownManager.h:212
	extern const float32_t KF_ONLINE_TAKEDOWN_CONFIRMATION_TIME;

	// BrnTakedownManager.h:214
	extern const float32_t KF_SPEED_DROP_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:215
	extern const float32_t KF_MIN_SPEED_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:216
	extern const float32_t KF_MAX_SPEED_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:217
	extern const float32_t KF_MIN_ANGLE_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:218
	extern const float32_t KF_MAX_ANGULAR_VELOCITY_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:219
	extern const float32_t KF_MIN_TIME_IN_AIR_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:220
	extern const int32_t KI_WHEELS_OFF_GROUND_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:222
	extern const float32_t KF_TAKEDOWN_CHAIN_TIMEOUT_SECONDS;

	// BrnTakedownManager.h:224
	extern const float32_t KF_INVALID_TIME;

	// BrnTakedownManager.h:225
	extern const float32_t KF_MIN_TAKEDOWN_SPEED;

	// BrnTakedownManager.h:227
	extern const float32_t KF_FRONT_CONTACT_TOLERANCE;

	// BrnTakedownManager.h:230
	BrnGameState::TakedownManager::RaceCarData[8] maRaceCarData;

	// BrnTakedownManager.h:233
	float32_t mfTakedownCameraTimer;

	// BrnTakedownManager.h:234
	float32_t mfTakedownCameraEarlyOutTimer;

	// BrnTakedownManager.h:235
	EActiveRaceCarIndex meCurrentVictimActiveRaceCarIndex;

	// BrnTakedownManager.h:238
	BrnGameState::ModeManager * mpModeManager;

	// BrnTakedownManager.h:239
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTakedownManager.h:241
	float32_t mfPlayerSpeedAtTakedown;

	// BrnTakedownManager.h:242
	float32_t mfTimeWithWheelsOffGround;

	// BrnTakedownManager.h:243
	float32_t mfPlayerControlTimer;

	// BrnTakedownManager.h:244
	bool mbPlayerWaitingForControl;

	// BrnTakedownManager.h:245
	bool mbDoneResetThisTakedown;

	// BrnTakedownManager.h:248
	BrnGameState::TakedownManagerDebugComponent mTakedownManagerDebugComponent;

public:
	// BrnTakedownManager.h:76
	void Construct(BrnGameState::ModeManager *, BrnProgression::ProgressionManager *);

	// BrnTakedownManager.h:80
	bool Prepare();

	// BrnTakedownManager.h:91
	void Update(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, VehicleManagerOutputInterface::RaceCarCrashEventQueue *, CrashingRaceCarInterface *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:94
	bool IsInTakedownCamera() const;

	// BrnTakedownManager.h:97
	void ClearRaceCarData();

	// BrnTakedownManager.h:102
	bool IsBeingAttacked(const RaceCarState *, EActiveRaceCarIndex *);

	// BrnTakedownManager.h:107
	bool IsValidTakedownSituation(const RaceCarState *, const RaceCarState *);

	// BrnTakedownManager.h:111
	void ClearAllTakedowns(InputBuffer::GameActionQueue *);

private:
	// BrnTakedownManager.h:117
	BrnGameState::TakedownManager::RaceCarData * GetRaceCarData(EActiveRaceCarIndex);

	// BrnTakedownManager.h:120
	float32_t GetTakedownTime();

	// BrnTakedownManager.h:125
	void UpdateTakedownTimes(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnTakedownManager.h:131
	void UpdatePlayerResetStatus(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *, float32_t);

	// BrnTakedownManager.h:139
	void DetectTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:146
	bool DetectInstantTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const RaceCarCrashEvent *);

	// BrnTakedownManager.h:154
	void DetectStandardTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const RaceCarCrashEvent *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:160
	void DetectNetworkTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnTakedownManager.h:167
	void ProcessQueuedTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnTakedownManager.h:174
	void ProcessTakedownEvent(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, TakedownEvent *);

	// BrnTakedownManager.h:181
	// Declaration
	BrnGameState::ETakedownType GetTakedownTypeFromTrafficVehicleIndex(const TrafficTypeResponseQueue *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTakedownManagerTypes.h:98
		typedef PostWorldInputBuffer::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	}

	// BrnTakedownManager.h:187
	void StartTakedownCamera(InputBuffer::GameActionQueue *, EActiveRaceCarIndex, BrnGameState::ETakedownType);

	// BrnTakedownManager.h:192
	void EndTakedownCamera(InputBuffer::GameActionQueue *, EActiveRaceCarIndex);

	// BrnTakedownManager.h:198
	void UpdateTakedownCamera(float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTakedownManager.h:201
	bool IsAllowedToResetPlayer();

}

// BrnTakedownManager.h:50
struct BrnGameState::TakedownManager {
private:
	// BrnTakedownManager.h:203
	extern const float32_t KF_POST_TAKEDOWN_INVULNERABLE_TIME;

	// BrnTakedownManager.h:204
	extern const float32_t KF_DOUBLE_TAKEDOWN_TIME_LIMIT;

	// BrnTakedownManager.h:206
	extern const float32_t KF_TAKEDOWN_TIME_CONTACT;

	// BrnTakedownManager.h:207
	extern const float32_t KF_TAKEDOWN_TIME_CONTACT_ONLINE;

	// BrnTakedownManager.h:209
	extern const float32_t KF_TAKEDOWN_IGNORE_TIME;

	// BrnTakedownManager.h:210
	extern const float32_t KF_ONLINE_TAKEDOWN_IGNORE_TIME;

	// BrnTakedownManager.h:211
	extern const float32_t KF_TAKEDOWN_CONFIRMATION_TIME;

	// BrnTakedownManager.h:212
	extern const float32_t KF_ONLINE_TAKEDOWN_CONFIRMATION_TIME;

	// BrnTakedownManager.h:214
	extern const float32_t KF_SPEED_DROP_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:215
	extern const float32_t KF_MIN_SPEED_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:216
	extern const float32_t KF_MAX_SPEED_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:217
	extern const float32_t KF_MIN_ANGLE_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:218
	extern const float32_t KF_MAX_ANGULAR_VELOCITY_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:219
	extern const float32_t KF_MIN_TIME_IN_AIR_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:220
	extern const int32_t KI_WHEELS_OFF_GROUND_FOR_PLAYER_RESET;

	// BrnTakedownManager.h:222
	extern const float32_t KF_TAKEDOWN_CHAIN_TIMEOUT_SECONDS;

	// BrnTakedownManager.h:224
	extern const float32_t KF_INVALID_TIME;

	// BrnTakedownManager.h:225
	extern const float32_t KF_MIN_TAKEDOWN_SPEED;

	// BrnTakedownManager.h:227
	extern const float32_t KF_FRONT_CONTACT_TOLERANCE;

	// BrnTakedownManager.h:230
	BrnGameState::TakedownManager::RaceCarData[8] maRaceCarData;

	// BrnTakedownManager.h:233
	float32_t mfTakedownCameraTimer;

	// BrnTakedownManager.h:234
	float32_t mfTakedownCameraEarlyOutTimer;

	// BrnTakedownManager.h:235
	EActiveRaceCarIndex meCurrentVictimActiveRaceCarIndex;

	// BrnTakedownManager.h:238
	BrnGameState::ModeManager * mpModeManager;

	// BrnTakedownManager.h:239
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTakedownManager.h:241
	float32_t mfPlayerSpeedAtTakedown;

	// BrnTakedownManager.h:242
	float32_t mfTimeWithWheelsOffGround;

	// BrnTakedownManager.h:243
	float32_t mfPlayerControlTimer;

	// BrnTakedownManager.h:244
	bool mbPlayerWaitingForControl;

	// BrnTakedownManager.h:245
	bool mbDoneResetThisTakedown;

	// BrnTakedownManager.h:248
	BrnGameState::TakedownManagerDebugComponent mTakedownManagerDebugComponent;

public:
	// BrnTakedownManager.h:76
	void Construct(BrnGameState::ModeManager *, BrnProgression::ProgressionManager *);

	// BrnTakedownManager.h:80
	bool Prepare();

	// BrnTakedownManager.h:91
	void Update(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, VehicleManagerOutputInterface::RaceCarCrashEventQueue *, CrashingRaceCarInterface *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:94
	bool IsInTakedownCamera() const;

	// BrnTakedownManager.h:97
	void ClearRaceCarData();

	// BrnTakedownManager.h:102
	bool IsBeingAttacked(const RaceCarState *, EActiveRaceCarIndex *);

	// BrnTakedownManager.h:107
	bool IsValidTakedownSituation(const RaceCarState *, const RaceCarState *);

	// BrnTakedownManager.h:111
	void ClearAllTakedowns(OutputBuffer::GameActionQueue *);

private:
	// BrnTakedownManager.h:117
	BrnGameState::TakedownManager::RaceCarData * GetRaceCarData(EActiveRaceCarIndex);

	// BrnTakedownManager.h:120
	float32_t GetTakedownTime();

	// BrnTakedownManager.h:125
	void UpdateTakedownTimes(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnTakedownManager.h:131
	void UpdatePlayerResetStatus(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, OutputBuffer::GameActionQueue *, float32_t);

	// BrnTakedownManager.h:139
	void DetectTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:146
	bool DetectInstantTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const RaceCarCrashEvent *);

	// BrnTakedownManager.h:154
	void DetectStandardTakedown(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, const RaceCarCrashEvent *, PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnTakedownManager.h:160
	void DetectNetworkTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnTakedownManager.h:167
	void ProcessQueuedTakedowns(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnTakedownManager.h:174
	void ProcessTakedownEvent(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnGameState::GameStateModuleIO::OutputBuffer *, TakedownEvent *);

	// BrnTakedownManager.h:181
	// Declaration
	BrnGameState::ETakedownType GetTakedownTypeFromTrafficVehicleIndex(const TrafficTypeResponseQueue *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTakedownManagerTypes.h:98
		typedef OutputBuffer_PostPhysics::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	}

	// BrnTakedownManager.h:187
	void StartTakedownCamera(OutputBuffer::GameActionQueue *, EActiveRaceCarIndex, BrnGameState::ETakedownType);

	// BrnTakedownManager.h:192
	void EndTakedownCamera(OutputBuffer::GameActionQueue *, EActiveRaceCarIndex);

	// BrnTakedownManager.h:198
	void UpdateTakedownCamera(float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnTakedownManager.h:201
	bool IsAllowedToResetPlayer();

}

