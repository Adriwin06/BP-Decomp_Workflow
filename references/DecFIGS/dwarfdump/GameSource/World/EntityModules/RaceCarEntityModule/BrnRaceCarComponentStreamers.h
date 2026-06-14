// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct RaceCarAudioStreamer {
		// BrnRaceCarComponentStreamers.h:268
		struct RaceCarStreamingSound {
			// BrnRaceCarComponentStreamers.h:271
			enum RaceCarStreamingSoundState {
				E_RACECARSTREAMINGSOUND_IDLE = 0,
				E_RACECARSTREAMINGSOUND_LOADINGBUNDLES = 1,
				E_RACECARSTREAMINGSOUND_LOADEDBUNDLES = 2,
				E_RACECARSTREAMINGSOUND_ATTACH = 3,
				E_RACECARSTREAMINGSOUND_ATTACHING = 4,
				E_RACECARSTREAMINGSOUND_ATTACHED = 5,
				E_RACECARSTREAMINGSOUND_LOADEDANDATTACHED = 6,
				E_RACECARSTREAMINGSOUND_DETACH = 7,
				E_RACECARSTREAMINGSOUND_DETACHING = 8,
				E_RACECARSTREAMINGSOUND_DETACHED = 9,
				E_RACECARSTREAMINGSOUND_UNLOADBUNDLES = 10,
				E_RACECARSTREAMINGSOUND_UNLOADINGBUNDLES = 11,
				E_RACECARSTREAMINGSOUND_COUNT = 12,
			}

			// BrnRaceCarComponentStreamers.h:289
			CgsID mDesiredId;

			// BrnRaceCarComponentStreamers.h:290
			CgsID mLoadedBundleId;

			// BrnRaceCarComponentStreamers.h:292
			BrnWorld::RaceCarAudioStreamer::RaceCarStreamingSound::RaceCarStreamingSoundState meState;

			// BrnRaceCarComponentStreamers.h:294
			int8_t miUserID;

			// BrnRaceCarComponentStreamers.h:296
			bool mbLoadedIsPlayer;

			// BrnRaceCarComponentStreamers.h:297
			bool mbDesiredIsPlayer;

		}

	}

}

// BrnRaceCarComponentStreamers.h:213
struct BrnWorld::RaceCarAudioStreamer : public BrnWorld::RaceCarBaseComponentStreamer {
private:
	// BrnRaceCarComponentStreamers.h:300
	BrnWorld::RaceCarAudioStreamer::RaceCarStreamingSound[8] maEntries;

	// BrnRaceCarComponentStreamers.h:302
	InputBuffer_PreScene::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

	// BrnRaceCarComponentStreamers.h:303
	RaceCarStreamer * mpStreamer;

public:
	// BrnRaceCarComponentStreamers.cpp:308
	void Construct(RaceCarStreamer *);

	// BrnRaceCarComponentStreamers.cpp:338
	void Destruct();

	// BrnRaceCarComponentStreamers.cpp:444
	// Declaration
	void Update(const InputBuffer_PreScene *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarComponentStreamers.cpp:446
		using namespace RaceCarEntityModuleIO;

	}

	// BrnRaceCarComponentStreamers.cpp:748
	bool AddEntry(CgsID, uint64_t, bool);

	// BrnRaceCarComponentStreamers.cpp:808
	// Declaration
	bool RemoveEntry(CgsID, uint64_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarComponentStreamers.cpp:810
		using namespace RaceCarEntityModuleIO;

	}

	// BrnRaceCarComponentStreamers.cpp:794
	bool RemoveEntry(uint64_t);

	// BrnRaceCarComponentStreamers.cpp:841
	bool IsVehicleAssetLoaded(CgsID, int32_t, bool);

private:
	// BrnRaceCarComponentStreamers.cpp:860
	// Declaration
	virtual void OnAssetUnloading(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarComponentStreamers.cpp:862
		using namespace RaceCarEntityModuleIO;

	}

	// BrnRaceCarComponentStreamers.cpp:419
	virtual void OnAssetLoaded(int32_t, const GameDataAssetEvent *);

	// BrnRaceCarComponentStreamers.cpp:355
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnRaceCarComponentStreamers.cpp:389
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

