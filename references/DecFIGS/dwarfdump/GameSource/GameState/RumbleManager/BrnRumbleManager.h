// BrnRumbleManager.h:47
struct BrnGameState::RumbleManager {
private:
	// BrnRumbleManager.h:108
	surfacelist mSurfaceList;

	// BrnRumbleManager.h:110
	PreWorldInputBuffer::PlayJoltEffectEventQueue mPlayJoltEffectEventQueue;

	// BrnRumbleManager.h:111
	PreWorldInputBuffer::PlayRumbleEffectEventQueue mPlayRumbleEffectEventQueue;

	// BrnRumbleManager.h:112
	PreWorldInputBuffer::ChangeVolumeRumbleEffectEventQueue mChangeVolumeRumbleEffectEventQueue;

	// BrnRumbleManager.h:113
	PreWorldInputBuffer::StopRumbleEffectEventQueue mStopRumbleEffectEventQueue;

	// BrnRumbleManager.h:115
	uint8_t[4] mau8SurfaceID;

	// BrnRumbleManager.h:116
	uint8_t[4] mau8NumWheelsOnSurface;

	// BrnRumbleManager.h:118
	int32_t[4] manRumbleID;

	// BrnRumbleManager.h:119
	float32_t[4] mafRumbleVolume;

	// BrnRumbleManager.h:121
	bool mbRumbleEnabled;

	// BrnRumbleManager.h:122
	bool mbRumblePaused;

	// BrnRumbleManager.h:123
	bool mbGameWasPaused;

	// BrnRumbleManager.h:124
	bool mbInPictureParadise;

	// BrnRumbleManager.h:126
	bool mbPlayerIsCrashing;

	// BrnRumbleManager.h:127
	bool mbPlayerHasJustCheckedTraffic;

	// BrnRumbleManager.h:128
	bool mbPlayerIsInAir;

	// BrnRumbleManager.h:130
	bool mbWheelForceFeedback;

public:
	// BrnRumbleManager.h:52
	void Construct();

	// BrnRumbleManager.h:56
	bool Prepare();

	// BrnRumbleManager.h:65
	void Update(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, VehicleManagerOutputInterface::RaceCarCrashEventQueue *, EActiveRaceCarIndex, ContactSpyInterface *, float32_t);

	// BrnRumbleManager.h:70
	void UpdatePauseState(bool, InputBuffer::GameActionQueue *);

	// BrnRumbleManager.h:74
	void UpdatePictureParadiseState(bool);

	// BrnRumbleManager.h:79
	void UpdateSurfaceRumble(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex);

	// BrnRumbleManager.h:83
	void OnTrafficCheck();

	// BrnRumbleManager.h:87
	void OnVehicleAggressorImpact(BrnPhysics::Vehicle::EImpactType);

	// BrnRumbleManager.h:91
	void OnVehicleVictimImpact(BrnPhysics::Vehicle::EImpactType);

	// BrnRumbleManager.h:97
	void BridgeRumbleToInput(PreWorldInputBuffer *, const TimerStatusInterface *);

	// BrnRumbleManager.h:101
	void SetWheelForceFeedback(bool);

	// BrnRumbleManager.h:104
	bool GetWheelForceFeedback();

private:
	// BrnRumbleManager.h:137
	void UpdateImpacts(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex, ContactSpyInterface *);

	// BrnRumbleManager.h:144
	void PlayRumble(int32_t, float32_t, int32_t, const JoltEffect &);

	// BrnRumbleManager.h:150
	void ChangeRumbleVolume(int32_t, float32_t, const JoltEffect &);

	// BrnRumbleManager.h:154
	void StopRumble(int32_t);

	// BrnRumbleManager.h:159
	void PlayJolt(int32_t, const JoltEffect &);

}

