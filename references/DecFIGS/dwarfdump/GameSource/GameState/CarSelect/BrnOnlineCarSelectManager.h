// BrnOnlineCarSelectManager.h:167
extern const float32_t KF_MAX_CAR_SELECT_DURATION;

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineCarSelectManager {
		// BrnOnlineCarSelectManager.h:65
		enum EInternalState {
			E_INTERNAL_STATE_NONE = 0,
			E_INTERNAL_STATE_CAR_SELECT = 1,
			E_INTERNAL_STATE_CAR_MODIFICATION = 2,
			E_INTERNAL_STATE_WAIT_FOR_HOST_TO_CHOOSE = 3,
			E_INTERNAL_STATE_WAIT_FOR_ONLINE = 4,
			E_INTERNAL_STATE_COUNT = 5,
		}

		// BrnOnlineCarSelectManager.h:77
		enum ECarChangeState {
			E_CAR_CHANGE_NONE = 0,
			E_CAR_CHANGE_REQUEST = 1,
			E_CAR_CHANGE_BUSY = 2,
			E_CAR_CHANGE_COUNT = 3,
		}

	}

}

// BrnOnlineCarSelectManager.h:61
struct BrnGameState::OnlineCarSelectManager {
private:
	// BrnOnlineCarSelectManager.h:167
	extern const float32_t KF_MAX_CAR_SELECT_DURATION;

	// BrnOnlineCarSelectManager.h:169
	BrnGameState::OnlineCarSelectManager::EInternalState meInternalState;

	// BrnOnlineCarSelectManager.h:171
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnOnlineCarSelectManager.h:172
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnOnlineCarSelectManager.h:174
	const VehicleList * mpVehicleList;

	// BrnOnlineCarSelectManager.h:175
	const BrnResource::WheelList * mpWheelList;

	// BrnOnlineCarSelectManager.h:177
	bool mbIsInOnlineCarSelect;

	// BrnOnlineCarSelectManager.h:179
	float32_t mfTimeLeftInCarSelect;

	// BrnOnlineCarSelectManager.h:181
	Vector3 mSpawnPosition;

	// BrnOnlineCarSelectManager.h:182
	Vector3 mSpawnDirection;

	// BrnOnlineCarSelectManager.h:184
	CgsID mStartCarId;

	// BrnOnlineCarSelectManager.h:185
	CgsID mFreeburnCarId;

	// BrnOnlineCarSelectManager.h:186
	CgsID mDesiredCarId;

	// BrnOnlineCarSelectManager.h:187
	CgsID mCacheDuringChangeCarId;

	// BrnOnlineCarSelectManager.h:189
	bool mbWaitingForStreaming;

	// BrnOnlineCarSelectManager.h:190
	bool mbHostChoiceAndNotHost;

	// BrnOnlineCarSelectManager.h:191
	BrnGameState::OnlineCarSelectManager::ECarChangeState meStateOfChangingCars;

	// BrnOnlineCarSelectManager.h:193
	int32_t miVehicleClassLimit;

public:
	// BrnOnlineCarSelectManager.h:88
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnOnlineCarSelectManager.h:91
	bool IsInOnlineCarSelect() const;

	// BrnOnlineCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnOnlineCarSelectManager.h:99
	void Prepare(const VehicleList *, const BrnResource::WheelList *);

