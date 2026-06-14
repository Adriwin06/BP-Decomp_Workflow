// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:278
			extern Vector3 TransformPoint(Vector3, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:1306
			extern Vector4 operator*(Vector4, Matrix44);

			// matrix44_operation_inline.h:1348
			extern Matrix44 operator*(Matrix44, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:272
			extern Matrix44 Inverse(Matrix44);

			// matrix44_operation_inline.h:278
			extern Vector3 TransformPoint(Vector3, Matrix44);

			// matrix44_operation_inline.h:1115
			extern void Matrix44RotateY(VecFloat, Matrix44 &);

			// matrix44_operation_inline.h:589
			extern Matrix44 RotateAroundYAxis(Matrix44, VecFloat);

			// matrix44_operation_inline.h:304
			extern Vector3 TransformVector(Vector3, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:278
			extern Vector3 TransformPoint(Vector3, Matrix44);

			// matrix44_operation_inline.h:272
			extern Matrix44 Inverse(Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:278
			extern Vector3 TransformPoint(Vector3, Matrix44);

			// matrix44_operation_inline.h:1188
			extern Matrix44 & operator*=(Matrix44 &, VecFloat);

			// matrix44_operation_inline.h:137
			extern Matrix44 Mult(Matrix44, VecFloat);

			// matrix44_operation_inline.h:1348
			extern Matrix44 operator*(Matrix44, Matrix44);

			// matrix44_operation_inline.h:1306
			extern Vector4 operator*(Vector4, Matrix44);

			// matrix44_operation_inline.h:272
			extern Matrix44 Inverse(Matrix44);

			// matrix44_operation_inline.h:1314
			extern Matrix44 & operator*=(Matrix44 &, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:1348
			extern Matrix44 operator*(Matrix44, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:327
			extern Vector3 Transform(Vector4, Matrix44);

			// matrix44_operation_inline.h:1348
			extern Matrix44 operator*(Matrix44, Matrix44);

			// matrix44_operation_inline.h:1165
			extern void Matrix44FromScaleQuaternionTranslation(Vector3, Quaternion, Vector3, Matrix44 &);

			// matrix44_operation_inline.h:768
			extern Matrix44 Matrix44FromScaleQuaternionTranslation(Vector3, Quaternion, Vector3);

			// matrix44_operation_inline.h:1026
			extern void Matrix44FromQuaternion(Quaternion, Matrix44 &);

			// matrix44_operation_inline.h:353
			extern Matrix44 Matrix44FromQuaternion(Quaternion);

			// matrix44_operation_inline.h:1306
			extern Vector4 operator*(Vector4, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:1306
			extern Vector4 operator*(Vector4, Matrix44);

			// matrix44_operation_inline.h:1343
			extern Matrix44 operator-(Matrix44, Matrix44);

			// matrix44_operation_inline.h:191
			extern Matrix44 Subtract(Matrix44, Matrix44);

			// matrix44_operation_inline.h:304
			extern Vector3 TransformVector(Vector3, Matrix44);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// matrix44_operation_inline.h:1036
			extern void Matrix44FromEulerXYZ(Vector3, Matrix44 &);

			// matrix44_operation_inline.h:372
			extern Matrix44 Matrix44FromEulerXYZ(Vector3);

			// matrix44_operation_inline.h:304
			extern Vector3 TransformVector(Vector3, Matrix44);

		}

	}

}

