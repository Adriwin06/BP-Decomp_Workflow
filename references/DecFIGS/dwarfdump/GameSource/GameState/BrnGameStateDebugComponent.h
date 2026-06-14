// BrnGameStateDebugComponent.h:131
extern const int32_t KI_SCORE_TEXT_LENGTH = 128;

// BrnGameStateDebugComponent.h:54
struct BrnGameState::GameStateDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnGameStateDebugComponent.h:131
	extern const int32_t KI_SCORE_TEXT_LENGTH = 128;

	// BrnGameStateDebugComponent.h:132
	extern const int32_t KI_LANDMARK_TEXT_LENGTH = 128;

	// BrnGameStateDebugComponent.h:134
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateDebugComponent.h:136
	bool mbShowUpComingRoadRules;

	// BrnGameStateDebugComponent.h:137
	bool mbDebugThisLandmark;

	// BrnGameStateDebugComponent.h:138
	bool mbDebugNextLandmark;

	// BrnGameStateDebugComponent.h:139
	bool mbDebugRenderFinishLines;

	// BrnGameStateDebugComponent.h:140
	bool mbDebugCheckpointTimes;

	// BrnGameStateDebugComponent.h:141
	bool mbDrawStuntBreakdown;

	// BrnGameStateDebugComponent.h:142
	bool mbDrawMiscInfo;

	// BrnGameStateDebugComponent.h:143
	int32_t meTrainingMessage;

	// BrnGameStateDebugComponent.h:145
	char[128] macScoreText;

public:
	// BrnGameStateDebugComponent.cpp:201
	void Construct(BrnGameState::GameStateModule *);

	// BrnGameStateDebugComponent.cpp:226
	void Destruct();

	// BrnGameStateDebugComponent.cpp:311
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnGameStateDebugComponent.cpp:533
	void RenderLandmarkDebug() const;

	// BrnGameStateDebugComponent.cpp:364
	void DrawRankNumber(int32_t);

protected:
	// BrnGameStateDebugComponent.cpp:240
	virtual const char * GetName() const;

	// BrnGameStateDebugComponent.cpp:252
	virtual void OnActivate();

	// BrnGameStateDebugComponent.cpp:297
	virtual void OnRegister();

	// BrnGameStateDebugComponent.cpp:390
	void RenderCurrentLandmarkInfo(DebugRender &, const Metrics &) const;

	// BrnGameStateDebugComponent.cpp:452
	void RenderNextLandmarkInfo(DebugRender &, const Metrics &) const;

private:
	// BrnGameStateDebugComponent.cpp:568
	void DrawUpcomingRoads(CgsDev::Debug2DImmediateRender *);

	// BrnGameStateDebugComponent.cpp:610
	void DrawStuntBreakdown(CgsDev::Debug2DImmediateRender *);

	// BrnGameStateDebugComponent.cpp:675
	int32_t FindRoadNameIndexFromId(CgsID);

	// BrnGameStateDebugComponent.cpp:693
	void ClearTrainingFlagsCallback(void *);

	// BrnGameStateDebugComponent.cpp:699
	void ToggleShowtimeCallback(void *);

	// BrnGameStateDebugComponent.cpp:705
	void PlayTrainingMessageCallback(void *);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateDebugComponent {
	public:
		GameStateDebugComponent();

	private:
		// BrnGameStateDebugComponent.h:131
		extern const int32_t KI_SCORE_TEXT_LENGTH = 128;

	}

}

// BrnGameStateDebugComponent.h:54
void BrnGameState::GameStateDebugComponent::GameStateDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

