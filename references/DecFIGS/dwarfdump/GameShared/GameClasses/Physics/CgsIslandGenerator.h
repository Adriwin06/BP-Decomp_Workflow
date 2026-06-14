// CgsRigidBody.h:24
namespace CgsPhysics {
	// Declaration
	struct IslandGenerator {
		// CgsIslandGenerator.h:70
		struct IslandData {
		private:
			// CgsIslandGenerator.h:72
			extern const uint16_t KU16_INVALID_BODY_INDEX = 65535;

			// CgsIslandGenerator.h:73
			extern const uint16_t KU16_INVALID_PARENT_INDEX = 65535;

			// CgsIslandGenerator.h:74
			extern const uint16_t KU16_INVALID_RANK = 65535;

			// CgsIslandGenerator.h:122
			uint16_t mu16BodyIndex;

			// CgsIslandGenerator.h:124
			uint16_t mu16Rank;

		public:
			// CgsIslandGenerator.h:78
			void Prepare();

			// CgsIslandGenerator.h:82
			void Init(uint16_t);

			// CgsIslandGenerator.h:86
			uint16_t GetBodyIndex() const;

			// CgsIslandGenerator.h:94
			uint16_t GetRank() const;

			// CgsIslandGenerator.h:102
			bool IsUsed() const;

			// CgsIslandGenerator.h:110
			void IncrementRank();

			// CgsIslandGenerator.h:114
			void IncrementRank(uint16_t);

			// CgsIslandGenerator.h:118
			void ClearRank();

		}

	}

}

// CgsIslandGenerator.h:33
struct CgsPhysics::IslandGenerator : public IOBuffer {
private:
	// CgsIslandGenerator.h:66
	extern const int32_t KI_MAX_NUM_BODIES = 200;

	// CgsIslandGenerator.h:127
	CgsPhysics::IslandGenerator::IslandData[200] maBodyIslandData;

	// CgsIslandGenerator.h:128
	uint16_t[200] mau16ParentIsland;

public:
	// CgsIslandGenerator.h:37
	void Construct();

	// CgsIslandGenerator.h:40
	bool Prepare();

	// CgsIslandGenerator.h:43
	void Release();

	// CgsIslandGenerator.h:46
	void Destruct();

	// CgsIslandGenerator.h:50
	void CreateIslandFromBody(int32_t);

	// CgsIslandGenerator.h:56
	void RelateBodies(int32_t, int32_t);

	// CgsIslandGenerator.h:59
	void FlattenIslandTree();

	// CgsIslandGenerator.h:62
	uint16_t GetIsland(int32_t) const;

private:
	// CgsIslandGenerator.h:131
	bool IsRootIsland(uint16_t) const;

	// CgsIslandGenerator.h:135
	void SetParentIsland(uint16_t, uint16_t);

	// CgsIslandGenerator.h:140
	int32_t FindRootIsland(int32_t);

}

// CgsIslandGenerator.h:66
extern const int32_t KI_MAX_NUM_BODIES = 200;

// CgsIslandGenerator.h:72
extern const uint16_t KU16_INVALID_BODY_INDEX = 65535;

// CgsIslandGenerator.h:74
extern const uint16_t KU16_INVALID_RANK = 65535;

