// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiViewModuleIO.h:40
	namespace ViewIO {
	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiViewModuleIO.h:40
	namespace ViewIO {
		struct InputBuffer;

	}

}

// CgsGuiViewModuleIO.h:50
struct CgsGui::ViewIO::InputBuffer : public IOBuffer {
private:
	// CgsGuiViewModuleIO.h:85
	GuiStackEventQueue::GuiEventQueueLarge mInViewState;

	// CgsGuiViewModuleIO.h:87
	ImRendererSet mRendererSet;

	// CgsGuiViewModuleIO.h:89
	DispatchBuffer * mpGuiDispatchBuffer;

public:
	// CgsGuiViewModuleIO.h:55
	void Construct();

	// CgsGuiViewModuleIO.h:59
	void Destruct();

	// CgsGuiViewModuleIO.h:63
	const ImRendererSet & GetImRenderers() const;

	// CgsGuiViewModuleIO.h:67
	void SetImRenderers(const ImRendererSet &);

	// CgsGuiViewModuleIO.h:71
	const GuiStackEventQueue::GuiEventQueueLarge * GetViewStateQueue() const;

	// CgsGuiViewModuleIO.h:74
	GuiStackEventQueue::GuiEventQueueLarge * GetViewStateQueue();

	// CgsGuiViewModuleIO.h:77
	void SetGuiDispatchBuffer(DispatchBuffer *);

	// CgsGuiViewModuleIO.h:80
	DispatchBuffer * GetGuiDispatchBuffer() const;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiViewModuleIO.h:40
	namespace ViewIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsGuiViewModuleIO.h:101
struct CgsGui::ViewIO::OutputBuffer : public IOBuffer {
private:
	// CgsGuiViewModuleIO.h:122
	InputBuffer::GuiEventQueue mOutGuiEvents;

public:
	// CgsGuiViewModuleIO.h:106
	void Construct();

	// CgsGuiViewModuleIO.h:110
	void Destruct();

	// CgsGuiViewModuleIO.h:114
	const InputBuffer::GuiEventQueue & GetGuiEventQueue() const;

	// CgsGuiViewModuleIO.h:118
	InputBuffer::GuiEventQueue & GetGuiEventQueue();

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiViewModuleIO.h:40
	namespace ViewIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiViewModuleIO.h:40
	namespace ViewIO {
	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiViewModuleIO.h:40
	namespace ViewIO {
	}

}

