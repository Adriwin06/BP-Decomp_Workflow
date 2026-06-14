// DMixIO.hpp:7
namespace Nicotine {
	// Declaration
	struct IDynamicMixer {
		// DynamicMixer.hpp:75
		struct MAP_CREATE_PARAMS {
			// DynamicMixer.hpp:83
			int mPrintSelect;

			// DynamicMixer.hpp:85
			int NumMixStates;

			// DynamicMixer.hpp:90
			EA::Allocator::ICoreAllocator * MixerAllocator;

		public:
			// DynamicMixer.hpp:76
			MAP_CREATE_PARAMS();

		}

	}

}

