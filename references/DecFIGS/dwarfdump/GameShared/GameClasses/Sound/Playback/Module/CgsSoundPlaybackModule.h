// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
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

	}

}

// CgsSoundPlaybackModule.h:345
extern const uint32_t SKU32_RESOURCE_RECIEVER_QUEUE_SIZE = 8192;

// CgsSoundPlaybackModule.h:382
extern const uint8_t SKU_NUMBER_OF_STREAM_BUFFERS = 3;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// CgsSoundPlaybackModule.h:55
			enum ERegistryDestination {
				E_REG_DEST_NONE = 0,
				E_REG_DEST_MODULE = 1,
				E_REG_DEST_AEMS_FACTORY = 2,
				E_REG_DEST_RWAC_FACTORY = 3,
			}

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

			// CgsSoundPlaybackModule.h:501
			extern CgsSound::Playback::Module::Module::EReleaseStage operator++(CgsSound::Playback::Module::Module::EReleaseStage &, int);

			// CgsSoundPlaybackModule.h:500
			extern CgsSound::Playback::Module::Module::EPrepareStage operator++(CgsSound::Playback::Module::Module::EPrepareStage &, int);

		}

	}

}

// CgsSoundPlaybackModule.h:82
struct CgsSound::Playback::Module::Module : protected CgsSound::Playback::IContentLoadService {
private:
	// CgsSoundPlaybackModule.h:345
	extern const uint32_t SKU32_RESOURCE_RECIEVER_QUEUE_SIZE = 8192;

	// CgsSoundPlaybackModule.h:346
	extern const uint32_t SKU32_FACTORY_COUNT = 4;

	// CgsSoundPlaybackModule.h:347
	extern const uint32_t SKU32_CONTENT_COUNT = 128;

	// CgsSoundPlaybackModule.h:348
	extern const uint32_t SKU32_VOICE_COUNT = 192;

	// CgsSoundPlaybackModule.h:349
	extern const uint32_t SKU32_MAIN_REGISTRY_ENTITY_COUNT = 2048;

	// CgsSoundPlaybackModule.h:350
	extern const size_t SKU_MAIN_REGISTRY_DATA_SIZE = 388608;

	// CgsSoundPlaybackModule.h:351
	extern const uint32_t SKU32_REGISTRY_ENTITY_COUNT = 128;

	// CgsSoundPlaybackModule.h:352
	extern const size_t SKU_REGISTRY_DATA_SIZE = 32384;

	// CgsSoundPlaybackModule.h:354
	CgsSound::Playback::Module::Module::EPrepareStage mePrepareStage;

	// CgsSoundPlaybackModule.h:355
	CgsSound::Playback::Module::Module::EReleaseStage meReleaseStage;

	// CgsSoundPlaybackModule.h:357
	EventReceiverQueue<8192,16> mResourceReceiverQueue;

	// CgsSoundPlaybackModule.h:359
	InputBuffer * mpInputBuffer;

	// CgsSoundPlaybackModule.h:360
	OutputBuffer * mpOutputBuffer;

	// Unknown accessibility
	// CgsEnvironment.h:445
	typedef Handle<CgsSound::Playback::Environment> EnvironmentHandle;

	// CgsSoundPlaybackModule.h:362
	Module::EnvironmentHandle mhEnvironment;

	// CgsSoundPlaybackModule.h:367
	SplicerFactory::GenericRwacFactoryHandle mhRwacFactory;

	// Unknown accessibility
	// CgsAemsFactory.h:399
	typedef Handle<CgsSound::Playback::AemsFactory> AemsFactoryHandle;

	// CgsSoundPlaybackModule.h:370
	Module::AemsFactoryHandle mhAemsFactory;

	// Unknown accessibility
	// CgsSplicerFactory.h:139
	typedef Handle<CgsSound::Playback::SplicerFactory> SplicerFactoryHandle;

	// CgsSoundPlaybackModule.h:374
	Module::SplicerFactoryHandle mhSplicerFactory;

	// CgsSoundPlaybackModule.h:379
	Mutex mStreamMutex;

	// Unknown accessibility
	// CgsSoundPlaybackModuleIO.h:51
	typedef ResourceRequestQueue<1024> DeferredResourceRequestQueue;

	// CgsSoundPlaybackModule.h:380
	Module::DeferredResourceRequestQueue mDeferredResourceRequestQueue;

	// CgsSoundPlaybackModule.h:382
	extern const uint8_t SKU_NUMBER_OF_STREAM_BUFFERS = 3;

	// CgsSoundPlaybackModule.h:465
	CgsSound::Playback::Module::Module::StreamBuffer[3] mStreamBuffers;

	// CgsSoundPlaybackModule.h:466
	uint32_t muStreamBufferSize;

	// CgsSoundPlaybackModule.h:467
	uint32_t muStreamNumBlocks;

	// CgsSoundPlaybackModule.h:468
	bool mbStreamsUsingMainAllocator;

	// CgsSoundPlaybackModule.h:489
	CgsSound::Playback::Module::Module::StringTable * mpStringTable;

	// CgsSoundPlaybackModule.h:491
	float mf32TimeStep;

	// CgsSoundPlaybackModule.h:492
	float mf32TotalTime;

	// CgsSoundPlaybackModule.h:494
	int32_t mi32PoolId;

public:
	// CgsSoundPlaybackModule.cpp:77
	virtual void Construct(int32_t);

	// CgsSoundPlaybackModule.cpp:130
	// Declaration
	virtual bool Prepare(rw::IResourceAllocator *, LinearMalloc *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:179
		using namespace CgsDev::Message;

	}

