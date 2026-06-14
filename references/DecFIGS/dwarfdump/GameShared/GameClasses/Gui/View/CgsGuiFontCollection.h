// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiFontCollection.h:34
	const int32_t KI_MAX_NUM_TYPEFACES = 3;

}

// CgsGuiFontCollection.h:50
struct CgsGui::FontCollection {
private:
	// CgsGuiFontCollection.h:74
	SafeResourceHandle<CgsResource::Font>[3] maTypefaces;

public:
	// CgsGuiFontCollection.h:55
	void Construct();

	// CgsGuiFontCollection.h:60
	void AddFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsGuiFontCollection.h:65
	const SafeResourceHandle<CgsResource::Font> & FindFont(const char *) const;

	// CgsGuiFontCollection.h:69
	int32_t CountLoadedFonts() const;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiFontCollection.h:34
	const int32_t KI_MAX_NUM_TYPEFACES = 3;

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiFontCollection.h:34
	const int32_t KI_MAX_NUM_TYPEFACES = 3;

}

