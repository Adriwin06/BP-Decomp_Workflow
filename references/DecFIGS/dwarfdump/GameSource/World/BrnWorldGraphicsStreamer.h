// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct WorldGraphicsStreamer {
	public:
		// BrnWorldGraphicsStreamer.h:102
		InstanceList * GetInstanceList(int32_t);

	}

}

// BrnWorldGraphicsStreamer.h:45
struct BrnWorld::WorldGraphicsStreamer : public BrnWorld::BaseStreamer<32> {
private:
	// BrnWorldGraphicsStreamer.h:85
	BrnWorld::WorldEntityModule * mpWorldEntityModule;

	// BrnWorldGraphicsStreamer.h:86
	ResourcePtr<CgsGraphics::InstanceList>[32] mpInstanceLists;

public:
	// BrnWorldGraphicsStreamer.cpp:41
	void Construct(BrnWorld::WorldEntityModule *);

	// BrnWorldGraphicsStreamer.h:102
	InstanceList * GetInstanceList(int32_t);

	// BrnWorldGraphicsStreamer.cpp:169
	int32_t GetIndexFromId(int32_t);

	// BrnWorldGraphicsStreamer.cpp:198
	bool IsListLoaded(int32_t) const;

protected:
	// BrnWorldGraphicsStreamer.cpp:64
	virtual int32_t QueryLoad(const StreamerTargetEntry *, int32_t);

	// BrnWorldGraphicsStreamer.cpp:80
	virtual int32_t QueryUnload(const StreamerTargetEntry *, int32_t);

	// BrnWorldGraphicsStreamer.cpp:95
	virtual void OnLoadBegin(int32_t);

	// BrnWorldGraphicsStreamer.cpp:109
	virtual void OnUnloadBegin(int32_t);

	// BrnWorldGraphicsStreamer.cpp:124
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnWorldGraphicsStreamer.cpp:148
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

}

// BrnWorldGraphicsStreamer.h:45
void BrnWorld::WorldGraphicsStreamer::~WorldGraphicsStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnWorldGraphicsStreamer.h:45
void BrnWorld::WorldGraphicsStreamer::WorldGraphicsStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

