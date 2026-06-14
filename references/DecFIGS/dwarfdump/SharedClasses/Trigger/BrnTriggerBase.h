// BrnRegion.h:28
namespace BrnTrigger {
	// Declaration
	struct TriggerRegion {
		// BrnTriggerBase.h:51
		enum Type {
			E_TYPE_LANDMARK = 0,
			E_TYPE_BLACKSPOT = 1,
			E_TYPE_GENERIC_REGION = 2,
			E_TYPE_VFXBOX_REGION = 3,
			E_TYPE_COUNT = 4,
		}

	}

}

// BrnTriggerBase.h:49
struct BrnTrigger::TriggerRegion {
	// BrnTriggerBase.h:61
	extern const char *[4] KPAC_TRIGGER_TYPE_STRINGS;

private:
	// BrnTriggerBase.h:92
	BoxRegion mBoxRegion;

	// BrnTriggerBase.h:93
	int32_t mId;

	// BrnTriggerBase.h:94
	int16_t miRegionIndex;

	// BrnTriggerBase.h:95
	uint8_t meType;

	// BrnTriggerBase.h:96
	uint8_t[1] muPad;

public:
	// BrnTriggerBase.h:67
	void Construct(CgsID, BrnTrigger::TriggerRegion::Type, const BoxRegion *);

	// BrnTriggerBase.h:70
	CgsID GetId() const;

	// BrnTriggerBase.h:73
	int32_t GetRegionIndex() const;

	// BrnTriggerBase.h:76
	BrnTrigger::TriggerRegion::Type GetType() const;

	// BrnTriggerBase.h:80
	void SetRegionIndex(int32_t);

	// BrnTriggerBase.h:83
	void FixDown();

	// BrnTriggerBase.h:86
	void FixUp();

	// BrnTriggerBase.h:89
	const BoxRegion * GetBoxRegion() const;

}

// BrnTriggerBase.h:61
extern const char *[4] KPAC_TRIGGER_TYPE_STRINGS;

