// WheelList.h:45
struct BrnResource::WheelSlot {
	// WheelList.h:47
	bool mbBought;

	// WheelList.h:48
	int32_t miListIndex;

	// WheelList.h:49
	int32_t miEntryIndex;

}

// WheelList.h:61
struct BrnResource::WheelList {
	// WheelList.h:66
	extern const int32_t KI_MAX_WHEEL_LISTS = 32;

	// WheelList.h:67
	extern const int32_t KI_MAX_WHEELS = 256;

private:
	// WheelList.h:106
	ResourcePtr<BrnResource::WheelListResource>[32] maStaticDataLists;

	// WheelList.h:107
	WheelSlot[256] maSlots;

	// WheelList.h:108
	int32_t miCount;

	// WheelList.h:109
	int32_t miListCount;

public:
	// WheelList.h:70
	void Construct();

	// WheelList.h:73
	void Destruct();

	// WheelList.h:76
	void AddListResource(ResourcePtr<BrnResource::WheelListResource> &);

	// WheelList.h:79
	int32_t GetWheelCount() const;

	// WheelList.h:82
	const WheelListEntry * GetWheelData(int32_t) const;

	// WheelList.h:85
	const WheelListEntry * GetWheelData(CgsID) const;

	// WheelList.h:88
	int32_t GetWheelIndex(CgsID) const;

	// WheelList.h:91
	int32_t FindWheelIndexFromName(const char *) const;

	// WheelList.h:94
	bool IsWheelContentBought(int32_t) const;

	// WheelList.h:97
	bool IsWheelContentBought(CgsID) const;

	// WheelList.h:100
	void SetWheelContentBought(int32_t, bool);

	// WheelList.h:103
	void SetWheelContentBought(CgsID, bool);

}

// WheelList.h:66
extern const int32_t KI_MAX_WHEEL_LISTS = 32;

// WheelList.h:67
extern const int32_t KI_MAX_WHEELS = 256;

