// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:241
			extern Vector3 Lerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:130
			extern Vector3 operator/(Vector3, Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:703
			extern Vector3 & operator*=(Vector3 &, Vector3);

			// vector3_operation_inline.h:325
			extern Vector3 Abs(Vector3);

			// vector3_operation_inline.h:709
			extern Vector3 & operator/=(Vector3 &, Vector3);

			// vector3_operation_inline.h:269
			extern Vector3 NLerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:32
			extern Vector3 Mult(Vector3, VecFloat);

			// vector3_operation_inline.h:92
			extern Vector3 Add(Vector3, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:186
			extern Vector3 NormalizeFast(Vector3);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:725
			extern Mask3 CompLessThan(Vector3, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:740
			extern Mask3 CompLessEqual(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:417
			extern Vector3 operator-(Vector3, VecFloat);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:479
			extern Vector3 operator-(Vector3, float);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisY>(Vector3 &, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:241
			extern Vector3 Lerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:830
			extern void Cross(Vector3, Vector3, Vector3 &);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisX>(Vector3 &, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:892
			extern void Dot(Vector3, Vector3, VecFloat &);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:137
			extern Vector3 MultAdd(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:703
			extern Vector3 & operator*=(Vector3 &, Vector3);

			// vector3_operation_inline.h:130
			extern Vector3 operator/(Vector3, Vector3);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisW>(Vector3, VecFloatRef<VectorAxisW>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:32
			extern Vector3 Mult(Vector3, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:92
			extern Vector3 Add(Vector3, Vector3);

			// vector3_operation_inline.h:830
			extern void Cross(Vector3, Vector3, Vector3 &);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:27
			extern bool operator!=(Vector3, Vector3);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, Vector3);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:373
			extern Vector3 & operator/=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:325
			extern Vector3 Abs(Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:325
			extern Vector3 Abs(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:340
			extern VecFloat AngleBetweenVectors(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisW>(Vector3, VecFloatRef<VectorAxisW>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:340
			extern VecFloat AngleBetweenVectors(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:27
			extern bool operator!=(Vector3, Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:340
			extern VecFloat AngleBetweenVectors(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:39
			extern Vector3 Mult(Vector3, float);

			// vector3_operation_inline.h:840
			extern void Normalize(Vector3, Vector3 &);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisX>(Vector3 &, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisY>(Vector3 &, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisZ>(Vector3 &, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:412
			extern Vector3 operator+(Vector3, VecFloat);

			// vector3_operation_inline.h:417
			extern Vector3 operator-(Vector3, VecFloat);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisX>(Vector3 &, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisY>(Vector3 &, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:497
			extern Vector3 & operator*=<VectorAxisZ>(Vector3 &, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:325
			extern Vector3 Abs(Vector3);

			// vector3_operation_inline.h:317
			extern Vector3 Clamp(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:22
			extern bool operator==(Vector3, Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:830
			extern void Cross(Vector3, Vector3, Vector3 &);

			// vector3_operation_inline.h:186
			extern Vector3 NormalizeFast(Vector3);

			// vector3_operation_inline.h:545
			extern Vector3 operator/<VectorAxisW>(Vector3, VecFloatRef<VectorAxisW>);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, Vector3);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:840
			extern void Normalize(Vector3, Vector3 &);

			// vector3_operation_inline.h:340
			extern VecFloat AngleBetweenVectors(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:214
			extern VecFloat CheckedNormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:373
			extern Vector3 & operator/=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:39
			extern Vector3 Mult(Vector3, float);

			// vector3_operation_inline.h:703
			extern Vector3 & operator*=(Vector3 &, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisW>(Vector3, VecFloatRef<VectorAxisW>);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ>, Vector3);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

			// vector3_operation_inline.h:725
			extern Mask3 CompLessThan(Vector3, Vector3);

			// vector3_operation_inline.h:733
			extern Mask3 CompGreaterThan(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:241
			extern Vector3 Lerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:441
			extern Vector3 & operator/=(Vector3 &, float);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:373
			extern Vector3 & operator/=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:22
			extern bool operator==(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:27
			extern bool operator!=(Vector3, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:385
			extern Vector3 & operator-=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:325
			extern Vector3 Abs(Vector3);

			// vector3_operation_inline.h:241
			extern Vector3 Lerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:296
			extern Vector3 Negate(Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:241
			extern Vector3 Lerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:361
			extern bool IsSimilar(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:241
			extern Vector3 Lerp(Vector3, Vector3, VecFloat);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:332
			extern VecFloat AngleBetweenVectors(Vector3, Vector3);

			// vector3_operation_inline.h:229
			extern VecFloat CosAngleBetweenNormalizedVectors(Vector3, Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:317
			extern Vector3 Clamp(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:417
			extern Vector3 operator-(Vector3, VecFloat);

			// vector3_operation_inline.h:412
			extern Vector3 operator+(Vector3, VecFloat);

			// vector3_operation_inline.h:740
			extern Mask3 CompLessEqual(Vector3, Vector3);

			// vector3_operation_inline.h:748
			extern Mask3 CompGreaterEqual(Vector3, Vector3);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:22
			extern bool operator==(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:398
			extern Vector3 operator*(VecFloat, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisX>(VecFloatRef<VectorAxisX>, Vector3);

			// vector3_operation_inline.h:537
			extern Vector3 operator*<VectorAxisY>(VecFloatRef<VectorAxisY>, Vector3);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:740
			extern Mask3 CompLessEqual(Vector3, Vector3);

			// vector3_operation_inline.h:748
			extern Mask3 CompGreaterEqual(Vector3, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:777
			extern Vector3 Select(Mask3, Vector3, Vector3);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:22
			extern bool operator==(Vector3, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:840
			extern void Normalize(Vector3, Vector3 &);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:433
			extern Vector3 & operator*=(Vector3 &, float);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:317
			extern Vector3 Clamp(Vector3, Vector3, Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

			// vector3_operation_inline.h:186
			extern Vector3 NormalizeFast(Vector3);

			// vector3_operation_inline.h:451
			extern Vector3 operator*(Vector3, float);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:158
			extern VecFloat Magnitude(Vector3);

			// vector3_operation_inline.h:684
			extern Vector3 operator-(Vector3);

			// vector3_operation_inline.h:840
			extern void Normalize(Vector3, Vector3 &);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:144
			extern VecFloat Dot(Vector3, Vector3);

			// vector3_operation_inline.h:207
			extern VecFloat NormalizeReturnMagnitude(Vector3, Vector3 &);

			// vector3_operation_inline.h:303
			extern Vector3 Min(Vector3, Vector3);

			// vector3_operation_inline.h:310
			extern Vector3 Max(Vector3, Vector3);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:130
			extern Vector3 operator/(Vector3, Vector3);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:465
			extern Vector3 operator/(Vector3, float);

			// vector3_operation_inline.h:284
			extern bool IsValid(Vector3);

			// vector3_operation_inline.h:97
			extern Vector3 Subtract(Vector3, Vector3);

			// vector3_operation_inline.h:325
			extern Vector3 Abs(Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:367
			extern Vector3 & operator*=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:102
			extern Vector3 Mult(Vector3, Vector3);

			// vector3_operation_inline.h:770
			extern Vector3 Select(MaskScalar, Vector3, Vector3);

			// vector3_operation_inline.h:405
			extern Vector3 operator/(Vector3, VecFloat);

			// vector3_operation_inline.h:733
			extern Mask3 CompGreaterThan(Vector3, Vector3);

			// vector3_operation_inline.h:725
			extern Mask3 CompLessThan(Vector3, Vector3);

			// vector3_operation_inline.h:417
			extern Vector3 operator-(Vector3, VecFloat);

			// vector3_operation_inline.h:412
			extern Vector3 operator+(Vector3, VecFloat);

			// vector3_operation_inline.h:458
			extern Vector3 operator*(float, Vector3);

			// vector3_operation_inline.h:109
			extern Vector3 Divide(Vector3, Vector3);

			// vector3_operation_inline.h:777
			extern Vector3 Select(Mask3, Vector3, Vector3);

			// vector3_operation_inline.h:740
			extern Mask3 CompLessEqual(Vector3, Vector3);

			// vector3_operation_inline.h:748
			extern Mask3 CompGreaterEqual(Vector3, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:385
			extern Vector3 & operator-=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:379
			extern Vector3 & operator+=(Vector3 &, VecFloat);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisY>(Vector3, VecFloatRef<VectorAxisY>);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisZ>(Vector3, VecFloatRef<VectorAxisZ>);

			// vector3_operation_inline.h:317
			extern Vector3 Clamp(Vector3, Vector3, Vector3);

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vector3_operation_inline.h:165
			extern VecFloat MagnitudeSquared(Vector3);

			// vector3_operation_inline.h:356
			extern bool IsZero(Vector3, VecFloat);

			// vector3_operation_inline.h:193
			extern Vector3 Normalize(Vector3);

			// vector3_operation_inline.h:391
			extern Vector3 operator*(Vector3, VecFloat);

			// vector3_operation_inline.h:715
			extern Vector3 operator-(Vector3, Vector3);

			// vector3_operation_inline.h:697
			extern Vector3 & operator-=(Vector3 &, Vector3);

			// vector3_operation_inline.h:123
			extern Vector3 operator*(Vector3, Vector3);

			// vector3_operation_inline.h:720
			extern Vector3 operator+(Vector3, Vector3);

			// vector3_operation_inline.h:703
			extern Vector3 & operator*=(Vector3 &, Vector3);

			// vector3_operation_inline.h:529
			extern Vector3 operator*<VectorAxisX>(Vector3, VecFloatRef<VectorAxisX>);

			// vector3_operation_inline.h:691
			extern Vector3 & operator+=(Vector3 &, Vector3);

			// vector3_operation_inline.h:830
			extern void Cross(Vector3, Vector3, Vector3 &);

			// vector3_operation_inline.h:151
			extern Vector3 Cross(Vector3, Vector3);

		}

	}

}

