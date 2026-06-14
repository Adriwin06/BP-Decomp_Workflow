// BrnCrashTriangleCache.cpp:63
void BrnEffects::BrnCrashTriangleCache::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashTriangleCache.cpp:35
void BrnEffects::BrnCrashTriangleCache::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashTriangleCache.cpp:42
		uint32_t lnCacheLoop;

		BrnCrashTrianglePackedFormat::Clear(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
	}
}

// BrnCrashTriangleCache.cpp:467
void BrnEffects::BrnCrashTriangleCache::CollideWithTriangleCache(BrnCrashLineTriangleCacheFormat *  lpLinesToTest, uint32_t  luNumberLines) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashTriangleCache.cpp:469
		BrnCrashLineTriangleCacheFormat * lpCurrentLine;

		// BrnCrashTriangleCache.cpp:472
		int32_t lnNumPackedTris;

	}
	{
		// BrnCrashTriangleCache.cpp:475
		int32_t liTriBatch;

	}
	{
		// BrnCrashTriangleCache.cpp:478
		const BrnCrashTrianglePackedFormat * lpTriBatch;

		// BrnCrashTriangleCache.cpp:480
		Vector4 lOutDeterminant;

		// BrnCrashTriangleCache.cpp:481
		Vector4 lOutBarycentricParams1;

		// BrnCrashTriangleCache.cpp:482
		Vector4 lOutBarycentricParams2;

		// BrnCrashTriangleCache.cpp:483
		Vector4 lOutLineParams;

		{
			// BrnCrashTriangleCache.cpp:486
			uint32_t luLineTest;

			{
				// BrnCrashTriangleCache.cpp:492
				Mask4 lIntersectMask;

				rw::math::vpu::operator-(/* parameters */);
			}
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::collision::TriangleLineSegIntersect(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::collision::CrossSoA(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Mult<VectorAxisZ>(/* parameters */);
			rw::math::vpu::Mult<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
			rw::math::vpu::Mult<VectorAxisZ>(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
			rw::math::vpu::Mult<VectorAxisY>(/* parameters */);
			rw::collision::CrossSoA(/* parameters */);
			rw::math::vpu::Mult<VectorAxisX>(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::collision::DotSoA(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
			rw::collision::DotSoA(/* parameters */);
			rw::math::vpu::CompAnyTrue(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
			rw::collision::DotSoA(/* parameters */);
			rw::collision::DotSoA(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::And(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::And(/* parameters */);
			rw::math::vpu::And(/* parameters */);
			rw::math::vpu::And(/* parameters */);
			rw::math::vpu::CompLessEqual(/* parameters */);
			rw::math::vpu::CompLessEqual(/* parameters */);
			rw::math::vpu::CompLessEqual(/* parameters */);
			rw::math::vpu::And(/* parameters */);
			rw::math::vpu::And(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			{
				// BrnCrashTriangleCache.cpp:517
				Matrix44 lVertices1Matrix;

				// BrnCrashTriangleCache.cpp:523
				Matrix44 lVertices2Matrix;

				// BrnCrashTriangleCache.cpp:529
				Matrix44 lVertices3Matrix;

				// BrnCrashTriangleCache.cpp:540
				Vector4 lTri1Normal;

				// BrnCrashTriangleCache.cpp:541
				Vector4 lTri2Normal;

				// BrnCrashTriangleCache.cpp:542
				Vector4 lTri3Normal;

				// BrnCrashTriangleCache.cpp:543
				Vector4 lTri4Normal;

				rw::math::vpu::Transpose(/* parameters */);
				rw::math::vpu::Transpose(/* parameters */);
				rw::math::vpu::operator/=(/* parameters */);
				rw::math::vpu::Transpose(/* parameters */);
				{
					// BrnCrashTriangleCache.cpp:550
					MaskScalar lIsTri1Nearest;

					rw::math::vpu::And(/* parameters */);
				}
				{
					// BrnCrashTriangleCache.cpp:568
					MaskScalar lIsTri2Nearest;

					rw::math::vpu::And(/* parameters */);
				}
				rw::math::vpu::CrossXYZ(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				{
					// BrnCrashTriangleCache.cpp:586
					MaskScalar lIsTri3Nearest;

					rw::math::vpu::And(/* parameters */);
				}
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::CrossXYZ(/* parameters */);
				rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
				{
					// BrnCrashTriangleCache.cpp:604
					MaskScalar lIsTri4Nearest;

					rw::math::vpu::And(/* parameters */);
				}
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::CrossXYZ(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::CrossXYZ(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				{
					{
					}
				}
				rw::math::vpu::Normalize(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				VecFloat<VectorAxisY>(/* parameters */);
				rw::math::vpu::CompLessThan(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				{
					{
					}
				}
				{
					{
					}
				}
				{
					{
					}
				}
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::CompLessThan(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::CompLessThan(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::CompLessThan(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				rw::math::vpu::Select(/* parameters */);
				rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
			}
		}
	}
}

// BrnCrashTriangleCache.cpp:411
void BrnEffects::BrnCrashTriangleCache::InsertTriangleIntoCache(BrnCrashTrianglePackedFormat *  lpPackedTriangle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashTriangleCache.cpp:414
		BrnCrashTrianglePackedFormat * lpNextTriangleToAdd;

		// BrnCrashTriangleCache.cpp:417
		Mask4 lMask;

	}
}

// BrnCrashTriangleCache.cpp:343
void BrnEffects::BrnCrashTriangleCache::CheckForDuplicateTriangles(BrnCrashTrianglePackedFormat *  lpaPackedTriangles, bool *  lpbAddTriangleBool) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashTriangleCache.cpp:345
		Mask4[4] laResultsMask;

		// BrnCrashTriangleCache.cpp:356
		int32_t lnNumberPackedTriangles;

		rw::math::vpu::Mask4::Mask4(/* parameters */);
		rw::math::vpu::Mask4::Mask4(/* parameters */);
		rw::math::vpu::Mask4::Mask4(/* parameters */);
		rw::math::vpu::Mask4::Mask4(/* parameters */);
		{
		}
		{
		}
		{
		}
		{
		}
		{
			// BrnCrashTriangleCache.cpp:361
			int32_t lnCacheLoop;

			rw::math::vpu::CompEqual(/* parameters */);
			rw::math::vpu::Or(/* parameters */);
			rw::math::vpu::Or(/* parameters */);
			rw::math::vpu::Or(/* parameters */);
			rw::math::vpu::Or(/* parameters */);
		}
		rw::math::vpu::CompAnyTrue(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::CompAnyTrue(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::CompAnyTrue(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::CompAnyTrue(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
	InsertTriangleIntoCache(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	InsertTriangleIntoCache(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	InsertTriangleIntoCache(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	InsertTriangleIntoCache(/* parameters */);
}

// BrnCrashTriangleCache.cpp:117
void BrnEffects::BrnCrashTriangleCache::CalculateHashForPackedTriangle(BrnCrashTrianglePackedFormat *  lpPackedTriangle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashTriangleCache.cpp:119
		Vector4 lVec4AddResult1;

		// BrnCrashTriangleCache.cpp:120
		Vector4 lVec4AddResult2;

		// BrnCrashTriangleCache.cpp:121
		Vector4 lVec4AddResult3;

		// BrnCrashTriangleCache.cpp:122
		Vector4 lVec4AddResult4;

		// BrnCrashTriangleCache.cpp:124
		Vector4 lVec4AddResult5;

		// BrnCrashTriangleCache.cpp:125
		Vector4 lVec4AddResult6;

		// BrnCrashTriangleCache.cpp:127
		Vector4 lVecFinalResult;

	}
}

// BrnCrashTriangleCache.cpp:163
void BrnEffects::BrnCrashTriangleCache::AddTriangles(const Triangle4 *  lpInTriangles, uint32_t  lnNum4Triangles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashTriangleCache.cpp:165
		const Triangle4 * lpIncomingTriangles;

		// BrnCrashTriangleCache.cpp:166
		BrnCrashTrianglePackedFormat[4] laPackedTriangles;

		// BrnCrashTriangleCache.cpp:167
		bool[4] labMaskValues;

		{
			// BrnCrashTriangleCache.cpp:170
			uint32_t lnTriangleLoop;

		}
	}
	{
		// BrnCrashTriangleCache.cpp:235
		VectorIntrinsicUnion lSurfaceTagsIntrinsic;

		// BrnCrashTriangleCache.cpp:236
		CollisionTag lCollisionTag;

		// BrnCrashTriangleCache.cpp:237
		uint32_t luSurfaceTag;

		// BrnCrashTriangleCache.cpp:238
		uint16_t luMaterialId;

		// BrnCrashTriangleCache.cpp:239
		uint16_t luGroupId;

		// BrnCrashTriangleCache.cpp:240
		uint8_t lu8SurfaceId;

		rw::math::vpu::Mask4::GetX(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::Mask4::GetY(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::Mask4::GetZ(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::Mask4::GetW(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::Vector4::GetComponent(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CalculateHashForPackedTriangle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CalculateHashForPackedTriangle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CalculateHashForPackedTriangle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CalculateHashForPackedTriangle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
}

// BrnCrashTriangleCache.cpp:87
void BrnEffects::BrnCrashTriangleCache::ResetAndPrimeCache(const Triangle4 *const  lpInTriangles, const uint32_t  lnNum4Triangles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

