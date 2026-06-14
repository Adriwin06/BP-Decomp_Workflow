// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct WorldMap {
		// BrnDirectorWorldMap.h:70
		struct LanePosition {
			// BrnDirectorWorldMap.h:71
			Vector3 mPosition;

			// BrnDirectorWorldMap.h:72
			float32_t mfSquaredDistance;

			// BrnDirectorWorldMap.h:73
			float32_t mfParamAlongSection;

			// BrnDirectorWorldMap.h:74
			uint32_t muHullIndex;

			// BrnDirectorWorldMap.h:75
			uint8_t muSection;

			// BrnDirectorWorldMap.h:76
			uint8_t muRung;

			// BrnDirectorWorldMap.h:77
			bool mbValid;

		}

		// BrnDirectorWorldMap.h:132
		enum ELoadingState {
			E_LOADING_STATE_TRIGGERS_NOT_REQUESTED = 0,
			E_LOADING_STATE_LOADING_TRIGGERS = 1,
			E_LOADING_STATE_TRAFFIC_NOT_REQUESTED = 2,
			E_LOADING_STATE_LOADING_TRAFFIC = 3,
			E_AI_DATA_ACQUIRE_NOT_STARTED = 4,
			E_AI_DATA_ACQUIRE_REQUESTED = 5,
			E_LOADING_STATE_LOADED = 6,
		}

	}

}

// BrnDirectorWorldMap.h:42
struct BrnDirector::WorldMap {
private:
	// BrnDirectorWorldMap.h:143
	ResourcePtr<BrnTraffic::TrafficData> mpTrafficData;

	// BrnDirectorWorldMap.h:144
	ResourcePtr<BrnTrigger::TriggerData> mpTriggerData;

	// BrnDirectorWorldMap.h:145
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnDirectorWorldMap.h:147
	EventReceiverQueue<128,16> mReceiverQueue;

	// BrnDirectorWorldMap.h:149
	BrnDirector::WorldMap::ELoadingState meLoadingState;

public:
	// BrnDirectorWorldMap.h:46
	void Construct();

	// BrnDirectorWorldMap.h:50
	bool Prepare(OutputBuffer::ResourceRequestInterface *);

	// BrnDirectorWorldMap.h:53
	bool Release();

	// BrnDirectorWorldMap.h:56
	void Destruct();

	// BrnDirectorWorldMap.h:61
	bool GetSafePositionNearest(Vector3, Vector3 &) const;

	// BrnDirectorWorldMap.h:67
	bool GetSafePositionNearestPointWithDisplacement(Vector3, Vector3, Vector3 &) const;

	// BrnDirectorWorldMap.h:82
	BrnDirector::WorldMap::LanePosition GetLanePositionNearestPoint(Vector3) const;

	// BrnDirectorWorldMap.h:87
	BrnDirector::WorldMap::LanePosition GetLanePositionNearestPointWithDisplacement(Vector3, Vector3) const;

	// BrnDirectorWorldMap.h:90
	const TrafficData *const GetTrafficData() const;

	// BrnDirectorWorldMap.h:93
	const BrnTraffic::Hull *const* GetTrafficHullData() const;

	// BrnDirectorWorldMap.h:96
	const uint16_t GetNumTrafficHulls() const;

	// BrnDirectorWorldMap.h:99
	const AISectionsData * GetAISectionData() const;

	// BrnDirectorWorldMap.h:102
	const TriggerData * GetTriggerData() const;

	// BrnDirectorWorldMap.h:109
	bool GetInterestingPointNear(Vector3, float32_t, Vector3 *, Matrix44Affine *) const;

	// BrnDirectorWorldMap.h:112
	bool HasLoadedData() const;

private:
	// BrnDirectorWorldMap.h:121
	void WalkLaneLeft(const BrnTraffic::Hull *, uint8_t *, uint8_t *, float32_t *) const;

	// BrnDirectorWorldMap.h:125
	bool LoadData(OutputBuffer::ResourceRequestInterface *);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct WorldMap {
		// BrnDirectorWorldMap.h:70
		struct LanePosition {
			// BrnDirectorWorldMap.h:71
			Vector3 mPosition;

			// BrnDirectorWorldMap.h:72
			float32_t mfSquaredDistance;

			// BrnDirectorWorldMap.h:73
			float32_t mfParamAlongSection;

			// BrnDirectorWorldMap.h:74
			uint32_t muHullIndex;

			// BrnDirectorWorldMap.h:75
			uint8_t muSection;

			// BrnDirectorWorldMap.h:76
			uint8_t muRung;

			// BrnDirectorWorldMap.h:77
			bool mbValid;

		}

		// BrnDirectorWorldMap.h:132
		enum ELoadingState {
			E_LOADING_STATE_TRIGGERS_NOT_REQUESTED = 0,
			E_LOADING_STATE_LOADING_TRIGGERS = 1,
			E_LOADING_STATE_TRAFFIC_NOT_REQUESTED = 2,
			E_LOADING_STATE_LOADING_TRAFFIC = 3,
			E_AI_DATA_ACQUIRE_NOT_STARTED = 4,
			E_AI_DATA_ACQUIRE_REQUESTED = 5,
			E_LOADING_STATE_LOADED = 6,
		}

	}

}

