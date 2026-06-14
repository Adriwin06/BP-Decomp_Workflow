// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// Declaration
			struct Stream {
				// stream.h:61
				enum State {
					STATE_IDLE = 0,
					STATE_RUNNING = 1,
					STATE_STOPPED = 2,
				}

				// stream.h:72
				enum RequestState {
					REQUESTSTATE_FREE = 0,
					REQUESTSTATE_PENDING = 1,
					REQUESTSTATE_EXECUTING = 2,
					REQUESTSTATE_COMPLETED = 3,
					REQUESTSTATE_CANCELLED = 4,
				}

				// stream.h:102
				struct ChunkInfo {
					// stream.h:103
					int reqId;

					// stream.h:104
					unsigned int size;

					// stream.h:105
					void * pData;

				}

				// stream.h:113
				enum ParseReturnValue {
					PARSE_RETURN_MORE_DATA_NEEDED = 0,
					PARSE_RETURN_CHUNK = 1,
					PARSE_RETURN_CHUNK_END_REQ = 2,
				}

				// stream.h:217
				enum ParseStopReason {
					CONTINUE = 0,
					NEED_MORE_DATA = 1,
					END_CHUNK_FOUND = 2,
				}

			}

		}

	}

}

// stream.h:50
struct rw::core::filesys::Stream {
private:
	// stream.h:241
	unsigned int id;

	// stream.h:242
	unsigned int flags;

	// stream.h:243
	Mutex mutex;

	// stream.h:244
	rw::core::filesys::RequestStruct * request;

	// stream.h:245
	int requests;

	// stream.h:246
	ListSingle<rw::core::filesys::FilterStruct> filter;

	// stream.h:247
	ListSingle<rw::core::filesys::TapStruct> tap;

	// stream.h:248
	ListSingle<rw::core::filesys::ChunkStruct> chunk;

	// stream.h:250
	unsigned char * actualbufferstart;

	// stream.h:251
	unsigned char * bufferstart;

	// stream.h:252
	unsigned char * bufferend;

	// stream.h:254
	rw::core::filesys::Stream::State volatile state;

	// stream.h:255
	int prioritylow;

	// stream.h:256
	int priorityhigh;

	// stream.h:257
	int greedylevel;

	// stream.h:258
	bool greedystate;

	// stream.h:259
	int bufferusage;

	// stream.h:260
	unsigned char * datastart;

	// stream.h:261
	unsigned char * datatail;

	// stream.h:262
	unsigned char * dataend;

	// stream.h:263
	rw::core::filesys::RequestStruct * firstreq;

	// stream.h:264
	rw::core::filesys::RequestStruct * curreq;

	// stream.h:265
	rw::core::filesys::RequestStruct * lastreq;

	// stream.h:266
	rw::core::filesys::RequestStruct * freereq;

	// stream.h:268
	rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *) parsefunc;

	// stream.h:269
	void * parsecontext;

	// stream.h:270
	char[256] fname;

	// stream.h:271
	rw::core::filesys::Handle * fhandle;

	// stream.h:272
	int64_t foffset;

	// stream.h:273
	AsyncOp mAsyncOp;

	// stream.h:274
	int64_t readsize;

	// stream.h:275
	int readblocksize;

	// stream.h:276
	uint64_t filesize;

public:
	// stream.h:163
	Stream * Create(int, void *, int, int, rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *), void *);

	// stream.h:164
	void SetFilter(int, bool (*)(void *, void *), void *);

	// stream.h:165
	void SetFilter(bool (*)(void *, void *), void *);

	// stream.h:166
	void Destroy();

	// stream.h:167
	void CloseFileHandle();

	// stream.h:170
	void SetPriority(int, int);

	// stream.h:171
	void SetGreedyLevel(int);

	// stream.h:172
	void SetGreedyState();

	// stream.h:173
	void SetNonGreedyState();

	// stream.h:176
	Stream * CreateTap();

	// stream.h:177
	int TapNum() const;

	// stream.h:180
	int QueueFile(const rw::core::filesys::Handle *, int64_t, rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *), void *);

	// stream.h:181
	int QueueFile(const char *, int64_t, rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *), void *);

	// stream.h:182
	int QueueMem(void *, unsigned int, rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *), void *);

	// stream.h:183
	void CancelRequest(int);

	// stream.h:184
	void Kill();

	// stream.h:187
	rw::core::filesys::Stream::ChunkInfo * GetChunk();

	// stream.h:188
	void ReleaseChunk(rw::core::filesys::Stream::ChunkInfo *);

	// stream.h:191
	int Gettable() const;

	// stream.h:192
	int Gettable(int) const;

	// stream.h:193
	rw::core::filesys::Stream::State GetState() const;

	// stream.h:194
	bool IsEndOfStream() const;

	// stream.h:195
	int BufferSize() const;

	// stream.h:196
	int BufferUsage() const;

	// stream.h:197
	int TapRequestId() const;

	// stream.h:198
	rw::core::filesys::Stream::RequestState GetRequestState(int) const;

	// stream.h:199
	uint64_t GetFileSize() const;

private:
	// stream.h:205
	void Stream(int, void *, int, int, rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *), void *);

	// stream.h:208
	void ~Stream();

	// stream.h:211
	void Stream(const Stream &);

	// stream.h:212
	Stream & operator=(const Stream &);

	// stream.h:214
	void * operator new(size_t);

	// stream.h:215
	void operator delete(void *);

	// stream.h:224
	Stream * GetStreamHeaderFromHandle(const Stream *) const;

	// stream.h:225
	void decbufferusage(int);

	// stream.h:226
	rw::core::filesys::RequestStruct * getfreerequest();

	// stream.h:227
	void queuerequest(rw::core::filesys::RequestStruct *);

	// stream.h:228
	rw::core::filesys::RequestStruct * locaterequest(int);

	// stream.h:229
	void freerequest(rw::core::filesys::RequestStruct *);

	// stream.h:230
	rw::core::filesys::Stream::ParseStopReason parsechunks();

	// stream.h:231
	void opencallback(AsyncOp *);

	// stream.h:232
	void closecallback(AsyncOp *);

	// stream.h:233
	void filereadcallback(AsyncOp *);

	// stream.h:234
	void readcallback();

	// stream.h:236
	void startnextrequest(int);

	// stream.h:237
	void restartstream(int);

	// stream.h:239
	int QueueFile(const char *, rw::core::filesys::Handle *, int64_t, rw::core::filesys::Stream::ParseReturnValue (*)(void *, unsigned int, int, void *, bool (*)(void *, void *), void *, unsigned int *), void *);

}

