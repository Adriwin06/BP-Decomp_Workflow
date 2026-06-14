// CgsCubicSpline.cpp:369
void CgsGeometric::CubicSpline::ComputeT(float32_t  lfLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:371
		float32_t lfT;

		// CgsCubicSpline.cpp:372
		float32_t lfPrevLength;

		// CgsCubicSpline.cpp:373
		int32_t liIndex;

	}
	{
		// CgsCubicSpline.cpp:379
		float32_t lfCurrLength;

	}
	{
		// CgsCubicSpline.cpp:384
		float32_t lfTInterpolant;

		// CgsCubicSpline.cpp:385
		float32_t lfPrevT;

		// CgsCubicSpline.cpp:386
		float32_t lfNextT;

	}
}

// CgsCubicSpline.cpp:412
void CgsGeometric::CubicSpline::FindSegment(float32_t  lfLength, float32_t *  lprRemainingLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:414
		int32_t liNodeIndex;

		// CgsCubicSpline.cpp:415
		float32_t lfTotalLength;

		// CgsCubicSpline.cpp:417
		HermiteSpline lHermiteSpline;

	}
	{
		// CgsCubicSpline.cpp:425
		float32_t lfSegmentLength;

	}
}

// CgsCubicSpline.cpp:320
void CgsGeometric::CubicSpline::RefreshSegmentCache(int32_t  liSegmentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:326
		Vector3 lPreviousPosition;

		// CgsCubicSpline.cpp:327
		float32_t lfLength;

		// CgsCubicSpline.cpp:328
		int32_t liIndex;

		{
			// CgsCubicSpline.cpp:344
			Vector3 lPosition;

			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
		}
		rw::math::vpu::Magnitude(/* parameters */);
	}
}

// CgsCubicSpline.cpp:189
void CgsGeometric::CubicSpline::GetPosition(float32_t  lfLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:191
		HermiteSpline lHermiteSpline;

		// CgsCubicSpline.cpp:192
		int32_t liSegmentIndex;

		// CgsCubicSpline.cpp:193
		float32_t lfRemainingLength;

	}
}

// CgsCubicSpline.cpp:222
void CgsGeometric::CubicSpline::GetTangent(float32_t  lfLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:224
		HermiteSpline lHermiteSpline;

		// CgsCubicSpline.cpp:225
		int32_t liSegmentIndex;

		// CgsCubicSpline.cpp:226
		float32_t lfRemainingLength;

	}
}

// CgsCubicSpline.cpp:256
void CgsGeometric::CubicSpline::GetRawPosition(int32_t  liSegment, float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:258
		HermiteSpline lHermiteSpline;

	}
}

// CgsCubicSpline.cpp:282
void CgsGeometric::CubicSpline::BuildLengths() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:284
		HermiteSpline lHermiteSpline;

		// CgsCubicSpline.cpp:285
		int32_t liNodeIndex;

		// CgsCubicSpline.cpp:286
		float32_t liLength;

	}
}

// CgsCubicSpline.cpp:77
void CgsGeometric::CubicSpline::BuildRounded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:79
		Vector3 lTangent;

		// CgsCubicSpline.cpp:80
		int32_t liNodeIndex;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// CgsCubicSpline.cpp:95
		Vector3 lTangent0;

		// CgsCubicSpline.cpp:96
		Vector3 lTangent1;

		// CgsCubicSpline.cpp:97
		float32_t lLength0;

		// CgsCubicSpline.cpp:98
		float32_t lLength1;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
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
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
}

// CgsCubicSpline.cpp:39
void CgsGeometric::CubicSpline::BuildCatmullRom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:41
		Vector3 lTangent;

		// CgsCubicSpline.cpp:42
		int32_t liNodeIndex;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// CgsCubicSpline.cpp:127
void CgsGeometric::CubicSpline::BuildNatural() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCubicSpline.cpp:129
		int32_t liIndex;

		// CgsCubicSpline.cpp:130
		int32_t liIteration;

		// CgsCubicSpline.cpp:131
		const int32_t liIterationCount;

		{
			// CgsCubicSpline.cpp:138
			Vector3 lV;

			// CgsCubicSpline.cpp:139
			float32_t lfL;

			// CgsCubicSpline.cpp:140
			Vector3 lTangent;

		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		{
			// CgsCubicSpline.cpp:156
			Vector3 lV0;

			// CgsCubicSpline.cpp:157
			Vector3 lV1;

			// CgsCubicSpline.cpp:158
			float32_t lfL0;

			// CgsCubicSpline.cpp:159
			float32_t lfL1;

			// CgsCubicSpline.cpp:160
			Vector3 lTangent0;

			// CgsCubicSpline.cpp:161
			Vector3 lTangent2;

			// CgsCubicSpline.cpp:163
			Vector3 lNextTangent0;

			// CgsCubicSpline.cpp:164
			Vector3 lNextTangent2;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
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
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator*(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

