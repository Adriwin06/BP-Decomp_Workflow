// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct StreamerCurrentEntry {
		// BrnBaseStreamer.h:78
		enum EEntryStatus {
			E_STATUS_EMPTY = 0,
			E_STATUS_LOADING = 1,
			E_STATUS_UNLOADING = 2,
			E_STATUS_READY = 3,
		}

	}

	// Declaration
	struct InternalBaseStreamer {
		// BrnBaseStreamer.h:117
		enum EStreamMode {
			E_STREAMMODE_IDLE = 0,
			E_STREAMMODE_LOADING = 1,
			E_STREAMMODE_UNLOADING = 2,
			E_STREAMMODE_COUNT = 3,
		}

		// BrnBaseStreamer.h:125
		enum ELoadStreamStage {
			E_LOADSTREAM_REQUEST = 0,
			E_LOADSTREAM_WAIT = 1,
			E_LOADSTREAM_DONE = 2,
		}

		// BrnBaseStreamer.h:132
		enum EUnloadStreamStage {
			E_UNLOADSTREAM_REQUEST = 0,
			E_UNLOADSTREAM_WAIT = 1,
			E_UNLOADSTREAM_DONE = 2,
		}

		// BrnBaseStreamer.h:139
		enum EAssetStatus {
			E_AS_UNKNOWN = 0,
			E_AS_NOT_IN_LIST = 1,
			E_AS_PENDING_LOAD = 2,
			E_AS_LOADING = 3,
			E_AS_READY = 4,
			E_AS_PENDING_ABORT_LOAD = 5,
			E_AS_UNLOADING = 6,
			E_AS_PENDING_UNLOAD = 7,
		}

	}

}

// BrnBaseStreamer.h:45
struct BrnWorld::StreamerTargetEntry {
private:
	// BrnBaseStreamer.h:59
	CgsID mResourceId;

	// BrnBaseStreamer.h:60
	bool mbSafe;

	// BrnBaseStreamer.h:61
	uint64_t muUserId;

public:
	// BrnBaseStreamer.h:49
	CgsID GetId() const;

	// BrnBaseStreamer.h:52
	bool IsSafe() const;

	// BrnBaseStreamer.h:55
	uint64_t GetUserId() const;

}

// BrnBaseStreamer.h:75
struct BrnWorld::StreamerCurrentEntry {
private:
	// BrnBaseStreamer.h:97
	CgsID mResourceId;

	// BrnBaseStreamer.h:98
	bool mbSafe;

	// BrnBaseStreamer.h:99
	BrnWorld::StreamerCurrentEntry::EEntryStatus meStatus;

	// BrnBaseStreamer.h:100
	uint64_t muUserId;

public:
	// BrnBaseStreamer.h:87
	CgsID GetId() const;

	// BrnBaseStreamer.h:90
	bool IsSafe() const;

	// BrnBaseStreamer.h:93
	BrnWorld::StreamerCurrentEntry::EEntryStatus GetStatus() const;

}

// BrnBaseStreamer.h:299
struct BrnWorld::BaseStreamer<8> : public BrnWorld::InternalBaseStreamer {
private:
	// BrnBaseStreamer.h:309
	StreamerTargetEntry[8] maStreamerTargetEntries;

	// BrnBaseStreamer.h:310
	StreamerTargetEntry[8] maStreamerTargetBuffer;

	// BrnBaseStreamer.h:311
	StreamerCurrentEntry[8] maStreamerCurrentEntries;

	// BrnBaseStreamer.h:312
	int32_t[8] maPendingEntries;

protected:
	// BrnBaseStreamer.h:425
	void Construct(int, bool, BrnResource::EAssetSet, bool);

}

// BrnBaseStreamer.h:114
struct BrnWorld::InternalBaseStreamer {
	int (*)(...) * _vptr.InternalBaseStreamer;

private:
	// BrnBaseStreamer.h:233
	StreamerTargetEntry * mpTargetEntryList;

