// BrnGuiFlaptMedalIcon.h:101
extern const char *[11] maIconIdentifiers;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptMedalIcon {
		// BrnGuiFlaptMedalIcon.h:51
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

	// BrnGuiFlaptMedalIcon.h:113
	extern BrnGui::FlaptMedalIcon::EMedalIconStates operator--(BrnGui::FlaptMedalIcon::EMedalIconStates &, int);

	// BrnGuiFlaptMedalIcon.h:113
	extern BrnGui::FlaptMedalIcon::EMedalIconStates operator++(BrnGui::FlaptMedalIcon::EMedalIconStates &, int);

}

// BrnGuiFlaptMedalIcon.h:47
struct BrnGui::FlaptMedalIcon : public BrnGui::FlaptIconComponent {
protected:
	// BrnGuiFlaptMedalIcon.cpp:29
	extern const char *[11] maIconIdentifiers;

	// BrnGuiFlaptMedalIcon.h:103
	BrnGui::FlaptMedalIcon::EMedalIconStates meCurrentMedalState;

	// BrnGuiFlaptMedalIcon.h:105
	bool mbTransitioning;

public:
	// BrnGuiFlaptMedalIcon.cpp:60
	virtual void Construct(const void *, StateInterface *, const void *);

	// BrnGuiFlaptMedalIcon.cpp:78
	virtual void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnGuiFlaptMedalIcon.cpp:162
	void SetMedal(BrnGameState::ECurrentMedalTargetTime);

	// BrnGuiFlaptMedalIcon.cpp:217
	void MedalUp();

	// BrnGuiFlaptMedalIcon.cpp:244
	void MedalDown();

	// BrnGuiFlaptMedalIcon.h:127
	void Refresh();

protected:
	// BrnGuiFlaptMedalIcon.cpp:100
	void TransitionCompleteCallback(void *, uint16_t);

}

