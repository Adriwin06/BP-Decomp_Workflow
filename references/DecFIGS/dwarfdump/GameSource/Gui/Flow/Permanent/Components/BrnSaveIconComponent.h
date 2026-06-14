// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BrnSaveIconComponent {
		// BrnSaveIconComponent.h:80
		enum ComponentState {
			E_CS_INVISIBLE = 0,
			E_CS_VISIBLE = 1,
		}

	}

}

// BrnSaveIconComponent.h:59
struct BrnGui::BrnSaveIconComponent : public BrnGui::FlaptIconComponent {
private:
	// BrnSaveIconComponent.h:86
	BrnGui::BrnSaveIconComponent::ComponentState meComponentState;

public:
	void BrnSaveIconComponent(const BrnSaveIconComponent &);

	void BrnSaveIconComponent();

	// BrnSaveIconComponent.h:66
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnSaveIconComponent.h:70
	void Update();

	// BrnSaveIconComponent.h:73
	void ShowSaveIcon();

	// BrnSaveIconComponent.h:76
	void HideSaveIcon();

}

// BrnSaveIconComponent.h:59
void BrnGui::BrnSaveIconComponent::BrnSaveIconComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

