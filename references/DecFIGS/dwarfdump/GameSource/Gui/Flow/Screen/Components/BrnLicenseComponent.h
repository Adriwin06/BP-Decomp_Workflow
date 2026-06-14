// BrnLicenseComponent.h:49
extern const int32_t KI_MAX_RANK = 5;

// BrnLicenseComponent.h:207
extern const int32_t KI_MAX_REQUIRED_RANKS = 2;

// BrnLicenseComponent.h:208
extern const float32_t KF_REQUIRED_WINS_TICK_UP_RATE;

// BrnLicenseComponent.h:216
extern char[] KAC_UPGRADE_STRINGID;

// BrnLicenseComponent.h:217
extern char[] KAC_ONE_UPGRADE_STRINGID;

// BrnLicenseComponent.h:219
extern char[] KAC_ELITE_UPGRADE_STRINGID;

// BrnLicenseComponent.h:220
extern char[] KAC_ONE_ELITE_UPGRADE_STRINGID;

// BrnLicenseComponent.h:222
extern char[] KAC_PERCENTAGE_COMPLETE_STRINGID;

// BrnLicenseComponent.h:224
extern char[] KAC_RANK_BASE_TEMPLATE;

// BrnLicenseComponent.h:225
extern char[] KAC_RANK_UP_BASE_TEMPLATE;

// BrnLicenseComponent.h:227
extern char[] KAC_PLAYERNAME_TEXTFIELD_NAME;

// BrnLicenseComponent.h:228
extern char[] KAC_NEXT_RANK_TEXTFIELD_NAME;

// BrnLicenseComponent.h:229
extern char[] KAC_DATE_ISSUED_TEXTFIELD_NAME;

// BrnLicenseComponent.h:231
extern char[] KAC_DIRT_CONTROL_VAR;

// BrnLicenseComponent.h:247
extern char[] KAC_COMPLETIONMONTHFIELD_NAME;

// BrnLicenseComponent.h:248
extern char[] KAC_COMPLETIONDATEFIELD_NAME;

// BrnLicenseComponent.h:249
extern char[] KAC_COMPLETIONYEARFIELD_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LicenseComponent {
		// BrnLicenseComponent.h:178
		enum ELicenseStates {
			E_LICENSE_CONSTRUCTED = 0,
			E_LICENSE_DATA_SUPPLIED = 1,
			E_LICENSE_FIRST_RESOURCE_LOADED = 2,
			E_LICENSE_SHOWING_NORMAL = 3,
			E_LICENSE_SHOWING_UPGRADE_PENDING = 4,
			E_LICENSE_SHOWING_TRANSOUT = 5,
			E_LICENSE_UPGRADING_OLD_LICENSE_LEAVING = 6,
			E_LICENSE_FIRST_RESOURCE_UNLOADING = 7,
			E_LICENSE_FIRST_RESOURCE_UNLOADED = 8,
			E_LICENSE_SECOND_RESOURCE_LOADING = 9,
			E_LICENSE_SECOND_RESOURCE_LOADED = 10,
			E_LICENSE_UPGRADING_NEW_LICENSE_INITIALISING = 11,
			E_LICENSE_UPGRADING_NEW_LICENSE_WAITING = 12,
			E_LICENSE_UPGRADING_NEW_LICENSE_ARRIVING = 13,
			E_LICENSE_UPGRADING_ADDING_REQUIRED_WINS = 14,
			E_LICENSE_UPGRADING_DONE = 15,
			E_LICENSE_RESOURCES_UNLOADED = 16,
			E_LICENSE_COUNT = 17,
		}

	}

}

// BrnLicenseComponent.h:46
struct BrnGui::LicenseComponent : public BrnGui::IconComponent {
	// BrnLicenseComponent.h:49
	extern const int32_t KI_MAX_RANK = 5;

private:
	// BrnLicenseComponent.h:207
	extern const int32_t KI_MAX_REQUIRED_RANKS = 2;

