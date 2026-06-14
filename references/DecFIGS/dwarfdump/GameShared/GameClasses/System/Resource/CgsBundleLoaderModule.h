// CgsBundleLoaderModule.h:93
extern const int32_t KI_SECONDARY_STREAM_BUFFER_SIZE = 524288;

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct BundleLoaderModule {
		// CgsBundleLoaderModule.h:125
		struct InitOptions {
			// CgsBundleLoaderModule.h:127
			int32_t miBundleHeaderBufferSize;

			// CgsBundleLoaderModule.h:128
			int32_t miDebugDataBufferSize;

			// CgsBundleLoaderModule.h:129
			int32_t miStreamBufferSize;

			// CgsBundleLoaderModule.h:130
			int32_t miMaxBundles;

			// CgsBundleLoaderModule.h:131
			int32_t miMaxResourcesPerBundle;

			// CgsBundleLoaderModule.h:132
			bool mbForceUpperCaseFileNames;

			// CgsBundleLoaderModule.h:134
			bool mbForcePS3HardDriveUpperCaseGame;

		}

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct BundleLoaderModule {
	public:
		~BundleLoaderModule();

		BundleLoaderModule();

		// Unknown accessibility
		// CgsBundleLoaderModule.h:93
		extern const int32_t KI_SECONDARY_STREAM_BUFFER_SIZE = 524288;

	}

}

// CgsBundleLoaderModule.h:62
struct CgsResource::LoadedBundleData {
	// CgsBundleLoaderModule.h:64
	int32_t miPoolId;

	// CgsBundleLoaderModule.h:65
	ID mResourceId;

	// CgsBundleLoaderModule.h:66
	ResourceHandle mHandle;

	// CgsBundleLoaderModule.h:67
	int16_t miRefCount;

	// CgsBundleLoaderModule.h:68
	bool mbIsLiveUpdate;

}

// CgsBundleLoaderModule.h:81
void CgsResource::BundleLoaderModule::~BundleLoaderModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsBundleLoaderModule.h:81
void CgsResource::BundleLoaderModule::BundleLoaderModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct BundleLoaderModule {
		// CgsBundleLoaderModule.h:95
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// CgsBundleLoaderModule.h:102
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// CgsBundleLoaderModule.h:109
		enum EStreamStage {
			STREAMSTAGE_IDLE = 0,
			STREAMSTAGE_STREAMHEADER = 1,
			STREAMSTAGE_STREAMDEBUGDATA = 2,
			STREAMSTAGE_STREAMENTRYLIST = 3,
			STREAMSTAGE_WAITFORALLOCATE = 4,
			STREAMSTAGE_STREAMDATA = 5,
			STREAMSTAGE_CLOSESTREAM = 6,
			STREAMSTAGE_STREAMDONE = 7,
			STREAMSTAGE_FIXUP = 8,
			STREAMSTAGE_LOADDONE = 9,
			STREAMSTAGE_COUNT = 10,
		}

		// CgsBundleLoaderModule.h:125
		struct InitOptions {
			// CgsBundleLoaderModule.h:127
			int32_t miBundleHeaderBufferSize;

			// CgsBundleLoaderModule.h:128
			int32_t miDebugDataBufferSize;

			// CgsBundleLoaderModule.h:129
			int32_t miStreamBufferSize;

			// CgsBundleLoaderModule.h:130
			int32_t miMaxBundles;

			// CgsBundleLoaderModule.h:131
			int32_t miMaxResourcesPerBundle;

			// CgsBundleLoaderModule.h:132
			bool mbForceUpperCaseFileNames;

			// CgsBundleLoaderModule.h:134
			bool mbForcePS3HardDriveUpperCaseGame;

		}

	}

}

// CgsBundleLoaderModule.h:43
struct CgsResource::RunningLoad {
	// CgsBundleLoaderModule.h:45
	LoadBundleRequest mLoadRequest;

}

// CgsBundleLoaderModule.h:81
struct CgsResource::BundleLoaderModule : public CgsModule::ModuleSingleBuffered {
	// CgsBundleLoaderModule.cpp:47
	extern int32_t _miUpdatePerfMon;

	// CgsBundleLoaderModule.cpp:48
	extern int32_t _miStreamUpdate;

	// CgsBundleLoaderModule.cpp:49
	extern int32_t _miStreamEntryCopy;

	// CgsBundleLoaderModule.cpp:50
	extern int32_t _miStreamDataCopy;

	// CgsBundleLoaderModule.cpp:51
	extern int32_t _miTraceStreamUpdate_StreamHeader;

