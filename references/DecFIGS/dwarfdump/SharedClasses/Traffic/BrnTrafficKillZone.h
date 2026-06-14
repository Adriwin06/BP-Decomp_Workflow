// BrnTrafficKillZone.h:50
struct BrnTraffic::KillZoneRegion {
private:
	// BrnTrafficKillZone.h:84
	uint16_t muHull;

	// BrnTrafficKillZone.h:85
	uint8_t muSection;

	// BrnTrafficKillZone.h:86
	uint8_t muStartRung;

	// BrnTrafficKillZone.h:87
	uint8_t muEndRung;

public:
	// BrnTrafficKillZone.h:54
	uint16_t GetHull() const;

	// BrnTrafficKillZone.h:55
	uint8_t GetSection() const;

	// BrnTrafficKillZone.h:56
	uint8_t GetStartRung() const;

	// BrnTrafficKillZone.h:57
	uint8_t GetEndRung() const;

	// BrnTrafficKillZone.h:77
	void EndianSwap();

}

// BrnTrafficKillZone.h:102
struct BrnTraffic::KillZone {
private:
	// BrnTrafficKillZone.h:129
	uint16_t muOffset;

	// BrnTrafficKillZone.h:130
	uint8_t muCount;

public:
	// BrnTrafficKillZone.h:106
	uint32_t GetOffset() const;

	// BrnTrafficKillZone.h:107
	uint32_t GetCount() const;

	// BrnTrafficKillZone.h:125
	void EndianSwap();

}

