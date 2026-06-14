// BrnSavedRace.h:47
struct BrnProgression::SavedRace : public BaseRace {
private:
	// BrnSavedRace.h:94
	CgsID[16] maLandmarkCgsIds;

	// BrnSavedRace.h:95
	uint8_t muNumLandmarks;

	// BrnSavedRace.h:97
	uint8_t[7] maPad;

public:
	// BrnSavedRace.h:52
	void Construct();

	// BrnSavedRace.h:56
	void FixUp();

	// BrnSavedRace.h:60
	void FixDown();

	// BrnSavedRace.h:64
	uint8_t GetNumLandmarks() const;

	// BrnSavedRace.h:69
	CgsID GetLandmarkCgsId(uint32_t) const;

	// BrnSavedRace.h:73
	const CgsID * GetLandmarkCgsIdArray() const;

	// BrnSavedRace.h:79
	void SetLandmarkCgsId(uint32_t, CgsID);

	// BrnSavedRace.h:83
	void ClearLandmarks();

	// BrnSavedRace.h:88
	void AddLandmarkCgsId(CgsID);

}

