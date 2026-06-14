// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:56
struct CgsResource::Events::BundleLoaderEvent : public Event {
protected:
	// CgsResourceIOEvents.h:101
	BaseEventReceiverQueue * mpUser;

	// CgsResourceIOEvents.h:102
	int32_t miEventId;

	// CgsResourceIOEvents.h:103
	bool mbLiveUpdateReplace;

	// CgsResourceIOEvents.h:104
	char[128] macFileName;

	// CgsResourceIOEvents.h:105
	int32_t miPoolId;

public:
	// CgsResourceIOEvents.h:65
	void Construct(BaseEventReceiverQueue *, int32_t, const char *, int32_t, bool);

	// CgsResourceIOEvents.h:68
	BaseEventReceiverQueue * GetUser() const;

	// CgsResourceIOEvents.h:71
	int32_t GetEventId() const;

	// CgsResourceIOEvents.h:74
	const char * GetFileName() const;

	// CgsResourceIOEvents.h:77
	int32_t GetPoolId() const;

	// CgsResourceIOEvents.h:80
	bool GetLiveUpdateReplace() const;

	// CgsResourceIOEvents.h:84
	void SetUser(BaseEventReceiverQueue *);

	// CgsResourceIOEvents.h:87
	void SetEventId(int32_t);

	// CgsResourceIOEvents.h:91
	void SetFileName(const char *);

	// CgsResourceIOEvents.h:95
	void SetPoolId(int32_t);

	// CgsResourceIOEvents.h:98
	void SetLiveUpdateReplace(bool);

}

// CgsResourceIOEvents.h:118
struct CgsResource::Events::LoadBundleRequest : public BundleLoaderEvent {
private:
	// CgsResourceIOEvents.h:145
	bool mbAllowFailiure;

	// CgsResourceIOEvents.h:146
	bool mbUseHDCache;

public:
	// CgsResourceIOEvents.h:129
	void Construct(BaseEventReceiverQueue *, int32_t, const char *, int32_t, bool, bool, bool);

	// CgsResourceIOEvents.h:132
	bool GetAllowFailiure() const;

	// CgsResourceIOEvents.h:135
	void SetAllowFailiure(bool);

	// CgsResourceIOEvents.h:138
	void SetUseHDCache(bool);

	// CgsResourceIOEvents.h:141
	bool GetUseHDCache() const;

}

// CgsResourceIOEvents.h:193
struct CgsResource::Events::UnloadBundleRequest : public BundleLoaderEvent {
}

// CgsResourceIOEvents.h:221
struct CgsResource::Events::PoolEvent : public Event {
protected:
	// CgsResourceIOEvents.h:251
	BaseEventReceiverQueue * mpUser;

	// CgsResourceIOEvents.h:252
	int32_t miEventId;

	// CgsResourceIOEvents.h:253
	int32_t miPoolId;

public:
	// CgsResourceIOEvents.h:228
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t);

	// CgsResourceIOEvents.h:231
	void SetUser(BaseEventReceiverQueue *);

	// CgsResourceIOEvents.h:234
	BaseEventReceiverQueue * GetUser() const;

	// CgsResourceIOEvents.h:237
	int32_t GetEventId() const;

	// CgsResourceIOEvents.h:240
	void SetEventId(int32_t);

	// CgsResourceIOEvents.h:243
	int32_t GetPoolId() const;

	// CgsResourceIOEvents.h:247
	void SetPoolId(int32_t);

}

// CgsResourceIOEvents.h:266
struct CgsResource::Events::CreatePoolRequest : public PoolEvent {
	// CgsResourceIOEvents.h:275
	char[32] mpcName;

	// CgsResourceIOEvents.h:276
	int32_t miDeletionDelayFrames;

	// CgsResourceIOEvents.h:277
	uint32_t muMaxResources;

	// CgsResourceIOEvents.h:278
	uint32_t muMaxImports;

	// CgsResourceIOEvents.h:279
	Entry::ResourceDescriptor mDescriptor;

