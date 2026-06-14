// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// Declaration
		struct Dictionary {
			// BrnEnvironmentDictionary.h:68
			struct SeasonData {
				// BrnEnvironmentDictionary.h:70
				char[128] macResourceName;

				// BrnEnvironmentDictionary.h:71
				char[64] macBundle;

				// BrnEnvironmentDictionary.h:72
				char[64] macColourCubesBundle;

			}

			// BrnEnvironmentDictionary.h:80
			struct LocationData {
				// BrnEnvironmentDictionary.h:82
				char[64] macName;

			}

		}

	}

}

// BrnEnvironmentDictionary.h:56
struct BrnWorld::EnvironmentSettings::Dictionary {
	// BrnEnvironmentDictionary.h:65
	uint32_t muVersion;

	// BrnEnvironmentDictionary.h:76
	uint32_t muSeasonCnt;

	// BrnEnvironmentDictionary.h:77
	BrnWorld::EnvironmentSettings::Dictionary::SeasonData * mpSeasonDatii;

	// BrnEnvironmentDictionary.h:86
	uint32_t muLocationCnt;

	// BrnEnvironmentDictionary.h:87
	BrnWorld::EnvironmentSettings::Dictionary::LocationData * mpLocationDatii;

public:
	// BrnEnvironmentDictionary.h:60
	void Construct();

	// BrnEnvironmentDictionary.h:91
	bool BuildResourceName(char *);

}

