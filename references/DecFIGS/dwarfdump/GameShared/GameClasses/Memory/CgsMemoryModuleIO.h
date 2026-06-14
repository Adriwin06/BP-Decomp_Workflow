// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateBankRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct DestroyBankRequest;

		struct CreateAllocatorRequest;

		struct DestroyAllocatorRequest;

	}

}

// CgsMemoryModuleIO.h:99
struct CgsMemory::MemoryIO::MemoryEvent : public Event {
	// CgsMemoryModuleIO.h:102
	extern const int32_t KI_MAX_QUEUE_SIZE = 128;

private:
	// CgsMemoryModuleIO.h:127
	BaseEventReceiverQueue * mpUser;

	// CgsMemoryModuleIO.h:128
	int32_t mnEventId;

	// CgsMemoryModuleIO.h:129
	CgsMemory::MemoryIO::EventType meEventType;

public:
	// CgsMemoryModuleIO.h:105
	int32_t GetEventId() const;

	// CgsMemoryModuleIO.h:108
	CgsMemory::MemoryIO::EventType GetEventType() const;

	// CgsMemoryModuleIO.h:111
	BaseEventReceiverQueue * GetUser() const;

	// CgsMemoryModuleIO.h:114
	void SetEventId(int32_t);

	// CgsMemoryModuleIO.h:117
	void SetReceiverQueue(BaseEventReceiverQueue *);

protected:
	// CgsMemoryModuleIO.h:124
	void Construct(BaseEventReceiverQueue *, int32_t, CgsMemory::MemoryIO::EventType);

}

// CgsMemoryModuleIO.h:148
struct CgsMemory::MemoryIO::MemoryRequest : public MemoryEvent {
protected:
	// CgsMemoryModuleIO.h:154
	void Construct(BaseEventReceiverQueue *, int32_t, CgsMemory::MemoryIO::EventType);

}

// CgsMemoryModuleIO.h:166
struct CgsMemory::MemoryIO::CreateBankRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:209
	CgsMemory::MemoryBank::Params mParams;

public:
	// CgsMemoryModuleIO.h:171
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:175
	const CgsMemory::MemoryBank::Params * GetParams() const;

	// CgsMemoryModuleIO.h:180
	void SetBankName(const char *);

	// CgsMemoryModuleIO.h:184
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:188
	void SetParentBankId(int32_t);

	// CgsMemoryModuleIO.h:193
	void SetBankSize(int32_t, uint32_t);

	// CgsMemoryModuleIO.h:198
	void SetBlockCount(int32_t, uint32_t);

	// CgsMemoryModuleIO.h:202
	void SetAllowFragmentation(bool);

	// CgsMemoryModuleIO.h:206
	void SetParams(const CgsMemory::MemoryBank::Params *);

}

// CgsMemoryModuleIO.h:221
struct CgsMemory::MemoryIO::CreateResourceRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:256
	char[32] macBankName;

	// CgsMemoryModuleIO.h:257
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:258
	int32_t mnParentBankId;

	// CgsMemoryModuleIO.h:259
	ResourceDescriptor mDescriptor;

public:
	// CgsMemoryModuleIO.h:226
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:229
	void GetDescriptor(ResourceDescriptor *) const;

	// CgsMemoryModuleIO.h:232
	void SetDescriptor(const ResourceDescriptor *);

	// CgsMemoryModuleIO.h:235
	const char * GetBankName() const;

	// CgsMemoryModuleIO.h:238
	int32_t GetParentBankId() const;

	// CgsMemoryModuleIO.h:241
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:245
	void SetBankName(const char *);

	// CgsMemoryModuleIO.h:249
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:253
	void SetParentBankId(int32_t);

}

// CgsMemoryModuleIO.h:273
struct CgsMemory::MemoryIO::CreateLinearAllocatorRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:316
	char[32] macBankName;

	// CgsMemoryModuleIO.h:317
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:318
	int32_t mnParentBankId;

	// CgsMemoryModuleIO.h:319
	ResourceDescriptor mDescriptor;

