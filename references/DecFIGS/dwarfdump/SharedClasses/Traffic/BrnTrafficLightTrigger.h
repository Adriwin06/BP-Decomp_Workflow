// BrnTrafficLightTrigger.h:55
struct BrnTraffic::LightTriggerId : public TriggerId {
public:
	// BrnTrafficLightTrigger.h:62
	void Set(uint32_t, uint32_t);

	// BrnTrafficLightTrigger.h:66
	void SetInvalid();

	// BrnTrafficLightTrigger.h:70
	bool IsValid() const;

	// BrnTrafficLightTrigger.h:73
	uint32_t GetHull() const;

	// BrnTrafficLightTrigger.h:74
	uint32_t GetLightTriggerIndex() const;

}

// BrnTrafficLightTrigger.h:89
struct BrnTraffic::LightTrigger {
private:
	// BrnTrafficLightTrigger.h:117
	Vector3 mDimensions;

	// BrnTrafficLightTrigger.h:118
	Vector3Plus mPosPlusYRot;

public:
	// BrnTrafficLightTrigger.h:93
	Vector3 GetDimensions() const;

	// BrnTrafficLightTrigger.h:94
	Matrix44Affine GetTransform() const;

	// BrnTrafficLightTrigger.h:100
	void FixUp(const void *);

	// BrnTrafficLightTrigger.h:105
	void FixDown(const void *);

}

// BrnTrafficLightTrigger.h:133
struct BrnTraffic::LightTriggerStartData {
	// BrnTrafficLightTrigger.h:136
	extern const uint32_t KU_MAX_START_POSITIONS = 8;

private:
	// BrnTrafficLightTrigger.h:180
	Vector3[8] maStartingPositions;

	// BrnTrafficLightTrigger.h:181
	Vector3[8] maStartingDirections;

	// BrnTrafficLightTrigger.h:183
	CgsID[16] maDestinationIDs;

	// BrnTrafficLightTrigger.h:184
	uint8_t[16] maeDestinationDifficulties;

	// BrnTrafficLightTrigger.h:186
	uint8_t muNumStartingPositions;

	// BrnTrafficLightTrigger.h:187
	uint8_t muNumDestinations;

	// BrnTrafficLightTrigger.h:188
	uint8_t muNumLanes;

public:
	// BrnTrafficLightTrigger.h:139
	uint32_t GetNumStartPositions() const;

	// BrnTrafficLightTrigger.h:140
	Vector3 GetStartPosition(uint32_t) const;

	// BrnTrafficLightTrigger.h:141
	Vector3 GetStartDirection(uint32_t) const;

	// BrnTrafficLightTrigger.h:143
	uint32_t GetNumDestinations() const;

	// BrnTrafficLightTrigger.h:144
	CgsID GetDestinationID(uint32_t) const;

	// BrnTrafficLightTrigger.h:145
	BrnTraffic::ERaceDesinationType GetDestinationDifficulty(uint32_t) const;

	// BrnTrafficLightTrigger.h:151
	void FixUp(const void *);

	// BrnTrafficLightTrigger.h:156
	void FixDown(const void *);

}

// BrnTrafficLightTrigger.h:136
extern const uint32_t KU_MAX_START_POSITIONS = 8;

