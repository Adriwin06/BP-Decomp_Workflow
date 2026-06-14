// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// Declaration
		struct TimeLine {
			// BrnEnvironmentTimeLine.h:69
			struct LocationData {
				// BrnEnvironmentTimeLine.h:71
				uint32_t muKeyframeCnt;

				// BrnEnvironmentTimeLine.h:72
				float32_t * mpfKeyframeTimes;

				// BrnEnvironmentTimeLine.h:73
				Keyframe ** mppKeyframes;

			}

		}

	}

}

// BrnEnvironmentTimeLine.h:57
struct BrnWorld::EnvironmentSettings::TimeLine {
	// BrnEnvironmentTimeLine.h:66
	uint32_t muVersion;

	// BrnEnvironmentTimeLine.h:77
	uint32_t muLocationCnt;

	// BrnEnvironmentTimeLine.h:78
	BrnWorld::EnvironmentSettings::TimeLine::LocationData * mpLocationDatii;

public:
	// BrnEnvironmentTimeLine.h:61
	void Construct();

	// BrnEnvironmentTimeLine.h:83
	bool BuildResourceName(char *, const char *);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// Declaration
		struct TimeLine {
			// BrnEnvironmentTimeLine.h:69
			struct LocationData {
				// BrnEnvironmentTimeLine.h:71
				uint32_t muKeyframeCnt;

				// BrnEnvironmentTimeLine.h:72
				float32_t * mpfKeyframeTimes;

				// BrnEnvironmentTimeLine.h:73
				BrnWorld::EnvironmentSettings::Keyframe ** mppKeyframes;

			}

		}

		// BrnEnvironmentTimeLine.h:136
		extern void FindKeyframeInds(uint32_t &, float32_t &, uint32_t &, float32_t &, const float32_t *, uint32_t, float32_t);

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// Declaration
		struct TimeLine {
			// BrnEnvironmentTimeLine.h:69
			struct LocationData {
				// BrnEnvironmentTimeLine.h:71
				uint32_t muKeyframeCnt;

				// BrnEnvironmentTimeLine.h:72
				float32_t * mpfKeyframeTimes;

				// BrnEnvironmentTimeLine.h:73
				BrnWorld::EnvironmentSettings::Keyframe ** mppKeyframes;

			}

		}

	}

}