	// CgsBundleLoaderModule.cpp:52
	extern int32_t _miTraceStreamUpdate_StreamEntries;

	// CgsBundleLoaderModule.cpp:53
	extern int32_t _miTraceStreamUpdate_StreamData;

	// CgsBundleLoaderModule.h:92
	extern const uint32_t KU_COMPRESSION_BUFFER_SIZE = 524288;

	// CgsBundleLoaderModule.h:93
	extern const int32_t KI_SECONDARY_STREAM_BUFFER_SIZE = 524288;

private:
	// CgsBundleLoaderModule.h:173
	CgsResource::BundleLoaderModule::EPrepareStage mePrepareStage;

	// CgsBundleLoaderModule.h:174
	CgsResource::BundleLoaderModule::EReleaseStage meReleaseStage;

	// CgsBundleLoaderModule.h:175
	CgsResource::BundleLoaderModule::EStreamStage meStreamStage;

	// CgsBundleLoaderModule.h:178
	int32_t miBundleHeaderBufferSize;

	// CgsBundleLoaderModule.h:179
	int32_t miDebugBufferSize;

	// CgsBundleLoaderModule.h:180
	int32_t miStreamBufferSize;

	// CgsBundleLoaderModule.h:181
	int32_t miMaxBundles;

	// CgsBundleLoaderModule.h:182
	int32_t miMaxResourcesPerBundle;

	// CgsBundleLoaderModule.h:183
	bool mbForceUpperCaseFileNames;

	// CgsBundleLoaderModule.h:186
	char * mpcHeaderBuffer;

	// CgsBundleLoaderModule.h:187
	char * mpcDebugDataBuffer;

	// CgsBundleLoaderModule.h:188
	bool[2] mabStreamBuffersUsed;

	// CgsBundleLoaderModule.h:189
	char *[2] mapcStreamBuffers;

	// CgsBundleLoaderModule.h:190
	char * mpcSecondaryStreamBuffer;

	// CgsBundleLoaderModule.h:191
	bool * mpNeeds;

	// CgsBundleLoaderModule.h:192
	ResourceHandle::Resource * mpResources;

	// CgsBundleLoaderModule.h:195
	int32_t miHeaderPos;

	// CgsBundleLoaderModule.h:196
	int32_t miCurrentResource;

	// CgsBundleLoaderModule.h:197
	int32_t miCurrentMemoryType;

	// CgsBundleLoaderModule.h:198
	int32_t miCurrentResourcePosition;

	// Unknown accessibility
	// CgsBundleLoaderModule.h:51
	typedef FifoQueue<CgsResource::RunningLoad,4> RunningLoadQueue;

	// CgsBundleLoaderModule.h:201
	BundleLoaderModule::RunningLoadQueue mQueuedLoads;

	// CgsBundleLoaderModule.h:202
	LoadBundleRequest mLoadRequest;

	// CgsBundleLoaderModule.h:203
	UnloadBundleRequest mUnloadRequest;

	// CgsBundleLoaderModule.h:204
	AllocateResourceListRequest mAllocationRequest;

	// CgsBundleLoaderModule.h:205
	AllocateResourceListResponse mAllocationResponse;

	// CgsBundleLoaderModule.h:208
	BundleV2 mCurrentBundle;

	// CgsBundleLoaderModule.h:209
	LoadedBundleData mCurrentLoad;

	// CgsBundleLoaderModule.h:212
	ReadStream[2] maStreams;

	// CgsBundleLoaderModule.h:213
	int32_t miCurrentStream;

	// CgsBundleLoaderModule.h:216
	EventReceiverQueue<128,16> mReceiverQueue;

	// Unknown accessibility
	// CgsBundleLoaderModule.h:49
	typedef FixedLengthPriorityQueue<CgsResource::Events::LoadBundleRequest,128u,128> InternalLoadRequestQueue;

	// CgsBundleLoaderModule.h:217
	BundleLoaderModule::InternalLoadRequestQueue mLoadRequestQueue;

	// Unknown accessibility
	// CgsBundleLoaderModule.h:50
	typedef FixedLengthPriorityQueue<CgsResource::Events::UnloadBundleRequest,128u,128> InternalUnloadRequestQueue;

	// CgsBundleLoaderModule.h:218
	BundleLoaderModule::InternalUnloadRequestQueue mUnloadRequestQueue;

	// CgsBundleLoaderModule.h:221
	LoadedBundleData * mpLoadedBundles;

	// CgsBundleLoaderModule.h:222
	int32_t miNumLoadedBundles;

	// CgsBundleLoaderModule.h:223
	int32_t miMaxLoadedBundles;

