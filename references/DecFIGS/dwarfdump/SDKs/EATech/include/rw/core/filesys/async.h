// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// async.h:55
			const int FILESYS_MAX_PATH = 256;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// Declaration
			struct AsyncOp {
				// async.h:108
				enum OpStatus {
					OPSTATUS_NEW = -3,
					OPSTATUS_FAILED = -2,
					OPSTATUS_CANCELLED = -1,
					OPSTATUS_PENDING = 0,
					OPSTATUS_COMPLETE = 1,
				}

			}

			// async.h:55
			const int FILESYS_MAX_PATH = 256;

		}

	}

}

// async.h:95
struct rw::core::filesys::AsyncOp : public ListNodeS {
private:
	// async.h:206
	rw::core::filesys::AsyncOp::OpStatus volatile mStatus;

	// async.h:207
	bool mCancelled;

	// async.h:208
	bool mIsRead;

	// async.h:209
	int volatile mPriority;

	// async.h:210
	rw::core::filesys::Handle * mFileHandle;

	// async.h:211
	void * mContext;

	// Unknown accessibility
	// async.h:65
	typedef void (AsyncOp *) AsyncOpCallback;

	// async.h:212
	AsyncOp::AsyncOpCallback * mCallbackFunc;

	// async.h:213
	uint64_t mValue;

	// async.h:214
	uint64_t mAmount;

	// async.h:215
	void * mData;

	// async.h:216
	uint64_t mTotalBytes;

	// async.h:217
	rw::core::filesys::Device * mDevice;

	// async.h:218
	rw::core::filesys::AsyncOp::OpStatus (*)(AsyncOp *) mExecFunc;

public:
	// async.h:98
	void AsyncOp();

	// async.h:99
	void ~AsyncOp();

	// async.h:101
	void * operator new(size_t, const char *, unsigned int);

	// async.h:102
	void * operator new(size_t);

	// async.h:103
	void operator delete(void *);

	// async.h:136
	void Open(const char *, unsigned int, AsyncOp::AsyncOpCallback *, void *, int);

	// async.h:142
	void Close(rw::core::filesys::Handle *, AsyncOp::AsyncOpCallback *, void *, int);

	// async.h:151
	void Read(rw::core::filesys::Handle *, void *, uint64_t, uint64_t, AsyncOp::AsyncOpCallback *, void *, int);

	// async.h:160
	void Write(rw::core::filesys::Handle *, const void *, uint64_t, uint64_t, AsyncOp::AsyncOpCallback *, void *, int);

	// async.h:162
	void SetPriority(int);

	// async.h:169
	int GetPriority() const;

	// async.h:174
	void Cancel();

	// async.h:176
	rw::core::filesys::AsyncOp::OpStatus GetStatus(const ThreadTime &);

	// async.h:178
	rw::core::filesys::Handle * GetResultHandle() const;

	// async.h:180
	uint64_t GetResultSize() const;

	// async.h:185
	void * GetContext() const;

	// async.h:194
	void Wait();

private:
	// async.h:200
	rw::core::filesys::AsyncOp::OpStatus DoOpen(AsyncOp *);

	// async.h:201
	rw::core::filesys::AsyncOp::OpStatus DoClose(AsyncOp *);

	// async.h:202
	rw::core::filesys::AsyncOp::OpStatus DoRead(AsyncOp *);

	// async.h:203
	rw::core::filesys::AsyncOp::OpStatus DoWrite(AsyncOp *);

}

