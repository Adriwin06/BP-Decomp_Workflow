// BrnDerivedCars.h:50
struct BrnProgression::DerivedCarArray : public Array<CgsID,8u> {
private:
	// BrnDerivedCars.h:73
	Array<BrnResource::VehicleListEntry::ELiveryType,8u> maLiveryTypes;

public:
	// BrnDerivedCars.h:56
	void ConstructColourLiveryList(const VehicleList *, const CgsID &);

	// BrnDerivedCars.h:61
	void ConstructPatternLiveryList(const VehicleList *, const CgsID &);

	// BrnDerivedCars.h:64
	const CgsID GetParentId() const;

	// BrnDerivedCars.h:67
	BrnResource::VehicleListEntry::ELiveryType GetLiveryType(uint32_t) const;

	// BrnDerivedCars.h:70
	// Declaration
	void DEBUG_PrintArray() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDerivedCars.h:253
		using namespace CgsDev::Message;

		// BrnDerivedCars.h:255
		using namespace CgsDev::Message;

		// BrnDerivedCars.h:260
		using namespace CgsDev::Message;

	}

}

// BrnDerivedCars.h:50
struct BrnProgression::DerivedCarArray : public Array<CgsID,8u> {
private:
	// BrnDerivedCars.h:73
	Array<BrnResource::VehicleListEntry::ELiveryType,8u> maLiveryTypes;

public:
	// BrnDerivedCars.h:56
	void ConstructColourLiveryList(const BrnResource::VehicleList *, const CgsID &);

	// BrnDerivedCars.h:61
	void ConstructPatternLiveryList(const BrnResource::VehicleList *, const CgsID &);

	// BrnDerivedCars.h:64
	const CgsID GetParentId() const;

	// BrnDerivedCars.h:67
	BrnResource::VehicleListEntry::ELiveryType GetLiveryType(uint32_t) const;

	// BrnDerivedCars.h:70
	// Declaration
	void DEBUG_PrintArray() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDerivedCars.h:253
		using namespace CgsDev::Message;

		// BrnDerivedCars.h:255
		using namespace CgsDev::Message;

		// BrnDerivedCars.h:260
		using namespace CgsDev::Message;

	}

}

