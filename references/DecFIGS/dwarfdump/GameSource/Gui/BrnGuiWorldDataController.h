// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct WorldDataController {
		// BrnGuiWorldDataController.h:157
		enum EWorldDataControllerState {
			E_WORLDDATACONTROLLERSTATE_DESTRUCTED = 0,
			E_WORLDDATACONTROLLERSTATE_CONSTRUCTED = 1,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_TRIGGERS = 2,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_TRIGGERS = 3,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_VEHICLES = 4,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_VEHICLES = 5,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_PROGRESSION = 6,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_PROGRESSION = 7,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_STREET_DATA = 8,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_STREET_DATA = 9,
			E_WORLDDATACONTROLLERSTATE_PLAYERCARCOLOURS = 10,
			E_WORLDDATACONTROLLERSTATE_WFPLAYERCARCOLOURS = 11,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_FREEBURN_CHALLENGES = 12,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_FREEBURN_CHALLENGES = 13,
			E_WORLDDATACONTROLLERSTATE_PREPARED = 14,
			E_WORLDDATACONTROLLERSTATE_READY = 15,
			E_WORLDDATACONTROLLERSTATE_COUNT = 16,
		}

	}

}

// BrnGuiWorldDataController.h:64
struct BrnGui::WorldDataController {
private:
	// BrnGuiWorldDataController.h:182
	BrnGui::WorldDataController::EWorldDataControllerState meState;

	// BrnGuiWorldDataController.h:183
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnGuiWorldDataController.h:184
	int32_t miResourceCount;

	// BrnGuiWorldDataController.h:186
	ResourcePtr<BrnTrigger::TriggerData> mpTriggerData;

	// BrnGuiWorldDataController.h:188
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnGuiWorldDataController.h:189
	const BrnResource::VehicleList * mpVehicleList;

	// BrnGuiWorldDataController.h:190
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnGuiWorldDataController.h:191
	ResourcePtr<BrnStreetData::StreetData> mpStreetData;

	// BrnGuiWorldDataController.h:193
	const ChallengeList * mpChallengeList;

public:
	// BrnGuiWorldDataController.h:69
	void Construct();

	// BrnGuiWorldDataController.h:74
	bool Prepare(InputBuffer *);

	// BrnGuiWorldDataController.h:78
	bool Release();

	// BrnGuiWorldDataController.h:83
	const Landmark * GetLandmarkInfoAtPositionInList(int32_t) const;

	// BrnGuiWorldDataController.h:88
	const Landmark * GetOnlineLandmarkInfoAtPositionInList(int32_t) const;

	// BrnGuiWorldDataController.h:93
	const Landmark * GetLandmarkInfoFromIndex(LandmarkIndex) const;

	// BrnGuiWorldDataController.h:98
	const Landmark * GetLandmarkInfoFromID(CgsID) const;

	// BrnGuiWorldDataController.h:103
	const BrnProgression::RaceEventData * GetEventInfoFromEventId(uint32_t) const;

	// BrnGuiWorldDataController.h:108
	const BrnProgression::RaceEventData * GetOnlineEventInfoFromEventId(uint32_t) const;

	// BrnGuiWorldDataController.h:112
	int32_t GetTotalNumberOfLandmarks() const;

	// BrnGuiWorldDataController.h:116
	int32_t GetTotalNumberOfOnlineLandmarks() const;

	// BrnGuiWorldDataController.h:122
	void GetTriggerVolumeRegion(CgsID, BoxRegion *) const;

	// BrnGuiWorldDataController.h:129
	void GetRoadTriggerVolumeRegions(CgsID, BoxRegion *, BoxRegion *) const;

	// BrnGuiWorldDataController.h:133
	const BrnResource::VehicleList * GetVehicleList() const;

	// BrnGuiWorldDataController.h:137
	const ChallengeList * GetFreeburnChallengeList() const;

	// BrnGuiWorldDataController.h:142
	int32_t GetRequiredWinsInRank(int32_t) const;

	// BrnGuiWorldDataController.h:147
	const PlayerCarColourPalette * GetColourPaletteFromType(BrnWorld::EPalettesTypes) const;

	// BrnGuiWorldDataController.h:151
	const BrnProgression::ProgressionData * GetProgressionData() const;

}

