// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsCamera.cpp:27
	const int KN32_PERSPECTIVE_INTERSECTION_POSITIVE_X = 1;

	// CgsCamera.cpp:28
	const int KN32_PERSPECTIVE_INTERSECTION_NEGATIVE_X = 2;

	// CgsCamera.cpp:29
	const int KN32_PERSPECTIVE_INTERSECTION_POSITIVE_Y = 4;

	// CgsCamera.cpp:30
	const int KN32_PERSPECTIVE_INTERSECTION_NEGATIVE_Y = 8;

	// CgsCamera.cpp:31
	const int KN32_PERSPECTIVE_INTERSECTION_POSITIVE_Z = 16;

	// CgsCamera.cpp:32
	const int KN32_PERSPECTIVE_INTERSECTION_NEGATIVE_Z = 32;

}

// CgsCamera.cpp:67
void CgsGraphics::Camera::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCamera.cpp:73
void CgsGraphics::Camera::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCamera.cpp:79
void CgsGraphics::Camera::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCamera.cpp:85
void CgsGraphics::Camera::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCamera.cpp:92
void CgsGraphics::Camera::Clone(const Camera &  lClonedCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCamera.cpp:508
void CgsGraphics::Camera::GetOutCode(const rw::math::vpu::Vector4  lPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:510
		int lnOutCode;

		rw::math::vpu::operator><VectorAxisX, VectorAxisW>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisX, VectorAxisW>(/* parameters */);
		rw::math::vpu::operator><VectorAxisY, VectorAxisW>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY, VectorAxisW>(/* parameters */);
		rw::math::vpu::operator><VectorAxisZ, VectorAxisW>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisZ, VectorAxisW>(/* parameters */);
	}
}

// CgsCamera.cpp:160
void CgsGraphics::Camera::GetViewProjectionMatrixModified() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsCamera.cpp:187
	Matrix44 & lViewProjectionMatrixModified;

	{
		// CgsCamera.cpp:187
		Matrix44 lViewProjectionMatrixModified;

		rw::math::vpu::IsSimilar(/* parameters */);
	}
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::Matrix44::GetXColumn(/* parameters */);
	rw::math::vpu::Matrix44::SetX(/* parameters */);
	rw::math::vpu::Matrix44::GetYColumn(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetZColumn(/* parameters */);
	{
	}
	{
	}
	{
	}
}

