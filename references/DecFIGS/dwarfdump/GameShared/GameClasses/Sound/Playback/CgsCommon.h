// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		struct Name;

		// CgsCommon.h:36
		const uint32_t KU32_DEFAULT_ALIGNMENT = 4;

		// CgsCommon.h:93
		const Ident K_MIN_RESERVED_IDENT = 4294967280;

		// CgsCommon.h:94
		const Ident K_INIT_SND9_SUBMIX_IDENT = 4294967280;

	}

}

// CgsCommon.h:102
struct CgsSound::Playback::Name {
private:
	// CgsCommon.h:249
	uintptr_t mHash;

public:
	// CgsCommon.h:119
	void Name();

	// CgsCommon.h:126
	void Name(const char *);

	// CgsCommon.h:133
	void Name(uintptr_t);

	// CgsCommon.h:140
	void Name(const Name &);

	// CgsCommon.h:148
	Name & operator=(const Name &);

	// CgsCommon.h:155
	uintptr_t GetValue() const;

	// CgsCommon.h:161
	const char * GetCString() const;

	// CgsCommon.h:171
	bool IsGenuine() const;

	// CgsCommon.h:179
	bool operator==(const Name &) const;

	// CgsCommon.h:188
	bool operator!=(const Name &) const;

	// CgsCommon.h:196
	bool operator<(const Name &) const;

	// CgsCommon.h:204
	bool operator>(const Name &) const;

	// CgsCommon.h:207
	void Dump();

	// CgsCommon.h:213
	void TraverseHashTable(bool (*)(uintptr_t, const char *, void *), void *);

	// CgsCommon.h:217
	Name PointerToName(const void *);

	// CgsCommon.h:225
	void EndianSwap();

private:
	// CgsCommon.h:247
	uintptr_t MakeHash(const char *);

}

// CgsCommon.h:91
typedef uint32_t Ident;

