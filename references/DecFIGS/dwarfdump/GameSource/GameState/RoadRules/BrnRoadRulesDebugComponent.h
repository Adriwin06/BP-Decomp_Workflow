// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RoadRulesDebugComponent {
	private:
		// BrnRoadRulesDebugComponent.h:100
		extern const float32_t KF_PAR_SCORES_X;

		// BrnRoadRulesDebugComponent.h:101
		extern const float32_t KF_PLAYER_SCORES_X;

		// BrnRoadRulesDebugComponent.h:102
		extern const float32_t KF_NET_SCORES_X;

		// BrnRoadRulesDebugComponent.h:103
		extern const float32_t KF_ROAD_NAME_X;

		// BrnRoadRulesDebugComponent.h:104
		extern const float32_t KF_SCORES_Y;

	}

}

// BrnRoadRulesDebugComponent.h:100
extern const float32_t KF_PAR_SCORES_X;

// BrnRoadRulesDebugComponent.h:101
extern const float32_t KF_PLAYER_SCORES_X;

// BrnRoadRulesDebugComponent.h:102
extern const float32_t KF_NET_SCORES_X;

// BrnRoadRulesDebugComponent.h:103
extern const float32_t KF_ROAD_NAME_X;

// BrnRoadRulesDebugComponent.h:104
extern const float32_t KF_SCORES_Y;

// BrnRoadRulesDebugComponent.h:49
struct BrnGameState::RoadRulesDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnRoadRulesDebugComponent.cpp:34
	extern const float32_t KF_PAR_SCORES_X;

	// BrnRoadRulesDebugComponent.cpp:35
	extern const float32_t KF_PLAYER_SCORES_X;

	// BrnRoadRulesDebugComponent.cpp:36
	extern const float32_t KF_NET_SCORES_X;

	// BrnRoadRulesDebugComponent.cpp:38
	extern const float32_t KF_ROAD_NAME_X;

	// BrnRoadRulesDebugComponent.cpp:37
	extern const float32_t KF_SCORES_Y;

	// BrnRoadRulesDebugComponent.h:106
	BrnGameState::RoadRulesManager * mpRoadRulesManager;

	// BrnRoadRulesDebugComponent.h:107
	bool mbRenderInfo;

	// BrnRoadRulesDebugComponent.h:108
	bool mbRenderTimes;

public:
	// BrnRoadRulesDebugComponent.cpp:50
	void Construct(BrnGameState::RoadRulesManager *);

	// BrnRoadRulesDebugComponent.cpp:65
	void Destruct();

	// BrnRoadRulesDebugComponent.cpp:127
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnRoadRulesDebugComponent.cpp:234
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnRoadRulesDebugComponent.cpp:246
	void DecreaseCurrentTime();

	// BrnRoadRulesDebugComponent.cpp:262
	void DecreaseCurrentStuntTime();

	// BrnRoadRulesDebugComponent.cpp:278
	void AddCrashScore();

	// BrnRoadRulesDebugComponent.cpp:292
	void DecreaseCurrentTimeCallback(void *);

	// BrnRoadRulesDebugComponent.cpp:306
	void DecreaseCurrentStuntTimeCallback(void *);

	// BrnRoadRulesDebugComponent.cpp:320
	void AddCrashScoreCallback(void *);

protected:
	// BrnRoadRulesDebugComponent.cpp:80
	virtual const char * GetName() const;

	// BrnRoadRulesDebugComponent.cpp:93
	virtual const char * GetPath() const;

	// BrnRoadRulesDebugComponent.cpp:106
	virtual void OnActivate();

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RoadRulesDebugComponent {
	public:
		RoadRulesDebugComponent();

	private:
		// BrnRoadRulesDebugComponent.h:100
		extern const float32_t KF_PAR_SCORES_X;

		// BrnRoadRulesDebugComponent.h:101
		extern const float32_t KF_PLAYER_SCORES_X;

		// BrnRoadRulesDebugComponent.h:102
		extern const float32_t KF_NET_SCORES_X;

		// BrnRoadRulesDebugComponent.h:103
		extern const float32_t KF_ROAD_NAME_X;

		// BrnRoadRulesDebugComponent.h:104
		extern const float32_t KF_SCORES_Y;

	}

}

// BrnRoadRulesDebugComponent.h:49
void BrnGameState::RoadRulesDebugComponent::RoadRulesDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

