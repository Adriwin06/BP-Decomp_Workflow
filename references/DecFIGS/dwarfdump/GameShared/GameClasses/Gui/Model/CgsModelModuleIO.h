// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsModelModuleIO.h:36
	namespace ModelIO {
	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsModelModuleIO.h:36
	namespace ModelIO {
		struct InputBuffer;

	}

}

// CgsModelModuleIO.h:47
struct CgsGui::ModelIO::InputBuffer : public IOBuffer {
	// CgsGuiEvent.h:185
	typedef GuiEventQueueBase<32768,16> GuiEventInputQueue;

private:
	// CgsModelModuleIO.h:90
	InputBuffer::GuiEventInputQueue mGuiEvents;

	// CgsModelModuleIO.h:91
	GuiEventQueueSmall mLoadRequests;

public:
	// CgsModelModuleIO.h:52
	void Construct();

	// CgsModelModuleIO.h:56
	void Destruct();

	// CgsModelModuleIO.h:61
	void AddGuiEvents(const InputBuffer::GuiEventQueue *);

	// CgsModelModuleIO.h:66
	void AddGuiEvents(const InputBuffer::GuiEventInputQueue *);

	// CgsModelModuleIO.h:70
	const InputBuffer::GuiEventInputQueue * GetEventQueue() const;

	// CgsModelModuleIO.h:74
	InputBuffer::GuiEventInputQueue * GetEventQueueNonConst();

	// CgsModelModuleIO.h:79
	void AddResourceRequests(const GuiEventLoadRequest &);

	// CgsModelModuleIO.h:83
	const GuiEventQueueSmall * GetLoadRequests() const;

	// CgsModelModuleIO.h:87
	GuiEventQueueSmall * GetLoadRequests();

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsModelModuleIO.h:36
	namespace ModelIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsModelModuleIO.h:104
struct CgsGui::ModelIO::OutputBuffer : public IOBuffer {
private:
	// CgsModelModuleIO.h:159
	OutputBuffer::GuiResourceRequestQueue mResourceRequestQueue;

	// CgsModelModuleIO.h:161
	InputBuffer::GuiEventQueue mOutEventQueue;

	// CgsModelModuleIO.h:162
	GuiStackEventQueue::GuiEventQueueLarge mViewOutQueue;

	// CgsModelModuleIO.h:163
	GuiEventQueueSmall mLoadNotifications;

public:
	// CgsModelModuleIO.h:109
	void Construct();

	// CgsModelModuleIO.h:113
	void Destruct();

	// CgsModelModuleIO.h:117
	void Clear();

	// CgsModelModuleIO.h:122
	void SetGuiResourceRequestQueue(const OutputBuffer::GuiResourceRequestQueue *);

	// CgsModelModuleIO.h:126
	const OutputBuffer::GuiResourceRequestQueue * GetGuiResourceRequestQueue() const;

	// CgsModelModuleIO.h:130
	void AddGuiOutEvents(const InputBuffer::GuiEventQueue *);

	// CgsModelModuleIO.h:134
	const InputBuffer::GuiEventQueue * GetGuiOutEvents() const;

	// CgsModelModuleIO.h:138
	void AddViewOutEvents(const GuiStackEventQueue::GuiEventQueueLarge *);

	// CgsModelModuleIO.h:142
	const GuiStackEventQueue::GuiEventQueueLarge * GetViewOutEvents() const;

	// CgsModelModuleIO.h:146
	void AddLoadNotifications(const InputBuffer::GuiEventQueue *);

	// CgsModelModuleIO.h:150
	const GuiEventQueueSmall * GetLoadNotifications() const;

	// CgsModelModuleIO.h:154
	GuiEventQueueSmall * GetLoadNotifications();

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsModelModuleIO.h:36
	namespace ModelIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsModelModuleIO.h:36
	namespace ModelIO {
		struct InputBuffer;

	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsModelModuleIO.h:36
	namespace ModelIO {
		struct InputBuffer;

	}

}