// CgsCommon.h:729
extern const Name K_NULL_NAME;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		struct Name;

		// CgsCommon.h:36
		const uint32_t KU32_DEFAULT_ALIGNMENT = 4;

		// CgsCommon.h:93
		const Ident K_MIN_RESERVED_IDENT = 4294967280;

		// CgsCommon.h:94
		const Ident K_INIT_SND9_SUBMIX_IDENT = 4294967280;

		// CgsCommon.h:729
		extern const Name K_NULL_NAME;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		struct Name;

		struct Entity;

		struct ContentClass;

		struct ContentType;

		struct ParameterSchema;

		struct SlotSchema;

		struct FeatureSchema;

		struct VoiceSchema;

		struct VoiceSpec;

		struct ContentSpec;

		struct Handle<CgsSound::Playback::Content>;

		struct Content;

		struct RegistrySpec;

		struct Slot;

		struct ISlotImplementation;

		struct PlayerVoice;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct Handle<CgsSound::Playback::Factory>;

		struct Factory;

		struct Handle<CgsSound::Playback::Voice>;

		struct Handle<CgsSound::Playback::Environment>;

		struct GenericRwacVoiceConfig;

		struct RwacCommandQueue;

		struct GenericRwacFactorySpec;

		struct GenericRwacFactory;

		struct Handle<CgsSound::Playback::GenericRwacFactory>;

		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// Declaration
			struct Module {
				// CgsSoundPlaybackModule.h:385
				struct StreamBuffer {
					// CgsCommon.h:91
					typedef uint32_t Ident;

				}

			}

		}

		struct IStreamProvider;

		struct GenericRwacVoice;

		struct Object;

		struct ISlotFactory;

		struct IContentLoadService;

		struct IEntityFixer;

		// CgsCommon.h:36
		const uint32_t KU32_DEFAULT_ALIGNMENT = 4;

		// CgsCommon.h:93
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_MIN_RESERVED_IDENT = 4294967280;

		// CgsCommon.h:94
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_INIT_SND9_SUBMIX_IDENT = 4294967280;

		// CgsCommon.h:729
		extern const Name K_NULL_NAME;

	}

	struct MemBase;

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		struct Name;

		struct Entity;

		struct ContentClass;

		struct ContentType;

		struct ParameterSchema;

		struct SlotSchema;

		struct FeatureSchema;

		struct VoiceSchema;

		struct VoiceSpec;

		struct ContentSpec;

		struct Handle<CgsSound::Playback::Content>;

		struct Content;

		struct RegistrySpec;

		struct Slot;

		struct ISlotImplementation;

		struct PlayerVoice;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct Handle<CgsSound::Playback::Factory>;

		struct Factory;

		struct Handle<CgsSound::Playback::Voice>;

		struct Handle<CgsSound::Playback::Environment>;

		struct GenericRwacVoiceConfig;

		struct RwacCommandQueue;

		struct GenericRwacFactorySpec;

		struct GenericRwacFactory;

		struct Handle<CgsSound::Playback::GenericRwacFactory>;

		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// Declaration
			struct Module {
				// CgsSoundPlaybackModule.h:385
				struct StreamBuffer {
					// CgsCommon.h:91
					typedef uint32_t Ident;

				}

			}

		}

		struct IStreamProvider;

		struct GenericRwacVoice;

		struct Object;

		struct ISlotFactory;

		struct IContentLoadService;

		struct IEntityFixer;

		// CgsCommon.h:36
		const uint32_t KU32_DEFAULT_ALIGNMENT = 4;

		// CgsCommon.h:93
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_MIN_RESERVED_IDENT = 4294967280;

		// CgsCommon.h:94
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_INIT_SND9_SUBMIX_IDENT = 4294967280;

	}

	struct MemBase;

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct Name {
			// CgsCommon.h:269
			struct HashNode {
				// CgsCommon.h:284
				uintptr_t mHash;

				// CgsCommon.h:285
				const char * mkpacName;

				// CgsCommon.h:286
				CgsSound::Playback::Name::HashNode * mpLess;

				// CgsCommon.h:287
				CgsSound::Playback::Name::HashNode * mpMore;

			public:
				// CgsCommon.h:271
				HashNode();

				// CgsCommon.h:274
				void Clear();

				// CgsCommon.h:277
				// Declaration
				void Dump() {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsCommon.cpp:47
					using namespace CgsDev::Message;

				}

				// CgsCommon.h:282
				bool Traverse(bool (*)(uintptr_t, const char *, void *), void *);

			}

			// CgsCommon.h:292
			struct HashTable {
			private:
				// CgsCommon.h:312
				extern CgsSound::Playback::Name::HashNode *[32] sapHashNode;

				// CgsCommon.h:313
				extern CgsSound::Playback::Name::HashNode[2048] saNodes;

				// CgsCommon.h:314
				extern uint32_t su32CurrentNode;

			public:
				// CgsCommon.h:297
				// Declaration
				void Store(uintptr_t, const char *) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsCommon.cpp:141
					using namespace CgsDev::Message;

				}

				// CgsCommon.h:301
				const char * Retrieve(uintptr_t);

				// CgsCommon.h:304
				// Declaration
				void Dump() {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsCommon.cpp:183
					using namespace CgsDev::Message;

				}

				// CgsCommon.h:309
				void Traverse(bool (*)(uintptr_t, const char *, void *), void *);

			}

		}

		struct Entity;

		struct ContentClass;

		struct ContentType;

		struct ParameterSchema;

		struct SlotSchema;

		struct FeatureSchema;

		struct VoiceSchema;

		struct VoiceSpec;

		struct ContentSpec;

		struct Handle<CgsSound::Playback::Content>;

		struct Content;

		struct RegistrySpec;

		struct Slot;

		struct ISlotImplementation;

		struct PlayerVoice;

		struct Send;

		struct InputParameter;

		struct OutputParameter;

		struct Handle<CgsSound::Playback::SubmixVoice>;

		struct SubmixVoice;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct Handle<CgsSound::Playback::Factory>;

		struct Factory;

		struct Handle<CgsSound::Playback::Voice>;

		struct Handle<CgsSound::Playback::Environment>;

		struct RwacLock;

		struct RwacCommand;

		struct RwacCommandVoiceCreateInstance;

		struct GenericRwacVoiceConfig;

		struct RwacCommandVoiceRelease;

		struct RwacCommandPluginGetAttribute;

		struct Handle<CgsSound::Playback::GenericRwacWaveContent>;

		struct GenericRwacWaveContent;

		struct RwacCommandPlayerPlayParameters;

		struct RwacCommandPlayerIsRequestDoneParameters;

		struct RwacCommandSendConnectParameters;

		struct RwacCommandApplyReverbIRFile;

		struct RwacCommandGinsuAttachDataParameters;

		struct RwacCommandQueue;

		struct GenericRwacFactorySpec;

		struct GenericRwacFactory;

		struct Handle<CgsSound::Playback::GenericRwacFactory>;

		struct AemsRWSampleFactory;

		struct PatchMonitor;

		struct CsisCommand;

		struct CsisSetClassHandleCommand;

		struct CsisCreateCommand;

		struct CsisReleaseCommand;

		struct CsisUpdateCommand;

		struct CommandQueue<255u,std::uintptr_t>;

		struct CsisCommandQueue;

		struct AemsFactorySpec;

		struct SplicerFactorySpec;

		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// Declaration
			struct Module {
				// CgsSoundPlaybackModule.h:85
				enum EPrepareStage {
					E_PREPARESTAGE_START = 0,
					E_PREPARESTAGE_MANAGER = 1,
					E_PREPARESTAGE_ENVIRONMENT = 2,
					E_PREPARESTAGE_FACTORIES = 3,
					E_PREPARESTAGE_DONE = 4,
				}

				// CgsSoundPlaybackModule.h:94
				enum EReleaseStage {
					E_RELEASESTAGE_START = 0,
					E_RELEASESTAGE_STRING_TABLE = 1,
					E_RELEASESTAGE_FACTORIES = 2,
					E_RELEASESTAGE_ENVIRONMENT = 3,
					E_RELEASESTAGE_STREAM_BUFFERS = 4,
					E_RELEASESTAGE_MANAGER = 5,
					E_RELEASESTAGE_DONE = 6,
				}

				// CgsSoundPlaybackModule.h:341
				struct StringTable {
					// CgsSoundPlaybackModule.h:342
					CgsSound::Playback::Module::Module::StringTable * mpNext;

				}

				// CgsSoundPlaybackModule.h:385
				struct StreamBuffer {
					// CgsSoundPlaybackModule.h:402
					enum EStreamBufferStatus {
						E_USING_BUFFER = 0,
						E_STREAM_OPEN = 1,
						E_WAITING_FOR_CLOSE = 2,
						E_WAITING_GRACE_PERIOD = 3,
						E_FREE_BUFFER = 4,
					}

				private:
					// CgsSoundPlaybackModule.h:455
					void * mpBuffer;

					// CgsSoundPlaybackModule.h:456
					CgsSound::Playback::Module::Module::StreamBuffer::EStreamBufferStatus mBufferStatus;

					// CgsSoundPlaybackModule.h:457
					ReadStream mReadStream;

					// Unknown accessibility
					// CgsCommon.h:91
					typedef uint32_t Ident;

					// CgsSoundPlaybackModule.h:458
					CgsSound::Playback::Module::Module::StreamBuffer::Ident mVoiceId;

					// CgsSoundPlaybackModule.h:459
					bool mbQueuedForClose;

					// Unknown accessibility
					// CgsSoundPlaybackModule.h:462
					float32_t mfGraceWaitTime;

				public:
					// CgsSoundPlaybackModule.h:387
					void Construct();

					// CgsSoundPlaybackModule.h:391
					bool Prepare(void *);

					// CgsSoundPlaybackModule.h:394
					bool Release();

					// CgsSoundPlaybackModule.h:397
					void * GetBuffer() const;

					// CgsSoundPlaybackModule.h:400
					CgsSound::Playback::Module::Module::StreamBuffer::Ident GetVoiceId() const;

					// CgsSoundPlaybackModule.h:414
					void AquireBuffer(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

					// CgsSoundPlaybackModule.h:417
					void ReleaseBuffer();

					// CgsSoundPlaybackModule.h:420
					CgsSound::Playback::Module::Module::StreamBuffer::EStreamBufferStatus GetStatus() const;

					// CgsSoundPlaybackModule.h:423
					ReadStream & GetReadStream();

					// CgsSoundPlaybackModule.h:430
					bool GetQueuedForClose() const;

					// CgsSoundPlaybackModule.h:435
					void SetStatus(CgsSound::Playback::Module::Module::StreamBuffer::EStreamBufferStatus);

					// CgsSoundPlaybackModule.h:443
					void SetReadStream(const ReadStream &);

					// CgsSoundPlaybackModule.h:450
					void SetQueuedForClose();

				}

			}

		}

		struct Handle<CgsSound::Playback::AemsFactory>;

		struct AemsFactory;

		struct Handle<CgsSound::Playback::SplicerFactory>;

		struct SplicerFactory;

		struct VoiceProfilingData<128u>;

		struct GenericRwacVoiceScratchpad;

		struct SplicerContent;

		struct Handle<CgsSound::Playback::GenericRwacPlayerVoice>;

		struct GenericRwacPlayerVoice;

		struct Handle<CgsSound::Playback::PlayerVoice>;

		struct Handle<CgsSound::Playback::GenericRwacSubmixVoice>;

		struct GenericRwacSubmixVoice;

		struct Handle<CgsSound::Playback::GenericRwacMasterVoice>;

		struct GenericRwacMasterVoice;

		struct Handle<CgsSound::Playback::GenericRwacReverbIRContent>;

		struct GenericRwacReverbIRContent;

		struct Snr;

		struct AemsVoiceCsisClass;

		struct Handle<CgsSound::Playback::AemsPlayerVoice>;

		struct AemsPlayerVoice;

		struct Handle<CgsSound::Playback::CsisContent>;

		struct CsisContent;

		struct Handle<CgsSound::Playback::AemsContent>;

		struct AemsContent;

		struct Handle<CgsSound::Playback::SplicerPlayerVoice>;

		struct SplicerPlayerVoice;

		struct Handle<CgsSound::Playback::SplicerContent>;

		struct SlotFactory<CgsSound::Playback::Plugins::GinsuSlot>;

		struct ISlotFactory;

		struct SplicerContentSlot;

		struct SlotFactory<CgsSound::Playback::SplicerContentSlot>;

		struct Object;

		struct AemsContentSlot;

		struct SlotFactory<CgsSound::Playback::AemsContentSlot>;

		struct GenericRwacContentSlot;

		struct SlotFactory<CgsSound::Playback::GenericRwacContentSlot>;

		struct GenericRwacReverbIRSlot;

		struct SlotFactory<CgsSound::Playback::GenericRwacReverbIRSlot>;

		struct MasterVoice;

		struct IContentLoadService;

		struct IEntityFixer;

		struct EntityFixer<CgsSound::Playback::AemsVoiceCsisClass>;

		struct EntityFixer<CgsSound::Playback::ContentClass>;

		struct EntityFixer<CgsSound::Playback::GenericRwacFeatureImplementation>;

		struct EntityFixer<CgsSound::Playback::ContentSpec>;

		struct EntityFixer<CgsSound::Playback::VoiceSpec>;

		struct EntityFixer<CgsSound::Playback::VoiceSchema>;

		struct EntityFixer<CgsSound::Playback::FeatureSchema>;

		struct EntityFixer<CgsSound::Playback::SlotSchema>;

		struct EntityFixer<CgsSound::Playback::ParameterSchema>;

		struct EntityFixer<CgsSound::Playback::ContentType>;

		// CgsCommon.h:389
		extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, const Name &);

		// CgsCommon.h:36
		const uint32_t KU32_DEFAULT_ALIGNMENT = 4;

		// CgsCommon.h:93
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_MIN_RESERVED_IDENT = 4294967280;

		// CgsCommon.h:94
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_INIT_SND9_SUBMIX_IDENT = 4294967280;

	}

	struct MemBase;

}

