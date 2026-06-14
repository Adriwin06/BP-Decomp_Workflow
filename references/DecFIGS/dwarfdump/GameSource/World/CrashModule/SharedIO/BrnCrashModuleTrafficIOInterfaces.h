// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnCrashModuleTrafficIOInterfaces.h:60
struct BrnWorld::CrashIO::AddCrashingTrafficEvent {
	// BrnCrashModuleTrafficIOInterfaces.h:62
	VolumeInstanceId mVolumeInstanceId;

	// BrnCrashModuleTrafficIOInterfaces.h:63
	EntityId mCrasherEntityId;

	// BrnCrashModuleTrafficIOInterfaces.h:64
	BrnPhysics::Vehicle::eCrashTrafficType meCrashTrafficType;

}

// BrnCrashModuleTrafficIOInterfaces.h:78
struct BrnWorld::CrashIO::RemoveSlammedTrafficEvent {
	// BrnCrashModuleTrafficIOInterfaces.h:80
	uint16_t muVehicle;

}

// BrnCrashModuleTrafficIOInterfaces.h:94
struct BrnWorld::CrashIO::RemoveCrashedTrafficEvent {
	// BrnCrashModuleTrafficIOInterfaces.h:96
	uint16_t muVehicle;

}

// BrnCrashModuleTrafficIOInterfaces.h:148
struct BrnWorld::CrashIO::TrafficInputInterface {
	// BrnCrashModuleTrafficIOInterfaces.h:66
	typedef EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160> AddCrashingTrafficEventQueue;

private:
	// BrnCrashModuleTrafficIOInterfaces.h:187
	TrafficInputInterface::AddCrashingTrafficEventQueue mAddCrashingTrafficEventQueue;

	// Unknown accessibility
	// BrnCrashModuleTrafficIOInterfaces.h:82
	typedef EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160> RemoveSlammedTrafficEventQueue;

	// BrnCrashModuleTrafficIOInterfaces.h:188
	TrafficInputInterface::RemoveSlammedTrafficEventQueue mRemoveSlammedTrafficEventQueue;

	// Unknown accessibility
	// BrnCrashModuleTrafficIOInterfaces.h:98
	typedef EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160> RemoveCrashedTrafficEventQueue;

	// BrnCrashModuleTrafficIOInterfaces.h:189
	TrafficInputInterface::RemoveCrashedTrafficEventQueue mRemoveCrashedTrafficEventQueue;

	// Unknown accessibility
	// BrnCrashModuleTrafficIOInterfaces.h:135
	typedef FastBitArray<601> TrafficVehicleBits;

	// BrnCrashModuleTrafficIOInterfaces.h:190
	TrafficInputInterface::TrafficVehicleBits mRenderingBits;

	// BrnCrashModuleTrafficIOInterfaces.h:191
	TrafficInputInterface::TrafficVehicleBits mFarFromCameraBits;

	// BrnCrashModuleTrafficIOInterfaces.h:192
	TrafficInputInterface::TrafficVehicleBits mPhysicalBits;

public:
	// BrnCrashModuleTrafficIOInterfaces.h:153
	void Construct();

	// BrnCrashModuleTrafficIOInterfaces.h:160
	void AddCrashingTraffic(VolumeInstanceId, EntityId, BrnPhysics::Vehicle::eCrashTrafficType);

	// BrnCrashModuleTrafficIOInterfaces.h:165
	void RemoveSlammedTraffic(uint16_t);

	// BrnCrashModuleTrafficIOInterfaces.h:170
	void RemoveCrashedTraffic(uint16_t);

	// BrnCrashModuleTrafficIOInterfaces.h:173
	const TrafficInputInterface::AddCrashingTrafficEventQueue * GetAddCrashingTrafficEventQueue() const;

	// BrnCrashModuleTrafficIOInterfaces.h:174
	const TrafficInputInterface::RemoveSlammedTrafficEventQueue * GetRemoveSlammedTrafficEventQueue() const;

