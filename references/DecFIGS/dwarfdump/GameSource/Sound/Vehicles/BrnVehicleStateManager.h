// BrnVehicleStateManager.h:62
extern const uint32_t KU_MAXIMUM_ADDED_REGISTRIES = 128;

// BrnVehicleStateManager.h:121
extern uint8_t[8] msaAIEngineAssignement;

// BrnVehicleStateManager.h:39
struct BrnSound::Vehicles::VehicleStateManager : public BrnSound::Logic::BrnStateManager {
	// BrnVehicleStateManager.h:62
	extern const uint32_t KU_MAXIMUM_ADDED_REGISTRIES = 128;

	// BrnVehicleStateManager.cpp:35
	extern CgsID[128] maAddedRegistryIDs;

	// BrnVehicleStateManager.cpp:36
	extern CgsID[8] mDesiredAssetIDs;

	// BrnVehicleStateManager.cpp:38
	extern const VehicleListEntry *[8] mDesiredVehicleEntries;

	// BrnVehicleStateManager.cpp:37
	extern CgsID[8] maLoadedAssets;

	// BrnVehicleStateManager.cpp:40
	extern BitArray<8u> mAddedEntries;

	// BrnVehicleStateManager.cpp:41
	extern BitArray<8u> mLoadedEntries;

	// BrnVehicleStateManager.cpp:43
	extern BitArray<8u> mLoadedIsPlayer;

	// BrnVehicleStateManager.cpp:44
	extern BitArray<8u> mDesiredIsPlayer;

	// BrnVehicleStateManager.cpp:46
	extern uint32_t muAddedRegistryCount;

protected:
	// BrnVehicleStateManager.cpp:48
	extern uint8_t[8] msaAIEngineAssignement;

public:
	void VehicleStateManager(const VehicleStateManager &);

	// BrnVehicleStateManager.cpp:82
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleStateManager.cpp:84
		using namespace CgsSound::Logic;

	}

	// BrnVehicleStateManager.cpp:100
	virtual bool IsStateAlias(int32_t);

	// BrnVehicleStateManager.cpp:422
	void AddRegistry(const char *, bool);

	// BrnVehicleStateManager.cpp:125
	bool AddEntry(CgsID, const VehicleListEntry *, uint64_t, bool);

	// BrnVehicleStateManager.cpp:170
	bool RemoveEntry(CgsID, uint64_t);

	// BrnVehicleStateManager.cpp:208
	// Declaration
	void OnAssetUnloaded(CgsID, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleStateManager.cpp:230
		using namespace BrnWorld::RaceCarEntityModuleIO;

	}

	// BrnVehicleStateManager.cpp:261
	// Declaration
	void OnAssetLoaded(CgsID, int32_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleStateManager.cpp:293
		using namespace BrnWorld::RaceCarEntityModuleIO;

	}

	// BrnVehicleStateManager.h:141
	uint8_t GetAIEngineAssignment(int32_t);

protected:
	// BrnVehicleStateManager.cpp:335
	// Declaration
	uint8_t GenerateAIEngineAssignment(const VehicleListEntry *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleStateManager.cpp:345
		using namespace CgsDev::Message;

	}

	// BrnVehicleStateManager.h:131
	void VehicleStateManager();

public:
	virtual void ~VehicleStateManager();

}

// BrnVehicleStateManager.h:39
void BrnSound::Vehicles::VehicleStateManager::~VehicleStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

