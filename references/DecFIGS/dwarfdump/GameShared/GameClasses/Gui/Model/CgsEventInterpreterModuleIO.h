// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsEventInterpreterModuleIO.h:36
	namespace EventInterpreterModuleIO {
	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsEventInterpreterModuleIO.h:36
	namespace EventInterpreterModuleIO {
	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsEventInterpreterModuleIO.h:36
	namespace EventInterpreterModuleIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsEventInterpreterModuleIO.h:47
struct CgsGui::EventInterpreterModuleIO::InputBuffer : public IOBuffer {
private:
	// CgsEventInterpreterModuleIO.h:74
	InputBuffer::GuiEventInputQueue mGuiEvents;

public:
	// CgsEventInterpreterModuleIO.h:52
	void Construct();

	// CgsEventInterpreterModuleIO.h:56
	void Destruct();

	// CgsEventInterpreterModuleIO.h:60
	void AddGuiEvents(const InputBuffer::GuiEventInputQueue &);

	// CgsEventInterpreterModuleIO.h:67
	void AddGuiEvent(const CgsModule::Event *, int32_t, int32_t);

	// CgsEventInterpreterModuleIO.h:71
	InputBuffer::GuiEventInputQueue * GetEventQueue();

}

// CgsEventInterpreterModuleIO.h:87
struct CgsGui::EventInterpreterModuleIO::OutputBuffer : public IOBuffer {
private:
	// CgsEventInterpreterModuleIO.h:123
	InputBuffer::GuiEventQueue mGuiOutEvents;

	// CgsEventInterpreterModuleIO.h:124
	GuiEventQueueSmall mGuiOutResource;

	// CgsEventInterpreterModuleIO.h:125
	GuiStackEventQueue::GuiEventQueueLarge mGuiOutView;

public:
	// CgsEventInterpreterModuleIO.h:92
	void Construct();

	// CgsEventInterpreterModuleIO.h:96
	void Destruct();

	// CgsEventInterpreterModuleIO.h:100
	const InputBuffer::GuiEventQueue * GetOutEventQueue() const;

	// CgsEventInterpreterModuleIO.h:104
	InputBuffer::GuiEventQueue * GetOutEventQueue();

	// CgsEventInterpreterModuleIO.h:108
	const GuiEventQueueSmall * GetResourceEventQueue() const;

	// CgsEventInterpreterModuleIO.h:112
	GuiEventQueueSmall * GetResourceEventQueue();

	// CgsEventInterpreterModuleIO.h:116
	const GuiStackEventQueue::GuiEventQueueLarge * GetViewEventQueue() const;

	// CgsEventInterpreterModuleIO.h:120
	GuiStackEventQueue::GuiEventQueueLarge * GetViewEventQueue();

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsEventInterpreterModuleIO.h:36
	namespace EventInterpreterModuleIO {
	}

}

