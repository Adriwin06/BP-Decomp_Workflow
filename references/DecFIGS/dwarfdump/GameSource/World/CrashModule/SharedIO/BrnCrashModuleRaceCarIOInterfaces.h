// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h :31
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h :36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		struct RaceCarCrashCompleteEvent;

		struct RaceCarOutputInterface;

		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnCrashModuleRaceCarIOInterfaces.h:51
struct BrnWorld::CrashIO::RaceCarCrashCompleteEvent {
	// BrnCrashModuleRaceCarIOInterfaces.h:53
	VolumeInstanceId mVolumeInstanceId;

	// BrnCrashModuleRaceCarIOInterfaces.h:54
	bool mbNetworkCarCrashTimeout;

}

// BrnCrashModuleRaceCarIOInterfaces.h:68
struct BrnWorld::CrashIO::RaceCarOutputInterface {
	// BrnCrashModuleRaceCarIOInterfaces.h:56
	typedef EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10> RaceCarCrashCompleteEventQueue;

private:
	// BrnCrashModuleRaceCarIOInterfaces.h:95
	RaceCarOutputInterface::RaceCarCrashCompleteEventQueue mRaceCarCrashCompleteEventQueue;

public:
	// BrnCrashModuleRaceCarIOInterfaces.h:73
	void Construct();

	// BrnCrashModuleRaceCarIOInterfaces.h:77
	void Clear();

	// BrnCrashModuleRaceCarIOInterfaces.h:82
	void Append(const RaceCarOutputInterface *);

	// BrnCrashModuleRaceCarIOInterfaces.h:88
	void AddRaceCarCompletedCrash(VolumeInstanceId, bool);

	// BrnCrashModuleRaceCarIOInterfaces.h:92
	const RaceCarOutputInterface::RaceCarCrashCompleteEventQueue * GetRaceCarCrashCompleteEventQueue() const;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleNetworkIOInterfaces.h:32
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h :36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModuleTrafficIOInterfaces.h:36
	namespace CrashIO {
		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		struct RaceCarCrashCompleteEvent;

		struct RaceCarOutputInterface;

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

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_PostPhysics;

		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModuleRaceCarIOInterfaces.h:31
	namespace CrashIO {
		struct AddCrashingTrafficEvent;

		struct RemoveSlammedTrafficEvent;

		struct RemoveCrashedTrafficEvent;

		struct TrafficInputInterface;

		struct CrashingTrafficUpdateEvent;

		struct NetworkInputInterface;

		struct NetworkOutputInterface;

		struct InputBuffer_PreScene;

		// BrnCrashModuleRaceCarIOInterfaces.h:36
		const int32_t KI_MAX_CLEANUP_RACE_CAR_EVENTS = 10;

	}

}

