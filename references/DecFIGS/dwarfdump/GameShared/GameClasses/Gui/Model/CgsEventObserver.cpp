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