	// BrnBaseStreamer.h:234
	StreamerTargetEntry * mpPotentialList;

	// BrnBaseStreamer.h:235
	StreamerCurrentEntry * mpCurrentEntryList;

	// BrnBaseStreamer.h:236
	int32_t miStreamListLength;

	// BrnBaseStreamer.h:237
	int32_t miPotentialListLength;

	// BrnBaseStreamer.h:238
	RequestInterface<2048> mGDRequestInterface;

	// BrnBaseStreamer.h:239
	EventReceiverQueue<2048,16> mGDReceiverQueue;

	// BrnBaseStreamer.h:240
	BrnWorld::InternalBaseStreamer::EStreamMode meCurrentStreamMode;

	// BrnBaseStreamer.h:241
	BrnWorld::InternalBaseStreamer::ELoadStreamStage meLoadStreamStage;

	// BrnBaseStreamer.h:242
	BrnWorld::InternalBaseStreamer::EUnloadStreamStage meUnloadStreamStage;

	// BrnBaseStreamer.h:243
	BrnWorld::InternalBaseStreamer::EStreamMode mePreviousStreamMode;

	// BrnBaseStreamer.h:244
	int32_t miCurrentEntryIndex;

	// BrnBaseStreamer.h:245
	int32_t miPoolId;

	// BrnBaseStreamer.h:246
	BrnResource::EAssetSet meAssetSet;

	// BrnBaseStreamer.h:247
	bool mbAllowFailure;

	// BrnBaseStreamer.h:248
	bool mbLoadHasFailed;

	// BrnBaseStreamer.h:249
	RingBuffer<int32_t> mPendingEntryQueue;

	// BrnBaseStreamer.h:250
	bool mbSlotPoolSystem;

public:
	// BrnBaseStreamer.h:155
	void Update();

	// BrnBaseStreamer.h:158
	void ClearTargetList();

	// BrnBaseStreamer.h:370
	const RequestInterface<2048> * GetGameDataRequestInterface() const;

	// BrnBaseStreamer.h:164
	bool AddEntry(CgsID, bool, uint64_t);

	// BrnBaseStreamer.h:167
	bool RemoveEntry(CgsID);

	// BrnBaseStreamer.h:170
	bool RemoveEntry(CgsID, uint64_t);

	// BrnBaseStreamer.h:376
	int32_t GetEntryListLength();

	// BrnBaseStreamer.h:176
	BrnWorld::InternalBaseStreamer::EAssetStatus DebugGetAssetStatus(CgsID) const;

	// BrnBaseStreamer.h:382
	uint64_t GetUserId(int32_t) const;

	// BrnBaseStreamer.h:390
	bool IsAssetLoaded(CgsID, uint64_t) const;

	// BrnBaseStreamer.h:187
	bool IsStreamComplete() const;

protected:
	// BrnBaseStreamer.h:201
	void Construct(StreamerTargetEntry *, StreamerTargetEntry *, StreamerCurrentEntry *, int32_t *, int32_t, int32_t, bool, BrnResource::EAssetSet, bool);

	// BrnBaseStreamer.h:204
	virtual int32_t QueryLoad(const StreamerTargetEntry *, int32_t);

	// BrnBaseStreamer.h:207
	virtual int32_t QueryUnload(const StreamerTargetEntry *, int32_t);

	// BrnBaseStreamer.h:210
	virtual void OnLoadBegin(int32_t);

	// BrnBaseStreamer.h:213
	virtual void OnUnloadBegin(int32_t);

	// BrnBaseStreamer.h:216
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnBaseStreamer.h:219
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

	// BrnBaseStreamer.h:222
	virtual void OnLoadFail(const GameDataAssetEvent *, int32_t);

	// BrnBaseStreamer.h:225
	virtual bool OnAttemptUnload(int32_t);

	// BrnBaseStreamer.h:407
	bool IsEntryReady(int32_t) const;

private:
	// BrnBaseStreamer.h:253
	void ClearCurrentList();

