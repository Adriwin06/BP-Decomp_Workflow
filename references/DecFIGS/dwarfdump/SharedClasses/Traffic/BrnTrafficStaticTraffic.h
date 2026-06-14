// BrnTrafficStaticTraffic.h:46
struct BrnTraffic::StaticTrafficVehicle {
	// BrnTrafficStaticTraffic.h:56
	Matrix44Affine mTransform;

	// BrnTrafficStaticTraffic.h:57
	uint16_t mFlowTypeID;

	// BrnTrafficStaticTraffic.h:58
	uint8_t mExistsAtAllChance;

	// BrnTrafficStaticTraffic.h:59
	uint8_t muFlags;

public:
	// BrnTrafficStaticTraffic.h:64
	void FixUp(const void *);

	// BrnTrafficStaticTraffic.h:69
	void FixDown(const void *);

}

