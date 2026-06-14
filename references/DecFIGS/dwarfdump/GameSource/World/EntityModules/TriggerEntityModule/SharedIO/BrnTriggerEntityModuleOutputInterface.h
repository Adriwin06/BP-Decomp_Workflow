// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleOutputInterface.h:33
		const uint32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_RESULT_QUEUE_SIZE = 1024;

	}

}

// BrnTriggerEntityModuleOutputInterface.h:62
struct BrnWorld::TriggerEntityModuleIO::OutLineTestResultEvent : public Event {
	// BrnTriggerEntityModuleOutputInterface.h:64
	TriggerQueryId mQueryID;

	// BrnTriggerEntityModuleOutputInterface.h:65
	int32_t miNumTriggers;

public:
	// BrnTriggerEntityModuleOutputInterface.h:68
	TriggerId * GetTriggerIds() const;

}

// BrnTriggerEntityModuleOutputInterface.h:88
struct BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface {
	// BrnTriggerEntityModuleOutputInterface.h:77
	typedef VariableEventQueue<1024,16> OutTriggerQueryResultEventQueue;

private:
	// BrnTriggerEntityModuleOutputInterface.h:106
	TriggerEntityModuleOutputInterface::OutTriggerQueryResultEventQueue mTriggerQueryResultEventQueue;

public:
	// BrnTriggerEntityModuleOutputInterface.h:92
	void Construct();

	// BrnTriggerEntityModuleOutputInterface.h:95
	void Clear();

	// BrnTriggerEntityModuleOutputInterface.h:98
	const TriggerEntityModuleOutputInterface::OutTriggerQueryResultEventQueue * GetTriggerQueryResultEventQueue() const;

	// BrnTriggerEntityModuleOutputInterface.h:103
	TriggerId * AddLineTestResult(TriggerQueryId, int32_t);

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleOutputInterface.h:33
		const uint32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_RESULT_QUEUE_SIZE = 1024;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleOutputInterface.h:33
		const uint32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_RESULT_QUEUE_SIZE = 1024;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleOutputInterface.h:33
		const uint32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_RESULT_QUEUE_SIZE = 1024;

	}

}

