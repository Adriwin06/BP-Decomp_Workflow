// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsFrustum.cpp:301
	const VecFloat K_VERY_SMALL;

}

// CgsFrustum.cpp:53
void CgsGeometric::Frustum::PlaneToVector(const const Plane &  lPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:55
		const const rw::math::vpu::Vector4 & lPlaneVec;

		rw::math::vpu::operator-(/* parameters */);
	}
}

// CgsFrustum.cpp:61
void CgsGeometric::Frustum::VectorToPlane(const const rw::math::vpu::Vector4 &  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:63
		Vector4 lVecNegated;

		rw::math::vpu::operator-(/* parameters */);
	}
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
}

// CgsFrustum.cpp:70
void CgsGeometric::Frustum::SetFromRwFrustum(const const Frustum &  lFrustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:73
		Vector4[6] laPlaneVec;

		Set<VectorAxisY, VectorAxisY, VectorAxisY, VectorAxisY>(/* parameters */);
		Set<VectorAxisX, VectorAxisX, VectorAxisX, VectorAxisX>(/* parameters */);
		Set<VectorAxisW, VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
		Set<VectorAxisX, VectorAxisX, VectorAxisX, VectorAxisX>(/* parameters */);
		Set<VectorAxisW, VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
		Set<VectorAxisY, VectorAxisY, VectorAxisY, VectorAxisY>(/* parameters */);
		Set<VectorAxisZ, VectorAxisZ, VectorAxisZ, VectorAxisZ>(/* parameters */);
	}
	Set<VectorAxisZ, VectorAxisZ, VectorAxisZ, VectorAxisZ>(/* parameters */);
}

// CgsFrustum.cpp:307
void CgsGeometric::Frustum::IntersectionOf3Planes(Plane  lPlane0, Plane  lPlane1, Plane  lPlane2, const Vector3 &  lIntersectionPointOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:310
		Vector3 lN2xN3;

		// CgsFrustum.cpp:311
		VecFloat lDenominator;

		rw::math::vpu::Cross(/* parameters */);
	}
	{
		// CgsFrustum.cpp:318
		Vector3 lNumerator;

		rw::math::vpu::operator/(/* parameters */);
	}
	rw::collision::Plane::GetDistance(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::collision::Plane::GetDistance(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::collision::Plane::GetDistance(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// CgsFrustum.cpp:226
void CgsGeometric::Frustum::DebugRenderCustomPlanes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:228
		DebugInterface lDebugInterface;

		// CgsFrustum.cpp:229
		const DebugRender & lDebugRender;

		// CgsFrustum.cpp:230
		Vector3[42] laIntersectionPoints;

		// CgsFrustum.cpp:231
		Plane[8] laPlanes;

		// CgsFrustum.cpp:233
		int32_t liNumIntersectionPoints;

		// CgsFrustum.cpp:234
		uint32_t suCount;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	{
		// CgsFrustum.cpp:239
		uint32_t luI;

		GetPlaneByIndex(/* parameters */);
		{
		}
		{
		}
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
		// CgsFrustum.cpp:245
		uint32_t luI;

		{
			// CgsFrustum.cpp:248
			uint32_t luJ;

			{
				// CgsFrustum.cpp:251
				uint32_t luK;

				{
					// CgsFrustum.cpp:258
					Vector3 lIPoint;

					{
						// CgsFrustum.cpp:266
						bool lbIsInHull;

						// CgsFrustum.cpp:281
						bool sbCheckIfInHull;

						{
							// CgsFrustum.cpp:267
							uint32_t luPlane;

							{
								// CgsFrustum.cpp:274
								VecFloat lDist;

								rw::collision::Plane::GetNormal(/* parameters */);
								rw::collision::Plane::GetDistance(/* parameters */);
								rw::math::vpu::operator-(/* parameters */);
								rw::math::vpu::Dot(/* parameters */);
								{
								}
								rw::math::vpu::VecFloat::VecFloat(/* parameters */);
								rw::math::vpu::operator<(/* parameters */);
							}
						}
					}
				}
			}
			{
				// CgsFrustum.cpp:290
				int32_t liLine;

			}
		}
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// CgsFrustum.cpp:144
void CgsGeometric::Frustum::DebugRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:146
		DebugInterface lDebugInterface;

		// CgsFrustum.cpp:147
		const DebugRender & lDebugRender;

		// CgsFrustum.cpp:150
		Vector3 lLBF;

		// CgsFrustum.cpp:151
		Vector3 lRBF;

		// CgsFrustum.cpp:152
		Vector3 lLTF;

		// CgsFrustum.cpp:153
		Vector3 lRTF;

		// CgsFrustum.cpp:155
		Vector3 lLBK;

		// CgsFrustum.cpp:156
		Vector3 lRBK;

		// CgsFrustum.cpp:157
		Vector3 lLTK;

		// CgsFrustum.cpp:158
		Vector3 lRTK;

		// CgsFrustum.cpp:177
		Vector3[6] laCentrePoints;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
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
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// CgsFrustum.cpp:186
		uint32_t luI;

		{
			// CgsFrustum.cpp:188
			Vector3 lLineStart;

			// CgsFrustum.cpp:189
			Vector3 lLineEnd;

		}
	}
	rw::math::vpu::operator+(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// CgsFrustum.cpp:197
void CgsGeometric::Frustum::CalcVertices(Vector3 *  lpPointsOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFrustum.cpp:200
		Vector3Plus lPlaneLeft;

		// CgsFrustum.cpp:201
		Vector3Plus lPlaneRight;

		// CgsFrustum.cpp:202
		Vector3Plus lPlaneBottom;

		// CgsFrustum.cpp:203
		Vector3Plus lPlaneTop;

		// CgsFrustum.cpp:204
		Vector3Plus lPlaneNear;

		// CgsFrustum.cpp:205
		Vector3Plus lPlaneFar;

		GetPlaneVec3Plus(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	{
		{
			{
			}
		}
	}
	GetPlaneVec3Plus(/* parameters */);
	GetPlaneVec3Plus(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetPlaneVec3Plus(/* parameters */);
	GetPlaneVec3Plus(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	GetPlaneVec3Plus(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
	}
	{
	}
	{
	}
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	{
	}
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	{
	}
	{
	}
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	Vector3<VectorAxisW, VectorAxisW, VectorAxisW>(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
}

