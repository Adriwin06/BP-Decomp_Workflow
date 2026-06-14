// CgsIntervalList.h:49
struct CgsSceneManager::ObjectToIntervalMap {
private:
	// CgsIntervalList.h:64
	uint16_t[2] mu8MinMaxIntervalIndex;

public:
	// CgsIntervalList.h:52
	void Construct();

	// CgsIntervalList.h:56
	uint16_t GetIntervalIndex(uint8_t) const;

	// CgsIntervalList.h:60
	void SetIntervalIndex(uint8_t, uint16_t);

}

// CgsIntervalList.h:77
struct CgsSceneManager::IntervalList {
private:
	// CgsIntervalList.h:173
	extern const int32_t KI_MIN_INDEX;

	// CgsIntervalList.h:174
	extern const int32_t KI_MAX_INDEX = 1;

	// CgsIntervalList.h:177
	Interval * mpaIntervals;

	// CgsIntervalList.h:178
	ObjectToIntervalMap * mpaObjectToIntervalMap;

	// CgsIntervalList.h:180
	uint32_t muNumIntervals;

	// CgsIntervalList.h:181
	uint32_t muMaxNumIntervals;

public:
	// CgsIntervalList.h:81
	void Construct();

	// CgsIntervalList.h:84
	void Destruct();

	// CgsIntervalList.h:90
	bool Prepare(Interval *, ObjectToIntervalMap *, uint32_t);

	// CgsIntervalList.h:93
	void Release();

	// CgsIntervalList.h:96
	void Clear();

	// CgsIntervalList.h:102
	void AddObject(uint16_t, const Interval &, const Interval &);

	// CgsIntervalList.h:108
	void AddObject(uint16_t, Vector3, Vector3);

	// CgsIntervalList.h:112
	void RemoveObject(uint16_t);

	// CgsIntervalList.h:118
	void UpdateObject(uint16_t, Vector3, Vector3);

	// CgsIntervalList.h:121
	void Sort();

	// CgsIntervalList.h:126
	void SweepIntervals(OverlapPairQueue *, IntervalStack *) const;

	// CgsIntervalList.h:133
	void SweepWithStaticList(IntervalList *, OverlapPairQueue *, IntervalStack, IntervalStack);

	// CgsIntervalList.h:140
	void SweepAgainstList(const IntervalList &, OverlapPairQueue *, IntervalStack *, IntervalStack *) const;

	// CgsIntervalList.h:143
	void ResetList();

	// CgsIntervalList.h:147
	void RepairMappings();

	// CgsIntervalList.h:151
	void RemoveInterval(uint16_t);

	// CgsIntervalList.h:157
	void GetIntervalsAndRemoveObject(uint16_t, Interval *, Interval *);

	// CgsIntervalList.h:160
	void SanityCheck();

	// CgsIntervalList.h:163
	uint32_t GetNumIntervals() const;

	// CgsIntervalList.h:167
	const Interval * GetInterval(uint32_t) const;

private:
	// CgsIntervalList.h:191
	void AddSentinelInterval();

}

// CgsIntervalList.h:173
extern const int32_t KI_MIN_INDEX;

// CgsIntervalList.h:174
extern const int32_t KI_MAX_INDEX = 1;

