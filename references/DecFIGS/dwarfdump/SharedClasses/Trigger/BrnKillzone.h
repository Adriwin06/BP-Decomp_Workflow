// BrnKillzone.h:43
struct BrnTrigger::Killzone {
private:
	// BrnKillzone.h:86
	const GenericRegion ** mppTriggers;

	// BrnKillzone.h:87
	int32_t miTriggerCount;

	// BrnKillzone.h:89
	CgsID * mpRegionIds;

	// BrnKillzone.h:90
	int32_t miRegionIdCount;

public:
	// BrnKillzone.h:51
	void Construct(int32_t, int32_t, LinearMalloc *);

	// BrnKillzone.h:55
	void FixDown(MemoryResource);

	// BrnKillzone.h:59
	void FixUp(MemoryResource);

	// BrnKillzone.h:62
	int32_t GetTriggerCount() const;

	// BrnKillzone.h:65
	int32_t GetRegionIdCount() const;

	// BrnKillzone.h:69
	const GenericRegion * GetTrigger(int32_t) const;

	// BrnKillzone.h:73
	CgsID GetRegionId(int32_t) const;

	// BrnKillzone.h:78
	void SetTrigger(int32_t, const GenericRegion *) const;

	// BrnKillzone.h:83
	void SetRegionId(int32_t, CgsID) const;

}

