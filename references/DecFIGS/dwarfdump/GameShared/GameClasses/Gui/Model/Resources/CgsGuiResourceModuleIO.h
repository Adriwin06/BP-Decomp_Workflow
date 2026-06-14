// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiResourceModuleIO.h:172
	namespace GuiResourceModuleIO {
		struct InputBuffer;

		// CgsGuiResourceModuleIO.h:175
		const int KI_GUI_QUEUE_SIZE_IN_BYTES = 2048;

	}

}

// CgsGuiResourceModuleIO.h:187
struct CgsGui::GuiResourceModuleIO::InputBuffer : public IOBuffer {
	// CgsGuiEvent.h:186
	typedef GuiEventQueueBase<16384,16> GuiEventQueue;

private:
	// CgsGuiResourceModuleIO.h:208
	InputBuffer::GuiEventQueue mLoadRequests;

public:
	// CgsGuiResourceModuleIO.h:192
	void Construct();

	// CgsGuiResourceModuleIO.h:196
	void Destruct();

	// CgsGuiResourceModuleIO.h:201
	// Declaration
	void AddResourceRequests(const GuiEventQueueSmall *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiEvent.h:188
		typedef CgsGui::GuiEventQueueBase<4096,16> GuiEventQueueSmall;

	}

	// CgsGuiResourceModuleIO.h:205
	const InputBuffer::GuiEventQueue * GetLoadRequests() const;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiResourceModuleIO.h:37
	enum ResourceRequestTypes {
		E_GUI_RESOURCETYPE_START = 0,
		E_GUI_RESOURCETYPE_BUNDLE = 1,
		E_GUI_RESOURCETYPE_HD_APT_BUNDLE = 2,
		E_GUI_RESOURCETYPE_SD_APT_BUNDLE = 3,
		E_GUI_RESOURCETYPE_APT = 4,
		E_GUI_RESOURCETYPE_APT_LOADING_SCREEN = 5,
		E_GUI_RESOURCETYPE_APT_PERSISTENT = 6,
		E_GUI_RESOURCETYPE_FLAPT_HD_BUNDLE = 7,
		E_GUI_RESOURCETYPE_FLAPT_SD_BUNDLE = 8,
		E_GUI_RESOURCETYPE_FLAPT_PERSISTENT = 9,
		E_GUI_RESOURCETYPE_TEXTURE = 10,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT = 11,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT_BUNDLE = 12,
		E_FONT_RESOURCETYPE_HD_BUNDLE = 13,
		E_FONT_RESOURCETYPE_SD_BUNDLE = 14,
		E_FONT_RESOURCETYPE_FONTDATA = 15,
		E_GUI_RESOURCETYPE_FSM_BUNDLE = 16,
		E_GUI_RESOURCETYPE_FSM = 17,
		E_GUI_RESOURCETYPE_PFX_BUNDLE = 18,
		E_GUI_RESOURCETYPE_PFX = 19,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE_DICTIONARY = 20,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE = 21,
		E_GUI_RESOURCETYPE_DONE = 22,
	}

	// CgsGuiResourceModuleIO.h:84
	enum ResourceRequestLoadUnload {
		E_GUI_RESOURCEREQUEST_LOAD = 0,
		E_GUI_RESOURCEREQUEST_UNLOAD = 1,
	}

	// CgsGuiResourceModuleIO.h:172
	namespace GuiResourceModuleIO {
		struct InputBuffer;

		struct OutputBuffer;

		// CgsGuiResourceModuleIO.h:175
		const int KI_GUI_QUEUE_SIZE_IN_BYTES = 2048;

	}

}

// CgsGuiResourceModuleIO.h:93
struct CgsGui::sResourceTuple {
	// CgsGuiResourceModuleIO.h:94
	uint32_t muId;

	// CgsGuiResourceModuleIO.h:95
	CgsGui::ResourceRequestTypes meType;

}

// CgsGuiResourceModuleIO.h:114
struct CgsGui::GuiEventLoadNotification : public GuiEvent<14> {
	// CgsGuiResourceModuleIO.h:116
	ResourceHandle mResourceHandle;

	// CgsGuiResourceModuleIO.h:117
	CgsGui::ResourceRequestTypes meRequestType;

	// CgsGuiResourceModuleIO.h:118
	uint32_t muLoadRequestId;

}

// CgsGuiResourceModuleIO.h:130
struct CgsGui::GuiEventUnloadRequestNotification : public GuiEvent<15> {
	// CgsGuiResourceModuleIO.h:132
	CgsGui::ResourceRequestTypes meRequestType;

	// CgsGuiResourceModuleIO.h:133
	uint32_t muLoadRequestId;

	// CgsGuiResourceModuleIO.h:134
	uint32_t muFileNameHash;

}

// CgsGuiResourceModuleIO.h:146
struct CgsGui::GuiEventUnloadNotification : public GuiEvent<16> {
	// CgsGuiResourceModuleIO.h:148
	CgsGui::ResourceRequestTypes meRequestType;

