// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BurnoutSkillsManager {
		// BrnGuiBurnoutSkillsManager.h:106
		enum EBurnoutSkillsShowingType {
			E_BURNOUT_SKILLS_SHOWING_TYPE_NONE = 0,
			E_BURNOUT_SKILLS_SHOWING_TYPE_AUTO_ROTATE = 1,
			E_BURNOUT_SKILLS_SHOWING_TYPE_SELECT = 2,
			E_BURNOUT_SKILLS_SHOWING_TYPE_NEW_SCORE = 3,
			E_BURNOUT_SKILLS_SHOWING_TYPE_ROAD_RULE_ACTIVE = 4,
			E_BURNOUT_SKILLS_SHOWING_TYPE_COUNT = 5,
		}

	}

}

// BrnGuiBurnoutSkillsManager.h:56
struct BrnGui::BurnoutSkillsManager {
private:
	// BrnGuiBurnoutSkillsManager.h:118
	extern float32_t[] KAF_MINIMUM_HUD_MESSAGE_SKILLS_LEVEL;

	// BrnGuiBurnoutSkillsManager.h:120
	extern const float32_t KF_ROTATION_TIME;

	// BrnGuiBurnoutSkillsManager.h:121
	extern const float32_t KF_NEW_PAUSE_TIME;

	// BrnGuiBurnoutSkillsManager.h:123
	BurnoutSkillzData[8] maSkillzData;

	// BrnGuiBurnoutSkillsManager.h:124
	RoadRulesRecvData::NetworkPlayerID[8] maNetworkIds;

	// BrnGuiBurnoutSkillsManager.h:126
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType meCurrentSkill;

	// BrnGuiBurnoutSkillsManager.h:127
	BrnGui::BurnoutSkillsManager::EBurnoutSkillsShowingType meCurrentShowingType;

	// BrnGuiBurnoutSkillsManager.h:128
	BrnGui::GuiCache * mpCache;

	// BrnGuiBurnoutSkillsManager.h:129
	float32_t mfTimeToNextChange;

	// BrnGuiBurnoutSkillsManager.h:131
	EActiveRaceCarIndex[12] maeCurrentRecordHolder;

public:
	// BrnGuiBurnoutSkillsManager.h:62
	void Construct(BrnGui::GuiCache *);

	// BrnGuiBurnoutSkillsManager.h:66
	void Update();

	// BrnGuiBurnoutSkillsManager.h:70
	void ResetSkillsData();

	// BrnGuiBurnoutSkillsManager.h:74
	void SelectNext();

	// BrnGuiBurnoutSkillsManager.h:81
	void SetSkillsData(EActiveRaceCarIndex, const GuiNewBurnoutSkillzEvent *, CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiBurnoutSkillsManager.h:85
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType GetCurrentSkill() const;

	// BrnGuiBurnoutSkillsManager.h:91
	float32_t GetBurnoutSkillForARC(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, EActiveRaceCarIndex) const;

	// BrnGuiBurnoutSkillsManager.h:96
	void ResetPlayerData(EActiveRaceCarIndex);

	// BrnGuiBurnoutSkillsManager.h:101
	void SetRoadRuleMode(BrnGameState::EActiveRoadRule);

private:
	// BrnGuiBurnoutSkillsManager.h:136
	void YouBeatSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType);

	// BrnGuiBurnoutSkillsManager.h:140
	void SelectNextSkill();

}

// BrnGuiBurnoutSkillsManager.h:118
extern float32_t[] KAF_MINIMUM_HUD_MESSAGE_SKILLS_LEVEL;

// BrnGuiBurnoutSkillsManager.h:120
extern const float32_t KF_ROTATION_TIME;

// BrnGuiBurnoutSkillsManager.h:121
extern const float32_t KF_NEW_PAUSE_TIME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BurnoutSkillsManager {
		// BrnGuiBurnoutSkillsManager.h:106
		enum EBurnoutSkillsShowingType {
			E_BURNOUT_SKILLS_SHOWING_TYPE_NONE = 0,
			E_BURNOUT_SKILLS_SHOWING_TYPE_AUTO_ROTATE = 1,
			E_BURNOUT_SKILLS_SHOWING_TYPE_SELECT = 2,
			E_BURNOUT_SKILLS_SHOWING_TYPE_NEW_SCORE = 3,
			E_BURNOUT_SKILLS_SHOWING_TYPE_ROAD_RULE_ACTIVE = 4,
			E_BURNOUT_SKILLS_SHOWING_TYPE_COUNT = 5,
		}

	}

}

// BrnGuiBurnoutSkillsManager.h:56
struct BrnGui::BurnoutSkillsManager {
private:
	// BrnGuiBurnoutSkillsManager.h:118
	extern float32_t[] KAF_MINIMUM_HUD_MESSAGE_SKILLS_LEVEL;

	// BrnGuiBurnoutSkillsManager.h:120
	extern const float32_t KF_ROTATION_TIME;

	// BrnGuiBurnoutSkillsManager.h:121
	extern const float32_t KF_NEW_PAUSE_TIME;

	// BrnGuiBurnoutSkillsManager.h:123
	BurnoutSkillzData[8] maSkillzData;

	// BrnGuiBurnoutSkillsManager.h:124
	GuiEventNetworkLaunching::NetworkPlayerID[8] maNetworkIds;

	// BrnGuiBurnoutSkillsManager.h:126
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType meCurrentSkill;

	// BrnGuiBurnoutSkillsManager.h:127
	BrnGui::BurnoutSkillsManager::EBurnoutSkillsShowingType meCurrentShowingType;

	// BrnGuiBurnoutSkillsManager.h:128
	BrnGui::GuiCache * mpCache;

	// BrnGuiBurnoutSkillsManager.h:129
	float32_t mfTimeToNextChange;

	// BrnGuiBurnoutSkillsManager.h:131
	EActiveRaceCarIndex[12] maeCurrentRecordHolder;

public:
	// BrnGuiBurnoutSkillsManager.h:62
	void Construct(BrnGui::GuiCache *);

	// BrnGuiBurnoutSkillsManager.h:66
	void Update();

	// BrnGuiBurnoutSkillsManager.h:70
	void ResetSkillsData();

	// BrnGuiBurnoutSkillsManager.h:74
	void SelectNext();

	// BrnGuiBurnoutSkillsManager.h:81
	void SetSkillsData(EActiveRaceCarIndex, const GuiNewBurnoutSkillzEvent *, CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiBurnoutSkillsManager.h:85
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType GetCurrentSkill() const;

	// BrnGuiBurnoutSkillsManager.h:91
	float32_t GetBurnoutSkillForARC(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, EActiveRaceCarIndex) const;

	// BrnGuiBurnoutSkillsManager.h:96
	void ResetPlayerData(EActiveRaceCarIndex);

	// BrnGuiBurnoutSkillsManager.h:101
	void SetRoadRuleMode(BrnGameState::EActiveRoadRule);

private:
	// BrnGuiBurnoutSkillsManager.h:136
	void YouBeatSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType);

	// BrnGuiBurnoutSkillsManager.h:140
	void SelectNextSkill();

}