public:
	// CgsMemoryModuleIO.h:279
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:284
	void GetDescriptor(ResourceDescriptor *) const;

	// CgsMemoryModuleIO.h:289
	void SetDescriptor(const ResourceDescriptor *);

	// CgsMemoryModuleIO.h:292
	const char * GetBankName() const;

	// CgsMemoryModuleIO.h:295
	int32_t GetParentBankId() const;

	// CgsMemoryModuleIO.h:298
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:303
	void SetBankName(const char *);

	// CgsMemoryModuleIO.h:308
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:313
	void SetParentBankId(int32_t);

}

// CgsMemoryModuleIO.h:333
struct CgsMemory::MemoryIO::CreateGeneralAllocatorRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:376
	char[32] macBankName;

	// CgsMemoryModuleIO.h:377
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:378
	int32_t mnParentBankId;

	// CgsMemoryModuleIO.h:379
	ResourceDescriptor mDescriptor;

public:
	// CgsMemoryModuleIO.h:339
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:344
	void GetDescriptor(ResourceDescriptor *) const;

	// CgsMemoryModuleIO.h:349
	void SetDescriptor(const ResourceDescriptor *);

	// CgsMemoryModuleIO.h:352
	const char * GetBankName() const;

	// CgsMemoryModuleIO.h:355
	int32_t GetParentBankId() const;

	// CgsMemoryModuleIO.h:358
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:363
	void SetBankName(const char *);

	// CgsMemoryModuleIO.h:368
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:373
	void SetParentBankId(int32_t);

}

// CgsMemoryModuleIO.h:395
struct CgsMemory::MemoryIO::DestroyBankRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:410
	int32_t mnBankId;

public:
	// CgsMemoryModuleIO.h:400
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:403
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:407
	void SetBankId(int32_t);

}

// CgsMemoryModuleIO.h:422
struct CgsMemory::MemoryIO::CreateAllocatorRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:479
	char[32] macBankName;

	// CgsMemoryModuleIO.h:480
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:481
	int32_t mnParentBankId;

	// CgsMemoryModuleIO.h:482
	int32_t mnResourceType;

	// CgsMemoryModuleIO.h:483
	int32_t mnSize;

	// CgsMemoryModuleIO.h:484
	HeapMalloc * mpHeapAllocator;

	// CgsMemoryModuleIO.h:485
	LinearMalloc * mpLinearAllocator;

public:
	// CgsMemoryModuleIO.h:427
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:430
	const char * GetBankName() const;

	// CgsMemoryModuleIO.h:433
	int32_t GetParentBankId() const;

	// CgsMemoryModuleIO.h:436
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:439
	int32_t GetResourceType() const;

	// CgsMemoryModuleIO.h:442
	int32_t GetSize() const;

	// CgsMemoryModuleIO.h:445
	HeapMalloc * GetHeapAllocator() const;

	// CgsMemoryModuleIO.h:448
	LinearMalloc * GetLinearAllocator() const;

	// CgsMemoryModuleIO.h:452
	void SetBankName(const char *);

	// CgsMemoryModuleIO.h:456
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:460
	void SetParentBankId(int32_t);

	// CgsMemoryModuleIO.h:464
	void SetResourceType(int32_t);

	// CgsMemoryModuleIO.h:468
	void SetSize(int32_t);

	// CgsMemoryModuleIO.h:472
	void SetHeapAllocator(HeapMalloc *);

	// CgsMemoryModuleIO.h:476
	void SetLinearAllocator(LinearMalloc *);

}

// CgsMemoryModuleIO.h:500
struct CgsMemory::MemoryIO::DestroyAllocatorRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:529
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:530
	HeapMalloc * mpHeapAllocator;

	// CgsMemoryModuleIO.h:531
	LinearMalloc * mpLinearAllocator;

public:
	// CgsMemoryModuleIO.h:505
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:508
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:511
	HeapMalloc * GetHeapAllocator() const;

	// CgsMemoryModuleIO.h:514
	LinearMalloc * GetLinearAllocator() const;

	// CgsMemoryModuleIO.h:518
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:522
	void SetAllocator(HeapMalloc *);

	// CgsMemoryModuleIO.h:526
	void SetLinearAllocator(LinearMalloc *);

}

// CgsMemoryModuleIO.h:102
extern const int32_t KI_MAX_QUEUE_SIZE = 128;

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct CreateAllocatorRequest;

	}

}

// CgsLuaState.h:32
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateBankRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct DestroyBankRequest;

		struct CreateAllocatorRequest;

		struct DestroyAllocatorRequest;

	}

}

