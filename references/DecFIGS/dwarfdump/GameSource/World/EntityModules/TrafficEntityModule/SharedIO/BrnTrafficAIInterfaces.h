// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTypeInterface.h:30
	namespace BrnTrafficIO {
		// BrnTrafficAIInterfaces.h:37
		const int32_t KI_MAX_TRAFFIC_NEAR_A_RACECAR = 32;

		// BrnTrafficAIInterfaces.h:38
		const int32_t KI_MAX_TRAFFIC_NEAR_RACECARS = 256;

	}

}

// BrnTrafficAIInterfaces.h:54
struct BrnTraffic::BrnTrafficIO::TrafficAIEntity {
	// BrnTrafficAIInterfaces.h:57
	extern const int32_t KI_BB_NUM_CORNERS = 8;

	// BrnTrafficAIInterfaces.h:74
	Vector2 mVelocity;

	// BrnTrafficAIInterfaces.h:75
	Vector2 mCentre;

	// BrnTrafficAIInterfaces.h:76
	EActiveRaceCarIndex meNearbyRaceCarIndex;

	// BrnTrafficAIInterfaces.h:77
	Vector3[8] maBBCorners;

public:
	// BrnTrafficAIInterfaces.h:59
	void TrafficAIEntity();

	// BrnTrafficAIInterfaces.h:66
	void TrafficAIEntity(Vector2, Vector2, EActiveRaceCarIndex, Vector3 *);

}

// BrnTrafficAIInterfaces.h:90
struct BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent {
private:
	// BrnTrafficAIInterfaces.h:110
	Vector3 mTargetPosition;

	// BrnTrafficAIInterfaces.h:111
	Vector3 mTargetDirection;

	// BrnTrafficAIInterfaces.h:112
	float32_t mfSpeed;

	// BrnTrafficAIInterfaces.h:113
	EGlobalRaceCarIndex meRaceCarIndex;

public:
	// BrnTrafficAIInterfaces.h:99
	void Construct(Vector3, Vector3, float32_t, EGlobalRaceCarIndex);

	// BrnTrafficAIInterfaces.h:103
	Vector3 GetTargetPosition() const;

	// BrnTrafficAIInterfaces.h:104
	Vector3 GetTargetDirection() const;

	// BrnTrafficAIInterfaces.h:105
	float32_t GetSpeed() const;

	// BrnTrafficAIInterfaces.h:106
	EGlobalRaceCarIndex GetRaceCarIndex() const;

}

// BrnTrafficAIInterfaces.h:128
struct BrnTraffic::BrnTrafficIO::TrafficAIInterface {
private:
	// BrnTrafficAIInterfaces.h:179
	uint16_t mu16EntityCount;

	// BrnTrafficAIInterfaces.h:180
	TrafficAIEntity[256] maActiveEntityList;

	// BrnTrafficAIInterfaces.h:182
	EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34> mUpdateRivalQueue;

	// BrnTrafficAIInterfaces.h:184
	Array<EGlobalRaceCarIndex,34u> mAddedRivals;

	// BrnTrafficAIInterfaces.h:185
	Array<EGlobalRaceCarIndex,34u> mRemovedRivals;

public:
	// BrnTrafficAIInterfaces.h:137
	void Construct();

	// BrnTrafficAIInterfaces.h:142
	// Declaration
	void AddTrafficEntity(const TrafficAIEntity &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficAIInterfaces.h:252
		using namespace CgsDev::Message;

	}

	// BrnTrafficAIInterfaces.h:145
	const TrafficAIEntity * GetTrafficEntity(uint16_t) const;

	// BrnTrafficAIInterfaces.h:148
	uint16_t GetTrafficEntityCount() const;

	// BrnTrafficAIInterfaces.h:154
	void SetRivalAddedToTraffic(EGlobalRaceCarIndex);

	// BrnTrafficAIInterfaces.h:159
	void SetRivalRemovedFromTraffic(EGlobalRaceCarIndex);

	// BrnTrafficAIInterfaces.h:168
	void UpdateRivalInTrafficSystem(Vector3, Vector3, float32_t, EGlobalRaceCarIndex);

	// BrnTrafficAIInterfaces.h:172
	const EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34> * GetUpdateRivalQueue() const;

	// BrnTrafficAIInterfaces.h:173
	const Array<EGlobalRaceCarIndex,34u> * GetAddedRivals() const;

	// BrnTrafficAIInterfaces.h:174
	const Array<EGlobalRaceCarIndex,34u> * GetRemovedRivals() const;

}

// BrnTrafficAIInterfaces.h:57
extern const int32_t KI_BB_NUM_CORNERS = 8;

