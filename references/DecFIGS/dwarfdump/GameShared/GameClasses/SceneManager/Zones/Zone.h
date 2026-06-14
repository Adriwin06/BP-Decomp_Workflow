// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct Neighbour {
		// Zone.h:38
		enum eNeighbourFlags {
			E_RENDERFLAG_NONE = 0,
			E_NEIGHBOURFLAG_RENDER = 1,
			E_NEIGHBOURFLAG_IMMEDIATE = 2,
		}

	}

}

// Zone.h:36
struct CgsSceneManager::Neighbour {
private:
	// Zone.h:63
	CgsSceneManager::Zone * mpZone;

	// Zone.h:64
	uint32_t muFlags;

public:
	// Zone.h:46
	void Set(CgsSceneManager::Zone *, uint32_t);

	// Zone.h:49
	void FixUp(void *);

	// Zone.h:52
	void FixDown(void *);

	// Zone.h:55
	const CgsSceneManager::Zone * GetZone() const;

	// Zone.h:58
	bool8_t IsFlagSet(CgsSceneManager::Neighbour::eNeighbourFlags) const;

	// Zone.h:61
	uint32_t GetFlags() const;

}

// Zone.h:69
struct CgsSceneManager::Zone {
private:
	// Zone.h:164
	Vector2 * mpPoints;

	// Zone.h:167
	Neighbour * mpSafeNeighbours;

	// Zone.h:170
	Neighbour * mpUnsafeNeighbours;

	// Zone.h:173
	uint64_t muZoneId;

	// Zone.h:174
	int16_t miZoneType;

	// Zone.h:177
	int16_t miNumPoints;

	// Zone.h:178
	int16_t miNumSafeNeighbours;

	// Zone.h:179
	int16_t miNumUnsafeNeighbours;

	// Zone.h:182
	uint32_t muFlags;

public:
	// Zone.h:73
	void Construct();

	// Zone.h:76
	void FixUp(void *);

	// Zone.h:79
	void FixDown(void *);

	// Zone.h:82
	bool IsPointInZone(Vector2) const;

	// Zone.h:85
	void SetPoints(Vector2 *, int16_t);

	// Zone.h:88
	void SetSafeNeighbours(Neighbour *, int16_t);

	// Zone.h:91
	void SetUnsafeNeighbours(Neighbour *, int16_t);

	// Zone.h:94
	void SetPoint(int16_t, Vector2);

	// Zone.h:103
	void SetId(uint64_t);

	// Zone.h:106
	void SetType(int16_t);

	// Zone.h:109
	void SetFlags(uint32_t);

	// Zone.h:112
	Vector2 * GetPoints();

	// Zone.h:115
	Neighbour * GetSafeNeighbours();

	// Zone.h:118
	Neighbour * GetUnsafeNeighbours();

	// Zone.h:121
	const rw::math::vpu::Vector2 * GetPoints() const;

	// Zone.h:124
	const Neighbour * GetSafeNeighbours() const;

	// Zone.h:127
	const Neighbour * GetUnsafeNeighbours() const;

	// Zone.h:130
	int32_t GetNumPoints() const;

	// Zone.h:133
	int32_t GetNumSafeNeighbours() const;

	// Zone.h:136
	int32_t GetNumUnsafeNeighbours() const;

	// Zone.h:139
	Vector2 GetPoint(int16_t) const;

	// Zone.h:142
	const Neighbour * GetSafeNeighbour(int16_t) const;

	// Zone.h:145
	const Neighbour * GetUnsafeNeighbour(int16_t) const;

	// Zone.h:148
	uint64_t GetId() const;

	// Zone.h:151
	int16_t GetType() const;

	// Zone.h:154
	uint32_t GetFlags() const;

	// Zone.h:157
	Vector2 CalculateCentre() const;

	// Zone.h:160
	Vector2 CalculateCentre4() const;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// Declaration
	struct Neighbour {
		// Zone.h:38
		enum eNeighbourFlags {
			E_RENDERFLAG_NONE = 0,
			E_NEIGHBOURFLAG_RENDER = 1,
			E_NEIGHBOURFLAG_IMMEDIATE = 2,
		}

	}

}

