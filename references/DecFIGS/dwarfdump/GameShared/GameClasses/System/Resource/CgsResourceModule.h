// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// CgsResourceModule.h:143
extern const int32_t KI_MAX_PENDING_FILE_SYSTEM_RESPONSES = 16;

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct ResourceModule {
		// CgsResourceModule.h:134
		enum EUpdateResult {
			E_RESULT_OK = 0,
			E_RESULT_REQUIRE_STALL = 1,
		}

		// CgsResourceModule.h:146
		struct InitOptions {
			// CgsResourceModule.h:150
			CgsMemory::MemoryModule::InitOptions mMemoryInitOptions;

			// CgsResourceModule.h:151
			CgsResource::BundleLoaderModule::InitOptions mLoaderInitOptions;

			// CgsResourceModule.h:152
			CgsResource::PoolModule::InitOptions mPoolInitOptions;

			// CgsResourceModule.h:153
			DiskLayout * mpDiskLayout;

			// CgsResourceModule.h:155
			DebugComponentParams mDebugParams;

			// CgsResourceModule.h:157
			char[1024] macFileSearchPath;

			// CgsResourceModule.h:158
			const char * mpcDiskCacheDrive;

		public:
			// CgsResourceModule.h:148
			InitOptions();

		}

		// CgsResourceModule.h:143
		extern const int32_t KI_MAX_PENDING_FILE_SYSTEM_RESPONSES = 16;

	}

	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct ResourceModule {
	public:
		~ResourceModule();

		ResourceModule();

		// Unknown accessibility
		// CgsResourceModule.h:143
		extern const int32_t KI_MAX_PENDING_FILE_SYSTEM_RESPONSES = 16;

	}

	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// CgsResourceModule.h:87
void CgsResource::ResourceModule::~ResourceModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:87
void CgsResource::ResourceModule::ResourceModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct ResourceModule {
		// CgsResourceModule.h:99
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_MEMORY = 2,
			E_PREPARESTAGE_FILESYSTEM = 3,
			E_PREPARESTAGE_LOADER = 4,
			E_PREPARESTAGE_POOL = 5,
			E_PREPARESTAGE_DONE = 6,
		}

		// CgsResourceModule.h:110
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_POOL = 1,
			E_RELEASESTAGE_LOADER = 2,
			E_RELEASESTAGE_FILESYSTEM = 3,
			E_RELEASESTAGE_MEMORY = 4,
			E_RELEASESTAGE_MANAGER = 5,
			E_RELEASESTAGE_DONE = 6,
		}

		// CgsResourceModule.h:121
		enum EMemoryRequestType {
			MEMREQTYPE_NONE = 0,
			MEMREQTYPE_EXTERNAL = 1,
			MEMREQTYPE_POOL = 2,
		}

		// CgsResourceModule.h:134
		enum EUpdateResult {
			E_RESULT_OK = 0,
			E_RESULT_REQUIRE_STALL = 1,
		}

		// CgsResourceModule.h:146
		struct InitOptions {
			// CgsResourceModule.h:150
			CgsMemory::MemoryModule::InitOptions mMemoryInitOptions;

			// CgsResourceModule.h:151
			CgsResource::BundleLoaderModule::InitOptions mLoaderInitOptions;

			// CgsResourceModule.h:152
			CgsResource::PoolModule::InitOptions mPoolInitOptions;

			// CgsResourceModule.h:153
			DiskLayout * mpDiskLayout;

			// CgsResourceModule.h:155
			DebugComponentParams mDebugParams;

			// CgsResourceModule.h:157
			char[1024] macFileSearchPath;

			// CgsResourceModule.h:158
			const char * mpcDiskCacheDrive;

		public:
			// CgsResourceModule.h:148
			InitOptions();

		}

		// CgsResourceModule.h:209
		struct PendingFileResponse {
			// CgsResourceModule.h:211
			void * mpResponse;

			// CgsResourceModule.h:212
			CgsResource::ResourceIO::EEventType meEvent;

			// CgsResourceModule.h:213
			uint32_t muFileId;

		}

	}

	// CgsResourceModule.h:43
	const CgsResource::ResourceIO::EEventType[15] kaePoolToResourceMap;

	// CgsResourceModule.h:63
	const CgsResource::ResourceIO::EEventType[7] kaeMemoryToResourceMap;

}

