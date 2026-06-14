// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnOpponentData.h:31
	const int32_t KI_MAXIMUM_NUMBER_OF_CAR_OPPONENTS = 8;

}

// BrnOpponentData.h:47
struct BrnProgression::CarOpponent {
private:
	// BrnOpponentData.h:67
	CgsID mCarId;

	// BrnOpponentData.h:68
	int32_t miPersonalityIndex;

public:
	// BrnOpponentData.h:52
	void Construct(CgsID, int32_t);

	// BrnOpponentData.h:55
	void FixDown();

	// BrnOpponentData.h:58
	void FixUp();

	// BrnOpponentData.h:61
	CgsID GetCarId() const;

	// BrnOpponentData.h:64
	int32_t GetPersonalityIndex() const;

}

// BrnOpponentData.h:81
struct BrnProgression::CarOpponentSet {
private:
	// BrnOpponentData.h:116
	CarOpponent[8] maCarOpponents;

	// BrnOpponentData.h:117
	CgsID mPlayerCarId;

	// BrnOpponentData.h:118
	int32_t miRank;

	// BrnOpponentData.h:119
	int32_t miOpponentCount;

public:
	// BrnOpponentData.h:87
	void Construct(CgsID, int32_t, int32_t);

	// BrnOpponentData.h:91
	void FixDown(MemoryResource);

	// BrnOpponentData.h:95
	void FixUp(MemoryResource);

	// BrnOpponentData.h:100
	void SetCarOpponent(int32_t, const CarOpponent *);

	// BrnOpponentData.h:103
	CgsID GetPlayerCarId() const;

	// BrnOpponentData.h:106
	int32_t GetRank() const;

	// BrnOpponentData.h:110
	const CarOpponent * GetCarOpponent(int32_t) const;

	// BrnOpponentData.h:113
	int32_t GetOpponentCount() const;

}

