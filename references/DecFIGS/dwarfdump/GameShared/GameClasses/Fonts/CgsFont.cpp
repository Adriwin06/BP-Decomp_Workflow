// CgsFont.cpp:372
void CgsResource::Font::CreateTextureState(const rw::IResourceAllocator &  lAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.cpp:375
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMipMapLODBias(/* parameters */);
	}
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsFont.cpp:53
void CgsResource::Font::GetStringWidth(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.cpp:55
		bool lbAlternateTextColour;

		// CgsFont.cpp:56
		float32_t lfLength;

		// CgsFont.cpp:57
		const FontChar * lpFontChar;

	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFont.cpp:59
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

// CgsFont.cpp:122
void CgsResource::Font::GetStringWidthIgnoringNewlines(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.cpp:124
		bool lbAlternateTextColour;

		// CgsFont.cpp:125
		float32_t lfLength;

		// CgsFont.cpp:126
		const FontChar * lpFontChar;

	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		// CgsFont.cpp:128
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFont.cpp:201
void CgsResource::Font::GetStringStartAndEnd(const UnicodeBuffer::CgsUtf8 *  lpUtf8String, float32_t  lfWidth, const UnicodeBuffer::CgsUtf8 **  lppOutStart, const UnicodeBuffer::CgsUtf8 **  lppOutEnd, bool  lbForceWrap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.cpp:203
		float32_t lfLength;

		// CgsFont.cpp:204
		float32_t lfLastLength;

		// CgsFont.cpp:205
		float32_t lfMaxLength;

		// CgsFont.cpp:206
		float32_t lfActualLength;

		// CgsFont.cpp:207
		bool8_t lbFoundSpace;

		// CgsFont.cpp:208
		const FontChar * lpFontChar;

		// CgsFont.cpp:209
		const UnicodeBuffer::CgsUtf8 * lpUtf8StringEnd;

		rw::math::fpu::Vector2Template<float>::GetX(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsUnicode::DecrementUtf8Pointer(/* parameters */);
	CgsUnicode::IncrementUtf8Pointer(/* parameters */);
	CgsUnicode::DecrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsUnicode::DecrementUtf8Pointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

