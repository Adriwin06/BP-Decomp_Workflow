// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<512>;

	}

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<512> : public VariableEventQueue<512,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<1024>;

	}

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<4096> : public VariableEventQueue<4096,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<1024> : public VariableEventQueue<1024,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<512>;

		struct ResourceRequestQueue<8192>;

		struct ResourceRequestQueue<1024>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<2048> : public VariableEventQueue<2048,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<32768> : public VariableEventQueue<32768,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<8192> : public VariableEventQueue<8192,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<256> : public VariableEventQueue<256,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<3072> : public VariableEventQueue<3072,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<3072>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<512>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<1024>;

		struct ResourceRequestQueue<3072>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

	}

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<256>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<256>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<1024>;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<16384>;

		struct InputBuffer;

		struct OutputBuffer;

		struct ResourceRequestQueue<32768>;

	}

}

// CgsResourceRequestQueue.h:67
struct CgsResource::ResourceIO::ResourceRequestQueue<16384> : public VariableEventQueue<16384,16> {
public:
	// CgsResourceRequestQueue.h:148
	bool CreatePool(const CreatePoolRequest &);

	// CgsResourceRequestQueue.h:155
	bool DeletePool(const DeletePoolRequest &);

	// CgsResourceRequestQueue.h:162
	bool LoadBundle(const LoadBundleRequest &);

	// CgsResourceRequestQueue.h:169
	bool UnloadBundle(const UnloadBundleRequest &);

	// CgsResourceRequestQueue.h:176
	bool AcquireResource(const AcquireResourceRequest &);

	// CgsResourceRequestQueue.h:183
	bool AcquireResourceList(const AcquireResourceListRequest &);

	// CgsResourceRequestQueue.h:190
	bool UnacquireResource(const UnacquireResourceRequest &);

	// CgsResourceRequestQueue.h:197
	bool InvalidatePool(const InvalidatePoolRequest &);

	// CgsResourceRequestQueue.h:204
	bool ValidatePool(const ValidatePoolRequest &);

	// CgsResourceRequestQueue.h:211
	bool CreateAllocator(const CreateAllocatorRequest &);

	// CgsResourceRequestQueue.h:218
	bool DestroyAllocator(const DestroyAllocatorRequest &);

	// CgsResourceRequestQueue.h:225
	bool CreateBank(const CreateBankRequest &);

	// CgsResourceRequestQueue.h:232
	bool CreateResource(const CreateResourceRequest &);

	// CgsResourceRequestQueue.h:239
	bool CreateRwLinearAllocator(const CreateLinearAllocatorRequest &);

	// CgsResourceRequestQueue.h:246
	bool CreateRwGeneralAllocator(const CreateGeneralAllocatorRequest &);

	// CgsResourceRequestQueue.h:253
	bool DestroyBank(const DestroyBankRequest &);

	// CgsResourceRequestQueue.h:260
	bool OpenReadStream(const OpenReadStreamRequest &);

	// CgsResourceRequestQueue.h:267
	bool OpenWriteStream(const OpenWriteStreamRequest &);

	// CgsResourceRequestQueue.h:274
	bool CloseReadStream(const CloseReadStreamRequest &);

	// CgsResourceRequestQueue.h:281
	bool CloseWriteStream(const CloseWriteStreamRequest &);

	// CgsResourceRequestQueue.h:288
	bool OpenFile(const OpenFileRequest &);

	// CgsResourceRequestQueue.h:295
	bool CloseFile(const CloseFileRequest &);

	// CgsResourceRequestQueue.h:302
	bool RegisterMemFile(const RegisterMemFileRequest &);

	// CgsResourceRequestQueue.h:309
	bool UnregisterMemFile(const UnregisterMemFileRequest &);

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<1024>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<4096>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<8192>;

		struct ResourceRequestQueue<1024>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<8192>;

		struct ResourceRequestQueue<1024>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<3072>;

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<512>;

		struct ResourceRequestQueue<8192>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<1024>;

		struct ResourceRequestQueue<3072>;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<1024>;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		struct ResourceRequestQueue<2048>;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceRequestQueue.h:34
	namespace ResourceIO {
		// CgsResourceRequestQueue.h:36
		enum EEventType {
			EVENT_CREATEPOOL = 0,
			EVENT_DELETEPOOL = 1,
			EVENT_LOADBUNDLE = 2,
			EVENT_UNLOADBUNDLE = 3,
			EVENT_ACQUIRERESOURCE = 4,
			EVENT_ACQUIRERESOURCELIST = 5,
			EVENT_UNACQUIRERESOURCE = 6,
			EVENT_INVALIDATEPOOL = 7,
			EVENT_VALIDATEPOOL = 8,
			EVENT_CREATEBANK = 9,
			EVENT_CREATERESOURCE = 10,
			EVENT_CREATERWLINEARALLOCATOR = 11,
			EVENT_CREATERWGENERALALLOCATOR = 12,
			EVENT_DESTROYBANK = 13,
			EVENT_CREATEALLOCATOR = 14,
			EVENT_DESTROYALLOCATOR = 15,
			EVENT_OPENREADSTREAM = 16,
			EVENT_OPENWRITESTREAM = 17,
			EVENT_CLOSEREADSTREAM = 18,
			EVENT_CLOSEWRITESTREAM = 19,
			EVENT_OPENFILE = 20,
			EVENT_CLOSEFILE = 21,
			EVENT_REGISTERMEMFILE = 22,
			EVENT_UNREGISTERMEMFILE = 23,
			EVENT_GETLOADEDRESOURCELIST = 24,
			EVENT_COUNT = 25,
		}

		struct FileSystemStatusInterface;

		struct ResourceRequestQueue<16384>;

		struct InputBuffer;

		struct OutputBuffer;

		struct ResourceRequestQueue<2048>;

		struct ResourceRequestQueue<8192>;

		struct ResourceRequestQueue<256>;

		struct ResourceRequestQueue<32768>;

		struct ResourceRequestQueue<4096>;

		struct ResourceRequestQueue<3072>;

	}

}

