// WheelListEntry.h:45
struct BrnResource::WheelListEntry {
	// WheelListEntry.h:47
	extern const int32_t KI_MAX_WHEEL_NAME_LENGTH = 63;

private:
	// WheelListEntry.h:74
	CgsID mId;

	// WheelListEntry.h:75
	char[64] macWheelName;

public:
	// WheelListEntry.h:50
	void SetId(CgsID);

	// WheelListEntry.h:62
	CgsID GetId() const;

	// WheelListEntry.h:65
	const char * GetWheelName() const;

	// WheelListEntry.h:68
	void FixUp(void *);

	// WheelListEntry.h:71
	void FixDown(void *);

}

// WheelListEntry.h:47
extern const int32_t KI_MAX_WHEEL_NAME_LENGTH = 63;