	// CgsResourceIOEvents.h:280
	uint32_t[3] mauMaxResources;

	// CgsResourceIOEvents.h:281
	int32_t miNumDependencies;

	// CgsResourceIOEvents.h:282
	int32_t[16] maiDependencyIds;

	// CgsResourceIOEvents.h:283
	int32_t miBankId;

	// CgsResourceIOEvents.h:284
	int32_t miParentBankId;

	// CgsResourceIOEvents.h:285
	bool mbAllowDefragmentation;

public:
	// CgsResourceIOEvents.h:273
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t);

}

// CgsResourceIOEvents.h:298
struct CgsResource::Events::DeletePoolRequest : public PoolEvent {
}

// CgsResourceIOEvents.h:314
struct CgsResource::Events::AcquireResourceRequest : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:339
	ID mResourceId;

public:
	// CgsResourceIOEvents.h:322
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, ID);

	// CgsResourceIOEvents.h:329
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, const char *);

	// CgsResourceIOEvents.h:332
	ID GetResourceId() const;

	// CgsResourceIOEvents.h:335
	void SetResourceId(ID);

}

// CgsResourceIOEvents.h:410
struct CgsResource::Events::AcquireResourceListRequest : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:451
	ID mListResourceId;

	// CgsResourceIOEvents.h:452
	ResourceHandle * mpHandles;

	// CgsResourceIOEvents.h:453
	int32_t miMaxHandles;

public:
	// CgsResourceIOEvents.h:420
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, ID, ResourceHandle *, int32_t);

	// CgsResourceIOEvents.h:429
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, const char *, ResourceHandle *, int32_t);

	// CgsResourceIOEvents.h:432
	ID GetListResourceId() const;

	// CgsResourceIOEvents.h:435
	void SetListResourceId(ID);

	// CgsResourceIOEvents.h:438
	ResourceHandle * GetHandles() const;

	// CgsResourceIOEvents.h:441
	void SetHandles(ResourceHandle *);

	// CgsResourceIOEvents.h:444
	int32_t GetMaxHandles() const;

	// CgsResourceIOEvents.h:447
	void SetMaxHandles(int32_t);

}

// CgsResourceIOEvents.h:465
struct CgsResource::Events::UnacquireResourceRequest : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:483
	ID mResourceId;

public:
	// CgsResourceIOEvents.h:473
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, ID);

	// CgsResourceIOEvents.h:476
	ID GetResourceId() const;

	// CgsResourceIOEvents.h:479
	void SetResourceId(ID);

}

// CgsResourceIOEvents.h:571
struct CgsResource::Events::InvalidatePoolRequest : public PoolEvent {
}

// CgsResourceIOEvents.h:585
struct CgsResource::Events::ValidatePoolRequest : public PoolEvent {
}

// CgsResourceIOEvents.h:798
struct CgsResource::Events::AcquireResourceResponse : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:823
	ID mResourceId;

	// CgsResourceIOEvents.h:824
	ResourceHandle mHandle;

public:
	// CgsResourceIOEvents.h:807
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, ID, const ResourceHandle &);

	// CgsResourceIOEvents.h:810
	ID GetResourceId() const;

	// CgsResourceIOEvents.h:813
	void SetResourceId(ID);

	// CgsResourceIOEvents.h:816
	const ResourceHandle & GetHandle() const;

	// CgsResourceIOEvents.h:819
	void SetHandle(const ResourceHandle &);

}

// CgsResourceIOEvents.h:927
struct CgsResource::Events::FileEvent : public Event {
protected:
	// CgsResourceIOEvents.h:945
	BaseEventReceiverQueue * mpUser;

	// CgsResourceIOEvents.h:946
	int32_t miEventId;

public:
	// CgsResourceIOEvents.h:933
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsResourceIOEvents.h:936
	BaseEventReceiverQueue * GetUser() const;

	// CgsResourceIOEvents.h:939
	int32_t GetEventId() const;

	// CgsResourceIOEvents.h:942
	void SetEventId(int32_t);

}