	// BrnOnlineCarSelectManager.h:105
	// Declaration
	void Update(InputBuffer::GameActionQueue *, const ControllerInput *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:70
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:113
	// Declaration
	void EnterOnlineCarSelect(InputBuffer::GameActionQueue *, Vector3, Vector3, int32_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:156
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:117
	void EnterCarSelect(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:121
	void EnterModification(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:125
	void EnterWaitForHost(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:129
	// Declaration
	void StartWaitForOnline(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:381
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:133
	// Declaration
	void ExitOnlineCarSelect(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:397
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:138
	// Declaration
	void RequestChangeCar(InputBuffer::GameActionQueue *, const CgsID &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:437
		using namespace CgsDev::Message;

		// BrnOnlineCarSelectManager.cpp:446
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:143
	// Declaration
	void StreamingFinished(CgsID, InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:116
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:147
	// Declaration
	void SubmitFinalCarSelection(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:131
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:150
	int32_t GetVehicleClassLimit() const;

	// BrnOnlineCarSelectManager.h:153
	bool GetHostChoiceAndNotHost() const;

	// BrnOnlineCarSelectManager.h:156
	CgsID GetFreeburnCarId() const;

private:
	// BrnOnlineCarSelectManager.h:161
	void UpdateCarColour(CgsID, InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:165
	void SaveChosenLiveryForCar(CgsID);

	// BrnOnlineCarSelectManager.h:197
	// Declaration
	void StartCarSelectState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:261
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:201
	// Declaration
	void StartCarModificationState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:315
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:205
	// Declaration
	void UpdateRequestCarChangeState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:501
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:209
	// Declaration
	void UpdateChangeCarState(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:547
		using namespace CgsDev::Message;

		// BrnOnlineCarSelectManager.cpp:556
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:213
	void TeleportCurrentVehicle(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:217
	// Declaration
	void SpawnInStartCar(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:627
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:221
	// Declaration
	void GetCurrentPlayerVehicle(CgsID &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:660
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:225
	// Declaration
	const CarData * GetProfileCarData(CgsID &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCarSelectManager.cpp:675
		using namespace CgsDev::Message;

	}

	// BrnOnlineCarSelectManager.h:231
	void SendOnlineChangeCarAction(InputBuffer::GameActionQueue *, bool);

}

// BrnOnlineCarSelectManager.h:61
struct BrnGameState::OnlineCarSelectManager {
private:
	// BrnOnlineCarSelectManager.h:167
	extern const float32_t KF_MAX_CAR_SELECT_DURATION;

	// BrnOnlineCarSelectManager.h:169
	BrnGameState::OnlineCarSelectManager::EInternalState meInternalState;

	// BrnOnlineCarSelectManager.h:171
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnOnlineCarSelectManager.h:172
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnOnlineCarSelectManager.h:174
	const VehicleList * mpVehicleList;

	// BrnOnlineCarSelectManager.h:175
	const BrnResource::WheelList * mpWheelList;

	// BrnOnlineCarSelectManager.h:177
	bool mbIsInOnlineCarSelect;

	// BrnOnlineCarSelectManager.h:179
	float32_t mfTimeLeftInCarSelect;

	// BrnOnlineCarSelectManager.h:181
	Vector3 mSpawnPosition;

	// BrnOnlineCarSelectManager.h:182
	Vector3 mSpawnDirection;

	// BrnOnlineCarSelectManager.h:184
	CgsID mStartCarId;

	// BrnOnlineCarSelectManager.h:185
	CgsID mFreeburnCarId;

	// BrnOnlineCarSelectManager.h:186
	CgsID mDesiredCarId;

	// BrnOnlineCarSelectManager.h:187
	CgsID mCacheDuringChangeCarId;

	// BrnOnlineCarSelectManager.h:189
	bool mbWaitingForStreaming;

	// BrnOnlineCarSelectManager.h:190
	bool mbHostChoiceAndNotHost;

	// BrnOnlineCarSelectManager.h:191
	BrnGameState::OnlineCarSelectManager::ECarChangeState meStateOfChangingCars;

	// BrnOnlineCarSelectManager.h:193
	int32_t miVehicleClassLimit;

public:
	// BrnOnlineCarSelectManager.h:88
	void Construct(BrnGameState::GameStateModule *, BrnProgression::ProgressionManager *);

	// BrnOnlineCarSelectManager.h:91
	bool IsInOnlineCarSelect() const;

	// BrnOnlineCarSelectManager.h:94
	bool IsWaitingForStreaming() const;

	// BrnOnlineCarSelectManager.h:99
	void Prepare(const VehicleList *, const BrnResource::WheelList *);

	// BrnOnlineCarSelectManager.h:105
	void Update(InputBuffer::GameActionQueue *, const ControllerInput *, float32_t);

	// BrnOnlineCarSelectManager.h:113
	void EnterOnlineCarSelect(InputBuffer::GameActionQueue *, Vector3, Vector3, int32_t, bool);

	// BrnOnlineCarSelectManager.h:117
	void EnterCarSelect(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:121
	void EnterModification(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:125
	void EnterWaitForHost(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:129
	void StartWaitForOnline(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:133
	void ExitOnlineCarSelect(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:138
	void RequestChangeCar(InputBuffer::GameActionQueue *, const CgsID &);

	// BrnOnlineCarSelectManager.h:143
	void StreamingFinished(CgsID, InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:147
	void SubmitFinalCarSelection(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:150
	int32_t GetVehicleClassLimit() const;

	// BrnOnlineCarSelectManager.h:153
	bool GetHostChoiceAndNotHost() const;

	// BrnOnlineCarSelectManager.h:156
	CgsID GetFreeburnCarId() const;

private:
	// BrnOnlineCarSelectManager.h:161
	void UpdateCarColour(CgsID, InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:165
	void SaveChosenLiveryForCar(CgsID);

	// BrnOnlineCarSelectManager.h:197
	void StartCarSelectState(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:201
	void StartCarModificationState(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:205
	void UpdateRequestCarChangeState(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:209
	void UpdateChangeCarState(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:213
	void TeleportCurrentVehicle(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:217
	void SpawnInStartCar(InputBuffer::GameActionQueue *);

	// BrnOnlineCarSelectManager.h:221
	void GetCurrentPlayerVehicle(CgsID &) const;

	// BrnOnlineCarSelectManager.h:225
	const CarData * GetProfileCarData(CgsID &) const;

	// BrnOnlineCarSelectManager.h:231
	void SendOnlineChangeCarAction(InputBuffer::GameActionQueue *, bool);

}