// CgsMemoryModuleIO.h:422
struct CgsMemory::MemoryIO::CreateAllocatorRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:479
	char[32] macBankName;

	// CgsMemoryModuleIO.h:480
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:481
	int32_t mnParentBankId;

	// CgsMemoryModuleIO.h:482
	int32_t mnResourceType;

	// CgsMemoryModuleIO.h:483
	int32_t mnSize;

	// CgsMemoryModuleIO.h:484
	CgsMemory::HeapMalloc * mpHeapAllocator;

	// CgsMemoryModuleIO.h:485
	LinearMalloc * mpLinearAllocator;

public:
	// CgsMemoryModuleIO.h:427
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:430
	const char * GetBankName() const;

	// CgsMemoryModuleIO.h:433
	int32_t GetParentBankId() const;

	// CgsMemoryModuleIO.h:436
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:439
	int32_t GetResourceType() const;

	// CgsMemoryModuleIO.h:442
	int32_t GetSize() const;

	// CgsMemoryModuleIO.h:445
	CgsMemory::HeapMalloc * GetHeapAllocator() const;

	// CgsMemoryModuleIO.h:448
	LinearMalloc * GetLinearAllocator() const;

	// CgsMemoryModuleIO.h:452
	void SetBankName(const char *);

	// CgsMemoryModuleIO.h:456
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:460
	void SetParentBankId(int32_t);

	// CgsMemoryModuleIO.h:464
	void SetResourceType(int32_t);

	// CgsMemoryModuleIO.h:468
	void SetSize(int32_t);

	// CgsMemoryModuleIO.h:472
	void SetHeapAllocator(CgsMemory::HeapMalloc *);

	// CgsMemoryModuleIO.h:476
	void SetLinearAllocator(LinearMalloc *);

}

// CgsMemoryModuleIO.h:500
struct CgsMemory::MemoryIO::DestroyAllocatorRequest : public MemoryRequest {
private:
	// CgsMemoryModuleIO.h:529
	int32_t mnBankId;

	// CgsMemoryModuleIO.h:530
	CgsMemory::HeapMalloc * mpHeapAllocator;

	// CgsMemoryModuleIO.h:531
	LinearMalloc * mpLinearAllocator;

public:
	// CgsMemoryModuleIO.h:505
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:508
	int32_t GetBankId() const;

	// CgsMemoryModuleIO.h:511
	CgsMemory::HeapMalloc * GetHeapAllocator() const;

	// CgsMemoryModuleIO.h:514
	LinearMalloc * GetLinearAllocator() const;

	// CgsMemoryModuleIO.h:518
	void SetBankId(int32_t);

	// CgsMemoryModuleIO.h:522
	void SetAllocator(CgsMemory::HeapMalloc *);

	// CgsMemoryModuleIO.h:526
	void SetLinearAllocator(LinearMalloc *);

}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateBankRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct DestroyBankRequest;

		struct CreateAllocatorRequest;

		struct DestroyAllocatorRequest;

	}

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:55
		enum ResultCodes {
			E_RESULT_OK = 0,
			E_RESULT_BANK_OUT_OF_RANGE = 1,
			E_RESULT_BANK_ID_IN_USE = 2,
			E_RESULT_BANK_ID_NOT_FOUND = 3,
			E_RESULT_NOT_ENOUGH_SPACE = 4,
			E_RESULT_BLOCK_SIZES_DONT_MATCH = 5,
			E_RESULT_NOT_ENOUGH_GLOBAL_BLOCKS = 6,
			E_RESULT_INVALID_ALLOCATION_SIZE = 7,
			E_RESULT_BANK_IS_ROOT = 8,
			E_RESULT_NOT_EMPTY = 9,
			E_RESULT_ALLOCATOR_NOT_SET = 10,
			E_RESULT_BANK_IS_LEAF = 11,
			E_RESULT_BANK_IS_NOT_LEAF = 12,
			E_RESULT_INVALID_ALIGNMENT = 13,
			E_RESULT_COUNT = 14,
		}

		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateBankRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct DestroyBankRequest;

		struct CreateAllocatorRequest;

		struct DestroyAllocatorRequest;

		struct MemoryResponse;

		struct CreateResourceResponse;

		struct CreateLinearAllocatorResponse;

		struct CreateGeneralAllocatorResponse;

	}

}

