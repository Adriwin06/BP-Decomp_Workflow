// BrnRoute.h:26
namespace BrnAI {
	// BrnHardNoGoMap.cpp:504
	// Declaration
	extern float32_t GetHNGInterpFast(Vector2, Vector2, Vector2, Vector2, Vector2) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHardNoGoMap.cpp:528
		using namespace CgsDev::Message;

	}

	// BrnHardNoGoMap.cpp:482
	extern void SwapXY(Vector2 &);

	// BrnHardNoGoMap.cpp:25
	const float32_t KF_STEP_TO_PLAYER;

	// BrnHardNoGoMap.cpp:26
	const float32_t KF_SPREAD_DISTANCE;

	// BrnHardNoGoMap.cpp:27
	const int32_t KI_TOO_FULL_TO_COPE = 24;

	// BrnHardNoGoMap.cpp:28
	const int32_t KI_OUTER_KEEP_SECTIONS = 4;

	// BrnHardNoGoMap.cpp:29
	const float32_t KF_MINIMUM_STEP;

	// BrnHardNoGoMap.cpp:30
	const float32_t KF_DISTANCE_TO_DRAW_SQUARES;

	// BrnHardNoGoMap.cpp:31
	const float32_t KF_HNG_MAP_APROX_RADIUS;

}

// BrnHardNoGoMap.cpp:41
void BrnAI::HardNoGoMap::Prepare(int32_t  liSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:754
void BrnAI::HardNoGoMap::IsReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:121
void BrnAI::HardNoGoMap::GetSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:401
void BrnAI::HardNoGoMap::ClearMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:405
		int32_t liStep;

		// BrnHardNoGoMap.cpp:410
		MapData liBlankMask;

	}
}

