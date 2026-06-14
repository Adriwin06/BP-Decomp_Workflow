// CgsBillboardRenderer.cpp:73
void CgsGui::BillboardRenderer::SetUVTable(int32_t  liFramesX, int32_t  liFramesY, int32_t  liNumFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Max<int>(/* parameters */);
	{
		// CgsBillboardRenderer.cpp:89
		float32_t ud;

		// CgsBillboardRenderer.cpp:90
		float32_t vd;

		// CgsBillboardRenderer.cpp:93
		int32_t liUVIndex;

		{
			// CgsBillboardRenderer.cpp:94
			int32_t i;

			{
				// CgsBillboardRenderer.cpp:96
				int col;

				// CgsBillboardRenderer.cpp:97
				int row;

				// CgsBillboardRenderer.cpp:98
				float32_t u;

				// CgsBillboardRenderer.cpp:99
				float32_t v;

			}
		}
	}
}

// CgsBillboardRenderer.cpp:130
void CgsGui::BillboardRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::Resource::Resource(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

// CgsBillboardRenderer.cpp:50
void CgsGui::BillboardRenderer::Construct(rw::IResourceAllocator *  lpAllocator, int32_t  liMaxBillboards, const TextureState *  lpTextureState, const BlendState *  lpBlendState, int32_t  liFramesX, int32_t  liFramesY, int32_t  liNumFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsBillboardRenderer.cpp:163
void CgsGui::BillboardRenderer::Render(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const BillboardInfo *  laBillboards, int32_t  liNumBillboards) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBillboardRenderer.cpp:178
		int32_t liRenderedParticleIndex;

	}
	{
		// CgsBillboardRenderer.cpp:180
		int32_t i;

		{
			// CgsBillboardRenderer.cpp:182
			const const BillboardInfo & Billboard;

			// CgsBillboardRenderer.cpp:183
			const Basic2dColouredVertex::Vector2 lv2BillboardPos;

			// CgsBillboardRenderer.cpp:184
			const Basic2dColouredVertex::Vector2 lv2BillboardSize;

			// CgsBillboardRenderer.cpp:187
			int32_t TexFrame;

			// CgsBillboardRenderer.cpp:188
			bool bOutOfRange;

			// CgsBillboardRenderer.cpp:189
			bool bBlank;

			// CgsBillboardRenderer.cpp:210
			const float32_t * uv;

			// CgsBillboardRenderer.cpp:212
			GuiGeometryMesh::Im2dVertex * QuadVert;

			// CgsBillboardRenderer.cpp:215
			float32_t lfX1;

			// CgsBillboardRenderer.cpp:216
			float32_t lfX2;

			// CgsBillboardRenderer.cpp:217
			float32_t lfY1;

			// CgsBillboardRenderer.cpp:218
			float32_t lfY2;

		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	}
	{
		// CgsBillboardRenderer.cpp:274
		bool lbIsInARenderingBlock;

		// CgsBillboardRenderer.cpp:286
		int32_t liNumVerts;

		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	}
	{
		// CgsBillboardRenderer.cpp:229
		float32_t dx;

		// CgsBillboardRenderer.cpp:230
		float32_t dy;

		rw::math::fpu::Cos(/* parameters */);
		rw::math::fpu::Sin(/* parameters */);
	}
	{
		// CgsBillboardRenderer.cpp:202
		const int RepeatEvery;

	}
	{
	}
	{
	}
	{
	}
	{
	}
}

// CgsBillboardRenderer.cpp:25
