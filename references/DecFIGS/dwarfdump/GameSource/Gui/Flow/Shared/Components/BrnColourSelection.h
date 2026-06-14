// BrnColourSelection.h:110
extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

// BrnColourSelection.h:46
struct BrnGui::ColourSelection : public BrnGui::SelectableGroup {
private:
	// BrnColourSelection.h:103
	extern const uint32_t KU_MAX_COLOUR_SELECTION_NAME_LEN = 128;

	// BrnColourSelection.h:110
	extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

	// BrnColourSelection.h:112
	BrnGui::ColourSelectionItem[100] maSelectionItems;

	// BrnColourSelection.h:113
	BrnGui::ColourField mColourField;

	// BrnColourSelection.h:114
	BrnGui::ColourField mColourFieldOutline;

public:
	// BrnColourSelection.cpp:42
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnColourSelection.cpp:69
	void SetupColourSelection(int32_t, bool, const rw::math::vpu::Vector4 **, uint64_t *);

	// BrnColourSelection.cpp:134
	void SetupColourSelectionGradient(int32_t, bool, const rw::math::vpu::Vector4 **, const rw::math::vpu::Vector4 **, uint64_t *);

	// BrnColourSelection.cpp:198
	void SetItemColour(int32_t, const rw::math::vpu::Vector4 *);

	// BrnColourSelection.cpp:218
	void SetItemGradient(int32_t, const rw::math::vpu::Vector4 *, const rw::math::vpu::Vector4 *);

	// BrnColourSelection.cpp:278
	void Hide();

	// BrnColourSelection.cpp:291
	void Show();

	// BrnColourSelection.cpp:236
	virtual void Update();

private:
	// BrnColourSelection.h:129
	uint32_t GetUint32ColourFromVector4(const rw::math::vpu::Vector4 *);

}

// BrnColourSelection.h:103
extern const uint32_t KU_MAX_COLOUR_SELECTION_NAME_LEN = 128;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ColourSelection {
	public:
		ColourSelection();

	private:
		// BrnColourSelection.h:110
		extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

	}

}

// BrnColourSelection.h:46
void BrnGui::ColourSelection::ColourSelection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

