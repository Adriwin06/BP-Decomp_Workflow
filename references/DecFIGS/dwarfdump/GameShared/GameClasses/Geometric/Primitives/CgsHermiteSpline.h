// CgsHermiteSpline.h:28
namespace CgsGeometric {
	struct HermiteSpline;

	struct Sphere;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct AxisAlignedBox;

	struct AxisAlignedBox4;

	struct PolygonSoupSpatialMap;

	struct Line;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupListSpatialMap;

	struct PolygonSoupList;

	struct PolygonSoupTestPerformance;

	struct IntersectLinePolygonSoupResult;

	struct SweptSphere;

	struct Triangle;

	struct IntermediateTriangles;

	struct Box;

	void IntersectLinePolySoupTriangleDoubleSided(Vector3, Vector3, Vector3, Vector3, Vector3, VecFloat &);

	void ClipBoxEdgeAgainstTriangleUnoptimized(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 &);

	void ClipBoxEdgeAgainstTriangle(const TriangleData &, const BoxVertexData &, const BoxVertexData &, Vector3 &);

	void Is2DPointInTriangle(Vector2, Vector2, Vector2, Vector2, Vector2, Vector2, Vector2);

	void Intersect2DCircleWithTriangle(Vector2, VecFloat, Vector2, Vector2, Vector2, Vector2, Vector2, Vector2, VecFloat, VecFloat, VecFloat, Vector2 &);

	void Is2DPointInTriangleSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic);

	void Intersect2DCircleWithTriangleSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void TestSphereTriangle4SOA(SphereArg, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam);

	void TestSphereTriangle4(SphereArg, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam);

	void PolySoupCopyTriangleBufferIntoTriangle4(Triangle4 *, IntermediateTriangles *, int32_t);

	void MergeFloatVectors(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic);

	void PolySoupFinishTriangleBuffer(Triangle4 *, int32_t, IntermediateTriangles *, int32_t &, int32_t &);

	void UnpackPolygonSoupVertices(Vector3 *, PolygonSoupArg);

	void ProjectPointOntoPlaneReturnDist4(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void ClipPointOntoPlaneInverse4(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void ClipPointOntoLine4(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void IntersectTriangle4Sphere_HackyBurnoutVersion(SphereArg, Triangle4Arg, VecFloat, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &);

	void IntersectTriangle4Sphere(SphereArg, Triangle4Arg, VecFloat, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &);

	void Transform3DTo2DSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void Transform3DVectorTo2DSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void Intersect2DSweptCircleWithVertexAndEdgeSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void SolveSweptCircleEquationSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void IsBetween0And1SOA(VectorIntrinsicUnion::VectorIntrinsic);

	void Transform2DTo3DSOA(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void IntersectTriangle4SweptSphere(SweptSphereArg, Triangle4Arg, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &);

	void SolveSweptCircleEquation(Vector2, Vector2, VecFloat, VecFloat, VecFloat, VecFloat &, VecFloat &);

	void IsBetween0And1(VecFloat);

	void Intersect2DSweptCircleWithVertexAndEdge(Vector2, Vector2, VecFloat, VecFloat, VecFloat, Vector2, Vector2, VecFloat, VecFloat &, Vector2 &);

	void IntersectTriangleSweptSphere(SweptSphereArg, TriangleArg, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &);

	void AddIfValid(MaskScalar &, MaskScalar &, Vector3 &, Vector3 &, MaskScalar, Vector3);

	void ClipTriEdgeAgainstBox(Vector3 *, MaskScalar *, AxisAlignedBoxArg, Vector3, Vector3);

	void TestAxisAlignedBoxAxisAlignedBox(AxisAlignedBoxArg, AxisAlignedBoxArg);

	void InternalTestPointAxisAlignedBox(Vector3, Vector3, Vector3);

	void TestLineAxisAlignedBox(AxisAlignedBoxArg, Vector3, Vector3, Vector3);

	void ClipTriEdgeAgainstBoxUnoptimized(Vector3 *, AxisAlignedBoxArg, Vector3, Vector3);

	void ExtractTriangle4ListIntersectingSphere(PolygonSoupArg, SphereArg, Triangle4 *, int32_t, int32_t *);

	void TestSpherePolygonSoup(PolygonSoupArg, SphereArg);

	void IntersectLinePolySoupTriangleSingleSided4(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, VecFloat &, VecFloat &, VecFloat &, VecFloat &);

	void TestLinePolygonSoupSingleSided(PolygonSoupArg, Vector3, Vector3);

	void TestLinePolygonSoupDoubleSided(PolygonSoupArg, Vector3, Vector3);

	void IntersectLinePolygonSoupNearestUpdateOutputValues(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &, VectorIntrinsicUnion::VectorIntrinsic &);

	void IntersectLinePolygonSoupNearestSingleSided(PolygonSoupArg, Vector3, Vector3, IntersectLinePolygonSoupResult *);

	void IntersectLinePolygonSoupNearestDoubleSided(PolygonSoupArg, Vector3, Vector3, IntersectLinePolygonSoupResult *);

	void IntersectLinePolygonSoupSingleSided(PolygonSoupArg, Vector3, Vector3, IntersectLinePolygonSoupResult *, int32_t);

	void IntersectLinePolygonSoupDoubleSided(PolygonSoupArg, Vector3, Vector3, IntersectLinePolygonSoupResult *, int32_t);

}

// CgsHermiteSpline.h:46
struct CgsGeometric::HermiteSpline {
private:
	// CgsHermiteSpline.h:68
	extern const rw::math::vpu::Matrix44 kBasis;

	// CgsHermiteSpline.h:69
	extern const rw::math::vpu::Matrix44 kTangentBasis;

	// CgsHermiteSpline.h:71
	Matrix44 mMatrix;

	// CgsHermiteSpline.h:72
	Matrix44 mTangentMatrix;

public:
	// CgsHermiteSpline.h:53
	void Construct(Vector3, Vector3, Vector3, Vector3);

	// CgsHermiteSpline.h:57
	Vector3 GetPosition(float32_t) const;

	// CgsHermiteSpline.h:61
	Vector3 GetTangent(float32_t) const;

	// CgsHermiteSpline.h:65
	float32_t GetLength(int32_t) const;

}