// CgsCamera.cpp:456
void CgsGraphics::Camera::GetFrustumPerspectiveVertices(Vector3 *  frustumVerts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:461
		Matrix44Affine transform;

		// CgsCamera.cpp:464
		float32_t lrNear;

		// CgsCamera.cpp:465
		float32_t lrFar;

		// CgsCamera.cpp:467
		float32_t lrTanHalfFovX;

		// CgsCamera.cpp:468
		float32_t lrTanHalfFovY;

		// CgsCamera.cpp:470
		Vector3 lRightVec;

		// CgsCamera.cpp:471
		Vector3 lUpVec;

		// CgsCamera.cpp:482
		Vector3 tmpVec3;

		// CgsCamera.cpp:483
		uint32_t index;

		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		GetTanHalfFovHorizontal(/* parameters */);
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	GetTanHalfFovVertical(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	rw::math::vpu::operator*=(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// CgsCamera.cpp:562
void CgsGraphics::Camera::PerspectiveClip(const rw::math::vpu::Vector4  lMinimum, const rw::math::vpu::Vector4  lMaximum, Matrix44 &  lObjectToPerspective) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:564
		int32_t i;

		// CgsCamera.cpp:565
		int32_t lnOutCode;

		// CgsCamera.cpp:566
		int32_t lnIntersectionMask;

		// CgsCamera.cpp:567
		int32_t lnOuterMask;

		// CgsCamera.cpp:569
		Vector4 lPoint;

		// CgsCamera.cpp:570
		Vector4 lClip;

		rw::math::vpu::operator+<VectorAxisZ>(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	{
	}
	rw::math::vpu::Transform(/* parameters */);
}

// CgsCamera.cpp:154
void CgsGraphics::Camera::UpdateViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// CgsCamera.cpp:620
void CgsGraphics::Camera::UpdateOrthogonalProjectionMatrix(float32_t  lfOrthoScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:622
		float32_t lZProjScale;

		// CgsCamera.cpp:623
		float32_t lWProjScale;

		// CgsCamera.cpp:625
		float32_t lScaleX;

		// CgsCamera.cpp:626
		float32_t lScaleY;

		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// CgsCamera.cpp:133
void CgsGraphics::Camera::UpdatePerspectiveProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:141
		float32_t zProjScale;

		// CgsCamera.cpp:142
		float32_t wProjScale;

		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// CgsCamera.cpp:111
void CgsGraphics::Camera::SetPerspectiveProjectionMatrixRightHanded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:120
		float32_t zProjScale;

		// CgsCamera.cpp:121
		float32_t wProjScale;

		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// CgsCamera.cpp:382
void CgsGraphics::Camera::GetFrustumParallel(const Frustum &  frustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:387
		Matrix44Affine transform;

		// CgsCamera.cpp:389
		float32_t lrNear;

		// CgsCamera.cpp:390
		float32_t lrFar;

		// CgsCamera.cpp:393
		Vector3[8] frustumVerts;

		// CgsCamera.cpp:395
		float32_t lfViewWindowX;

		// CgsCamera.cpp:396
		float32_t lfViewWindowY;

		// CgsCamera.cpp:397
		Vector3 lRightVec;

		// CgsCamera.cpp:398
		Vector3 lUpVec;

		// CgsCamera.cpp:399
		Vector3 lAtVec;

		// CgsCamera.cpp:409
		float32_t lfNearToFar;

		// CgsCamera.cpp:411
		uint32_t index;

		// CgsCamera.cpp:428
		Vector3 line1;

		// CgsCamera.cpp:429
		Vector3 line2;

		// CgsCamera.cpp:430
		Vector3 cross;

		rw::math::vpu::Inverse(/* parameters */);
	}
	{
		{
			{
				{
				}
			}
		}
	}
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	{
	}
	GetNearClipPlane(/* parameters */);
	GetFarClipPlane(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
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
	rw::collision::Plane::Plane(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
}

// CgsCamera.cpp:265
void CgsGraphics::Camera::GetCgsFrustumParallel(const Frustum &  lFrustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:267
		Frustum lRwFrustum;

		rw::collision::Frustum::Frustum(/* parameters */);
	}
}

// CgsCamera.cpp:279
void CgsGraphics::Camera::GetFrustumPerspective(const Frustum &  frustum, bool  lbFlipped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:284
		Matrix44Affine transform;

		// CgsCamera.cpp:287
		Vector3[8] frustumVerts;

		// CgsCamera.cpp:289
		float32_t lrNear;

		// CgsCamera.cpp:290
		float32_t lrFar;

		// CgsCamera.cpp:300
		float32_t lrTanHalfFovX;

		// CgsCamera.cpp:301
		float32_t lrTanHalfFovY;

		// CgsCamera.cpp:303
		Vector3 lRightVec;

		// CgsCamera.cpp:304
		Vector3 lUpVec;

		// CgsCamera.cpp:315
		Vector3 tmpVec3;

		// CgsCamera.cpp:316
		uint32_t index;

		// CgsCamera.cpp:340
		Vector3 line1;

		// CgsCamera.cpp:341
		Vector3 line2;

		// CgsCamera.cpp:342
		Vector3 cross;

		rw::math::vpu::Inverse(/* parameters */);
	}
	{
		{
			{
				{
				}
			}
		}
	}
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	GetNearClipPlane(/* parameters */);
	GetFarClipPlane(/* parameters */);
	GetTanHalfFovVertical(/* parameters */);
	GetTanHalfFovHorizontal(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
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
	rw::collision::Plane::Plane(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::collision::Plane::Plane(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	rw::collision::Frustum::SetPlane(/* parameters */);
	{
		// CgsCamera.cpp:368
		uint32_t luI;

		{
			// CgsCamera.cpp:371
			Plane lPlane;

			rw::collision::Plane::GetDistance(/* parameters */);
			rw::collision::Frustum::GetPlane(/* parameters */);
		}
		rw::collision::Plane::SetDistance(/* parameters */);
		{
		}
		rw::collision::Plane::SetNormal(/* parameters */);
		rw::collision::Frustum::SetPlane(/* parameters */);
	}
}

// CgsCamera.cpp:246
void CgsGraphics::Camera::GetCgsFrustum(const Frustum &  lFrustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:248
		Frustum lRwFrustum;

		rw::collision::Frustum::Frustum(/* parameters */);
		GetFrustum(/* parameters */);
	}
}

// CgsCamera.cpp:256
void CgsGraphics::Camera::GetCgsFrustumPerspective(const Frustum &  lFrustum, bool  lbFlipped) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCamera.cpp:258
		Frustum lRwFrustum;

		rw::collision::Frustum::Frustum(/* parameters */);
	}
}

// CgsCamera.cpp:208
void CgsGraphics::Camera::LookAt(const rw::math::vpu::Vector3  lEyePosition, const rw::math::vpu::Vector3  lUpVector, const rw::math::vpu::Vector3  lTargetPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3.h:127
		typedef Vector3Template<double> Vector3_64;

	}
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::operator-<double>(/* parameters */);
	rw::math::fpu::Normalize<double>(/* parameters */);
	rw::math::fpu::Sqrt<double>(/* parameters */);
	rw::math::fpu::Mult<double>(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::GetVector4_64_WAxis(/* parameters */);
	rw::math::fpu::Cross<double>(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::SetZColumn(/* parameters */);
	rw::math::fpu::Normalize<double>(/* parameters */);
	rw::math::fpu::Mult<double>(/* parameters */);
	rw::math::fpu::Cross<double>(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::SetXColumn(/* parameters */);
	rw::math::fpu::Normalize<double>(/* parameters */);
	rw::math::fpu::Mult<double>(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::SetYColumn(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::SetWColumn(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::GetY(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::GetZ(/* parameters */);
	rw::math::fpu::Matrix44Template<double>::GetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetX(/* parameters */);
}

// CgsCamera.cpp:55
void CgsGraphics::Camera::Construct(float32_t  lFovHorizontal, float32_t  lAspectRatio, float32_t  lNearClipPlane, float32_t  lFarClipPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFovHorizontal(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::ATan(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_ctf(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	std(/* parameters */);
	vec_andc(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
}

// CgsCamera.cpp:45
void CgsGraphics::Camera::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

