// CgsEventInterpreterModule.h:221
extern const uint32_t KU_MAX_HASH_ELEMENTS = 10;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct EventInterpreterModule {
		// CgsEventInterpreterModule.h:162
		struct sMapEntry {
			// CgsEventInterpreterModule.h:165
			BitArray<576u> mOverriddenEventListBitArray;

		public:
			// CgsEventInterpreterModule.h:168
			sMapEntry();

			// CgsEventInterpreterModule.h:172
			sMapEntry(const int32_t *, uint32_t);

		}

		// CgsEventInterpreterModule.h:214
		struct PriorityObjectEventObserver {
			// CgsEventInterpreterModule.h:216
			CgsGui::EventObserver * mpObserver;

			// CgsEventInterpreterModule.h:217
			BitArray<576u> mEventListBitArray;

			// CgsEventInterpreterModule.h:218
			HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u> mEventOverrideHashTable;

			// CgsEventInterpreterModule.h:219
			bool mbBlocking;

			// CgsEventInterpreterModule.h:221
			extern const uint32_t KU_MAX_HASH_ELEMENTS = 10;

			// CgsEventInterpreterModule.h:222
			HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>[10] maHashElementPool;

			// CgsEventInterpreterModule.h:223
			uint32_t muHashElementPoolCount;

		public:
			// CgsEventInterpreterModule.h:226
			void Construct();

			// CgsEventInterpreterModule.h:233
			void RegisterForEvent(int32_t, const int32_t *, uint32_t &);

			// CgsEventInterpreterModule.h:238
			void UnRegisterForEvent(int32_t);

			// CgsEventInterpreterModule.h:243
			bool IsRegisteredForEvent(int32_t);

		}

	public:
		~EventInterpreterModule();

		EventInterpreterModule();

	}

}

// CgsEventInterpreterModule.h:53
void CgsGui::EventInterpreterModule::~EventInterpreterModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventInterpreterModule.h:53
void CgsGui::EventInterpreterModule::EventInterpreterModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct EventInterpreterModule {
		// CgsEventInterpreterModule.h:56
		enum EventInterpreterPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_MANAGER = 1,
			E_PREPARE_DONE = 2,
		}

		// CgsEventInterpreterModule.h:63
		enum EventInterpreterReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_MANAGER = 1,
			E_RELEASE_DONE = 2,
		}

		// CgsEventInterpreterModule.h:162
		struct sMapEntry {
			// CgsEventInterpreterModule.h:165
			BitArray<576u> mOverriddenEventListBitArray;

		public:
			// CgsEventInterpreterModule.h:168
			sMapEntry();

			// CgsEventInterpreterModule.h:172
			sMapEntry(const int32_t *, uint32_t);

		}

		// CgsEventInterpreterModule.h:186
		struct ObjectEventObserver {
			// CgsEventInterpreterModule.h:188
			CgsGui::EventObserver * mpObserver;

			// CgsEventInterpreterModule.h:189
			BitArray<576u> mEventListBitArray;

			// CgsEventInterpreterModule.h:191
			GuiEventPriorityRemoval mRemovedEvent;

			// CgsEventInterpreterModule.h:192
			GuiEventPriorityBlocking mBlockingEvent;

		public:
			// CgsEventInterpreterModule.h:195
			void Construct();

			// CgsEventInterpreterModule.h:200
			void RegisterForEvent(int32_t);

			// CgsEventInterpreterModule.h:205
			void UnRegisterForEvent(int32_t);

			// CgsEventInterpreterModule.h:210
			bool IsRegisteredForEvent(int32_t);

		}

		// CgsEventInterpreterModule.h:214
		struct PriorityObjectEventObserver {
			// CgsEventInterpreterModule.h:216
			CgsGui::EventObserver * mpObserver;

			// CgsEventInterpreterModule.h:217
			BitArray<576u> mEventListBitArray;

			// CgsEventInterpreterModule.h:218
			HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u> mEventOverrideHashTable;

			// CgsEventInterpreterModule.h:219
			bool mbBlocking;

			// CgsEventInterpreterModule.h:221
			extern const uint32_t KU_MAX_HASH_ELEMENTS = 10;

			// CgsEventInterpreterModule.h:222
			HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>[10] maHashElementPool;

			// CgsEventInterpreterModule.h:223
			uint32_t muHashElementPoolCount;

		public:
			// CgsEventInterpreterModule.h:226
			void Construct();

			// CgsEventInterpreterModule.h:233
			void RegisterForEvent(int32_t, const int32_t *, uint32_t &);

			// CgsEventInterpreterModule.h:238
			void UnRegisterForEvent(int32_t);

			// CgsEventInterpreterModule.h:243
			bool IsRegisteredForEvent(int32_t);

		}

	}

	// CgsEventInterpreterModule.h:304
	extern CgsGui::EventInterpreterModule::EventInterpreterReleaseStage operator++(CgsGui::EventInterpreterModule::EventInterpreterReleaseStage &, int);

	// CgsEventInterpreterModule.h:303
	extern CgsGui::EventInterpreterModule::EventInterpreterPrepareStage operator++(CgsGui::EventInterpreterModule::EventInterpreterPrepareStage &, int);

}