// CgsResourceModule.h:87
struct CgsResource::ResourceModule : public CgsModule::ModuleSingleBuffered {
	// CgsResourceModule.cpp:26
	extern int32_t _miResourceUpdatePerfMon;

	// CgsResourceModule.cpp:27
	extern int32_t _miProcessResourceRequestsPerfMon;

	// CgsResourceModule.cpp:28
	extern int32_t _miUpdateBundleLoaderPerfMon;

	// CgsResourceModule.cpp:29
	extern int32_t _miUpdatePoolPerfMon;

	// CgsResourceModule.cpp:30
	extern int32_t _miUpdateMemoryPerfMon;

	// CgsResourceModule.cpp:31
	extern int32_t _miUpdateFileSystemPerfMon;

	// CgsResourceModule.cpp:32
	extern int32_t _miUpdateOutputPerfMon;

	// CgsResourceModule.h:97
	extern int32_t _miUpdateTrace;

	// CgsResourceModule.h:140
	extern const int32_t kiMaxMemoryRequests = 1024;

	// CgsResourceModule.h:141
	extern const int32_t kiMaxResourceRequests = 1024;

	// CgsResourceModule.h:143
	extern const int32_t KI_MAX_PENDING_FILE_SYSTEM_RESPONSES = 16;

private:
	// CgsResourceModule.h:195
	CgsResource::ResourceModule::EPrepareStage mePrepareStage;

	// CgsResourceModule.h:196
	CgsResource::ResourceModule::EReleaseStage meReleaseStage;

	// CgsResourceModule.h:198
	CgsResource::BundleLoaderModule mBundleLoaderModule;

	// CgsResourceModule.h:199
	CgsResource::PoolModule mPoolModule;

	// CgsResourceModule.h:200
	CgsMemory::MemoryModule mMemoryModule;

	// CgsResourceModule.h:201
	FileSystem mFileSystem;

	// CgsResourceModule.h:204
	DebugComponent mDebugComponent;

	// CgsResourceModule.h:206
	rw::core::GeneralResourceAllocator * mpFileSystemAllocator;

	// CgsResourceModule.h:216
	IndexedPool8<CgsResource::ResourceModule::PendingFileResponse,16> mPendingFileResponses;

public:
	// CgsResourceModule.cpp:1011
	uint32_t GetMemoryOverhead(const CgsResource::ResourceModule::InitOptions *);

