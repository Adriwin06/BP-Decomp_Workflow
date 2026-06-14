// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnSoundWorldScene.h:43
		namespace World {
			struct StaticSoundMapZone;

			// Declaration
			struct SoundWorldScene {
				// BrnSoundWorldScene.h:240
				struct QueryInfo {
					// BrnSoundWorldScene.h:260
					Road::Vector3 mQueryPos;

					// BrnSoundWorldScene.h:261
					float32_t mfRadius;

					// BrnSoundWorldScene.h:262
					BrnSound::World::StaticSoundEntity * mpEntitiesOut;

					// BrnSoundWorldScene.h:263
					int32_t miMaxEntities;

					// BrnSoundWorldScene.h:264
					int32_t miEntitiesWritten;

					// BrnSoundWorldScene.h:265
					bool mbDrawDebug;

				public:
					// BrnSoundWorldScene.h:254
					void Construct(Vector3, float32_t, BrnSound::World::StaticSoundEntity *, int32_t, bool);

				}

			}

			struct EmitterEffect;

			struct EmitterState;

			struct EmitterStateManager;

			struct Emitter3dControl;

		}

	}

	// BrnSoundWorldScene.h:32
	namespace World {
		struct SubRegionDescriptor;

	}

}

// BrnSoundWorldScene.h:64
struct BrnSound::Logic::World::StaticSoundMapZone {
private:
	// BrnSoundWorldScene.h:131
	ResourceHandle mHandle;

	// BrnSoundWorldScene.h:132
	Vector4 mPackedMinAndMax;

	// BrnSoundWorldScene.h:133
	uint16_t mu16Zone;

	// BrnSoundWorldScene.h:134
	bool mbPackedMinAndMax;

public:
	// BrnSoundWorldScene.h:74
	void Construct(uint16_t);

	// BrnSoundWorldScene.h:82
	bool Prepare(const ResourceHandle &);

	// BrnSoundWorldScene.h:89
	const ResourceHandle & GetResourceHandle() const;

	// BrnSoundWorldScene.h:96
	const Vector4 & GetPackedMinAndMax() const;

	// BrnSoundWorldScene.h:103
	uint16_t GetZone() const;

	// BrnSoundWorldScene.h:111
	void SetPackedMinAndMax(const Vector4Template<float> &);

	// BrnSoundWorldScene.h:118
	bool IsPrepared() const;

	// BrnSoundWorldScene.h:125
	bool HasPackedMinAndMax() const;

}

// BrnSoundWorldScene.h:151
struct BrnSound::Logic::World::SoundWorldScene : public BrnSound::Logic::IResourceRequester {
protected:
	// BrnSoundWorldScene.h:322
	extern const int32_t KI_MAX_WORLD_ZONES_LOADED = 32;

	// BrnSoundWorldScene.h:324
	StaticSoundMapZone[32] maSoundMapZones;

	// BrnSoundWorldScene.h:325
	int32_t miNumZonesInUse;

	// BrnSoundWorldScene.h:327
	BrnSound::Module::SoundLogicModule * mpLogicModule;

	// BrnSoundWorldScene.h:328
	const char8_t * mpcResourceExt;

	// BrnSoundWorldScene.h:330
	uint16_t mu16AcquiringZone;

	// BrnSoundWorldScene.h:331
	bool mbAcquireInProgress;

public:
	void SoundWorldScene();

	void SoundWorldScene(const BrnSound::Logic::World::SoundWorldScene &);

	// BrnSoundWorldScene.cpp:124
	void Construct();

	// BrnSoundWorldScene.cpp:143
	bool Prepare(BrnSound::Module::SoundLogicModule *, const char8_t *);

	// BrnSoundWorldScene.cpp:164
	bool Release();

	// BrnSoundWorldScene.cpp:184
	void Destruct();

	// BrnSoundWorldScene.cpp:201
	// Declaration
	void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundWorldScene.cpp:203
		using namespace Module::Io;

		// BrnSoundWorldScene.cpp:252
		using namespace CgsDev::Message;

	}

	// BrnSoundWorldScene.cpp:468
	// Declaration
	int32_t Query(Vector3, float32_t, BrnSound::World::StaticSoundEntity *, int32_t, bool) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundWorldScene.cpp:470
		using namespace Module::Io;

		// BrnSoundWorldScene.cpp:508
		using namespace CgsDev::Message;

	}

	// BrnSoundWorldScene.cpp:299
	// Declaration
	virtual void ResourcesAreReady() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundWorldScene.cpp:303
		using namespace CgsDev::Message;

	}

	// BrnSoundWorldScene.cpp:445
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

protected:
	// BrnSoundWorldScene.cpp:339
	// Declaration
	void HandleWorldZoneLoad(uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundWorldScene.cpp:343
		using namespace CgsDev::Message;

	}

	// BrnSoundWorldScene.cpp:366
	// Declaration
	void HandleWorldZoneUnload(uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundWorldScene.cpp:370
		using namespace CgsDev::Message;

	}

	// BrnSoundWorldScene.h:444
	void ResetLoader();

	// BrnSoundWorldScene.cpp:424
	const StaticSoundMap * GetZoneMap(int32_t) const;

	// BrnSoundWorldScene.cpp:528
	// Declaration
	void QuerySoundMap(BrnSound::Logic::World::SoundWorldScene::QueryInfo &, const StaticSoundMap *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundWorldScene.cpp:530
		using namespace World;

	}

	// BrnSoundWorldScene.cpp:607
	void DrawDebug(const StaticSoundEntity &) const;

}

// BrnSoundWorldScene.h:151
void BrnSound::Logic::World::SoundWorldScene::SoundWorldScene() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSoundWorldScene.h:322
extern const int32_t KI_MAX_WORLD_ZONES_LOADED = 32;

