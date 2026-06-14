// CgsWorldMap2D.h:27
namespace CgsWorld {
	// CgsWorldMap2D.h:30
	const uint8_t KU_INVALID_WORLD_MAP_VALUE = 255;

}

// CgsWorldMap2D.h:27
namespace CgsWorld {
	struct WorldMap2D;

	// CgsWorldMap2D.h:30
	const uint8_t KU_INVALID_WORLD_MAP_VALUE = 255;

}

// CgsWorldMap2D.h:51
struct CgsWorld::WorldMap2D {
private:
	// CgsWorldMap2D.h:70
	Vector2 mWorldOrigin;

	// CgsWorldMap2D.h:71
	Vector2 mWorldSize;

	// CgsWorldMap2D.h:72
	uint16_t muWidth;

	// CgsWorldMap2D.h:73
	uint16_t muHeight;

	// CgsWorldMap2D.h:74
	const uint8_t * mpValues;

public:
	// CgsWorldMap2D.h:58
	void Construct(const void *, Vector2, Vector2);

	// CgsWorldMap2D.h:62
	uint8_t GetValue(Vector2) const;

	// CgsWorldMap2D.h:66
	uint8_t GetValue(Vector3) const;

}

