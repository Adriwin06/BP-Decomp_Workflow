// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// BrnSoundLogicModule.cpp:101
		const ModuleParams K_MODULE_PARAMS;

		// BrnSoundLogicModule.cpp:108
		const char * KPC_GLOBAL_DATA_KEY;

		// BrnSoundLogicModule.cpp:110
		const int32_t KI_DELAYED_STATEMANAGER_PREPARE_BITFIELD = 4;

		// BrnSoundLogicModule.cpp:112
		const float32_t KF_HOLDVOLUME_TIMEOUT;

		// BrnSoundLogicModule.cpp:120
		extern VecFloat KVF_CAR_MIC_OFFSET;

	}

}

// BrnSoundLogicModule.cpp:521
using BrnGameState::GameStateModuleIO;

// _built-in_
namespace :: {
	// BrnSoundLogicModule.cpp:84
	extern int32_t gDebugAIDriverPlayer;

}

