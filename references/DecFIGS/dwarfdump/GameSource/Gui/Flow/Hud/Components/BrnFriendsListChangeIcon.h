// BrnFriendsListChangeIcon.h:53
struct BrnGui::FriendsListChangeIconComponent : public BrnGui::FlaptIconComponent {
private:
	// BrnFriendsListChangeIcon.h:85
	bool mbShowing;

public:
	void FriendsListChangeIconComponent(const FriendsListChangeIconComponent &);

	void FriendsListChangeIconComponent();

	// BrnFriendsListChangeIcon.h:61
	void Construct(const char *, StateInterface *, const char *);

	// BrnFriendsListChangeIcon.h:68
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnFriendsListChangeIcon.h:73
	void AnimateIn();

	// BrnFriendsListChangeIcon.h:77
	void ShowNow();

	// BrnFriendsListChangeIcon.h:81
	void Hide();

}

// BrnFriendsListChangeIcon.h:53
void BrnGui::FriendsListChangeIconComponent::FriendsListChangeIconComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

