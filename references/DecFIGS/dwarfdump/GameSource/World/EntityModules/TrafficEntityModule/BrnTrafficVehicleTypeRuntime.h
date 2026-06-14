// BrnTrafficVehicleTypeRuntime.h:54
struct BrnTraffic::VehicleTypeRuntime {
private:
	// BrnTrafficVehicleTypeRuntime.h:94
	Vector3 mBBoxOffset;

	// BrnTrafficVehicleTypeRuntime.h:95
	Vector3 mBBoxHalfSize;

	// BrnTrafficVehicleTypeRuntime.h:97
	Vector4 mCabPivot_TrailerPivot_BackAxle_FwdAxle;

	// BrnTrafficVehicleTypeRuntime.h:99
	Vector4 mMass_WheelRadius_Z_W;

	// BrnTrafficVehicleTypeRuntime.h:102
	extern const uint32_t KU_ATTRIB_KEY_SIZE = 8;

	// BrnTrafficVehicleTypeRuntime.h:104
	Attribute::Key mAttribKey;

	// BrnTrafficVehicleTypeRuntime.h:110
	extern const uint32_t KU_NUM_PAINT_COLOURS_PER_VEHICLE = 20;

	// BrnTrafficVehicleTypeRuntime.h:111
	int8_t[20] maiPaintColours;

	// BrnTrafficVehicleTypeRuntime.h:112
	int8_t miNumPaintColours;

public:
	// BrnTrafficVehicleTypeRuntime.h:60
	void Construct();

	// BrnTrafficVehicleTypeRuntime.h:66
	void Prepare(const StreamedDeformationSpec *, Attribute::Key);

	// BrnTrafficVehicleTypeRuntime.h:75
	Vector4 PickPaintColourForVehicle(uint32_t, uint32_t, const rw::math::vpu::Vector4 *) const;

	// BrnTrafficVehicleTypeRuntime.h:78
	Vector3 GetBBoxOffset() const;

	// BrnTrafficVehicleTypeRuntime.h:79
	Vector3 GetBBoxHalfSize() const;

	// BrnTrafficVehicleTypeRuntime.h:80
	VecFloat GetCabPivotDistance() const;

	// BrnTrafficVehicleTypeRuntime.h:81
	VecFloat GetTrailerPivotDistance() const;

	// BrnTrafficVehicleTypeRuntime.h:82
	VecFloat GetBackAxleOffset() const;

	// BrnTrafficVehicleTypeRuntime.h:83
	VecFloat GetForwardAxleOffset() const;

	// BrnTrafficVehicleTypeRuntime.h:84
	VecFloat GetMass() const;

	// BrnTrafficVehicleTypeRuntime.h:85
	VecFloat GetWheelRadius() const;

	// BrnTrafficVehicleTypeRuntime.h:86
	Vector4 GetCabPivot_TrailerPivot_BackAxle_FwdAxle() const;

	// BrnTrafficVehicleTypeRuntime.h:89
	const Attribute::Key GetAttribKey() const;

}

// BrnTrafficVehicleTypeRuntime.h:102
extern const uint32_t KU_ATTRIB_KEY_SIZE = 8;

// BrnTrafficVehicleTypeRuntime.h:110
extern const uint32_t KU_NUM_PAINT_COLOURS_PER_VEHICLE = 20;

