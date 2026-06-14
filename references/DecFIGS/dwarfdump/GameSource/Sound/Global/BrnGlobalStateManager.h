// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct GlobalStateManager {
			// BrnGlobalStateManager.h:43
			enum eSubmixVoice {
				E_SUBMIX_VOICE_COLLISION = 0,
				E_SUBMIX_VOICE_PASSBY = 1,
				E_SUBMIX_VOICE_COUNT = 2,
			}

		}

	}

}

// BrnGlobalStateManager.h:38
struct BrnSound::Logic::GlobalStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnGlobalStateManager.cpp:29
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// BrnGlobalStateManager.h:98
	CgsSound::Logic::Voice[2] maSubmixVoices;

	// BrnGlobalStateManager.h:99
	Content mFxSpliceBank;

	// BrnGlobalStateManager.h:100
	Content mPresentationSpliceBank;

	// BrnGlobalStateManager.h:101
	bool mbResourcesAreLoaded;

public:
	void GlobalStateManager(const GlobalStateManager &);

	// BrnGlobalStateManager.cpp:29
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnGlobalStateManager.cpp:29
	virtual const char * GetTypeName() const;

	// BrnGlobalStateManager.h:51
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnGlobalStateManager.cpp:29
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnGlobalStateManager.h:121
	void GlobalStateManager();

	// BrnGlobalStateManager.cpp:50
	// Declaration
	virtual bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGlobalStateManager.cpp:52
		using namespace SendIndexes;

		// BrnGlobalStateManager.cpp:53
		using namespace CgsSound::Playback;

	}

	// BrnGlobalStateManager.cpp:161
	virtual void ResourcesAreReady();

	// BrnGlobalStateManager.cpp:189
	virtual void UpdateParams(float32_t);

	// BrnGlobalStateManager.h:109
	const CgsSound::Logic::Content & GetPresentationSpliceBank() const;

	// BrnGlobalStateManager.h:115
	const CgsSound::Logic::Content & GetFxSpliceBank() const;

	// BrnGlobalStateManager.h:141
	CgsSound::Logic::Voice & GetSubmixVoice(BrnSound::Logic::GlobalStateManager::eSubmixVoice);

	// BrnGlobalStateManager.h:160
	const CgsSound::Logic::Voice & GetSubmixVoice(BrnSound::Logic::GlobalStateManager::eSubmixVoice) const;

	virtual void ~GlobalStateManager();

}

// BrnGlobalStateManager.h:38
void BrnSound::Logic::GlobalStateManager::~GlobalStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