// CgsMemoryModuleIO.h:543
struct CgsMemory::MemoryIO::MemoryResponse : public MemoryEvent {
private:
	// CgsMemoryModuleIO.h:560
	CgsMemory::MemoryIO::ResultCodes meResult;

public:
	// CgsMemoryModuleIO.h:546
	CgsMemory::MemoryIO::ResultCodes GetResult() const;

	// CgsMemoryModuleIO.h:550
	void SetResult(CgsMemory::MemoryIO::ResultCodes);

protected:
	// CgsMemoryModuleIO.h:557
	void Construct(BaseEventReceiverQueue *, int32_t, CgsMemory::MemoryIO::EventType);

}

// CgsMemoryModuleIO.h:594
struct CgsMemory::MemoryIO::CreateResourceResponse : public MemoryResponse {
private:
	// CgsMemoryModuleIO.h:608
	Resource mResource;

	// CgsMemoryModuleIO.h:609
	ResourceDescriptor mDescriptor;

public:
	// CgsMemoryModuleIO.h:599
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:602
	void GetResource(Resource *, ResourceDescriptor *) const;

	// CgsMemoryModuleIO.h:605
	void SetResource(const Resource *, const ResourceDescriptor *);

}

// CgsMemoryModuleIO.h:622
struct CgsMemory::MemoryIO::CreateLinearAllocatorResponse : public MemoryResponse {
private:
	// CgsMemoryModuleIO.h:641
	rw::LinearResourceAllocator * mpAllocator;

public:
	// CgsMemoryModuleIO.h:628
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:633
	void GetAllocator(rw::LinearResourceAllocator **) const;

	// CgsMemoryModuleIO.h:638
	void SetAllocator(rw::LinearResourceAllocator *);

}

// CgsMemoryModuleIO.h:654
struct CgsMemory::MemoryIO::CreateGeneralAllocatorResponse : public MemoryResponse {
private:
	// CgsMemoryModuleIO.h:673
	rw::core::GeneralResourceAllocator * mpAllocator;

public:
	// CgsMemoryModuleIO.h:660
	void Construct(BaseEventReceiverQueue *, int32_t);

	// CgsMemoryModuleIO.h:665
	void GetAllocator(rw::core::GeneralResourceAllocator **) const;

	// CgsMemoryModuleIO.h:670
	void SetAllocator(rw::core::GeneralResourceAllocator *);

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
	}

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:55
		enum ResultCodes {
			E_RESULT_OK = 0,
			E_RESULT_BANK_OUT_OF_RANGE = 1,
			E_RESULT_BANK_ID_IN_USE = 2,
			E_RESULT_BANK_ID_NOT_FOUND = 3,
			E_RESULT_NOT_ENOUGH_SPACE = 4,
			E_RESULT_BLOCK_SIZES_DONT_MATCH = 5,
			E_RESULT_NOT_ENOUGH_GLOBAL_BLOCKS = 6,
			E_RESULT_INVALID_ALLOCATION_SIZE = 7,
			E_RESULT_BANK_IS_ROOT = 8,
			E_RESULT_NOT_EMPTY = 9,
			E_RESULT_ALLOCATOR_NOT_SET = 10,
			E_RESULT_BANK_IS_LEAF = 11,
			E_RESULT_BANK_IS_NOT_LEAF = 12,
			E_RESULT_INVALID_ALIGNMENT = 13,
			E_RESULT_COUNT = 14,
		}

		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateBankRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct DestroyBankRequest;

		struct CreateAllocatorRequest;

		struct DestroyAllocatorRequest;

		struct MemoryResponse;

		struct CreateBankResponse;

		struct CreateResourceResponse;

		struct CreateLinearAllocatorResponse;

		struct CreateGeneralAllocatorResponse;

		struct DestroyBankResponse;

		struct CreateAllocatorResponse;

		struct DestroyAllocatorResponse;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsMemoryModuleIO.h:573
