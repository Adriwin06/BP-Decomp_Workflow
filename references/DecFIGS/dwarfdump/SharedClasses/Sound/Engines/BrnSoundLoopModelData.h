// BrnSoundLoopModelData.h:40
namespace BrnSound {
	// BrnSoundLoopModelData.h:41
	namespace Vehicles {
		// BrnSoundLoopModelData.h:42
		namespace Engines {
			struct LoopModelData;

			struct Partial;

			struct Point;

			struct Graph;

			struct LoopModelResourceType;

		}

	}

}

// BrnSoundLoopModelData.h:75
struct BrnSound::Vehicles::Engines::LoopModelData {
	// BrnSoundLoopModelData.h:79
	extern const uint32_t ku32Version = 7;

	// BrnSoundLoopModelData.h:81
	extern const uint32_t ku32Signature = 1497648705;

	// BrnSoundLoopModelData.h:125
	uint32_t muVersion;

	// BrnSoundLoopModelData.h:126
	uint32_t muSignature;

	// BrnSoundLoopModelData.h:129
	BrnSound::Vehicles::Engines::Partial * mpaPartials;

	// BrnSoundLoopModelData.h:130
	uint32_t muNumOfPartials;

	// BrnSoundLoopModelData.h:131
	uint32_t muSizeInBytes;

public:
	// BrnSoundLoopModelData.h:104
	void DebugDumpContentsToTty() const;

	// BrnSoundLoopModelData.h:110
	void FixUp(const Resource &);

	// BrnSoundLoopModelData.h:114
	void FixDown(const Resource &);

	// BrnSoundLoopModelData.h:118
	void FixDown(MemoryResource);

	// BrnSoundLoopModelData.h:121
	uint32_t GetSizeInBytes() const;

}

// BrnSoundLoopModelData.h:146
struct BrnSound::Vehicles::Engines::Point {
	// BrnSoundLoopModelData.h:176
	float32_t mfXpos;

	// BrnSoundLoopModelData.h:177
	float32_t mfYpos;

public:
	// BrnSoundLoopModelData.h:168
	void FixDown(MemoryResource);

	// BrnSoundLoopModelData.h:172
	void FixUp(const Resource &);

}

// BrnSoundLoopModelData.h:190
struct BrnSound::Vehicles::Engines::Graph {
	// BrnSoundLoopModelData.h:221
	Point * mpaPoints;

	// BrnSoundLoopModelData.h:222
	uint8_t mu8NumOfPoints;

	// BrnSoundLoopModelData.h:223
	int8_t mi8XAxis;

	// BrnSoundLoopModelData.h:224
	int8_t mi8YAxis;

	// BrnSoundLoopModelData.h:225
	int8_t mPad;

public:
	// BrnSoundLoopModelData.h:214
	void FixDown(MemoryResource);

	// BrnSoundLoopModelData.h:218
	void FixUp(const Resource &);

}

// BrnSoundLoopModelData.h:240
struct BrnSound::Vehicles::Engines::Partial {
	// BrnSoundLoopModelData.h:243
	extern const uint32_t kuMaxWavePath = 128;

	// CgsSoundUtils.h:39
	typedef Name Name;

	// BrnSoundLoopModelData.h:275
	Partial::Name mWaveName;

	// BrnSoundLoopModelData.h:276
	Graph * mpaGraphs;

	// BrnSoundLoopModelData.h:277
	uint8_t mu8NumOfGraphs;

public:
	// BrnSoundLoopModelData.h:266
	void FixDown(MemoryResource);

	// BrnSoundLoopModelData.h:270
	void FixUp(const Resource &);

}

