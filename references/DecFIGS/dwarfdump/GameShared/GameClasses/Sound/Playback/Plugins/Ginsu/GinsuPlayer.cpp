// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// GinsuPlayer.cpp:325
			void swapbytes(unsigned char *);

			// GinsuPlayer.cpp:336
			void AdjustEndienness(GinsuDataLayout *);

		}

	}

}

// GinsuPlayer.cpp:310
struct rw::audio::core::GinsuDataLayout {
	// GinsuPlayer.cpp:311
	char[4] id;

	// GinsuPlayer.cpp:312
	char[2] ver;

	// GinsuPlayer.cpp:313
	short int flags;

	// GinsuPlayer.cpp:314
	float minFrequency;

	// GinsuPlayer.cpp:315
	float maxFrequency;

	// GinsuPlayer.cpp:316
	int segCount;

	// GinsuPlayer.cpp:317
	int cycleCount;

	// GinsuPlayer.cpp:318
	int sampleCount;

	// GinsuPlayer.cpp:319
	int sampleRate;

	// GinsuPlayer.cpp:320
	unsigned char[1] data;

}

// GinsuPlayer.cpp:396
void rw::audio::core::GinsuPlayer::GinsuSynthData::BindToData(void *  ptr, uintptr_t  pTableStore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// GinsuPlayer.cpp:405
		GinsuDataLayout * memdata;

		// GinsuPlayer.cpp:425
		unsigned int sizeOfFreqTable;

		// GinsuPlayer.cpp:426
		unsigned int sizeOfCycleTable;

		// GinsuPlayer.cpp:429
		int * pFreqTable;

		// GinsuPlayer.cpp:435
		int * pCycleTable;

		// GinsuPlayer.cpp:443
		int minperiod;

	}
	{
		// GinsuPlayer.cpp:444
		int i;

	}
	{
		// GinsuPlayer.cpp:446
		int period;

	}
}

// GinsuPlayer.cpp:370
void rw::audio::core::GinsuPlayer::GinsuSynthData::GetTotalTableSize(void *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// GinsuPlayer.cpp:373
		GinsuDataLayout * memdata;

		// GinsuPlayer.cpp:390
		unsigned int size;

	}
}

// GinsuPlayer.cpp:359
void rw::audio::core::GinsuPlayer::GinsuSynthData::GinsuSynthData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

