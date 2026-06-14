// BrnTrafficLightCollection.h:60
struct BrnTraffic::TrafficLightType {
	// BrnTrafficLightCollection.h:63
	uint8_t muCoronaOffset;

	// BrnTrafficLightCollection.h:64
	uint8_t muNumCoronas;

}

// BrnTrafficLightCollection.h:78
struct BrnTraffic::TrafficLightCollection {
private:
	// BrnTrafficLightCollection.h:167
	extern const uint32_t KU_INSTANCE_ID_HASH_MASK = 127;

	// BrnTrafficLightCollection.h:168
	extern const uint32_t KU_INSTANCE_ID_HASH_TABLE_SIZE = 129;

	// BrnTrafficLightCollection.h:170
	uint16_t muNumTrafficLights;

	// BrnTrafficLightCollection.h:171
	uint16_t muNumTrafficLightTypes;

	// BrnTrafficLightCollection.h:172
	uint16_t muNumCoronas;

	// BrnTrafficLightCollection.h:175
	Vector3Plus * mpaPosAndYRotations;

	// BrnTrafficLightCollection.h:176
	uint32_t * mpaInstanceIDs;

	// BrnTrafficLightCollection.h:177
	uint8_t * mpauInstanceTypes;

	// BrnTrafficLightCollection.h:180
	TrafficLightType * mpaTrafficLightTypes;

	// BrnTrafficLightCollection.h:181
	uint8_t * mpaCoronaTypes;

	// BrnTrafficLightCollection.h:182
	Vector3 * mpaCoronaPositions;

	// BrnTrafficLightCollection.h:185
	uint16_t[129] mauInstanceHashOffsets;

	// BrnTrafficLightCollection.h:186
	uint32_t * mpauInstanceHashTable;

	// BrnTrafficLightCollection.h:187
	uint16_t * mpauInstanceHashToIndexLookup;

public:
	// BrnTrafficLightCollection.h:82
	uint32_t GetNumTrafficLights() const;

	// BrnTrafficLightCollection.h:88
	Matrix44Affine CalcInstanceTransform(uint32_t) const;

	// BrnTrafficLightCollection.h:93
	const rw::math::vpu::Vector3 GetInstancePos(uint32_t) const;

	// BrnTrafficLightCollection.h:97
	int32_t GetInstanceIndexForInstanceID(uint32_t) const;

	// BrnTrafficLightCollection.h:104
	const rw::math::vpu::Matrix44Affine CalcArbitraryAmberCoronaTransform(uint32_t) const;

	// BrnTrafficLightCollection.h:118
	void RenderCoronasForInstance(uint32_t, uint32_t, BrnCoronaManager::BrnSubmissionInterface *, Vector3, Vector3, VecFloat) const;

	// BrnTrafficLightCollection.h:126
	void FixUp(const void *);

	// BrnTrafficLightCollection.h:131
	void FixDown(const void *);

private:
	// BrnTrafficLightCollection.h:190
	uint32_t GetInstanceType(uint32_t) const;

	// BrnTrafficLightCollection.h:191
	const TrafficLightType * GetTrafficLightType(uint32_t) const;

	// BrnTrafficLightCollection.h:192
	BrnTraffic::ETrafficLightState GetCoronaState(uint32_t) const;

	// BrnTrafficLightCollection.h:193
	Vector3 GetCoronaPosition(uint32_t) const;

}

// BrnTrafficLightCollection.h:167
extern const uint32_t KU_INSTANCE_ID_HASH_MASK = 127;

// BrnTrafficLightCollection.h:168
extern const uint32_t KU_INSTANCE_ID_HASH_TABLE_SIZE = 129;

