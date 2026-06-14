// BrnLandmark.h:48
struct BrnTrigger::StartingGrid {
	// BrnLandmark.h:50
	extern const int32_t KI_STARTING_POINT_COUNT = 8;

private:
	// BrnLandmark.h:76
	Vector3[8] maStartingPositions;

	// BrnLandmark.h:77
	Vector3[8] maStartingDirections;

public:
	// BrnLandmark.h:53
	void Construct();

	// BrnLandmark.h:59
	void SetPoint(int32_t, Vector3, Vector3);

	// BrnLandmark.h:63
	Vector3 GetPosition(int32_t) const;

	// BrnLandmark.h:67
	Vector3 GetDirection(int32_t) const;

	// BrnLandmark.h:70
	void FixDown();

	// BrnLandmark.h:73
	void FixUp();

}

// BrnLandmark.h:91
struct BrnTrigger::Landmark : public TriggerRegion {
private:
	// BrnLandmark.h:139
	extern const int32_t KI_FLAG_ONLINE = 1;

	// BrnLandmark.h:141
	StartingGrid * mpaStartingGrids;

	// BrnLandmark.h:143
	int8_t miStartingGridCount;

	// BrnLandmark.h:144
	uint8_t muDesignIndex;

	// BrnLandmark.h:145
	uint8_t muDistrict;

	// BrnLandmark.h:146
	uint8_t mu8Flags;

public:
	// BrnLandmark.h:101
	void Construct(CgsID, const BoxRegion *, int32_t, LinearMalloc *, uint8_t, uint8_t, bool);

	// BrnLandmark.h:105
	void FixDown(MemoryResource);

	// BrnLandmark.h:109
	void FixUp(MemoryResource);

	// BrnLandmark.h:114
	void SetStartingGrid(int32_t, const StartingGrid *);

	// BrnLandmark.h:118
	StartingGrid * GetStartingGrid(int32_t);

	// BrnLandmark.h:122
	const StartingGrid * GetStartingGrid(int32_t) const;

	// BrnLandmark.h:125
	int32_t GetStartingGridCount() const;

	// BrnLandmark.h:129
	uint8_t GetDesignIndex() const;

	// BrnLandmark.h:132
	uint8_t GetDistrict() const;

	// BrnLandmark.h:135
	bool IsOnline() const;

}

// BrnLandmark.h:50
extern const int32_t KI_STARTING_POINT_COUNT = 8;

// BrnLandmark.h:139
extern const int32_t KI_FLAG_ONLINE = 1;

