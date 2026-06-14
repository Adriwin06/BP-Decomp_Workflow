// BrnFlaptRenderer.cpp:407
void BrnFlapt::FlaptRenderer::StopDrawingMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptRenderer.cpp:443
void BrnFlapt::FlaptRenderer::SetSpecialTextureShaderProgram(int32_t  liShaderProgram) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptRenderer.cpp:56
void BrnFlapt::FlaptRenderer::Construct(CgsGui::ImRendererSet *  lpImRenderSet, CgsGraphics::TextRenderer *  lpTextRenderer, LanguageManager *  lpLanguageManager, const CgsGui::FontCollection *  lpFonts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptRenderer.cpp:78
		Im2dTransform lScreenXForm;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::GetVector2_XAxis(/* parameters */);
	CgsGraphics::Im2dTransform::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVector2_YAxis(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Construct(/* parameters */);
	CgsGraphics::Im2dTransform::TransformByAspectRatio(/* parameters */);
	CgsContainers::Stack<std::uint16_t,2>::Construct(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	CgsGraphics::Im2dTransform::SetTransform(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Push(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::IsFull(/* parameters */);
}

// BrnFlaptRenderer.cpp:388
void BrnFlapt::FlaptRenderer::StartDrawingMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Stack<std::uint16_t,2>::IsFull(/* parameters */);
	CgsContainers::Stack<std::uint16_t,2>::Push(/* parameters */);
	{
		// BrnFlaptRenderer.cpp:390
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnFlaptRenderer.cpp:391
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFlaptRenderer.cpp:100
void BrnFlapt::FlaptRenderer::StartRenderingFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	{
	}
	{
	}
}

// BrnFlaptRenderer.cpp:120
void BrnFlapt::FlaptRenderer::EndRenderingFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptRenderer.cpp:292
void BrnFlapt::FlaptRenderer::RenderMask(const Mesh *  lpMesh, const FlaptFile *  lpFile, const FlaptFile::GuiTexture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptRenderer.cpp:303
		const GuiGeometryMesh::Im2dVertex * lpMeshVerts;

		// BrnFlaptRenderer.cpp:307
		GuiGeometryMesh::Im2dVertex[2] laMaskVerts;

		// BrnFlaptRenderer.cpp:310
		uint32_t luVert;

		// BrnFlaptRenderer.cpp:311
		GuiGeometryMesh::Im2dVertex lMinVert;

		// BrnFlaptRenderer.cpp:312
		GuiGeometryMesh::Im2dVertex lMaxVert;

		// BrnFlaptRenderer.cpp:331
		const const Im2dTransform & lTransform;

	}
	CgsContainers::Stack<std::uint16_t,2>::IsEmpty(/* parameters */);
	{
		// BrnFlaptRenderer.cpp:305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Basic2dColouredTexturedVertex(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	{
		// BrnFlaptRenderer.cpp:315
		const GuiGeometryMesh::Im2dVertex * lpVert;

		operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	}
	operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Peek(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::IsEmpty(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector4::GetX(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushMask(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
	}
	{
	}
	CgsContainers::Stack<std::uint16_t,2>::GetLength(/* parameters */);
	CgsContainers::Stack<std::uint16_t,2>::operator[](/* parameters */);
}

// BrnFlaptRenderer.cpp:175
void BrnFlapt::FlaptRenderer::SetShader(int32_t  liShader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFlaptRenderer.cpp:194
void BrnFlapt::FlaptRenderer::RenderMesh(const Mesh *  lpMesh, const FlaptFile *  lpFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptRenderer.cpp:203
		const FlaptFile::GuiTexture * lpTexture;

		// BrnFlaptRenderer.cpp:204
		bool lbIsSpecialTexture;

	}
	SetShader(/* parameters */);
	{
		// BrnFlaptRenderer.cpp:245
		const BlendState * lpNewBlendState;

		// BrnFlaptRenderer.cpp:246
		renderengine::Texture * lpNewTexture;

		// BrnFlaptRenderer.cpp:249
		uint8_t luFlags;

		CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Peek(/* parameters */);
		CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::IsEmpty(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::BatchTransformTextureBlendRenderStatic(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		{
		}
	}
	SetShader(/* parameters */);
	SetShader(/* parameters */);
	{
	}
}

// BrnFlaptRenderer.cpp:361
void BrnFlapt::FlaptRenderer::RenderTextField(const CgsGraphics::TextObject *  lpTextObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Peek(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::IsEmpty(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	{
	}
	SetShader(/* parameters */);
	{
	}
}

// BrnFlaptRenderer.cpp:421
void BrnFlapt::FlaptRenderer::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptRenderer.cpp:426
		uint32_t luMask;

	}
	CgsContainers::Stack<std::uint16_t,2>::IsEmpty(/* parameters */);
	{
		// BrnFlaptRenderer.cpp:423
		CgsDev::StrStream lStrStream;

	}
	CgsContainers::Stack<std::uint16_t,2>::Peek(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PopMask(/* parameters */);
	CgsContainers::Stack<std::uint16_t,2>::IsEmpty(/* parameters */);
	{
	}
	{
	}
	CgsContainers::Stack<std::uint16_t,2>::Pop(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnFlaptRenderer.cpp:27
// BrnFlaptRenderer.cpp:28
// BrnFlaptRenderer.cpp:29
// BrnFlaptRenderer.cpp:30
// BrnFlaptRenderer.cpp:32
// BrnFlaptRenderer.cpp:33
// BrnFlaptRenderer.cpp:34
// BrnFlaptRenderer.cpp:35
// BrnFlaptRenderer.cpp:36
// BrnFlaptRenderer.cpp:37
