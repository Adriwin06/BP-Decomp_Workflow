// BrnPlayerVehicleStateManager.h:51
struct BrnSound::Vehicles::PlayerVehicleStateManager : public BrnSound::Vehicles::VehicleStateManager {
protected:
	// BrnPlayerVehicleStateManager.cpp:40
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

private:
	// BrnPlayerVehicleStateManager.h:110
	SoundWorldScene mSoundScene;

	// BrnPlayerVehicleStateManager.h:112
	Content mCsisDeformationInterface;

	// BrnPlayerVehicleStateManager.h:113
	Content mCsisBoostInterface;

	// BrnPlayerVehicleStateManager.h:114
	Content mCsisSkidInterface;

	// BrnPlayerVehicleStateManager.h:115
	Content mCsisInAirInteface;

	// BrnPlayerVehicleStateManager.h:116
	Content mCsisSurfaces;

	// BrnPlayerVehicleStateManager.h:117
	Content mCsisTurbo;

	// BrnPlayerVehicleStateManager.h:118
	Content mCsisGearWhine;

public:
	void PlayerVehicleStateManager(const BrnSound::Vehicles::PlayerVehicleStateManager &);

	// BrnPlayerVehicleStateManager.cpp:40
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnPlayerVehicleStateManager.cpp:40
	virtual const char * GetTypeName() const;

	// BrnPlayerVehicleStateManager.h:52
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnPlayerVehicleStateManager.cpp:40
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnPlayerVehicleStateManager.cpp:52
	void PlayerVehicleStateManager();

	// BrnPlayerVehicleStateManager.cpp:83
	// Declaration
	virtual bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPlayerVehicleStateManager.cpp:85
		using namespace CgsSound::Logic;

	}

	// BrnPlayerVehicleStateManager.cpp:344
	virtual bool Release();

	// BrnPlayerVehicleStateManager.cpp:286
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPlayerVehicleStateManager.cpp:288
		using namespace CgsSound::Logic;

	}

	// BrnPlayerVehicleStateManager.cpp:363
	virtual void ResourcesAreReady();

	// BrnPlayerVehicleStateManager.cpp:408
	int32_t Query(Vector3, float32_t, BrnSound::World::StaticSoundEntity *, int32_t, bool) const;

	// BrnPlayerVehicleStateManager.h:101
	void FlattenQueue();

	virtual void ~PlayerVehicleStateManager();

}

// BrnPlayerVehicleStateManager.h:51
void BrnSound::Vehicles::PlayerVehicleStateManager::~PlayerVehicleStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

