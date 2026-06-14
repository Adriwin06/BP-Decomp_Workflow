// BrnLionBlendRenderer.cpp:175
void BrnGraphics::LionBlendRenderer::SetCameraData(const rw::math::vpu::Matrix44Affine &  lCameraTransform, const rw::math::vpu::Matrix44Affine &  lView, const rw::math::vpu::Matrix44 &  lViewProj) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	cMatrix::SetAxisX(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// BrnLionBlendRenderer.cpp:130
void BrnGraphics::LionBlendRenderer::BuildCameraOrientatedLocator(const cMatrix &  aLocator, const cParticleEmitter *const  apEmitter, const const cMatrix &  lCamera, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendRenderer.cpp:133
		cVector lZAxis;

		// BrnLionBlendRenderer.cpp:134
		cVector lXAxis;

		// BrnLionBlendRenderer.cpp:134
		cVector lYAxis;

	}
	cMatrix::operator=(/* parameters */);
	cVector::Set(/* parameters */);
	cVector::operator-(/* parameters */);
	cVector::Normalise(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::Cross(/* parameters */);
	cVector::Mul(/* parameters */);
	cVector::GetY(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::Normalise(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	cVector::Mul(/* parameters */);
	cVector::Cross(/* parameters */);
	cMatrix::SetAxisX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetZ(/* parameters */);
	vec_and(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
}

// BrnLionBlendRenderer.cpp:90
void BrnGraphics::LionBlendRenderer::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnLionBlendRenderer.cpp:59
extern void QuadDraw(const BrnGraphics::LionBlendVertex::VertexIterator &  lVertexIterator, const const BuildUVData &  lUVData, const const RenderedParticle &  aPart, const rw::math::vpu::Vector3 *const  apPos, const const cParticleEmitter &  aEmitter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendRenderer.cpp:61
		RGBA lColour;

		// BrnLionBlendRenderer.cpp:63
		Vector4[4] laUvUv;

		// BrnLionBlendRenderer.cpp:69
		VecFloat lvfWeight;

		// BrnLionBlendRenderer.cpp:76
		Vector4 lPosPlusWeight0;

		// BrnLionBlendRenderer.cpp:77
		Vector4 lPosPlusWeight1;

		// BrnLionBlendRenderer.cpp:78
		Vector4 lPosPlusWeight2;

		// BrnLionBlendRenderer.cpp:79
		Vector4 lPosPlusWeight3;

		BrnEffects::Utils::ConvertVector4ToRwRgbaOverbright(/* parameters */);
	}
	rw::math::vpl::VecMult(/* parameters */);
	rw::math::vpl::VecMin(/* parameters */);
	rw::math::vpl::VecConvertFloatToUnsignedFixedPoint<0>(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	BrnEffects::Utils::BuildUVs(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::GetPlus(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	{
		BrnEffects::Utils::BuildMultiFrameUV(/* parameters */);
		BrnEffects::Utils::BuildMultiFrameUV(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::Floor(/* parameters */);
		rw::math::vpu::Vector4::Set(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Floor(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BrnGraphics::LionBlendVertex::VertexIterator::Write(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	Write<rw::math::vpu::Vector4, renderengine::RGBA8, rw::math::vpu::Vector4>(/* parameters */);
	BrnGraphics::LionBlendVertex::VertexIterator::Write(/* parameters */);
	rw::math::fpu::Vector4Template<float>::X(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
	rw::math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4, renderengine::RGBA8, rw::math::vpu::Vector4>(/* parameters */);
	BrnGraphics::LionBlendVertex::VertexIterator::Write(/* parameters */);
	rw::math::fpu::Vector4Template<float>::X(/* parameters */);
	Write<rw::math::vpu::Vector4, renderengine::RGBA8, rw::math::vpu::Vector4>(/* parameters */);
	BrnGraphics::LionBlendVertex::VertexIterator::Write(/* parameters */);
	rw::math::fpu::Vector4Template<float>::X(/* parameters */);
	Write<rw::math::vpu::Vector4, renderengine::RGBA8, rw::math::vpu::Vector4>(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
	rw::math::fpu::Vector4Template<float>::W(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Vector4Template<float>::X(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::Floor(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
}

// BrnLionBlendRenderer.cpp:96
void BrnGraphics::LionBlendRenderer::MatrixConvert(const const cMatrix &  lMatIn, const Matrix44Affine &  lmatOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnLionBlendRenderer.cpp:430
void BrnGraphics::LionBlendRenderer::RenderTilts(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cMatrix *const  pMatrices, const U32  aParticleCount, const cParticleEmitter *  apEmitter, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendRenderer.cpp:432
		Vector3[4] lPoints;

		// BrnLionBlendRenderer.cpp:433
		cParticleMaterial * lpMaterial;

		// BrnLionBlendRenderer.cpp:435
		const const cParticleDescriptor & descriptor;

		// BrnLionBlendRenderer.cpp:437
		uint32_t lDescriptorFlag;

		// BrnLionBlendRenderer.cpp:441
		BuildUVData lUVData;

		// BrnLionBlendRenderer.cpp:444
		const const cParticleBehaviour & behaviour;

		// BrnLionBlendRenderer.cpp:446
		Vector3 lvPivot;

		// BrnLionBlendRenderer.cpp:448
		cVector lViewMatW;

		// BrnLionBlendRenderer.cpp:449
		Vector3 lvCameraPosition;

		// BrnLionBlendRenderer.cpp:451
		VecFloat lvfEndOnStartAngle;

		// BrnLionBlendRenderer.cpp:452
		VecFloat lvfEndOnEndAngle;

		// BrnLionBlendRenderer.cpp:453
		VecFloat lvfEndOnAlphaFade;

		// BrnLionBlendRenderer.cpp:454
		VecFloat lvfEndOnScale;

		cParticleEmitter::GetDescriptor(/* parameters */);
		cParticleDescriptor::Flags(/* parameters */);
		BrnEffects::Utils::BuildUVData::SetupFromMaterial(/* parameters */);
		cParticleEmitter::GetCurrentBehaviour(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
			// BrnLionBlendRenderer.cpp:568
			U32 i;

		}
	}
	{
		// BrnLionBlendRenderer.cpp:570
		const RenderedParticle & lPart;

		// BrnLionBlendRenderer.cpp:572
		Vector3 lvPos0;

		// BrnLionBlendRenderer.cpp:572
		Vector3 lvPos1;

		// BrnLionBlendRenderer.cpp:573
		Matrix44Affine lConvertedXform;

		// BrnLionBlendRenderer.cpp:589
		Vector3 lvDirVec;

		// BrnLionBlendRenderer.cpp:598
		Vector3 lvNormDirVec;

		// BrnLionBlendRenderer.cpp:600
		Vector3 lvMidVec;

		// BrnLionBlendRenderer.cpp:604
		Vector3 lvCamVec;

		// BrnLionBlendRenderer.cpp:654
		const BrnGraphics::LionBlendVertex::VertexIterator & lLionBlendVertexIterator;

		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		MatrixConvert(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Vector3Plus::GetX(/* parameters */);
		rw::math::vpu::operator*=<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*=<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:577
		cMatrix lCurrLoc;

		MatrixConvert(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:459
		U32 i;

		{
			// BrnLionBlendRenderer.cpp:461
			const RenderedParticle & lPart;

			// BrnLionBlendRenderer.cpp:463
			VecFloat lvfX0;

			// BrnLionBlendRenderer.cpp:464
			VecFloat lvfY0;

			// BrnLionBlendRenderer.cpp:466
			VecFloat lvfX1;

			// BrnLionBlendRenderer.cpp:467
			VecFloat lvfY1;

			// BrnLionBlendRenderer.cpp:493
			Vector3 lvPos0;

			// BrnLionBlendRenderer.cpp:493
			Vector3 lvPos1;

			// BrnLionBlendRenderer.cpp:494
			Matrix44Affine lConvertedXform;

			// BrnLionBlendRenderer.cpp:511
			Vector3 lvDirVec;

			// BrnLionBlendRenderer.cpp:519
			Vector3 lvNormDirVec;

			// BrnLionBlendRenderer.cpp:528
			Vector3 lvMidVec;

			// BrnLionBlendRenderer.cpp:530
			Vector3 lvPartMidPoint;

			// BrnLionBlendRenderer.cpp:536
			VecFloat lvfDotProd;

			// BrnLionBlendRenderer.cpp:539
			VecFloat lvfAlpha;

			// BrnLionBlendRenderer.cpp:562
			const BrnGraphics::LionBlendVertex::VertexIterator & lLionBlendVertexIterator;

			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		}
		rw::math::vpu::Vector3Plus::GetX(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3Plus::GetZ(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		{
			// BrnLionBlendRenderer.cpp:471
			Vector2 lvSinCos;

			// BrnLionBlendRenderer.cpp:473
			Vector2 lvfSinCosY0;

			// BrnLionBlendRenderer.cpp:474
			Vector2 lvfSinCosY1;

			// BrnLionBlendRenderer.cpp:476
			Vector2 lvfSinCosX0;

			// BrnLionBlendRenderer.cpp:477
			Vector2 lvfSinCosX1;

			CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
			rw::math::vpu::Vector3::Set(/* parameters */);
			CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::Vector3::Set(/* parameters */);
			rw::math::vpl::VecFloor(/* parameters */);
			{
			}
			rw::math::vpu::Vector3::Set(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Min(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator+<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator+<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator+<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator+<VectorAxisY, VectorAxisX>(/* parameters */);
			rw::math::vpu::Vector3::Set(/* parameters */);
		}
		{
			// BrnLionBlendRenderer.cpp:498
			cMatrix lCurrLoc;

		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator*=<VectorAxisY>(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:631
		VecFloat lvfDotProd;

		// BrnLionBlendRenderer.cpp:633
		VecFloat lvfInAlpha;

		// BrnLionBlendRenderer.cpp:634
		VecFloat lvfOutAlpha;

		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:610
		VecFloat lvCamVecLength;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
}

// BrnLionBlendRenderer.cpp:327
void BrnGraphics::LionBlendRenderer::RenderQuads(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cMatrix *const  pMatrices, const U32  aParticleCount, const cParticleEmitter *  apEmitter, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendRenderer.cpp:329
		U32 i;

		// BrnLionBlendRenderer.cpp:330
		Vector3[4] lPoints;

		// BrnLionBlendRenderer.cpp:331
		cParticleMaterial * lpMaterial;

		// BrnLionBlendRenderer.cpp:333
		const const cParticleDescriptor & descriptor;

		// BrnLionBlendRenderer.cpp:337
		BuildUVData lUVData;

		// BrnLionBlendRenderer.cpp:340
		const const cParticleBehaviour & behaviour;

		// BrnLionBlendRenderer.cpp:342
		Vector3 lvPivot;

		BrnEffects::Utils::BuildUVData::SetupFromMaterial(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:346
		const const RenderedParticle & lPart;

		// BrnLionBlendRenderer.cpp:348
		VecFloat lvfX1;

		// BrnLionBlendRenderer.cpp:349
		VecFloat lvfY1;

		// BrnLionBlendRenderer.cpp:351
		VecFloat lvfX0;

		// BrnLionBlendRenderer.cpp:352
		VecFloat lvfY0;

		// BrnLionBlendRenderer.cpp:404
		Vector3 lConvertedPos;

		// BrnLionBlendRenderer.cpp:410
		Matrix44Affine lConvertedXform;

		// BrnLionBlendRenderer.cpp:417
		const BrnGraphics::LionBlendVertex::VertexIterator & lLionBlendVertexIterator;

		rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:361
		const rw::math::vpu::Matrix33 lRotMat;

		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		BrnEffects::Utils::FastMatrix33FromEulerXYZ(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpl::VecMergeHigh_Word(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
		rw::math::vpl::VecFloor(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Vector3Plus::GetX(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisZ>(/* parameters */);
	{
		// BrnLionBlendRenderer.cpp:370
		Vector2 lvfSinCosY0;

		// BrnLionBlendRenderer.cpp:370
		Vector2 lvfSinCosY1;

		// BrnLionBlendRenderer.cpp:371
		Vector2 lvfSinCosX0;

		// BrnLionBlendRenderer.cpp:371
		Vector2 lvfSinCosX1;

		// BrnLionBlendRenderer.cpp:373
		Vector2 lvSinCos;

		CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpl::VecFloor(/* parameters */);
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// BrnLionBlendRenderer.cpp:223
void BrnGraphics::LionBlendRenderer::RenderSprites(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cMatrix *const  pMatrices, const U32  aParticleCount, const cParticleEmitter *  apEmitter, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLionBlendRenderer.cpp:225
		U32 i;

		// BrnLionBlendRenderer.cpp:226
		Vector3[4] lPoints;

		// BrnLionBlendRenderer.cpp:227
		cParticleMaterial * lpMaterial;

		// BrnLionBlendRenderer.cpp:229
		const BrnGraphics::LionBlendVertex::VertexIterator & lLionBlendVertexIterator;

		// BrnLionBlendRenderer.cpp:232
		const uint32_t luVerticesFree;

		// BrnLionBlendRenderer.cpp:240
		const const cParticleDescriptor & descriptor;

		// BrnLionBlendRenderer.cpp:244
		BuildUVData lUVData;

		// BrnLionBlendRenderer.cpp:247
		const const cParticleBehaviour & behaviour;

		// BrnLionBlendRenderer.cpp:249
		Vector3 lvPivot;

	}
	BrnEffects::Utils::BuildUVData::SetupFromMaterial(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	{
		// BrnLionBlendRenderer.cpp:253
		const const RenderedParticle & lPart;

		// BrnLionBlendRenderer.cpp:255
		VecFloat lvfX1;

		// BrnLionBlendRenderer.cpp:256
		VecFloat lvfY1;

		// BrnLionBlendRenderer.cpp:258
		VecFloat lvfX0;

		// BrnLionBlendRenderer.cpp:259
		VecFloat lvfY0;

		// BrnLionBlendRenderer.cpp:306
		Matrix44Affine lConvertedXform;

		rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	{
		// BrnLionBlendRenderer.cpp:268
		const rw::math::vpu::Matrix33 lRotMat;

		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		BrnEffects::Utils::FastMatrix33FromEulerXYZ(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpl::VecMergeHigh_Word(/* parameters */);
		CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		CgsNumeric::TrigBaseFunctions5::Cos4_UnitCycles(/* parameters */);
		rw::math::vpl::VecFloor(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector3Plus::GetX(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisZ>(/* parameters */);
	{
		// BrnLionBlendRenderer.cpp:277
		VecFloat lvfCX;

		// BrnLionBlendRenderer.cpp:277
		VecFloat lvfCY0;

		// BrnLionBlendRenderer.cpp:277
		VecFloat lvfCY1;

		// BrnLionBlendRenderer.cpp:277
		VecFloat lvfSX;

		// BrnLionBlendRenderer.cpp:277
		VecFloat lvfSY0;

		// BrnLionBlendRenderer.cpp:277
		VecFloat lvfSY1;

		// BrnLionBlendRenderer.cpp:279
		Vector4 lvSinCos;

		CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5>::SinCos(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpl::VecFloor(/* parameters */);
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// BrnLionBlendRenderer.cpp:199
void BrnGraphics::LionBlendRenderer::BeginRendering(const rw::math::vpu::Matrix44 &  lViewProjection, const float32_t  lfWhiteLevel, const bool8_t  lbEnableZFade, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const float32_t  lfFadeDistance, const float32_t  lfDepthSamplerOffsetU, const float32_t  lfDepthSamplerOffsetV, TextureState *const  lpDepthTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

