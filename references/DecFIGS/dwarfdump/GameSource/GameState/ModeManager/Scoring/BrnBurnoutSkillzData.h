// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BurnoutSkillzData {
		// BrnBurnoutSkillzData.h:48
		enum EBurnoutSkillType {
			E_BURNOUT_SKILL_START = 0,
			E_BURNOUT_SKILL_AIR_TIME = 0,
			E_BURNOUT_SKILL_BARREL_ROLL = 1,
			E_BURNOUT_SKILL_BOOST_CHAIN = 2,
			E_BURNOUT_SKILL_DRIFT = 3,
			E_BURNOUT_SKILL_SPIN = 4,
			E_BURNOUT_SKILL_AIR_DISTANCE = 5,
			E_BURNOUT_SKILL_NEAR_MISSES = 6,
			E_BURNOUT_SKILL_ONCOMING = 7,
			E_BURNOUT_SKILL_POWER_PARKING = 8,
			E_BURNOUT_SKILL_TO_SEND_VIA_NETWORK_COUNT = 9,
			E_BURNOUT_SKILL_TOTAL = 9,
			E_BURNOUT_SKILL_ROAD_RULE_TIME = 10,
			E_BURNOUT_SKILL_ROAD_RULE_CRASH = 11,
			E_BURNOUT_SKILL_COUNT = 12,
		}

	}

}

// BrnBurnoutSkillzData.h:45
struct BrnGameState::BurnoutSkillzData {
private:
	// BrnBurnoutSkillzData.h:104
	float[12] mafBurnoutSkilz;

public:
	// BrnBurnoutSkillzData.h:85
	void Clear();

	// BrnBurnoutSkillzData.h:90
	float32_t GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType) const;

	// BrnBurnoutSkillzData.h:96
	void SetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, float32_t);

	// BrnBurnoutSkillzData.h:101
	float32_t GetSkillAccuracy(BrnGameState::BurnoutSkillzData::EBurnoutSkillType);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BurnoutSkillzData {
		// BrnBurnoutSkillzData.h:48
		enum EBurnoutSkillType {
			E_BURNOUT_SKILL_START = 0,
			E_BURNOUT_SKILL_AIR_TIME = 0,
			E_BURNOUT_SKILL_BARREL_ROLL = 1,
			E_BURNOUT_SKILL_BOOST_CHAIN = 2,
			E_BURNOUT_SKILL_DRIFT = 3,
			E_BURNOUT_SKILL_SPIN = 4,
			E_BURNOUT_SKILL_AIR_DISTANCE = 5,
			E_BURNOUT_SKILL_NEAR_MISSES = 6,
			E_BURNOUT_SKILL_ONCOMING = 7,
			E_BURNOUT_SKILL_POWER_PARKING = 8,
			E_BURNOUT_SKILL_TO_SEND_VIA_NETWORK_COUNT = 9,
			E_BURNOUT_SKILL_TOTAL = 9,
			E_BURNOUT_SKILL_ROAD_RULE_TIME = 10,
			E_BURNOUT_SKILL_ROAD_RULE_CRASH = 11,
			E_BURNOUT_SKILL_COUNT = 12,
		}

	}

	// BrnBurnoutSkillzData.h:107
	extern BrnGameState::BurnoutSkillzData::EBurnoutSkillType operator++(BrnGameState::BurnoutSkillzData::EBurnoutSkillType &, int);

}

