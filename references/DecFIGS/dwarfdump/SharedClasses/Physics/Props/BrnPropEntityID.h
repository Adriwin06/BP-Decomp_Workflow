// BrnPropEntityID.h:50
struct BrnWorld::PropEntityID {
private:
	// BrnPropEntityID.h:98
	EntityId mEntityId;

public:
	// BrnPropEntityID.h:54
	void Construct();

	// BrnPropEntityID.h:58
	void Set(uint32_t, uint32_t);

	// BrnPropEntityID.h:62
	void SetEntityIndex(uint16_t);

	// BrnPropEntityID.h:65
	void SetPartIndex(uint32_t);

	// BrnPropEntityID.h:68
	uint16_t GetEntityIndex() const;

	// BrnPropEntityID.h:71
	uint32_t GetPartIndex() const;

	// BrnPropEntityID.h:74
	bool IsPart() const;

	// BrnPropEntityID.h:77
	uint32_t GetValue() const;

	// BrnPropEntityID.h:80
	void AssertIsProp() const;

	// BrnPropEntityID.h:83
	void RwEndianSwap();

	// BrnPropEntityID.h:86
	void PropEntityID();

	// BrnPropEntityID.h:87
	void PropEntityID(EntityId);

	// BrnPropEntityID.h:88
	EntityId operator CgsSceneManager::EntityId() const;

	// BrnPropEntityID.h:91
	bool operator==(const EntityId &) const;

}

// BrnPropEntityID.h:147
extern const uint32_t KU_BITS_FOR_VOLUME_NUMBER = 6;

// BrnPropEntityID.h:148
extern const uint32_t KU_BITS_FOR_TYPE_ID = 10;

// BrnPropEntityID.h:150
extern const uint32_t KU_VOLUME_NUMBER_OFFSET;

// BrnPropEntityID.h:151
extern const uint32_t KU_TYPE_ID_OFFSET = 6;

// BrnPropEntityID.h:154
extern const uint32_t KU_VOLUME_NUMBER_MASK = 63;

// BrnPropEntityID.h:155
extern const uint32_t KU_TYPE_ID_MASK = 65472;

// BrnPropEntityID.h:112
struct BrnWorld::PropVolumeID {
private:
	// BrnPropEntityID.h:147
	extern const uint32_t KU_BITS_FOR_VOLUME_NUMBER = 6;

	// BrnPropEntityID.h:148
	extern const uint32_t KU_BITS_FOR_TYPE_ID = 10;

	// BrnPropEntityID.h:150
	extern const uint32_t KU_VOLUME_NUMBER_OFFSET;

	// BrnPropEntityID.h:151
	extern const uint32_t KU_TYPE_ID_OFFSET = 6;

	// BrnPropEntityID.h:154
	extern const uint32_t KU_VOLUME_NUMBER_MASK = 63;

	// BrnPropEntityID.h:155
	extern const uint32_t KU_TYPE_ID_MASK = 65472;

	// BrnPropEntityID.h:158
	VolumeId mVolumeId;

public:
	// BrnPropEntityID.h:116
	void Construct();

	// BrnPropEntityID.h:120
	void Set(uint16_t, uint8_t);

	// BrnPropEntityID.h:123
	void SetPropType(uint32_t);

	// BrnPropEntityID.h:126
	void SetVolumeNumber(uint32_t);

	// BrnPropEntityID.h:129
	uint32_t GetPropType();

	// BrnPropEntityID.h:132
	uint32_t GetVolumeNumber();

	// BrnPropEntityID.h:135
	uint64_t GetValue() const;

	// BrnPropEntityID.h:138
	void AssertIsProp() const;

	// BrnPropEntityID.h:141
	void PropVolumeID();

	// BrnPropEntityID.h:142
	void PropVolumeID(VolumeId);

	// BrnPropEntityID.h:143
	VolumeId operator CgsSceneManager::VolumeId() const;

}

// BrnPropEntityID.h:170
struct BrnWorld::PropVolumeInstanceID {
private:
	// BrnPropEntityID.h:218
	VolumeInstanceId mVolumeInstanceId;

public:
	// BrnPropEntityID.h:174
	void Construct();

	// BrnPropEntityID.h:178
	void Set(PropEntityID, uint8_t);

	// BrnPropEntityID.h:181
	void SetVolumeNumber(uint8_t);

	// BrnPropEntityID.h:184
	void SetPropEntityId(PropEntityID);

	// BrnPropEntityID.h:187
	void SetEntityIndex(uint16_t);

	// BrnPropEntityID.h:190
	uint16_t GetEntityIndex() const;

	// BrnPropEntityID.h:193
	void SetPartIndex(uint32_t);

	// BrnPropEntityID.h:196
	uint32_t GetPartIndex() const;

	// BrnPropEntityID.h:199
	uint32_t GetVolumeNumber();

	// BrnPropEntityID.h:202
	uint64_t GetValue() const;

	// BrnPropEntityID.h:205
	void AssertIsProp() const;

	// BrnPropEntityID.h:208
	PropEntityID GetPropEntityID();

	// BrnPropEntityID.h:211
	void PropVolumeInstanceID();

	// BrnPropEntityID.h:212
	void PropVolumeInstanceID(VolumeInstanceId);

	// BrnPropEntityID.h:213
	void PropVolumeInstanceID(uint64_t);

	// BrnPropEntityID.h:214
	VolumeInstanceId operator CgsSceneManager::VolumeInstanceId() const;

	// BrnPropEntityID.h:215
	uint64_t operator std::uint64_t() const;

}