	// BrnLicenseComponent.cpp:30
	extern const float32_t KF_REQUIRED_WINS_TICK_UP_RATE;

	// BrnLicenseComponent.cpp:32
	extern sResourceTuple[6] KA_LICENSE_RESOURCES_AVAILABLE;

	// BrnLicenseComponent.cpp:42
	extern sResourceTuple KA_ELITE_LICENSE_RESOURCE;

	// BrnLicenseComponent.cpp:43
	extern sResourceTuple KA_FINISHED_ELITE_LICENSE_RESOURCE;

	// BrnLicenseComponent.cpp:45
	extern int32_t KI_NUM_LICENSE_RESOURCES;

	// BrnLicenseComponent.cpp:48
	extern const char[16] KAC_UPGRADE_STRINGID;

	// BrnLicenseComponent.cpp:49
	extern const char[25] KAC_ONE_UPGRADE_STRINGID;

	// BrnLicenseComponent.cpp:51
	extern const char[22] KAC_ELITE_UPGRADE_STRINGID;

	// BrnLicenseComponent.cpp:52
	extern const char[31] KAC_ONE_ELITE_UPGRADE_STRINGID;

	// BrnLicenseComponent.cpp:54
	extern const char[24] KAC_PERCENTAGE_COMPLETE_STRINGID;

	// BrnLicenseComponent.cpp:58
	extern const char[7] KAC_RANK_BASE_TEMPLATE;

	// BrnLicenseComponent.cpp:59
	extern const char[9] KAC_RANK_UP_BASE_TEMPLATE;

	// BrnLicenseComponent.cpp:61
	extern const char[11] KAC_PLAYERNAME_TEXTFIELD_NAME;

	// BrnLicenseComponent.cpp:62
	extern const char[14] KAC_NEXT_RANK_TEXTFIELD_NAME;

	// BrnLicenseComponent.cpp:63
	extern const char[17] KAC_DATE_ISSUED_TEXTFIELD_NAME;

	// BrnLicenseComponent.cpp:56
	extern const char[14] KAC_DIRT_CONTROL_VAR;

	// BrnLicenseComponent.h:233
	sResourceTuple[2] maLicenseResourcesToLoad;

	// BrnLicenseComponent.h:234
	int32_t miNumResourcesToLoad;

	// BrnLicenseComponent.h:236
	BrnGui::GuiCache * mpGuiCache;

	// BrnLicenseComponent.h:237
	Profile * mpProfile;

	// BrnLicenseComponent.h:239
	BrnGui::TextField mPlayerNameTextField;

	// BrnLicenseComponent.h:240
	BrnGui::TextField mNextRankTextField;

	// BrnLicenseComponent.h:241
	BrnGui::TextField mDateIssuedTextField;

	// BrnLicenseComponent.h:243
	BrnGui::TextField mCompletionMonthField;

	// BrnLicenseComponent.h:244
	BrnGui::TextField mCompletionDateField;

	// BrnLicenseComponent.h:245
	BrnGui::TextField mCompletionYearField;

	// BrnLicenseComponent.cpp:65
	extern const char[14] KAC_COMPLETIONMONTHFIELD_NAME;

	// BrnLicenseComponent.cpp:66
	extern const char[13] KAC_COMPLETIONDATEFIELD_NAME;

	// BrnLicenseComponent.cpp:67
	extern const char[13] KAC_COMPLETIONYEARFIELD_NAME;

	// BrnLicenseComponent.h:251
	bool mbAtTopRank;

	// BrnLicenseComponent.h:252
	bool mbElite;

	// BrnLicenseComponent.h:253
	bool mbFinishedGame;

	// BrnLicenseComponent.h:255
	int32_t miCurrentRank;

	// BrnLicenseComponent.h:256
	int32_t miWinsInCurrentRank;

	// BrnLicenseComponent.h:258
	int32_t miPercentComplete;

