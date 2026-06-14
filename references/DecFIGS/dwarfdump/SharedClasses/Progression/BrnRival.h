// BrnRival.h:110
extern const int32_t KI_NAME_LENGTH = 32;

// BrnRival.h:46
struct BrnProgression::Rival {
private:
	// BrnRival.h:110
	extern const int32_t KI_NAME_LENGTH = 32;

	// BrnRival.h:112
	CgsID mId;

	// BrnRival.h:113
	CgsID mCarId;

	// BrnRival.h:114
	int16_t miPersonalityIndex;

	// BrnRival.h:115
	int16_t miPursuitTarget;

	// BrnRival.h:116
	int8_t miDistrictIndex;

	// BrnRival.h:117
	int8_t miUnlockRank;

	// BrnRival.h:118
	uint8_t mu8NumMedalsToUnlock;

	// BrnRival.h:119
	bool mbIsUsedForRankUpGiftCar;

	// BrnRival.h:121
	char[32] macName;

public:
	// BrnRival.h:54
	void Construct(CgsID, CgsID, int16_t, int16_t, int8_t);

	// BrnRival.h:58
	void Construct(CgsID);

	// BrnRival.h:62
	void SetName(const char *);

	// BrnRival.h:65
	CgsID GetId() const;

	// BrnRival.h:68
	CgsID GetCarId() const;

	// BrnRival.h:71
	int16_t GetPursuitTarget() const;

	// BrnRival.h:74
	BrnWorld::EDistrict GetDistrict() const;

	// BrnRival.h:77
	const char * GetName() const;

	// BrnRival.h:80
	int16_t GetPersonalityIndex() const;

	// BrnRival.h:83
	int8_t GetUnlockRank() const;

	// BrnRival.h:86
	void SetUnlockRank(int8_t);

	// BrnRival.h:89
	uint8_t GetNumMedalsToUnlock() const;

	// BrnRival.h:93
	void SetNumMedalsToUnlock(uint8_t);

	// BrnRival.h:97
	void IsUsedForRankUpGiftCar(bool);

	// BrnRival.h:100
	bool GetIsUsedForRankUpGiftCar() const;

	// BrnRival.h:103
	void FixDown();

	// BrnRival.h:106
	void FixUp();

}

