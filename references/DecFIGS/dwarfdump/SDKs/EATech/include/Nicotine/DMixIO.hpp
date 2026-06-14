// DMixIO.hpp:7
namespace Nicotine {
	struct IDynamicMixer;

}

// DMixIO.hpp:7
namespace Nicotine {
	// Declaration
	struct DMixIO {
		// DMixIO.hpp:14
		enum DMX_PRESET_TYPE {
			DMX_VOL = 0,
			DMX_PITCH = 1,
			DMX_FREQ = 2,
			DMX_AZIM = 3,
			DMX_DEPTH = 4,
			DMX_COUNT = 5,
		}

	public:
		// DMixIO.hpp:60
		int * GetDMixOutputPtr();

		// DMixIO.hpp:59
		int * GetDMixInputPtr();

		// DMixIO.hpp:45
		void SetDMixInputUnsafe(int, int);

	}

}