	// CgsResourceModule.cpp:74
	virtual void Construct(CgsResource::ResourceModule::InitOptions *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// CgsResourceModule.cpp:191
	virtual bool Prepare();

	// CgsResourceModule.cpp:286
	virtual bool Release();

	// CgsResourceModule.cpp:377
	virtual void Destruct();

	// CgsResourceModule.cpp:398
	CgsResource::ResourceModule::EUpdateResult Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// CgsResourceModule.cpp:1154
	void DebugReportPools(FPoolReportCallback *, void *);

private:
	// CgsResourceModule.cpp:557
	void ProcessMemoryResponses(const OutputBuffer *);

	// CgsResourceModule.cpp:595
	void ProcessResourceRequests(const InputBuffer *, InputBuffer *, InputBuffer_Update *, InputBuffer *);

	// CgsResourceModule.cpp:926
	void ProcessResourceResponses(const OutputBuffer *, const OutputBuffer *);

	// CgsResourceModule.cpp:815
	void ProcessBundleLoaderStreamRequests(const OutputBuffer *);

	// CgsResourceModule.cpp:870
	void ProcessPoolResourceRequests(InputBuffer *, const OutputBuffer *);

	// CgsResourceModule.h:432
	bool AddMemoryRequest(InputBuffer *, const MemoryRequest *, int32_t, CgsResource::ResourceModule::EMemoryRequestType);

	// CgsResourceModule.h:468
	bool AddCreatePoolRequest(InputBuffer *, const CreatePoolRequest *);

	// CgsResourceModule.h:485
	bool AddDeletePoolRequest(InputBuffer *, const DeletePoolRequest *);

	// CgsResourceModule.h:505
	bool AddLoadBundleRequest(InputBuffer_Update *, const LoadBundleRequest *);

	// CgsResourceModule.h:527
	bool AddUnloadBundleRequest(InputBuffer_Update *, const UnloadBundleRequest *);

	// CgsResourceModule.h:546
	bool AddAcquireResourceRequest(InputBuffer *, const AcquireResourceRequest *);

	// CgsResourceModule.h:565
	bool AddAcquireResourceListRequest(InputBuffer *, const AcquireResourceListRequest *);

	// CgsResourceModule.h:584
	bool AddUnacquireResourceRequest(InputBuffer *, const UnacquireResourceRequest *);

	// CgsResourceModule.h:603
	bool AddInvalidatePoolRequest(InputBuffer *, const InvalidatePoolRequest *);

	// CgsResourceModule.h:622
	bool AddValidatePoolRequest(InputBuffer *, const ValidatePoolRequest *);

	// CgsResourceModule.h:641
	bool AddCreateBankRequest(InputBuffer *, const CreateBankRequest *);

	// CgsResourceModule.h:658
	bool AddDestroyBankRequest(InputBuffer *, const DestroyBankRequest *);

	// CgsResourceModule.h:675
	bool AddCreateAllocatorRequest(InputBuffer *, const CreateAllocatorRequest *);

	// CgsResourceModule.h:692
	bool AddDestroyAllocatorRequest(InputBuffer *, const DestroyAllocatorRequest *);

	// CgsResourceModule.h:709
	bool AddCreateResourceRequest(InputBuffer *, const CreateResourceRequest *);

	// CgsResourceModule.h:726
	bool AddCreateLinearAllocatorRequest(InputBuffer *, const CreateLinearAllocatorRequest *);

	// CgsResourceModule.h:743
	bool AddCreateGeneralAllocatorRequest(InputBuffer *, const CreateGeneralAllocatorRequest *);

	// CgsResourceModule.h:759
	bool AddOpenReadStreamRequest(const OpenReadStreamRequest *);

	// CgsResourceModule.h:799
	bool AddOpenWriteStreamRequest(const OpenWriteStreamRequest *);

	// CgsResourceModule.h:847
	bool AddCloseReadStreamRequest(const CloseReadStreamRequest *);

	// CgsResourceModule.h:877
	bool AddCloseWriteStreamRequest(const CloseWriteStreamRequest *);

	// CgsResourceModule.h:910
	bool AddOpenFileRequest(const OpenFileRequest *);

	// CgsResourceModule.h:952
	bool AddCloseFileRequest(const CloseFileRequest *);

	// CgsResourceModule.h:982
	bool AddRegisterMemFileRequest(const RegisterMemFileRequest *);

	// CgsResourceModule.h:1001
	bool AddUnregisterMemFileRequest(const UnregisterMemFileRequest *);

	// CgsResourceBridgeBundleLoaderToPool.cpp:29
	void BridgeBundleLoaderToPool(InputBuffer *, const OutputBuffer *);

	// CgsResourceBridgeBundleLoaderToPool.cpp:43
	void BridgePoolToBundleLoader(InputBuffer_Record *, const OutputBuffer *);

	// CgsResourceModule.cpp:1028
	void ProcessPendingFileSystemResponses();

}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::CreateResourceRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const CreateResourceRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::DestroyBankRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const DestroyBankRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:1030
extern void FileSystemFree<CgsResource::Events::OpenReadStreamResponse>(OpenReadStreamResponse *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:1030
extern void FileSystemFree<CgsResource::Events::CloseReadStreamResponse>(CloseReadStreamResponse *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:1030
extern void FileSystemFree<CgsResource::Events::OpenFileResponse>(OpenFileResponse *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:1030
extern void FileSystemFree<CgsResource::Events::CloseFileResponse>(CloseFileResponse *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:407
extern void FileSystemAlloc<CgsResource::Events::CloseReadStreamResponse>(CloseReadStreamResponse **  lppResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:407
extern void FileSystemAlloc<CgsResource::Events::OpenReadStreamResponse>(OpenReadStreamResponse **  lppResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::CreateBankRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const CreateBankRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::CreateAllocatorRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const CreateAllocatorRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::DestroyAllocatorRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const DestroyAllocatorRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::CreateLinearAllocatorRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const CreateLinearAllocatorRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:450
extern bool AddMemoryRequest<CgsMemory::MemoryIO::CreateGeneralAllocatorRequest>(InputBuffer *  lpMemoryModuleInputBuffer, const const CreateGeneralAllocatorRequest &  lMemoryRequest, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:407
extern void FileSystemAlloc<CgsResource::Events::OpenFileResponse>(OpenFileResponse **  lppResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceModule.h:407
extern void FileSystemAlloc<CgsResource::Events::CloseFileResponse>(CloseFileResponse **  lppResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