	// CgsBundleLoaderModule.h:226
	DecompressionJobInterface mDecompressionJobInterface;

	// CgsBundleLoaderModule.h:227
	void * mpDecompressionStreamStart;

	// CgsBundleLoaderModule.h:228
	uint32_t muDecompressionStreamSize;

	// CgsBundleLoaderModule.h:231
	bool mbStreamJobStarted;

	// CgsBundleLoaderModule.h:232
	bool mbOnLastStreamJob;

	// CgsBundleLoaderModule.h:233
	Job mStreamJob;

	// CgsBundleLoaderModule.h:234
	StreamDistributeData mStreamJobData;

	// CgsBundleLoaderModule.h:237
	void * mpJobEntryBuffer;

	// CgsBundleLoaderModule.h:240
	InputBuffer_Record::PoolReceiveQueue mPoolReceiveQueueCache;

	// CgsBundleLoaderModule.h:242
	int32_t miNextFixUpRequestIndex;

	// CgsBundleLoaderModule.h:244
	int32_t miMaxPartialFixups;

	// CgsBundleLoaderModule.h:246
	uint64_t muLoadStartTime;

	// CgsBundleLoaderModule.h:247
	uint64_t muTimerTrace;

public:
	// CgsBundleLoaderModule.h:350
	uint32_t GetMemoryOverhead(const CgsResource::BundleLoaderModule::InitOptions *);

	// CgsBundleLoaderModule.cpp:72
	virtual void Construct(const CgsResource::BundleLoaderModule::InitOptions *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// CgsBundleLoaderModule.cpp:147
	virtual bool Prepare();

	// CgsBundleLoaderModule.cpp:211
	virtual bool Release();

	// CgsBundleLoaderModule.cpp:259
	virtual void Destruct();

	// CgsBundleLoaderModule.cpp:279
	void Update(IOBufferStack *, IOBufferStack *, const InputBuffer_Update *, OutputBuffer *);

	// CgsBundleLoaderModule.cpp:332
	void RecordPostUpdateEvents(const InputBuffer_Record *);

private:
	// CgsBundleLoaderModule.cpp:400
	void ProcessBundleLoadRequests(const InputBuffer_Update *, OutputBuffer *);

	// CgsBundleLoaderModule.cpp:452
	void ProcessPoolResponses(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:351
	void ProcessReceiverQueue(const InputBuffer_Update *, OutputBuffer *);

	// CgsBundleLoaderModule.cpp:701
	void PostLoadFinishedEvent(OutputBuffer *, const LoadBundleRequest *, CgsResource::Events::LoadBundleResponse::EResult);

	// CgsBundleLoaderModule.h:272
	void HackySetupStream();

	// CgsBundleLoaderModule.cpp:559
	void ProcessBundleHeader();

	// CgsBundleLoaderModule.cpp:606
	void ProcessDebugData();

	// CgsBundleLoaderModule.cpp:624
	void ProcessBundleEntryList(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:732
	// Declaration
	void UpdateStream(OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBundleLoaderModule.cpp:758
		using namespace CgsDev::Message;

	}

	// CgsBundleLoaderModule.cpp:1565
	bool MoveToNextResource();

	// CgsBundleLoaderModule.cpp:1634
	bool MoveToFirstResource();

	// CgsBundleLoaderModule.cpp:946
	bool StreamIdleFunc(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:990
	bool StreamHeaderFunc();

	// CgsBundleLoaderModule.cpp:1024
	bool StreamDebugDataFunc();

	// CgsBundleLoaderModule.cpp:1085
	bool StreamEntryListFunc(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:1134
	bool StreamDataFunc(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:1222
	bool StreamDataAsJobFunc(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:1343
	bool StreamCompressedDataAsJobFunc(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:1507
	bool StreamDoneFunc(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:1542
	void StreamClose(OutputBuffer *);

	// CgsBundleLoaderModule.cpp:1671
	// Declaration
	bool CheckForUnloads(OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBundleLoaderModule.cpp:1688
		using namespace CgsDev::Message;

	}

	// CgsBundleLoaderModule.cpp:1751
	// Declaration
	bool CheckForLoads(OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBundleLoaderModule.cpp:1798
		using namespace CgsDev::Message;

		// CgsBundleLoaderModule.cpp:1864
		using namespace CgsDev::Message;

		// CgsBundleLoaderModule.cpp:1876
		using namespace CgsDev::Message;

	}

	// CgsBundleLoaderModule.cpp:1915
	void SendPartialFixupRequest(OutputBuffer *);

	// CgsBundleLoaderModule.h:374
	ID GetBundleResourceListId(const char *) const;

}

