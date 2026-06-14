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