	// CgsSoundPlaybackModule.cpp:300
	virtual bool Release();

	// CgsSoundPlaybackModule.cpp:419
	virtual void Destruct();

	// CgsSoundPlaybackModule.cpp:675
	virtual void Update(InputBuffer *, OutputBuffer *);

	// CgsSoundPlaybackModule.h:517
	const OutputBuffer::ResourceRequestQueue & GetResourceRequestQueue() const;

	// CgsSoundPlaybackModule.h:510
	OutputBuffer::ResourceRequestQueue & GetResourceRequestQueue();

	// CgsSoundPlaybackModule.h:525
	float GetTimeStep() const;

	// CgsSoundPlaybackModule.h:533
	void SetTimeStep(float);

	// CgsSoundPlaybackModule.h:174
	CgsSound::Playback::Environment & GetEnvironment();

	// CgsSoundPlaybackModule.h:543
	// Declaration
	void AddRegistry(Registry &, CgsSound::Playback::Module::ERegistryDestination) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.h:574
		using namespace CgsDev::Message;

	}

	// CgsSoundPlaybackModule.h:185
	void DumpRegistries();

	// CgsSoundPlaybackModule.cpp:1022
	// Declaration
	Handle<CgsSound::Playback::Voice> CreateVoice(uint32_t, uint32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:1024
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:1075
	// Declaration
	Handle<CgsSound::Playback::Content> CreateContent(uint32_t, uint32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:1077
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:1141
	// Declaration
	void ConnectVoice(Handle<CgsSound::Playback::Voice>, uint32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:1143
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:1121
	// Declaration
	void AttachVoice(Handle<CgsSound::Playback::Voice>, Handle<CgsSound::Playback::Content>, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:1123
		using namespace Io;

	}

private:
	// CgsSoundPlaybackModule.cpp:446
	// Declaration
	void ProcessCommandStream(const CommandStream &, DataStream &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:448
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:780
	// Declaration
	void ReleaseContent(CommandStreamReader &, DataStream &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:782
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:799
	// Declaration
	void CreateContent(CommandStreamReader &, DataStream &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:801
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:842
	// Declaration
	void StopVoice(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:844
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:866
	// Declaration
	void ApplyReverb(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:868
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:885
	// Declaration
	void PlayVoice(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:887
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:909
	// Declaration
	void DetachVoice(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:911
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:929
	// Declaration
	void AttachVoice(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:931
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:951
	// Declaration
	void DisconnectVoice(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:953
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:973
	// Declaration
	void ConnectVoice(CommandStreamReader &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:975
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:996
	// Declaration
	void ReleaseVoice(CommandStreamReader &, DataStream &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:998
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:726
	// Declaration
	void CreateVoice(CommandStreamReader &, DataStream &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:728
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:575
	// Declaration
	void ProcessResourceReceiverQueue() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:577
		using namespace CgsModule;

		// CgsSoundPlaybackModule.cpp:578
		using namespace CgsResource::Events;

		// CgsSoundPlaybackModule.cpp:579
		using namespace CgsResource::ResourceIO;

	}

	// CgsSoundPlaybackModule.cpp:1167
	virtual bool DoServiceContentLoadRequest(CgsSound::Playback::Module::Module::StreamBuffer::Ident, CgsSound::Playback::EContentLoadMethod, const char *, void *);

	// CgsSoundPlaybackModule.cpp:1200
	virtual ReadStream * DoOpenStream(CgsSound::Playback::IStreamProvider::StreamSpec &);

	// CgsSoundPlaybackModule.cpp:1257
	virtual void DoCloseStream(const ReadStream *);

	// CgsSoundPlaybackModule.h:594
	void ImportStringTable(const Registry &);

	// CgsSoundPlaybackModule.cpp:1366
	// Declaration
	void UpdateStreamBuffers(OutputBuffer::FreedBuffersArray &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundPlaybackModule.cpp:1368
		using namespace Io;

	}

	// CgsSoundPlaybackModule.cpp:1424
	int32_t FindStreamBuffer(const ReadStream *);

}

// CgsSoundPlaybackModule.h:346
extern const uint32_t SKU32_FACTORY_COUNT = 4;

// CgsSoundPlaybackModule.h:347
extern const uint32_t SKU32_CONTENT_COUNT = 128;

// CgsSoundPlaybackModule.h:348
extern const uint32_t SKU32_VOICE_COUNT = 192;

// CgsSoundPlaybackModule.h:349
extern const uint32_t SKU32_MAIN_REGISTRY_ENTITY_COUNT = 2048;

// CgsSoundPlaybackModule.h:350
extern const size_t SKU_MAIN_REGISTRY_DATA_SIZE = 388608;

// CgsSoundPlaybackModule.h:351
extern const uint32_t SKU32_REGISTRY_ENTITY_COUNT = 128;

// CgsSoundPlaybackModule.h:352
extern const size_t SKU_REGISTRY_DATA_SIZE = 32384;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsSoundPlaybackModuleIO.h:32
		namespace Module {
			// CgsSoundPlaybackModule.h:55
			enum ERegistryDestination {
				E_REG_DEST_NONE = 0,
				E_REG_DEST_MODULE = 1,
				E_REG_DEST_AEMS_FACTORY = 2,
				E_REG_DEST_RWAC_FACTORY = 3,
			}

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

	}

}

// CgsSoundPlaybackModule.h:82
void CgsSound::Playback::Module::Module::~Module() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundPlaybackModule.h:82
void CgsSound::Playback::Module::Module::Module() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

