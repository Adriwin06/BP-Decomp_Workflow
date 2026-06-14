// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// trianglequery.h:80
		const VecFloat RTINTSECEPSILON_VecFloat;

		// trianglequery.h:81
		const VecFloat RTINTSECEDGEEPS_VecFloat;

	}

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// trianglequery.h:838
		extern Mask4 TriangleLineSegIntersect(Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector3, Vector3, Vector4 &, Vector4 &, Vector4 &, Vector4 &);

		// trianglequery.h:126
		extern void CrossSoA(Vector3, Vector4, Vector4, Vector4, Vector4 &, Vector4 &, Vector4 &);

		// trianglequery.h:85
		extern Vector4 DotSoA(Vector4, Vector4, Vector4, Vector4, Vector4, Vector4);

		// trianglequery.h:106
		extern void CrossSoA(Vector4, Vector4, Vector4, Vector4, Vector4, Vector4, Vector4 &, Vector4 &, Vector4 &);

		// trianglequery.h:95
		extern Vector4 DotSoA(Vector3, Vector4, Vector4, Vector4);

		// trianglequery.h:80
		const VecFloat RTINTSECEPSILON_VecFloat;

		// trianglequery.h:81
		const VecFloat RTINTSECEDGEEPS_VecFloat;

	}

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// trianglequery.h:252
		extern RwBool TriangleLineSegIntersect(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 &, VecFloat &, Vector3 &);

		// trianglequery.h:169
		extern MaskScalar TriangleLineSegIntersect(Vector3, Vector3, Vector3, Vector3, Vector3, VecFloat &, VecFloat &, VecFloat &, VecFloat &);

		// trianglequery.h:80
		const VecFloat RTINTSECEPSILON_VecFloat;

		// trianglequery.h:81
		const VecFloat RTINTSECEDGEEPS_VecFloat;

	}

}

