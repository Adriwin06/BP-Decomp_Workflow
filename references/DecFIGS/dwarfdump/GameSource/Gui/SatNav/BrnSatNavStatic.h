// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SatNavStatic {
	public:
		// BrnSatNavStatic.h:56
		void TriggerStatic();

	}

}

// BrnSatNavStatic.h:43
struct BrnGui::SatNavStatic : public CgsGui::GuiComponent {
public:
	void SatNavStatic(const SatNavStatic &);

	void SatNavStatic();

	// BrnSatNavStatic.h:56
	void TriggerStatic();

}

// BrnSatNavStatic.h:43
void BrnGui::SatNavStatic::SatNavStatic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