struct CgsMemory::MemoryIO::CreateBankResponse : public MemoryResponse {
private:
	// CgsMemoryModuleIO.h:581
	Resource mResources;

public:
	// CgsMemoryModuleIO.h:578
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// CgsMemoryModuleIO.h:688
struct CgsMemory::MemoryIO::DestroyBankResponse : public MemoryResponse {
public:
	// CgsMemoryModuleIO.h:693
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// CgsMemoryModuleIO.h:706
struct CgsMemory::MemoryIO::CreateAllocatorResponse : public MemoryResponse {
public:
	// CgsMemoryModuleIO.h:711
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// CgsMemoryModuleIO.h:724
struct CgsMemory::MemoryIO::DestroyAllocatorResponse : public MemoryResponse {
public:
	// CgsMemoryModuleIO.h:729
	void Construct(BaseEventReceiverQueue *, int32_t);

}

// CgsMemoryModuleIO.h:741
struct CgsMemory::MemoryIO::InputBuffer : public IOBuffer {
	// CgsMemoryModuleIO.h:384
	typedef VariableEventQueue<13312,16> MemoryRequestQueue;

private:
	// CgsMemoryModuleIO.h:758
	InputBuffer::MemoryRequestQueue mMemoryRequestQueue;

public:
	// CgsMemoryModuleIO.h:746
	void Construct();

	// CgsMemoryModuleIO.h:750
	void Destruct();

	// CgsMemoryModuleIO.h:753
	const InputBuffer::MemoryRequestQueue * GetMemoryRequestQueue() const;

	// CgsMemoryModuleIO.h:754
	InputBuffer::MemoryRequestQueue * GetMemoryRequestQueue();

}

// CgsMemoryModuleIO.h:773
struct CgsMemory::MemoryIO::OutputBuffer : public IOBuffer {
	// CgsMemoryModuleIO.h:676
	typedef VariableEventQueue<5120,16> MemoryResponseQueue;

private:
	// CgsMemoryModuleIO.h:790
	OutputBuffer::MemoryResponseQueue mMemoryResponseQueue;

public:
	// CgsMemoryModuleIO.h:778
	void Construct();

	// CgsMemoryModuleIO.h:782
	void Destruct();

	// CgsMemoryModuleIO.h:785
	const OutputBuffer::MemoryResponseQueue * GetMemoryResponseQueue() const;

	// CgsMemoryModuleIO.h:786
	OutputBuffer::MemoryResponseQueue * GetMemoryResponseQueue();

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsMemoryModuleIO.h:48
	namespace MemoryIO {
		// CgsMemoryModuleIO.h:55
		enum ResultCodes {
			E_RESULT_OK = 0,
			E_RESULT_BANK_OUT_OF_RANGE = 1,
			E_RESULT_BANK_ID_IN_USE = 2,
			E_RESULT_BANK_ID_NOT_FOUND = 3,
			E_RESULT_NOT_ENOUGH_SPACE = 4,
			E_RESULT_BLOCK_SIZES_DONT_MATCH = 5,
			E_RESULT_NOT_ENOUGH_GLOBAL_BLOCKS = 6,
			E_RESULT_INVALID_ALLOCATION_SIZE = 7,
			E_RESULT_BANK_IS_ROOT = 8,
			E_RESULT_NOT_EMPTY = 9,
			E_RESULT_ALLOCATOR_NOT_SET = 10,
			E_RESULT_BANK_IS_LEAF = 11,
			E_RESULT_BANK_IS_NOT_LEAF = 12,
			E_RESULT_INVALID_ALIGNMENT = 13,
			E_RESULT_COUNT = 14,
		}

		// CgsMemoryModuleIO.h:75
		enum EventType {
			E_EVENT_TYPE_CREATE_BANK = 0,
			E_EVENT_TYPE_DESTROY_BANK = 1,
			E_EVENT_TYPE_CREATE_RW_LINEAR_ALLOCATOR = 2,
			E_EVENT_TYPE_CREATE_RW_GENERAL_ALLOCATOR = 3,
			E_EVENT_TYPE_CREATE_ALLOCATOR = 4,
			E_EVENT_TYPE_DESTROY_ALLOCATOR = 5,
			E_EVENT_TYPE_CREATE_RESOURCE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

		struct MemoryEvent;

		struct MemoryRequest;

		struct CreateBankRequest;

		struct CreateResourceRequest;

		struct CreateLinearAllocatorRequest;

		struct CreateGeneralAllocatorRequest;

		struct DestroyBankRequest;

		struct CreateAllocatorRequest;

		struct DestroyAllocatorRequest;

		struct MemoryResponse;

		struct CreateResourceResponse;

		struct DestroyBankResponse;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