	// BrnBaseStreamer.h:256
	int32_t CalculatePotentialLoadList();

	// BrnBaseStreamer.h:259
	int32_t CalculatePotentialUnloadList();

	// BrnBaseStreamer.h:262
	int32_t FindInTargetList(CgsID) const;

	// BrnBaseStreamer.h:265
	int32_t FindInTargetList(CgsID, uint64_t) const;

	// BrnBaseStreamer.h:268
	int32_t FindInCurrentList(CgsID) const;

	// BrnBaseStreamer.h:271
	int32_t FindInCurrentList(CgsID, uint64_t) const;

	// BrnBaseStreamer.h:274
	BrnWorld::InternalBaseStreamer::EStreamMode UpdateIdle();

	// BrnBaseStreamer.h:277
	int32_t AttemptLoad();

	// BrnBaseStreamer.h:280
	int32_t AttemptUnload();

	// BrnBaseStreamer.h:283
	bool UpdateLoading();

	// BrnBaseStreamer.h:286
	bool UpdateUnloading();

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// Declaration
	struct InternalBaseStreamer {
	public:
		// BrnBaseStreamer.h:370
		const RequestInterface<2048> * GetGameDataRequestInterface() const;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// Declaration
	struct StreamerCurrentEntry {
		// BrnBaseStreamer.h:78
		enum EEntryStatus {
			E_STATUS_EMPTY = 0,
			E_STATUS_LOADING = 1,
			E_STATUS_UNLOADING = 2,
			E_STATUS_READY = 3,
		}

	}

	// Declaration
	struct InternalBaseStreamer {
		// BrnBaseStreamer.h:117
		enum EStreamMode {
			E_STREAMMODE_IDLE = 0,
			E_STREAMMODE_LOADING = 1,
			E_STREAMMODE_UNLOADING = 2,
			E_STREAMMODE_COUNT = 3,
		}

		// BrnBaseStreamer.h:125
		enum ELoadStreamStage {
			E_LOADSTREAM_REQUEST = 0,
			E_LOADSTREAM_WAIT = 1,
			E_LOADSTREAM_DONE = 2,
		}

		// BrnBaseStreamer.h:132
		enum EUnloadStreamStage {
			E_UNLOADSTREAM_REQUEST = 0,
			E_UNLOADSTREAM_WAIT = 1,
			E_UNLOADSTREAM_DONE = 2,
		}

		// BrnBaseStreamer.h:139
		enum EAssetStatus {
			E_AS_UNKNOWN = 0,
			E_AS_NOT_IN_LIST = 1,
			E_AS_PENDING_LOAD = 2,
			E_AS_LOADING = 3,
			E_AS_READY = 4,
			E_AS_PENDING_ABORT_LOAD = 5,
			E_AS_UNLOADING = 6,
			E_AS_PENDING_UNLOAD = 7,
		}

	}

}

// BrnBaseStreamer.h:299
struct BrnWorld::BaseStreamer<64> : public BrnWorld::InternalBaseStreamer {
private:
	// BrnBaseStreamer.h:309
	StreamerTargetEntry[64] maStreamerTargetEntries;

	// BrnBaseStreamer.h:310
	StreamerTargetEntry[64] maStreamerTargetBuffer;

	// BrnBaseStreamer.h:311
	StreamerCurrentEntry[64] maStreamerCurrentEntries;

	// BrnBaseStreamer.h:312
	int32_t[64] maPendingEntries;

protected:
	// BrnBaseStreamer.h:425
	void Construct(int, bool, BrnResource::EAssetSet, bool);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct StreamerCurrentEntry {
		// BrnBaseStreamer.h:78
		enum EEntryStatus {
			E_STATUS_EMPTY = 0,
			E_STATUS_LOADING = 1,
			E_STATUS_UNLOADING = 2,
			E_STATUS_READY = 3,
		}

	}

