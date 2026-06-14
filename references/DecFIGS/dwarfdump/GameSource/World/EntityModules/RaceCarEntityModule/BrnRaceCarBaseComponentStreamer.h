// BrnRaceCarBaseComponentStreamer.h:54
struct BrnWorld::RaceCarBaseComponentStreamer : public BrnWorld::BaseStreamer<8> {
protected:
	// BrnRaceCarBaseComponentStreamer.h:146
	CgsID[8] maDesiredAssets;

	// BrnRaceCarBaseComponentStreamer.h:147
	CgsID[8] maLoadedAssets;

	// BrnRaceCarBaseComponentStreamer.h:148
	BitArray<8u> mAddedEntries;

	// BrnRaceCarBaseComponentStreamer.h:149
	BitArray<8u> mLoadedEntries;

public:
	// BrnRaceCarBaseComponentStreamer.cpp:46
	void Construct(int32_t, bool, BrnResource::EAssetSet);

	// BrnRaceCarBaseComponentStreamer.cpp:70
	void Destruct();

	// BrnRaceCarBaseComponentStreamer.h:164
	void AddEntry(CgsID, int32_t);

	// BrnRaceCarBaseComponentStreamer.h:185
	void RemoveEntry(CgsID, int32_t);

	// BrnRaceCarBaseComponentStreamer.h:209
	void RemoveEntry(int32_t);

	// BrnRaceCarBaseComponentStreamer.h:229
	bool IsVehicleAssetLoaded(CgsID, int32_t);

	// BrnRaceCarBaseComponentStreamer.h:253
	CgsID GetDesiredAsset(int32_t) const;

	// BrnRaceCarBaseComponentStreamer.h:268
	CgsID GetLoadedAsset(int32_t) const;

protected:
	// BrnRaceCarBaseComponentStreamer.h:115
	virtual void OnAssetLoaded(int32_t, const GameDataAssetEvent *);

	// BrnRaceCarBaseComponentStreamer.h:120
	virtual void OnAssetUnloading(int32_t);

	// BrnRaceCarBaseComponentStreamer.cpp:89
	virtual int32_t QueryLoad(const StreamerTargetEntry *, int32_t);

	// BrnRaceCarBaseComponentStreamer.cpp:108
	virtual int32_t QueryUnload(const StreamerTargetEntry *, int32_t);

	// BrnRaceCarBaseComponentStreamer.cpp:123
	virtual void OnLoadBegin(int32_t);

	// BrnRaceCarBaseComponentStreamer.cpp:136
	virtual void OnUnloadBegin(int32_t);

	// BrnRaceCarBaseComponentStreamer.cpp:161
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnRaceCarBaseComponentStreamer.cpp:197
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnRaceCarBaseComponentStreamer.h:38
	extern LogChannelOutput gRaceCarLogOutput;

}

// BrnRaceCarBaseComponentStreamer.h:38
extern LogChannelOutput gRaceCarLogOutput;

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnRaceCarBaseComponentStreamer.h:38
	extern LogChannelOutput gRaceCarLogOutput;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnRaceCarBaseComponentStreamer.h:38
	extern LogChannelOutput gRaceCarLogOutput;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnRaceCarBaseComponentStreamer.h:38
	extern LogChannelOutput gRaceCarLogOutput;

}

// BrnRaceCarBaseComponentStreamer.h:54
void BrnWorld::RaceCarBaseComponentStreamer::RaceCarBaseComponentStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

