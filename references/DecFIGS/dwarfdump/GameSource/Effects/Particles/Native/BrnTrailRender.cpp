// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnTrailRender.cpp:31
		const rw::math::vpu::Vector3 kvHalfTrailSize;

		// BrnTrailRender.cpp:32
		const rw::math::vpu::Vector3 kvMinusHalfTrailSize;

		// BrnTrailRender.cpp:33
		const float32_t krTrailBaseLife;

		// BrnTrailRender.cpp:34
		const VecFloat kvOneOverTrailBaseLife;

	}

}

// BrnTrailRender.cpp:77
void BrnParticle::Native::TrailRenderer::EndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::EndRendering(/* parameters */);
}

// BrnTrailRender.cpp:217
void BrnParticle::Native::TrailRenderer::Construct(HeapMalloc *  lpHeapMalloc, BrnGraphics::Im3dSkidsRenderer *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailRender.cpp:56
void BrnParticle::Native::TrailRenderer::BeginRender(renderengine::Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::BeginRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnGraphics::Im3dSkidsRenderer::SetTransform(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
	{
	}
}

// BrnTrailRender.cpp:98
void BrnParticle::Native::TrailRenderer::Render(BrnParticle::Native::TrailEmitter **  lppEmitter, int32_t  lnEmitterCount, BrnParticle::Native::TrailParams *  lpParams, int8_t  luTrailTypeID, const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailRender.cpp:100
		int32_t lnBufferSize;

		// BrnTrailRender.cpp:101
		int32_t lnEmitterIndex;

		// BrnTrailRender.cpp:102
		BrnParticle::Native::TrailEmitter * lpEmitter;

		// BrnTrailRender.cpp:104
		VecFloat lvfCurrentTime;

		// BrnTrailRender.cpp:106
		const rw::math::vpu::Vector4 lColourScale;

		// BrnTrailRender.cpp:107
		const rw::math::vpu::Vector4 lStartColour;

		// BrnTrailRender.cpp:108
		const rw::math::vpu::Vector4 lEndColour;

		// BrnTrailRender.cpp:115
		const int liMaxNumVerts;

		// BrnTrailRender.cpp:116
		int liNumVertsUsed;

		// BrnTrailRender.cpp:117
		SkidVertex[256] lVerts;

		// BrnTrailRender.cpp:120
		const VecFloat lvZero;

		// BrnTrailRender.cpp:121
		const VecFloat lvOne;

		// BrnTrailRender.cpp:122
		const rw::math::vpu::Vector4 lv0100;

		// BrnTrailRender.cpp:123
		const VecFloat lvfOneOverBaseLife;

		// BrnTrailRender.cpp:124
		const rw::math::vpu::Vector3 lvMinusHalfTrailSize;

		// BrnTrailRender.cpp:125
		const rw::math::vpu::Vector3 lvHalfTrailSize;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	BrnGraphics::Im3dSkidsRenderer::SetBlendStartColour(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	BrnGraphics::Im3dSkidsRenderer::SetBlendEndColour(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::GetVector4_YAxis(/* parameters */);
	{
		// BrnTrailRender.cpp:143
		Vector3 lPosition;

		// BrnTrailRender.cpp:144
		Vector3 lTangent;

		// BrnTrailRender.cpp:145
		VecFloat lvfTimeStamp;

		// BrnTrailRender.cpp:146
		VecFloat lvfTimeProportion;

		// BrnTrailRender.cpp:147
		VecFloat lvfStrength;

		// BrnTrailRender.cpp:153
		const rw::math::vpu::Vector3 lPos;

		// BrnTrailRender.cpp:154
		const rw::math::vpu::Vector4 lUvTimeAlpha0;

		// BrnTrailRender.cpp:169
		int32_t lnIndex;

		// BrnTrailRender.cpp:170
		VecFloat lvfIndex;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		TrailSegmentCollection::ReadSegmentTime(/* parameters */);
		TrailSegmentCollection::ReadSegmentStrength(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::MultAdd(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		{
			// BrnTrailRender.cpp:175
			Vector3 lPosition;

			// BrnTrailRender.cpp:176
			Vector3 lTangent;

			// BrnTrailRender.cpp:177
			VecFloat lvfTimeStamp;

			// BrnTrailRender.cpp:178
			VecFloat lvfTimeProportion;

			// BrnTrailRender.cpp:179
			VecFloat lvfStrength;

			// BrnTrailRender.cpp:184
			const rw::math::vpu::Vector4 lUvTimeAlpha;

			rw::math::vpu::Vector4::Vector4(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			TrailSegmentCollection::ReadSegmentStrength(/* parameters */);
			TrailSegmentCollection::ReadSegmentTime(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::MultAdd(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		}
	}
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::Render(/* parameters */);
	BeginBatch<BrnGraphics::SkidVertex::VertexIterator>(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	{
		BrnGraphics::SkidVertex::VertexIterator::Write(/* parameters */);
	}
	EndBatch<BrnGraphics::SkidVertex::VertexIterator>(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::Render(/* parameters */);
	BeginBatch<BrnGraphics::SkidVertex::VertexIterator>(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	{
	}
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	EndBatch<BrnGraphics::SkidVertex::VertexIterator>(/* parameters */);
	BrnGraphics::SkidVertex::VertexIterator::Write(/* parameters */);
	{
	}
	{
	}
}

