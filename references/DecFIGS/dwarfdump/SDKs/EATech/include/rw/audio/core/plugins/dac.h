// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct Dac {
				// dac.h:54
				enum Mode {
					MODE_MONO = 0,
					MODE_STEREO = 1,
					MODE_QUAD = 2,
					MODE_5POINT1 = 3,
					MODE_7POINT1 = 4,
					MODE_PROLOGIC2 = 5,
					MODE_MAX = 6,
				}

			}

		}

	}

}

// dac.h:135
extern const float[7] sPossibleSampleRates;

// dac.h:136
extern const rw::audio::core::Dac::Mode[6] sPossibleModes;

// dac.h:138
extern const unsigned char[6] sDacModeToChannelMap;

// dac.h:350
extern const unsigned char PS3_LIBAUDIO_CHANNELS = 8;

