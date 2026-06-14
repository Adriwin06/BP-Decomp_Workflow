// CgsGuiShared.h:40
namespace CgsGui {
	// CgsOpaqueBuffer.h:76
	extern OpaqueBuffer MakeOpaqueBuffer<BrnGui::ProfileManager::ProfileStoredData>(BrnGui::ProfileManager::ProfileStoredData &);

}

// CgsOpaqueBuffer.h:60
struct CgsGui::OpaqueBuffer {
	// CgsOpaqueBuffer.h:49
	typedef uint8_t Byte;

	// CgsOpaqueBuffer.h:61
	OpaqueBuffer::Byte * mpData;

	// CgsOpaqueBuffer.h:62
	uint32_t miSize;

}

// CgsOpaqueBuffer.h:45
extern const int32_t VALUE = 280;

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	struct ImageFileInfo;

	struct GuiEventQueueBase<65536,16>;

	struct GuiStackEventQueue;

	struct sResourceTuple;

	struct GuiEvent<14>;

	struct GuiEventLoadNotification;

	struct GuiEvent<15>;

	struct GuiEventUnloadRequestNotification;

	struct GuiEvent<16>;

	struct GuiEventUnloadNotification;

	struct GuiEvent<39>;

	struct GuiEventLoadRequest;

	struct GuiEventQueueBase<16384,16>;

	struct GuiEventQueueBase<4096,16>;

	struct GuiEventQueueBase<32768,16>;

	struct GuiEvent<6>;

	struct GuiEventControllerInputPressed;

	struct GuiEvent<26>;

	struct GuiEventTimeInfo;

	struct HudMessageParameter;

	struct GuiHudMessageData;

	struct GuiHudMessageResource;

	struct GuiPopupParameter;

	struct GuiPopup;

	struct GuiPopupResource;

	struct GuiEvent<21>;

	struct KeyValue;

	struct AptComponentList;

	struct GuiAccessPointers;

	struct EventObserver;

	struct StateInterface;

	struct GuiEvent<103>;

	struct GuiEvent<89>;

	struct GuiEvent<320>;

	struct GuiEvent<329>;

	struct GuiEvent<335>;

	struct GuiEvent<332>;

	struct GuiEvent<337>;

	struct GuiEvent<340>;

	struct GuiEvent<328>;

	struct GuiEvent<167>;

	struct GuiEvent<192>;

	struct GuiEvent<169>;

	struct GuiEvent<157>;

	struct GuiEvent<197>;

	struct GuiEvent<201>;

	struct GuiEvent<198>;

	struct GuiEvent<205>;

	struct GuiEvent<206>;

	struct GuiEvent<208>;

	struct GuiEvent<207>;

	struct GuiEvent<235>;

	struct GuiEvent<316>;

	struct GuiEvent<315>;

	struct GuiEvent<287>;

	struct GuiEvent<209>;

	struct GuiEvent<484>;

	struct GuiEvent<539>;

	struct GuiEvent<541>;

	struct GuiEvent<270>;

	struct GuiEvent<241>;

	struct GuiEvent<254>;

	struct GuiEvent<255>;

	struct GuiEvent<262>;

	struct GuiEvent<372>;

	struct GuiEvent<374>;

	struct GuiEvent<453>;

	struct GuiEvent<457>;

	struct GuiEvent<437>;

	struct GuiEvent<568>;

	struct GuiEvent<152>;

	struct GuiEvent<185>;

	struct GuiEvent<485>;

	struct GuiEvent<491>;

	struct GuiEvent<526>;

	struct GuiEvent<391>;

	struct GuiEvent<559>;

	struct GuiEvent<566>;

	struct GuiEvent<561>;

	struct GuiEvent<562>;

	struct ImRendererSet;

	struct FontCollection;

	struct AptRenderHandler;

	struct CustomRendererManager;

	struct GuiEventQueueBase<256,16>;

	struct ModelModule;

	struct ObjectController;

}

