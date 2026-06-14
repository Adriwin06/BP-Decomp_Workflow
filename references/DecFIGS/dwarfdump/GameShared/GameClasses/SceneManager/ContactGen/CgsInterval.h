// CgsInterval.h:151
extern const uint16_t ku16Min;

// CgsInterval.h:152
extern const uint16_t ku16Max = 1;

// CgsInterval.h:41
struct CgsSceneManager::OverlappingIntervalPair {
private:
	// CgsInterval.h:57
	uint16_t muObjectIndexA;

	// CgsInterval.h:58
	uint16_t muObjectIndexB;

public:
	// CgsInterval.h:46
	void Set(uint16_t, uint16_t);

	// CgsInterval.h:49
	uint16_t GetObjectIndexA() const;

	// CgsInterval.h:53
	uint16_t GetObjectIndexB() const;

}

// CgsInterval.h:72
struct CgsSceneManager::Interval {
private:
	// CgsInterval.h:151
	extern const uint16_t ku16Min;

	// CgsInterval.h:152
	extern const uint16_t ku16Max = 1;

	// CgsInterval.h:155
	float_t mfXInterval;

	// CgsInterval.h:156
	float_t mfZMinInterval;

	// CgsInterval.h:157
	float_t mfMinusZMaxInterval;

	// CgsInterval.h:158
	float_t mfYMinInterval;

	// CgsInterval.h:159
	float_t mfMinusYMaxInterval;

	// CgsInterval.h:160
	uint16_t mu16ObjectIndex;

	// CgsInterval.h:161
	uint16_t mu16Flags;

public:
	// CgsInterval.h:76
	void Construct();

	// CgsInterval.h:79
	void Destruct();

	// CgsInterval.h:82
	bool Prepare();

	// CgsInterval.h:85
	void Release();

	// CgsInterval.h:88
	void SetMin();

	// CgsInterval.h:92
	void SetMax();

	// CgsInterval.h:96
	bool IsMin() const;

	// CgsInterval.h:100
	bool IsMax() const;

	// CgsInterval.h:107
	void SetIntervals(float32_t, Vector3, Vector3);

	// CgsInterval.h:110
	float_t GetInterval() const;

	// CgsInterval.h:114
	float_t GetYMinInterval() const;

	// CgsInterval.h:118
	float_t GetMinusYMaxInterval() const;

	// CgsInterval.h:122
	float_t GetZMinInterval() const;

	// CgsInterval.h:126
	float_t GetMinusZMaxInterval() const;

	// CgsInterval.h:131
	void SetObjectIndex(uint16_t);

	// CgsInterval.h:135
	uint16_t GetObjectIndex() const;

	// CgsInterval.h:141
	int32_t Compare(const void *, const void *);

	// CgsInterval.h:145
	bool operator<(const Interval &) const;

	// CgsInterval.h:148
	Vector4 GetZYMinMax() const;

}

