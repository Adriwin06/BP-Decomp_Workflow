// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficLightManager.cpp:28
	const float32_t KF_AMBER_TIME;

	// BrnTrafficLightManager.cpp:30
	const float32_t KF_COUNTDOWN_RED_TIME;

}

// BrnTrafficLightManager.cpp:46
void BrnTraffic::TrafficLightRuntimeState::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:173
void BrnTraffic::TrafficLightManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:175
		uint32_t luTrafficLight;

		TrafficLightRuntimeState::Construct(/* parameters */);
	}
}

// BrnTrafficLightManager.cpp:195
void BrnTraffic::TrafficLightManager::SetCountdownValue(int32_t  liCountdownDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:235
void BrnTraffic::TrafficLightManager::Update(float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:112
void BrnTraffic::TrafficLightRuntimeState::SetUnsmashed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:439
void BrnTraffic::TrafficLightManager::TrafficLightGotRestored(const TrafficLightCollection *  lpTrafficLightData, uint32_t  luInstanceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:444
		int32_t liInstanceIndex;

	}
	TrafficLightCollection::GetInstanceIndexForInstanceID(/* parameters */);
	{
		// BrnTrafficLightManager.cpp:448
		TrafficLightRuntimeState * lpState;

		GetLightState(/* parameters */);
		TrafficLightRuntimeState::SetUnsmashed(/* parameters */);
	}
}

// BrnTrafficLightManager.cpp:106
void BrnTraffic::TrafficLightRuntimeState::SetSmashed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:413
void BrnTraffic::TrafficLightManager::TrafficLightGotSmashed(const TrafficLightCollection *  lpTrafficLightData, uint32_t  luInstanceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:418
		int32_t liInstanceIndex;

	}
	TrafficLightCollection::GetInstanceIndexForInstanceID(/* parameters */);
	{
		// BrnTrafficLightManager.cpp:422
		TrafficLightRuntimeState * lpState;

		GetLightState(/* parameters */);
		TrafficLightRuntimeState::SetSmashed(/* parameters */);
	}
}

// BrnTrafficLightManager.cpp:100
void BrnTraffic::TrafficLightRuntimeState::IsSmashed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:353
void BrnTraffic::TrafficLightManager::RenderAllLightsToBeInStateForHull(const BrnTraffic::Hull *  lpHull, const TrafficLightCollection *  lpTrafficLightData, uint32_t  luActiveStates, BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lCameraDirection, const VecFloat  lfCullDistSq) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:355
		uint32_t luInstance;

	}
	{
		// BrnTrafficLightManager.cpp:363
		const TrafficLightRuntimeState * lpLightState;

		GetLightState(/* parameters */);
	}
}

// BrnTrafficLightManager.cpp:118
void BrnTraffic::TrafficLightRuntimeState::GetLightState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:290
void BrnTraffic::TrafficLightManager::RenderLightsForHull(const BrnTraffic::Hull *  lpHull, const TrafficLightCollection *  lpTrafficLightData, BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lCameraDirection, const VecFloat  lfCullDistSq) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:292
		uint32_t luInstance;

	}
	{
		// BrnTrafficLightManager.cpp:301
		uint32_t luActiveStates;

	}
	{
		// BrnTrafficLightManager.cpp:306
		const TrafficLightRuntimeState * lpLightState;

		GetLightState(/* parameters */);
	}
	{
		// BrnTrafficLightManager.cpp:324
		const TrafficLightRuntimeState * lpLightState;

		GetLightState(/* parameters */);
		TrafficLightRuntimeState::IsSmashed(/* parameters */);
	}
}

// BrnTrafficLightManager.cpp:62
void BrnTraffic::TrafficLightRuntimeState::Update(float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:92
		CgsDev::StrStream lStrStream;

	}
}

// BrnTrafficLightManager.cpp:263
void BrnTraffic::TrafficLightManager::UpdateHull(const BrnTraffic::Hull *  lpHull, float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:265
		uint32_t luInstance;

	}
	GetLightState(/* parameters */);
	TrafficLightRuntimeState::Update(/* parameters */);
}

// BrnTrafficLightManager.cpp:160
void BrnTraffic::TrafficLightRuntimeState::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightManager.cpp:124
void BrnTraffic::TrafficLightRuntimeState::SetState(BrnTraffic::TrafficLightRuntimeState::EState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightManager.cpp:154
		CgsDev::StrStream lStrStream;

	}
}

// BrnTrafficLightManager.cpp:387
void BrnTraffic::TrafficLightManager::ChangeLightState(uint32_t  luInstance, bool  lbChangeToRed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetLightState(/* parameters */);
	GetLightState(/* parameters */);
	TrafficLightRuntimeState::SetState(/* parameters */);
	GetLightState(/* parameters */);
	TrafficLightRuntimeState::SetState(/* parameters */);
}

