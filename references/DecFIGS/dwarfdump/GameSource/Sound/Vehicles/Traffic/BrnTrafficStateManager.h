// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnTrafficStateManager.h:23
		namespace Traffic {
			// BrnTrafficStateManager.h:38
			enum ETrafficSize {
				E_SMALL = 0,
				E_MEDIUM = 1,
				E_LARGE = 2,
				E_MAX_SIZES = 3,
			}

			// Declaration
			struct TrafficStateManager {
				// BrnTrafficStateManager.h:102
				struct SortResult {
					// BrnTrafficStateManager.h:110
					VecFloat mfDistance;

					// BrnTrafficStateManager.h:111
					uint16_t muIndex;

				public:
					// BrnTrafficStateManager.h:105
					bool LessThanDistance(const BrnSound::Logic::Traffic::TrafficStateManager::SortResult &, const BrnSound::Logic::Traffic::TrafficStateManager::SortResult &);

				}

				// BrnTrafficStateManager.h:115
				struct Slot {
					// BrnSoundLogicSharedIO.h:63
					typedef TrafficSoundEntity TrafficSoundEntity;

					// BrnTrafficStateManager.h:117
					BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity mEntity;

					// BrnTrafficStateManager.h:118
					bool mbActive;

					// BrnTrafficStateManager.h:119
					CgsSound::Logic::State * mpAttachedState;

				public:
					// BrnTrafficStateManager.h:116
					Slot();

				}

			}

			struct TrafficEngine;

			struct TrafficHorn;

			struct TrafficSkid;

			struct TrafficControl;

			struct Traffic3DControl;

			struct TrafficState;

		}

	}

}

// BrnTrafficStateManager.h:54
struct BrnSound::Logic::Traffic::TrafficStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnTrafficStateManager.cpp:29
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// Unknown accessibility
	// BrnTrafficStateManager.cpp:37
	extern const BrnSound::Logic::Traffic::ETrafficSize[4] KAE_TRAFFIC_SIZES;

	// BrnTrafficStateManager.h:143
	BrnSound::Logic::Traffic::TrafficStateManager::Slot[32] maSlots;

	// BrnTrafficStateManager.h:144
	Content mEngineAemsBank;

	// BrnTrafficStateManager.h:145
	Content mHornAemsBank;

	// BrnTrafficStateManager.h:146
	Content mEngineCsisInterface;

	// BrnTrafficStateManager.h:147
	Content mHornCsisInterface;

public:
	void TrafficStateManager(const BrnSound::Logic::Traffic::TrafficStateManager &);

	// BrnTrafficStateManager.cpp:29
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnTrafficStateManager.cpp:29
	virtual const char * GetTypeName() const;

	// BrnTrafficStateManager.h:56
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnTrafficStateManager.cpp:29
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnTrafficStateManager.cpp:65
	void TrafficStateManager();

	// BrnTrafficStateManager.cpp:84
	virtual bool Prepare();

	// BrnTrafficStateManager.cpp:182
	virtual void ExitGamePlay();

	// BrnTrafficStateManager.cpp:195
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficStateManager.cpp:197
		using namespace CgsSound::Logic;

		// BrnTrafficStateManager.cpp:198
		using namespace Module::Io;

		// BrnTrafficStateManager.cpp:199
		using namespace rw::math::vpu;

	}

	// BrnTrafficStateManager.h:154
	const CgsSound::Logic::Content & GetEngineAemsBank();

	// BrnTrafficStateManager.h:171
	const CgsSound::Logic::Content & GetHornAemsBank();

	// BrnTrafficStateManager.cpp:171
	virtual void ResourcesAreReady();

	// BrnTrafficStateManager.h:189
	BrnSound::Logic::Traffic::ETrafficSize TrafficClassToSize(uint8_t);

protected:
	// BrnTrafficStateManager.cpp:320
	bool AttachEntity(BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity);

	// BrnTrafficStateManager.cpp:356
	bool DetachEntity(BrnSound::Logic::Traffic::TrafficStateManager::Slot &);

	// BrnTrafficStateManager.cpp:421
	// Declaration
	bool CullIfFurtherThan(VecFloat, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficStateManager.cpp:423
		using namespace rw::math::vpu;

	}

	// BrnTrafficStateManager.cpp:391
	// Declaration
	void SortEntitiesDistanceFromPosition(Vector3, const RootInputBuffer::TrafficSoundOutputInterface &, BrnSound::Logic::Traffic::TrafficStateManager::SortResult *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficStateManager.cpp:393
		using namespace rw::math::vpu;

	}

public:
	virtual void ~TrafficStateManager();

}

// BrnTrafficStateManager.h:54
void BrnSound::Logic::Traffic::TrafficStateManager::~TrafficStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

