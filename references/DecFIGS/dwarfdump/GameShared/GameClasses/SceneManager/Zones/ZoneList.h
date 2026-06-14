// ZoneList.h:42
struct CgsSceneManager::ZoneList {
private:
	// ZoneList.h:97
	Vector2 * mpPoints;

	// ZoneList.h:98
	CgsSceneManager::Zone * mpZones;

	// ZoneList.h:99
	uint32_t * mpuZonePointStarts;

	// ZoneList.h:100
	int16_t * mpiZonePointCounts;

	// ZoneList.h:101
	uint32_t muTotalZones;

	// ZoneList.h:102
	uint32_t muTotalPoints;

public:
	// ZoneList.h:46
	void Construct();

	// ZoneList.h:49
	void FixUp(void *);

	// ZoneList.h:52
	void FixDown(void *);

	// ZoneList.h:55
	void SetPoints(Vector2 *, uint32_t);

	// ZoneList.h:58
	void SetZones(CgsSceneManager::Zone *, uint32_t *, int16_t *, uint32_t);

	// ZoneList.h:61
	Vector2 * GetPoints();

	// ZoneList.h:64
	CgsSceneManager::Zone * GetZones();

	// ZoneList.h:67
	uint32_t * GetZonePointStarts();

	// ZoneList.h:70
	int16_t * GetZonePointCounts();

	// ZoneList.h:73
	const rw::math::vpu::Vector2 * GetPoints() const;

	// ZoneList.h:76
	const CgsSceneManager::Zone * GetZones() const;

	// ZoneList.h:79
	const uint32_t * GetZonePointStarts() const;

	// ZoneList.h:82
	const int16_t * GetZonePointCounts() const;

	// ZoneList.h:85
	uint32_t GetTotalZones() const;

	// ZoneList.h:88
	uint32_t GetTotalPoints() const;

	// ZoneList.h:91
	const CgsSceneManager::Zone * GetFirstZoneForPoint(Vector2, int32_t) const;

	// ZoneList.h:94
	const CgsSceneManager::Zone * GetNextZoneForPoint(const CgsSceneManager::Zone *, Vector2) const;

}