	// Declaration
	struct InternalBaseStreamer {
		// BrnBaseStreamer.h:117
		enum EStreamMode {
			E_STREAMMODE_IDLE = 0,
			E_STREAMMODE_LOADING = 1,
			E_STREAMMODE_UNLOADING = 2,
			E_STREAMMODE_COUNT = 3,
		}

		// BrnBaseStreamer.h:125
		enum ELoadStreamStage {
			E_LOADSTREAM_REQUEST = 0,
			E_LOADSTREAM_WAIT = 1,
			E_LOADSTREAM_DONE = 2,
		}

		// BrnBaseStreamer.h:132
		enum EUnloadStreamStage {
			E_UNLOADSTREAM_REQUEST = 0,
			E_UNLOADSTREAM_WAIT = 1,
			E_UNLOADSTREAM_DONE = 2,
		}

		// BrnBaseStreamer.h:139
		enum EAssetStatus {
			E_AS_UNKNOWN = 0,
			E_AS_NOT_IN_LIST = 1,
			E_AS_PENDING_LOAD = 2,
			E_AS_LOADING = 3,
			E_AS_READY = 4,
			E_AS_PENDING_ABORT_LOAD = 5,
			E_AS_UNLOADING = 6,
			E_AS_PENDING_UNLOAD = 7,
		}

	}

}

// BrnBaseStreamer.h:299
struct BrnWorld::BaseStreamer<32> : public BrnWorld::InternalBaseStreamer {
private:
	// BrnBaseStreamer.h:309
	StreamerTargetEntry[32] maStreamerTargetEntries;

	// BrnBaseStreamer.h:310
	StreamerTargetEntry[32] maStreamerTargetBuffer;

	// BrnBaseStreamer.h:311
	StreamerCurrentEntry[32] maStreamerCurrentEntries;

	// BrnBaseStreamer.h:312
	int32_t[32] maPendingEntries;

protected:
	// BrnBaseStreamer.h:425
	void Construct(int, bool, BrnResource::EAssetSet, bool);

}

// BrnBaseStreamer.h:114
struct BrnWorld::InternalBaseStreamer {
	int (*)(...) * _vptr.InternalBaseStreamer;

private:
	// BrnBaseStreamer.h:233
	StreamerTargetEntry * mpTargetEntryList;

	// BrnBaseStreamer.h:234
	StreamerTargetEntry * mpPotentialList;

	// BrnBaseStreamer.h:235
	StreamerCurrentEntry * mpCurrentEntryList;

	// BrnBaseStreamer.h:236
	int32_t miStreamListLength;

	// BrnBaseStreamer.h:237
	int32_t miPotentialListLength;

	// BrnBaseStreamer.h:238
	RequestInterface<2048> mGDRequestInterface;

	// BrnBaseStreamer.h:239
	EventReceiverQueue<2048,16> mGDReceiverQueue;

	// BrnBaseStreamer.h:240
	BrnWorld::InternalBaseStreamer::EStreamMode meCurrentStreamMode;

	// BrnBaseStreamer.h:241
	BrnWorld::InternalBaseStreamer::ELoadStreamStage meLoadStreamStage;

	// BrnBaseStreamer.h:242
	BrnWorld::InternalBaseStreamer::EUnloadStreamStage meUnloadStreamStage;

	// BrnBaseStreamer.h:243
	BrnWorld::InternalBaseStreamer::EStreamMode mePreviousStreamMode;

	// BrnBaseStreamer.h:244
	int32_t miCurrentEntryIndex;

	// BrnBaseStreamer.h:245
	int32_t miPoolId;

	// BrnBaseStreamer.h:246
	BrnResource::EAssetSet meAssetSet;

	// BrnBaseStreamer.h:247
	bool mbAllowFailure;

	// BrnBaseStreamer.h:248
	bool mbLoadHasFailed;

	// BrnBaseStreamer.h:249
	RingBuffer<int32_t> mPendingEntryQueue;

