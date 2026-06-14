// BrnRoamingLocation.h:45
struct BrnTrigger::RoamingLocation {
private:
	// BrnRoamingLocation.h:65
	Vector3 mPosition;

	// BrnRoamingLocation.h:66
	uint8_t muDistrictIndex;

public:
	// BrnRoamingLocation.h:50
	void Construct(Vector3, BrnWorld::EDistrict);

	// BrnRoamingLocation.h:53
	Vector3 GetPosition() const;

	// BrnRoamingLocation.h:56
	BrnWorld::EDistrict GetDistrict() const;

	// BrnRoamingLocation.h:59
	void FixDown();

	// BrnRoamingLocation.h:62
	void FixUp();

}

