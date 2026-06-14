// BrnRegion.h:28
namespace BrnTrigger {
	// Declaration
	struct GenericRegion {
		// BrnGenericRegion.h:49
		enum Type {
			E_TYPE_JUNK_YARD = 0,
			E_TYPE_GAS_STATION = 1,
			E_TYPE_BODY_SHOP = 2,
			E_TYPE_PAINT_SHOP = 3,
			E_TYPE_CAR_PARK = 4,
			E_TYPE_SIGNATURE_TAKEDOWN = 5,
			E_TYPE_KILLZONE = 6,
			E_TYPE_JUMP = 7,
			E_TYPE_SMASH = 8,
			E_TYPE_SIGNATURE_CRASH = 9,
			E_TYPE_SIGNATURE_CRASH_CAMERA = 10,
			E_TYPE_ROAD_LIMIT = 11,
			E_TYPE_OVERDRIVE_BOOST = 12,
			E_TYPE_OVERDRIVE_STRENGTH = 13,
			E_TYPE_OVERDRIVE_SPEED = 14,
			E_TYPE_OVERDRIVE_CONTROL = 15,
			E_TYPE_TIRE_SHOP = 16,
			E_TYPE_TUNING_SHOP = 17,
			E_TYPE_PICTURE_PARADISE = 18,
			E_TYPE_TUNNEL = 19,
			E_TYPE_OVERPASS = 20,
			E_TYPE_BRIDGE = 21,
			E_TYPE_WAREHOUSE = 22,
			E_TYPE_LARGE_OVERHEAD_OBJECT = 23,
			E_TYPE_NARROW_ALLEY = 24,
			E_TYPE_PASS_TUNNEL = 25,
			E_TYPE_PASS_OVERPASS = 26,
			E_TYPE_PASS_BRIDGE = 27,
			E_TYPE_PASS_WAREHOUSE = 28,
			E_TYPE_PASS_LARGEOVERHEADOBJECT = 29,
			E_TYPE_PASS_NARROWALLEY = 30,
			E_TYPE_RAMP = 31,
			E_TYPE_COUNT = 32,
		}

		// BrnGenericRegion.h:92
		enum StuntCameraType {
			E_STUNT_CAMERA_TYPE_NO_CUTS = 0,
			E_STUNT_CAMERA_TYPE_CUSTOM = 1,
			E_STUNT_CAMERA_TYPE_NORMAL = 2,
		}

	}

	// BrnGenericRegion.h:160
	const int32_t KI_FIRST_SOUND_ENCLOSURE = 19;

	// BrnGenericRegion.h:161
	const int32_t KI_LAST_SOUND_ENCLOSURE = 31;

}

// BrnGenericRegion.h:47
struct BrnTrigger::GenericRegion : public TriggerRegion {
	// BrnGenericRegion.h:99
	extern const const char *[32] KAPC_GENERIC_REGION_TYPE_STRINGS;

private:
	// BrnGenericRegion.h:148
	int32_t miGroupID;

	// BrnGenericRegion.h:149
	int16_t miCameraCut1;

	// BrnGenericRegion.h:150
	int16_t miCameraCut2;

	// BrnGenericRegion.h:151
	int8_t miCameraType1;

	// BrnGenericRegion.h:152
	int8_t miCameraType2;

	// BrnGenericRegion.h:153
	uint8_t meType;

	// BrnGenericRegion.h:154
	int8_t miIsOneWay;

public:
	// BrnGenericRegion.h:111
	void Construct(CgsID, BrnTrigger::GenericRegion::Type, const BoxRegion *, CgsID, int16_t, int16_t, int8_t, int8_t, bool);

	// BrnGenericRegion.h:114
	BrnTrigger::GenericRegion::Type GetType() const;

	// BrnGenericRegion.h:117
	const char * GetTypeName() const;

	// BrnGenericRegion.h:120
	bool IsDriveThru() const;

	// BrnGenericRegion.h:123
	CgsID GetGroupId() const;

	// BrnGenericRegion.h:126
	int32_t GetCameraCut1() const;

	// BrnGenericRegion.h:129
	int32_t GetCameraCut2() const;

	// BrnGenericRegion.h:132
	BrnTrigger::GenericRegion::StuntCameraType GetCameraType1() const;

	// BrnGenericRegion.h:135
	BrnTrigger::GenericRegion::StuntCameraType GetCameraType2() const;

	// BrnGenericRegion.h:138
	bool IsOneWay() const;

	// BrnGenericRegion.h:141
	void FixDown();

	// BrnGenericRegion.h:144
	void FixUp();

}

// BrnGenericRegion.h:99
extern const const char *[32] KAPC_GENERIC_REGION_TYPE_STRINGS;

// BrnRegion.h:28
namespace BrnTrigger {
	// BrnGenericRegion.h:160
	const int32_t KI_FIRST_SOUND_ENCLOSURE = 19;

	// BrnGenericRegion.h:161
	const int32_t KI_LAST_SOUND_ENCLOSURE = 31;

}