// BrnGuiWorldDataController.h:64
struct BrnGui::WorldDataController {
private:
	// BrnGuiWorldDataController.h:182
	BrnGui::WorldDataController::EWorldDataControllerState meState;

	// BrnGuiWorldDataController.h:183
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnGuiWorldDataController.h:184
	int32_t miResourceCount;

	// BrnGuiWorldDataController.h:186
	ResourcePtr<BrnTrigger::TriggerData> mpTriggerData;

	// BrnGuiWorldDataController.h:188
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnGuiWorldDataController.h:189
	const VehicleList * mpVehicleList;

	// BrnGuiWorldDataController.h:190
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnGuiWorldDataController.h:191
	ResourcePtr<BrnStreetData::StreetData> mpStreetData;

	// BrnGuiWorldDataController.h:193
	const ChallengeList * mpChallengeList;

public:
	// BrnGuiWorldDataController.h:69
	void Construct();

	// BrnGuiWorldDataController.h:74
	bool Prepare(InputBuffer *);

	// BrnGuiWorldDataController.h:78
	bool Release();

	// BrnGuiWorldDataController.h:83
	const Landmark * GetLandmarkInfoAtPositionInList(int32_t) const;

	// BrnGuiWorldDataController.h:88
	const Landmark * GetOnlineLandmarkInfoAtPositionInList(int32_t) const;

	// BrnGuiWorldDataController.h:93
	const Landmark * GetLandmarkInfoFromIndex(LandmarkIndex) const;

	// BrnGuiWorldDataController.h:98
	const Landmark * GetLandmarkInfoFromID(CgsID) const;

	// BrnGuiWorldDataController.h:103
	const BrnProgression::RaceEventData * GetEventInfoFromEventId(uint32_t) const;

	// BrnGuiWorldDataController.h:108
	const BrnProgression::RaceEventData * GetOnlineEventInfoFromEventId(uint32_t) const;

	// BrnGuiWorldDataController.h:112
	int32_t GetTotalNumberOfLandmarks() const;

	// BrnGuiWorldDataController.h:116
	int32_t GetTotalNumberOfOnlineLandmarks() const;

	// BrnGuiWorldDataController.h:122
	void GetTriggerVolumeRegion(CgsID, BoxRegion *) const;

	// BrnGuiWorldDataController.h:129
	void GetRoadTriggerVolumeRegions(CgsID, BoxRegion *, BoxRegion *) const;

	// BrnGuiWorldDataController.h:133
	const VehicleList * GetVehicleList() const;

	// BrnGuiWorldDataController.h:137
	const ChallengeList * GetFreeburnChallengeList() const;

	// BrnGuiWorldDataController.h:142
	int32_t GetRequiredWinsInRank(int32_t) const;

	// BrnGuiWorldDataController.h:147
	const PlayerCarColourPalette * GetColourPaletteFromType(BrnWorld::EPalettesTypes) const;

	// BrnGuiWorldDataController.h:151
	const BrnProgression::ProgressionData * GetProgressionData() const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct WorldDataController {
		// BrnGuiWorldDataController.h:157
		enum EWorldDataControllerState {
			E_WORLDDATACONTROLLERSTATE_DESTRUCTED = 0,
			E_WORLDDATACONTROLLERSTATE_CONSTRUCTED = 1,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_TRIGGERS = 2,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_TRIGGERS = 3,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_VEHICLES = 4,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_VEHICLES = 5,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_PROGRESSION = 6,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_PROGRESSION = 7,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_STREET_DATA = 8,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_STREET_DATA = 9,
			E_WORLDDATACONTROLLERSTATE_PLAYERCARCOLOURS = 10,
			E_WORLDDATACONTROLLERSTATE_WFPLAYERCARCOLOURS = 11,
			E_WORLDDATACONTROLLERSTATE_PREPARING_FOR_FREEBURN_CHALLENGES = 12,
			E_WORLDDATACONTROLLERSTATE_PREPARING_ACQUIRING_FREEBURN_CHALLENGES = 13,
			E_WORLDDATACONTROLLERSTATE_PREPARED = 14,
			E_WORLDDATACONTROLLERSTATE_READY = 15,
			E_WORLDDATACONTROLLERSTATE_COUNT = 16,
		}

	}

}

