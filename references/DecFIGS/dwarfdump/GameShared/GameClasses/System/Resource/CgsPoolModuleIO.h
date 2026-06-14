// CgsResourceID.h:30
namespace CgsResource {
	// CgsPoolModuleIO.h:36
	namespace PoolIO {
	}

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsPoolModuleIO.h:36
	namespace PoolIO {
	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsPoolModuleIO.h:36
	namespace PoolIO {
	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsPoolModuleIO.h:36
	namespace PoolIO {
	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsPoolModuleIO.h:36
	namespace PoolIO {
		struct PoolQueueTemplate<4096>;

	}

}

// CgsPoolModuleIO.h:78
struct CgsResource::PoolIO::PoolQueueTemplate<4096> : public VariableEventQueue<4096,16> {
public:
	// CgsPoolModuleIO.h:82
	bool AddEvent(const AllocateResourceListRequest &);

	// CgsPoolModuleIO.h:88
	bool AddEvent(const FixUpAndResolveResourceListRequest &);

	// CgsPoolModuleIO.h:94
	bool AddEvent(const UnloadResourceListRequest &);

	// CgsPoolModuleIO.h:100
	bool AddEvent(const AcquireResourceRequest &);

	// CgsPoolModuleIO.h:106
	bool AddEvent(const AcquireResourceListRequest &);

	// CgsPoolModuleIO.h:112
	bool AddEvent(const GetLoadedResourceListRequest &);

	// CgsPoolModuleIO.h:118
	bool AddEvent(const UnacquireResourceRequest &);

	// CgsPoolModuleIO.h:124
	bool AddEvent(const AllocateResourceListResponse &);

	// CgsPoolModuleIO.h:130
	bool AddEvent(const FixUpAndResolveResourceListResponse &);

	// CgsPoolModuleIO.h:136
	bool AddEvent(const UnloadResourceListResponse &);

	// CgsPoolModuleIO.h:142
	bool AddEvent(const AcquireResourceResponse &);

	// CgsPoolModuleIO.h:148
	bool AddEvent(const AcquireResourceListResponse &);

	// CgsPoolModuleIO.h:154
	bool AddEvent(const UnacquireResourceResponse &);

	// CgsPoolModuleIO.h:160
	bool AddEvent(const CreatePoolResponse &);

	// CgsPoolModuleIO.h:166
	bool AddEvent(const DeletePoolResponse &);

	// CgsPoolModuleIO.h:172
	bool AddEvent(const CreatePoolRequest &);

	// CgsPoolModuleIO.h:178
	bool AddEvent(const DeletePoolRequest &);

	// CgsPoolModuleIO.h:184
	bool AddEvent(const InvalidatePoolRequest &);

	// CgsPoolModuleIO.h:190
	bool AddEvent(const ValidatePoolRequest &);

	// CgsPoolModuleIO.h:196
	bool AddEvent(const InvalidatePoolResponse &);

	// CgsPoolModuleIO.h:202
	bool AddEvent(const ValidatePoolResponse &);

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsPoolModuleIO.h:36
	namespace PoolIO {
		struct PoolQueueTemplate<8192>;

		struct InputBuffer;

		struct OutputBuffer;

		struct PoolQueueTemplate<4096>;

	}

}

// CgsPoolModuleIO.h:78
struct CgsResource::PoolIO::PoolQueueTemplate<8192> : public VariableEventQueue<8192,16> {
public:
	// CgsPoolModuleIO.h:82
	bool AddEvent(const AllocateResourceListRequest &);

	// CgsPoolModuleIO.h:88
	bool AddEvent(const FixUpAndResolveResourceListRequest &);

	// CgsPoolModuleIO.h:94
	bool AddEvent(const UnloadResourceListRequest &);

	// CgsPoolModuleIO.h:100
	bool AddEvent(const AcquireResourceRequest &);

	// CgsPoolModuleIO.h:106
	bool AddEvent(const AcquireResourceListRequest &);

	// CgsPoolModuleIO.h:112
	bool AddEvent(const GetLoadedResourceListRequest &);

	// CgsPoolModuleIO.h:118
	bool AddEvent(const UnacquireResourceRequest &);

	// CgsPoolModuleIO.h:124
	bool AddEvent(const AllocateResourceListResponse &);

	// CgsPoolModuleIO.h:130
	bool AddEvent(const FixUpAndResolveResourceListResponse &);

	// CgsPoolModuleIO.h:136
	bool AddEvent(const UnloadResourceListResponse &);

	// CgsPoolModuleIO.h:142
	bool AddEvent(const AcquireResourceResponse &);

	// CgsPoolModuleIO.h:148
	bool AddEvent(const AcquireResourceListResponse &);

	// CgsPoolModuleIO.h:154
	bool AddEvent(const UnacquireResourceResponse &);

	// CgsPoolModuleIO.h:160
	bool AddEvent(const CreatePoolResponse &);

	// CgsPoolModuleIO.h:166
	bool AddEvent(const DeletePoolResponse &);

	// CgsPoolModuleIO.h:172
	bool AddEvent(const CreatePoolRequest &);

	// CgsPoolModuleIO.h:178
	bool AddEvent(const DeletePoolRequest &);

	// CgsPoolModuleIO.h:184
	bool AddEvent(const InvalidatePoolRequest &);

	// CgsPoolModuleIO.h:190
	bool AddEvent(const ValidatePoolRequest &);

	// CgsPoolModuleIO.h:196
	bool AddEvent(const InvalidatePoolResponse &);

	// CgsPoolModuleIO.h:202
	bool AddEvent(const ValidatePoolResponse &);

}

// CgsPoolModuleIO.h:221
struct CgsResource::PoolIO::InputBuffer : public IOBuffer {
	// CgsPoolModuleIO.h:209
	typedef PoolQueueTemplate<8192> PoolInputQueue;

private:
	// CgsPoolModuleIO.h:238
	InputBuffer::PoolInputQueue mPoolInputQueue;

public:
	// CgsPoolModuleIO.h:226
	void Construct();

	// CgsPoolModuleIO.h:230
	void Destruct();

	// CgsPoolModuleIO.h:233
	const InputBuffer::PoolInputQueue * GetPoolInputQueue() const;

	// CgsPoolModuleIO.h:234
	InputBuffer::PoolInputQueue * GetPoolInputQueue();

}

// CgsPoolModuleIO.h:250
struct CgsResource::PoolIO::OutputBuffer : public IOBuffer {
	// CgsPoolModuleIO.h:210
	typedef PoolQueueTemplate<8192> PoolOutputQueue;

private:
	// CgsPoolModuleIO.h:268
	OutputBuffer::PoolOutputQueue mPoolOutputQueue;

	// Unknown accessibility
	// CgsPoolModuleIO.h:67
	typedef ResourceRequestQueue<8192> PoolResourceRequestQueue;

	// CgsPoolModuleIO.h:269
	OutputBuffer::PoolResourceRequestQueue mPoolResourceRequestQueue;

public:
	// CgsPoolModuleIO.h:255
	void Construct();

	// CgsPoolModuleIO.h:259
	void Destruct();

	// CgsPoolModuleIO.h:262
	const OutputBuffer::PoolOutputQueue * GetPoolOutputQueue() const;

	// CgsPoolModuleIO.h:263
	const OutputBuffer::PoolResourceRequestQueue * GetPoolResourceRequestQueue() const;

	// CgsPoolModuleIO.h:264
	OutputBuffer::PoolOutputQueue * GetPoolOutputQueue();

	// CgsPoolModuleIO.h:265
	OutputBuffer::PoolResourceRequestQueue * GetPoolResourceRequestQueue();

}