// BrnHardNoGoMap.cpp:56
void BrnAI::HardNoGoMap::IsInRange(float32_t  lfX, float32_t  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:106
void BrnAI::HardNoGoMap::SetSectionIndex(int32_t  liSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:283
void BrnAI::HardNoGoMap::CheckForContinuedSpreading(float32_t *  laDistanceFromHNG, int32_t  liX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:774
void BrnAI::HardNoGoMap::ConvertInterpToIndex(float32_t  lfWidth, float32_t  lfHeight, const int32_t &  liWidth, const int32_t &  liHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHardNoGoMap.cpp:76
void BrnAI::HardNoGoMap::SetCorners(Vector2  lCurrentLeft, Vector2  lCurrentRight, Vector2  lPreviousLeft, Vector2  lPreviousRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	{
	}
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+=(/* parameters */);
}

// BrnHardNoGoMap.cpp:643
void BrnAI::HardNoGoMap::GetHNGInterpXY(const rw::math::vpu::Vector2  lPoint, const float32_t &  lfXInterp, const float32_t &  lfYInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:645
		VecFloat lfGuess;

		// BrnHardNoGoMap.cpp:646
		VecFloat lfStep;

		// BrnHardNoGoMap.cpp:648
		Vector2 lTopPoint;

		// BrnHardNoGoMap.cpp:649
		Vector2 lBottomPoint;

		// BrnHardNoGoMap.cpp:651
		int32_t liLoopCount;

		// BrnHardNoGoMap.cpp:653
		Vector2 lCurrentLeft;

		// BrnHardNoGoMap.cpp:654
		Vector2 lCurrentRight;

		// BrnHardNoGoMap.cpp:655
		Vector2 lPreviousLeft;

		// BrnHardNoGoMap.cpp:656
		Vector2 lPreviousRight;

		// BrnHardNoGoMap.cpp:684
		VecFloat lfLineLength;

		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		GetCurrentRight(/* parameters */);
		GetPreviousLeft(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		GetCurrentLeft(/* parameters */);
		GetPreviousRight(/* parameters */);
	}
	{
		// BrnHardNoGoMap.cpp:665
		Vector2 lA;

		// BrnHardNoGoMap.cpp:666
		Vector2 lB;

		// BrnHardNoGoMap.cpp:668
		VecFloat lSide;

		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:692
		VecFloat lfDistanceToPointFromPrevious;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
	}
}

// BrnHardNoGoMap.cpp:1244
void BrnAI::HardNoGoMap::DistanceToHardNoGoEdge(Vector2  lPosition, const float32_t &  lfDistanceOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1246
		float32_t lfX;

		// BrnHardNoGoMap.cpp:1247
		float32_t lfY;

		// BrnHardNoGoMap.cpp:1251
		int32_t liWidth;

		// BrnHardNoGoMap.cpp:1252
		int32_t liHeight;

		// BrnHardNoGoMap.cpp:1256
		MapData lRoadData;

		// BrnHardNoGoMap.cpp:1260
		MapData lMapMask;

		// BrnHardNoGoMap.cpp:1262
		bool lbOccupied;

		// BrnHardNoGoMap.cpp:1279
		float32_t lfSpreadCount;

	}
}

// BrnHardNoGoMap.cpp:958
void BrnAI::HardNoGoMap::ConvertInterpToPosition(float32_t  lfWidth, float32_t  lfHeight, float32_t  lfCarHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnHardNoGoMap.cpp:973
	Vector3 lResult;

	{
		// BrnHardNoGoMap.cpp:962
		Vector2 lLeftEdge;

		// BrnHardNoGoMap.cpp:963
		Vector2 lRightEdge;

		// BrnHardNoGoMap.cpp:965
		Vector3 lLeft3D;

		// BrnHardNoGoMap.cpp:966
		Vector3 lRight3D;

		// BrnHardNoGoMap.cpp:973
		Vector3 lResult;

		GetPreviousLeft(/* parameters */);
	}
	GetPreviousRight(/* parameters */);
	GetCurrentLeft(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpl::VecPermuteSingleImm<9011>(/* parameters */);
	GetCurrentRight(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
}

// BrnHardNoGoMap.cpp:852
void BrnAI::HardNoGoMap::MapSquareOccupied(int32_t  liWidth, int32_t  liHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:872
		MapData lMapMask;

	}
	{
		// BrnHardNoGoMap.cpp:868
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:1316
void BrnAI::HardNoGoMap::IsSquareOccupied(Vector2  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1318
		float32_t lfX;

		// BrnHardNoGoMap.cpp:1319
		float32_t lfY;

		// BrnHardNoGoMap.cpp:1324
		int32_t liWidth;

		// BrnHardNoGoMap.cpp:1325
		int32_t liHeight;

	}
}

// BrnHardNoGoMap.cpp:893
void BrnAI::HardNoGoMap::GetSquareTopLeft(uint32_t  liWidth, uint32_t  liHeight, float32_t  lfCarHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:898
		float32_t lfHeight;

		// BrnHardNoGoMap.cpp:899
		float32_t lfWidth;

	}
	{
		// BrnHardNoGoMap.cpp:896
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:993
void BrnAI::HardNoGoMap::RenderHNGSquare(int32_t  liWidth, int32_t  liHeight, int32_t  liEndHeight, float32_t  lfYPos, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:997
		Vector3 lA;

		// BrnHardNoGoMap.cpp:998
		Vector3 lB;

		// BrnHardNoGoMap.cpp:999
		Vector3 lC;

		// BrnHardNoGoMap.cpp:1000
		Vector3 lD;

		// BrnHardNoGoMap.cpp:1002
		DebugInterface lDebugInterface;

	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	GetCurrentRight(/* parameters */);
	GetPreviousRight(/* parameters */);
	GetPreviousLeft(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnHardNoGoMap.cpp:915
void BrnAI::HardNoGoMap::GetSquareTopRight(uint32_t  liWidth, uint32_t  liHeight, float32_t  lfCarHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:920
		float32_t lfHeight;

		// BrnHardNoGoMap.cpp:921
		float32_t lfWidth;

	}
	{
		// BrnHardNoGoMap.cpp:918
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:1513
void BrnAI::HardNoGoMap::FindMaximalEdges(const Vector2 &  lLeftEdge, const Vector2 &  lRightEdge, float32_t  lfHeightInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1515
		int32_t liIndex;

		// BrnHardNoGoMap.cpp:1519
		bool lbFoundEdge;

		// BrnHardNoGoMap.cpp:1521
		int32_t liHeight;

		// BrnHardNoGoMap.cpp:1522
		int32_t liWidth;

	}
}

// BrnHardNoGoMap.cpp:1580
void BrnAI::HardNoGoMap::GetEstimatedRoadWidth(float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1582
		Vector2 lLeftEdge;

		// BrnHardNoGoMap.cpp:1583
		Vector2 lRightEdge;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
}

// BrnHardNoGoMap.cpp:936
void BrnAI::HardNoGoMap::GetSquareCentre(uint32_t  liWidth, uint32_t  liHeight, float32_t  lfCarHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:941
		float32_t lfHeight;

		// BrnHardNoGoMap.cpp:942
		float32_t lfWidth;

	}
	{
		// BrnHardNoGoMap.cpp:939
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:1154
void BrnAI::HardNoGoMap::FindNearestSpaceForTarget(int32_t  liWidth, int32_t  liHeight, const Vector2 &  lTarget, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1156
		Vector2 lNewPosition1;

		// BrnHardNoGoMap.cpp:1157
		Vector2 lNewPosition2;

		// BrnHardNoGoMap.cpp:1162
		bool lbUse1;

		// BrnHardNoGoMap.cpp:1163
		bool lbUse2;

		// BrnHardNoGoMap.cpp:1165
		int32_t liStep;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:1169
		int32_t liCheck;

	}
	{
		// BrnHardNoGoMap.cpp:1179
		Vector3 lA;

		SetY<VectorAxisZ>(/* parameters */);
	}
	{
		// BrnHardNoGoMap.cpp:1197
		Vector3 lA;

		SetY<VectorAxisZ>(/* parameters */);
	}
	SetX<VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator<(/* parameters */);
}

// BrnHardNoGoMap.cpp:1347
void BrnAI::HardNoGoMap::MoveTargetToLegalPosition(const Vector2 &  lTarget, float32_t  lfCarHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1355
		float32_t lfX;

		// BrnHardNoGoMap.cpp:1356
		float32_t lfY;

		// BrnHardNoGoMap.cpp:1360
		int32_t liWidth;

		// BrnHardNoGoMap.cpp:1361
		int32_t liHeight;

	}
}

// BrnHardNoGoMap.cpp:1116
void BrnAI::HardNoGoMap::FindSpaceForTarget(int32_t  liWidth, int32_t  liHeight, int32_t  liStep, const Vector2 &  lTarget, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1118
		int32_t liScanCount;

	}
	{
		// BrnHardNoGoMap.cpp:1126
		Vector3 lA;

		SetX<VectorAxisX>(/* parameters */);
		SetY<VectorAxisZ>(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:1393
void BrnAI::HardNoGoMap::GetNearestEdges(Vector2  lCarCentre2D, const Vector2 &  lLeftEdge, const Vector2 &  lRightEdge, float32_t  lfCarHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1395
		float32_t lfX;

		// BrnHardNoGoMap.cpp:1396
		float32_t lfY;

		// BrnHardNoGoMap.cpp:1400
		int32_t liWidth;

		// BrnHardNoGoMap.cpp:1401
		int32_t liHeight;

		// BrnHardNoGoMap.cpp:1442
		int32_t liScan;

		// BrnHardNoGoMap.cpp:1443
		Vector3 lEdge;

		// BrnHardNoGoMap.cpp:1447
		int32_t liEdgesFound;

	}
	{
		// BrnHardNoGoMap.cpp:1409
		Vector2 lNewPosition;

		// BrnHardNoGoMap.cpp:1413
		bool lbFoundClear;

	}
	{
		// BrnHardNoGoMap.cpp:1451
		int32_t liCheck;

	}
	{
		// BrnHardNoGoMap.cpp:1466
		int32_t liCheck;

	}
	{
		// BrnHardNoGoMap.cpp:1477
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnHardNoGoMap.cpp:1417
		float32_t lfX;

		// BrnHardNoGoMap.cpp:1418
		float32_t lfY;

	}
}

// BrnHardNoGoMap.cpp:1491
void BrnAI::HardNoGoMap::SectionLength(float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1495
		float32_t lfLeftLength;

		// BrnHardNoGoMap.cpp:1496
		float32_t lfRightLength;

		{
			// BrnHardNoGoMap.cpp:1493
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		GetPreviousLeft(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		GetCurrentLeft(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		GetCurrentRight(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		GetPreviousRight(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:212
void BrnAI::HardNoGoMap::SpreadHNGIntoPreviousSection(float32_t *  laDistanceFromHNG) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:214
		float32_t lfLeftLength;

		// BrnHardNoGoMap.cpp:215
		float32_t lfRightLength;

		// BrnHardNoGoMap.cpp:217
		float32_t lfStep;

		// BrnHardNoGoMap.cpp:219
		int32_t liX;

		// BrnHardNoGoMap.cpp:220
		int32_t liY;

		GetPreviousLeft(/* parameters */);
		GetCurrentRight(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	GetCurrentLeft(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	GetPreviousRight(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:228
		float32_t lfLength;

	}
	MapSquareOccupiedFast(/* parameters */);
	SetMapSquare(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:137
void BrnAI::HardNoGoMap::WriteIntoMap(const rw::math::vpu::Vector2  lStartPos, const rw::math::vpu::Vector2  lEndPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:139
		float32_t lfStartX;

		// BrnHardNoGoMap.cpp:140
		float32_t lfStartY;

		// BrnHardNoGoMap.cpp:144
		float32_t lfEndX;

		// BrnHardNoGoMap.cpp:145
		float32_t lfEndY;

		// BrnHardNoGoMap.cpp:150
		Vector2 lStart;

		// BrnHardNoGoMap.cpp:154
		Vector2 lEnd;

		// BrnHardNoGoMap.cpp:158
		float32_t lfDX;

		// BrnHardNoGoMap.cpp:159
		float32_t lfDY;

		// BrnHardNoGoMap.cpp:161
		float32_t lfStep;

		// BrnHardNoGoMap.cpp:162
		int32_t liCount;

		// BrnHardNoGoMap.cpp:185
		Vector2 lStep;

		// BrnHardNoGoMap.cpp:186
		Vector2 lPosition;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:190
		int32_t liMapX;

		// BrnHardNoGoMap.cpp:191
		int32_t liMapY;

		SetMapSquare(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:433
void BrnAI::HardNoGoMap::MakeMap(const AISection *  lpAISection, int32_t  liStart, int32_t  liEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:437
		Vector2 lStartPos;

		// BrnHardNoGoMap.cpp:438
		Vector2 lEndPos;

		// BrnHardNoGoMap.cpp:443
		int32_t liHardNoGoCount;

		// BrnHardNoGoMap.cpp:449
		int32_t liStep;

	}
	rw::math::vpu::Min<int>(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:453
		const BoundaryLine * lpHNGLine;

		BoundaryLine::GetVert(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		BoundaryLine::GetVert(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
	}
	AISection::GetHNGLine(/* parameters */);
}

// BrnHardNoGoMap.cpp:327
void BrnAI::HardNoGoMap::SpreadHNGAlongTrack(float32_t *  laDistanceFromHNG, float32_t  lfSpreadDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:331
		int32_t liX;

		// BrnHardNoGoMap.cpp:340
		float32_t lfLeftLength;

		// BrnHardNoGoMap.cpp:341
		float32_t lfRightLength;

		// BrnHardNoGoMap.cpp:343
		float32_t lfStep;

		// BrnHardNoGoMap.cpp:345
		int32_t liY;

		{
			// BrnHardNoGoMap.cpp:353
			float32_t lfLength;

			MapSquareOccupiedFast(/* parameters */);
		}
		SetMapSquare(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHardNoGoMap.cpp:1028
void BrnAI::HardNoGoMap::Render(const rw::math::vpu::Vector3  lCarPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:1030
		int32_t liHeight;

		// BrnHardNoGoMap.cpp:1031
		int32_t liWidth;

		// BrnHardNoGoMap.cpp:1036
		Vector3 lCentreOfMap;

		// BrnHardNoGoMap.cpp:1084
		Vector2 lPosition;

		// BrnHardNoGoMap.cpp:1088
		float32_t lfX;

		// BrnHardNoGoMap.cpp:1089
		float32_t lfY;

	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	MapSquareOccupiedFast(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHardNoGoMap.cpp:1051
		Vector3 lA;

		// BrnHardNoGoMap.cpp:1062
		int32_t liEndHeight;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		MapSquareOccupiedFast(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:1033
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

