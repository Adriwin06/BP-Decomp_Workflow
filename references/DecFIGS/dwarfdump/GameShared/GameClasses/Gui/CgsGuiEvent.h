// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiEvent.h:35
	const int32_t KI_INPUT_QUEUE_SIZE_KB = 32768;

	// CgsGuiEvent.h:36
	const int32_t KI_LARGE_QUEUE_SIZE_KB = 65536;

	// CgsGuiEvent.h:37
	const int32_t KI_MEDIUM_QUEUE_SIZE_KB = 16384;

	// CgsGuiEvent.h:38
	const int32_t KI_SMALL_QUEUE_SIZE_KB = 4096;

	// CgsGuiEvent.h:39
	const int32_t KI_TINY_QUEUE_SIZE_KB = 256;

	// CgsGuiEvent.h:40
	const int32_t KI_QUEUE_ALIGNMENT = 16;

	// CgsGuiEvent.h:41
	const int32_t KI_MAX_OBSERVERS = 4;

	// CgsGuiEvent.h:42
	const int32_t KI_MAX_EVENTS_PER_OBSERVER = 576;

}

// CgsGuiEvent.h:111
struct CgsGui::GuiEventQueueBase<16384,16> : public VariableEventQueue<16384,16> {
public:
	// CgsGuiEvent.h:281
	void Construct();

	// CgsGuiEvent.h:297
	bool Prepare();

	// CgsGuiEvent.h:313
	bool Release();

	// CgsGuiEvent.h:329
	void Destruct();

	// CgsGuiEvent.h:345
	void Clear();

	// CgsGuiEvent.h:361
	int32_t GetLength() const;

	// CgsGuiEvent.h:397
	void AddGuiEvent(const CgsModule::Event *, int, int);

	// CgsGuiEvent.h:415
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsGuiEvent.h:434
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

}

// CgsGuiEvent.h:111
struct CgsGui::GuiEventQueueBase<4096,16> : public VariableEventQueue<4096,16> {
public:
	// CgsGuiEvent.h:281
	void Construct();

	// CgsGuiEvent.h:297
	bool Prepare();

	// CgsGuiEvent.h:313
	bool Release();

	// CgsGuiEvent.h:329
	void Destruct();

	// CgsGuiEvent.h:345
	void Clear();

	// CgsGuiEvent.h:361
	int32_t GetLength() const;

	// CgsGuiEvent.h:397
	void AddGuiEvent(const CgsModule::Event *, int, int);

	// CgsGuiEvent.h:415
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsGuiEvent.h:434
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<491> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<485> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:111
struct CgsGui::GuiEventQueueBase<65536,16> : public VariableEventQueue<65536,16> {
public:
	// CgsGuiEvent.h:117
	void Construct();

	// CgsGuiEvent.h:121
	bool Prepare();

	// CgsGuiEvent.h:125
	bool Release();

	// CgsGuiEvent.h:129
	void Destruct();

	// CgsGuiEvent.h:133
	void Clear();

	// CgsGuiEvent.h:137
	int32_t GetLength() const;

	// CgsGuiEvent.h:165
	void AddGuiEvent(const CgsModule::Event *, int, int);

	// CgsGuiEvent.h:171
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsGuiEvent.h:178
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

}

// CgsGuiEvent.h:201
struct CgsGui::GuiStackEventQueue : public IOBuffer {
	// CgsGuiEvent.h:187
	typedef GuiEventQueueBase<65536,16> GuiEventQueueLarge;

	// CgsGuiEvent.h:203
	GuiStackEventQueue::GuiEventQueueLarge mGuiEventQueue;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<14> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<15> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<16> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<39> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:111
struct CgsGui::GuiEventQueueBase<32768,16> : public VariableEventQueue<32768,16> {
public:
	// CgsGuiEvent.h:281
	void Construct();

	// CgsGuiEvent.h:297
	bool Prepare();

	// CgsGuiEvent.h:313
	bool Release();

	// CgsGuiEvent.h:329
	void Destruct();

	// CgsGuiEvent.h:345
	void Clear();

	// CgsGuiEvent.h:361
	int32_t GetLength() const;

	// CgsGuiEvent.h:397
	void AddGuiEvent(const CgsModule::Event *, int, int);

	// CgsGuiEvent.h:415
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsGuiEvent.h:434
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<6> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<26> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<21> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<103> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<89> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<320> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<329> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<335> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<332> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<337> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<340> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<328> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<167> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<192> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<169> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<157> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<197> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<201> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<198> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<205> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<206> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<208> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<207> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<235> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<316> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<315> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<287> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<209> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<484> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<539> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<541> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<270> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<241> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<254> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<255> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<262> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<372> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<374> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<453> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<457> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<437> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<568> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<152> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<185> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<526> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<391> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<559> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<566> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<561> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<562> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:111
struct CgsGui::GuiEventQueueBase<256,16> : public VariableEventQueue<256,16> {
public:
	// CgsGuiEvent.h:281
	void Construct();

	// CgsGuiEvent.h:297
	bool Prepare();

	// CgsGuiEvent.h:313
	bool Release();

	// CgsGuiEvent.h:329
	void Destruct();

	// CgsGuiEvent.h:345
	void Clear();

	// CgsGuiEvent.h:361
	int32_t GetLength() const;

	// CgsGuiEvent.h:397
	void AddGuiEvent(const CgsModule::Event *, int, int);

	// CgsGuiEvent.h:415
	int32_t GetFirstEvent(const CgsModule::Event **, int32_t *) const;

