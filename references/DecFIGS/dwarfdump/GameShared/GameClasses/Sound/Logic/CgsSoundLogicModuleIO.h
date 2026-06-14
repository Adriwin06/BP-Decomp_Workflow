// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsSoundLogicModuleIO.h:40
		namespace Io {
		}

		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		struct DynamicMixer;

		struct Module;

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct Voice;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsSoundLogicModuleIO.h:40
		namespace Io {
			struct InputBuffer;

		}

		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		struct DynamicMixer;

		struct Module;

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct Voice;

	}

}

// CgsSoundLogicModuleIO.h:66
struct CgsSound::Logic::Io::InputBuffer : public IOBuffer {
public:
	// CgsSoundLogicModuleIO.h:71
	void Construct();

	// CgsSoundLogicModuleIO.h:75
	void Clear();

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		struct DynamicMixer;

		struct Module;

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct Voice;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsSoundLogicModuleIO.h:40
		namespace Io {
		}

		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		struct DynamicMixer;

		struct Module;

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct ClassTypeInfo<CgsSound::Logic::EffectObject>;

		struct Voice;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// CgsSoundLogicModuleIO.h:40
		namespace Io {
		}

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsSoundLogicModuleIO.h:40
		namespace Io {
			struct InputBuffer;

			struct OutputBuffer;

		}

		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		struct DynamicMixer;

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct EffectControl;

		struct ClassTypeInfo<CgsSound::Logic::EffectObject>;

		struct EffectObject;

		struct PooledVoice;

		struct FreqContent;

		struct SendDescriptor;

		struct VoiceHierarchy;

		struct ExternalConnectionDescriptor;

		struct VoiceHierarchyCollection;

		struct InterpreterData;

		struct MessageResponse;

		struct Parameter;

		struct Voice;

		struct VoicePool<4>;

		struct VoicePoolBase;

	}

}

// CgsSoundLogicModuleIO.h:96
struct CgsSound::Logic::Io::OutputBuffer : public IOBuffer {
public:
	// CgsSoundLogicModuleIO.h:101
	void Construct();

	// CgsSoundLogicModuleIO.h:105
	void Clear();

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsSoundLogicModuleIO.h:40
		namespace Io {
		}

		struct Content;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct ModuleParams;

		struct Environment;

		// Declaration
		struct Module {
		public:
			~Module();

			Module();

		}

		struct ClassTypeInfo<CgsSound::Logic::State>;

		struct ClassTypeInfo<CgsSound::Logic::StateManager>;

		struct ClassTypeInfo<CgsSound::Logic::EffectControl>;

		struct Voice;

	}

}

