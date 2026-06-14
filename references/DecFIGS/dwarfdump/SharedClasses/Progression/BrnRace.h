// BrnRace.h:44
struct BrnProgression::Race : public BaseRace {
private:
	// BrnRace.h:100
	LandmarkIndex[16] maLandmarkIndices;

	// BrnRace.h:103
	uint16_t[16] mauAiSectionIndices;

	// BrnRace.h:105
	uint8_t muNumLandmarks;

public:
	// BrnRace.h:49
	void Construct();

	// BrnRace.h:53
	uint8_t GetNumLandmarks() const;

	// BrnRace.h:58
	LandmarkIndex GetLandmarkIndex(uint8_t) const;

	// BrnRace.h:62
	const LandmarkIndex * GetLandmarkIndexArray() const;

	// BrnRace.h:68
	void SetLandmarkIndex(uint8_t, LandmarkIndex);

	// BrnRace.h:72
	LandmarkIndex GetStartLandmarkIndex() const;

	// BrnRace.h:76
	LandmarkIndex GetFinishLandmarkIndex() const;

	// BrnRace.h:80
	void ClearLandmarks();

	// BrnRace.h:86
	void AddLandmark(LandmarkIndex, uint16_t);

	// BrnRace.h:90
	void RemoveLastLandmark();

	// BrnRace.h:94
	const uint16_t * GetAiSectionIndexArray() const;

}

