// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct Timestep {
		// BrnDirectorTimestep.h:38
		enum EType {
			E_TIMESTEP_INVALID = -1,
			E_WORLD = 0,
			E_WORLD_NO_SLOMO = 1,
			E_GAME = 2,
			E_TIMESTEP_COUNT = 3,
		}

	}

}

// BrnDirectorTimestep.h:35
struct BrnDirector::Timestep {
private:
	// BrnDirectorTimestep.h:68
	VecFloat[3] maVecFloatTimestep;

	// BrnDirectorTimestep.h:69
	float32_t[3] mafTimestep;

public:
	// BrnDirectorTimestep.h:51
	float32_t Get(BrnDirector::Timestep::EType) const;

	// BrnDirectorTimestep.h:55
	VecFloat GetVecFloat(BrnDirector::Timestep::EType) const;

	// BrnDirectorTimestep.h:64
	void Set(const VecFloat &, const VecFloat &, const VecFloat &, float32_t, float32_t, float32_t);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct Timestep {
		// BrnDirectorTimestep.h:38
		enum EType {
			E_TIMESTEP_INVALID = -1,
			E_WORLD = 0,
			E_WORLD_NO_SLOMO = 1,
			E_GAME = 2,
			E_TIMESTEP_COUNT = 3,
		}

	}

}