// CgsCommon.h:433
extern ContentType * NameToPointer<CgsSound::Playback::ContentType>(Name &  lName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:433
extern VoiceSchema * NameToPointer<CgsSound::Playback::VoiceSchema>(Name &  lName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:433
extern FeatureSchema * NameToPointer<CgsSound::Playback::FeatureSchema>(Name &  lName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:433
extern SlotSchema * NameToPointer<CgsSound::Playback::SlotSchema>(Name &  lName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:433
extern ParameterSchema * NameToPointer<CgsSound::Playback::ParameterSchema>(Name &  lName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:433
extern ContentClass * NameToPointer<CgsSound::Playback::ContentClass>(Name &  lName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		struct Name;

		struct Entity;

		struct ContentClass;

		struct ContentType;

		struct ParameterSchema;

		struct SlotSchema;

		struct FeatureSchema;

		struct VoiceSchema;

		struct VoiceSpec;

		struct ContentSpec;

		struct Handle<CgsSound::Playback::Content>;

		struct Content;

		struct RegistrySpec;

		struct Slot;

		struct ISlotImplementation;

		struct PlayerVoice;

		struct CpuMonitors;

		struct EnvironmentSpec;

		struct Handle<CgsSound::Playback::Factory>;

		struct Factory;

		struct Handle<CgsSound::Playback::Voice>;

		struct Handle<CgsSound::Playback::Environment>;

		struct GenericRwacVoiceConfig;

		struct RwacCommandQueue;

		struct GenericRwacFactorySpec;

		struct GenericRwacFactory;

		struct Handle<CgsSound::Playback::GenericRwacFactory>;

		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// Declaration
			struct Module {
				// CgsSoundPlaybackModule.h:385
				struct StreamBuffer {
					// CgsCommon.h:91
					typedef uint32_t Ident;

				}

			public:
				// CgsSoundPlaybackModule.h:543
				// Declaration
				void AddRegistry(Registry &, CgsSound::Playback::Module::ERegistryDestination) {
					// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
					// CgsSoundPlaybackModule.h:574
					using namespace CgsDev::Message;

				}

				~Module();

				Module();

			private:
				// CgsSoundPlaybackModule.h:345
				extern const uint32_t SKU32_RESOURCE_RECIEVER_QUEUE_SIZE = 8192;

				// CgsSoundPlaybackModule.h:382
				extern const uint8_t SKU_NUMBER_OF_STREAM_BUFFERS = 3;

			}

		}

		struct Handle<CgsSound::Playback::AemsFactory>;

		struct Handle<CgsSound::Playback::SplicerFactory>;

		struct VoiceProfilingData<128u>;

		struct GenericRwacVoice;

		struct Object;

		struct ISlotFactory;

		struct IContentLoadService;

		struct IEntityFixer;

		// CgsCommon.h:36
		const uint32_t KU32_DEFAULT_ALIGNMENT = 4;

		// CgsCommon.h:93
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_MIN_RESERVED_IDENT = 4294967280;

		// CgsCommon.h:94
		const CgsSound::Playback::Module::Module::StreamBuffer::Ident K_INIT_SND9_SUBMIX_IDENT = 4294967280;

		// CgsCommon.h:729
		extern const Name K_NULL_NAME;

	}

	struct MemBase;

}

