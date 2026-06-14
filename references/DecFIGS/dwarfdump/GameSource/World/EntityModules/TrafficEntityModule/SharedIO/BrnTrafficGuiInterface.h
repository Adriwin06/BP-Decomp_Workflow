// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTypeInterface.h:30
	namespace BrnTrafficIO {
		// BrnTrafficGuiInterface.h:30
		const int32_t KI_MAX_CAR_SCORES_TO_SHOW = 20;

	}

}

// BrnTrafficGuiInterface.h:45
struct BrnTraffic::BrnTrafficIO::VehicleScoreData {
	// BrnTrafficGuiInterface.h:47
	Vector3 mPosition;

	// BrnTrafficGuiInterface.h:48
	float32_t mfDistanceSquared;

	// BrnTrafficGuiInterface.h:49
	int16_t miScore;

	// BrnTrafficGuiInterface.h:50
	int16_t miMultiplier;

	// BrnTrafficGuiInterface.h:51
	uint16_t muVehicleIndex;

}

