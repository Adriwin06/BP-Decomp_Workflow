// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnCrashModuleNetworkIOInterfaces.h:55
struct BrnWorld::CrashIO::CrashingTrafficUpdateEvent {
	// BrnCrashModuleNetworkIOInterfaces.h:57
	uint16_t muVehicleId;

	// BrnCrashModuleNetworkIOInterfaces.h:58
	Matrix44Affine mTransform;

}

// BrnCrashModuleNetworkIOInterfaces.h:72
struct BrnWorld::CrashIO::NetworkInputInterface {
	// BrnCrashModuleNetworkIOInterfaces.h:43
	typedef BitArray<8u> ActiveRaceCarBitArray;

private:
	// BrnCrashModuleNetworkIOInterfaces.h:109
	NetworkInputInterface::ActiveRaceCarBitArray mActiveRaceCars;

	// Unknown accessibility
	// BrnCrashModuleNetworkIOInterfaces.h:60
	typedef EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24> CrashingTrafficUpdateQueue;

	// BrnCrashModuleNetworkIOInterfaces.h:110
	NetworkInputInterface::CrashingTrafficUpdateQueue[8] maCrashingTrafficUpdateQueues;

public:
	// BrnCrashModuleNetworkIOInterfaces.h:77
	void Construct();

	// BrnCrashModuleNetworkIOInterfaces.h:81
	void Clear();

	// BrnCrashModuleNetworkIOInterfaces.h:87
	void MarkRaceCarForUpdate(int32_t);

	// BrnCrashModuleNetworkIOInterfaces.h:94
	void AddTrafficUpdate(uint32_t, uint32_t, Matrix44Affine);

	// BrnCrashModuleNetworkIOInterfaces.h:100
	bool IsRaceCarMarkedForUpdate(int32_t) const;

	// BrnCrashModuleNetworkIOInterfaces.h:105
	const NetworkInputInterface::CrashingTrafficUpdateQueue * GetCrashingTrafficUpdateQueue(int32_t) const;

}

// BrnCrashModuleNetworkIOInterfaces.h:125
struct BrnWorld::CrashIO::NetworkOutputInterface {
private:
	// BrnCrashModuleNetworkIOInterfaces.h:150
	NetworkInputInterface::CrashingTrafficUpdateQueue mCrashingTrafficUpdateQueue;

public:
	// BrnCrashModuleNetworkIOInterfaces.h:130
	void Construct();

	// BrnCrashModuleNetworkIOInterfaces.h:134
	void Clear();

	// BrnCrashModuleNetworkIOInterfaces.h:141
	void AddOwnedTrafficUpdate(uint32_t, Matrix44Affine);

	// BrnCrashModuleNetworkIOInterfaces.h:146
	const NetworkInputInterface::CrashingTrafficUpdateQueue * GetCrashingTrafficUpdateQueue() const;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h :31
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleNetworkIOInterfaces.h:32
	namespace CrashIO {
		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleNetworkIOInterfaces.h:32
	namespace CrashIO {
		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleNetworkIOInterfaces.h:32
	namespace CrashIO {
		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleNetworkIOInterfaces.h:36
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES_PER_PLAYER = 24;

		// BrnCrashModuleNetworkIOInterfaces.h:37
		const int32_t KI_MAX_NETWORK_TRAFFIC_UPDATES = 192;

	}

}