	// CgsGuiEvent.h:434
	int32_t GetNextEvent(const CgsModule::Event *, const CgsModule::Event **, int32_t *) const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<174> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<232> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<393> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<392> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventDirtyTrickAvailable>(const GuiEventDirtyTrickAvailable &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventUpdateDirtyTrickCountdown>(const GuiEventUpdateDirtyTrickCountdown &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShowtimeModeSwitch>(const GuiShowtimeModeSwitch &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShowtimeBouncePrompt>(const GuiShowtimeBouncePrompt &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:468
extern bool AppendGuiQueue<16384, 16>(const const GuiEventQueueBase<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<4> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<5> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<7> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<8> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<9> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<28> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<57> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<65> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<502> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<94> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<521> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<522> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<525> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<532> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<535> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<536> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<537> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<534> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<533> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<75> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<73> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<78> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<79> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<81> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<84> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<82> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<95> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<97> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<100> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<101> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<102> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<106> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<109> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<112> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<113> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<114> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<117> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<118> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<119> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<120> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<121> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<126> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<130> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<141> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<142> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<145> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<189> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<190> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<319> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<495> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<323> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<324> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<330> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<331> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<333> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<334> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<336> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<338> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<325> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<327> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<341> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<342> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<339> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<343> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<166> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<164> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<163> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<168> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<193> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<194> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<195> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<191> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<170> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<172> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<165> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<318> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<146> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<148> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<277> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<158> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<199> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<214> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<216> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<215> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<217> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<218> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<219> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<220> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<203> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<204> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<231> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<236> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<237> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<482> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<317> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<301> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<305> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<307> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<308> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<309> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<311> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<303> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<304> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<312> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<314> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<344> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<223> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<483> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<271> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<272> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<274> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<275> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<276> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<256> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<240> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<242> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<261> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<345> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<346> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<347> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<353> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<354> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<351> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<352> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<355> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<357> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<358> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<359> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<368> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<369> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<360> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<361> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<362> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<363> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<364> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<175> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<177> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<479> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<480> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<179> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<180> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<366> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<367> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<370> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<371> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<373> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<375> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<467> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<468> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<469> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<464> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<465> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<470> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<477> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<478> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<481> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<377> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<378> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<379> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<380> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<385> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<386> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<381> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<382> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<383> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<384> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<398> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<397> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<399> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<387> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<388> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<389> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<401> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<404> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<405> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<407> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<408> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<410> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<76> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<411> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<406> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<409> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<412> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<414> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<415> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<416> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<417> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<418> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<234> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<419> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<420> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<421> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<422> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<429> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<423> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<427> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<431> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<433> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<434> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<435> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<438> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<439> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<441> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<442> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<445> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<446> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<447> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<443> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<444> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<448> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<449> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<424> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<425> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<426> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<394> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<395> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<396> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<147> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<450> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<440> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<265> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<267> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<567> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<131> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<571> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<182> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<186> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<187> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<284> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<549> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<548> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<550> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<551> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<488> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<489> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<486> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<321> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<507> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<508> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<509> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<510> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<511> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<512> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<514> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<515> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<527> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<530> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<531> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<123> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<124> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<553> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<554> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<558> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<557> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<563> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<460> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<229> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<294> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<295> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<490> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<104> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<269> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<278> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<96> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<125> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<283> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<110> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<556> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<85> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<83> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<289> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<92> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<162> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<181> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<310> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<313> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<132> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<134> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<135> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<127> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<129> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<105> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<564> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<569> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<151> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<149> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<150> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<176> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<178> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<74> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<513> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:468
extern bool AppendGuiQueue<256, 16>(const const GuiEventQueueBase<256,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiReplayStatusEvent>(const GuiReplayStatusEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:468
extern bool AppendGuiQueue<4096, 16>(const const GuiEventQueueBase<4096,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventControllerInputPressed>(const GuiEventControllerInputPressed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiImpactEvent>(const GuiImpactEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerCrashingStateChangeEvent>(const GuiPlayerCrashingStateChangeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventUpdateSatNav>(const GuiEventUpdateSatNav &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerDrivableFromCrash>(const GuiPlayerDrivableFromCrash &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerEngineEvent>(const GuiPlayerEngineEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerRaceCarIdEvent>(const GuiPlayerRaceCarIdEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventBoostInfo>(const GuiEventBoostInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventUpdateHud>(const GuiEventUpdateHud &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventPlayerWrecked>(const GuiEventPlayerWrecked &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiRaceCarInfoEvent>(const GuiRaceCarInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<const BrnGui::GuiEventTrafficPoolEmptied>(const const GuiEventTrafficPoolEmptied &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<const BrnGui::GuiTrafficCarInfoEvent>(const const GuiTrafficCarInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTrafficCarInfoEvent>(const GuiTrafficCarInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<const BrnGui::GuiRemovedTrafficEvent>(const const GuiRemovedTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<const BrnGui::GuiOverheadSignInfoEvent>(const const GuiOverheadSignInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOverheadSignInfoEvent>(const GuiOverheadSignInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTookLeadEvent>(const GuiTookLeadEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTakedownEvent>(const GuiTakedownEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiSoftTakedownEvent>(const GuiSoftTakedownEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShowtimeScoreUpdate>(const GuiShowtimeScoreUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiLeaptVehicleEvent>(const GuiLeaptVehicleEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHitVehicleEvent>(const GuiHitVehicleEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageCrushCombo>(const GuiHUDMessageCrushCombo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageShowtimeMultiplier>(const GuiHUDMessageShowtimeMultiplier &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShowtimeJustBounced>(const GuiShowtimeJustBounced &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageSignSmashed>(const GuiHUDMessageSignSmashed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectStartEvent>(const GuiCarSelectStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectOnlineTimeLeftEvent>(const GuiCarSelectOnlineTimeLeftEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<83> >(const GuiEvent<83> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerCarColourResponse>(const GuiPlayerCarColourResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventMedalUpdate>(const GuiEventMedalUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventJunctionInfo>(const GuiEventJunctionInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiGamePausedEvent>(const GuiGamePausedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventShowHideHud>(const GuiEventShowHideHud &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTickerCustomMessage>(const GuiEventTickerCustomMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventPlayerReachedRoadRageTarget>(const GuiEventPlayerReachedRoadRageTarget &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventEnterEventStartLocation>(const GuiEventEnterEventStartLocation &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTriggerOnlinePostEvent>(const GuiEventTriggerOnlinePostEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<289> >(const GuiEvent<289> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOfflinePostEvent>(const GuiEventOfflinePostEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRagePlayerDamage>(const GuiEventRoadRagePlayerDamage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTrophyCarUnlock>(const GuiEventTrophyCarUnlock &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventStopMode>(const GuiEventStopMode &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventFinishedModeResults>(const GuiEventFinishedModeResults &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventUpdateEventCountdown>(const GuiEventUpdateEventCountdown &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<92> >(const GuiEvent<92> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTickerClearMessages>(const GuiEventTickerClearMessages &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventPrepareForModeStart>(const GuiEventPrepareForModeStart &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiSetEasyDriveNotAllowedEvent>(const GuiSetEasyDriveNotAllowedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCompletedStuntEvent>(const GuiCompletedStuntEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiInProgressStuntEvent>(const GuiInProgressStuntEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventPreRaceMessages>(const GuiEventPreRaceMessages &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(const GuiOverlayWaitFinishRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<162> >(const GuiEvent<162> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkShowFreeBurnIntro>(const GuiEventNetworkShowFreeBurnIntro &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkSplashEvent>(const GuiEventNetworkSplashEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventChangeDistrict>(const GuiEventChangeDistrict &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventHideDriveThru>(const GuiEventHideDriveThru &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSetAvailablePresetRaces>(const GuiEventSetAvailablePresetRaces &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPaybackReceivedEvent>(const GuiPaybackReceivedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<181> >(const GuiEvent<181> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiDriveThroughEvent>(const GuiDriveThroughEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventDriveThruDiscovered>(const GuiEventDriveThruDiscovered &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<310> >(const GuiEvent<310> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAllOfRivalsShutdown>(const GuiEventAllOfRivalsShutdown &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAllOfTypeComplete>(const GuiEventAllOfTypeComplete &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAllJunctionsDiscoveredOfType>(const GuiEventAllJunctionsDiscoveredOfType &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<313> >(const GuiEvent<313> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCanSkipCrash>(const GuiEventCanSkipCrash &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTimeUp>(const GuiEventTimeUp &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCantPaintCar>(const GuiEventCantPaintCar &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventMustFixCarFirst>(const GuiEventMustFixCarFirst &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSuperJumpFailed>(const GuiEventSuperJumpFailed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventJumpStarted>(const GuiEventJumpStarted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventBoostBarStuntInfo>(const GuiEventBoostBarStuntInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventStuntInfo>(const GuiEventStuntInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiAutosaveRequestEvent>(const GuiAutosaveRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventStuntAreaComplete>(const GuiEventStuntAreaComplete &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventStuntAllComplete>(const GuiEventStuntAllComplete &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventGameCompletedOnline>(const GuiEventGameCompletedOnline &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventGameCompleted>(const GuiEventGameCompleted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventEnterLandmarkArea>(const GuiEventEnterLandmarkArea &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTrafficCheckEvent>(const GuiTrafficCheckEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNearMissEvent>(const GuiNearMissEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiDriftingEvent>(const GuiDriftingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiSpinningEvent>(const GuiSpinningEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiInAirEvent>(const GuiInAirEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOncomingEvent>(const GuiOncomingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTailgatingEvent>(const GuiTailgatingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiAftertouchEvent>(const GuiAftertouchEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventProgressionProfileData>(const GuiEventProgressionProfileData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<132> >(const GuiEvent<132> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<134> >(const GuiEvent<134> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<135> >(const GuiEvent<135> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerInfoResponse>(const GuiPlayerInfoResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarUnlockedLiveryEvent>(const GuiCarUnlockedLiveryEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectionEvent>(const GuiCarSelectionEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiGameModeStarted>(const GuiGameModeStarted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiRaceCheckpointReached>(const GuiRaceCheckpointReached &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiBlueTeamIsEscapingEvent>(const GuiBlueTeamIsEscapingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiBlueTeamIsBehindYouEvent>(const GuiBlueTeamIsBehindYouEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiLeaderPassedMileBoundaryEvent>(const GuiLeaderPassedMileBoundaryEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiLeaderPassedKMBoundaryEvent>(const GuiLeaderPassedKMBoundaryEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiLocalPlayerEliminatedEvent>(const GuiLocalPlayerEliminatedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerEliminatedEvent>(const GuiPlayerEliminatedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiLastBlueTeamMemberEvent>(const GuiLastBlueTeamMemberEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTraitorousTakedownEvent>(const GuiTraitorousTakedownEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventPrepareForInvite>(const GuiEventPrepareForInvite &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<127> >(const GuiEvent<127> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<129> >(const GuiEvent<129> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventInviteComplete>(const GuiEventInviteComplete &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventReturnDistrict>(const GuiEventReturnDistrict &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiInEventLeaderSplit>(const GuiInEventLeaderSplit &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiInEventNeckAndNeck>(const GuiInEventNeckAndNeck &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiInEventFinisher>(const GuiInEventFinisher &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiInEventRivalProgress>(const GuiInEventRivalProgress &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNetworkPlayerCrashingEvent>(const GuiNetworkPlayerCrashingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiBHRCheckpointReachedEvent>(const GuiBHRCheckpointReachedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageBHRRunnerCrashed>(const GuiHUDMessageBHRRunnerCrashed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageStuntPerformed>(const GuiHUDMessageStuntPerformed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageComboPerformed>(const GuiHUDMessageComboPerformed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHUDMessageStuntTimeUp>(const GuiHUDMessageStuntTimeUp &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOnlineTeamChangeEvent>(const GuiOnlineTeamChangeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiChallengeStartEvent>(const GuiChallengeStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiChallengeTriggerResponse>(const GuiChallengeTriggerResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiChallengeEndEvent>(const GuiChallengeEndEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<564> >(const GuiEvent<564> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<105> >(const GuiEvent<105> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<569> >(const GuiEvent<569> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiChallengeUpdateEvent>(const GuiChallengeUpdateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOnlineTimeout>(const GuiEventOnlineTimeout &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventShowFreeburnChallenge>(const GuiEventShowFreeburnChallenge &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<151> >(const GuiEvent<151> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventFailedToStartEvent>(const GuiEventFailedToStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRageTimeExtended>(const GuiEventRoadRageTimeExtended &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiRivalryStatusChange>(const GuiRivalryStatusChange &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiRivalIsFleeing>(const GuiRivalIsFleeing &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCarJoinedEvent>(const GuiEventCarJoinedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<149> >(const GuiEvent<149> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<150> >(const GuiEvent<150> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNetworkRemotePlayerDisconnectEvent>(const GuiNetworkRemotePlayerDisconnectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleEnter>(const GuiEventRoadRuleEnter &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleData>(const GuiEventRoadRuleData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleUpdateTargetScores>(const GuiEventRoadRuleUpdateTargetScores &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleBegin>(const GuiEventRoadRuleBegin &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleEnd>(const GuiEventRoadRuleEnd &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleLeave>(const GuiEventRoadRuleLeave &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleUpcomingRoads>(const GuiEventRoadRuleUpcomingRoads &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleUpdate>(const GuiEventRoadRuleUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleNewHighScore>(const GuiEventRoadRuleNewHighScore &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleChangeMode>(const GuiEventRoadRuleChangeMode &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventStatsResponse>(const GuiEventStatsResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRankProgressResponse>(const GuiEventRankProgressResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRivalryFullInfoResponse>(const GuiEventRivalryFullInfoResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRivalInfoResponse>(const GuiEventRivalInfoResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventMiniMapSwitch>(const GuiEventMiniMapSwitch &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiMugshotControlEvent>(const GuiMugshotControlEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<176> >(const GuiEvent<176> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<178> >(const GuiEvent<178> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPlayerJoinedLobby>(const GuiEventNetworkPlayerJoinedLobby &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCrashComboEvent>(const GuiCrashComboEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarUnlockNewCarEvent>(const GuiCarUnlockNewCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<74> >(const GuiEvent<74> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarUnlockEvent>(const GuiCarUnlockEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiChangeCarEvent>(const GuiChangeCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(const GuiEventNetworkPlayerImage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiImageGalleryImageInfoEvent>(const GuiImageGalleryImageInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiImageGalleryCollectedCountEvent>(const GuiImageGalleryCollectedCountEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiImageGalleryCollectedDataEvent>(const GuiImageGalleryCollectedDataEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleTickerScoreResponse>(const GuiEventRoadRuleTickerScoreResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleNewRulers>(const GuiEventRoadRuleNewRulers &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPlayerInShortcutEvent>(const GuiPlayerInShortcutEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSaveImageFileAndAutosave>(const GuiEventSaveImageFileAndAutosave &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventLoadImageFiles>(const GuiEventLoadImageFiles &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNewBurnoutSkillzEvent>(const GuiNewBurnoutSkillzEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNewBurnoutHudMessageEvent>(const GuiNewBurnoutHudMessageEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShowtimeTriggered>(const GuiShowtimeTriggered &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPowerParkResult>(const GuiPowerParkResult &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<513> >(const GuiEvent<513> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventEventStateResponse>(const GuiEventEventStateResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectReadyToExitEvent>(const GuiCarSelectReadyToExitEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectionChangedDropIn>(const GuiCarSelectionChangedDropIn &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectionChangedOnline>(const GuiCarSelectionChangedOnline &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarSelectAbortEvent>(const GuiCarSelectAbortEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShutdownEvent>(const GuiShutdownEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiShutdownFinishedEvent>(const GuiShutdownFinishedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventFburnChallengeEveryPlayerStatus>(const GuiEventFburnChallengeEveryPlayerStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOverlayRequest>(const GuiOverlayRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiAchievementsEarned>(const GuiAchievementsEarned &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleBatchDataResponse>(const GuiEventRoadRuleBatchDataResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRacePositionInfo>(const GuiEventRacePositionInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventScoreboardResponseIndexEvent>(const GuiEventScoreboardResponseIndexEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventScoreboardResponseVariationEvent>(const GuiEventScoreboardResponseVariationEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventScoreboardResponseTableEvent>(const GuiEventScoreboardResponseTableEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventLiveRevengeProfileData>(const GuiEventLiveRevengeProfileData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<278> >(const GuiEvent<278> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<125> >(const GuiEvent<125> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<283> >(const GuiEvent<283> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<96> >(const GuiEvent<96> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOnlineAccountSettings>(const GuiEventOnlineAccountSettings &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCamPicCompressed>(const GuiEventCamPicCompressed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPlayerLeftLobby>(const GuiEventNetworkPlayerLeftLobby &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiChallengeNotActiveStartEvent>(const GuiChallengeNotActiveStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOnlineCarStatusEvent>(const GuiOnlineCarStatusEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<110> >(const GuiEvent<110> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<556> >(const GuiEvent<556> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventBuddyNotification>(const GuiEventBuddyNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventInviteFailed>(const GuiEventInviteFailed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOnlinePostEventScalps>(const GuiEventOnlinePostEventScalps &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<104> >(const GuiEvent<104> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOnlineNumFriendsCount>(const GuiEventOnlineNumFriendsCount &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOnlineReceiveFriendInfo>(const GuiEventOnlineReceiveFriendInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkGameParams>(const GuiEventNetworkGameParams &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkLeftGame>(const GuiEventNetworkLeftGame &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPostGameProcessingFinished>(const GuiEventNetworkPostGameProcessingFinished &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventNetworkLaunching>(const GuiEventNetworkLaunching &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<269> >(const GuiEvent<269> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventScoreboardResponseCategoryEvent>(const GuiEventScoreboardResponseCategoryEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiLiveRevengeUpdateEvent>(const GuiLiveRevengeUpdateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSetBlackBars>(const GuiEventSetBlackBars &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRunFsm>(const GuiEventRunFsm &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEnteredJunkyard>(const GuiEnteredJunkyard &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCarUnlockStartEvent>(const GuiCarUnlockStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<85> >(const GuiEvent<85> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSetRoadRuleScoreMode>(const GuiEventSetRoadRuleScoreMode &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiDirtyTrickNewEvent>(const GuiDirtyTrickNewEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiDirtyTrickTriggerEvent>(const GuiDirtyTrickTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiDirtyTrickEndedEvent>(const GuiDirtyTrickEndedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOvertakeEvent>(const GuiOvertakeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiFinishRaceEvent>(const GuiFinishRaceEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiTookLastEvent>(const GuiTookLastEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNetworkPlayerOnTailEvent>(const GuiNetworkPlayerOnTailEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTogglePictureParadise>(const GuiEventTogglePictureParadise &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventPreraceTrigger>(const GuiEventPreraceTrigger &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<294> >(const GuiEvent<294> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<295> >(const GuiEvent<295> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<490> >(const GuiEvent<490> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXHookStopEvent>(const GuiPFXHookStopEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXHookEvent>(const GuiPFXHookEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXStartBackgroundHookEvent>(const GuiPFXStartBackgroundHookEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXStopBackgroundHookEvent>(const GuiPFXStopBackgroundHookEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventDirectorSettings>(const GuiEventDirectorSettings &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPlayerList>(const GuiEventNetworkPlayerList &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPlayerStatus>(const GuiEventNetworkPlayerStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkLobbyPlayerList>(const GuiEventNetworkLobbyPlayerList &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRequestCollisionWorldEvent>(const GuiEventRequestCollisionWorldEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventTimeInfo>(const GuiEventTimeInfo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventActiveUserIndex>(const GuiEventActiveUserIndex &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventToggleChangeCarMessage>(const GuiEventToggleChangeCarMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventControllerAxis>(const GuiEventControllerAxis &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventControllerInputDown>(const GuiEventControllerInputDown &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventControllerInputReleased>(const GuiEventControllerInputReleased &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiControllerDisconnected>(const GuiControllerDisconnected &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventSetLanguage>(const GuiEventSetLanguage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRaceDistanceRemaining>(const GuiEventRaceDistanceRemaining &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRaceDistanceToCheckpoint>(const GuiEventRaceDistanceToCheckpoint &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCurrentStatus>(const GuiEventCurrentStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventScoreUpdate>(const GuiEventScoreUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiRoadRageScoreUpdate>(const GuiRoadRageScoreUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPursuitScoreUpdate>(const GuiPursuitScoreUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiCrashScoreUpdate>(const GuiCrashScoreUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiAttackScoreUpdate>(const GuiAttackScoreUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventOnlinePostEvent>(const GuiEventOnlinePostEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventUpdateEventStarts>(const GuiEventUpdateEventStarts &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSpecificPresetRaces>(const GuiEventSpecificPresetRaces &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRenderProgressBar>(const GuiEventRenderProgressBar &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSetPlayer0ControllerPort>(const GuiEventSetPlayer0ControllerPort &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<22> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<18> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<64> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<243> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<365> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<466> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<430> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<282> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<281> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<221> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<452> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<451> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<155> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<98> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<99> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<560> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<107> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<432> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<41> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPlayAptMovie mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPlayAptMovie &);

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<40> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiChallengeSelectedEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiChallengeSelectedEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<155>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:5812
	typedef GuiEvent<155> GuiHudMessageControllerRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<155>,40>::GuiHudMessageControllerRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<155>,40>::GuiHudMessageControllerRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiAudioEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiAudioEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiDirtyTrickTriggerableEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiDirtyTrickTriggerableEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiDirtyTrickTriggerableEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestTraining,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRequestTraining mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRequestTraining &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiAudioTriggerEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiAudioTriggerEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiAudioTriggerEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventSoundTrigger,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventSoundTrigger mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventSoundTrigger &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleFail,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRoadRuleFail mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRoadRuleFail &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventFriendListShowing,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventFriendListShowing mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventFriendListShowing &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineInviteEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventOnlineInviteEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventOnlineInviteEvent &);

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<42> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPerformOnlineMainMenuOption,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPerformOnlineMainMenuOption mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPerformOnlineMainMenuOption &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPerformOnlinePauseOption,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPerformOnlinePauseOption mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPerformOnlinePauseOption &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkGameParams,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkGameParams mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkGameParams &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineShowProfile,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventOnlineShowProfile mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventOnlineShowProfile &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleModeRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRoadRuleModeRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRoadRuleModeRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<98>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:570
	typedef GuiEvent<98> GuiEventOnlineGetBuddyCount;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<98>,40>::GuiEventOnlineGetBuddyCount mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<98>,40>::GuiEventOnlineGetBuddyCount &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<99>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:574
	typedef GuiEvent<99> GuiEventOnlineGetBuddies;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<99>,40>::GuiEventOnlineGetBuddies mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<99>,40>::GuiEventOnlineGetBuddies &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerCustomMessage,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventTickerCustomMessage mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventTickerCustomMessage &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<560>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:6581
	typedef GuiEvent<560> GuiChallengeTriggerRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<560>,40>::GuiChallengeTriggerRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<560>,40>::GuiChallengeTriggerRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEATraxChyronActive,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEATraxChyronActive mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEATraxChyronActive &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<107>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:639
	typedef GuiEvent<107> GuiOnlineNotificationChyronFinishedEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<107>,40>::GuiOnlineNotificationChyronFinishedEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<107>,40>::GuiOnlineNotificationChyronFinishedEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventStatsRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventStatsRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventStatsRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<432>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:5066
	typedef GuiEvent<432> GuiEventRankProgressRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<432>,40>::GuiEventRankProgressRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<432>,40>::GuiEventRankProgressRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventSetRoadRuleScoreMode,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventSetRoadRuleScoreMode mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventSetRoadRuleScoreMode &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkSelectedPlayerOption,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkSelectedPlayerOption mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkSelectedPlayerOption &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkPlayerImage,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkPlayerImage mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkPlayerImage &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkOutputPlayerTexture,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkOutputPlayerTexture mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkOutputPlayerTexture &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestCompressedCamPic,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRequestCompressedCamPic mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRequestCompressedCamPic &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventTickerClearMessages mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventTickerClearMessages &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> >(const GuiOutViewState<CgsGui::GuiEventPlayAptMovie> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventLoadRequest>(const GuiEventLoadRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRequestCompressedCamPic> >(const GuiEventOut<BrnGui::GuiEventRequestCompressedCamPic> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStatsRequest> >(const GuiEventOut<BrnGui::GuiEventStatsRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSelectedPlayerOption> >(const GuiEventOut<BrnGui::GuiEventNetworkSelectedPlayerOption> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventSetRoadRuleScoreMode> >(const GuiEventOut<BrnGui::GuiEventSetRoadRuleScoreMode> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOnlineNotificationChyronFinishedEvent> >(const GuiEventOut<CgsGui::GuiEvent<107> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEATraxChyronActive> >(const GuiEventOut<BrnGui::GuiEATraxChyronActive> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeTriggerRequest> >(const GuiEventOut<CgsGui::GuiEvent<560> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineGetBuddies> >(const GuiEventOut<CgsGui::GuiEvent<99> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineGetBuddyCount> >(const GuiEventOut<CgsGui::GuiEvent<98> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRequestTraining> >(const GuiEventOut<BrnGui::GuiEventRequestTraining> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventSoundTrigger> >(const GuiEventOut<CgsGui::GuiEventSoundTrigger> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiDirtyTrickTriggerableEvent> >(const GuiEventOut<BrnGui::GuiDirtyTrickTriggerableEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioEvent> >(const GuiEventOut<BrnGui::GuiAudioEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiHudMessageControllerRequest> >(const GuiEventOut<CgsGui::GuiEvent<155> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRankProgressRequest> >(const GuiEventOut<CgsGui::GuiEvent<432> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleFail> >(const GuiEventOut<BrnGui::GuiEventRoadRuleFail> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventNetworkPlayerImage> >(const GuiOutViewState<BrnGui::GuiEventNetworkPlayerImage> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkOutputPlayerTexture> >(const GuiEventOut<BrnGui::GuiEventNetworkOutputPlayerTexture> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(const GuiEventOut<BrnGui::GuiChallengeSelectedEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(const GuiEventOut<BrnGui::GuiAudioTriggerEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(const GuiEventOut<BrnGui::GuiEventTickerCustomMessage> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerClearMessages> >(const GuiEventOut<BrnGui::GuiEventTickerClearMessages> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(const GuiEventOut<BrnGui::GuiEventFriendListShowing> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleModeRequest> >(const GuiEventOut<BrnGui::GuiEventRoadRuleModeRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> >(const GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> >(const GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineShowProfile> >(const GuiEventOut<BrnGui::GuiEventOnlineShowProfile> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> >(const GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkGameParams> >(const GuiEventOut<BrnGui::GuiEventNetworkGameParams> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<520> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<523> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<202> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<211> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<212> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<213> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<542> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<543> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<544> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<545> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<546> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<547> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<210> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRenderSatNav,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRenderSatNav mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRenderSatNav &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRenderMainMap,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRenderMainMap mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRenderMainMap &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRoadRuleTickerScoreRequest>(const GuiEventRoadRuleTickerScoreRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTickerStatus>(const GuiEventTickerStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiAudioTriggerEvent>(const GuiAudioTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOptionsBrightnessContrastPostFxControl>(const GuiOptionsBrightnessContrastPostFxControl &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventRenderMainMap> >(const GuiOutViewState<BrnGui::GuiEventRenderMainMap> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventRenderSatNav> >(const GuiOutViewState<BrnGui::GuiEventRenderSatNav> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<25> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<10> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<23> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<19> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<20> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<498> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<499> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<72> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<138> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<497> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<540> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<188> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<574> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<575> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<71> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<91> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<70> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<136> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<565> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<528> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<529> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<60> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<61> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<233> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<428> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<306> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<19>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiStateInterface.h:210
	typedef GuiEvent<19> GuiEventPlayAptLoadingMovie;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<20>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiStateInterface.h:220
	typedef GuiEvent<20> GuiEventStopAptLoadingMovie;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<20>,40>::GuiEventStopAptLoadingMovie mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<20>,40>::GuiEventStopAptLoadingMovie &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventShowHideBoostBar mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventShowHideBoostBar &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventClearScreenSet,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventClearScreenSet mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventClearScreenSet &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<71>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEvent<71> mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEvent<71> &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventBlackOverlayFadeIn,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventBlackOverlayFadeIn mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventBlackOverlayFadeIn &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayMusicOnMenuStream,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPlayMusicOnMenuStream mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPlayMusicOnMenuStream &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<91>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEvent<91> mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEvent<91> &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPlayVideo,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPlayVideo mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPlayVideo &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventStopVideo,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventStopVideo mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventStopVideo &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventBlackOverlayFadeOut,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventBlackOverlayFadeOut mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventBlackOverlayFadeOut &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<70>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEvent<70> mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEvent<70> &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPreloadedResourcesLoaded,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPreloadedResourcesLoaded mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPreloadedResourcesLoaded &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPreloadedResourcesLoaded,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPreloadedResourcesLoaded mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPreloadedResourcesLoaded &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<136>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:790
	typedef GuiEvent<136> GuiEventShowLoadingScreenAsBackground;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<136>,40>::GuiEventShowLoadingScreenAsBackground mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<136>,40>::GuiEventShowLoadingScreenAsBackground &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventTriggerGetPlayerName,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventTriggerGetPlayerName mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventTriggerGetPlayerName &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<565>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:6665
	typedef GuiEvent<565> GuiEventFreeburnChallengeRequestEveryPlayerStatus;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<565>,40>::GuiEventFreeburnChallengeRequestEveryPlayerStatus mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<565>,40>::GuiEventFreeburnChallengeRequestEveryPlayerStatus &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiSetEasyDriveNotAllowedEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiSetEasyDriveNotAllowedEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiSetEasyDriveNotAllowedEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventShowHideSatNav mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventShowHideSatNav &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<528>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:6406
	typedef GuiEvent<528> GuiNewBurnoutSkillzSelectNextCategory;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<528>,40>::GuiNewBurnoutSkillzSelectNextCategory mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<528>,40>::GuiNewBurnoutSkillzSelectNextCategory &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<529>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:6415
	typedef GuiEvent<529> GuiFreeburnChallengeTargetSelectNextCategory;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<529>,40>::GuiFreeburnChallengeTargetSelectNextCategory mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<529>,40>::GuiFreeburnChallengeTargetSelectNextCategory &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<60>,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:312
	typedef GuiEvent<60> GuiViewEventFontRotateDefault;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<60>,41>::GuiViewEventFontRotateDefault mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<60>,41>::GuiViewEventFontRotateDefault &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<61>,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:313
	typedef GuiEvent<61> GuiViewEventFontEffectRotateDefault;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<61>,41>::GuiViewEventFontEffectRotateDefault mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<61>,41>::GuiViewEventFontEffectRotateDefault &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventShowHideSatNav mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventShowHideSatNav &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiAudioEventResults,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiAudioEventResults mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiAudioEventResults &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiOverlayWaitFinishRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiOverlayWaitFinishRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiOverlayWaitFinishRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideAboveCar,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventShowHideAboveCar mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventShowHideAboveCar &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiOverlayRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiOverlayRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiOverlayRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<233>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2200
	typedef GuiEvent<233> GuiEventStarted;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<233>,40>::GuiEventStarted mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<233>,40>::GuiEventStarted &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleDataRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRoadRuleDataRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRoadRuleDataRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<428>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventStartPursuitEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventStartPursuitEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventUpdateLocalisedCpt,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventUpdateLocalisedCpt mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventUpdateLocalisedCpt &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<306>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2466
	typedef GuiEvent<306> GuiEventGameCompleteRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<306>,40>::GuiEventGameCompleteRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<306>,40>::GuiEventGameCompleteRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventTrophyCarUnlock,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventTrophyCarUnlock mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventTrophyCarUnlock &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventEventStateRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventEventStateRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventEventStateRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventEnableSatNavIcons mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventEnableSatNavIcons &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventEnableSatNavIcons mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventEnableSatNavIcons &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioEventResults> >(const GuiEventOut<BrnGui::GuiAudioEventResults> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventEnableSatNavIcons> >(const GuiOutViewState<BrnGui::GuiEventEnableSatNavIcons> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventUpdateLocalisedCpt> >(const GuiOutViewState<CgsGui::GuiEventUpdateLocalisedCpt> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventStopAptLoadingMovie> >(const GuiEventOut<CgsGui::GuiEvent<20> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventPlayAptLoadingMovie> >(const GuiEventOut<CgsGui::GuiEvent<19> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventEnableSatNavIcons> >(const GuiEventOut<BrnGui::GuiEventEnableSatNavIcons> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventEventStateRequest> >(const GuiEventOut<BrnGui::GuiEventEventStateRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTriggerGetPlayerName> >(const GuiEventOut<BrnGui::GuiEventTriggerGetPlayerName> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFreeburnChallengeRequestEveryPlayerStatus> >(const GuiEventOut<CgsGui::GuiEvent<565> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiSetEasyDriveNotAllowedEvent> >(const GuiEventOut<BrnGui::GuiSetEasyDriveNotAllowedEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventClearScreenSet> >(const GuiOutViewState<CgsGui::GuiEventClearScreenSet> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideAboveCar> >(const GuiOutViewState<BrnGui::GuiEventShowHideAboveCar> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventGameCompleteRequest> >(const GuiEventOut<CgsGui::GuiEvent<306> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStopVideo> >(const GuiEventOut<BrnGui::GuiEventStopVideo> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEvent<70> > >(const GuiEventOut<CgsGui::GuiEvent<70> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPreloadedResourcesLoaded> >(const GuiOutInternalEvent<BrnGui::GuiEventPreloadedResourcesLoaded> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPreloadedResourcesLoaded> >(const GuiEventOut<BrnGui::GuiEventPreloadedResourcesLoaded> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventShowLoadingScreenAsBackground> >(const GuiEventOut<CgsGui::GuiEvent<136> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEvent<71> > >(const GuiEventOut<CgsGui::GuiEvent<71> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventBlackOverlayFadeIn> >(const GuiEventOut<BrnGui::GuiEventBlackOverlayFadeIn> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventPlayMusicOnMenuStream> >(const GuiEventOut<CgsGui::GuiEventPlayMusicOnMenuStream> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEvent<91> > >(const GuiEventOut<CgsGui::GuiEvent<91> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPlayVideo> >(const GuiEventOut<BrnGui::GuiEventPlayVideo> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventBlackOverlayFadeOut> >(const GuiEventOut<BrnGui::GuiEventBlackOverlayFadeOut> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> >(const GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayWaitFinishRequest> >(const GuiEventOut<BrnGui::GuiOverlayWaitFinishRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> >(const GuiOutViewState<BrnGui::GuiEventShowHideSatNav> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayRequest> >(const GuiEventOut<BrnGui::GuiOverlayRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> >(const GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStarted> >(const GuiEventOut<CgsGui::GuiEvent<233> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiNewBurnoutSkillzSelectNextCategory> >(const GuiEventOut<CgsGui::GuiEvent<528> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiFreeburnChallengeTargetSelectNextCategory> >(const GuiEventOut<CgsGui::GuiEvent<529> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiViewEventFontRotateDefault> >(const GuiOutViewState<CgsGui::GuiEvent<60> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiViewEventFontEffectRotateDefault> >(const GuiOutViewState<CgsGui::GuiEvent<61> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleDataRequest> >(const GuiEventOut<BrnGui::GuiEventRoadRuleDataRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStartPursuitEvent> >(const GuiEventOut<CgsGui::GuiEvent<428> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTrophyCarUnlock> >(const GuiEventOut<BrnGui::GuiEventTrophyCarUnlock> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<50> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<45> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<44> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<58> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<51> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<239> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<285> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<273> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<244> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<245> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<249> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<250> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<252> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<253> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<264> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<356> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<458> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<474> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<475> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<266> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<280> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<506> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<288> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<290> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<292> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<291> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<251> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<133> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<456> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<258> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<56> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<52> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<54> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<263> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<93> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<279> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<247> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<248> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<257> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<173> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<111> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<115> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<116> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<238> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<322> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventMapCursorStatus,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventMapCursorStatus mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventMapCursorStatus &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkSettingsUpdate,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkSettingsUpdate mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkSettingsUpdate &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioSettings,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioSettings mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioSettings &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventControllerSettings,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventControllerSettings mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventControllerSettings &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDirectorSettings,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDirectorSettings mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDirectorSettings &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventGameOptionsSettings,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventGameOptionsSettings mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventGameOptionsSettings &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiAutosaveRequestEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiAutosaveRequestEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiAutosaveRequestEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<288>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1511
	typedef GuiEvent<288> GuiEventEnteredOnlinePostEventState;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<288>,40>::GuiEventEnteredOnlinePostEventState mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<288>,40>::GuiEventEnteredOnlinePostEventState &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiRequestCarControlChangeEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiRequestCarControlChangeEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiRequestCarControlChangeEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkSplashEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkSplashEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkSplashEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<290>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1513
	typedef GuiEvent<290> GuiEventLeavePostEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<290>,40>::GuiEventLeavePostEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<290>,40>::GuiEventLeavePostEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<292>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1515
	typedef GuiEvent<292> GuiEventLeftPostEventState;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<292>,40>::GuiEventLeftPostEventState mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<292>,40>::GuiEventLeftPostEventState &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRunFsm,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRunFsm mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRunFsm &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<291>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1514
	typedef GuiEvent<291> GuiEventLeftPostEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<291>,40>::GuiEventLeftPostEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<291>,40>::GuiEventLeftPostEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventActivateCrashNav,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventActivateCrashNav mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventActivateCrashNav &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideHud,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventShowHideHud mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventShowHideHud &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiImageGalleryRequestCollectedCountEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiImageGalleryRequestCollectedCountEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiImageGalleryRequestCollectedCountEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiImageGalleryRequestCollectedDataEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiImageGalleryRequestCollectedDataEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiImageGalleryRequestCollectedDataEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiSaveLoadImageExportRequested,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiSaveLoadImageExportRequested mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiSaveLoadImageExportRequested &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventNetworkSuspension,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkSuspension mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkSuspension &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiImageGalleryRequestEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiImageGalleryRequestEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiImageGalleryRequestEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiSnapShotRequested,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiSnapShotRequested mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiSnapShotRequested &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventActivateCarSelect,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventActivateCarSelect mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventActivateCarSelect &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiChangeCarEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiChangeCarEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiChangeCarEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<251>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:3152
	typedef GuiEvent<251> GuiEventNetworkCancelSearch;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<251>,40>::GuiEventNetworkCancelSearch mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<251>,40>::GuiEventNetworkCancelSearch &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkCustomMatchSearch,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkCustomMatchSearch mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkCustomMatchSearch &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkCustomMatchJoin,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkCustomMatchJoin mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkCustomMatchJoin &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<133>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:774
	typedef GuiEvent<133> GuiEventStreamingComplete;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<133>,40>::GuiEventStreamingComplete mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<133>,40>::GuiEventStreamingComplete &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventShowHideHud,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventShowHideHud mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventShowHideHud &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<456>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:4042
	typedef GuiEvent<456> GuiEventAudioTraxAdvanceTrack;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<456>,40>::GuiEventAudioTraxAdvanceTrack mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<456>,40>::GuiEventAudioTraxAdvanceTrack &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<258>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2906
	typedef GuiEvent<258> GuiEventNetworkGameOptionsRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<258>,40>::GuiEventNetworkGameOptionsRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<258>,40>::GuiEventNetworkGameOptionsRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<56>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:331
	typedef GuiEvent<56> GuiEventNetworkLaunch;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<56>,40>::GuiEventNetworkLaunch mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<56>,40>::GuiEventNetworkLaunch &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventVoipSettings,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventVoipSettings mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventVoipSettings &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventScoreboardRequestGamercardEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventScoreboardRequestGamercardEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventScoreboardRequestGamercardEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventSetInspectedEventIcon,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventSetInspectedEventIcon mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventSetInspectedEventIcon &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventSetInspectedEventIcon,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventSetInspectedEventIcon mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventSetInspectedEventIcon &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<52>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:327
	typedef GuiEvent<52> GuiEventNetworkLeaveGame;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<52>,40>::GuiEventNetworkLeaveGame mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<52>,40>::GuiEventNetworkLeaveGame &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkHighlightedPlayer,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkHighlightedPlayer mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkHighlightedPlayer &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<54>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:329
	typedef GuiEvent<54> GuiEventNetworkStartPressed;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<54>,40>::GuiEventNetworkStartPressed mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<54>,40>::GuiEventNetworkStartPressed &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<263>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2908
	typedef GuiEvent<263> GuiEventNetworkChangeTeams;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<263>,40>::GuiEventNetworkChangeTeams mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<263>,40>::GuiEventNetworkChangeTeams &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<93>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:244
	typedef GuiEvent<93> GuiEventLoadingScreenLoaded;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<93>,40>::GuiEventLoadingScreenLoaded mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<93>,40>::GuiEventLoadingScreenLoaded &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDirectorOnlineLoadingFinished,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDirectorOnlineLoadingFinished mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDirectorOnlineLoadingFinished &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDirectorOnlineLoadingStarted,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDirectorOnlineLoadingStarted mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDirectorOnlineLoadingStarted &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<279>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2911
	typedef GuiEvent<279> GuiEventNetworkLoadingScreenShown;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<279>,40>::GuiEventNetworkLoadingScreenShown mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<279>,40>::GuiEventNetworkLoadingScreenShown &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<247>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2903
	typedef GuiEvent<247> GuiEventNetworkFinishRound;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<247>,40>::GuiEventNetworkFinishRound mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<247>,40>::GuiEventNetworkFinishRound &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<248>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2904
	typedef GuiEvent<248> GuiEventNetworkQuitPlaying;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<248>,40>::GuiEventNetworkQuitPlaying mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<248>,40>::GuiEventNetworkQuitPlaying &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkNewsAndTOS,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkNewsAndTOS mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkNewsAndTOS &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<257>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2905
	typedef GuiEvent<257> GuiEventNetworkLocalPlayerStatsRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<257>,40>::GuiEventNetworkLocalPlayerStatsRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<257>,40>::GuiEventNetworkLocalPlayerStatsRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiNetworkPrepareGameEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiNetworkPrepareGameEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiNetworkPrepareGameEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestCollisionWorldEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRequestCollisionWorldEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRequestCollisionWorldEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventFriendsListUtilShut,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventFriendsListUtilShut mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventFriendsListUtilShut &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiCarSelectionRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiCarSelectionRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiCarSelectionRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestSpecificPreSetRaces,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRequestSpecificPreSetRaces mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRequestSpecificPreSetRaces &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkCreateGame,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkCreateGame mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkCreateGame &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<173>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1483
	typedef GuiEvent<173> GuiCustomEventHostEasyDriveStartEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<173>,40>::GuiCustomEventHostEasyDriveStartEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<173>,40>::GuiCustomEventHostEasyDriveStartEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiNetworkCustomRouteCreated,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiNetworkCustomRouteCreated mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiNetworkCustomRouteCreated &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<111>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:656
	typedef GuiEvent<111> GuiEventScoreboardRequestCategoryEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<111>,40>::GuiEventScoreboardRequestCategoryEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<111>,40>::GuiEventScoreboardRequestCategoryEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventScoreboardRequestIndexEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventScoreboardRequestIndexEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventScoreboardRequestIndexEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventScoreboardRequestVariationEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventScoreboardRequestVariationEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventScoreboardRequestVariationEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventScoreboardRequestTableEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventScoreboardRequestTableEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventScoreboardRequestTableEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiTelemetryEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiTelemetryEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiTelemetryEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<115>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:685
	typedef GuiEvent<115> GuiEventScoreboardRequestPageUpEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<115>,40>::GuiEventScoreboardRequestPageUpEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<115>,40>::GuiEventScoreboardRequestPageUpEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<116>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:686
	typedef GuiEvent<116> GuiEventScoreboardRequestPageDownEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<116>,40>::GuiEventScoreboardRequestPageDownEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<116>,40>::GuiEventScoreboardRequestPageDownEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkQuickMatch,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkQuickMatch mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkQuickMatch &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkMarkedManLoadedEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkMarkedManLoadedEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkMarkedManLoadedEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<238>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2238
	typedef GuiEvent<238> GuiEventOnlineStatsRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<238>,40>::GuiEventOnlineStatsRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<238>,40>::GuiEventOnlineStatsRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineStatsResponse,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventOnlineStatsResponse mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventOnlineStatsResponse &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<322>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1047
	typedef GuiEvent<322> GuiRequestOnlinePhotoFinishEvent;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<322>,40>::GuiRequestOnlinePhotoFinishEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<322>,40>::GuiRequestOnlinePhotoFinishEvent &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRequestCollisionWorldEvent> >(const GuiEventOut<BrnGui::GuiEventRequestCollisionWorldEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiRequestOnlinePhotoFinishEvent> >(const GuiEventOut<CgsGui::GuiEvent<322> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventNetworkSuspension> >(const GuiEventOut<CgsGui::GuiEventNetworkSuspension> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventActivateCrashNav> >(const GuiEventOut<BrnGui::GuiEventActivateCrashNav> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventShowHideHud> >(const GuiEventOut<BrnGui::GuiEventShowHideHud> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineStatsResponse> >(const GuiEventOut<BrnGui::GuiEventOnlineStatsResponse> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineStatsRequest> >(const GuiEventOut<CgsGui::GuiEvent<238> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAutosaveRequestEvent> >(const GuiEventOut<BrnGui::GuiAutosaveRequestEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkNewsAndTOS> >(const GuiEventOut<BrnGui::GuiEventNetworkNewsAndTOS> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiTelemetryEvent> >(const GuiEventOut<BrnGui::GuiTelemetryEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestPageDownEvent> >(const GuiEventOut<CgsGui::GuiEvent<116> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestPageUpEvent> >(const GuiEventOut<CgsGui::GuiEvent<115> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideHud> >(const GuiOutInternalEvent<BrnGui::GuiEventShowHideHud> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiNetworkCustomRouteCreated> >(const GuiEventOut<BrnGui::GuiNetworkCustomRouteCreated> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiNetworkPrepareGameEvent> >(const GuiEventOut<BrnGui::GuiNetworkPrepareGameEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkLocalPlayerStatsRequest> >(const GuiEventOut<CgsGui::GuiEvent<257> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkQuitPlaying> >(const GuiEventOut<CgsGui::GuiEvent<248> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventVoipSettings> >(const GuiEventOut<BrnGui::GuiEventVoipSettings> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioSettings> >(const GuiEventOut<BrnGui::GuiEventAudioSettings> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkHighlightedPlayer> >(const GuiEventOut<BrnGui::GuiEventNetworkHighlightedPlayer> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventSetInspectedEventIcon> >(const GuiOutViewState<BrnGui::GuiEventSetInspectedEventIcon> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventSetInspectedEventIcon> >(const GuiOutInternalEvent<BrnGui::GuiEventSetInspectedEventIcon> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventNetworkLaunch> >(const GuiEventOut<CgsGui::GuiEvent<56> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventActivateCarSelect> >(const GuiEventOut<BrnGui::GuiEventActivateCarSelect> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChangeCarEvent> >(const GuiEventOut<BrnGui::GuiChangeCarEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestCategoryEvent> >(const GuiEventOut<CgsGui::GuiEvent<111> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestIndexEvent> >(const GuiEventOut<BrnGui::GuiEventScoreboardRequestIndexEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestVariationEvent> >(const GuiEventOut<BrnGui::GuiEventScoreboardRequestVariationEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestTableEvent> >(const GuiEventOut<BrnGui::GuiEventScoreboardRequestTableEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRequestSpecificPreSetRaces> >(const GuiEventOut<BrnGui::GuiEventRequestSpecificPreSetRaces> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedCountEvent> >(const GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedCountEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedDataEvent> >(const GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedDataEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCustomMatchSearch> >(const GuiEventOut<BrnGui::GuiEventNetworkCustomMatchSearch> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSplashEvent> >(const GuiEventOut<BrnGui::GuiEventNetworkSplashEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkGameOptionsRequest> >(const GuiEventOut<CgsGui::GuiEvent<258> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendsListUtilShut> >(const GuiEventOut<BrnGui::GuiEventFriendsListUtilShut> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiImageGalleryRequestEvent> >(const GuiEventOut<BrnGui::GuiImageGalleryRequestEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventEnteredOnlinePostEventState> >(const GuiEventOut<CgsGui::GuiEvent<288> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCancelSearch> >(const GuiEventOut<CgsGui::GuiEvent<251> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkQuickMatch> >(const GuiEventOut<BrnGui::GuiEventNetworkQuickMatch> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkMarkedManLoadedEvent> >(const GuiEventOut<BrnGui::GuiEventNetworkMarkedManLoadedEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiRequestCarControlChangeEvent> >(const GuiEventOut<BrnGui::GuiRequestCarControlChangeEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventLeftPostEventState> >(const GuiEventOut<CgsGui::GuiEvent<292> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiCarSelectionRequest> >(const GuiEventOut<BrnGui::GuiCarSelectionRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiCustomEventHostEasyDriveStartEvent> >(const GuiEventOut<CgsGui::GuiEvent<173> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingFinished> >(const GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingFinished> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingStarted> >(const GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingStarted> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkLoadingScreenShown> >(const GuiEventOut<CgsGui::GuiEvent<279> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventLoadingScreenLoaded> >(const GuiEventOut<CgsGui::GuiEvent<93> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiSnapShotRequested> >(const GuiEventOut<BrnGui::GuiSnapShotRequested> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestGamercardEvent> >(const GuiEventOut<BrnGui::GuiEventScoreboardRequestGamercardEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRunFsm> >(const GuiEventOut<BrnGui::GuiEventRunFsm> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventLeftPostEvent> >(const GuiEventOut<CgsGui::GuiEvent<291> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventLeavePostEvent> >(const GuiEventOut<CgsGui::GuiEvent<290> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiSaveLoadImageExportRequested> >(const GuiEventOut<BrnGui::GuiSaveLoadImageExportRequested> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCustomMatchJoin> >(const GuiEventOut<BrnGui::GuiEventNetworkCustomMatchJoin> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSettingsUpdate> >(const GuiEventOut<BrnGui::GuiEventNetworkSettingsUpdate> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventControllerSettings> >(const GuiEventOut<BrnGui::GuiEventControllerSettings> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventDirectorSettings> >(const GuiEventOut<BrnGui::GuiEventDirectorSettings> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventGameOptionsSettings> >(const GuiEventOut<BrnGui::GuiEventGameOptionsSettings> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventNetworkStartPressed> >(const GuiEventOut<CgsGui::GuiEvent<54> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkChangeTeams> >(const GuiEventOut<CgsGui::GuiEvent<263> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventNetworkLeaveGame> >(const GuiEventOut<CgsGui::GuiEvent<52> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStreamingComplete> >(const GuiEventOut<CgsGui::GuiEvent<133> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxAdvanceTrack> >(const GuiEventOut<CgsGui::GuiEvent<456> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkFinishRound> >(const GuiEventOut<CgsGui::GuiEvent<247> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCreateGame> >(const GuiEventOut<BrnGui::GuiEventNetworkCreateGame> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventMapCursorStatus> >(const GuiEventOut<BrnGui::GuiEventMapCursorStatus> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<183> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<184> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<184>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:5766
	typedef GuiEvent<184> GuiOverlayFullInfoRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<184>,40>::GuiOverlayFullInfoRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<184>,40>::GuiOverlayFullInfoRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiOverlayShowingNotification,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiOverlayShowingNotification mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiOverlayShowingNotification &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiOverlayCompleteEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiOverlayCompleteEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiOverlayCompleteEvent &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayCompleteEvent> >(const GuiEventOut<BrnGui::GuiOverlayCompleteEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayFullInfoRequest> >(const GuiEventOut<CgsGui::GuiEvent<184> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayShowingNotification> >(const GuiEventOut<BrnGui::GuiOverlayShowingNotification> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<47> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<48> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<504> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<505> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<524> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<140> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<161> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<296> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<298> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<300> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<538> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<454> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<455> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<459> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<461> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<463> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<471> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<472> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<473> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<400> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<77> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<516> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<517> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<518> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<572> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<573> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<80> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<49> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<326> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<139> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<122> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiReplaySetModeEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiReplaySetModeEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiReplaySetModeEvent &);

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<259> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<143> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<302> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<293> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioGenericSequence,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioGenericSequence mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioGenericSequence &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPostEventFreeCarSequenceStart,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPostEventFreeCarSequenceStart mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPostEventFreeCarSequenceStart &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPostEventRankUpSequenceStart,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPostEventRankUpSequenceStart mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPostEventRankUpSequenceStart &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPostEventNewRivalSequenceStart,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPostEventNewRivalSequenceStart mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPostEventNewRivalSequenceStart &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventPreraceTriggerExit,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventPreraceTriggerExit mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventPreraceTriggerExit &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioEventIntros,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioEventIntros mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioEventIntros &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<80>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:524
	typedef GuiEvent<80> GuiEventLeavingJunkyard;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<80>,40>::GuiEventLeavingJunkyard mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<80>,40>::GuiEventLeavingJunkyard &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiPlayerCarColourRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiPlayerCarColourRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiPlayerCarColourRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiCarUnlockedLiveryRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiCarUnlockedLiveryRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiCarUnlockedLiveryRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiChangePlayerCarColourEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiChangePlayerCarColourEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiChangePlayerCarColourEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiPlayerInfoRequest,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiPlayerInfoRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiPlayerInfoRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiCarUnlockTickerClosed,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiCarUnlockTickerClosed mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiCarUnlockTickerClosed &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<49>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:427
	typedef GuiEvent<49> GuiEventCancelLogin;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<49>,40>::GuiEventCancelLogin mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<49>,40>::GuiEventCancelLogin &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkConnect,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventNetworkConnect mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventNetworkConnect &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventAnswerLoginQuestion,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAnswerLoginQuestion mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAnswerLoginQuestion &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<326>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:1295
	typedef GuiEvent<326> GuiEventRoadRuleBatchDataRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<326>,40>::GuiEventRoadRuleBatchDataRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<326>,40>::GuiEventRoadRuleBatchDataRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventSetHoveredEventIcon,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventSetHoveredEventIcon mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventSetHoveredEventIcon &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventFilterEventIcons,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventFilterEventIcons mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventFilterEventIcons &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<139>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:808
	typedef GuiEvent<139> GuiEventKeyboardRequest;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<139>,40>::GuiEventKeyboardRequest mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<139>,40>::GuiEventKeyboardRequest &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventCustomeEventDelete,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventCustomeEventDelete mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventCustomeEventDelete &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventCustomeEventCreate,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventCustomeEventCreate mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventCustomeEventCreate &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAcceptEventStart,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAcceptEventStart mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAcceptEventStart &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiRequestCarUnlockEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiRequestCarUnlockEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiRequestCarUnlockEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventClearScreenSet,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventClearScreenSet mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventClearScreenSet &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioTraxPreview,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioTraxPreview mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioTraxPreview &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<122>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:6452
	typedef GuiEvent<122> GuiEventOnlineRequestAccountSettings;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<122>,40>::GuiEventOnlineRequestAccountSettings mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<122>,40>::GuiEventOnlineRequestAccountSettings &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineAccountUpdate,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventOnlineAccountUpdate mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventOnlineAccountUpdate &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventColourCalibrationScreenShow,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventColourCalibrationScreenShow mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventColourCalibrationScreenShow &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventColourCalibrationScreenHide,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventColourCalibrationScreenHide mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventColourCalibrationScreenHide &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiOptionsBrightnessContrast,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiOptionsBrightnessContrast mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiOptionsBrightnessContrast &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventEnableAutoSave,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventEnableAutoSave mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventEnableAutoSave &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventQueryTickerStatus,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventQueryTickerStatus mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventQueryTickerStatus &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioTraxUpdate,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioTraxUpdate mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioTraxUpdate &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioTraxPlayOrder,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioTraxPlayOrder mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioTraxPlayOrder &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventEnterCredits,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventEnterCredits mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventEnterCredits &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventLeaveCredits,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventLeaveCredits mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventLeaveCredits &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiReplayPlayReelEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiReplayPlayReelEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiReplayPlayReelEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiReplayDeleteReelEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiReplayDeleteReelEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiReplayDeleteReelEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiReplayStopPlayingReelEvent,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiReplayStopPlayingReelEvent mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiReplayStopPlayingReelEvent &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<259>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2907
	typedef GuiEvent<259> GuiEventNetworkReadyToJoinGameSession;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<259>,40>::GuiEventNetworkReadyToJoinGameSession mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<259>,40>::GuiEventNetworkReadyToJoinGameSession &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<143>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:952
	typedef GuiEvent<143> GuiEventStartedGame;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<143>,40>::GuiEventStartedGame mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<143>,40>::GuiEventStartedGame &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDirectorNewProfileIntroStart,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDirectorNewProfileIntroStart mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDirectorNewProfileIntroStart &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioTraxLastPlayedIndexes,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioTraxLastPlayedIndexes mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioTraxLastPlayedIndexes &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDirectorFlybyStart,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDirectorFlybyStart mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDirectorFlybyStart &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDirectorFlybyFinish,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDirectorFlybyFinish mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDirectorFlybyFinish &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventAudioVoiceOver,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventAudioVoiceOver mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventAudioVoiceOver &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEvent100PerCentComplete,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEvent100PerCentComplete mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEvent100PerCentComplete &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<302>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:2451
	typedef GuiEvent<302> GuiEventPostEventCompletionSequenceInProgess;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<302>,40>::GuiEventPostEventCompletionSequenceInProgess mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<302>,40>::GuiEventPostEventCompletionSequenceInProgess &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<293>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// BrnGuiEventTypeDefs.h:241
	typedef GuiEvent<293> GuiHudMessageAllFinshedShowingRivalShutdown;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<293>,40>::GuiHudMessageAllFinshedShowingRivalShutdown mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<293>,40>::GuiHudMessageAllFinshedShowingRivalShutdown &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventCarbonCarSequence,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventCarbonCarSequence mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventCarbonCarSequence &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioGenericSequence> >(const GuiEventOut<BrnGui::GuiEventAudioGenericSequence> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPostEventFreeCarSequenceStart> >(const GuiEventOut<BrnGui::GuiEventPostEventFreeCarSequenceStart> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPostEventCompletionSequenceInProgess> >(const GuiEventOut<CgsGui::GuiEvent<302> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxUpdate> >(const GuiEventOut<BrnGui::GuiEventAudioTraxUpdate> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxLastPlayedIndexes> >(const GuiEventOut<BrnGui::GuiEventAudioTraxLastPlayedIndexes> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxPlayOrder> >(const GuiEventOut<BrnGui::GuiEventAudioTraxPlayOrder> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOptionsBrightnessContrast> >(const GuiEventOut<BrnGui::GuiOptionsBrightnessContrast> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiReplayStopPlayingReelEvent> >(const GuiEventOut<BrnGui::GuiReplayStopPlayingReelEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiReplayDeleteReelEvent> >(const GuiEventOut<BrnGui::GuiReplayDeleteReelEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiReplayPlayReelEvent> >(const GuiEventOut<BrnGui::GuiReplayPlayReelEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventEnterCredits> >(const GuiEventOut<BrnGui::GuiEventEnterCredits> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxPreview> >(const GuiEventOut<BrnGui::GuiEventAudioTraxPreview> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventEnableAutoSave> >(const GuiEventOut<BrnGui::GuiEventEnableAutoSave> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineRequestAccountSettings> >(const GuiEventOut<CgsGui::GuiEvent<122> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventClearScreenSet> >(const GuiEventOut<CgsGui::GuiEventClearScreenSet> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventKeyboardRequest> >(const GuiEventOut<CgsGui::GuiEvent<139> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAcceptEventStart> >(const GuiEventOut<BrnGui::GuiEventAcceptEventStart> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventFilterEventIcons> >(const GuiOutViewState<BrnGui::GuiEventFilterEventIcons> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventAnswerLoginQuestion> >(const GuiEventOut<CgsGui::GuiEventAnswerLoginQuestion> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventCancelLogin> >(const GuiEventOut<CgsGui::GuiEvent<49> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChangePlayerCarColourEvent> >(const GuiEventOut<BrnGui::GuiChangePlayerCarColourEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiCarUnlockedLiveryRequest> >(const GuiEventOut<BrnGui::GuiCarUnlockedLiveryRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiPlayerCarColourRequest> >(const GuiEventOut<BrnGui::GuiPlayerCarColourRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioEventIntros> >(const GuiEventOut<BrnGui::GuiEventAudioEventIntros> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiReplaySetModeEvent> >(const GuiEventOut<BrnGui::GuiReplaySetModeEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventCarbonCarSequence> >(const GuiEventOut<BrnGui::GuiEventCarbonCarSequence> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventSetHoveredEventIcon> >(const GuiOutViewState<BrnGui::GuiEventSetHoveredEventIcon> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventColourCalibrationScreenShow> >(const GuiEventOut<BrnGui::GuiEventColourCalibrationScreenShow> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventColourCalibrationScreenHide> >(const GuiEventOut<BrnGui::GuiEventColourCalibrationScreenHide> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiPlayerInfoRequest> >(const GuiEventOut<BrnGui::GuiPlayerInfoRequest> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventAudioVoiceOver> >(const GuiEventOut<BrnGui::GuiEventAudioVoiceOver> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPostEventRankUpSequenceStart> >(const GuiEventOut<BrnGui::GuiEventPostEventRankUpSequenceStart> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventLeavingJunkyard> >(const GuiEventOut<CgsGui::GuiEvent<80> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventLeaveCredits> >(const GuiEventOut<BrnGui::GuiEventLeaveCredits> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEvent100PerCentComplete> >(const GuiEventOut<BrnGui::GuiEvent100PerCentComplete> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiHudMessageAllFinshedShowingRivalShutdown> >(const GuiEventOut<CgsGui::GuiEvent<293> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventQueryTickerStatus> >(const GuiEventOut<BrnGui::GuiEventQueryTickerStatus> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkReadyToJoinGameSession> >(const GuiEventOut<CgsGui::GuiEvent<259> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStartedGame> >(const GuiEventOut<CgsGui::GuiEvent<143> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkConnect> >(const GuiEventOut<BrnGui::GuiEventNetworkConnect> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiRequestCarUnlockEvent> >(const GuiEventOut<BrnGui::GuiRequestCarUnlockEvent> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineAccountUpdate> >(const GuiEventOut<BrnGui::GuiEventOnlineAccountUpdate> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPostEventNewRivalSequenceStart> >(const GuiEventOut<BrnGui::GuiEventPostEventNewRivalSequenceStart> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventPreraceTriggerExit> >(const GuiEventOut<BrnGui::GuiEventPreraceTriggerExit> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiCarUnlockTickerClosed> >(const GuiEventOut<BrnGui::GuiCarUnlockTickerClosed> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleBatchDataRequest> >(const GuiEventOut<CgsGui::GuiEvent<326> > &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventCustomeEventDelete> >(const GuiEventOut<BrnGui::GuiEventCustomeEventDelete> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventCustomeEventCreate> >(const GuiEventOut<BrnGui::GuiEventCustomeEventCreate> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventDirectorNewProfileIntroStart> >(const GuiEventOut<BrnGui::GuiEventDirectorNewProfileIntroStart> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventDirectorFlybyStart> >(const GuiEventOut<BrnGui::GuiEventDirectorFlybyStart> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventDirectorFlybyFinish> >(const GuiEventOut<BrnGui::GuiEventDirectorFlybyFinish> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiEvent.h:35
	const int32_t KI_INPUT_QUEUE_SIZE_KB = 32768;

	// CgsGuiEvent.h:36
	const int32_t KI_LARGE_QUEUE_SIZE_KB = 65536;

	// CgsGuiEvent.h:37
	const int32_t KI_MEDIUM_QUEUE_SIZE_KB = 16384;

	// CgsGuiEvent.h:38
	const int32_t KI_SMALL_QUEUE_SIZE_KB = 4096;

	// CgsGuiEvent.h:39
	const int32_t KI_TINY_QUEUE_SIZE_KB = 256;

	// CgsGuiEvent.h:40
	const int32_t KI_QUEUE_ALIGNMENT = 16;

	// CgsGuiEvent.h:41
	const int32_t KI_MAX_OBSERVERS = 4;

	// CgsGuiEvent.h:42
	const int32_t KI_MAX_EVENTS_PER_OBSERVER = 576;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<1> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<27> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<29> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<31> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<33> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<62> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<43> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<500> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<496> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<348> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<350> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<492> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<493> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<555> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<67> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<68> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<154> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<230> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<286> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<224> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<225> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<228> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<501> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<487> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<226> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<227> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<90> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<349> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<66> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<69> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventMapIconStatus,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventMapIconStatus mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventMapIconStatus &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadSignIconStatus,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventRoadSignIconStatus mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventRoadSignIconStatus &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDrawEventIcons,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDrawEventIcons mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDrawEventIcons &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<BrnGui::GuiEventDrawEventIcons,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventDrawEventIcons mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventDrawEventIcons &);

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventDrawEventIcons> >(const GuiOutViewState<BrnGui::GuiEventDrawEventIcons> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventDrawEventIcons> >(const GuiOutInternalEvent<BrnGui::GuiEventDrawEventIcons> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadSignIconStatus> >(const GuiEventOut<BrnGui::GuiEventRoadSignIconStatus> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventMapIconStatus> >(const GuiEventOut<BrnGui::GuiEventMapIconStatus> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSaveLoadState>(const GuiEventSaveLoadState &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:877
	typedef GuiEvent<66> GuiEventSaveLoadState;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventVideoState>(const GuiEventVideoState &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:880
	typedef GuiEvent<69> GuiEventVideoState;

}

// CgsGuiEvent.h:468
extern bool AppendGuiQueue<16384, 16>(const const GuiEventQueueBase<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<32768,16>::Append<16384, 16>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::CalculateRoute>(const CalculateRoute &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOverlayFullInfoResponse>(const GuiOverlayFullInfoResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiOverlayInternalRequestEvent>(const GuiOverlayInternalRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiHudMessageTerminate>(const GuiHudMessageTerminate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:5681
	typedef GuiEvent<154> GuiHudMessageTerminate;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<const BrnGui::GuiHudMessage>(const const GuiHudMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventSatNavParameters>(const GuiEventSatNavParameters &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEATraxNewTrackEvent>(const GuiEATraxNewTrackEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventDebugShowCarSelect>(const GuiEventDebugShowCarSelect &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:1517
	typedef GuiEvent<227> GuiEventDebugShowCarSelect;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventDebugShowCrashNav>(const GuiEventDebugShowCrashNav &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:1516
	typedef GuiEvent<226> GuiEventDebugShowCrashNav;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXHookCloseMenuEvent>(const GuiPFXHookCloseMenuEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:6024
	typedef GuiEvent<487> GuiPFXHookCloseMenuEvent;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventDebugGoToVideo>(const GuiEventDebugGoToVideo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:224
	typedef GuiEvent<501> GuiEventDebugGoToVideo;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventGenericHUDPriorityToggle>(const GuiEventGenericHUDPriorityToggle &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:2897
	typedef GuiEvent<228> GuiEventGenericHUDPriorityToggle;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiViewEventFontCharSpacing>(const GuiViewEventFontCharSpacing &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventFontEffectRotate>(const GuiEventFontEffectRotate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:2895
	typedef GuiEvent<225> GuiEventFontEffectRotate;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventFontRotate>(const GuiEventFontRotate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:2894
	typedef GuiEvent<224> GuiEventFontRotate;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTriggerOfflinePostEvent>(const GuiEventTriggerOfflinePostEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:1512
	typedef GuiEvent<289> GuiEventTriggerOfflinePostEvent;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTriggerIntro>(const GuiEventTriggerIntro &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:1509
	typedef GuiEvent<286> GuiEventTriggerIntro;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXHookEnumEvent>(const GuiPFXHookEnumEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:6034
	typedef GuiEvent<490> GuiPFXHookEnumEvent;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<90> >(const GuiEvent<90> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAudioTraxUpdate>(const GuiEventAudioTraxUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAudioTraxLastPlayedIndexes>(const GuiEventAudioTraxLastPlayedIndexes &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAudioSettings>(const GuiEventAudioSettings &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventVoipSettings>(const GuiEventVoipSettings &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAudioTraxPlayOrder>(const GuiEventAudioTraxPlayOrder &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventControllerSettings>(const GuiEventControllerSettings &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventGameOptionsSettings>(const GuiEventGameOptionsSettings &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkSettingsUpdate>(const GuiEventNetworkSettingsUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiSaveLoadOperationStarted>(const GuiSaveLoadOperationStarted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiAutosaveShowIcon>(const GuiAutosaveShowIcon &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiResetProfileEvent>(const GuiResetProfileEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:3439
	typedef GuiEvent<349> GuiResetProfileEvent;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventProgressionProfileLoaded>(const GuiEventProgressionProfileLoaded &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventLiveRevengeProfileLoaded>(const GuiEventLiveRevengeProfileLoaded &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventPlayAptLoadingMovie>(const GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAutosaveCompleted>(const GuiEventAutosaveCompleted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventImageFilesLoaded>(const GuiEventImageFilesLoaded &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiSaveLoadOperationCompleted>(const GuiSaveLoadOperationCompleted &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEndGameEvent>(const GuiEndGameEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<const CgsGui::GuiEventLoadRequest>(const const GuiEventLoadRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiPFXHookEnumeration>(const GuiPFXHookEnumeration &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventKeyboardResponse>(const GuiEventKeyboardResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventRequestTraining>(const GuiEventRequestTraining &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventGetLanguage>(const GuiEventGetLanguage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCache>(const GuiEventCache &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(const GuiEventPlayMusicOnMenuStream &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventFinishedVideo>(const GuiEventFinishedVideo &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkQuickMatch>(const GuiEventNetworkQuickMatch &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<12> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<13> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<53> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<46> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(const GuiEventNetworkCustomMatchResults &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkLeavingGameFailed>(const GuiEventNetworkLeavingGameFailed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiNetworkPlayerBattlingEvent>(const GuiNetworkPlayerBattlingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(const GuiEventAddLocalisedTextPointer &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(const GuiEventNetworkNewsAndTOS &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventNetworkConnected>(const GuiEventNetworkConnected &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventNetworkDisconnected>(const GuiEventNetworkDisconnected &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventNetworkInGame>(const GuiEventNetworkInGame &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(const GuiEventNetworkInGameFailed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<46> >(const GuiEvent<46> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventNetworkLaunched>(const GuiEventNetworkLaunched &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEvent<53> >(const GuiEvent<53> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(const GuiEventNetworkPlayerStats &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventShowLoginQuestion>(const GuiEventShowLoginQuestion &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventCamStatus>(const GuiEventCamStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<30> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<462> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<503> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<494> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventAudioVoiceOverFinished>(const GuiEventAudioVoiceOverFinished &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventRequestLanguage>(const GuiEventRequestLanguage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiVideoVolumeEvent>(const GuiVideoVolumeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiClassicalChyronEvent>(const GuiClassicalChyronEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiStreamStartedEvent>(const GuiStreamStartedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:6102
	typedef GuiEvent<494> GuiStreamStartedEvent;

}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiEventTrafficPoolEmptied>(const GuiEventTrafficPoolEmptied &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:468
extern bool AppendGuiQueue<32768, 16>(const const GuiEventQueueBase<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<BrnGui::GuiRemovedTrafficEvent>(const GuiRemovedTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<2> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<3> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<32> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<34> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<35> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<36> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<37> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<38> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:58
struct CgsGui::GuiEvent<-0x00000000000000001> : public Event {
public:
	// CgsGuiEvent.h:265
	int32_t GetEventType() const;

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// Unknown accessibility
	// CgsGuiEventTypeDefs.h:52
	typedef GuiEvent<-0x00000000000000001> GuiEventInvalid;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GuiEventInvalid mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GuiEventInvalid &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,41> : public GuiEvent<41> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GuiEventInvalid mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GuiEventInvalid &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,42> : public GuiEvent<42> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GuiEventInvalid mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40>::GuiEventInvalid &);

}

// CgsGuiEvent.h:77
struct CgsGui::GuiEventWrapper<CgsGui::GuiEventStateChange,40> : public GuiEvent<40> {
	// CgsGuiEvent.h:80
	int32_t miOutEventSize;

	// CgsGuiEvent.h:81
	int32_t miOutEventType;

private:
	// CgsGuiEvent.h:93
	int32_t miOutEventOffset;

	// CgsGuiEvent.h:94
	GuiEventStateChange mOutEvent;

public:
	// CgsGuiEvent.h:238
	const CgsModule::Event * GetRawEvent() const;

	// CgsGuiEvent.h:217
	void SetRawEvent(GuiEventStateChange &);

}

// CgsGuiEvent.h:450
extern bool Append<32768, 16>(const const VariableEventQueue<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventOut<CgsGui::GuiEventStateChange> >(const GuiEventOut<CgsGui::GuiEventStateChange> &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventPriorityStopBlocking>(const GuiEventPriorityStopBlocking &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventPriorityUnRegisterForEvents>(const GuiEventPriorityUnRegisterForEvents &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventPriorityRegisterForEvents>(const GuiEventPriorityRegisterForEvents &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventUnRegisterForEvents>(const GuiEventUnRegisterForEvents &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventRegisterForEvents>(const GuiEventRegisterForEvents &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:486
extern bool AppendGuiQueueSafe<32768, 16>(const const GuiEventQueueBase<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:486
extern bool AppendGuiQueueSafe<65536, 16>(const const GuiEventQueueBase<65536,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventLoadingScreenState>(const GuiEventLoadingScreenState &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:450
extern bool Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:468
extern bool AppendGuiQueue<65536, 16>(const const GuiEventQueueBase<65536,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:450
extern bool Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventSoundTrigger>(const GuiEventSoundTrigger &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventAptTrigger>(const GuiEventAptTrigger &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventUnloadRequestNotification>(const GuiEventUnloadRequestNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventLoadNotification>(const GuiEventLoadNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventUnloadNotification>(const GuiEventUnloadNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventSetCircleButtonConfig>(const GuiEventSetCircleButtonConfig &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventLocalisedTextPointerRemoved>(const GuiEventLocalisedTextPointerRemoved &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventSetSku>(const GuiEventSetSku &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEvent.h:378
extern void AddGuiEvent<CgsGui::GuiEventSetLanguageNotification>(const GuiEventSetLanguageNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiEvent.h:35
	const int32_t KI_INPUT_QUEUE_SIZE_KB = 32768;

	// CgsGuiEvent.h:36
	const int32_t KI_LARGE_QUEUE_SIZE_KB = 65536;

	// CgsGuiEvent.h:37
	const int32_t KI_MEDIUM_QUEUE_SIZE_KB = 16384;

	// CgsGuiEvent.h:38
	const int32_t KI_SMALL_QUEUE_SIZE_KB = 4096;

	// CgsGuiEvent.h:39
	const int32_t KI_TINY_QUEUE_SIZE_KB = 256;

	// CgsGuiEvent.h:40
	const int32_t KI_QUEUE_ALIGNMENT = 16;

	// CgsGuiEvent.h:41
	const int32_t KI_MAX_OBSERVERS = 4;

	// CgsGuiEvent.h:42
	const int32_t KI_MAX_EVENTS_PER_OBSERVER = 576;

}

