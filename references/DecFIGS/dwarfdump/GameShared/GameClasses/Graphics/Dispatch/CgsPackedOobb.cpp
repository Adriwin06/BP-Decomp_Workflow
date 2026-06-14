// CgsPackedOobb.cpp:221
void CgsGraphics::PackedOobb::LoadIntrinsic(uint32_t  luWord0, uint32_t  luWord1, uint32_t  luWord2, uint32_t  luWord3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPackedOobb.cpp:223
		uint32_t[4] lauVector;

		rw::math::vpl::VecLoadUnaligned(/* parameters */);
	}
}

// CgsPackedOobb.cpp:244
void CgsGraphics::PackedOobb::ToMatrix(const Matrix44 &  lMatrixOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPackedOobb.cpp:247
		VectorIntrinsicUnion::VectorIntrinsic lPosExpScale;

		// CgsPackedOobb.cpp:248
		VectorIntrinsicUnion::VectorIntrinsic lScaleExpBits;

		// CgsPackedOobb.cpp:249
		VectorIntrinsicUnion::VectorIntrinsic lScaleExpScale;

		// CgsPackedOobb.cpp:252
		VectorIntrinsicUnion::VectorIntrinsic lPosInt;

		// CgsPackedOobb.cpp:253
		VectorIntrinsicUnion::VectorIntrinsic lPosN;

		// CgsPackedOobb.cpp:254
		Vector3 lPosition;

		// CgsPackedOobb.cpp:257
		VectorIntrinsicUnion::VectorIntrinsic lScaleInt;

		// CgsPackedOobb.cpp:258
		VectorIntrinsicUnion::VectorIntrinsic lScaleN;

		// CgsPackedOobb.cpp:259
		Vector3 lScale;

		// CgsPackedOobb.cpp:262
		Quaternion lQuaternion;

		// CgsPackedOobb.cpp:263
		VectorIntrinsicUnion::VectorIntrinsic lQuatInt;

		rw::math::vpu::GetVector4_Zero(/* parameters */);
		rw::math::vpl::VecPermute(/* parameters */);
	}
	rw::math::vpu::Matrix44FromScaleQuaternionTranslation(/* parameters */);
	rw::math::vpl::VecShiftRightImm_UInt<1>(/* parameters */);
	rw::math::vpl::VecPermute(/* parameters */);
	rw::math::vpl::VecConvertSignedFixedPointToFloat<31>(/* parameters */);
	rw::math::vpl::VecPermute(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpl::VecPermute(/* parameters */);
	rw::math::vpl::VecPermute(/* parameters */);
	rw::math::vpl::VecConvertUnsignedFixedPointToFloat<24>(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpl::VecConvertSignedFixedPointToFloat<31>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
}

// CgsPackedOobb.cpp:187
void CgsGraphics::PackedOobb::CalcExponent(const rw::math::vpu::Vector3  lVector, const VecFloat &  lLimitOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPackedOobb.cpp:189
		VecFloat lMaxValue;

		// CgsPackedOobb.cpp:194
		uint32_t luExponent;

	}
}

// CgsPackedOobb.cpp:135
void CgsGraphics::PackedOobb::Construct(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Quaternion &  lRotation, const rw::math::vpu::Vector3  lScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPackedOobb.cpp:138
		int32_t[4] lauQuat;

		// CgsPackedOobb.cpp:145
		VecFloat lPosLimit;

		// CgsPackedOobb.cpp:146
		VecFloat lScaleLimit;

		// CgsPackedOobb.cpp:147
		uint32_t luPosExponent;

		// CgsPackedOobb.cpp:148
		uint32_t luScaleExponent;

		// CgsPackedOobb.cpp:151
		Vector3 lPositionN;

		// CgsPackedOobb.cpp:152
		Vector3 lScaleN;

		// CgsPackedOobb.cpp:155
		int32_t[3] laiPosition;

		// CgsPackedOobb.cpp:156
		int32_t[3] laiScale;

		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	CalcExponent(/* parameters */);
	CalcExponent(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
}

// CgsPackedOobb.cpp:84
void CgsGraphics::PackedOobb::Construct(const rw::math::vpu::Matrix44 &  lBBMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPackedOobb.cpp:86
		Vector3 lScale;

		// CgsPackedOobb.cpp:87
		Vector3 lPosition;

		// CgsPackedOobb.cpp:95
		Matrix44 lRotation;

		// CgsPackedOobb.cpp:101
		Quaternion lRotationQuat;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::QuaternionFromMatrix44(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Quaternion::Quaternion(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	{
		{
		}
	}
	{
		// CgsPackedOobb.cpp:106
		Matrix44 lMatrixOut;

		// CgsPackedOobb.cpp:107
		Matrix44 lRotationMatrix;

		// CgsPackedOobb.cpp:109
		bool sbGetFromQuat;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44FromQuaternion(/* parameters */);
		rw::math::vpu::Matrix44::GetRow(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix44::SetRow(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
}

// CgsPackedOobb.cpp:46
// CgsPackedOobb.cpp:47
// CgsPackedOobb.cpp:48
// CgsPackedOobb.cpp:49
// CgsPackedOobb.cpp:50
