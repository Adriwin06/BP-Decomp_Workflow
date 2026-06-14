// BrnRoute.h:26
namespace BrnAI {
	// BrnHardNoGoMap.h:30
	const int32_t KI_HNG_MAP_WIDTH = 32;

	// BrnHardNoGoMap.h:31
	const int32_t KI_HNG_MAP_HEIGHT = 8;

}

// _built-in_
namespace :: {
	// BrnHardNoGoMap.h:26
	const int32_t KI_NO_SECTION = 9999;

}

// BrnHardNoGoMap.h:24
typedef int32_t MapData;

// BrnHardNoGoMap.h:34
struct BrnAI::HardNoGoMap {
	// BrnHardNoGoMap.h:135
	Vector4 mCurrentAndPreviousLeft;

	// BrnHardNoGoMap.h:136
	Vector4 mCurrentAndPreviousRight;

private:
	// BrnHardNoGoMap.h:238
	MapData[8] mHNGMap;

	// BrnHardNoGoMap.h:239
	int32_t miSectionIndex;

	// BrnHardNoGoMap.h:240
	float32_t mfAverageWidth;

	// BrnHardNoGoMap.h:241
	bool mbReady;

public:
	// BrnHardNoGoMap.h:38
	void Prepare(int32_t);

	// BrnHardNoGoMap.h:45
	void SetCorners(Vector2, Vector2, Vector2, Vector2);

	// BrnHardNoGoMap.h:52
	bool MakeMap(const AISection *, int32_t, int32_t);

	// BrnHardNoGoMap.h:54
	void ClearMap();

	// BrnHardNoGoMap.h:58
	void Render(Vector3);

	// BrnHardNoGoMap.h:61
	bool IsReady();

	// BrnHardNoGoMap.h:66
	void SpreadHNGAlongTrack(float32_t *, float32_t);

	// BrnHardNoGoMap.h:70
	void SpreadHNGIntoPreviousSection(float32_t *);

	// BrnHardNoGoMap.h:75
	bool MoveTargetToLegalPosition(Vector2 &, float32_t);

	// BrnHardNoGoMap.h:83
	bool GetNearestEdges(Vector2, Vector2 &, Vector2 &, float32_t);

	// BrnHardNoGoMap.h:87
	bool IsSquareOccupied(Vector2);

	// BrnHardNoGoMap.h:94
	bool FindNearestSpaceForTarget(int32_t, int32_t, Vector2 &, float32_t);

	// BrnHardNoGoMap.h:98
	float32_t SectionLength(float32_t);

	// BrnHardNoGoMap.h:103
	void CheckForContinuedSpreading(float32_t *, int32_t);

	// BrnHardNoGoMap.h:109
	void FindMaximalEdges(Vector2 &, Vector2 &, float32_t);

	// BrnHardNoGoMap.h:113
	float32_t GetEstimatedRoadWidth(float32_t);

	// BrnHardNoGoMap.h:116
	int32_t GetSectionIndex();

	// BrnHardNoGoMap.h:120
	void SetSectionIndex(int32_t);

	// BrnHardNoGoMap.h:126
	bool MapSquareOccupiedFast(int32_t, int32_t);

	// BrnHardNoGoMap.h:131
	bool DistanceToHardNoGoEdge(Vector2, float32_t &);

	// BrnHardNoGoMap.h:139
	Vector2 GetPreviousLeft();

	// BrnHardNoGoMap.h:142
	Vector2 GetPreviousRight();

	// BrnHardNoGoMap.h:145
	Vector2 GetCurrentLeft();

	// BrnHardNoGoMap.h:148
	Vector2 GetCurrentRight();

	// BrnHardNoGoMap.h:151
	float32_t GetAverageRoadWidth();

private:
	// BrnHardNoGoMap.h:158
	bool MapSquareOccupied(float32_t, float32_t);

	// BrnHardNoGoMap.h:163
	bool MapSquareOccupied(int32_t, int32_t);

	// BrnHardNoGoMap.h:169
	Vector3 GetSquareTopLeft(uint32_t, uint32_t, float32_t);

	// BrnHardNoGoMap.h:175
	Vector3 GetSquareTopRight(uint32_t, uint32_t, float32_t);

	// BrnHardNoGoMap.h:181
	Vector3 GetSquareCentre(uint32_t, uint32_t, float32_t);

	// BrnHardNoGoMap.h:186
	void SetMapSquare(float32_t, float32_t);

	// BrnHardNoGoMap.h:191
	void SetMapSquare(int32_t, int32_t);

	// BrnHardNoGoMap.h:196
	void WriteIntoMap(Vector2, Vector2);

	// BrnHardNoGoMap.h:201
	void GetHNGInterpXY(Vector2, float32_t &, float32_t &);

	// BrnHardNoGoMap.h:207
	void ConvertInterpToIndex(float32_t, float32_t, int32_t &, int32_t &);

	// BrnHardNoGoMap.h:212
	bool IsInRange(float32_t, float32_t);

	// BrnHardNoGoMap.h:220
	bool FindSpaceForTarget(int32_t, int32_t, int32_t, Vector2 &, float32_t);

	// BrnHardNoGoMap.h:226
	Vector3 ConvertInterpToPosition(float32_t, float32_t, float32_t);

	// BrnHardNoGoMap.h:234
	void RenderHNGSquare(int32_t, int32_t, int32_t, float32_t, RGBA);

}

// AISectionsData.h:47
namespace BrnAI {
	// BrnHardNoGoMap.h:30
	const int32_t KI_HNG_MAP_WIDTH = 32;

	// BrnHardNoGoMap.h:31
	const int32_t KI_HNG_MAP_HEIGHT = 8;

}

