// CgsSphere.h:25
namespace CgsGeometric {
	// Declaration
	struct Frustum {
		// CgsFrustum.h:50
		enum PlaneId {
			PlaneLeft = 0,
			PlaneTop = 1,
			PlaneRight = 2,
			PlaneBottom = 3,
			PlaneFar = 4,
			PlaneNear = 5,
		}

	}

}

// CgsFrustum.h:46
struct CgsGeometric::Frustum {
private:
	// CgsFrustum.h:159
	Vector4[8] maSwizzledPlanes;

public:
	// CgsFrustum.h:86
	Plane GetPlane(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:91
	void SetPlane(CgsGeometric::Frustum::PlaneId, const Plane &);

	// CgsFrustum.h:95
	Plane GetPlaneByIndex(uint32_t) const;

	// CgsFrustum.h:100
	void SetPlaneByIndex(uint32_t, const Plane &);

	// CgsFrustum.h:104
	Vector3Plus GetPlaneVec3Plus(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:108
	Vector3Plus GetPlaneByIndexVec3Plus(uint32_t) const;

	// CgsFrustum.h:116
	void SetFromRwFrustum(const Frustum &);

	// CgsFrustum.h:120
	void DebugRender() const;

	// CgsFrustum.h:123
	void DebugRenderCustomPlanes() const;

	// CgsFrustum.h:128
	void CalcVertices(Vector3 *) const;

	// CgsFrustum.h:134
	// Declaration
	bool IsSphereInFrustum() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSphere.h:65
		typedef const Sphere & SphereArg;

	}

private:
	// CgsFrustum.h:141
	Vector4 PlaneToVector(const Plane &);

	// CgsFrustum.h:145
	Plane VectorToPlane(const rw::math::vpu::Vector4 &) const;

	// CgsFrustum.h:149
	uint32_t PlaneIdToIndex(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:156
	bool IntersectionOf3Planes(Plane, Plane, Plane, Vector3 &) const;

}

// CgsTriangle4.h:25
namespace CgsGeometric {
	// Declaration
	struct Frustum {
		// CgsFrustum.h:50
		enum PlaneId {
			PlaneLeft = 0,
			PlaneTop = 1,
			PlaneRight = 2,
			PlaneBottom = 3,
			PlaneFar = 4,
			PlaneNear = 5,
		}

	}

}

// CgsFrustum.h:46
struct CgsGeometric::Frustum {
private:
	// CgsFrustum.h:159
	Vector4[8] maSwizzledPlanes;

public:
	// CgsFrustum.h:86
	Plane GetPlane(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:91
	void SetPlane(CgsGeometric::Frustum::PlaneId, const Plane &);

	// CgsFrustum.h:95
	Plane GetPlaneByIndex(uint32_t) const;

	// CgsFrustum.h:100
	void SetPlaneByIndex(uint32_t, const Plane &);

	// CgsFrustum.h:104
	Vector3Plus GetPlaneVec3Plus(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:108
	Vector3Plus GetPlaneByIndexVec3Plus(uint32_t) const;

	// CgsFrustum.h:116
	void SetFromRwFrustum(const Frustum &);

	// CgsFrustum.h:120
	void DebugRender() const;

	// CgsFrustum.h:123
	void DebugRenderCustomPlanes() const;

	// CgsFrustum.h:128
	void CalcVertices(Vector3 *) const;

	// CgsFrustum.h:134
	// Declaration
	bool IsSphereInFrustum(SphereArg) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSphere.h:65
		typedef const Sphere & SphereArg;

	}

private:
	// CgsFrustum.h:141
	Vector4 PlaneToVector(const Plane &);

	// CgsFrustum.h:145
	Plane VectorToPlane(const rw::math::vpu::Vector4 &) const;

	// CgsFrustum.h:149
	uint32_t PlaneIdToIndex(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:156
	bool IntersectionOf3Planes(Plane, Plane, Plane, Vector3 &) const;

}

// CgsBox.h:26
namespace CgsGeometric {
	// Declaration
	struct Frustum {
		// CgsFrustum.h:50
		enum PlaneId {
			PlaneLeft = 0,
			PlaneTop = 1,
			PlaneRight = 2,
			PlaneBottom = 3,
			PlaneFar = 4,
			PlaneNear = 5,
		}

	}

}

// CgsFrustum.h:46
struct CgsGeometric::Frustum {
private:
	// CgsFrustum.h:159
	Vector4[8] maSwizzledPlanes;

public:
	// CgsFrustum.h:86
	Plane GetPlane(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:91
	void SetPlane(CgsGeometric::Frustum::PlaneId, const Plane &);

	// CgsFrustum.h:95
	Plane GetPlaneByIndex(uint32_t) const;

	// CgsFrustum.h:100
	void SetPlaneByIndex(uint32_t, const Plane &);

	// CgsFrustum.h:104
	Vector3Plus GetPlaneVec3Plus(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:108
	Vector3Plus GetPlaneByIndexVec3Plus(uint32_t) const;

	// CgsFrustum.h:116
	void SetFromRwFrustum(const Frustum &);

	// CgsFrustum.h:120
	void DebugRender() const;

	// CgsFrustum.h:123
	void DebugRenderCustomPlanes() const;

	// CgsFrustum.h:128
	void CalcVertices(Vector3 *) const;

	// CgsFrustum.h:134
	bool IsSphereInFrustum(InEventTriangleCollisionSphereTest::SphereArg) const;

private:
	// CgsFrustum.h:141
	Vector4 PlaneToVector(const Plane &);

	// CgsFrustum.h:145
	Plane VectorToPlane(const rw::math::vpu::Vector4 &) const;

	// CgsFrustum.h:149
	uint32_t PlaneIdToIndex(CgsGeometric::Frustum::PlaneId) const;

	// CgsFrustum.h:156
	bool IntersectionOf3Planes(Plane, Plane, Plane, Vector3 &) const;

}

// CgsSphere.h:25
namespace CgsGeometric {
	// Declaration
	struct Frustum {
		// CgsFrustum.h:50
		enum PlaneId {
			PlaneLeft = 0,
			PlaneTop = 1,
			PlaneRight = 2,
			PlaneBottom = 3,
			PlaneFar = 4,
			PlaneNear = 5,
		}

		// CgsFrustum.h:72
		enum Vertices {
			VertNearBottomLeft = 0,
			VertNearBottomRight = 1,
			VertNearTopLeft = 2,
			VertNearTopRight = 3,
			VertFarBottomLeft = 4,
			VertFarBottomRight = 5,
			VertFarTopLeft = 6,
			VertFarTopRight = 7,
		}

	}

}

// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// Declaration
	struct Frustum {
		// CgsFrustum.h:50
		enum PlaneId {
			PlaneLeft = 0,
			PlaneTop = 1,
			PlaneRight = 2,
			PlaneBottom = 3,
			PlaneFar = 4,
			PlaneNear = 5,
		}

	}

}

