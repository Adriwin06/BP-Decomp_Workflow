// CgsStack.h:33
struct CgsContainers::Stack<ICE::ActionRef,20> {
private:
	// CgsStack.h:81
	ActionRef[20] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const ActionRef &);

	// CgsStack.h:108
	ActionRef * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const ActionRef & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const ActionRef &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	ActionRef & operator[](int);

	// CgsStack.h:199
	const ActionRef & operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96> {
private:
	// CgsStack.h:81
	BrnParticle::Native::TrailEmitter *[96] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(BrnParticle::Native::TrailEmitter *const&);

	// CgsStack.h:108
	BrnParticle::Native::TrailEmitter ** Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	BrnParticle::Native::TrailEmitter *const& Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(BrnParticle::Native::TrailEmitter *const&) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	BrnParticle::Native::TrailEmitter *& operator[](int);

	// CgsStack.h:199
	BrnParticle::Native::TrailEmitter *const& operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<CgsGraphics::Im2dTransform,33> {
private:
	// CgsStack.h:81
	Im2dTransform[33] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const Im2dTransform &);

	// CgsStack.h:108
	Im2dTransform * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const Im2dTransform & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const Im2dTransform &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	Im2dTransform & operator[](int);

	// CgsStack.h:199
	const Im2dTransform & operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<uint16_t,2> {
private:
	// CgsStack.h:81
	uint16_t[2] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const uint16_t &);

	// CgsStack.h:108
	uint16_t * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const uint16_t & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const uint16_t &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	uint16_t & operator[](int);

	// CgsStack.h:199
	const uint16_t & operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<uint16_t,8> {
private:
	// CgsStack.h:81
	uint16_t[8] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const uint16_t &);

	// CgsStack.h:108
	uint16_t * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const uint16_t & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const uint16_t &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	uint16_t & operator[](int);

	// CgsStack.h:199
	const uint16_t & operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<std::uint16_t,2> {
private:
	// CgsStack.h:81
	uint16_t[2] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const uint16_t &);

	// CgsStack.h:108
	uint16_t * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const uint16_t & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const uint16_t &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	uint16_t & operator[](int);

	// CgsStack.h:199
	const uint16_t & operator[](int) const;

}

// CgsStack.h:24
namespace CgsContainers {
	struct Stack<ICE::ActionRef,20>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<30u>;

	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct BitArray<298u>;

	struct Array<BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>*,40u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>*,1u>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct BitArray<35u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Set<uint16_t,8u>;

	struct BitArray<28u>;

	struct ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>;

	struct Array<int32_t,28u>;

	struct Array<BrnDirector::Camera::BehaviourHelperIndex,28u>;

	struct Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>;

	struct DictEntry;

	struct Dictionary<ICE::ICETakeData>;

}

// CgsStack.h:33
struct CgsContainers::Stack<uint16_t,400> {
private:
	// CgsStack.h:81
	uint16_t[400] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const uint16_t &);

	// CgsStack.h:108
	uint16_t * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const uint16_t & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const uint16_t &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	uint16_t & operator[](int);

	// CgsStack.h:199
	const uint16_t & operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<uint8_t,200> {
private:
	// CgsStack.h:81
	uint8_t[200] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const uint8_t &);

	// CgsStack.h:108
	uint8_t * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const uint8_t & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const uint8_t &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	uint8_t & operator[](int);

	// CgsStack.h:199
	const uint8_t & operator[](int) const;

}

// CgsStack.h:33
struct CgsContainers::Stack<uint16_t,1> {
private:
	// CgsStack.h:81
	uint16_t[1] maData;

	// CgsStack.h:82
	int32_t miLength;

public:
	// CgsStack.h:36
	void Stack();

	// CgsStack.h:89
	void Construct();

	// CgsStack.h:96
	void Push(const uint16_t &);

	// CgsStack.h:108
	uint16_t * Grow();

	// CgsStack.h:119
	void Pop();

	// CgsStack.h:147
	const uint16_t & Peek() const;

	// CgsStack.h:158
	int32_t GetLength() const;

	// CgsStack.h:167
	bool IsFull() const;

	// CgsStack.h:175
	bool IsEmpty() const;

	// CgsStack.h:130
	bool Contains(const uint16_t &) const;

	// CgsStack.h:184
	int32_t GetMaxLength() const;

	// CgsStack.h:191
	void Clear();

	// CgsStack.h:211
	uint16_t & operator[](int);

	// CgsStack.h:199
	const uint16_t & operator[](int) const;

}

