// BrnTrafficCarStreamer.h:172
extern const uint64_t KU_ASSET_RENDERED_FLAG = [0, 0, 0, 0, 0, 0, 0, 0];

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct TrafficCarStreamer {
	public:
		// BrnTrafficCarStreamer.h:199
		void ClearAssetList();

		// BrnTrafficCarStreamer.h:275
		bool AreAllAssetsUnloaded() const;

		// BrnTrafficCarStreamer.h:250
		bool AreAllAssetsLoaded() const;

		// BrnTrafficCarStreamer.h:234
		bool IsTrafficAssetLoaded(uint32_t) const;

		// BrnTrafficCarStreamer.h:318
		const GraphicsSpec * GetWheelGraphicsSpec(uint32_t) const;

		// BrnTrafficCarStreamer.h:299
		const GraphicsSpec * GetGraphicsSpec(uint32_t) const;

		// BrnTrafficCarStreamer.h:336
		void NotifyAssetRenderedThisFrame(uint32_t);

	private:
		// BrnTrafficCarStreamer.h:172
		extern const uint64_t KU_ASSET_RENDERED_FLAG = [0, 0, 0, 0, 0, 0, 0, 0];

	}

}

// BrnTrafficCarStreamer.h:54
struct BrnTraffic::TrafficCarStreamer : public BrnWorld::BaseStreamer<64> {
private:
	// BrnTrafficCarStreamer.h:172
	extern const uint64_t KU_ASSET_RENDERED_FLAG = [0, 0, 0, 0, 0, 0, 0, 0];

	// BrnTrafficCarStreamer.h:173
	extern const uint32_t KU_MAX_BONUS_ASSETS = 2;

	// BrnTrafficCarStreamer.h:179
	uint64_t[64] mauRenderingHistory;

	// BrnTrafficCarStreamer.h:180
	uint8_t[64] maxLoadFlags;

	// BrnTrafficCarStreamer.h:181
	uint8_t[64] mauLoadStates;

	// BrnTrafficCarStreamer.h:183
	CgsID[64] maAssetIds;

	// BrnTrafficCarStreamer.h:184
	ResourcePtr<BrnTraffic::GraphicsStub>[64] maGraphicsStubs;

	// BrnTrafficCarStreamer.h:186
	uint32_t muNumAssets;

public:
	// BrnTrafficCarStreamer.cpp:65
	void Construct();

	// BrnTrafficCarStreamer.cpp:94
	void Destruct();

	// BrnTrafficCarStreamer.cpp:109
	void SetAssetList(uint32_t, const VehicleAsset *);

	// BrnTrafficCarStreamer.h:199
	void ClearAssetList();

	// BrnTrafficCarStreamer.h:216
	void ClearRenderingHistory();

	// BrnTrafficCarStreamer.cpp:164
	void AddVehiclesToTargetList(uint32_t, const uint8_t *);

	// BrnTrafficCarStreamer.cpp:188
	void Update();

	// BrnTrafficCarStreamer.h:234
	bool IsTrafficAssetLoaded(uint32_t) const;

	// BrnTrafficCarStreamer.h:250
	bool AreAllAssetsLoaded() const;

	// BrnTrafficCarStreamer.h:275
	bool AreAllAssetsUnloaded() const;

	// BrnTrafficCarStreamer.h:299
	const GraphicsSpec * GetGraphicsSpec(uint32_t) const;

	// BrnTrafficCarStreamer.h:318
	const GraphicsSpec * GetWheelGraphicsSpec(uint32_t) const;

	// BrnTrafficCarStreamer.h:336
	void NotifyAssetRenderedThisFrame(uint32_t);

	// BrnTrafficCarStreamer.h:346
	CgsID GetAssetID(uint32_t);

protected:
	// BrnTrafficCarStreamer.cpp:247
	virtual int32_t QueryLoad(const StreamerTargetEntry *, int32_t);

	// BrnTrafficCarStreamer.cpp:263
	virtual int32_t QueryUnload(const StreamerTargetEntry *, int32_t);

	// BrnTrafficCarStreamer.cpp:278
	virtual void OnLoadBegin(int32_t);

	// BrnTrafficCarStreamer.cpp:300
	virtual void OnUnloadBegin(int32_t);

	// BrnTrafficCarStreamer.cpp:327
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnTrafficCarStreamer.cpp:360
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

}

// BrnTrafficCarStreamer.h:173
extern const uint32_t KU_MAX_BONUS_ASSETS = 2;

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct TrafficCarStreamer {
	public:
		~TrafficCarStreamer();

		TrafficCarStreamer();

	private:
		// BrnTrafficCarStreamer.h:172
		extern const uint64_t KU_ASSET_RENDERED_FLAG = [0, 0, 0, 0, 0, 0, 0, 0];

	}

}

// BrnTrafficCarStreamer.h:54
void BrnTraffic::TrafficCarStreamer::~TrafficCarStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficCarStreamer.h:54
void BrnTraffic::TrafficCarStreamer::TrafficCarStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

