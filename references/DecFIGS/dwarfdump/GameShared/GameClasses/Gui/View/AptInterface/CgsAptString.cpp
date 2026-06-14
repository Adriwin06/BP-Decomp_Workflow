// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsAptString.cpp:33
	const uint32_t KU_MAX_LOWER_STRING_LENGTH = 128;

	// CgsAptString.cpp:35
	const char * KC_GRADIENT_FONT_STRING;

	// CgsAptString.cpp:36
	const char * KC_DROPSHADOW_FONT_STRING;

	// CgsAptString.cpp:37
	const char * KC_EMBOSSED_FONT_STRING;

	// CgsAptString.cpp:39
	const char * KC_FONT_SPACING_STRING_CONDENSED;

	// CgsAptString.cpp:41
	const char * KC_GRADIENT_RANGE_STRING_ORANGE;

	// CgsAptString.cpp:42
	const char * KC_GRADIENT_RANGE_STRING_GREENBLUE;

	// CgsAptString.cpp:43
	const char * KC_GRADIENT_RANGE_STRING_RED;

	// CgsAptString.cpp:44
	const char * KC_GRADIENT_RANGE_STRING_GOLD;

	// CgsAptString.cpp:45
	const char * KC_GRADIENT_RANGE_STRING_SILVER;

	// CgsAptString.cpp:46
	const char * KC_GRADIENT_RANGE_STRING_BLUEWHITE;

	// CgsAptString.cpp:48
	const float32_t KF_FONT_SPACING_CONDENSED;

	// CgsAptString.cpp:49
	const float32_t KF_FONT_SPACING_STRETCHED;

	// CgsAptString.cpp:51
	const RGBA K_COLOUR_BLACK;

	// CgsAptString.cpp:52
	const RGBA K_COLOUR_WHITE;

	// CgsAptString.cpp:54
	RGBA[2] K_COLOUR_GRADIENT_GREEN_BLUE;

	// CgsAptString.cpp:57
	RGBA[2] K_COLOUR_GRADIENT_ORANGE;

	// CgsAptString.cpp:60
	RGBA[2] K_COLOUR_GRADIENT_RED;

	// CgsAptString.cpp:63
	RGBA[2] K_COLOUR_GRADIENT_GOLD;

	// CgsAptString.cpp:66
	RGBA[2] K_COLOUR_GRADIENT_SILVER;

	// CgsAptString.cpp:69
	RGBA[2] K_COLOUR_GRADIENT_BLUEWHITE;

}

// CgsAptString.cpp:412
void CgsGui::CgsAptString::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptString.cpp:396
void CgsGui::CgsAptString::Construct(const RGBA *  lpAlternateTextColours, int32_t  liNumAlternateColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptString.cpp:92
void CgsGui::CgsAptString::Prepare(const CgsGui::FontCollection *  lpFonts, AptAllocateStringParameters *  lpParameters, UnicodeBuffer::CgsUtf8 *  lpcStringBuffer, CgsGui::CgsAptString::ETextEffects  leEffect, float32_t  leCharSpacingMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptString.cpp:101
		AptRenderHandler * lpRenderHandler;

		// CgsAptString.cpp:246
		float32_t lfOffsetX;

		// CgsAptString.cpp:247
		float32_t lfOffsetY;

		// CgsAptString.cpp:248
		float32_t lfScaleOffset;

		// CgsAptString.cpp:251
		AptStringAlignment leAlignment;

		// CgsAptString.cpp:355
		const UnicodeBuffer::CgsUtf8 * lpStartLineString;

		// CgsAptString.cpp:356
		uint32_t luNumLines;

		// CgsAptString.cpp:378
		float32_t lfTextWidth;

	}
	AptAux::GetRenderHandler(/* parameters */);
	{
		// CgsAptString.cpp:117
		char[128] lacFontNameLower;

		CgsCore::StrnCpy(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
	}
	AptRenderHandler::RGBAFromAptColour(/* parameters */);
	AptRenderHandler::RGBAFromAptColour(/* parameters */);
	{
		// CgsAptString.cpp:182
		TextBackground lBackgroundColours;

		AptRenderHandler::RGBAFromAptColour(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	std(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	{
		// CgsAptString.cpp:303
		const char * lpString;

		CgsGraphics::TextObject::SetText(/* parameters */);
		{
			// CgsAptString.cpp:312
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:377
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:324
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsGraphics::TextObject::SetText(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:297
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:95
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:100
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:304
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptString.cpp:429
void CgsGui::CgsAptString::SetText(const UnicodeBuffer::CgsUtf8 *  lpNewText, UnicodeBuffer::CgsUtf8 *  lpcStringBuffer, bool  lbLocalised) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptString.cpp:437
		AptRenderHandler * lpRenderHandler;

	}
	AptAux::GetRenderHandler(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	{
		// CgsAptString.cpp:469
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptString.cpp:445
		const UnicodeBuffer::CgsUtf8 * lpString;

		CgsGraphics::TextObject::SetText(/* parameters */);
		{
			// CgsAptString.cpp:454
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		// CgsAptString.cpp:480
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsGraphics::TextObject::SetText(/* parameters */);
}

