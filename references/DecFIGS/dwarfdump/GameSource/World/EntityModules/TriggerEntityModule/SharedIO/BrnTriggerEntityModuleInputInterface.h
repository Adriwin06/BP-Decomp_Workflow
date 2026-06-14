// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InAddTriggerEvent;

		struct InAddPlaneSegmentTriggerEvent;

		struct InAddSphereTriggerEvent;

		struct InAddBoxTriggerEvent;

		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct OutLineTestResultEvent;

		struct TriggerEntityModuleOutputInterface;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct OutputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct OutputBuffer_PrePhysics;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnTriggerEntityModuleInputInterface.h:55
struct BrnWorld::TriggerEntityModuleIO::InAddTriggerEvent : public Event {
	// BrnTriggerEntityModuleInputInterface.h:57
	Matrix44Affine mTransform;

	// BrnTriggerEntityModuleInputInterface.h:58
	TriggerId mTriggerID;

	// BrnTriggerEntityModuleInputInterface.h:59
	int8_t miTriggerRegionType;

	// BrnTriggerEntityModuleInputInterface.h:60
	int8_t miGenericRegionType;

}

// BrnTriggerEntityModuleInputInterface.h:64
struct BrnWorld::TriggerEntityModuleIO::InAddPlaneSegmentTriggerEvent : public InAddTriggerEvent {
	// BrnTriggerEntityModuleInputInterface.h:66
	Vector2 mDimensions;

	// BrnTriggerEntityModuleInputInterface.h:67
	bool mbIsBidirectional;

}

// BrnTriggerEntityModuleInputInterface.h:71
struct BrnWorld::TriggerEntityModuleIO::InAddSphereTriggerEvent : public InAddTriggerEvent {
	// BrnTriggerEntityModuleInputInterface.h:73
	float32_t mfRadius;

}

// BrnTriggerEntityModuleInputInterface.h:77
struct BrnWorld::TriggerEntityModuleIO::InAddBoxTriggerEvent : public InAddTriggerEvent {
	// BrnTriggerEntityModuleInputInterface.h:79
	Vector3 mDimensions;

}

// BrnTriggerEntityModuleInputInterface.h:83
struct BrnWorld::TriggerEntityModuleIO::InLineTestEvent : public Event {
	// BrnTriggerEntityModuleInputInterface.h:85
	TriggerQueryId mQueryID;

	// BrnTriggerTypes.h:26
	typedef uint8_t TriggerTypeFlags;

	// BrnTriggerEntityModuleInputInterface.h:86
	InLineTestEvent::TriggerTypeFlags mTriggerTypeFlags;

	// BrnTriggerEntityModuleInputInterface.h:87
	Vector3 mLineStart;

	// BrnTriggerEntityModuleInputInterface.h:88
	Vector3 mLineEnd;

}

// BrnTriggerEntityModuleInputInterface.h:92
struct BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent : public Event {
	// BrnTriggerEntityModuleInputInterface.h:94
	TriggerId mTriggerID;

}

// BrnTriggerEntityModuleInputInterface.h:111
struct BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface {
	// BrnTriggerEntityModuleInputInterface.h:97
	typedef VariableEventQueue<131072,16> InAddTriggerEventQueue;

private:
	// BrnTriggerEntityModuleInputInterface.h:158
	TriggerManagementInputInterface::InAddTriggerEventQueue mAddTriggerEventQueue;

	// Unknown accessibility
	// BrnTriggerEntityModuleInputInterface.h:99
	typedef EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256> InRemoveTriggerEventQueue;

	// BrnTriggerEntityModuleInputInterface.h:159
	TriggerManagementInputInterface::InRemoveTriggerEventQueue mRemoveTriggerEventQueue;

public:
	// BrnTriggerEntityModuleInputInterface.h:115
	void Construct();

	// BrnTriggerEntityModuleInputInterface.h:118
	void Append(const TriggerManagementInputInterface *);

	// BrnTriggerEntityModuleInputInterface.h:126
	void AddPlaneSegmentTrigger(TriggerId, Vector2, Matrix44Affine, bool);

	// BrnTriggerEntityModuleInputInterface.h:132
	void AddSphereTrigger(TriggerId, float32_t, Matrix44Affine);

	// BrnTriggerEntityModuleInputInterface.h:138
	void AddBoxTrigger(TriggerId, Vector3, Matrix44Affine);

	// BrnTriggerEntityModuleInputInterface.h:143
	void AddTriggerRegion(int32_t, const TriggerRegion *);

	// BrnTriggerEntityModuleInputInterface.h:147
	void RemoveTrigger(TriggerId);

	// BrnTriggerEntityModuleInputInterface.h:151
	const TriggerManagementInputInterface::InAddTriggerEventQueue * GetAddTriggerEventQueue() const;

	// BrnTriggerEntityModuleInputInterface.h:154
	const TriggerManagementInputInterface::InRemoveTriggerEventQueue * GetRemoveTriggerEventQueue() const;

}

// BrnTriggerEntityModuleInputInterface.h:172
struct BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface {
	// BrnTriggerEntityModuleInputInterface.h:98
	typedef VariableEventQueue<4096,16> InTriggerQueryEventQueue;

private:
	// BrnTriggerEntityModuleInputInterface.h:195
	TriggerQueryInputInterface::InTriggerQueryEventQueue mTriggerQueryEventQueue;

public:
	// BrnTriggerEntityModuleInputInterface.h:176
	void Construct();

	// BrnTriggerEntityModuleInputInterface.h:179
	void Append(const TriggerQueryInputInterface *);

	// BrnTriggerEntityModuleInputInterface.h:187
	void LineTest(TriggerQueryId, InLineTestEvent::TriggerTypeFlags, Vector3, Vector3);

	// BrnTriggerEntityModuleInputInterface.h:191
	const TriggerQueryInputInterface::InTriggerQueryEventQueue * GetTriggerQueryEventQueue() const;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct TriggerEntityModuleOutputInterface;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InAddTriggerEvent;

		struct InAddBoxTriggerEvent;

		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct OutLineTestResultEvent;

		struct TriggerEntityModuleOutputInterface;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct TriggerEntityModuleOutputInterface;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct TriggerEntityModuleOutputInterface;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InAddTriggerEvent;

		struct InAddBoxTriggerEvent;

		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct TriggerEntityModuleOutputInterface;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnTriggerEntityModuleInputInterface.h:33
	namespace TriggerEntityModuleIO {
		struct InLineTestEvent;

		struct InRemoveTriggerEvent;

		struct TriggerManagementInputInterface;

		struct TriggerQueryInputInterface;

		struct TriggerEntityModuleOutputInterface;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct OutputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct OutputBuffer_PrePhysics;

		// BrnTriggerEntityModuleInputInterface.h:37
		const int32_t KI_TRIGGER_ENTITY_ADD_TRIGGER_QUEUE_MEMSIZE = 131072;

		// BrnTriggerEntityModuleInputInterface.h:38
		const int32_t KI_TRIGGER_ENTITY_TRIGGER_QUERY_QUEUE_MEMSIZE = 4096;

		// BrnTriggerEntityModuleInputInterface.h:39
		const int32_t KI_TRIGGER_ENTITY_REMOVE_TRIGGER_QUEUE_SIZE = 256;

	}

}

