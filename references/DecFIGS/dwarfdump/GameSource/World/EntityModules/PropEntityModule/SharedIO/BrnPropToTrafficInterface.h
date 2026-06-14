// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PostPhysics;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct TrafficLightKnockDownEvent;

		struct TrafficLightRestoreEvent;

		struct PropToTrafficInterface;

		struct PropInstancesNeededForZoneEvent;

		struct PropGraphicsLoadedEvent;

		struct PropGraphicsUnloadedEvent;

		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct InputBuffer_Dispatch;

		struct InputBuffer_Prepare;

		struct InputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PostScene;

		struct OutputBuffer_PrePhysics;

		struct OutputBuffer_PostPhysics;

	}

}

// BrnPropToTrafficInterface.h:50
struct BrnWorld::PropEntityIO::TrafficLightKnockDownEvent {
private:
	// BrnPropToTrafficInterface.h:63
	uint32_t muInstanceID;

public:
	// BrnPropToTrafficInterface.h:56
	void Construct(uint32_t);

	// BrnPropToTrafficInterface.h:59
	uint32_t GetInstanceID() const;

}

// BrnPropToTrafficInterface.h:76
struct BrnWorld::PropEntityIO::TrafficLightRestoreEvent {
private:
	// BrnPropToTrafficInterface.h:89
	uint32_t muInstanceID;

public:
	// BrnPropToTrafficInterface.h:82
	void Construct(uint32_t);

	// BrnPropToTrafficInterface.h:85
	uint32_t GetInstanceID() const;

}

// BrnPropToTrafficInterface.h:102
struct BrnWorld::PropEntityIO::PropToTrafficInterface {
private:
	// BrnPropToTrafficInterface.h:130
	EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> mTrafficLightKnockDownQueue;

	// BrnPropToTrafficInterface.h:131
	EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> mTrafficLightRestoreQueue;

public:
	// BrnPropToTrafficInterface.h:111
	void Construct();

	// BrnPropToTrafficInterface.h:117
	void RequestTrafficLightKnockDown(uint32_t);

	// BrnPropToTrafficInterface.h:122
	void RequestTrafficLightRestore(uint32_t);

	// BrnPropToTrafficInterface.h:125
	const EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> * GetTrafficLightKnockDownQueue() const;

	// BrnPropToTrafficInterface.h:126
	const EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> * GetTrafficLightRestoreQueue() const;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct PropInstancesNeededForZoneEvent;

		struct PropGraphicsLoadedEvent;

		struct PropGraphicsUnloadedEvent;

		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct InputBuffer_PreScene;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PostPhysics;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PostPhysics;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct TrafficLightKnockDownEvent;

		struct TrafficLightRestoreEvent;

		struct PropToTrafficInterface;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct TrafficLightKnockDownEvent;

		struct TrafficLightRestoreEvent;

		struct PropToTrafficInterface;

		struct PropInstancesNeededForZoneEvent;

		struct PropGraphicsLoadedEvent;

		struct PropGraphicsUnloadedEvent;

		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct InputBuffer_Dispatch;

		struct InputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

		struct OutputBuffer_PostPhysics;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct TrafficLightKnockDownEvent;

		struct TrafficLightRestoreEvent;

		struct PropToTrafficInterface;

		struct PropInstancesNeededForZoneEvent;

		struct PropGraphicsLoadedEvent;

		struct PropGraphicsUnloadedEvent;

		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct InputBuffer_Dispatch;

		struct InputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PostScene;

		struct OutputBuffer_PrePhysics;

		struct OutputBuffer_PostPhysics;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		struct TrafficLightKnockDownEvent;

		struct TrafficLightRestoreEvent;

		struct PropToTrafficInterface;

		struct PropInstancesNeededForZoneEvent;

		struct PropGraphicsLoadedEvent;

		struct PropGraphicsUnloadedEvent;

		struct BrokenPropEvent;

		struct PropBecamePhysicalEvent;

		struct InputBuffer_PreScene;

		struct OutputBuffer_Prepare;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

		struct OutputBuffer_PostPhysics;

	}

}

