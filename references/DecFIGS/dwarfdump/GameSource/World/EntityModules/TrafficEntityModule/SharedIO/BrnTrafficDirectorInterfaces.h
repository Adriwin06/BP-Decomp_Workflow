// BrnTrafficDirectorInterfaces.h:46
struct BrnTraffic::BrnTrafficIO::TrafficDirectorEntity {
	// BrnTrafficDirectorInterfaces.h:63
	Matrix44Affine mLocalTransform;

	// BrnTrafficDirectorInterfaces.h:64
	Vector3 mVelocity;

	// BrnTrafficDirectorInterfaces.h:65
	Vector3 mHalfExtents;

	// BrnTrafficDirectorInterfaces.h:66
	CgsID mVehicleId;

	// BrnTrafficDirectorInterfaces.h:67
	uint16_t mu16EntityIndex;

public:
	// BrnTrafficDirectorInterfaces.h:48
	void TrafficDirectorEntity();

	// BrnTrafficDirectorInterfaces.h:55
	void TrafficDirectorEntity(Matrix44Affine, Vector3, Vector3, CgsID, uint16_t);

}

// BrnTrafficDirectorInterfaces.h:79
struct BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface {
	// BrnTrafficDirectorInterfaces.h:81
	extern const uint32_t KU_MAX_ENTITIES = 32;

private:
	// BrnTrafficDirectorInterfaces.h:102
	uint16_t mu16EntityCount;

	// BrnTrafficDirectorInterfaces.h:103
	Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> maActiveEntityArray;

public:
	// BrnTrafficDirectorInterfaces.h:87
	void Construct();

	// BrnTrafficDirectorInterfaces.h:91
	void Clear();

	// BrnTrafficDirectorInterfaces.h:95
	void AddTrafficEntity(const TrafficDirectorEntity &);

	// BrnTrafficDirectorInterfaces.h:98
	const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> & GetTrafficDirectorEntityArray() const;

}

// BrnTrafficDirectorInterfaces.h:81
extern const uint32_t KU_MAX_ENTITIES = 32;

