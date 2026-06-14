// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct PlayerMenuData {
		// BrnNetworkPlayerMenuData.h:48
		extern const uint16_t KU_INVALID_COLOUR_INDEX = 65535;

		// BrnNetworkPlayerMenuData.h:49
		extern const uint16_t KU_INVALID_PAINT_FINISH_INDEX = 65535;

	}

}

// BrnNetworkPlayerMenuData.h:48
extern const uint16_t KU_INVALID_COLOUR_INDEX = 65535;

// BrnNetworkPlayerMenuData.h:49
extern const uint16_t KU_INVALID_PAINT_FINISH_INDEX = 65535;

// BrnNetworkPlayerMenuData.h:45
struct BrnNetwork::PlayerMenuData : public CgsNetwork::PlayerMenuData {
	// BrnNetworkPlayerMenuData.h:48
	extern const uint16_t KU_INVALID_COLOUR_INDEX = 65535;

	// BrnNetworkPlayerMenuData.h:49
	extern const uint16_t KU_INVALID_PAINT_FINISH_INDEX = 65535;

	// BrnNetworkPlayerMenuData.h:51
	CgsID mFreeBurnCarId;

	// BrnNetworkPlayerMenuData.h:52
	CgsID mFreeBurnWheelId;

	// BrnNetworkPlayerMenuData.h:53
	CgsID mCarId;

	// BrnNetworkPlayerMenuData.h:54
	CgsID mWheelId;

	// BrnNetworkPlayerMenuData.h:55
	RoadRulesRecvData::NetworkPlayerID mMarkedManID;

	// BrnNetworkPlayerMenuData.h:56
	BrnNetwork::ECameraStatus meCameraStatus;

	// BrnNetworkPlayerMenuData.h:57
	uint16_t mu16FreeburnCarColourIndex;

	// BrnNetworkPlayerMenuData.h:58
	uint16_t mu16FreeburnPaintFinishIndex;

	// BrnNetworkPlayerMenuData.h:59
	uint16_t mu16CarColourIndex;

	// BrnNetworkPlayerMenuData.h:60
	uint16_t mu16PaintFinishIndex;

	// BrnNetworkPlayerMenuData.h:61
	bool mbFinalCarSelection;

public:
	// BrnNetworkPlayerMenuData.cpp:27
	virtual void Clear();

}

// BrnNetworkPlayerMenuData.h:45
void BrnNetwork::PlayerMenuData::PlayerMenuData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

