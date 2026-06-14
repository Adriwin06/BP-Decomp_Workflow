// ICEWidgetColorPicker.cpp:36
void ICE::ICEWidgetColorPicker::Construct(float32_t  x, float32_t  y, float32_t  radius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEWidgetColorPicker.cpp:351
void ICE::ICEWidgetColorPicker::RenderContrastBar(float32_t  contrast, ICERender *  lpICERender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWidgetColorPicker.cpp:353
		const float32_t barWidth;

		// ICEWidgetColorPicker.cpp:354
		const float32_t barHeight;

		// ICEWidgetColorPicker.cpp:355
		const float32_t barX;

		// ICEWidgetColorPicker.cpp:356
		const float32_t barY;

		// ICEWidgetColorPicker.cpp:358
		Poly poly;

		// ICEWidgetColorPicker.cpp:360
		const Vector4 barColor03;

		// ICEWidgetColorPicker.cpp:361
		const Vector4 barColor1or2;

		// ICEWidgetColorPicker.cpp:362
		const Vector4 barColor2or1;

		// ICEWidgetColorPicker.cpp:380
		const Vector4 selectionBarColor;

		Poly(/* parameters */);
	}
}

// ICEWidgetColorPicker.cpp:134
void ICE::ICEWidgetColorPicker::HSV2RGB(float32_t  h, float32_t  s, float32_t  v, const float32_t &  r, const float32_t &  g, const float32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWidgetColorPicker.cpp:146
		float32_t h6;

		// ICEWidgetColorPicker.cpp:147
		int32_t int_h;

		// ICEWidgetColorPicker.cpp:148
		float32_t f;

		// ICEWidgetColorPicker.cpp:149
		float32_t p;

		// ICEWidgetColorPicker.cpp:150
		float32_t q;

		// ICEWidgetColorPicker.cpp:151
		float32_t t;

	}
	ICEMath::FloatToInt(/* parameters */);
}

// ICEWidgetColorPicker.cpp:296
void ICE::ICEWidgetColorPicker::RenderIntensityBar(float32_t  intensity, bool  side, ICERender *  lpICERender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWidgetColorPicker.cpp:298
		const float32_t barWidth;

		// ICEWidgetColorPicker.cpp:299
		const float32_t barHeight;

		// ICEWidgetColorPicker.cpp:300
		const float32_t leftBarX;

		// ICEWidgetColorPicker.cpp:301
		const float32_t rightBarX;

		// ICEWidgetColorPicker.cpp:302
		const float32_t barY;

		// ICEWidgetColorPicker.cpp:304
		Poly poly;

		// ICEWidgetColorPicker.cpp:305
		const Vector4 barFrameColor;

		// ICEWidgetColorPicker.cpp:307
		float32_t barX;

		// ICEWidgetColorPicker.cpp:317
		const Vector4 barTopColor;

		// ICEWidgetColorPicker.cpp:318
		const Vector4 barBottomColor;

		// ICEWidgetColorPicker.cpp:328
		const Vector4 selectionBarColor;

		Poly(/* parameters */);
	}
}

// ICEWidgetColorPicker.cpp:79
void ICE::ICEWidgetColorPicker::RGB2HSV(float32_t  r, float32_t  g, float32_t  b, const float32_t &  h, const float32_t &  s, const float32_t &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWidgetColorPicker.cpp:81
		float32_t max;

		// ICEWidgetColorPicker.cpp:82
		float32_t min;

		// ICEWidgetColorPicker.cpp:83
		float32_t sv;

		ICEMath::Max(/* parameters */);
		ICEMath::Min(/* parameters */);
		ICEMath::Min(/* parameters */);
	}
	ICEMath::Max(/* parameters */);
}

