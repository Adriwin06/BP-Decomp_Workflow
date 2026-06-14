// CgsIntervalStack.h:32
struct CgsSceneManager::IntervalStackEntry {
	// CgsIntervalStack.h:34
	Vector4 mvZYMaxMin;

}

// CgsIntervalStack.h:46
struct CgsSceneManager::IntervalStack {
private:
	// CgsIntervalStack.h:79
	uint16_t * mpuIndexData;

	// CgsIntervalStack.h:80
	IntervalStackEntry * mpIntervalData;

	// CgsIntervalStack.h:81
	uint32_t muMaxLen;

	// CgsIntervalStack.h:82
	uint32_t muLen;

public:
	// CgsIntervalStack.h:54
	void Init(uint16_t *, IntervalStackEntry *, uint32_t);

	// CgsIntervalStack.h:58
	void Clear();

	// CgsIntervalStack.h:62
	uint32_t Length() const;

	// CgsIntervalStack.h:66
	uint32_t Push(const Interval &);

	// CgsIntervalStack.h:70
	uint32_t Pop(uint32_t);

	// CgsIntervalStack.h:75
	// Declaration
	void CheckOverlappingAndAddToQueue() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsInterval.h:61
		typedef CgsModule::EventQueue<CgsSceneManager::OverlappingIntervalPair,131072> OverlapPairQueue;

	}

}

// CgsIntervalStack.h:46
struct CgsSceneManager::IntervalStack {
private:
	// CgsIntervalStack.h:79
	uint16_t * mpuIndexData;

	// CgsIntervalStack.h:80
	IntervalStackEntry * mpIntervalData;

	// CgsIntervalStack.h:81
	uint32_t muMaxLen;

	// CgsIntervalStack.h:82
	uint32_t muLen;

public:
	// CgsIntervalStack.h:54
	void Init(uint16_t *, IntervalStackEntry *, uint32_t);

	// CgsIntervalStack.h:58
	void Clear();

	// CgsIntervalStack.h:62
	uint32_t Length() const;

	// CgsIntervalStack.h:66
	uint32_t Push(const Interval &);

	// CgsIntervalStack.h:70
	uint32_t Pop(uint32_t);

	// CgsIntervalStack.h:75
	// Declaration
	void CheckOverlappingAndAddToQueue(const Interval &, OverlapPairQueue *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsInterval.h:61
		typedef CgsModule::EventQueue<CgsSceneManager::OverlappingIntervalPair,131072> OverlapPairQueue;

	}

}

