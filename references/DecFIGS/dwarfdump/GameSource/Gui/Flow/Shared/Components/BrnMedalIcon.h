// BrnMedalIcon.h:101
extern const const char *[11] maIconIdentifiers;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MedalIcon {
		// BrnMedalIcon.h:50
		enum EMedalIconStates {
			E_MEDALICON_INVISIBLE = 0,
			E_MEDALICON_NONE = 1,
			E_MEDALICON_NONE_TO_BRONZE = 2,
			E_MEDALICON_BRONZE_TO_NONE = 3,
			E_MEDALICON_BRONZE = 4,
			E_MEDALICON_BRONZE_TO_SILVER = 5,
			E_MEDALICON_SILVER_TO_BRONZE = 6,
			E_MEDALICON_SILVER = 7,
			E_MEDALICON_SILVER_TO_GOLD = 8,
			E_MEDALICON_GOLD_TO_SILVER = 9,
			E_MEDALICON_GOLD = 10,
			E_MEDALICON_COUNT = 11,
		}

	}

	// BrnMedalIcon.h:109
	extern BrnGui::MedalIcon::EMedalIconStates operator--(BrnGui::MedalIcon::EMedalIconStates &, int);

	// BrnMedalIcon.h:109
	extern BrnGui::MedalIcon::EMedalIconStates operator++(BrnGui::MedalIcon::EMedalIconStates &, int);

}

// BrnMedalIcon.h:46
struct BrnGui::MedalIcon : public BrnGui::IconComponent {
private:
	// BrnMedalIcon.cpp:25
	extern const const char *[11] maIconIdentifiers;

	// BrnMedalIcon.h:103
	BrnGui::MedalIcon::EMedalIconStates meCurrentMedalState;

	// BrnMedalIcon.h:105
	bool mbTransitioning;

public:
	// BrnMedalIcon.cpp:59
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnMedalIcon.cpp:80
	void HandleTransitionComplete(const char *);

	// BrnMedalIcon.cpp:142
	void SetMedal(BrnGameState::ECurrentMedalTargetTime);

	// BrnMedalIcon.cpp:197
	void MedalUp();

	// BrnMedalIcon.cpp:224
	void MedalDown();

	// BrnMedalIcon.h:124
	void Refresh();

}