	// BrnCrashModuleTrafficIOInterfaces.h:175
	const TrafficInputInterface::RemoveCrashedTrafficEventQueue * GetRemoveCrashedTrafficEventQueue() const;

	// BrnCrashModuleTrafficIOInterfaces.h:177
	const TrafficInputInterface::TrafficVehicleBits * GetRenderingBits() const;

	// BrnCrashModuleTrafficIOInterfaces.h:178
	void SetRenderingBits(const TrafficInputInterface::TrafficVehicleBits *);

	// BrnCrashModuleTrafficIOInterfaces.h:180
	const TrafficInputInterface::TrafficVehicleBits * GetFarFromCameraBits() const;

	// BrnCrashModuleTrafficIOInterfaces.h:181
	void SetFarFromCameraBits(const TrafficInputInterface::TrafficVehicleBits *);

	// BrnCrashModuleTrafficIOInterfaces.h:183
	const TrafficInputInterface::TrafficVehicleBits * GetPhysicalBits() const;

	// BrnCrashModuleTrafficIOInterfaces.h:184
	void SetPhysicalBits(const TrafficInputInterface::TrafficVehicleBits *);

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h :31
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleNetworkIOInterfaces.h:32
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct CleanupTrafficEvent;

		struct NetworkTrafficCrashingEvent;

		struct TrafficInputInterface;

		struct TrafficOutputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

// BrnCrashModuleTrafficIOInterfaces.h:110
struct BrnWorld::CrashIO::CleanupTrafficEvent {
	// BrnCrashModuleTrafficIOInterfaces.h:112
	VolumeInstanceId mVolumeInstanceId;

}

// BrnCrashModuleTrafficIOInterfaces.h:127
struct BrnWorld::CrashIO::NetworkTrafficCrashingEvent {
	// BrnCrashModuleTrafficIOInterfaces.h:129
	uint16_t muVehicleId;

}

// BrnCrashModuleTrafficIOInterfaces.h:206
struct BrnWorld::CrashIO::TrafficOutputInterface {
	// BrnCrashModuleTrafficIOInterfaces.h:114
	typedef EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160> CleanupTrafficEventQueue;

private:
	// BrnCrashModuleTrafficIOInterfaces.h:237
	TrafficOutputInterface::CleanupTrafficEventQueue mCleanupTrafficEventQueue;

	// Unknown accessibility
	// BrnCrashModuleTrafficIOInterfaces.h:131
	typedef EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160> CrashNetworkTrafficQueue;

	// BrnCrashModuleTrafficIOInterfaces.h:238
	TrafficOutputInterface::CrashNetworkTrafficQueue mStartCrashingNetworkTrafficQueue;

public:
	// BrnCrashModuleTrafficIOInterfaces.h:211
	void Construct();

	// BrnCrashModuleTrafficIOInterfaces.h:217
	void AddTrafficToCleanup(VolumeInstanceId);

	// BrnCrashModuleTrafficIOInterfaces.h:222
	void StartNetworkTrafficVehicleCrashing(uint32_t);

	// BrnCrashModuleTrafficIOInterfaces.h:227
	const TrafficOutputInterface::CleanupTrafficEventQueue * GetCleanupTrafficEventQueue() const;

	// BrnCrashModuleTrafficIOInterfaces.h:232
	const TrafficOutputInterface::CrashNetworkTrafficQueue & GetStartCrashingNetworkTrafficQueue() const;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct CleanupTrafficEvent;

		struct NetworkTrafficCrashingEvent;

		struct TrafficInputInterface;

		struct TrafficOutputInterface;

		// BrnCrashModuleTrafficIOInterfaces.h:41
		const int32_t KI_MAX_CRASHING_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:42
		const int32_t KI_MAX_CLEANUP_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:43
		const int32_t KI_MAX_REMOVE_SLAMMED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:44
		const int32_t KI_MAX_REMOVE_CRASHED_TRAFFIC_EVENTS = 160;

		// BrnCrashModuleTrafficIOInterfaces.h:45
		const int32_t KI_MAX_NETWORK_CRASH_TRAFFIC_EVENTS = 160;

	}

}