// CgsResourceIOEvents.h:959
struct CgsResource::Events::OpenStreamRequest : public FileEvent {
protected:
	// CgsResourceIOEvents.h:1019
	char[128] macFileName;

	// CgsResourceIOEvents.h:1020
	void * mpBuffer;

	// CgsResourceIOEvents.h:1021
	uint32_t muBufferSize;

	// CgsResourceIOEvents.h:1022
	uint32_t muNumBlocks;

	// CgsResourceIOEvents.h:1023
	int32_t miNormalPriority;

	// CgsResourceIOEvents.h:1024
	int32_t miHighPriority;

	// CgsResourceIOEvents.h:1025
	bool mbUseHDCache;

public:
	// CgsResourceIOEvents.h:972
	void Construct(BaseEventReceiverQueue *, int32_t, const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool);

	// CgsResourceIOEvents.h:975
	const char * GetFileName() const;

	// CgsResourceIOEvents.h:978
	uint32_t GetBufferSize() const;

	// CgsResourceIOEvents.h:981
	uint32_t GetNumBlocks() const;

	// CgsResourceIOEvents.h:984
	int32_t GetNormalPriority() const;

	// CgsResourceIOEvents.h:987
	int32_t GetHighPriority() const;

	// CgsResourceIOEvents.h:990
	void * GetBuffer() const;

	// CgsResourceIOEvents.h:993
	void SetFileName(const char *);

	// CgsResourceIOEvents.h:996
	void SetBufferSize(uint32_t);

	// CgsResourceIOEvents.h:999
	void SetNumBlocks(uint32_t);

	// CgsResourceIOEvents.h:1002
	void SetNormalPriority(int32_t);

	// CgsResourceIOEvents.h:1005
	void SetHighPriority(int32_t);

	// CgsResourceIOEvents.h:1008
	void SetBuffer(void *);

	// CgsResourceIOEvents.h:1011
	void SetUseHDCache(bool);

	// CgsResourceIOEvents.h:1014
	bool GetUseHDCache() const;

}

// CgsResourceIOEvents.h:1037
struct CgsResource::Events::OpenReadStreamRequest : public OpenStreamRequest {
}

// CgsResourceIOEvents.h:1050
struct CgsResource::Events::OpenWriteStreamRequest : public OpenStreamRequest {
}

// CgsResourceIOEvents.h:1063
struct CgsResource::Events::ReadStreamEvent : public FileEvent {
protected:
	// CgsResourceIOEvents.h:1080
	ReadStream mStream;

public:
	// CgsResourceIOEvents.h:1070
	void Construct(BaseEventReceiverQueue *, int32_t, ReadStream);

	// CgsResourceIOEvents.h:1073
	ReadStream GetStream() const;

	// CgsResourceIOEvents.h:1076
	void SetStream(ReadStream);

}

// CgsResourceIOEvents.h:1093
struct CgsResource::Events::WriteStreamEvent : public FileEvent {
protected:
	// CgsResourceIOEvents.h:1110
	WriteStream mStream;

public:
	// CgsResourceIOEvents.h:1100
	void Construct(BaseEventReceiverQueue *, int32_t, WriteStream);

	// CgsResourceIOEvents.h:1103
	WriteStream GetStream() const;

	// CgsResourceIOEvents.h:1106
	void SetStream(WriteStream);

}

// CgsResourceIOEvents.h:1123
struct CgsResource::Events::CloseReadStreamRequest : public ReadStreamEvent {
}

// CgsResourceIOEvents.h:1136
struct CgsResource::Events::CloseWriteStreamRequest : public WriteStreamEvent {
}

// CgsResourceIOEvents.h:1201
struct CgsResource::Events::OpenFileRequest : public FileEvent {
protected:
	// CgsResourceIOEvents.h:1239
	char[128] macFileName;

	// CgsResourceIOEvents.h:1240
	CgsFileSystem::FileAccess meFileAccess;

	// CgsResourceIOEvents.h:1241
	int32_t miPriority;