	// BrnRaceCarComponentStreamers.cpp:698
	// Declaration
	bool SendLoadRequest(BrnWorld::RaceCarAudioStreamer::RaceCarStreamingSound *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarComponentStreamers.cpp:706
		using namespace RaceCarEntityModuleIO;

	}

	// BrnRaceCarComponentStreamers.cpp:657
	// Declaration
	bool SendUnLoadRequest(BrnWorld::RaceCarAudioStreamer::RaceCarStreamingSound *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRaceCarComponentStreamers.cpp:662
		using namespace RaceCarEntityModuleIO;

	}

}

// BrnRaceCarComponentStreamers.h:170
struct BrnWorld::RaceCarWheelGraphicsStreamer : public BrnWorld::RaceCarBaseComponentStreamer {
private:
	// BrnRaceCarComponentStreamers.h:198
	RaceCarStreamer * mpStreamer;

public:
	// BrnRaceCarComponentStreamers.cpp:243
	void Construct(RaceCarStreamer *);

	// BrnRaceCarComponentStreamers.cpp:259
	void Destruct();

protected:
	// BrnRaceCarComponentStreamers.cpp:277
	virtual void OnAssetLoaded(int32_t, const GameDataAssetEvent *);

	// BrnRaceCarComponentStreamers.cpp:294
	virtual void OnAssetUnloading(int32_t);

}

// BrnRaceCarComponentStreamers.h:129
struct BrnWorld::RaceCarAttributeStreamer : public BrnWorld::RaceCarBaseComponentStreamer {
private:
	// BrnRaceCarComponentStreamers.h:157
	RaceCarStreamer * mpStreamer;

public:
	// BrnRaceCarComponentStreamers.cpp:181
	void Construct(RaceCarStreamer *);

	// BrnRaceCarComponentStreamers.cpp:198
	void Destruct();

protected:
	// BrnRaceCarComponentStreamers.cpp:216
	virtual void OnAssetLoaded(int32_t, const GameDataAssetEvent *);

	// BrnRaceCarComponentStreamers.cpp:229
	virtual void OnAssetUnloading(int32_t);

}

// BrnRaceCarComponentStreamers.h:87
struct BrnWorld::RaceCarPhysicsStreamer : public BrnWorld::RaceCarBaseComponentStreamer {
private:
	// BrnRaceCarComponentStreamers.h:116
	RaceCarStreamer * mpStreamer;

public:
	// BrnRaceCarComponentStreamers.cpp:114
	void Construct(RaceCarStreamer *);

	// BrnRaceCarComponentStreamers.cpp:130
	void Destruct();

protected:
	// BrnRaceCarComponentStreamers.cpp:148
	virtual void OnAssetLoaded(int32_t, const GameDataAssetEvent *);

	// BrnRaceCarComponentStreamers.cpp:165
	virtual void OnAssetUnloading(int32_t);

}

// BrnRaceCarComponentStreamers.h:47
struct BrnWorld::RaceCarGraphicsStreamer : public BrnWorld::RaceCarBaseComponentStreamer {
private:
	// BrnRaceCarComponentStreamers.h:74
	RaceCarStreamer * mpStreamer;

public:
	// BrnRaceCarComponentStreamers.cpp:50
	void Construct(RaceCarStreamer *);

	// BrnRaceCarComponentStreamers.cpp:66
	void Destruct();

protected:
	// BrnRaceCarComponentStreamers.cpp:84
	virtual void OnAssetLoaded(int32_t, const GameDataAssetEvent *);

	// BrnRaceCarComponentStreamers.cpp:101
	virtual void OnAssetUnloading(int32_t);

}

// BrnRaceCarComponentStreamers.h:47
void BrnWorld::RaceCarGraphicsStreamer::RaceCarGraphicsStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarComponentStreamers.h:129
void BrnWorld::RaceCarAttributeStreamer::RaceCarAttributeStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarComponentStreamers.h:87
void BrnWorld::RaceCarPhysicsStreamer::RaceCarPhysicsStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarComponentStreamers.h:170
void BrnWorld::RaceCarWheelGraphicsStreamer::RaceCarWheelGraphicsStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarComponentStreamers.h:213
void BrnWorld::RaceCarAudioStreamer::RaceCarAudioStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

