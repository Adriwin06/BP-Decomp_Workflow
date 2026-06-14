// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AnimationComponent {
	public:
		// BrnAnimationComponent.h:64
		void Run(const char *);

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct AnimationComponent {
	public:
		// BrnAnimationComponent.h:64
		void Run(const char *);

	}

}

// BrnAnimationComponent.h:43
struct BrnGui::AnimationComponent : public CgsGui::GuiComponent {
public:
	void AnimationComponent(const AnimationComponent &);

	void AnimationComponent();

	// BrnAnimationComponent.h:64
	void Run(const char *);

}

// BrnAnimationComponent.h:43
void BrnGui::AnimationComponent::AnimationComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

