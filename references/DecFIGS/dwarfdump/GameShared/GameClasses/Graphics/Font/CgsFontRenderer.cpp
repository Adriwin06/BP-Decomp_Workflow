// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsFontRenderer.cpp:487
	RGBA8 Neg(RGBA8);

	// CgsFontRenderer.cpp:421
	RGBA Interpolate(RGBA, RGBA, float32_t);

	// CgsFontRenderer.cpp:462
	RGBA8 Min(RGBA8, RGBA8);

	// CgsFontRenderer.cpp:31
	extern const uint32_t KU_OUTLINE_COUNT = 8;

	// CgsFontRenderer.cpp:32
	extern const float32_t KF_OUTLINE_WIDTH;

	// CgsFontRenderer.cpp:33
	extern const uint32_t KU_BORDER_COUNT = 4;

	// CgsFontRenderer.cpp:34
	extern const float32_t KF_BORDER_WIDTH;

	// CgsFontRenderer.cpp:26
	const uint32_t KU_BORDER_TOPLEFT;

	// CgsFontRenderer.cpp:27
	const uint32_t KU_BORDER_TOPRIGHT = 1;

	// CgsFontRenderer.cpp:28
	const uint32_t KU_BORDER_BOTTOMLEFT = 2;

	// CgsFontRenderer.cpp:29
	const uint32_t KU_BORDER_BOTTOMRIGHT = 3;

	// CgsFontRenderer.cpp:35
	const float32_t KF_ITALIC_EXTENT;

	// CgsFontRenderer.cpp:36
	const float32_t KF_DROPSHADOW_X;

	// CgsFontRenderer.cpp:37
	const float32_t KF_DROPSHADOW_Y;

	// CgsFontRenderer.cpp:38
	const float32_t KF_EMBOSS_X;

	// CgsFontRenderer.cpp:39
	const float32_t KF_EMBOSS_Y;

	// CgsFontRenderer.cpp:41
	const RGBA K_COLOUR_BLACK;

	// CgsFontRenderer.cpp:42
	const RGBA K_COLOUR_WHITE;

	// CgsFontRenderer.cpp:45
	const float32_t[5] KAF_ALIGNMENT_MULTIPLIERS;

	// CgsFontRenderer.cpp:54
	BasicColouredTexturedVertex::Vector2U_32[4] KAV2_BORDER_OFFSETS;

	// CgsFontRenderer.cpp:62
	const BasicColouredTexturedVertex::Vector2U_32 KAV2_DROPSHADOW_OFFSETS;

	// CgsFontRenderer.cpp:63
	const BasicColouredTexturedVertex::Vector2U_32 KAV2_EMBOSS_OFFSETS;

	// CgsFontRenderer.cpp:64
	const Vector3U_32 KAV3_DROPSHADOW_OFFSETS;

	// CgsFontRenderer.cpp:76
	const float32_t KF_GRADIENT_SCALE;

	// CgsFontRenderer.cpp:78
	const float32_t KF_EMBOSSED_CUTOFF_HEIGHT;

}

// CgsFontRenderer.cpp:267
void CgsGraphics::TextRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:277
		int32_t liRenderingType;

	}
}

// CgsFontRenderer.cpp:242
void CgsGraphics::TextObject::CalculateAutosizing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:245
		float32_t lfFontHeight;

		// CgsFontRenderer.cpp:246
		float32_t lfTextAreaWidth;

		{
			// CgsFontRenderer.cpp:251
			float32_t lfProportionOver;

			rw::math::fpu::Max<float>(/* parameters */);
		}
	}
}

// CgsFontRenderer.cpp:106
void CgsGraphics::TextObject::Construct(const RGBA *  lpAlternateTextColours, int32_t  liNumAlternateColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
}