// CgsEventInterpreterModule.h:53
struct CgsGui::EventInterpreterModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsEventInterpreterModule.h:247
	CgsGui::EventInterpreterModule::EventInterpreterPrepareStage mePrepareStage;

	// CgsEventInterpreterModule.h:248
	CgsGui::EventInterpreterModule::EventInterpreterReleaseStage meReleaseStage;

	// CgsEventInterpreterModule.h:250
	int32_t mnNumberEventObservers;

	// CgsEventInterpreterModule.h:251
	CgsGui::EventInterpreterModule::ObjectEventObserver[4] maEventObservers;

	// CgsEventInterpreterModule.h:253
	int32_t mnNumberPriorityEventObservers;

	// CgsEventInterpreterModule.h:254
	CgsGui::EventInterpreterModule::PriorityObjectEventObserver[4] maPriorityEventObservers;

	// CgsEventInterpreterModule.h:256
	InputBuffer::GuiEventQueue mInternalEventQueue;

	// CgsEventInterpreterModule.h:257
	InputBuffer::GuiEventQueue[4] mInProcessQueues;

public:
	// CgsEventInterpreterModule.cpp:48
	virtual void Construct();

	// CgsEventInterpreterModule.cpp:80
	virtual bool Prepare();

	// CgsEventInterpreterModule.cpp:125
	virtual bool Release();

	// CgsEventInterpreterModule.cpp:170
	virtual void Destruct();

	// CgsEventInterpreterModule.cpp:187
	virtual void PreWorldUpdate(InputBuffer *, OutputBuffer *);

	// CgsEventInterpreterModule.cpp:225
	virtual void Update(InputBuffer *, OutputBuffer *);

	// CgsEventInterpreterModule.cpp:292
	virtual void PreUpdateObservers();

	// CgsEventInterpreterModule.cpp:266
	virtual void UpdateObservers();

	// CgsEventInterpreterModule.cpp:319
	void AddGuiEvents(const InputBuffer::GuiEventInputQueue &);

	// CgsEventInterpreterModule.cpp:341
	void AddGuiEvent(const CgsModule::Event *, int32_t, int32_t);

	// CgsEventInterpreterModule.cpp:364
	bool RegisterForEvent(CgsGui::EventObserver *, int32_t);

	// CgsEventInterpreterModule.cpp:415
	void UnRegisterForEvent(CgsGui::EventObserver *, int32_t);

	// CgsEventInterpreterModule.cpp:458
	void UnRegisterForAllEvents(CgsGui::EventObserver *);

	// CgsEventInterpreterModule.cpp:480
	bool RegisterPriorityEvent(CgsGui::EventObserver *, int32_t, const int32_t *, uint32_t);

	// CgsEventInterpreterModule.cpp:995
	bool StopPriorityEventBlocking(CgsGui::EventObserver *);

	// CgsEventInterpreterModule.cpp:548
	bool UnregisterPriorityEvent(CgsGui::EventObserver *, int32_t);

private:
	// CgsEventInterpreterModule.cpp:582
	void RemoveObjectFromObserverList(CgsGui::EventObserver *);

	// CgsEventInterpreterModule.cpp:616
	int32_t FindObserverInEventObserverList(CgsGui::EventObserver *, CgsGui::EventInterpreterModule::ObjectEventObserver **);

	// CgsEventInterpreterModule.cpp:657
	int32_t FindPriorityObserverInEventObserverList(CgsGui::EventObserver *, CgsGui::EventInterpreterModule::PriorityObjectEventObserver **);

	// CgsEventInterpreterModule.cpp:728
	void ProcessInEvents(InputBuffer::GuiEventInputQueue *);

	// CgsEventInterpreterModule.cpp:847
	void ProcessOutEvents(OutputBuffer *, bool);

	// CgsEventInterpreterModule.cpp:697
	bool IsPriorityEvent(int32_t, CgsGui::EventInterpreterModule::ObjectEventObserver **);

	// CgsEventInterpreterModule.cpp:1063
	void SetBlocking(const CgsGui::EventInterpreterModule::ObjectEventObserver *);

	// CgsEventInterpreterModule.cpp:1027
	bool IsEventBlocked(int32_t, CgsGui::EventObserver *&) const;

}

