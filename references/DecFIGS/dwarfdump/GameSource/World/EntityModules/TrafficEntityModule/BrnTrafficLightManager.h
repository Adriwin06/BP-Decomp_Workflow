// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct TrafficLightRuntimeState {
		// BrnTrafficLightManager.h:54
		enum EState {
			E_STATE_RED = 0,
			E_STATE_AMBER_TO_RED = 1,
			E_STATE_GREEN = 2,
			E_STATE_INVALID = 3,
		}

	}

}

// BrnTrafficLightManager.h:51
struct BrnTraffic::TrafficLightRuntimeState {
private:
	// BrnTrafficLightManager.h:93
	float32_t mfTimeLeftInState;

	// BrnTrafficLightManager.h:94
	uint8_t muState;

	// BrnTrafficLightManager.h:95
	uint8_t mxStateBits;

public:
	// BrnTrafficLightManager.h:66
	void Construct();

	// BrnTrafficLightManager.h:71
	void Update(float32_t);

	// BrnTrafficLightManager.h:74
	bool IsSmashed() const;

	// BrnTrafficLightManager.h:75
	void SetSmashed();

	// BrnTrafficLightManager.h:76
	void SetUnsmashed();

	// BrnTrafficLightManager.h:77
	uint8_t GetLightState() const;

	// BrnTrafficLightManager.h:78
	void SetState(BrnTraffic::TrafficLightRuntimeState::EState);

	// BrnTrafficLightManager.h:79
	BrnTraffic::TrafficLightRuntimeState::EState GetState() const;

}

// BrnTrafficLightManager.h:112
struct BrnTraffic::TrafficLightManager {
private:
	// BrnTrafficLightManager.h:176
	TrafficLightRuntimeState[2048] maLightStates;

	// BrnTrafficLightManager.h:178
	bool mbCountdownLights;

	// BrnTrafficLightManager.h:179
	BrnTraffic::ETrafficLightState meCountdownState;

	// BrnTrafficLightManager.h:180
	float32_t mfCountdownRemainingTime;

public:
	// BrnTrafficLightManager.h:117
	void Construct();

	// BrnTrafficLightManager.h:123
	void SetCountdownValue(int32_t);

	// BrnTrafficLightManager.h:128
	void Update(float32_t);

	// BrnTrafficLightManager.h:134
	void UpdateHull(const BrnTraffic::Hull *, float32_t);

	// BrnTrafficLightManager.h:144
	void RenderLightsForHull(const BrnTraffic::Hull *, const TrafficLightCollection *, BrnCoronaManager::BrnSubmissionInterface *, Vector3, Vector3, VecFloat) const;

	// BrnTrafficLightManager.h:154
	void RenderAllLightsToBeInStateForHull(const BrnTraffic::Hull *, const TrafficLightCollection *, uint32_t, BrnCoronaManager::BrnSubmissionInterface *, Vector3, Vector3, VecFloat) const;

	// BrnTrafficLightManager.h:160
	void ChangeLightState(uint32_t, bool);

	// BrnTrafficLightManager.h:166
	void TrafficLightGotSmashed(const TrafficLightCollection *, uint32_t);

	// BrnTrafficLightManager.h:172
	void TrafficLightGotRestored(const TrafficLightCollection *, uint32_t);

private:
	// BrnTrafficLightManager.h:183
	TrafficLightRuntimeState * GetLightState(uint32_t);

	// BrnTrafficLightManager.h:184
	const TrafficLightRuntimeState * GetLightState(uint32_t) const;

}