	// CgsResourceIOEvents.h:1242
	bool mbUseHDCache;

public:
	// CgsResourceIOEvents.h:1211
	void Construct(BaseEventReceiverQueue *, int32_t, const char *, CgsFileSystem::FileAccess, int32_t, bool);

	// CgsResourceIOEvents.h:1214
	const char * GetFileName() const;

	// CgsResourceIOEvents.h:1217
	CgsFileSystem::FileAccess GetFileAccess() const;

	// CgsResourceIOEvents.h:1220
	int32_t GetPriority() const;

	// CgsResourceIOEvents.h:1223
	void SetFileName(const char *);

	// CgsResourceIOEvents.h:1226
	void SetFileAccess(CgsFileSystem::FileAccess);

	// CgsResourceIOEvents.h:1229
	void SetPriority(int32_t);

	// CgsResourceIOEvents.h:1232
	void SetUseHDCache(bool);

	// CgsResourceIOEvents.h:1235
	bool GetUseHDCache() const;

}

// CgsResourceIOEvents.h:1254
struct CgsResource::Events::FileHandleEvent : public FileEvent {
protected:
	// CgsResourceIOEvents.h:1271
	FileHandle mFile;

public:
	// CgsResourceIOEvents.h:1261
	void Construct(BaseEventReceiverQueue *, int32_t, FileHandle);

	// CgsResourceIOEvents.h:1264
	FileHandle GetFileHandle() const;

	// CgsResourceIOEvents.h:1267
	void SetFileHandle(FileHandle);

}

// CgsResourceIOEvents.h:1283
struct CgsResource::Events::CloseFileRequest : public FileHandleEvent {
}

// CgsResourceIOEvents.h:1324
struct CgsResource::Events::RegisterMemFileRequest : public Event {
private:
	// CgsResourceIOEvents.h:1350
	char[256] macFileName;

	// CgsResourceIOEvents.h:1351
	void * mpData;

	// CgsResourceIOEvents.h:1352
	uint64_t muSize;

public:
	// CgsResourceIOEvents.h:1328
	void Construct(const char *, void *, uint64_t);

	// CgsResourceIOEvents.h:1331
	void * GetData() const;

	// CgsResourceIOEvents.h:1334
	void SetData(void *);

	// CgsResourceIOEvents.h:1337
	uint64_t GetSize() const;

	// CgsResourceIOEvents.h:1340
	void SetSize(uint64_t);

	// CgsResourceIOEvents.h:1343
	const char * GetFileName() const;

	// CgsResourceIOEvents.h:1346
	void SetFileName(const char *);

}

// CgsResourceIOEvents.h:1365
struct CgsResource::Events::UnregisterMemFileRequest : public Event {
private:
	// CgsResourceIOEvents.h:1379
	char[256] macFileName;

public:
	// CgsResourceIOEvents.h:1369
	void Construct(const char *);

	// CgsResourceIOEvents.h:1372
	const char * GetFileName() const;

	// CgsResourceIOEvents.h:1375
	void SetFileName(const char *);

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceListResponse;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:651
struct CgsResource::Events::AcquireResourceListResponse : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:683
	ID mListResourceId;

	// CgsResourceIOEvents.h:684
	ResourceHandle * mpHandles;

	// CgsResourceIOEvents.h:685
	int32_t miNumHandles;

public:
	// CgsResourceIOEvents.h:661
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, ID, ResourceHandle *, int32_t);

	// CgsResourceIOEvents.h:664
	ID GetListResourceId() const;

	// CgsResourceIOEvents.h:667
	void SetListResourceId(ID);

	// CgsResourceIOEvents.h:670
	ResourceHandle * GetHandles() const;

	// CgsResourceIOEvents.h:673
	void SetHandles(ResourceHandle *);

	// CgsResourceIOEvents.h:676
	int32_t GetNumHandles() const;

	// CgsResourceIOEvents.h:679
	void SetNumHandles(int32_t);

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct PoolEvent;

		struct CreatePoolRequest;

	}

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		// Declaration
		struct InvalidatePoolResponse {
			// CgsResourceIOEvents.h:870
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_IN_USE = 1,
				E_RESULT_COUNT = 2,
			}

		}

		struct ValidatePoolResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:867