	// BrnBaseStreamer.h:250
	bool mbSlotPoolSystem;

public:
	// BrnBaseStreamer.cpp:425
	void Update();

	// BrnBaseStreamer.cpp:168
	void ClearTargetList();

	// BrnBaseStreamer.h:370
	const RequestInterface<2048> * GetGameDataRequestInterface() const;

	// BrnBaseStreamer.cpp:86
	bool AddEntry(CgsID, bool, uint64_t);

	// BrnBaseStreamer.cpp:118
	bool RemoveEntry(CgsID);

	// BrnBaseStreamer.cpp:143
	bool RemoveEntry(CgsID, uint64_t);

	// BrnBaseStreamer.h:376
	int32_t GetEntryListLength();

	// BrnBaseStreamer.cpp:918
	BrnWorld::InternalBaseStreamer::EAssetStatus DebugGetAssetStatus(CgsID) const;

	// BrnBaseStreamer.h:382
	uint64_t GetUserId(int32_t) const;

	// BrnBaseStreamer.h:390
	bool IsAssetLoaded(CgsID, uint64_t) const;

	// BrnBaseStreamer.cpp:1003
	bool IsStreamComplete() const;

protected:
	// BrnBaseStreamer.cpp:51
	void Construct(StreamerTargetEntry *, StreamerTargetEntry *, StreamerCurrentEntry *, int32_t *, int32_t, int32_t, bool, BrnResource::EAssetSet, bool);

	// BrnBaseStreamer.h:204
	virtual int32_t QueryLoad(const StreamerTargetEntry *, int32_t);

	// BrnBaseStreamer.h:207
	virtual int32_t QueryUnload(const StreamerTargetEntry *, int32_t);

	// BrnBaseStreamer.h:210
	virtual void OnLoadBegin(int32_t);

	// BrnBaseStreamer.h:213
	virtual void OnUnloadBegin(int32_t);

	// BrnBaseStreamer.h:216
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnBaseStreamer.h:219
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

	// BrnBaseStreamer.h:222
	virtual void OnLoadFail(const GameDataAssetEvent *, int32_t);

	// BrnBaseStreamer.h:225
	virtual bool OnAttemptUnload(int32_t);

	// BrnBaseStreamer.h:407
	bool IsEntryReady(int32_t) const;

private:
	// BrnBaseStreamer.cpp:188
	void ClearCurrentList();

	// BrnBaseStreamer.cpp:210
	int32_t CalculatePotentialLoadList();

	// BrnBaseStreamer.cpp:247
	int32_t CalculatePotentialUnloadList();

	// BrnBaseStreamer.cpp:285
	int32_t FindInTargetList(CgsID) const;

	// BrnBaseStreamer.cpp:332
	int32_t FindInTargetList(CgsID, uint64_t) const;

	// BrnBaseStreamer.cpp:355
	int32_t FindInCurrentList(CgsID) const;

	// BrnBaseStreamer.cpp:402
	int32_t FindInCurrentList(CgsID, uint64_t) const;

	// BrnBaseStreamer.cpp:490
	BrnWorld::InternalBaseStreamer::EStreamMode UpdateIdle();

	// BrnBaseStreamer.cpp:559
	int32_t AttemptLoad();

	// BrnBaseStreamer.cpp:611
	int32_t AttemptUnload();

	// BrnBaseStreamer.cpp:653
	bool UpdateLoading();

	// BrnBaseStreamer.cpp:801
	bool UpdateUnloading();

}

// BrnBaseStreamer.h:299
struct BrnWorld::BaseStreamer<32> : public BrnWorld::InternalBaseStreamer {
private:
	// BrnBaseStreamer.h:309
	StreamerTargetEntry[32] maStreamerTargetEntries;

	// BrnBaseStreamer.h:310
	StreamerTargetEntry[32] maStreamerTargetBuffer;

	// BrnBaseStreamer.h:311
	StreamerCurrentEntry[32] maStreamerCurrentEntries;

