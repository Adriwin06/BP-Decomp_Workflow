// BrnReplayDebugComponent.h:52
struct BrnReplays::DebugSerialiserInfo {
	// BrnReplayDebugComponent.h:54
	BrnReplays::BaseSerialiser::EMode meMode;

	// BrnReplayDebugComponent.h:55
	int32_t miBufferSize;

	// BrnReplayDebugComponent.h:56
	int32_t miStaticBufferSize;

	// BrnReplayDebugComponent.h:57
	int32_t miBufferUsed;

	// BrnReplayDebugComponent.h:58
	int32_t miBufferRead;

	// BrnReplayDebugComponent.h:59
	BrnReplays::ESerialiserId meId;

	// BrnReplayDebugComponent.h:60
	BrnReplays::ESerialiserContext meContext;

	// BrnReplayDebugComponent.h:61
	char[32] macName;

}

// BrnReplayDebugComponent.h:76
struct BrnReplays::DebugGraph {
	// BrnReplayDebugComponent.h:78
	char[256] macName;

	// BrnReplayDebugComponent.h:79
	float32_t mfMin;

	// BrnReplayDebugComponent.h:80
	float32_t mfMax;

	// BrnReplayDebugComponent.h:65
	typedef FixedRingBuffer<float32_t,256> GraphRingBuffer;

	// BrnReplayDebugComponent.h:81
	DebugGraph::GraphRingBuffer mBuffer;

}

// BrnReplayDebugComponent.h:93
struct BrnReplays::DebugComponent : public CgsDev::DebugComponent {
protected:
	// BrnReplayDebugComponent.h:120
	BrnReplays::ReplayModule * mpReplayModule;

	// BrnReplayDebugComponent.h:121
	rw::IResourceAllocator * mpAllocator;

	// BrnReplayDebugComponent.h:122
	DebugSerialiserInfo * mpSerialisers;

	// BrnReplayDebugComponent.h:123
	int32_t miMaxSerialisers;

	// BrnReplayDebugComponent.h:124
	int32_t miCurrSerialisers;

	// BrnReplayDebugComponent.h:125
	bool mbShowHud;

	// BrnReplayDebugComponent.h:127
	int32_t miWriteSlotsUsed;

	// BrnReplayDebugComponent.h:128
	int32_t miWriteBufferUsed;

	// BrnReplayDebugComponent.h:129
	DebugGraph * mpWriteSlotsUsedGraph;

	// BrnReplayDebugComponent.h:130
	DebugGraph * mpWriteBufferUsedGraph;

public:
	// BrnReplayDebugComponent.cpp:57
	void Construct(BrnReplays::ReplayModule *, rw::IResourceAllocator *);

	// BrnReplayDebugComponent.cpp:85
	void Destruct();

	// BrnReplayDebugComponent.cpp:91
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnReplayDebugComponent.cpp:718
	virtual void Update();

	// BrnReplayDebugComponent.cpp:724
	void PreUpdateRecord();

	// BrnReplayDebugComponent.cpp:755
	void PostUpdateRecord();

protected:
	// BrnReplayDebugComponent.cpp:113
	void RenderMainWindow(CgsDev::Debug2DImmediateRender *, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:152
	float32_t RenderTitle(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:167
	float32_t RenderStatus(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:212
	float32_t RenderWriteStreamStatus(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:271
	float32_t RenderReadStreamStatus(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:317
	float32_t RenderSerialisers(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:405
	float32_t RenderWriteStreamBlocks(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:493
	float32_t RenderReadStreamBlocks(CgsDev::Debug2DImmediateRender *, const Vector2Template<float> &, AISection::Vector2 *, AISection::Vector2 *);

	// BrnReplayDebugComponent.cpp:584
	void DrawText(CgsDev::Debug2DImmediateRender *, const char *, float32_t, float32_t, float32_t, RGBA);

	// BrnReplayDebugComponent.cpp:599
	void DrawInt32(CgsDev::Debug2DImmediateRender *, int32_t, float32_t, float32_t, float32_t, RGBA);

	// BrnReplayDebugComponent.cpp:613
	void DrawDataSize(CgsDev::Debug2DImmediateRender *, int32_t, float32_t, float32_t, float32_t, RGBA);

	// BrnReplayDebugComponent.cpp:649
	void DrawFraction(CgsDev::Debug2DImmediateRender *, int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// BrnReplayDebugComponent.cpp:661
	float32_t RenderGraph(CgsDev::Debug2DImmediateRender *, DebugGraph *, const Vector2Template<float> &, const Vector2Template<float> &);

	// BrnReplayDebugComponent.cpp:709
	void ClearGraph(DebugGraph *);

	// BrnReplayDebugComponent.cpp:775
	virtual void OnActivate();

	// BrnReplayDebugComponent.h:240
	virtual const char * GetName() const;

	// BrnReplayDebugComponent.h:243
	virtual const char * GetPath() const;

	// BrnReplayDebugComponent.h:246
	virtual bool IsSimple() const;

	// BrnReplayDebugComponent.cpp:801
	void StartPlayingCB(void *);

	// BrnReplayDebugComponent.cpp:807
	void StopPlayingCB(void *);

	// BrnReplayDebugComponent.cpp:813
	void StartRecordingCB(void *);

	// BrnReplayDebugComponent.cpp:819
	void StopRecordingCB(void *);

	// BrnReplayDebugComponent.cpp:825
	void MarkActionReplayCB(void *);

	// BrnReplayDebugComponent.cpp:831
	void StartActionReplayCB(void *);

	// BrnReplayDebugComponent.cpp:837
	void AutoStartChangeCB(void *, void *);

}

// BrnReplayDebugComponent.h:93
void BrnReplays::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

