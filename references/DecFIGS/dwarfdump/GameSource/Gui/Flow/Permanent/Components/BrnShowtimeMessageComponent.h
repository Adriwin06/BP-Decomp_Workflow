// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BrnShowtimeMessageComponent {
		// BrnShowtimeMessageComponent.h:91
		enum ComponentState {
			E_CS_INVALID = 0,
			E_CS_INVISIBLE = 1,
			E_CS_ENTERING = 2,
			E_CS_VISIBLE = 3,
			E_CS_HIDING = 4,
			E_CS_COUNT = 5,
		}

	}

}

// BrnShowtimeMessageComponent.h:58
struct BrnGui::BrnShowtimeMessageComponent : public BrnGui::BrnShowtimeMessageComponentBase {
private:
	// BrnShowtimeMessageComponent.h:103
	BrnGui::BrnShowtimeMessageComponent::ComponentState meComponentState;

public:
	// BrnShowtimeMessageComponent.cpp:41
	virtual void Construct(const void *, StateInterface *, const void *);

	// BrnShowtimeMessageComponent.cpp:58
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnShowtimeMessageComponent.cpp:79
	void Update();

	// BrnShowtimeMessageComponent.cpp:95
	void Show();

	// BrnShowtimeMessageComponent.cpp:112
	void Hide(bool);

private:
	// BrnShowtimeMessageComponent.cpp:144
	void HandleTransitionComplete();

	// BrnShowtimeMessageComponent.cpp:188
	void TransitionCompleteCallback(void *, uint16_t);

}

// BrnShowtimeMessageComponent.h:44
struct BrnGui::BrnShowtimeMessageComponentBase : public FlaptIconComponent {
}

// BrnShowtimeMessageComponent.h:44
struct BrnGui::BrnShowtimeMessageComponentBase : public BrnGui::FlaptIconComponent {
public:
	void BrnShowtimeMessageComponentBase(const BrnShowtimeMessageComponentBase &);

	void BrnShowtimeMessageComponentBase();

}

// BrnShowtimeMessageComponent.h:58
void BrnGui::BrnShowtimeMessageComponent::BrnShowtimeMessageComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnShowtimeMessageComponent.h:44
void BrnGui::BrnShowtimeMessageComponentBase::BrnShowtimeMessageComponentBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

