// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiFontCollection.cpp:26
	const uint32_t KU_MAX_TYPEFACE_NAME_LENGTH = 128;

	// CgsGuiFontCollection.cpp:34
	const FontMapping[2] KA_FONT_MAP;

	// CgsGuiFontCollection.cpp:40
	const int32_t KI_FONT_MAP_COUNT = 2;

}

// CgsGuiFontCollection.cpp:29
struct CgsGui::FontMapping {
	// CgsGuiFontCollection.cpp:30
	const char * mpOriginal;

	// CgsGuiFontCollection.cpp:31
	const char * mpReplacement;

}

// CgsGuiFontCollection.cpp:157
void CgsGui::FontCollection::CountLoadedFonts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiFontCollection.cpp:159
		int32_t liNumFonts;

		// CgsGuiFontCollection.cpp:160
		int32_t liTypeface;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	}
}

// CgsGuiFontCollection.cpp
void CgsGui::FontCollection::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiFontCollection.cpp:57
		int32_t liTypeface;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	}
}

// CgsGuiFontCollection.cpp:73
void CgsGui::FontCollection::AddFont(const SafeResourceHandle<CgsResource::Font> &  lTypeface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiFontCollection.cpp:76
		int32_t liTypeface;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
	}
	{
		// CgsGuiFontCollection.cpp:86
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGuiFontCollection.cpp:98
void CgsGui::FontCollection::FindFont(const char *  lpcFontName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiFontCollection.cpp:104
		char[128] lacFontNameLower;

		// CgsGuiFontCollection.cpp:108
		int32_t liTypeface;

		// CgsGuiFontCollection.cpp:125
		int32_t liIndex;

	}
	CgsCore::StrnCpy(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiFontCollection.cpp:144
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