	// CgsGuiResourceModuleIO.h:149
	uint32_t muLoadRequestId;

	// CgsGuiResourceModuleIO.h:150
	uint32_t muFileNameHash;

}

// CgsGuiResourceModuleIO.h:162
struct CgsGui::GuiEventLoadRequest : public GuiEvent<39> {
	// CgsGuiResourceModuleIO.h:164
	CgsGui::ResourceRequestTypes meRequestType;

	// CgsGuiResourceModuleIO.h:165
	CgsGui::ResourceRequestLoadUnload meLoadUnload;

	// CgsGuiResourceModuleIO.h:166
	const char * mpacFileToLoad;

	// CgsGuiResourceModuleIO.h:167
	uint32_t muLoadRequestId;

	// CgsGuiResourceModuleIO.h:168
	uint64_t muResourceId;

}

// CgsGuiResourceModuleIO.h:187
struct CgsGui::GuiResourceModuleIO::InputBuffer : public IOBuffer {
	// CgsGuiEvent.h:186
	typedef GuiEventQueueBase<16384,16> GuiEventQueue;

private:
	// CgsGuiResourceModuleIO.h:208
	InputBuffer::GuiEventQueue mLoadRequests;

public:
	// CgsGuiResourceModuleIO.h:192
	void Construct();

	// CgsGuiResourceModuleIO.h:196
	void Destruct();

	// CgsGuiResourceModuleIO.h:201
	// Declaration
	void AddResourceRequests() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiEvent.h:188
		typedef CgsGui::GuiEventQueueBase<4096,16> GuiEventQueueSmall;

	}

	// CgsGuiResourceModuleIO.h:205
	const InputBuffer::GuiEventQueue * GetLoadRequests() const;

}

// CgsGuiResourceModuleIO.h:220
struct CgsGui::GuiResourceModuleIO::OutputBuffer : public IOBuffer {
	// CgsGuiResourceModuleIO.h:176
	typedef ResourceRequestQueue<2048> GuiResourceRequestQueue;

private:
	// CgsGuiResourceModuleIO.h:260
	OutputBuffer::GuiResourceRequestQueue mRequestQueue;

	// CgsGuiResourceModuleIO.h:261
	InputBuffer::GuiEventQueue mLoadNotifications;

public:
	// CgsGuiResourceModuleIO.h:225
	void Construct();

	// CgsGuiResourceModuleIO.h:229
	void Destruct();

	// CgsGuiResourceModuleIO.h:234
	void AddLoadNotification(GuiEventLoadNotification &);

	// CgsGuiResourceModuleIO.h:239
	void AddUnloadNotification(GuiEventUnloadNotification &);

	// CgsGuiResourceModuleIO.h:244
	void AddUnloadRequestNotification(GuiEventUnloadRequestNotification &);

	// CgsGuiResourceModuleIO.h:248
	const InputBuffer::GuiEventQueue * GetLoadNotifications() const;

	// CgsGuiResourceModuleIO.h:252
	const OutputBuffer::GuiResourceRequestQueue * GetResourceRequestQueue() const;

	// CgsGuiResourceModuleIO.h:256
	OutputBuffer::GuiResourceRequestQueue * GetResourceRequestQueue();

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiResourceModuleIO.h:37
	enum ResourceRequestTypes {
		E_GUI_RESOURCETYPE_START = 0,
		E_GUI_RESOURCETYPE_BUNDLE = 1,
		E_GUI_RESOURCETYPE_HD_APT_BUNDLE = 2,
		E_GUI_RESOURCETYPE_SD_APT_BUNDLE = 3,
		E_GUI_RESOURCETYPE_APT = 4,
		E_GUI_RESOURCETYPE_APT_LOADING_SCREEN = 5,
		E_GUI_RESOURCETYPE_APT_PERSISTENT = 6,
		E_GUI_RESOURCETYPE_FLAPT_HD_BUNDLE = 7,
		E_GUI_RESOURCETYPE_FLAPT_SD_BUNDLE = 8,
		E_GUI_RESOURCETYPE_FLAPT_PERSISTENT = 9,
		E_GUI_RESOURCETYPE_TEXTURE = 10,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT = 11,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT_BUNDLE = 12,
		E_FONT_RESOURCETYPE_HD_BUNDLE = 13,
		E_FONT_RESOURCETYPE_SD_BUNDLE = 14,
		E_FONT_RESOURCETYPE_FONTDATA = 15,
		E_GUI_RESOURCETYPE_FSM_BUNDLE = 16,
		E_GUI_RESOURCETYPE_FSM = 17,
		E_GUI_RESOURCETYPE_PFX_BUNDLE = 18,
		E_GUI_RESOURCETYPE_PFX = 19,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE_DICTIONARY = 20,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE = 21,
		E_GUI_RESOURCETYPE_DONE = 22,
	}

	// CgsGuiResourceModuleIO.h:84
	enum ResourceRequestLoadUnload {
		E_GUI_RESOURCEREQUEST_LOAD = 0,
		E_GUI_RESOURCEREQUEST_UNLOAD = 1,
	}

