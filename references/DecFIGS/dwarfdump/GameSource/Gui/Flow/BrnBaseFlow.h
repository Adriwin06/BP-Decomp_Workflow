// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BrnBaseFlow {
	protected:
		// BrnBaseFlow.h:223
		// Declaration
		void PrintSingleSize(const char *, int32_t, int32_t *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnBaseFlow.h:226
			using namespace CgsDev::Message;

		}

	public:
		// BrnBaseFlow.h:171
		CgsGui::StateMachine & GetStateMachine();

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BrnBaseFlow {
		// BrnBaseFlow.h:51
		enum ReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_LEAVESTATE = 1,
			E_RELEASESTAGE_RELEASESTATEMACHINE = 2,
			E_RELEASESTAGE_DONE = 3,
		}

		// BrnBaseFlow.h:101
		enum EStreamingMode {
			E_STREAMING_OFF = 0,
			E_STREAMING_CURRENT = 1,
			E_STREAMING_PRELOAD = 2,
			E_STREAMING_COUNT = 3,
		}

	}

}

// BrnBaseFlow.h:46
struct BrnGui::BrnBaseFlow : public CgsGui::EventObserver {
protected:
	// BrnBaseFlow.h:128
	CgsGui::StateMachine mStateMachine;

	// BrnBaseFlow.h:129
	BrnGui::BrnBaseFlow::ReleaseStage mReleaseStage;

	// BrnBaseFlow.h:130
	BrnGui::GuiCache * mpGuiCache;

	// BrnBaseFlow.h:132
	uint32_t muFsmSequenceNumber;

	// BrnBaseFlow.h:134
	BrnGui::BrnBaseFlow::EStreamingMode meStreamingMode;

public:
	// BrnBaseFlow.cpp:39
	virtual void Construct(BrnGui::GuiCache *);

	// BrnBaseFlow.cpp:63
	virtual bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *);

	// BrnBaseFlow.cpp:84
	bool PrepareLua(CgsResource::LuaCodeResource *, HeapMalloc *, CgsID);

	// BrnBaseFlow.cpp:109
	virtual void PreWorldUpdate();

	// BrnBaseFlow.cpp:141
	virtual void Update();

	// BrnBaseFlow.cpp:196
	virtual bool Release();

	// BrnBaseFlow.cpp:243
	void Destruct();

	// BrnBaseFlow.h:160
	virtual void SetInEventQueue(InputBuffer::GuiEventQueue *);

	// BrnBaseFlow.h:171
	CgsGui::StateMachine & GetStateMachine();

	// BrnBaseFlow.h:187
	void SetStreamingMode(BrnGui::BrnBaseFlow::EStreamingMode);

	// BrnBaseFlow.h:203
	BrnGui::BrnBaseFlow::EStreamingMode GetStreamingMode() const;

	// BrnBaseFlow.cpp:260
	// Declaration
	void DebugPrintResources(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBaseFlow.cpp:268
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:277
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:289
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:294
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:297
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:299
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:300
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:304
		using namespace CgsDev::Message;

		// BrnBaseFlow.cpp:306
		using namespace CgsDev::Message;

	}

protected:
	// BrnBaseFlow.cpp:322
	// Declaration
	void UpdateStreaming(int32_t, BrnGui::BrnBaseFlow::EStreamingMode) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBaseFlow.cpp:370
		using namespace CgsDev::Message;

	}

	// BrnBaseFlow.h:139
	virtual void PrintStateSizes();

	// BrnBaseFlow.h:223
	// Declaration
	void PrintSingleSize(const char *, int32_t, int32_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBaseFlow.h:226
		using namespace CgsDev::Message;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BrnBaseFlow {
	protected:
		// BrnBaseFlow.h:223
		// Declaration
		void PrintSingleSize(const char *, int32_t, int32_t *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnBaseFlow.h:226
			using namespace CgsDev::Message;

		}

	public:
		BrnBaseFlow();

	}

}

// BrnBaseFlow.h:46
void BrnGui::BrnBaseFlow::BrnBaseFlow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

