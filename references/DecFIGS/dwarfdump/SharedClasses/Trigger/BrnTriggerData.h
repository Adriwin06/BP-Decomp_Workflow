// BrnTriggerData.h:58
struct BrnTrigger::TriggerData {
	// BrnTriggerData.h:60
	extern const int32_t KI_VERSION_NUMBER = 34;

	// BrnTriggerData.h:233
	extern const int32_t KI_ALIGNMENT = 16;

private:
	// BrnTriggerData.h:237
	int32_t miVersionNumber;

	// BrnTriggerData.h:238
	uint32_t muSize;

	// BrnTriggerData.h:240
	Vector3 mPlayerStartPosition;

	// BrnTriggerData.h:241
	Vector3 mPlayerStartDirection;

	// BrnTriggerData.h:243
	Landmark * mpLandmarks;

	// BrnTriggerData.h:244
	int32_t miLandmarkCount;

	// BrnTriggerData.h:245
	int32_t miOnlineLandmarkCount;

	// BrnTriggerData.h:247
	SignatureStunt * mpSignatureStunts;

	// BrnTriggerData.h:248
	int32_t miSignatureStuntCount;

	// BrnTriggerData.h:250
	GenericRegion * mpGenericRegions;

	// BrnTriggerData.h:251
	int32_t miGenericRegionCount;

	// BrnTriggerData.h:253
	Killzone * mpKillzones;

	// BrnTriggerData.h:254
	int32_t miKillzoneCount;

	// BrnTriggerData.h:256
	Blackspot * mpBlackspots;

	// BrnTriggerData.h:257
	int32_t miBlackspotCount;

	// BrnTriggerData.h:259
	VFXBoxRegion * mpVFXBoxRegions;

	// BrnTriggerData.h:260
	int32_t miVFXBoxRegionCount;

	// BrnTriggerData.h:262
	RoamingLocation * mpRoamingLocations;

	// BrnTriggerData.h:263
	int32_t miRoamingLocationCount;

	// BrnTriggerData.h:265
	SpawnLocation * mpSpawnLocations;

	// BrnTriggerData.h:266
	int32_t miSpawnLocationCount;

	// BrnTriggerData.h:268
	TriggerRegion ** mppRegions;

	// BrnTriggerData.h:269
	int32_t miRegionCount;

public:
	// BrnTriggerData.h:73
	void Construct(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, LinearMalloc *);

	// BrnTriggerData.h:78
	void ConstructRegions(int32_t, LinearMalloc *);

	// BrnTriggerData.h:82
	void SetPlayerStartPosition(Vector3);

	// BrnTriggerData.h:86
	void SetPlayerStartDirection(Vector3);

	// BrnTriggerData.h:89
	Vector3 GetPlayerStartPosition() const;

	// BrnTriggerData.h:92
	Vector3 GetPlayerStartDirection() const;

	// BrnTriggerData.h:97
	const Landmark * GetLandmark(int32_t) const;

	// BrnTriggerData.h:101
	Landmark * GetLandmark(int32_t);

	// BrnTriggerData.h:105
	const Landmark * GetOnlineLandmark(int32_t) const;

	// BrnTriggerData.h:109
	Landmark * GetOnlineLandmark(int32_t);

	// BrnTriggerData.h:112
	int32_t GetLandmarkCount() const;

	// BrnTriggerData.h:115
	int32_t GetOnlineLandmarkCount() const;

	// BrnTriggerData.h:119
	const SignatureStunt * GetSignatureStunt(int32_t) const;

	// BrnTriggerData.h:123
	SignatureStunt * GetSignatureStunt(int32_t);

	// BrnTriggerData.h:126
	int32_t GetSignatureStuntCount() const;

	// BrnTriggerData.h:130
	const GenericRegion * GetGenericRegion(int32_t) const;

	// BrnTriggerData.h:134
	GenericRegion * GetGenericRegion(int32_t);

	// BrnTriggerData.h:138
	VFXBoxRegion * GetVFXBoxRegion(int32_t);

	// BrnTriggerData.h:141
	int32_t GetGenericRegionCount() const;

	// BrnTriggerData.h:145
	const Killzone * GetKillzone(int32_t) const;

	// BrnTriggerData.h:149
	Killzone * GetKillzone(int32_t);

	// BrnTriggerData.h:152
	int32_t GetKillzoneCount() const;

	// BrnTriggerData.h:156
	const Blackspot * GetBlackspot(int32_t) const;

	// BrnTriggerData.h:160
	Blackspot * GetBlackspot(int32_t);

	// BrnTriggerData.h:163
	int32_t GetBlackspotCount() const;

	// BrnTriggerData.h:168
	const RoamingLocation * GetRoamingLocation(int32_t) const;

	// BrnTriggerData.h:172
	RoamingLocation * GetRoamingLocation(int32_t);

	// BrnTriggerData.h:175
	int32_t GetRoamingLocationCount() const;

	// BrnTriggerData.h:180
	const SpawnLocation * GetSpawnLocation(int32_t) const;

	// BrnTriggerData.h:184
	SpawnLocation * GetSpawnLocation(int32_t);

	// BrnTriggerData.h:187
	int32_t GetSpawnLocationCount() const;

	// BrnTriggerData.h:191
	int32_t GetRegionCount() const;

	// BrnTriggerData.h:195
	const TriggerRegion * GetRegion(int32_t) const;

	// BrnTriggerData.h:200
	void SetRegion(int32_t, TriggerRegion *);

	// BrnTriggerData.h:205
	const Landmark * GetLandmarkFromRegionIndex(int32_t) const;

	// BrnTriggerData.h:210
	const Landmark * FindLandmark(CgsID) const;

	// BrnTriggerData.h:216
	const Landmark * FindLandmarkByDesignIndex(uint8_t) const;

	// BrnTriggerData.h:220
	void FixDown(MemoryResource);

	// BrnTriggerData.h:224
	void FixUp(MemoryResource);

	// BrnTriggerData.h:228
	void SetSize(uint32_t);

	// BrnTriggerData.h:231
	uint32_t GetSize() const;

}

// BrnTriggerData.h:60
extern const int32_t KI_VERSION_NUMBER = 34;

// BrnTriggerData.h:233
extern const int32_t KI_ALIGNMENT = 16;