struct CgsResource::Events::InvalidatePoolResponse : public PoolEvent {
private:
	// CgsResourceIOEvents.h:897
	ResourceHandle::Resource mResource;

	// CgsResourceIOEvents.h:898
	Entry::ResourceDescriptor mDescriptor;

	// CgsResourceIOEvents.h:899
	CgsResource::Events::InvalidatePoolResponse::EResult meResult;

public:
	// CgsResourceIOEvents.h:884
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, CgsResource::Events::InvalidatePoolResponse::EResult, const ResourceHandle::Resource &, const Entry::ResourceDescriptor &);

	// CgsResourceIOEvents.h:887
	const ResourceHandle::Resource & GetResource() const;

	// CgsResourceIOEvents.h:890
	const Entry::ResourceDescriptor & GetDescriptor() const;

	// CgsResourceIOEvents.h:893
	CgsResource::Events::InvalidatePoolResponse::EResult GetResult() const;

}

// CgsResourceIOEvents.h:912
struct CgsResource::Events::ValidatePoolResponse : public PoolEvent {
}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct PoolEvent;

		struct CreatePoolRequest;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct OpenFileResponse;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:1296
struct CgsResource::Events::OpenFileResponse : public FileHandleEvent {
}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		// Declaration
		struct LoadBundleResponse {
			// CgsResourceIOEvents.h:161
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_OUT_OF_MEMORY = 1,
			}

		}

		struct UnloadBundleRequest;

		struct UnloadBundleResponse;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		// Declaration
		struct InvalidatePoolResponse {
			// CgsResourceIOEvents.h:870
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_IN_USE = 1,
				E_RESULT_COUNT = 2,
			}

		}

		struct ValidatePoolResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:158
struct CgsResource::Events::LoadBundleResponse : public BundleLoaderEvent {
private:
	// CgsResourceIOEvents.h:180
	CgsResource::Events::LoadBundleResponse::EResult meResult;

public:
	// CgsResourceIOEvents.h:173
	void Construct(BaseEventReceiverQueue *, int32_t, const char *, int32_t, CgsResource::Events::LoadBundleResponse::EResult);

	// CgsResourceIOEvents.h:176
	CgsResource::Events::LoadBundleResponse::EResult GetResult() const;

}

// CgsResourceIOEvents.h:207
struct CgsResource::Events::UnloadBundleResponse : public BundleLoaderEvent {
}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct PoolEvent;

		struct AcquireResourceResponse;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		// Declaration
		struct LoadBundleResponse {
			// CgsResourceIOEvents.h:161
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_OUT_OF_MEMORY = 1,
			}

		}

		struct UnloadBundleRequest;

		struct UnloadBundleResponse;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenReadStreamResponse;

		struct CloseReadStreamResponse;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:1149
struct CgsResource::Events::OpenReadStreamResponse : public ReadStreamEvent {
}

// CgsResourceIOEvents.h:1175
struct CgsResource::Events::CloseReadStreamResponse : public ReadStreamEvent {
}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct GetLoadedResourceListRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct AllocateResourceListRequest;

		struct FixUpAndResolveResourceListRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct CreatePoolResponse;

		struct DeletePoolResponse;

		struct AllocateResourceListResponse;

		struct AcquireResourceListResponse;

		struct FixUpAndResolveResourceListResponse;

		struct UnloadResourceListRequest;

		struct UnloadResourceListResponse;

		struct AcquireResourceResponse;

		struct UnacquireResourceResponse;

		// Declaration
		struct InvalidatePoolResponse {
			// CgsResourceIOEvents.h:870
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_IN_USE = 1,
				E_RESULT_COUNT = 2,
			}

		}

		struct ValidatePoolResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:351
