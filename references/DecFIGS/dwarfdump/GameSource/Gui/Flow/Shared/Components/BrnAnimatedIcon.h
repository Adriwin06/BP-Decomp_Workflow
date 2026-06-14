// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AnimatedIconComponent {
		// BrnAnimatedIcon.h:66
		enum EAnimState {
			E_ANIMSTATE_INVISIBLE = 0,
			E_ANIMSTATE_TRANSITIONIN = 1,
			E_ANIMSTATE_IDLE = 2,
			E_ANIMSTATE_TRANSITIONOUT = 3,
			E_ANIMSTATE_COUNT = 4,
		}

	private:
		// BrnAnimatedIcon.cpp:68
		void SetAnimState(BrnGui::AnimatedIconComponent::EAnimState);

	public:
		// BrnAnimatedIcon.cpp:51
		void Construct(const char *, StateInterface *, const char *const*, const char *);

	private:
		// BrnAnimatedIcon.cpp:24
		extern const char[14] macAnimState;

		// BrnAnimatedIcon.cpp:26
		extern const const char *[4] maAnimStateIdentifiers;

	}

}

