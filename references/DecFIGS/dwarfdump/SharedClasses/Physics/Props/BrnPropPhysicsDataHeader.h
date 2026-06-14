// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropPhysicsDataHeader.h:41
		const uint32_t KU_MAX_PROP_PHYSICS_VOLUMES = 2048;

	}

}

// BrnPropPhysicsDataHeader.h:55
struct BrnPhysics::Props::PropPhysicsDataHeader {
private:
	// BrnPropPhysicsDataHeader.h:131
	uint32_t muNumberOfPropTypes;

	// BrnPropPhysicsDataHeader.h:132
	uint32_t muNumberOfVolumeTypes;

	// BrnPropPhysicsDataHeader.h:133
	uint32_t muNumberOfPartTypes;

	// BrnPropPhysicsDataHeader.h:135
	uint32_t muSizeInBytes;

	// BrnPropPhysicsDataHeader.h:137
	PropTypeData *[500] mapPropTypes;

	// BrnPropPhysicsDataHeader.h:139
	PropPartTypeData *[300] mapPropPartTypes;

	// BrnPropPhysicsDataHeader.h:141
	VolRef::Volume *[2048] mapVolumeTypes;

	// BrnPropPhysicsDataHeader.h:142
	uint32_t muTimeStamp;

public:
	// BrnPropPhysicsDataHeader.h:60
	void Construct();

	// BrnPropPhysicsDataHeader.h:64
	bool Prepare();

	// BrnPropPhysicsDataHeader.h:68
	bool Release();

	// BrnPropPhysicsDataHeader.h:72
	void Destruct();

	// BrnPropPhysicsDataHeader.h:75
	uint32_t GetSizeInBytes() const;

	// BrnPropPhysicsDataHeader.h:79
	void FixUp(const Resource &);

	// BrnPropPhysicsDataHeader.h:83
	void FixDown(const Resource &);

	// BrnPropPhysicsDataHeader.h:88
	void Refix(const void *, void *);

	// BrnPropPhysicsDataHeader.h:92
	const PropTypeData * GetType(uint32_t) const;

	// BrnPropPhysicsDataHeader.h:95
	uint32_t GetNumberOfPropTypes() const;

	// BrnPropPhysicsDataHeader.h:99
	const PropPartTypeData * GetPartType(uint32_t) const;

	// BrnPropPhysicsDataHeader.h:102
	uint32_t GetTimeStamp() const;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropPhysicsDataHeader.h:41
		const uint32_t KU_MAX_PROP_PHYSICS_VOLUMES = 2048;

	}

}