struct CgsResource::Events::GetLoadedResourceListRequest : public PoolEvent {
public:
	// CgsResourceIOEvents.h:358
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t);

}

// CgsResourceIOEvents.h:495
struct CgsResource::Events::AllocateResourceListRequest : public PoolEvent {
	// CgsResourceIOEvents.h:502
	ID mListId;

	// CgsResourceIOEvents.h:503
	const CgsResource::BundleV2::ResourceEntry * mpEntries;

	// CgsResourceIOEvents.h:504
	char * mpcDebugData;

	// CgsResourceIOEvents.h:505
	int32_t miNumEntries;

	// CgsResourceIOEvents.h:506
	bool * mpNeeds;

	// CgsResourceIOEvents.h:507
	ResourceHandle::Resource * mpResources;

	// CgsResourceIOEvents.h:508
	bool mbLiveUpdateReplace;

	// CgsResourceIOEvents.h:509
	bool mbAllowFailiure;

	// CgsResourceIOEvents.h:510
	bool mbCompressedBundle;

public:
	// CgsResourceIOEvents.h:500
	void Construct(int32_t, int32_t);

}

// CgsResourceIOEvents.h:522
struct CgsResource::Events::FixUpAndResolveResourceListRequest : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:554
	ID mListId;

	// CgsResourceIOEvents.h:555
	int32_t miFirstIndex;

	// CgsResourceIOEvents.h:556
	int32_t miCount;

	// CgsResourceIOEvents.h:557
	bool mbFinalFixup;

	// CgsResourceIOEvents.h:558
	bool mbFixUpDependencies;

public:
	// CgsResourceIOEvents.h:532
	void Construct(int32_t, int32_t, ID, int32_t, int32_t, bool, bool);

	// CgsResourceIOEvents.h:535
	ID GetListId() const;

	// CgsResourceIOEvents.h:538
	void SetListId(ID);

	// CgsResourceIOEvents.h:541
	int32_t GetFirstIndex() const;

	// CgsResourceIOEvents.h:544
	int32_t GetCount() const;

	// CgsResourceIOEvents.h:547
	bool IsFinalFixup() const;

	// CgsResourceIOEvents.h:550
	bool IsFixUpDependenciesSet() const;

}

// CgsResourceIOEvents.h:599
struct CgsResource::Events::CreatePoolResponse : public PoolEvent {
}

// CgsResourceIOEvents.h:612
struct CgsResource::Events::DeletePoolResponse : public PoolEvent {
}

// CgsResourceIOEvents.h:626
struct CgsResource::Events::AllocateResourceListResponse : public PoolEvent {
	// CgsResourceIOEvents.h:633
	ID mListId;

	// CgsResourceIOEvents.h:634
	const CgsResource::BundleV2::ResourceEntry * mpEntries;

	// CgsResourceIOEvents.h:635
	int32_t miNumEntries;

	// CgsResourceIOEvents.h:636
	bool * mpNeeds;

	// CgsResourceIOEvents.h:637
	ResourceHandle::Resource * mpResources;

	// CgsResourceIOEvents.h:638
	CgsResource::Entry * mpListEntry;

	// CgsResourceIOEvents.h:639
	bool mbFailed;

public:
	// CgsResourceIOEvents.h:631
	void Construct(int32_t, int32_t);

}

// CgsResourceIOEvents.h:697
struct CgsResource::Events::FixUpAndResolveResourceListResponse : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:727
	ResourceHandle mListHandle;

	// CgsResourceIOEvents.h:728
	const ID * mpIds;

	// CgsResourceIOEvents.h:729
	int32_t miNumEntries;

	// CgsResourceIOEvents.h:730
	bool mbFinished;