	// BrnBaseStreamer.h:312
	int32_t[32] maPendingEntries;

public:
	void BaseStreamer(const BaseStreamer<32> &);

	void BaseStreamer();

protected:
	// BrnBaseStreamer.h:425
	void Construct(int, bool, BrnResource::EAssetSet, bool);

}

// BrnBaseStreamer.h:299
struct BrnWorld::BaseStreamer<64> : public BrnWorld::InternalBaseStreamer {
private:
	// BrnBaseStreamer.h:309
	StreamerTargetEntry[64] maStreamerTargetEntries;

	// BrnBaseStreamer.h:310
	StreamerTargetEntry[64] maStreamerTargetBuffer;

	// BrnBaseStreamer.h:311
	StreamerCurrentEntry[64] maStreamerCurrentEntries;

	// BrnBaseStreamer.h:312
	int32_t[64] maPendingEntries;

public:
	void BaseStreamer(const BaseStreamer<64> &);

	void BaseStreamer();

protected:
	// BrnBaseStreamer.h:425
	void Construct(int, bool, BrnResource::EAssetSet, bool);

}

// BrnBaseStreamer.h:299
struct BrnWorld::BaseStreamer<8> : public BrnWorld::InternalBaseStreamer {
private:
	// BrnBaseStreamer.h:309
	StreamerTargetEntry[8] maStreamerTargetEntries;

	// BrnBaseStreamer.h:310
	StreamerTargetEntry[8] maStreamerTargetBuffer;

	// BrnBaseStreamer.h:311
	StreamerCurrentEntry[8] maStreamerCurrentEntries;

	// BrnBaseStreamer.h:312
	int32_t[8] maPendingEntries;

public:
	void BaseStreamer(const BaseStreamer<8> &);

	void BaseStreamer();

protected:
	// BrnBaseStreamer.h:425
	void Construct(int, bool, BrnResource::EAssetSet, bool);

}

// BrnBaseStreamer.h:114
struct BrnWorld::InternalBaseStreamer {
	int (*)(...) * _vptr.InternalBaseStreamer;

private:
	// BrnBaseStreamer.h:233
	StreamerTargetEntry * mpTargetEntryList;

	// BrnBaseStreamer.h:234
	StreamerTargetEntry * mpPotentialList;

	// BrnBaseStreamer.h:235
	StreamerCurrentEntry * mpCurrentEntryList;

	// BrnBaseStreamer.h:236
	int32_t miStreamListLength;

	// BrnBaseStreamer.h:237
	int32_t miPotentialListLength;

	// BrnBaseStreamer.h:238
	RequestInterface<2048> mGDRequestInterface;

	// BrnBaseStreamer.h:239
	EventReceiverQueue<2048,16> mGDReceiverQueue;

	// BrnBaseStreamer.h:240
	BrnWorld::InternalBaseStreamer::EStreamMode meCurrentStreamMode;

	// BrnBaseStreamer.h:241
	BrnWorld::InternalBaseStreamer::ELoadStreamStage meLoadStreamStage;

	// BrnBaseStreamer.h:242
	BrnWorld::InternalBaseStreamer::EUnloadStreamStage meUnloadStreamStage;

	// BrnBaseStreamer.h:243
	BrnWorld::InternalBaseStreamer::EStreamMode mePreviousStreamMode;

	// BrnBaseStreamer.h:244
	int32_t miCurrentEntryIndex;

	// BrnBaseStreamer.h:245
	int32_t miPoolId;

	// BrnBaseStreamer.h:246
	BrnResource::EAssetSet meAssetSet;

	// BrnBaseStreamer.h:247
	bool mbAllowFailure;

	// BrnBaseStreamer.h:248
	bool mbLoadHasFailed;

	// BrnBaseStreamer.h:249
	RingBuffer<int32_t> mPendingEntryQueue;

