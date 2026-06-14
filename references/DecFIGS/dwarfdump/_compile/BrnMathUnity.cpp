void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator>(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:482
		bool ret;

		{
			// vec_float_operation_inline.h:481
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void BrnMath::GetPointToInfiniteLineDistance(const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Vector3  lPointOnLine1, const rw::math::vpu::Vector3  lPointOnLine2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.cpp:116
		Vector3 lLineDir;

		// BrnMathUtils.cpp:120
		Vector3 lLineToPoint;

		// BrnMathUtils.cpp:122
		float32_t lfDelta;

		// BrnMathUtils.cpp:124
		Vector3 lProjectedPointOnLine;

		// BrnMathUtils.cpp:126
		Vector3 lPointToProjectedPoint;

		// BrnMathUtils.cpp:128
		float32_t lfDistance;

		rw::math::vpu::operator>(/* parameters */);
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void rw::math::vpu::IsValid(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNaN(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnMath::IsNormal(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar(const VecFloat  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:690
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_platform_inline.h:692
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_platform_inline.h:691
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::IsSimilar(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV3(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:401
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:402
			VectorIntrinsicUnion::VectorIntrinsic difference;

			{
				// vector_intrinsic_operation_inline.h:402
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

				{
					// vector_intrinsic_operation_inline.h:402
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:402
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
		}
	}
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::IsOrthogonal3x3(const rw::math::vpu::Matrix44Affine &  matrix, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetOrthogonalError3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetOrthogonalError(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation_inline.h:63
	VecFloat error;

	{
		// matrix33_operation_inline.h:53
		Matrix33 identity;

		// matrix33_operation_inline.h:56
		Matrix33 result;

		// matrix33_operation_inline.h:59
		Vector3 errorVec;

		// matrix33_operation_inline.h:63
		VecFloat error;

	}
}

void rw::math::vpu::Transpose(const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic z;

		{
			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp1;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp2;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp3;

		}
	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix33 &  m, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:67
		VectorIntrinsicUnion::VectorIntrinsic bX;

		// matrix33_operation_platform_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic bY;

		// matrix33_operation_platform_inline.h:69
		VectorIntrinsicUnion::VectorIntrinsic bZ;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row2;

		{
			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
	}
}

void rw::math::vpu::SelfSubtract(const Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const rw::math::vpu::Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::IsNormal3x3(const rw::math::vpu::Matrix44Affine &  matrix, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetNormalError3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetNormalError(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation_platform_inline.h:45
	VecFloat error;

	{
		// matrix33_operation_platform_inline.h:41
		VecFloat one;

		// matrix33_operation_platform_inline.h:42
		Vector3 errorVec;

		// matrix33_operation_platform_inline.h:45
		VecFloat error;

	}
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnMath::BuildTransform(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lAt, const rw::math::vpu::Vector3  lUp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnMathUtils.cpp:57
	Matrix44Affine & lTransform;

	{
		// BrnMathUtils.cpp:57
		Matrix44Affine lTransform;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	IsNormal(/* parameters */);
	IsNormal(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Matrix33::SetIdentity(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
		{
		}
		{
			{
			}
		}
	}
	{
	}
	{
	}
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::operator>=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::fpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:673
		bool result;

	}
}

void rw::math::vpu::operator-(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:967
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:968
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:522
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:524
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:522
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:524
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:522
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:524
		bool ret;

	}
}

void BrnMath::IsPointInsideBox(const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Matrix44Affine &  lBoxTransform, const rw::math::vpu::Vector3  lBoxDimensions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.cpp:93
		Vector3 lPointCenterVector;

		rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Transpose(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	IsNormal(/* parameters */);
	rw::math::vpu::Matrix44Affine::YAxis(/* parameters */);
	IsNormal(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::ZAxis(/* parameters */);
	IsNormal(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::fpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::fpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	rw::math::fpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

