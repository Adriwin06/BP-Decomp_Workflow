// CgsPrimitivePairList.h:45
struct CgsSceneManager::CgsCollision::PrimitivePairList {
	// CgsPrimitivePairList.h:172
	uint8_t * mpaDataStream;

	// CgsPrimitivePairList.h:173
	uint16_t mu16UsedData;

	// CgsPrimitivePairList.h:174
	uint16_t mu16NumTests;

	// CgsPrimitivePairList.h:175
	uint16_t mu16MaxDataSize;

	// CgsPrimitivePairList.h:177
	extern uint16_t[] KAU16_VOLUME_SIZES;

public:
	// CgsPrimitivePairList.h:146
	void Construct();

	// CgsPrimitivePairList.h:149
	void Destruct();

	// CgsPrimitivePairList.h:154
	bool Prepare(uint8_t *, uint16_t);

	// CgsPrimitivePairList.h:157
	void Release();

	// CgsPrimitivePairList.h:160
	uint16_t GetNumTests() const;

	// CgsPrimitivePairList.h:164
	const uint8_t * GetDataStream() const;

	// CgsPrimitivePairList.h:168
	uint16_t GetDataSize() const;

}

// CgsPrimitivePairList.h:177
extern uint16_t[] KAU16_VOLUME_SIZES;

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// Declaration
		struct PrimitivePairList {
			// CgsPrimitivePairList.h:48
			enum EVolumeType {
				E_VOLUME_TYPE_INVALID = 0,
				E_VOLUME_TYPE_SPHERE = 1,
				E_VOLUME_TYPE_CAPSULE = 2,
				E_VOLUME_TYPE_4TRIANGLES = 3,
				E_VOLUME_TYPE_BOX = 4,
				E_VOLUME_TYPE_CYLINDER = 5,
				NUM_VOLUME_TYPES = 6,
			}

		}

	}

}

// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct PrimitivePairList {
			// CgsPrimitivePairList.h:48
			enum EVolumeType {
				E_VOLUME_TYPE_INVALID = 0,
				E_VOLUME_TYPE_SPHERE = 1,
				E_VOLUME_TYPE_CAPSULE = 2,
				E_VOLUME_TYPE_4TRIANGLES = 3,
				E_VOLUME_TYPE_BOX = 4,
				E_VOLUME_TYPE_CYLINDER = 5,
				NUM_VOLUME_TYPES = 6,
			}

			// CgsPrimitivePairList.h:67
			struct CollisionHeader {
				// CgsPrimitivePairList.h:69
				uint8_t mu8PrimTypeA;

				// CgsPrimitivePairList.h:70
				uint8_t mu8PrimTypeB;

				// CgsPrimitivePairList.h:71
				uint8_t mu8HeaderType;

				// CgsPrimitivePairList.h:72
				uint8_t mu8DataPaddingAndCheckSum;

				// CgsPrimitivePairList.h:73
				uint16_t mu16PrimADataSize;

				// CgsPrimitivePairList.h:74
				uint16_t mu16PrimBDataSize;

				// CgsPrimitivePairList.h:75
				float32_t mfPadding;

				// CgsPrimitivePairList.h:76
				uint16_t mu16PrimitiveATag;

				// CgsPrimitivePairList.h:77
				uint16_t mu16PrimitiveBTag;

			public:
				// CgsPrimitivePairList.h:80
				void SetCheckSum();

				// CgsPrimitivePairList.h:84
				void CheckCheckSum() const;

			}

			// CgsPrimitivePairList.h:89
			struct Itterator {
			private:
				// CgsPrimitivePairList.h:137
				CgsSceneManager::CgsCollision::PrimitivePairList::CollisionHeader mCurrentHeader;

				// CgsPrimitivePairList.h:138
				const uint8_t * mpau8CurrentStreamPosition;

				// CgsPrimitivePairList.h:139
				uint16_t mu16CurrentTest;

				// CgsPrimitivePairList.h:140
				uint16_t mu16DataSize;

				// CgsPrimitivePairList.h:141
				uint16_t mu16CurrentDataPosition;

				// CgsPrimitivePairList.h:142
				uint16_t mu16NumHeaders;

			public:
				// CgsPrimitivePairList.h:93
				void Prepare(const CgsSceneManager::CgsCollision::PrimitivePairList *);

				// CgsPrimitivePairList.h:96
				const void * GetPrimativeA() const;

				// CgsPrimitivePairList.h:99
				const void * GetPrimativeB() const;

				// CgsPrimitivePairList.h:102
				CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType GetTypeA() const;

				// CgsPrimitivePairList.h:106
				CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType GetTypeB() const;

				// CgsPrimitivePairList.h:110
				float32_t GetPadding() const;

				// CgsPrimitivePairList.h:114
				uint16_t GetPrimitiveTagA() const;

				// CgsPrimitivePairList.h:118
				uint16_t GetPrimitiveTagB() const;

				// CgsPrimitivePairList.h:122
				uint16_t GetNumTests() const;

				// CgsPrimitivePairList.h:126
				bool MoveToNextHeader();

				// CgsPrimitivePairList.h:129
				uint16_t GetCurrentTestIndex() const;

				// CgsPrimitivePairList.h:133
				void CheckCheckSum() const;

			}

		}

	}

}

