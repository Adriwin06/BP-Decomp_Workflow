// BrnOnlineLoadingPlayer.h:109
extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

// BrnOnlineLoadingPlayer.h:110
extern char[] KAC_CAMERA_ICON_NAME;

// BrnOnlineLoadingPlayer.h:111
extern char[] KAC_CROWN_ICON_NAME;

// BrnOnlineLoadingPlayer.h:112
extern char[] KAC_LIVE_REVENGE_ICON_NAME;

// BrnOnlineLoadingPlayer.h:113
extern char[] KAC_TEAM_ICON_NAME;

// BrnOnlineLoadingPlayer.h:114
extern char[] KAC_VOIP_ICON_NAME;

// BrnOnlineLoadingPlayer.h:42
struct BrnGui::OnlineLoadingPlayer : public CgsGui::GuiComponent {
private:
	// BrnOnlineLoadingPlayer.cpp:21
	extern const char[12] KAC_GAMERTAG_TEXTFIELD_NAME;

	// BrnOnlineLoadingPlayer.cpp:22
	extern const char[14] KAC_CAMERA_ICON_NAME;

	// BrnOnlineLoadingPlayer.cpp:23
	extern const char[13] KAC_CROWN_ICON_NAME;

	// BrnOnlineLoadingPlayer.cpp:24
	extern const char[19] KAC_LIVE_REVENGE_ICON_NAME;

	// BrnOnlineLoadingPlayer.cpp:25
	extern const char[12] KAC_TEAM_ICON_NAME;

	// BrnOnlineLoadingPlayer.cpp:26
	extern const char[12] KAC_VOIP_ICON_NAME;

	// BrnOnlineLoadingPlayer.h:117
	BrnGui::TextField mGamertag;

	// BrnOnlineLoadingPlayer.h:118
	BrnGui::IconComponent mCameraIcon;

	// BrnOnlineLoadingPlayer.h:119
	BrnGui::IconComponent mCrownIcon;

	// BrnOnlineLoadingPlayer.h:120
	BrnGui::IconComponent mLiveRevengeIcon;

	// BrnOnlineLoadingPlayer.h:121
	BrnGui::IconComponent mTeamIcon;

	// BrnOnlineLoadingPlayer.h:122
	BrnGui::IconComponent mVOIPIcon;

	// BrnOnlineLoadingPlayer.h:125
	BrnGameState::GameStateModuleIO::EPlayerTeam meTeam;

	// BrnOnlineLoadingPlayer.h:126
	bool mbCrowned;

	// BrnOnlineLoadingPlayer.h:127
	bool mbGamertagSet;

	// BrnOnlineLoadingPlayer.h:128
	bool mbVOIPActive;

public:
	// BrnOnlineLoadingPlayer.cpp:49
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnOnlineLoadingPlayer.cpp:77
	bool HandleLoadNotification(const char *);

	// BrnOnlineLoadingPlayer.cpp:116
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnOnlineLoadingPlayer.cpp:137
	void Show();

	// BrnOnlineLoadingPlayer.cpp:152
	void Hide();

	// BrnOnlineLoadingPlayer.h:144
	void SetCameraConnected(bool);

	// BrnOnlineLoadingPlayer.h:167
	void SetCrown(bool);

	// BrnOnlineLoadingPlayer.h:194
	void SetGamertag(const char *);

	// BrnOnlineLoadingPlayer.h:216
	void SetLiveRevenge(const LiveRevengeRelationship *);

	// BrnOnlineLoadingPlayer.h:264
	void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnOnlineLoadingPlayer.h:305
	void SetVOIPActive(bool);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineLoadingPlayer {
	public:
		// BrnOnlineLoadingPlayer.h:167
		void SetCrown(bool);

		// BrnOnlineLoadingPlayer.h:194
		void SetGamertag(const char *);

		// BrnOnlineLoadingPlayer.h:216
		void SetLiveRevenge(const LiveRevengeRelationship *);

		// BrnOnlineLoadingPlayer.h:144
		void SetCameraConnected(bool);

		// BrnOnlineLoadingPlayer.h:264
		void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

		// BrnOnlineLoadingPlayer.h:305
		void SetVOIPActive(bool);

	private:
		// BrnOnlineLoadingPlayer.h:109
		extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnOnlineLoadingPlayer.h:110
		extern char[] KAC_CAMERA_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:111
		extern char[] KAC_CROWN_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:112
		extern char[] KAC_LIVE_REVENGE_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:113
		extern char[] KAC_TEAM_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:114
		extern char[] KAC_VOIP_ICON_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineLoadingPlayer {
	public:
		OnlineLoadingPlayer();

	private:
		// BrnOnlineLoadingPlayer.h:109
		extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnOnlineLoadingPlayer.h:110
		extern char[] KAC_CAMERA_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:111
		extern char[] KAC_CROWN_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:112
		extern char[] KAC_LIVE_REVENGE_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:113
		extern char[] KAC_TEAM_ICON_NAME;

		// BrnOnlineLoadingPlayer.h:114
		extern char[] KAC_VOIP_ICON_NAME;

	}

}

// BrnOnlineLoadingPlayer.h:42
void BrnGui::OnlineLoadingPlayer::OnlineLoadingPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

