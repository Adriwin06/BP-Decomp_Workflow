// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32> {
private:
	// CgsFifoQueue.h:58
	StatsRequestEvent[32] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const StatsRequestEvent *);

	// CgsFifoQueue.h:96
	bool Pop(StatsRequestEvent *);

	// CgsFifoQueue.h:117
	bool Peek(StatsRequestEvent *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1> {
private:
	// CgsFifoQueue.h:58
	NetworkInSelectScoreboardEvent[1] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const NetworkInSelectScoreboardEvent *);

	// CgsFifoQueue.h:96
	bool Pop(NetworkInSelectScoreboardEvent *);

	// CgsFifoQueue.h:117
	bool Peek(NetworkInSelectScoreboardEvent *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14> {
private:
	// CgsFifoQueue.h:58
	NetworkOutRecvRoadRulesPBEvent[14] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const NetworkOutRecvRoadRulesPBEvent *);

	// CgsFifoQueue.h:96
	bool Pop(NetworkOutRecvRoadRulesPBEvent *);

	// CgsFifoQueue.h:117
	bool Peek(NetworkOutRecvRoadRulesPBEvent *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2> {
private:
	// CgsFifoQueue.h:58
	NetworkInRoadRulesPBEvent[2] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const NetworkInRoadRulesPBEvent *);

	// CgsFifoQueue.h:96
	bool Pop(NetworkInRoadRulesPBEvent *);

	// CgsFifoQueue.h:117
	bool Peek(NetworkInRoadRulesPBEvent *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128> {
private:
	// CgsFifoQueue.h:58
	CreatePoolRequest[128] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const CreatePoolRequest *);

	// CgsFifoQueue.h:96
	bool Pop(CreatePoolRequest *);

	// CgsFifoQueue.h:117
	bool Peek(CreatePoolRequest *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4> {
private:
	// CgsFifoQueue.h:58
	AllocateResourceListRequest[4] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const AllocateResourceListRequest *);

	// CgsFifoQueue.h:96
	bool Pop(AllocateResourceListRequest *);

	// CgsFifoQueue.h:117
	bool Peek(AllocateResourceListRequest *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct BasePriorityQueue;

	struct CgsHash;

	struct CgsHash12;

	struct CgsHash16;

	struct DictEntry;

	struct DictionaryBase;

	struct LocklessQueueUnitTestEntry;

	struct LocklessQueue<CgsContainers::LocklessQueueUnitTestEntry>;

	struct FastBitArray<1024>;

	struct BitArray<1024u>;

	struct DictionaryResourceTypeBase;

}

// CgsFifoQueue.h:33
struct CgsContainers::FifoQueue<CgsResource::RunningLoad,4> {
private:
	// CgsFifoQueue.h:58
	RunningLoad[4] maData;

	// CgsFifoQueue.h:59
	int32_t miReadPos;

	// CgsFifoQueue.h:60
	int32_t miWritePos;

	// CgsFifoQueue.h:61
	int32_t miLength;

public:
	// CgsFifoQueue.h:68
	void Construct();

	// CgsFifoQueue.h:75
	bool Push(const RunningLoad *);

	// CgsFifoQueue.h:96
	bool Pop(RunningLoad *);

	// CgsFifoQueue.h:117
	bool Peek(RunningLoad *) const;

	// CgsFifoQueue.h:132
	int32_t GetLength() const;

	// CgsFifoQueue.h:139
	int32_t GetMaxLength() const;

	// CgsFifoQueue.h:146
	void Clear();

}

