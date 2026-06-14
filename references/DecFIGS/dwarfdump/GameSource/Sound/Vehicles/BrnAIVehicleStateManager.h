// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// Declaration
		struct AIVehicleStateManager {
			// BrnAIVehicleStateManager.h:112
			enum EAIEngineLoadingState {
				E_AI_ENGINE_LOADING_BEGIN = 0,
				E_AI_ENGINE_LOADING_WAITING_FOR_LOAD_ATTRIB = 1,
				E_AI_ENGINE_LOADING_BEGIN_LOADING_ENGINE_COMPONENTS = 2,
				E_AI_ENGINE_LOADING_WAITING_LOADING_ENGINE_COMPONENTS = 3,
				E_AI_ENGINE_LOADING_CREATING_CONTENT_SPECS = 4,
				E_AI_ENGINE_LOADING_WAITING_FOR_CONTENT_SPECS = 5,
				E_AI_ENGINE_LOADING_FINISHED = 6,
			}

		}

		// BrnAIVehicleStateManager.h:27
		const int32_t KI_NUMBER_OF_AUDIO_AI_ENGINES = 5;

	}

}

// BrnAIVehicleStateManager.h:40
struct BrnSound::Vehicles::AIVehicleStateManager : public BrnSound::Vehicles::VehicleStateManager {
protected:
	// BrnAIVehicleStateManager.cpp:61
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// Unknown accessibility
	// BrnAIVehicleStateManager.h:47
	extern const uint16_t KI_NUMBER_OF_AUDIO_AI_CAR_STATES = 3;

private:
	// BrnAIVehicleStateManager.h:126
	BrnSound::Vehicles::AIVehicleStateManager::EAIEngineLoadingState meAIEngineLoadingState;

	// BrnAIVehicleStateManager.h:128
	Content[5][10] maLoopContentSpecs;

	// BrnAIVehicleStateManager.h:129
	Content[5] maGinsuAccelContentSpecs;

	// BrnAIVehicleStateManager.h:130
	Content[5] maGinsuDecelContentSpecs;

public:
	void AIVehicleStateManager(const AIVehicleStateManager &);

	// BrnAIVehicleStateManager.cpp:61
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnAIVehicleStateManager.cpp:61
	virtual const char * GetTypeName() const;

	// BrnAIVehicleStateManager.h:41
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnAIVehicleStateManager.cpp:61
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnAIVehicleStateManager.cpp:78
	void AIVehicleStateManager();

	// BrnAIVehicleStateManager.cpp:97
	// Declaration
	virtual bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIVehicleStateManager.cpp:99
		using namespace CgsSound::Logic;

	}

	// BrnAIVehicleStateManager.cpp:378
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIVehicleStateManager.cpp:380
		using namespace CgsSound::Logic;

	}

	// BrnAIVehicleStateManager.cpp:540
	// Declaration
	virtual CgsSound::Logic::State * GetFreeState(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIVehicleStateManager.cpp:542
		using namespace CgsSound::Logic;

	}

	// BrnAIVehicleStateManager.cpp:351
	virtual void ResourcesAreReady();

	// BrnAIVehicleStateManager.h:148
	const CgsSound::Logic::Content * GetLoopModelContent(int32_t, uint32_t);

	// BrnAIVehicleStateManager.h:168
	const CgsSound::Logic::Content * GetAccelGinsuContent(int32_t);

	// BrnAIVehicleStateManager.h:186
	const CgsSound::Logic::Content * GetDecelGinsuContent(int32_t);

private:
	// BrnAIVehicleStateManager.cpp:614
	void UpdateVehicleLoading(EActiveRaceCarIndex);

	// BrnAIVehicleStateManager.cpp:167
	bool PrepareAIEngineLoading();

public:
	virtual void ~AIVehicleStateManager();

}

// BrnAIVehicleStateManager.h:40
void BrnSound::Vehicles::AIVehicleStateManager::~AIVehicleStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIVehicleStateManager.h:47
extern const uint16_t KI_NUMBER_OF_AUDIO_AI_CAR_STATES = 3;

