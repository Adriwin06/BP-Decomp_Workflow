// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPhysicsPropZoneData.h:793
		extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, PropCellId);

	}

}

// BrnPhysicsPropZoneData.h:60
struct BrnPhysics::Props::PropCellId {
private:
	// BrnPhysicsPropZoneData.h:93
	extern const uint16_t KU_INVALID_CELL_ID = 65535;

	// BrnPhysicsPropZoneData.h:94
	uint16_t muX;

	// BrnPhysicsPropZoneData.h:95
	uint16_t muZ;

public:
	// BrnPhysicsPropZoneData.h:64
	void Construct();

	// BrnPhysicsPropZoneData.h:69
	void Construct(uint16_t, uint16_t);

	// BrnPhysicsPropZoneData.h:72
	uint16_t GetX() const;

	// BrnPhysicsPropZoneData.h:75
	uint16_t GetZ() const;

	// BrnPhysicsPropZoneData.h:78
	bool operator==(const PropCellId &) const;

	// BrnPhysicsPropZoneData.h:81
	bool operator!=(const PropCellId &) const;

	// BrnPhysicsPropZoneData.h:84
	void FixUp();

	// BrnPhysicsPropZoneData.h:87
	void FixDown();

	// BrnPhysicsPropZoneData.h:90
	bool IsValid() const;

}

// BrnPhysicsPropZoneData.h:107
struct BrnPhysics::Props::PropCellData {
private:
	// BrnPhysicsPropZoneData.h:140
	PropCellId mId;

	// BrnPhysicsPropZoneData.h:141
	uint16_t muStartIndex;

	// BrnPhysicsPropZoneData.h:142
	uint16_t muCount;

	// BrnPhysicsPropZoneData.h:143
	uint16_t muNumberOfRespawnDifferent;

	// BrnPhysicsPropZoneData.h:144
	uint16_t muNumberOfDontRespawn;

public:
	// BrnPhysicsPropZoneData.h:116
	void Construct(PropCellId, uint16_t, uint16_t, uint16_t, uint16_t);

	// BrnPhysicsPropZoneData.h:119
	int32_t GetStartIndex() const;

	// BrnPhysicsPropZoneData.h:122
	int32_t GetCount() const;

	// BrnPhysicsPropZoneData.h:125
	const PropCellId & GetId() const;

	// BrnPhysicsPropZoneData.h:128
	int32_t GetNumberOfRespawnDifferent() const;

	// BrnPhysicsPropZoneData.h:131
	int32_t GetNumberOfDontRespawn() const;

	// BrnPhysicsPropZoneData.h:134
	void FixUp();

	// BrnPhysicsPropZoneData.h:137
	void FixDown();

}

// BrnPhysicsPropZoneData.h:156
struct BrnPhysics::Props::PropZoneData {
	// BrnPhysicsPropZoneData.h:269
	PropCellData * maCells;

	// BrnPhysicsPropZoneData.h:270
	uint8_t muNumCells;

	// BrnPhysicsPropZoneData.h:273
	PropInstanceData * maInstances;

	// BrnPhysicsPropZoneData.h:275
	uint32_t muSizeInBytes;

	// BrnPhysicsPropZoneData.h:276
	uint32_t muNumberOfInstances;

	// BrnPhysicsPropZoneData.h:277
	uint32_t muNumberOfProps;

	// BrnPhysicsPropZoneData.h:278
	uint16_t muZoneId;

public:
	// BrnPhysicsPropZoneData.h:161
	void Construct();

	// BrnPhysicsPropZoneData.h:165
	bool Prepare();

	// BrnPhysicsPropZoneData.h:169
	bool Release();

	// BrnPhysicsPropZoneData.h:173
	void Destruct();

	// BrnPhysicsPropZoneData.h:177
	uint32_t GetNumberOfInstances() const;

	// BrnPhysicsPropZoneData.h:180
	uint32_t GetNumberOfProps() const;

	// BrnPhysicsPropZoneData.h:183
	const PropInstanceData * GetProp(uint32_t) const;

	// BrnPhysicsPropZoneData.h:186
	uint16_t GetZoneId() const;

	// BrnPhysicsPropZoneData.h:189
	uint32_t GetSizeInBytes() const;

	// BrnPhysicsPropZoneData.h:192
	void FixUp(const Resource &);

	// BrnPhysicsPropZoneData.h:195
	void FixDown(const Resource &);

	// BrnPhysicsPropZoneData.h:199
	void Refix(const void *, void *);

	// BrnPhysicsPropZoneData.h:203
	void SetNumberOfRespawnDifferentProps(int32_t);

	// BrnPhysicsPropZoneData.h:207
	void SetNumberOfDontRespawnProps(int32_t);

	// BrnPhysicsPropZoneData.h:211
	BrnPhysics::Props::eRespawnType GetRespawnTypeForProp(int32_t) const;

	// BrnPhysicsPropZoneData.h:216
	PropCellId GetCellId(float32_t, float32_t);

	// BrnPhysicsPropZoneData.h:220
	PropCellId GetCellId(Vector3);

	// BrnPhysicsPropZoneData.h:224
	Vector3 GetCellWorldPos(PropCellId);

	// BrnPhysicsPropZoneData.h:227
	int32_t GetNumCells() const;

	// BrnPhysicsPropZoneData.h:231
	const PropCellData * GetCellData(int32_t) const;

}

// BrnPhysicsPropZoneData.h:93
extern const uint16_t KU_INVALID_CELL_ID = 65535;

