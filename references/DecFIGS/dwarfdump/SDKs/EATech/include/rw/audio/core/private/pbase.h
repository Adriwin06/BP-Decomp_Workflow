// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// pbase.h:36
			const float PI;

			// pbase.h:121
			const unsigned int JOBMANAGER_ADDR = 241664;

			// pbase.h:122
			const short unsigned int JOBMANAGER_SIZE = 16384;

			// pbase.h:246
			const float CPU_CLOCK_MULTIPLIER;

		}

	}

}

// pbase.h:347
struct rw::audio::core::CpuCycleAverager {
private:
	// pbase.h:388
	float mAverage;

	// pbase.h:391
	float[2] mHistory;

	// pbase.h:392
	int mSlotSwitcher;

public:
	// pbase.h:349
	void CpuCycleAverager();

	// pbase.h:355
	void OverRide(float);

	// pbase.h:368
	void Average(float);

	// pbase.h:380
	float GetAverage();

}

// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// pbase.h:128
			extern int AlignUp<int>(int, unsigned int);

			// pbase.h:128
			extern unsigned int AlignUp<unsigned int>(unsigned int, unsigned int);

			// pbase.h:36
			const float PI;

			// pbase.h:121
			const unsigned int JOBMANAGER_ADDR = 241664;

			// pbase.h:122
			const short unsigned int JOBMANAGER_SIZE = 16384;

			// pbase.h:246
			const float CPU_CLOCK_MULTIPLIER;

		}

	}

}

