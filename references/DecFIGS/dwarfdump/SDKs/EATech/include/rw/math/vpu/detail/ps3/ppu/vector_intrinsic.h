// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// vector_intrinsic.h:18
extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

// vector_intrinsic.h:19
extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

// vector_intrinsic.h:20
extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

// vector_intrinsic.h:21
extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

// vector_intrinsic.h:22
extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

// vector_intrinsic.h:23
extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

// vector_intrinsic.h:24
extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

// vector_intrinsic.h:25
extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

// vector_intrinsic.h:26
extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

// vector_intrinsic.h:27
extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

// vector_intrinsic.h:28
extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

// vector_intrinsic.h:29
extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

// vector_intrinsic.h:30
extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

// vector_intrinsic.h:31
extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

// vector_intrinsic.h:32
extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

// vector_intrinsic.h:33
extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

// vector_intrinsic.h:37
extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

// vector_intrinsic.h:38
extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<Y0,Z0,X0,X0>;

				struct VectorPermuteConstant<Z0,X0,Y0,X0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask3;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,W1>;

				struct VectorPermuteConstant<W0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,X0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Y1>;

				struct VectorPermuteConstant<Y0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,Z1>;

				struct VectorPermuteConstant<Z0,Z1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,W0,W1>;

				struct VectorPermuteConstant<W0,W1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,Z1>;

				struct VectorPermuteConstant<Z0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<Y1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,Y1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,Y1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Z1>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X1,X1,X1,X0>;

				struct VectorPermuteConstant<Y0,Y1,Y1,Y1>;

				struct VectorPermuteConstant<W0,Z1,Y1,X0>;

				struct VectorPermuteConstant<Z1,Z0,Z1,Z1>;

				struct VectorPermuteConstant<Z1,W0,X1,Y0>;

				struct VectorPermuteConstant<W1,W1,W0,W1>;

				struct VectorPermuteConstant<Y1,X1,W0,Z0>;

				struct VectorPermuteConstant<X0,Y1,Z1,W1>;

				struct VectorPermuteConstant<X1,Y0,Z1,W1>;

				struct VectorPermuteConstant<X1,Y1,Z0,W1>;

				struct VectorPermuteConstant<X1,Y1,Z1,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void QuaternionFromMatrix33(Matrix33, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<Y0,Z0,W0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Z1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Z1>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X1,X1,X1,X0>;

				struct VectorPermuteConstant<Y0,Y1,Y1,Y1>;

				struct VectorPermuteConstant<W0,Z1,Y1,X0>;

				struct VectorPermuteConstant<Z1,Z0,Z1,Z1>;

				struct VectorPermuteConstant<Z1,W0,X1,Y0>;

				struct VectorPermuteConstant<W1,W1,W0,W1>;

				struct VectorPermuteConstant<Y1,X1,W0,Z0>;

				struct VectorPermuteConstant<Z0,W0,X0,Y0>;

				struct VectorPermuteConstant<X1,Y1,X0,Y0>;

				struct VectorPermuteConstant<Z0,W0,Z1,W1>;

				struct VectorPermuteConstant<X0,Y1,Z1,W1>;

				struct VectorPermuteConstant<X1,Y0,Z1,W1>;

				struct VectorPermuteConstant<X1,Y1,Z0,W1>;

				struct VectorPermuteConstant<X1,Y1,Z1,W0>;

				struct VectorPermuteConstant<X0,Z0,Y0,W0>;

				struct VectorPermuteConstant<Y0,Y1,Z1,W1>;

				struct VectorPermuteConstant<Y0,W0,X0,Z0>;

				struct VectorPermuteConstant<Y0,Y1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask2;

			struct Mask3;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

			void QuaternionFromMatrix33(Matrix33, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<Y0,Z0,X0,X0>;

				struct VectorPermuteConstant<Z0,X0,Y0,X0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Z1>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X1,X1,X1,X0>;

				struct VectorPermuteConstant<Y0,Y1,Y1,Y1>;

				struct VectorPermuteConstant<W0,Z1,Y1,X0>;

				struct VectorPermuteConstant<Z1,Z0,Z1,Z1>;

				struct VectorPermuteConstant<Z1,W0,X1,Y0>;

				struct VectorPermuteConstant<W1,W1,W0,W1>;

				struct VectorPermuteConstant<Y1,X1,W0,Z0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void QuaternionFromMatrix33(Matrix33, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<Z1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<X0,W1,Z0,W0>;

				struct VectorPermuteConstant<Y0,Z0,X0,X0>;

				struct VectorPermuteConstant<Z0,X0,Y0,X0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Z1,Y1,W0>;

				struct VectorPermuteConstant<X0,X0,Z0,X1>;

				struct VectorPermuteConstant<W0,Y0,X1,X1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<Y0,Z0,W0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<Z1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,Z1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<Y1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Z1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,Y1>;

				struct VectorPermuteConstant<Z0,W0,W0,W0>;

				struct VectorPermuteConstant<W0,X0,Y0,Z0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<Y0,Z0,W0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Z1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<X0,Y0,W1,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<Y0,Z0,X0,X0>;

				struct VectorPermuteConstant<Z0,X0,Y0,X0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,Z1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Z1>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X1,X1,X1,X0>;

				struct VectorPermuteConstant<Y0,Y1,Y1,Y1>;

				struct VectorPermuteConstant<W0,Z1,Y1,X0>;

				struct VectorPermuteConstant<Z1,Z0,Z1,Z1>;

				struct VectorPermuteConstant<Z1,W0,X1,Y0>;

				struct VectorPermuteConstant<W1,W1,W0,W1>;

				struct VectorPermuteConstant<Y1,X1,W0,Z0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void Inverse(Matrix44Affine, VecFloat &);

			void QuaternionFromMatrix33(Matrix33, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<Y0,X0,Z0,W0>;

				struct VectorPermuteConstant<Z0,X0,Y0,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask3;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<Y0,Z0,W0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<X0,Y0,W1,W0>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,X0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Y1>;

				struct VectorPermuteConstant<Y0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,Z1>;

				struct VectorPermuteConstant<Z0,Z1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,W0,W1>;

				struct VectorPermuteConstant<W0,W1,X0,X0>;

				struct VectorPermuteConstant<Y0,X0,Z0,W0>;

				struct VectorPermuteConstant<Z0,X0,Y0,W0>;

				struct VectorPermuteConstant<X0,Z0,Y0,W0>;

				struct VectorPermuteConstant<Y0,Z0,X0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W0>;

				struct VectorPermuteConstant<W0,X0,Y0,Z0>;

				struct VectorPermuteConstant<Z0,W0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z1,W1>;

				struct VectorPermuteConstant<X0,Y0,Z1,W1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask3;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,X0,Y0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<Y0,X1,X0,X0>;

				struct VectorPermuteConstant<Z0,Y1,X0,X0>;

				struct VectorPermuteConstant<X0,X0,Z0,X1>;

				struct VectorPermuteConstant<X0,X0,Y0,Z1>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<X1,X1,X1,X0>;

				struct VectorPermuteConstant<Y0,Y1,Y1,Y1>;

				struct VectorPermuteConstant<W0,Z1,Y1,X0>;

				struct VectorPermuteConstant<Z1,Z0,Z1,Z1>;

				struct VectorPermuteConstant<Z1,W0,X1,Y0>;

				struct VectorPermuteConstant<W1,W1,W0,W1>;

				struct VectorPermuteConstant<Y1,X1,W0,Z0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

			void QuaternionFromMatrix33(Matrix33, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,X1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,X1,W0>;

				struct VectorPermuteConstant<X0,X0,X0,Y1>;

				struct VectorPermuteConstant<Z0,W1,X0,X0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,Z1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Y1,W0>;

				struct VectorPermuteConstant<X0,Y0,W1,W0>;

				struct VectorPermuteConstant<X0,X1,X0,X0>;

				struct VectorPermuteConstant<Y0,X0,Z0,W0>;

				struct VectorPermuteConstant<Z0,X0,Y0,W0>;

				struct VectorPermuteConstant<Y0,Y1,X0,X0>;

				struct VectorPermuteConstant<Z0,Z1,X0,X0>;

				struct VectorPermuteConstant<W0,W1,X0,X0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask3;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct QuatPos;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector_intrinsic.h:17
			namespace detail {
				union VectorIntrinsicUnion {
				}
				struct VectorPermuteConstant<X0,Y1,X0,X0>;

				struct VectorPermuteConstant<X1,Y0,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z1,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,X1>;

				struct VectorPermuteConstant<X0,Y0,Z0,X0>;

				struct VectorPermuteConstant<X0,Y1,Z0,W0>;

				struct VectorPermuteConstant<X0,Y0,Z0,W1>;

				struct VectorPermuteConstant<X0,X0,X1,X1>;

				struct VectorPermuteConstant<Z0,Z1,Z0,Z1>;

				struct VectorPermuteConstant<Y0,Y0,Y1,X1>;

				struct VectorPermuteConstant<Z0,Z1,Y1,X0>;

				struct VectorPermuteConstant<Y1,Y1,Y0,W0>;

				struct VectorPermuteConstant<Z0,W0,X1,W1>;

				struct VectorPermuteConstant<Y0,X0,X1,X1>;

				struct VectorPermuteConstant<X0,Y0,X1,W1>;

				struct VectorPermuteConstant<W0,Z0,X1,X1>;

				// vector_intrinsic.h:18
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_xSigns;

				// vector_intrinsic.h:19
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_ySigns;

				// vector_intrinsic.h:20
				extern const VectorIntrinsicUnion::VectorIntrinsic gQuatFromMat_zSigns;

				// vector_intrinsic.h:21
				extern const VectorIntrinsicUnion::VectorIntrinsic gXYZMask;

				// vector_intrinsic.h:22
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV3;

				// vector_intrinsic.h:23
				extern const VectorIntrinsicUnion::VectorIntrinsic gGatherMostSignificantBytesV4;

				// vector_intrinsic.h:24
				extern const VectorIntrinsicUnion::VectorIntrinsic gSqrt2s;

				// vector_intrinsic.h:25
				extern const VectorIntrinsicUnion::VectorIntrinsic gIVector;

				// vector_intrinsic.h:26
				extern const VectorIntrinsicUnion::VectorIntrinsic gJVector;

				// vector_intrinsic.h:27
				extern const VectorIntrinsicUnion::VectorIntrinsic gKVector;

				// vector_intrinsic.h:28
				extern const VectorIntrinsicUnion::VectorIntrinsic gLVector;

				// vector_intrinsic.h:29
				extern const VectorIntrinsicUnion::VectorIntrinsic gCrossProductPermuteConstant;

				// vector_intrinsic.h:30
				extern const VectorIntrinsicUnion::VectorIntrinsic gHalfPI;

				// vector_intrinsic.h:31
				extern const VectorIntrinsicUnion::VectorIntrinsic gPI;

				// vector_intrinsic.h:32
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PI;

				// vector_intrinsic.h:33
				extern const VectorIntrinsicUnion::VectorIntrinsic g2PIReciprocal;

				// vector_intrinsic.h:36
				const size_t NUM_SWIZZLE_STORE_CONSTANTS = 16;

				// vector_intrinsic.h:37
				extern const VectorIntrinsicUnion::VectorIntrinsic[16] gSwizzleStoreConstants;

				// vector_intrinsic.h:38
				extern const VectorIntrinsicUnion::VectorIntrinsic[2] gBooleanConstants;

			}

			struct Vector2;

			struct Vector3;

			struct Vector3Plus;

			struct Vector4;

			struct Quaternion;

			struct Matrix33;

			struct Matrix44;

			struct Matrix44AffinePacked;

			struct Matrix44Affine;

			struct MaskScalar;

			struct Mask4;

			struct VecFloat;

			struct VecFloatRefIndex;

			struct VecFloatRef<VectorAxisX>;

			struct VecFloatRef<VectorAxisY>;

			struct VecFloatRef<VectorAxisZ>;

			struct VecFloatRef<VectorAxisW>;

		}

	}

}