	// BrnBaseStreamer.h:250
	bool mbSlotPoolSystem;

public:
	void InternalBaseStreamer(const InternalBaseStreamer &);

	void InternalBaseStreamer();

	// BrnBaseStreamer.h:155
	void Update();

	// BrnBaseStreamer.h:158
	void ClearTargetList();

	// BrnBaseStreamer.h:370
	const RequestInterface<2048> * GetGameDataRequestInterface() const;

	// BrnBaseStreamer.h:164
	bool AddEntry(CgsID, bool, uint64_t);

	// BrnBaseStreamer.h:167
	bool RemoveEntry(CgsID);

	// BrnBaseStreamer.h:170
	bool RemoveEntry(CgsID, uint64_t);

	// BrnBaseStreamer.h:376
	int32_t GetEntryListLength();

	// BrnBaseStreamer.h:176
	BrnWorld::InternalBaseStreamer::EAssetStatus DebugGetAssetStatus(CgsID) const;

	// BrnBaseStreamer.h:382
	uint64_t GetUserId(int32_t) const;

	// BrnBaseStreamer.h:390
	bool IsAssetLoaded(CgsID, uint64_t) const;

	// BrnBaseStreamer.h:187
	bool IsStreamComplete() const;

protected:
	// BrnBaseStreamer.h:201
	void Construct(StreamerTargetEntry *, StreamerTargetEntry *, StreamerCurrentEntry *, int32_t *, int32_t, int32_t, bool, BrnResource::EAssetSet, bool);

	// BrnBaseStreamer.h:204
	virtual int32_t QueryLoad(const StreamerTargetEntry *, int32_t);

	// BrnBaseStreamer.h:207
	virtual int32_t QueryUnload(const StreamerTargetEntry *, int32_t);

	// BrnBaseStreamer.h:210
	virtual void OnLoadBegin(int32_t);

	// BrnBaseStreamer.h:213
	virtual void OnUnloadBegin(int32_t);

	// BrnBaseStreamer.h:216
	virtual void OnLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnBaseStreamer.h:219
	virtual void OnUnloadComplete(const UnloadGameDataResponse *, int32_t);

	// BrnBaseStreamer.h:222
	virtual void OnLoadFail(const GameDataAssetEvent *, int32_t);

	// BrnBaseStreamer.h:225
	virtual bool OnAttemptUnload(int32_t);

	// BrnBaseStreamer.h:407
	bool IsEntryReady(int32_t) const;

private:
	// BrnBaseStreamer.h:253
	void ClearCurrentList();

	// BrnBaseStreamer.h:256
	int32_t CalculatePotentialLoadList();

	// BrnBaseStreamer.h:259
	int32_t CalculatePotentialUnloadList();

	// BrnBaseStreamer.h:262
	int32_t FindInTargetList(CgsID) const;

	// BrnBaseStreamer.h:265
	int32_t FindInTargetList(CgsID, uint64_t) const;

	// BrnBaseStreamer.h:268
	int32_t FindInCurrentList(CgsID) const;

	// BrnBaseStreamer.h:271
	int32_t FindInCurrentList(CgsID, uint64_t) const;

	// BrnBaseStreamer.h:274
	BrnWorld::InternalBaseStreamer::EStreamMode UpdateIdle();

	// BrnBaseStreamer.h:277
	int32_t AttemptLoad();

	// BrnBaseStreamer.h:280
	int32_t AttemptUnload();

	// BrnBaseStreamer.h:283
	bool UpdateLoading();

	// BrnBaseStreamer.h:286
	bool UpdateUnloading();

}

// BrnBaseStreamer.h:299
void BrnWorld::BaseStreamer<8>::BaseStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBaseStreamer.h:114
void BrnWorld::InternalBaseStreamer::InternalBaseStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBaseStreamer.h:299
void BrnWorld::BaseStreamer<64>::BaseStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBaseStreamer.h:299
void BrnWorld::BaseStreamer<32>::BaseStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

