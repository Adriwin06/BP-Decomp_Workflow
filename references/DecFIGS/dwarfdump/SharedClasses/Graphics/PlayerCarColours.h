// BrnWorldRegion.h:27
namespace BrnWorld {
	// PlayerCarColours.h:32
	enum EPalettesTypes {
		eGloss = 0,
		eMetallic = 1,
		ePearlescent = 2,
		eSpecial = 3,
		eNumPalettes = 4,
	}

}

// PlayerCarColours.h:52
struct BrnWorld::PlayerCarColourPalette {
	// PlayerCarColours.h:54
	Vector4 * mpPaintColours;

	// PlayerCarColours.h:55
	Vector4 * mpPearlColours;

	// PlayerCarColours.h:57
	int32_t miNumColours;

}

// PlayerCarColours.h:69
struct BrnWorld::GlobalColourPalette {
	// PlayerCarColours.h:85
	PlayerCarColourPalette[4] mItems;

public:
	// PlayerCarColours.h:73
	void Construct();

	// PlayerCarColours.h:76
	void FixUp(void *);

	// PlayerCarColours.h:79
	void FixDown(void *);

	// PlayerCarColours.h:82
	const PlayerCarColourPalette * GetPalette(BrnWorld::EPalettesTypes) const;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// PlayerCarColours.h:32
	enum EPalettesTypes {
		eGloss = 0,
		eMetallic = 1,
		ePearlescent = 2,
		eSpecial = 3,
		eNumPalettes = 4,
	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// PlayerCarColours.h:32
	enum EPalettesTypes {
		eGloss = 0,
		eMetallic = 1,
		ePearlescent = 2,
		eSpecial = 3,
		eNumPalettes = 4,
	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// PlayerCarColours.h:32
	enum EPalettesTypes {
		eGloss = 0,
		eMetallic = 1,
		ePearlescent = 2,
		eSpecial = 3,
		eNumPalettes = 4,
	}

}