	// BrnLicenseComponent.h:260
	bool mbVisible;

	// BrnLicenseComponent.h:261
	bool mbHiding;

	// BrnLicenseComponent.h:263
	BrnGui::LicenseComponent::ELicenseStates meCurrentLicenseState;

	// BrnLicenseComponent.h:265
	bool mbShowUpgradePending;

	// BrnLicenseComponent.h:266
	bool mbShowPoints;

	// BrnLicenseComponent.h:267
	bool mbForceCentred;

	// BrnLicenseComponent.h:269
	float32_t mfRequiredWinsTickUpRate;

	// BrnLicenseComponent.h:271
	float32_t mfTimeToShowNextRank;

	// BrnLicenseComponent.h:272
	float32_t mfTimeToNextWinIncrement;

	// BrnLicenseComponent.h:274
	bool mbShowingProfilePicture;

public:
	// BrnLicenseComponent.cpp:91
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnLicenseComponent.cpp:143
	void AppendExpectedAptComponent(BrnGui::GuiFlow);

	// BrnLicenseComponent.cpp:167
	void OnLoad();

	// BrnLicenseComponent.cpp:200
	void ReleaseResources();

	// BrnLicenseComponent.cpp:232
	bool HandleAptLoadTriggers(const GuiEventAptTrigger *);

	// BrnLicenseComponent.cpp:294
	bool HandleAptTransitionTriggers(const GuiEventAptTrigger *);

	// BrnLicenseComponent.cpp:399
	void Update();

	// BrnLicenseComponent.cpp:551
	void SetPlayerInfo(const char *, bool, bool, int32_t, int32_t, bool, bool);

	// BrnLicenseComponent.cpp:716
	void SetPosition(Vector2);

	// BrnLicenseComponent.cpp:743
	void ShowLicense(bool);

	// BrnLicenseComponent.cpp:814
	void ShowUpgradedLicense(float32_t, bool);

	// BrnLicenseComponent.cpp:868
	void HideLicense();

	// BrnLicenseComponent.cpp:904
	void AddWin();

	// BrnLicenseComponent.cpp:988
	void ShowScore();

	// BrnLicenseComponent.cpp:1019
	void RankUp(float32_t, float32_t, bool);

	// BrnLicenseComponent.cpp:1095
	void SetVisible(bool);

	// BrnLicenseComponent.h:325
	bool IsVisible() const;

	// BrnLicenseComponent.h:309
	bool IsHiding() const;

	// BrnLicenseComponent.h:364
	void SetCachePointer(BrnGui::GuiCache *);

	// BrnLicenseComponent.h:382
	void SetProfilePointer(Profile *);

	// BrnLicenseComponent.cpp:1198
	void SendPlayerPictureEvent();

	// BrnLicenseComponent.cpp:1274
	void SetPercentageComplete(int32_t);

	// BrnLicenseComponent.h:418
	bool EnsureResourcesAreLoaded();

	// BrnLicenseComponent.h:446
	bool EnsureResourcesAreUnloaded();

	// BrnLicenseComponent.h:464
	bool IsReady();

private:
	// BrnLicenseComponent.cpp:1160
	void UpdateDirt();

	// BrnLicenseComponent.h:341
	void SetRank(int32_t);

	// BrnLicenseComponent.cpp:1229
	void StartOutputtingGamerpic();

