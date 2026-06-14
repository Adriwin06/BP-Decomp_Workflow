// CgsIslandGenerator.cpp:38
void CgsPhysics::IslandGenerator::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIslandGenerator.cpp:54
void CgsPhysics::IslandGenerator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIslandGenerator.cpp:70
void CgsPhysics::IslandGenerator::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIslandGenerator.cpp:101
void CgsPhysics::IslandGenerator::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIslandGenerator.cpp:119
void CgsPhysics::IslandGenerator::RelateBodies(int32_t  liBodyAIndex, int32_t  liBodyBIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIslandGenerator.cpp:136
		uint16_t lu16BodyARootIsland;

		// CgsIslandGenerator.cpp:137
		uint16_t lu16BodyBRootIsland;

	}
	FindRootIsland(/* parameters */);
	FindRootIsland(/* parameters */);
	SetParentIsland(/* parameters */);
	IslandData::IncrementRank(/* parameters */);
	IslandData::ClearRank(/* parameters */);
	SetParentIsland(/* parameters */);
	IslandData::IncrementRank(/* parameters */);
	IslandData::ClearRank(/* parameters */);
	IslandData::Init(/* parameters */);
	IslandData::Init(/* parameters */);
}

// CgsIslandGenerator.cpp:169
void CgsPhysics::IslandGenerator::FlattenIslandTree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIslandGenerator.cpp:171
		int32_t liRootIndex;

		// CgsIslandGenerator.cpp:172
		int32_t i;

		FindRootIsland(/* parameters */);
		SetParentIsland(/* parameters */);
		IslandData::IncrementRank(/* parameters */);
		IslandData::ClearRank(/* parameters */);
		SetParentIsland(/* parameters */);
		IslandData::IncrementRank(/* parameters */);
		IslandData::ClearRank(/* parameters */);
	}
}

