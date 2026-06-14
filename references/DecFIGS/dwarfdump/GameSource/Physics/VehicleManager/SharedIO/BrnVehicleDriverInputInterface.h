// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleDriverInputInterface.h:30
		const int32_t KI_NETWORK_DRIVER_UPDATE_SIZE = 288;

		// BrnVehicleDriverInputInterface.h:31
		const int32_t KI_TRAFFIC_DRIVER_UPDATE_SIZE = 102;

		// BrnVehicleDriverInputInterface.h:34
		const int32_t KI_UPDATE_DRIVER_EVENT_QUEUE_SIZE = 4920;

	}

}

// BrnVehicleDriverInputInterface.h:53
struct BrnPhysics::Vehicle::VehicleDriverInputInterface {
	// BrnVehicleDriverInputInterface.h:42
	typedef VariableEventQueue<4920,16> UpdateDriverEventQueue;

private:
	// BrnVehicleDriverInputInterface.h:108
	VehicleDriverInputInterface::UpdateDriverEventQueue mDriverUpdateQueue;

	// BrnVehicleDriverInputInterface.h:111
	Vector3[8] mTargetAssistPositions;

	// BrnVehicleDriverInputInterface.h:112
	EntityId[8] mTargetAssistIDs;

	// BrnVehicleDriverInputInterface.h:113
	int32_t miTargetAssistCount;

public:
	// BrnVehicleDriverInputInterface.h:57
	void Construct();

	// BrnVehicleDriverInputInterface.h:61
	void Append(const VehicleDriverInputInterface *);

	// BrnVehicleDriverInputInterface.h:64
	void Clear();

	// BrnVehicleDriverInputInterface.h:68
	void UpdatePlayerDriver(const BrnPlayerDriverControls *);

	// BrnVehicleDriverInputInterface.h:72
	void UpdateNetworkDriver(const BrnNetworkDriverControls *);

	// BrnVehicleDriverInputInterface.h:76
	void UpdateAIDriver(const BrnAIDriverControls *);

	// BrnVehicleDriverInputInterface.h:80
	void UpdateTrafficDriver(const BrnTrafficDriverControls *);

	// BrnVehicleDriverInputInterface.h:85
	void AddTargetAssist(Vector3, EntityId);

	// BrnVehicleDriverInputInterface.h:89
	VehicleDriverInputInterface::UpdateDriverEventQueue * GetUpdateDriverQueue();

	// BrnVehicleDriverInputInterface.h:92
	const VehicleDriverInputInterface::UpdateDriverEventQueue * GetUpdateDriverQueue() const;

	// BrnVehicleDriverInputInterface.h:98
	void GetTargetAssistParams(Vector3 *, EntityId *, int32_t *) const;

	// BrnVehicleDriverInputInterface.h:102
	void CopyTargetAssistParams(const VehicleDriverInputInterface *);

	// BrnVehicleDriverInputInterface.h:105
	int32_t GetTargetAssistCount() const;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleDriverInputInterface.h:30
		const int32_t KI_NETWORK_DRIVER_UPDATE_SIZE = 288;

		// BrnVehicleDriverInputInterface.h:31
		const int32_t KI_TRAFFIC_DRIVER_UPDATE_SIZE = 102;

		// BrnVehicleDriverInputInterface.h:34
		const int32_t KI_UPDATE_DRIVER_EVENT_QUEUE_SIZE = 4920;

	}

}