	// BrnLicenseComponent.cpp:1255
	void StopOutputtingGamerpic();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct LicenseComponent {
	public:
		// BrnLicenseComponent.h:325
		bool IsVisible() const;

		// BrnLicenseComponent.h:464
		bool IsReady();

		// BrnLicenseComponent.h:309
		bool IsHiding() const;

		// BrnLicenseComponent.h:418
		bool EnsureResourcesAreLoaded();

		// BrnLicenseComponent.h:446
		bool EnsureResourcesAreUnloaded();

		// BrnLicenseComponent.h:364
		void SetCachePointer(BrnGui::GuiCache *);

		// BrnLicenseComponent.h:382
		void SetProfilePointer(Profile *);

		// Unknown accessibility
		// BrnLicenseComponent.h:49
		extern const int32_t KI_MAX_RANK = 5;

	private:
		// BrnLicenseComponent.h:207
		extern const int32_t KI_MAX_REQUIRED_RANKS = 2;

		// BrnLicenseComponent.h:208
		extern const float32_t KF_REQUIRED_WINS_TICK_UP_RATE;

		// BrnLicenseComponent.h:216
		extern char[] KAC_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:217
		extern char[] KAC_ONE_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:219
		extern char[] KAC_ELITE_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:220
		extern char[] KAC_ONE_ELITE_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:222
		extern char[] KAC_PERCENTAGE_COMPLETE_STRINGID;

		// BrnLicenseComponent.h:224
		extern char[] KAC_RANK_BASE_TEMPLATE;

		// BrnLicenseComponent.h:225
		extern char[] KAC_RANK_UP_BASE_TEMPLATE;

		// BrnLicenseComponent.h:227
		extern char[] KAC_PLAYERNAME_TEXTFIELD_NAME;

		// BrnLicenseComponent.h:228
		extern char[] KAC_NEXT_RANK_TEXTFIELD_NAME;

		// BrnLicenseComponent.h:229
		extern char[] KAC_DATE_ISSUED_TEXTFIELD_NAME;

		// BrnLicenseComponent.h:231
		extern char[] KAC_DIRT_CONTROL_VAR;

		// BrnLicenseComponent.h:247
		extern char[] KAC_COMPLETIONMONTHFIELD_NAME;

		// BrnLicenseComponent.h:248
		extern char[] KAC_COMPLETIONDATEFIELD_NAME;

		// BrnLicenseComponent.h:249
		extern char[] KAC_COMPLETIONYEARFIELD_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LicenseComponent {
	public:
		LicenseComponent();

		// Unknown accessibility
		// BrnLicenseComponent.h:49
		extern const int32_t KI_MAX_RANK = 5;

	private:
		// BrnLicenseComponent.h:207
		extern const int32_t KI_MAX_REQUIRED_RANKS = 2;

		// BrnLicenseComponent.h:208
		extern const float32_t KF_REQUIRED_WINS_TICK_UP_RATE;

		// BrnLicenseComponent.h:216
		extern char[] KAC_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:217
		extern char[] KAC_ONE_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:219
		extern char[] KAC_ELITE_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:220
		extern char[] KAC_ONE_ELITE_UPGRADE_STRINGID;

		// BrnLicenseComponent.h:222
		extern char[] KAC_PERCENTAGE_COMPLETE_STRINGID;

		// BrnLicenseComponent.h:224
		extern char[] KAC_RANK_BASE_TEMPLATE;

		// BrnLicenseComponent.h:225
		extern char[] KAC_RANK_UP_BASE_TEMPLATE;

		// BrnLicenseComponent.h:227
		extern char[] KAC_PLAYERNAME_TEXTFIELD_NAME;

		// BrnLicenseComponent.h:228
		extern char[] KAC_NEXT_RANK_TEXTFIELD_NAME;

		// BrnLicenseComponent.h:229
		extern char[] KAC_DATE_ISSUED_TEXTFIELD_NAME;

		// BrnLicenseComponent.h:231
		extern char[] KAC_DIRT_CONTROL_VAR;

		// BrnLicenseComponent.h:247
		extern char[] KAC_COMPLETIONMONTHFIELD_NAME;

		// BrnLicenseComponent.h:248
		extern char[] KAC_COMPLETIONDATEFIELD_NAME;

		// BrnLicenseComponent.h:249
		extern char[] KAC_COMPLETIONYEARFIELD_NAME;

	}

}

// BrnLicenseComponent.h:46
void BrnGui::LicenseComponent::LicenseComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

