// CgsEventObserver.h:44
struct CgsGui::EventObserver {
	int (*)(...) * _vptr.EventObserver;

protected:
	// CgsEventObserver.h:101
	StateInterface mStateInterface;

public:
	// CgsEventObserver.h:63
	void Construct();

	// CgsEventObserver.h:68
	bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *);

	// CgsEventObserver.h:72
	bool Release();

	// CgsEventObserver.h:76
	void Destruct();

	// CgsEventObserver.h:123
	GuiStackEventQueue::GuiEventQueueLarge * GetOutputQueue();

	// CgsEventObserver.h:138
	void ClearOutputQueue();

	// CgsEventObserver.h:89
	virtual void SetInEventQueue(InputBuffer::GuiEventQueue *);

	// CgsEventObserver.h:93
	virtual void PreWorldUpdate();

	// CgsEventObserver.h:97
	virtual void Update();

}

// CgsEventObserver.h:44
struct CgsGui::EventObserver {
	int (*)(...) * _vptr.EventObserver;

protected:
	// CgsEventObserver.h:101
	StateInterface mStateInterface;

public:
	void EventObserver(const EventObserver &);

	void EventObserver();

	// CgsEventObserver.h:63
	void Construct();

	// CgsEventObserver.h:68
	bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *);

	// CgsEventObserver.h:72
	bool Release();

	// CgsEventObserver.h:76
	void Destruct();

	// CgsEventObserver.h:123
	GuiStackEventQueue::GuiEventQueueLarge * GetOutputQueue();

	// CgsEventObserver.h:138
	void ClearOutputQueue();

	// CgsEventObserver.h:89
	virtual void SetInEventQueue(InputBuffer::GuiEventQueue *);

	// CgsEventObserver.h:93
	virtual void PreWorldUpdate();

	// CgsEventObserver.h:97
	virtual void Update();

}

// CgsEventObserver.h:44
void CgsGui::EventObserver::EventObserver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct EventObserver {
	public:
		// CgsEventObserver.cpp:61
		bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *);

		// CgsEventObserver.cpp:77
		bool Release();

		// CgsEventObserver.cpp:92
		void Destruct();

		// CgsEventObserver.cpp:45
		void Construct();

		// CgsEventObserver.h:123
		GuiStackEventQueue::GuiEventQueueLarge * GetOutputQueue();

		// CgsEventObserver.h:138
		void ClearOutputQueue();

	}

}

