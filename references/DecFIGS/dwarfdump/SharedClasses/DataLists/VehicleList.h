// VehicleList.h:45
struct BrnResource::VehicleSlot {
	// VehicleList.h:47
	bool mbBought;

	// VehicleList.h:48
	int32_t miListIndex;

	// VehicleList.h:49
	int32_t miEntryIndex;

}

// VehicleList.h:61
struct BrnResource::SponsorCarSlot {
	// VehicleList.h:63
	CgsID mCarId;

	// VehicleList.h:64
	bool mbAvailable;

}

// VehicleList.h:76
struct BrnResource::VehicleList {
	// VehicleList.h:81
	extern const int32_t KI_MAX_VEHICLE_LISTS = 32;

	// VehicleList.h:82
	extern const int32_t KI_MAX_VEHICLES = 1024;

	// VehicleList.h:84
	extern const uint32_t KI_SPONSOR_CAR_COUNT = 12;

	// VehicleList.h:85
	extern SponsorCarSlot[12] KAPC_SPONSOR_CAR;

private:
	// VehicleList.h:138
	ResourcePtr<BrnResource::VehicleListResource>[32] maStaticDataLists;

	// VehicleList.h:139
	VehicleSlot[1024] maSlots;

	// VehicleList.h:140
	int32_t miCount;

	// VehicleList.h:141
	int32_t miListCount;

	// VehicleList.h:144
	int32_t miSelectableVehicleCount;

	// VehicleList.h:147
	int32_t miSponsorVehicleCount;

public:
	// VehicleList.h:88
	void Construct();

	// VehicleList.h:91
	void Destruct();

	// VehicleList.h:94
	void AddListResource(ResourcePtr<BrnResource::VehicleListResource> &);

	// VehicleList.h:97
	int32_t GetVehicleCount() const;

	// VehicleList.h:100
	int32_t GetSelectableVehicleCount() const;

	// VehicleList.h:103
	int32_t GetSponsorVehicleCount() const;

	// VehicleList.h:106
	const VehicleListEntry * GetVehicleData(int32_t) const;

	// VehicleList.h:109
	const VehicleListEntry * GetVehicleData(CgsID) const;

	// VehicleList.h:112
	int32_t GetVehicleIndex(CgsID) const;

	// VehicleList.h:115
	bool IsVehicleInList(CgsID) const;

	// VehicleList.h:119
	bool IsVehicleSponsorVehicle(CgsID) const;

	// VehicleList.h:122
	bool IsVehicleContentBought(int32_t) const;

	// VehicleList.h:125
	bool IsVehicleContentBought(CgsID) const;

	// VehicleList.h:128
	void SetVehicleContentBought(int32_t, bool);

	// VehicleList.h:131
	void SetVehicleContentBought(CgsID, bool);

private:
	// VehicleList.h:136
	void SetSponserVehicleAvailable(CgsID);

}

// VehicleList.h:81
extern const int32_t KI_MAX_VEHICLE_LISTS = 32;

// VehicleList.h:82
extern const int32_t KI_MAX_VEHICLES = 1024;

// VehicleList.h:84
extern const uint32_t KI_SPONSOR_CAR_COUNT = 12;

// VehicleList.h:85
extern SponsorCarSlot[12] KAPC_SPONSOR_CAR;

// VehicleList.h:76
struct BrnResource::VehicleList {
	// VehicleList.h:81
	extern const int32_t KI_MAX_VEHICLE_LISTS = 32;

	// VehicleList.h:82
	extern const int32_t KI_MAX_VEHICLES = 1024;

	// VehicleList.h:84
	extern const uint32_t KI_SPONSOR_CAR_COUNT = 12;

	// VehicleList.h:85
	extern SponsorCarSlot[12] KAPC_SPONSOR_CAR;

private:
	// VehicleList.h:138
	ResourcePtr<BrnResource::VehicleListResource>[32] maStaticDataLists;

	// VehicleList.h:139
	VehicleSlot[1024] maSlots;

	// VehicleList.h:140
	int32_t miCount;

	// VehicleList.h:141
	int32_t miListCount;

	// VehicleList.h:144
	int32_t miSelectableVehicleCount;

	// VehicleList.h:147
	int32_t miSponsorVehicleCount;

public:
	// VehicleList.h:88
	void Construct();

	// VehicleList.h:91
	void Destruct();

	// VehicleList.h:94
	// Declaration
	void AddListResource(ResourcePtr<BrnResource::VehicleListResource> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// VehicleList.cpp:183
		using namespace CgsDev::Message;

	}

	// VehicleList.h:97
	int32_t GetVehicleCount() const;

	// VehicleList.h:100
	int32_t GetSelectableVehicleCount() const;

	// VehicleList.h:103
	int32_t GetSponsorVehicleCount() const;

	// VehicleList.h:106
	const VehicleListEntry * GetVehicleData(int32_t) const;

	// VehicleList.h:109
	const VehicleListEntry * GetVehicleData(CgsID) const;

	// VehicleList.h:112
	int32_t GetVehicleIndex(CgsID) const;

	// VehicleList.h:115
	bool IsVehicleInList(CgsID) const;

	// VehicleList.h:119
	bool IsVehicleSponsorVehicle(CgsID) const;

	// VehicleList.h:122
	bool IsVehicleContentBought(int32_t) const;

	// VehicleList.h:125
	bool IsVehicleContentBought(CgsID) const;

	// VehicleList.h:128
	void SetVehicleContentBought(int32_t, bool);

	// VehicleList.h:131
	void SetVehicleContentBought(CgsID, bool);

private:
	// VehicleList.h:136
	void SetSponserVehicleAvailable(CgsID);

}

