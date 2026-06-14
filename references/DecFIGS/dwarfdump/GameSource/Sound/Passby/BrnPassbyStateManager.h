// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnPassbyStateManager.h:28
		namespace Passby {
			// Declaration
			struct PassbyStateManager {
				// BrnPassbyStateManager.h:79
				struct Passby {
					// BrnPassbyStateManager.h:111
					Vector3 mStaticPos;

					// BrnPassbyStateManager.h:112
					const CgsSound::Logic::Cgs3dEffectControl * mp3dControl;

					// BrnPassbyStateManager.h:113
					float32_t mfRelativeVelocityMagnitude;

					// ePassbyTypes.h:39
					typedef AttribSys::Enums::ePassbyTypes::ePassbyTypes EePassbyTypes;

					// BrnPassbyStateManager.h:114
					BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes meType;

					// BrnPassbyStateManager.h:115
					float32_t mfVolumeModifier;

					// BrnPassbyStateManager.h:116
					bool mbSuppressBoostBys;

				public:
					// BrnPassbyStateManager.h:85
					Passby(const CgsSound::Logic::Cgs3dEffectControl *, float32_t, BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes, bool, float32_t);

					// BrnPassbyStateManager.h:102
					Passby(Vector3, float32_t, BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes, bool, float32_t);

				}

				// BrnPassbyStateManager.h:133
				struct DynamicPropByCache {
					// BrnPassbyStateManager.h:137
					struct Item {
						// BrnPassbyStateManager.h:138
						bool mbActive;

						// BrnPassbyStateManager.h:139
						float32_t mfTimeStamp;

						// BrnPassbyStateManager.h:140
						EntityId mId;

					public:
						// BrnPassbyStateManager.h:141
						Item();

					}

					// BrnPassbyStateManager.h:134
					extern const uint32_t KU_SIZE = 32;

					// BrnPassbyStateManager.h:142
					BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache::Item[32] maItems;

				public:
					// BrnPassbyStateManager.h:146
					void Update(float32_t);

					// BrnPassbyStateManager.h:160
					BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache::Item * Insert(float32_t, const EntityId &);

					// BrnPassbyStateManager.h:180
					BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache::Item * Find(const EntityId &);

				}

			}

			struct Passby3DControl;

			struct PassbyState;

		}

	}

}

// BrnPassbyStateManager.h:45
struct BrnSound::Logic::Passby::PassbyStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnPassbyStateManager.cpp:27
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// BrnPassbyStateManager.h:130
	extern const uint32_t KU_MAX_PASSBY_POSTS = 8;

	// BrnPassbyStateManager.h:194
	BrnSound::Logic::Passby::PassbyStateManager::Passby[8] maPostedPassbys;

	// BrnPassbyStateManager.h:195
	uint32_t muPostedPassbyCount;

	// BrnPassbyStateManager.h:196
	Content mSplicerBank;

	// BrnPassbyStateManager.h:197
	BrnSound::Logic::Passby::PassbyStateManager::DynamicPropByCache mDynamicPropCache;

public:
	void PassbyStateManager(const PassbyStateManager &);

	// BrnPassbyStateManager.cpp:27
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnPassbyStateManager.cpp:27
	virtual const char * GetTypeName() const;

	// BrnPassbyStateManager.h:47
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnPassbyStateManager.cpp:27
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnPassbyStateManager.cpp:50
	void PassbyStateManager();

	// BrnPassbyStateManager.cpp:65
	virtual bool Prepare();

	// BrnPassbyStateManager.cpp:168
	virtual bool Release();

	// BrnPassbyStateManager.cpp:188
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyStateManager.cpp:190
		using namespace CgsSound::Logic;

		// BrnPassbyStateManager.cpp:191
		using namespace Module::Io;

		// BrnPassbyStateManager.cpp:192
		using namespace rw::math;

	}

	// BrnPassbyStateManager.h:67
	const CgsSound::Logic::Content & GetSplicerBank() const;

	// BrnPassbyStateManager.cpp:135
	virtual void ResourcesAreReady();

	// BrnPassbyStateManager.h:206
	bool PostPassby(const BrnSound::Logic::Passby::PassbyStateManager::Passby &);

protected:
	// BrnPassbyStateManager.cpp:265
	// Declaration
	void UpdateDynamicPropBys(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPassbyStateManager.cpp:267
		using namespace BrnPhysics::Props;

		// BrnPassbyStateManager.cpp:268
		using namespace rw::math::vpu;

	}

public:
	virtual void ~PassbyStateManager();

}

// BrnPassbyStateManager.h:45
void BrnSound::Logic::Passby::PassbyStateManager::~PassbyStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPassbyStateManager.h:130
extern const uint32_t KU_MAX_PASSBY_POSTS = 8;

// BrnPassbyStateManager.h:134
extern const uint32_t KU_SIZE = 32;

