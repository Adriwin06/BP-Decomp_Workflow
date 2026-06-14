// CgsResourceID.h:30
namespace CgsResource {
	// CgsBundleLoaderModuleIO.h:38
	namespace BundleLoaderIO {
	}

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsBundleLoaderModuleIO.h:38
	namespace BundleLoaderIO {
	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsBundleLoaderModuleIO.h:38
	namespace BundleLoaderIO {
	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsBundleLoaderModuleIO.h:38
	namespace BundleLoaderIO {
	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsBundleLoaderModuleIO.h:38
	namespace BundleLoaderIO {
		struct InputBuffer_Update;

		struct InputBuffer_Record;

		struct OutputBuffer;

	}

}

// CgsBundleLoaderModuleIO.h:66
struct CgsResource::BundleLoaderIO::InputBuffer_Update : public IOBuffer {
	// CgsBundleLoaderModuleIO.h:41
	typedef EventQueue<CgsResource::Events::LoadBundleRequest,256> LoadBundleRequestQueue;

private:
	// CgsBundleLoaderModuleIO.h:86
	InputBuffer_Update::LoadBundleRequestQueue mLoadBundleRequestQueue;

	// Unknown accessibility
	// CgsBundleLoaderModuleIO.h:47
	typedef EventQueue<CgsResource::Events::UnloadBundleRequest,256> UnloadBundleRequestQueue;

	// CgsBundleLoaderModuleIO.h:87
	InputBuffer_Update::UnloadBundleRequestQueue mUnloadBundleRequestQueue;

public:
	// CgsBundleLoaderModuleIO.h:71
	void Construct();

	// CgsBundleLoaderModuleIO.h:75
	void Destruct();

	// CgsBundleLoaderModuleIO.h:78
	const InputBuffer_Update::LoadBundleRequestQueue * GetLoadBundleRequestQueue() const;

	// CgsBundleLoaderModuleIO.h:79
	InputBuffer_Update::LoadBundleRequestQueue * GetLoadBundleRequestQueue();

	// CgsBundleLoaderModuleIO.h:81
	const InputBuffer_Update::UnloadBundleRequestQueue * GetUnloadBundleRequestQueue() const;

	// CgsBundleLoaderModuleIO.h:82
	InputBuffer_Update::UnloadBundleRequestQueue * GetUnloadBundleRequestQueue();

}

// CgsBundleLoaderModuleIO.h:100
struct CgsResource::BundleLoaderIO::InputBuffer_Record : public IOBuffer {
	// CgsBundleLoaderModuleIO.h:54
	typedef PoolQueueTemplate<4096> PoolReceiveQueue;

private:
	// CgsBundleLoaderModuleIO.h:117
	InputBuffer_Record::PoolReceiveQueue mPoolReceiveQueue;

public:
	// CgsBundleLoaderModuleIO.h:105
	void Construct();

	// CgsBundleLoaderModuleIO.h:109
	void Destruct();

	// CgsBundleLoaderModuleIO.h:112
	const InputBuffer_Record::PoolReceiveQueue * GetPoolReceiveQueue() const;

	// CgsBundleLoaderModuleIO.h:113
	InputBuffer_Record::PoolReceiveQueue * GetPoolReceiveQueue();

}

// CgsBundleLoaderModuleIO.h:130
struct CgsResource::BundleLoaderIO::OutputBuffer : public IOBuffer {
	// CgsBundleLoaderModuleIO.h:55
	typedef PoolQueueTemplate<4096> PoolSendQueue;

private:
	// CgsBundleLoaderModuleIO.h:156
	OutputBuffer::PoolSendQueue mPoolSendQueue;

	// Unknown accessibility
	// CgsBundleLoaderModuleIO.h:44
	typedef EventQueue<CgsResource::Events::LoadBundleResponse,256> LoadBundleResponseQueue;

	// CgsBundleLoaderModuleIO.h:157
	OutputBuffer::LoadBundleResponseQueue mLoadBundleResponseQueue;

	// Unknown accessibility
	// CgsBundleLoaderModuleIO.h:50
	typedef EventQueue<CgsResource::Events::UnloadBundleResponse,256> UnloadBundleResponseQueue;

	// CgsBundleLoaderModuleIO.h:158
	OutputBuffer::UnloadBundleResponseQueue mUnloadBundleResponseQueue;

	// Unknown accessibility
	// CgsBundleLoaderModuleIO.h:52
	typedef ResourceRequestQueue<256> StreamRequestQueue;

	// CgsBundleLoaderModuleIO.h:160
	OutputBuffer::StreamRequestQueue mStreamRequestQueue;

public:
	// CgsBundleLoaderModuleIO.h:135
	void Construct();

	// CgsBundleLoaderModuleIO.h:139
	void Destruct();

	// CgsBundleLoaderModuleIO.h:142
	const OutputBuffer::PoolSendQueue * GetPoolSendQueue() const;

	// CgsBundleLoaderModuleIO.h:143
	OutputBuffer::PoolSendQueue * GetPoolSendQueue();

	// CgsBundleLoaderModuleIO.h:145
	const OutputBuffer::LoadBundleResponseQueue * GetLoadBundleResponseQueue() const;

	// CgsBundleLoaderModuleIO.h:146
	OutputBuffer::LoadBundleResponseQueue * GetLoadBundleResponseQueue();

	// CgsBundleLoaderModuleIO.h:148
	const OutputBuffer::UnloadBundleResponseQueue * GetUnloadBundleResponseQueue() const;

	// CgsBundleLoaderModuleIO.h:149
	OutputBuffer::UnloadBundleResponseQueue * GetUnloadBundleResponseQueue();

	// CgsBundleLoaderModuleIO.h:151
	const OutputBuffer::StreamRequestQueue * GetStreamRequestQueue() const;

	// CgsBundleLoaderModuleIO.h:152
	OutputBuffer::StreamRequestQueue * GetStreamRequestQueue();

}

