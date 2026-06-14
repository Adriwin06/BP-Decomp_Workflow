// BrnModeManagerDebugComponent.h:54
struct BrnGameState::ModeManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnModeManagerDebugComponent.h:130
	BrnGameState::ModeManager * mpModeManager;

	// BrnModeManagerDebugComponent.h:132
	bool mbShowModeInfo;

	// BrnModeManagerDebugComponent.h:133
	bool mbInfiniteLives;

	// BrnModeManagerDebugComponent.h:135
	int32_t miFinishPosition;

public:
	// BrnModeManagerDebugComponent.cpp:200
	void Construct(BrnGameState::ModeManager *);

	// BrnModeManagerDebugComponent.cpp:217
	void Destruct();

	// BrnModeManagerDebugComponent.cpp:292
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnModeManagerDebugComponent.cpp:363
	void DebugGetPlayerListTableEntry(const InGamePlayerStatusData *, const InGamePlayerStatusData *, BrnGameState::ScoringSystem *, int32_t, int32_t, char *, RGBA *);

	// BrnModeManagerDebugComponent.cpp:536
	void DebugRenderOnlinePlayerList(const InGamePlayerStatusInterface *);

	// BrnModeManagerDebugComponent.cpp:629
	void DebugRenderOnlinePlayerTeamStatus(const InGamePlayerStatusInterface *);

	// BrnModeManagerDebugComponent.cpp:756
	void DebugRenderOnlineLeader(const InGamePlayerStatusInterface *);

	// BrnModeManagerDebugComponent.cpp:860
	void DebugRenderOnlineTimer(Time);

	// BrnModeManagerDebugComponent.cpp:900
	void DebugRenderEventTimer(Time, Time);

	// BrnModeManagerDebugComponent.cpp:962
	void DebugGetDistanceString(char *, float_t);

	// BrnModeManagerDebugComponent.h:108
	void ShowShowtimeInfo();

	// BrnModeManagerDebugComponent.cpp:273
	void FinshMode(void *);

	// BrnModeManagerDebugComponent.cpp:279
	void EndCurrentGamemodeWithMedal();

protected:
	// BrnModeManagerDebugComponent.cpp:231
	virtual const char * GetName() const;

	// BrnModeManagerDebugComponent.cpp:996
	virtual const char * GetPath() const;

	// BrnModeManagerDebugComponent.cpp:243
	virtual void OnActivate();

}

// BrnModeManagerDebugComponent.h:54
void BrnGameState::ModeManagerDebugComponent::ModeManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