	// CgsGuiResourceModuleIO.h:172
	namespace GuiResourceModuleIO {
		struct InputBuffer;

		struct OutputBuffer;

		// CgsGuiResourceModuleIO.h:175
		const int KI_GUI_QUEUE_SIZE_IN_BYTES = 2048;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiResourceModuleIO.h:37
	enum ResourceRequestTypes {
		E_GUI_RESOURCETYPE_START = 0,
		E_GUI_RESOURCETYPE_BUNDLE = 1,
		E_GUI_RESOURCETYPE_HD_APT_BUNDLE = 2,
		E_GUI_RESOURCETYPE_SD_APT_BUNDLE = 3,
		E_GUI_RESOURCETYPE_APT = 4,
		E_GUI_RESOURCETYPE_APT_LOADING_SCREEN = 5,
		E_GUI_RESOURCETYPE_APT_PERSISTENT = 6,
		E_GUI_RESOURCETYPE_FLAPT_HD_BUNDLE = 7,
		E_GUI_RESOURCETYPE_FLAPT_SD_BUNDLE = 8,
		E_GUI_RESOURCETYPE_FLAPT_PERSISTENT = 9,
		E_GUI_RESOURCETYPE_TEXTURE = 10,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT = 11,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT_BUNDLE = 12,
		E_FONT_RESOURCETYPE_HD_BUNDLE = 13,
		E_FONT_RESOURCETYPE_SD_BUNDLE = 14,
		E_FONT_RESOURCETYPE_FONTDATA = 15,
		E_GUI_RESOURCETYPE_FSM_BUNDLE = 16,
		E_GUI_RESOURCETYPE_FSM = 17,
		E_GUI_RESOURCETYPE_PFX_BUNDLE = 18,
		E_GUI_RESOURCETYPE_PFX = 19,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE_DICTIONARY = 20,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE = 21,
		E_GUI_RESOURCETYPE_DONE = 22,
	}

	// CgsGuiResourceModuleIO.h:84
	enum ResourceRequestLoadUnload {
		E_GUI_RESOURCEREQUEST_LOAD = 0,
		E_GUI_RESOURCEREQUEST_UNLOAD = 1,
	}

	// CgsGuiResourceModuleIO.h:172
	namespace GuiResourceModuleIO {
		struct InputBuffer;

		// CgsGuiResourceModuleIO.h:175
		const int KI_GUI_QUEUE_SIZE_IN_BYTES = 2048;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiResourceModuleIO.h:172
	namespace GuiResourceModuleIO {
		// CgsGuiResourceModuleIO.h:175
		const int KI_GUI_QUEUE_SIZE_IN_BYTES = 2048;

	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiResourceModuleIO.h:37
	enum ResourceRequestTypes {
		E_GUI_RESOURCETYPE_START = 0,
		E_GUI_RESOURCETYPE_BUNDLE = 1,
		E_GUI_RESOURCETYPE_HD_APT_BUNDLE = 2,
		E_GUI_RESOURCETYPE_SD_APT_BUNDLE = 3,
		E_GUI_RESOURCETYPE_APT = 4,
		E_GUI_RESOURCETYPE_APT_LOADING_SCREEN = 5,
		E_GUI_RESOURCETYPE_APT_PERSISTENT = 6,
		E_GUI_RESOURCETYPE_FLAPT_HD_BUNDLE = 7,
		E_GUI_RESOURCETYPE_FLAPT_SD_BUNDLE = 8,
		E_GUI_RESOURCETYPE_FLAPT_PERSISTENT = 9,
		E_GUI_RESOURCETYPE_TEXTURE = 10,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT = 11,
		E_GUI_RESOURCETYPE_LOCALISED_TEXT_BUNDLE = 12,
		E_FONT_RESOURCETYPE_HD_BUNDLE = 13,
		E_FONT_RESOURCETYPE_SD_BUNDLE = 14,
		E_FONT_RESOURCETYPE_FONTDATA = 15,
		E_GUI_RESOURCETYPE_FSM_BUNDLE = 16,
		E_GUI_RESOURCETYPE_FSM = 17,
		E_GUI_RESOURCETYPE_PFX_BUNDLE = 18,
		E_GUI_RESOURCETYPE_PFX = 19,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE_DICTIONARY = 20,
		E_GUI_RESOURCETYPE_PFX_COLOURCUBE = 21,
		E_GUI_RESOURCETYPE_DONE = 22,
	}

	// CgsGuiResourceModuleIO.h:84
	enum ResourceRequestLoadUnload {
		E_GUI_RESOURCEREQUEST_LOAD = 0,
		E_GUI_RESOURCEREQUEST_UNLOAD = 1,
	}

	// CgsGuiResourceModuleIO.h:172
	namespace GuiResourceModuleIO {
		struct InputBuffer;

		struct OutputBuffer;

		// CgsGuiResourceModuleIO.h:175
		const int KI_GUI_QUEUE_SIZE_IN_BYTES = 2048;

	}

}