// CgsFontRenderer.cpp:158
void CgsGraphics::TextObject::GetNumLinesAndStartLine(uint32_t  luStartLine, const UnicodeBuffer::CgsUtf8 **  lppLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:166
		float32_t lfCurrentFontHeight;

		// CgsFontRenderer.cpp:168
		const float32_t lrProportionalWidth;

		// CgsFontRenderer.cpp:169
		const UnicodeBuffer::CgsUtf8 * lpString;

		// CgsFontRenderer.cpp:170
		uint32_t luNumLines;

		// CgsFontRenderer.cpp:171
		const UnicodeBuffer::CgsUtf8 * lpStringEnd;

	}
	{
		// CgsFontRenderer.cpp:179
		bool lbNewLineFound;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFontRenderer.cpp:1688
void CgsGraphics::TextRenderer::RenderBufferRenderStart(uint32_t  luNumVertices, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:1690
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1705
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFontRenderer.cpp:1848
void CgsGraphics::TextRenderer::RenderBufferSetBlendState(const BlendState *const  lpBlendState, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
}

// CgsFontRenderer.cpp:1782
void CgsGraphics::TextRenderer::RenderBufferSetTextureState(const TextureState *const  lpTextureState, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
}

// CgsFontRenderer.cpp:1727
void CgsGraphics::TextRenderer::RenderBufferRenderEnd(const renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices, const uint32_t  luNumVertices, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:1731
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1749
		Im3dVertex * lpDestVertices;

		// CgsFontRenderer.cpp:1750
		const ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpInVert;

		// CgsFontRenderer.cpp:1751
		Im3dVertex * lpOutVert;

		// CgsFontRenderer.cpp:1753
		uint32_t luVertex;

		{
			// CgsFontRenderer.cpp:1746
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		// CgsFontRenderer.cpp:1745
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFontRenderer.cpp:1647
void CgsGraphics::TextRenderer::RenderBorder(BasicColouredTexturedVertex::Vector2U_32 &  lTopLeft, BasicColouredTexturedVertex::Vector2U_32 &  lBottomRight, RGBA  lBorderColour, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:1649
		const uint32_t KU_NUM_VERTS_FOR_BORDER;

		// CgsFontRenderer.cpp:1651
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpOutVerts;

	}
	{
		// CgsFontRenderer.cpp:1667
		uint32_t luVertex;

		rw::math::fpu::operator+<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::operator+<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::operator+<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::operator+<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::operator+<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
}

// CgsFontRenderer.cpp:1609
void CgsGraphics::TextRenderer::RenderBackground(BasicColouredTexturedVertex::Vector2U_32 &  lTopLeft, BasicColouredTexturedVertex::Vector2U_32 &  lBottomRight, const const TextBackground &  lBackground, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:1611
		const uint32_t KU_NUM_VERTS_FOR_BACKGROUND;

		// CgsFontRenderer.cpp:1613
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpOutVerts;

	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsFontRenderer.cpp:1549
void CgsGraphics::TextRenderer::RenderEmboss(CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:1551
		uint32_t luVertex;

		// CgsFontRenderer.cpp:1552
		uint32_t luVertexCount;

		// CgsFontRenderer.cpp:1553
		const ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpInVert;

		// CgsFontRenderer.cpp:1554
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpOutVerts;

		// CgsFontRenderer.cpp:1555
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpOutVert;

	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
}

// CgsFontRenderer.cpp:1483
void CgsGraphics::TextRenderer::RenderDropShadow(const const RGBA &  lDropShadowColour, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:1485
		uint32_t luVertex;

		// CgsFontRenderer.cpp:1486
		uint32_t luVertexCount;

		// CgsFontRenderer.cpp:1487
		const ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpInVert;

	}
	{
		// CgsFontRenderer.cpp:1515
		Im3dVertex * lpOutVerts;

		{
			// CgsFontRenderer.cpp:1518
			Im3dVertex * lpOutVert;

		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		// CgsFontRenderer.cpp:1493
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpOutVerts;

		{
			// CgsFontRenderer.cpp:1496
			ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpOutVert;

			rw::math::fpu::operator+<float>(/* parameters */);
			rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		}
	}
}

// CgsFontRenderer.cpp:395
void CgsGraphics::TextRenderer::ItaliciseVertices(ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVertices, float32_t  lfBottomEdge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFontRenderer.cpp:966
void CgsGraphics::TextRenderer::RenderStringFadingY(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const const TextObject &  lTextObject, float32_t  lfTopFadeStart, float32_t  lfTopFadeEnd, float32_t  lfBottomFadeStart, float32_t  lfBottomFadeEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:973
		const uint32_t KU_NUM_VERTS_PER_CHARACTER;

		// CgsFontRenderer.cpp:985
		SafeResourceHandle<CgsResource::Font> lpFont;

		// CgsFontRenderer.cpp:987
		float32_t lfCurrentFontHeight;

		// CgsFontRenderer.cpp:989
		const UnicodeBuffer::CgsUtf8 * lpUtf8String;

		// CgsFontRenderer.cpp:990
		float32_t lfLeft;

		// CgsFontRenderer.cpp:991
		float32_t lfTop;

		// CgsFontRenderer.cpp:992
		float32_t lfVColourScale;

		// CgsFontRenderer.cpp:993
		Basic2dColouredVertex::Vector2 lUVScale;

		// CgsFontRenderer.cpp:994
		Basic2dColouredVertex::Vector2 lCursor;

		// CgsFontRenderer.cpp:995
		float32_t lfProportionalWidth;

		// CgsFontRenderer.cpp:996
		const FontChar * lpFontChar;

		// CgsFontRenderer.cpp:997
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpVerts;

		// CgsFontRenderer.cpp:998
		const UnicodeBuffer::CgsUtf8 * lpUtf8StringEnd;

		// CgsFontRenderer.cpp:1000
		RGBA lGradientColour1;

		// CgsFontRenderer.cpp:1001
		RGBA lGradientColour2;

		// CgsFontRenderer.cpp:1003
		int32_t liAlternateColour;

		// CgsFontRenderer.cpp:1005
		uint32_t luLineLength;

		// CgsFontRenderer.cpp:1017
		bool lbNewLineFound;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
	}
	rw::math::fpu::operator*<float>(/* parameters */);
	{
		// CgsFontRenderer.cpp:1167
		bool lbOutOfBox;

		// CgsFontRenderer.cpp:1181
		uint32_t luVertexCount;

		{
			// CgsFontRenderer.cpp:1242
			Basic2dColouredVertex::Vector2 lStartTimesScale;

			// CgsFontRenderer.cpp:1243
			Basic2dColouredVertex::Vector2 lScaleTimesSize;

			// CgsFontRenderer.cpp:1244
			Basic2dColouredVertex::Vector2 lTopLeft;

			// CgsFontRenderer.cpp:1245
			Basic2dColouredVertex::Vector2 lBottomRight;

			// CgsFontRenderer.cpp:1248
			float32_t lfTopVInterp;

			// CgsFontRenderer.cpp:1256
			float32_t lfBottomVInterp;

			// CgsFontRenderer.cpp:1264
			float32_t lfTopFade;

			// CgsFontRenderer.cpp:1271
			float32_t lfBottomFade;

			{
				// CgsFontRenderer.cpp:1328
				float32_t lfTopColourScale;

				// CgsFontRenderer.cpp:1329
				float32_t lfBottomColourScale;

				{
					// CgsFontRenderer.cpp:1334
					RGBA8 lTopColour;

					// CgsFontRenderer.cpp:1335
					RGBA8 lBottomColour;

					Interpolate(/* parameters */);
					Min(/* parameters */);
					renderengine::RGBA8::RGBA8(/* parameters */);
				}
			}
		}
	}
	{
		// CgsFontRenderer.cpp:1059
		float32_t lfLineWidth;

		// CgsFontRenderer.cpp:1060
		float32_t lfOffsetX;

		// CgsFontRenderer.cpp:1090
		const UnicodeBuffer::CgsUtf8 * lpUtf8CurrChar;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsUnicode::IncrementUtf8Pointer(/* parameters */);
		{
			// CgsFontRenderer.cpp:1095
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			TextObject::GetText(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsFontRenderer.cpp:1139
		bool lbFoundNonWhiteSpace;

		// CgsFontRenderer.cpp:1140
		const UnicodeBuffer::CgsUtf8 * lpUtf8CurrChar;

		{
			// CgsFontRenderer.cpp:1146
			UnicodeBuffer::CgsUtf8 lCurrChar;

		}
		CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1075
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1102
		const uint32_t luStringLengthInBytes;

		// CgsFontRenderer.cpp:1105
		float32_t lfLineWidth;

		// CgsFontRenderer.cpp:1106
		float32_t lfOffsetX;

		TextObject::GetStringWidth(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
		// CgsFontRenderer.cpp:1308
		float32_t lfLeftU;

		// CgsFontRenderer.cpp:1309
		float32_t lfTopV;

		// CgsFontRenderer.cpp:1310
		float32_t lfRightU;

		// CgsFontRenderer.cpp:1311
		float32_t lfBottomV;

		// CgsFontRenderer.cpp:1314
		float32_t lfCorrectedTopV;

		// CgsFontRenderer.cpp:1315
		float32_t lfCorrectedBottomV;

		rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	Interpolate(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	{
		// CgsFontRenderer.cpp:1380
		float32_t lfBottomEdge;

		ItaliciseVertices(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1385
		uintptr_t luAddress;

	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		// CgsFontRenderer.cpp:1206
		const UnicodeBuffer::CgsUtf8 * lpUtf8NumberEnd;

		// CgsFontRenderer.cpp:1207
		int32_t liNumber;

		// CgsFontRenderer.cpp:1208
		int32_t liNumDigits;

	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsFontRenderer.cpp:1235
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1236
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1350
		RGBA8 lTopColour;

		// CgsFontRenderer.cpp:1351
		RGBA8 lBottomColour;

		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
		renderengine::RGBA8::SetAlpha(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1440
		bool lbEmboss;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1364
		RGBA8 lTopColour;

		// CgsFontRenderer.cpp:1365
		RGBA8 lBottomColour;

		renderengine::RGBA8::RGBA8(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:1020
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFontRenderer.cpp:508
void CgsGraphics::TextRenderer::RenderStringInternal(const const TextObject &  lTextObject, CgsGraphics::TextRenderer::EImRenderingType  leRenderingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:512
		const uint32_t KU_NUM_VERTS_PER_CHARACTER;

		// CgsFontRenderer.cpp:524
		SafeResourceHandle<CgsResource::Font> lpFont;

		// CgsFontRenderer.cpp:526
		float32_t lfCurrentFontHeight;

		// CgsFontRenderer.cpp:528
		const UnicodeBuffer::CgsUtf8 * lpUtf8String;

		// CgsFontRenderer.cpp:529
		float32_t lfLeft;

		// CgsFontRenderer.cpp:530
		float32_t lfTop;

		// CgsFontRenderer.cpp:531
		float32_t lfVColourScale;

		// CgsFontRenderer.cpp:532
		Basic2dColouredVertex::Vector2 lUVScale;

		// CgsFontRenderer.cpp:533
		Basic2dColouredVertex::Vector2 lCursor;

		// CgsFontRenderer.cpp:534
		float32_t lfProportionalWidth;

		// CgsFontRenderer.cpp:535
		const FontChar * lpFontChar;

		// CgsFontRenderer.cpp:536
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpVerts;

		// CgsFontRenderer.cpp:537
		const UnicodeBuffer::CgsUtf8 * lpUtf8StringEnd;

		// CgsFontRenderer.cpp:539
		RGBA lGradientColour1;

		// CgsFontRenderer.cpp:540
		RGBA lGradientColour2;

		// CgsFontRenderer.cpp:542
		int32_t liAlternateColour;

		// CgsFontRenderer.cpp:544
		uint32_t luLineLength;

		// CgsFontRenderer.cpp:556
		bool lbNewLineFound;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
	}
	rw::math::fpu::operator*<float>(/* parameters */);
	{
		// CgsFontRenderer.cpp:711
		uint32_t luVertexCount;

		{
			// CgsFontRenderer.cpp:820
			float32_t lfTopColourScale;

			// CgsFontRenderer.cpp:821
			float32_t lfBottomColourScale;

			{
				// CgsFontRenderer.cpp:825
				RGBA8 lTopColour;

				// CgsFontRenderer.cpp:826
				RGBA8 lBottomColour;

				Interpolate(/* parameters */);
				Min(/* parameters */);
				renderengine::RGBA8::RGBA8(/* parameters */);
			}
		}
	}
	{
		// CgsFontRenderer.cpp:598
		float32_t lfLineWidth;

		// CgsFontRenderer.cpp:599
		float32_t lfOffsetX;

		// CgsFontRenderer.cpp:629
		const UnicodeBuffer::CgsUtf8 * lpUtf8CurrChar;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsUnicode::IncrementUtf8Pointer(/* parameters */);
		{
			// CgsFontRenderer.cpp:634
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			TextObject::GetText(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsFontRenderer.cpp:678
		bool lbFoundNonWhiteSpace;

		// CgsFontRenderer.cpp:679
		const UnicodeBuffer::CgsUtf8 * lpUtf8CurrChar;

		{
			// CgsFontRenderer.cpp:685
			UnicodeBuffer::CgsUtf8 lCurrChar;

		}
		CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:614
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:641
		const uint32_t luStringLengthInBytes;

		// CgsFontRenderer.cpp:644
		float32_t lfLineWidth;

		// CgsFontRenderer.cpp:645
		float32_t lfOffsetX;

		TextObject::GetStringWidth(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
		// CgsFontRenderer.cpp:773
		float32_t lfLeftU;

		// CgsFontRenderer.cpp:774
		float32_t lfTopV;

		// CgsFontRenderer.cpp:775
		float32_t lfRightU;

		// CgsFontRenderer.cpp:776
		float32_t lfBottomV;

		rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:803
		Basic2dColouredVertex::Vector2 lStartTimesScale;

		// CgsFontRenderer.cpp:804
		Basic2dColouredVertex::Vector2 lScaleTimesSize;

		// CgsFontRenderer.cpp:806
		Basic2dColouredVertex::Vector2 lTopLeft;

		// CgsFontRenderer.cpp:807
		Basic2dColouredVertex::Vector2 lBottomRight;

	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	Interpolate(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	{
		// CgsFontRenderer.cpp:859
		float32_t lfBottomEdge;

		ItaliciseVertices(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:864
		uintptr_t luAddress;

	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		// CgsFontRenderer.cpp:736
		const UnicodeBuffer::CgsUtf8 * lpUtf8NumberEnd;

		// CgsFontRenderer.cpp:737
		int32_t liNumber;

		// CgsFontRenderer.cpp:738
		int32_t liNumDigits;

	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsFontRenderer.cpp:765
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:766
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:838
		RGBA8 lColour;

		renderengine::RGBA8::RGBA8(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:919
		bool lbEmboss;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFontRenderer.cpp:559
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFontRenderer.cpp:323
void CgsGraphics::TextRenderer::RenderString(CgsGraphics::Im3dRenderBuffer *  lpIm3dRenderBuffer, const const TextObject &  lTextObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFontRenderer.cpp:300
void CgsGraphics::TextRenderer::RenderString(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const const TextObject &  lTextObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFontRenderer.cpp:80
// CgsFontRenderer.cpp:81
