// BrnPlaceOnTrackManager.h:41
struct BrnWorld::PlaceOnTrackManager {
private:
	// BrnPlaceOnTrackManager.h:57
	extern const float32_t KF_LINE_TEST_LENGTH;

	// BrnPlaceOnTrackManager.h:58
	extern const float32_t KF_Y_OFFSET;

	// BrnPlaceOnTrackManager.h:59
	extern const uint8_t KI_LINE_TEST_OWNER;

	// BrnPlaceOnTrackManager.h:67
	BrnWorld::RaceCarEntityModule * mpRaceCarEntityModule;

	// BrnPlaceOnTrackManager.h:69
	Random mRandom;

public:
	// BrnPlaceOnTrackManager.h:45
	void Construct(BrnWorld::RaceCarEntityModule *);

	// BrnPlaceOnTrackManager.h:49
	// Declaration
	void PostSceneUpdate(OutputBuffer_PostScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPlaceOnTrackManager.cpp:123
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:124
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:131
		using namespace CgsDev::Message;

	}

	// BrnPlaceOnTrackManager.h:54
	// Declaration
	void PrePhysicsUpdate(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPlaceOnTrackManager.cpp:174
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:177
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:182
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:194
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:205
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:211
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:218
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:227
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:231
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:238
		using namespace CgsDev::Message;

		// BrnPlaceOnTrackManager.cpp:264
		using namespace CgsDev::Message;

	}

private:
	// BrnPlaceOnTrackManager.h:65
	const LineTestIntersection * ComputeBestPlaceOnTrackIntersection(const OutEventLineTestFineResult *, Vector3, bool);

	// BrnPlaceOnTrackManager.h:76
	void GetValuesForCarSelect(const LineTestIntersection *, const ActiveRaceCar *, Vector3 &, Vector3 &, Vector3 &);

}

// BrnPlaceOnTrackManager.h:57
extern const float32_t KF_LINE_TEST_LENGTH;

// BrnPlaceOnTrackManager.h:58
extern const float32_t KF_Y_OFFSET;

// BrnPlaceOnTrackManager.h:59
extern const uint8_t KI_LINE_TEST_OWNER;