// ICEWidgetColorPicker.cpp:119
void ICE::ICEWidgetColorPicker::RGB2HSV(uint8_t  r, uint8_t  g, uint8_t  b, const float32_t &  h, const float32_t &  s, const float32_t &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICEWidgetColorPicker.cpp:197
void ICE::ICEWidgetColorPicker::HSV2XYZ(float32_t  h, float32_t  s, float32_t  v, const float32_t &  x, const float32_t &  y, const float32_t &  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEMath::Angles::RevToAng(/* parameters */);
	Angle::Angle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::Sin(/* parameters */);
	ICEMath::Angles::RevToAng(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::Cos(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
}

// ICEWidgetColorPicker.cpp:214
void ICE::ICEWidgetColorPicker::XYZ2HSV(float32_t  x, float32_t  y, float32_t  z, const float32_t &  h, const float32_t &  s, const float32_t &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEMath::ATan(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	Angle::SetFromVecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_re(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::Sqrt(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// ICEWidgetColorPicker.cpp:236
void ICE::ICEWidgetColorPicker::RenderColorWheel(float32_t  x, float32_t  y, float32_t  z, ICERender *  lpICERender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICEWidgetColorPicker.cpp:238
		Poly poly;

		// ICEWidgetColorPicker.cpp:239
		float32_t h;

		// ICEWidgetColorPicker.cpp:239
		float32_t s;

		// ICEWidgetColorPicker.cpp:239
		float32_t v;

		// ICEWidgetColorPicker.cpp:242
		const float32_t vmin;

		// ICEWidgetColorPicker.cpp:243
		float32_t val;

		// ICEWidgetColorPicker.cpp:246
		const int32_t numColorSegments;

		// ICEWidgetColorPicker.cpp:270
		float32_t dx;

		// ICEWidgetColorPicker.cpp:270
		float32_t dy;

		// ICEWidgetColorPicker.cpp:270
		float32_t dz;

		// ICEWidgetColorPicker.cpp:272
		uint8_t rgb;

		// ICEWidgetColorPicker.cpp:273
		const Vector4 wheelSelectionColor;

		Poly(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		{
			// ICEWidgetColorPicker.cpp:247
			int32_t i;

			{
				// ICEWidgetColorPicker.cpp:249
				float32_t r;

				// ICEWidgetColorPicker.cpp:249
				float32_t g;

				// ICEWidgetColorPicker.cpp:249
				float32_t b;

				// ICEWidgetColorPicker.cpp:250
				const Vector4 wheelColor01;

				// ICEWidgetColorPicker.cpp:253
				const Vector4 wheelColor2;

				// ICEWidgetColorPicker.cpp:256
				const Vector4 wheelColor3;

				// ICEWidgetColorPicker.cpp:258
				float32_t a0;

				// ICEWidgetColorPicker.cpp:259
				float32_t a1;

				ICEMath::Sin(/* parameters */);
				ICEMath::Angles::RevToAng(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::Sin(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				vec_sel(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				vec_add(/* parameters */);
				vec_cts(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				vec_nmsub(/* parameters */);
				vec_madd(/* parameters */);
				vec_ctf(/* parameters */);
				vec_and(/* parameters */);
				vec_and(/* parameters */);
				vec_and(/* parameters */);
				vec_cmpeq(/* parameters */);
				vec_cmpeq(/* parameters */);
				vec_nmsub(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_sel(/* parameters */);
				vec_sel(/* parameters */);
				{
				}
				rw::math::vpu::operator<(/* parameters */);
				ICEMath::Cos(/* parameters */);
				ICEMath::Angles::RevToAng(/* parameters */);
				rw::math::vpu::Cos(/* parameters */);
				ICEMath::Angles::RevToRad(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
				vec_sel(/* parameters */);
				vec_nmsub(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				vec_add(/* parameters */);
				vec_madd(/* parameters */);
				vec_cts(/* parameters */);
				vec_ctf(/* parameters */);
				vec_and(/* parameters */);
				vec_add(/* parameters */);
				vec_and(/* parameters */);
				vec_and(/* parameters */);
				vec_cmpeq(/* parameters */);
				vec_cmpeq(/* parameters */);
				vec_nmsub(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_sel(/* parameters */);
				vec_sel(/* parameters */);
				{
				}
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::operator<(/* parameters */);
				ICEMath::Sin(/* parameters */);
				ICEMath::Angles::RevToAng(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::Sin(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				vec_sel(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				vec_add(/* parameters */);
				vec_cts(/* parameters */);
				vec_nmsub(/* parameters */);
				vec_madd(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				vec_ctf(/* parameters */);
				vec_and(/* parameters */);
				vec_and(/* parameters */);
				vec_and(/* parameters */);
				vec_cmpeq(/* parameters */);
				vec_cmpeq(/* parameters */);
				vec_nmsub(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_madd(/* parameters */);
				vec_sel(/* parameters */);
				vec_sel(/* parameters */);
				{
				}
				rw::math::vpu::operator<(/* parameters */);
				ICEMath::Cos(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
			}
			rw::math::vpu::Cos(/* parameters */);
			vec_sel(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_madd(/* parameters */);
			vec_add(/* parameters */);
			vec_cts(/* parameters */);
			vec_ctf(/* parameters */);
			vec_and(/* parameters */);
			vec_add(/* parameters */);
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_sel(/* parameters */);
			vec_sel(/* parameters */);
			{
			}
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
			{
			}
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
			ICEMath::Angles::RevToAng(/* parameters */);
			{
			}
			ICEMath::Angles::RevToRad(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::operator<(/* parameters */);
		}
	}
}

// ICEWidgetColorPicker.cpp:61
void ICE::ICEWidgetColorPicker::Render(ICERender *  lpICERender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

