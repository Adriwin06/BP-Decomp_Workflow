// BrnTrafficLogger.h:168
struct BrnTraffic::Logger {
private:
	// BrnTrafficLogger.h:214
	extern Logger * gpLogger;

	// BrnTrafficLogger.h:216
	bool mbAllowDivergentBehaviour;

public:
	// BrnTrafficLogger.h:173
	void Construct();

	// BrnTrafficLogger.h:178
	void Reset();

	// BrnTrafficLogger.h:182
	bool AllowDivergentBehaviour();

	// BrnTrafficLogger.h:188
	void SetAllowDivergentBehaviour(bool);

	// BrnTrafficLogger.h:196
	uint16_t HashState(const BrnTraffic::TrafficEntityModule *);

	// BrnTrafficLogger.h:201
	void Dump(const char *);

	// BrnTrafficLogger.h:208
	void HACKDump(const char *);

}

// BrnTrafficLogger.h:214
extern Logger * gpLogger;

// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct HashBuffer {
		// BrnTrafficLogger.h:54
		struct ParamData {
			// BrnTrafficLogger.h:56
			uint8_t mxFlags;

			// BrnTrafficLogger.h:57
			uint8_t mxEffectHist;

			// BrnTrafficLogger.h:58
			uint8_t muSectionIndex;

			// BrnTrafficLogger.h:59
			int8_t miBehaviour;

			// BrnTrafficLogger.h:60
			uint16_t muHullIndex;

			// BrnTrafficLogger.h:61
			float32_t mfParamAlong;

			// BrnTrafficLogger.h:62
			float32_t mfStopDist;

			// BrnTrafficLogger.h:63
			float32_t mfTargetSpeed;

			// BrnTrafficLogger.h:65
			ParamPlan[2] maPlans;

			// BrnTrafficLogger.h:72
			uint16_t muParamInFront;

			// BrnTrafficLogger.h:73
			float32_t mfNextParamDist;

			// BrnTrafficLogger.h:76
			uint16_t muNextParam;

			// BrnTrafficLogger.h:77
			uint16_t muPrevParam;

			// BrnTrafficLogger.h:78
			float32_t mfListParamAlong;

			// BrnTrafficLogger.h:81
			Vector4 mPos;

			// BrnTrafficLogger.h:82
			Vector3Plus mDirAndAccel;

		}

		// BrnTrafficLogger.h:86
		struct StaticParamData {
			// BrnTrafficLogger.h:88
			uint16_t muHullIndex;

			// BrnTrafficLogger.h:89
			uint8_t muStaticTrafficIndexOnHull;

			// BrnTrafficLogger.h:90
			uint8_t mxFlags;

			// BrnTrafficLogger.h:91
			uint8_t muVehicleType;

		}

		// BrnTrafficLogger.h:95
		struct ActiveHullData {
			// BrnTrafficLogger.h:97
			uint16_t muHullIndex;

			// BrnTrafficLogger.h:98
			uint8_t muNumJunctions;

			// BrnTrafficLogger.h:99
			uint8_t muNumStopLines;

			// BrnTrafficLogger.h:101
			uint8_t[16] mauJunctionStates;

			// BrnTrafficLogger.h:102
			uint64_t mxStopLineStates;

			// BrnTrafficLogger.h:104
			uint16_t[256] mauSectionSpanVehicleCount;

		}

	}

}

// BrnTrafficLogger.h:50
struct BrnTraffic::HashBuffer {
	// BrnTrafficLogger.h:108
	Random mRand;

	// BrnTrafficLogger.h:109
	BrnTraffic::HashBuffer::ParamData[400] maParamData;

	// BrnTrafficLogger.h:110
	BrnTraffic::HashBuffer::StaticParamData[200] maStaticParamData;

	// BrnTrafficLogger.h:112
	uint32_t muNumFreeParams;

	// BrnTrafficLogger.h:113
	uint16_t[400] mauFreeParams;

	// BrnTrafficLogger.h:115
	uint32_t muNumFreeStaticParams;

	// BrnTrafficLogger.h:116
	uint8_t[200] mauFreeStaticParams;

	// BrnTrafficLogger.h:118
	uint32_t muNumParamsInPurgatory;

	// BrnTrafficLogger.h:119
	PurgatoryInfo[400] maParamPurgatory;

	// BrnTrafficLogger.h:121
	uint32_t muNumStaticParamsInPurgatory;

	// BrnTrafficLogger.h:122
	PurgatoryInfo[200] maStaticParamPurgatory;

	// BrnTrafficLogger.h:124
	uint32_t muNumActiveHulls;

	// BrnTrafficLogger.h:125
	BrnTraffic::HashBuffer::ActiveHullData[72] maActiveHullData;

public:
	// BrnTrafficLogger.h:131
	void Dump(std::FILE *);

}

// BrnTrafficLogger.h:137
struct BrnTraffic::FrameLogData {
	// BrnTrafficLogger.h:139
	HashBuffer mHashBuffer;

	// BrnTrafficLogger.h:140
	uint16_t muUpdateFrame;

	// BrnTrafficLogger.h:141
	uint16_t muHash;

	// BrnTrafficLogger.h:142
	uint16_t muGlobalFrame;

	// BrnTrafficLogger.h:144
	uint16_t[8] mauRaceCarHulls;

	// BrnTrafficLogger.h:146
	int8_t miLocalRaceCar;

	// BrnTrafficLogger.h:148
	uint32_t muNumPredictedHullChanges;

	// BrnTrafficLogger.h:149
	HullChangeInfo[50] maPredictedHullChanges;

public:
	// BrnTrafficLogger.h:155
	void Dump(std::FILE *);

}

// BrnTrafficLogger.h:168
struct BrnTraffic::Logger {
private:
	// BrnTrafficLogger.h:214
	extern Logger * gpLogger;

	// BrnTrafficLogger.h:216
	bool mbAllowDivergentBehaviour;

public:
	// BrnTrafficLogger.h:173
	void Construct();

	// BrnTrafficLogger.h:178
	void Reset();

	// BrnTrafficLogger.h:182
	bool AllowDivergentBehaviour();

	// BrnTrafficLogger.h:188
	void SetAllowDivergentBehaviour(bool);

	// BrnTrafficLogger.h:196
	uint16_t HashState(const BrnTraffic::TrafficEntityModule *);

	// BrnTrafficLogger.h:201
	// Declaration
	void Dump(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficLogger.cpp:652
		using namespace CgsDev::Message;

		// BrnTrafficLogger.cpp:655
		using namespace CgsDev::Message;

	}

	// BrnTrafficLogger.h:208
	// Declaration
	void HACKDump(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficLogger.cpp:691
		using namespace CgsDev::Message;

	}

}