public:
	// CgsResourceIOEvents.h:705
	void Construct(int32_t, int32_t, const ID *, int32_t, ResourceHandle);

	// CgsResourceIOEvents.h:708
	const ID * GetIds() const;

	// CgsResourceIOEvents.h:711
	void SetIds(const ID *);

	// CgsResourceIOEvents.h:714
	int32_t GetNumEntries() const;

	// CgsResourceIOEvents.h:717
	void SetNumEntries(int32_t);

	// CgsResourceIOEvents.h:720
	ResourceHandle GetListHandle() const;

	// CgsResourceIOEvents.h:723
	void SetListHandle(ResourceHandle);

}

// CgsResourceIOEvents.h:742
struct CgsResource::Events::UnloadResourceListRequest : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:758
	ID mListId;

public:
	// CgsResourceIOEvents.h:748
	void Construct(int32_t, int32_t, ID);

	// CgsResourceIOEvents.h:751
	const ID GetListId() const;

	// CgsResourceIOEvents.h:754
	void SetListId(ID);

}

// CgsResourceIOEvents.h:770
struct CgsResource::Events::UnloadResourceListResponse : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:786
	ID mListId;

public:
	// CgsResourceIOEvents.h:776
	void Construct(int32_t, int32_t, ID);

	// CgsResourceIOEvents.h:779
	const ID GetListId() const;

	// CgsResourceIOEvents.h:782
	void SetListId(ID);

}

// CgsResourceIOEvents.h:836
struct CgsResource::Events::UnacquireResourceResponse : public PoolEvent {
protected:
	// CgsResourceIOEvents.h:855
	ID mResourceId;

public:
	// CgsResourceIOEvents.h:845
	void Construct(BaseEventReceiverQueue *, int32_t, int32_t, ID);

	// CgsResourceIOEvents.h:848
	ID GetResourceId() const;

	// CgsResourceIOEvents.h:851
	void SetResourceId(ID);

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		struct UnloadBundleRequest;

		struct UnloadBundleResponse;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct AcquireResourceResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceIOEvents.h:39
	namespace Events {
		struct BundleLoaderEvent;

		struct LoadBundleRequest;

		// Declaration
		struct LoadBundleResponse {
			// CgsResourceIOEvents.h:161
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_OUT_OF_MEMORY = 1,
			}

		}

		struct UnloadBundleRequest;

		struct UnloadBundleResponse;

		struct PoolEvent;

		struct CreatePoolRequest;

		struct DeletePoolRequest;

		struct AcquireResourceRequest;

		struct GetLoadedResourceListRequest;

		struct AcquireResourceListRequest;

		struct UnacquireResourceRequest;

		struct AllocateResourceListRequest;

		struct FixUpAndResolveResourceListRequest;

		struct InvalidatePoolRequest;

		struct ValidatePoolRequest;

		struct CreatePoolResponse;

		struct DeletePoolResponse;

		struct AllocateResourceListResponse;

		struct AcquireResourceListResponse;

		struct FixUpAndResolveResourceListResponse;

		struct UnloadResourceListRequest;

		struct UnloadResourceListResponse;

		struct AcquireResourceResponse;

		struct UnacquireResourceResponse;

		// Declaration
		struct InvalidatePoolResponse {
			// CgsResourceIOEvents.h:870
			enum EResult {
				E_RESULT_SUCCESS = 0,
				E_RESULT_IN_USE = 1,
				E_RESULT_COUNT = 2,
			}

		}

		struct ValidatePoolResponse;

		struct FileEvent;

		struct OpenStreamRequest;

		struct OpenReadStreamRequest;

		struct OpenWriteStreamRequest;

		struct ReadStreamEvent;

		struct WriteStreamEvent;

		struct CloseReadStreamRequest;

		struct CloseWriteStreamRequest;

		struct OpenReadStreamResponse;

		struct CloseReadStreamResponse;

		struct OpenFileRequest;

		struct FileHandleEvent;

		struct CloseFileRequest;

		struct OpenFileResponse;

		struct CloseFileResponse;

		struct RegisterMemFileRequest;

		struct UnregisterMemFileRequest;

	}

}

// CgsResourceIOEvents.h:1309
struct CgsResource::Events::CloseFileResponse : public FileHandleEvent {
}

