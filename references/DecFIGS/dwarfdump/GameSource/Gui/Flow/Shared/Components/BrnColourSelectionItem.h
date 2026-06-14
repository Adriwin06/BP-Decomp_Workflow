// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ColourSelectionItem {
	public:
		// BrnColourSelectionItem.cpp:65
		void SetColour(const rw::math::vpu::Vector4 *);

		// BrnColourSelectionItem.cpp:82
		void SetGradient(const rw::math::vpu::Vector4 *, const rw::math::vpu::Vector4 *);

		// BrnColourSelectionItem.h:135
		bool GetIsGradient() const;

		// BrnColourSelectionItem.h:116
		void GetGradient(const rw::math::vpu::Vector4 **, const rw::math::vpu::Vector4 **) const;

		// BrnColourSelectionItem.h:101
		const rw::math::vpu::Vector4 * GetColour() const;

		// BrnColourSelectionItem.cpp:42
		void Construct(const char *, StateInterface *, const char *, uint64_t);

	}

}

// BrnColourSelectionItem.h:43
struct BrnGui::ColourSelectionItem : public BrnGui::Selectable {
private:
	// BrnColourSelectionItem.h:85
	const rw::math::vpu::Vector4 * mpcSelectionColour1;

	// BrnColourSelectionItem.h:86
	const rw::math::vpu::Vector4 * mpcSelectionColour2;

	// BrnColourSelectionItem.h:88
	bool mbIsGradient;

public:
	void ColourSelectionItem(const ColourSelectionItem &);

	void ColourSelectionItem();

	// BrnColourSelectionItem.h:52
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnColourSelectionItem.h:57
	void SetColour(const rw::math::vpu::Vector4 *);

	// BrnColourSelectionItem.h:101
	const rw::math::vpu::Vector4 * GetColour() const;

	// BrnColourSelectionItem.h:67
	void SetGradient(const rw::math::vpu::Vector4 *, const rw::math::vpu::Vector4 *);

	// BrnColourSelectionItem.h:116
	void GetGradient(const rw::math::vpu::Vector4 **, const rw::math::vpu::Vector4 **) const;

	// BrnColourSelectionItem.h:135
	bool GetIsGradient() const;

	// BrnColourSelectionItem.h:148
	virtual void Select();

}

// BrnColourSelectionItem.h:43
void BrnGui::ColourSelectionItem::ColourSelectionItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

