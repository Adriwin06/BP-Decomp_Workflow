// ChallengeList.h:70
extern const int32_t KI_MAX_CHALLENGE_LISTS = 32;

// ChallengeList.h:73
extern const int32_t KI_MAX_FREEBURN_CHALLENGES = 1000;

// ChallengeList.h:74
extern const int32_t KI_MAX_PROFILE_CHALLENGES = 2000;

// ChallengeList.h:49
struct BrnResource::ChallengeSlot {
	// ChallengeList.h:51
	bool mbBought;

	// ChallengeList.h:52
	int32_t miListIndex;

	// ChallengeList.h:53
	int32_t miEntryIndex;

}

// ChallengeList.h:65
struct BrnResource::ChallengeList {
	// ChallengeList.h:70
	extern const int32_t KI_MAX_CHALLENGE_LISTS = 32;

	// ChallengeList.h:73
	extern const int32_t KI_MAX_FREEBURN_CHALLENGES = 1000;

	// ChallengeList.h:74
	extern const int32_t KI_MAX_PROFILE_CHALLENGES = 2000;

private:
	// ChallengeList.h:124
	ResourcePtr<BrnResource::ChallengeListResource>[32] maStaticDataLists;

	// ChallengeList.h:125
	ChallengeSlot[1000] maSlots;

	// ChallengeList.h:126
	int32_t miCount;

	// ChallengeList.h:127
	int32_t miListCount;

public:
	// ChallengeList.h:77
	void Construct();

	// ChallengeList.h:80
	void Destruct();

	// ChallengeList.h:92
	void AddListResource(ResourcePtr<BrnResource::ChallengeListResource> &);

	// ChallengeList.h:95
	int32_t GetChallengeCount() const;

	// ChallengeList.h:98
	const ChallengeListEntry * GetChallengeData(int32_t) const;

	// ChallengeList.h:101
	const ChallengeListEntry * GetChallengeData(CgsID) const;

	// ChallengeList.h:104
	int32_t GetChallengeIndex(CgsID) const;

	// ChallengeList.h:107
	bool IsChallengeInList(CgsID) const;

	// ChallengeList.h:110
	bool IsChallengeContentBought(int32_t) const;

	// ChallengeList.h:113
	bool IsChallengeContentBought(CgsID) const;

	// ChallengeList.h:116
	void SetChallengeContentBought(int32_t, bool);

	// ChallengeList.h:119
	void SetChallengeContentBought(CgsID, bool);

}

// ChallengeList.h:65
struct BrnResource::ChallengeList {
	// ChallengeList.h:70
	extern const int32_t KI_MAX_CHALLENGE_LISTS = 32;

	// ChallengeList.h:73
	extern const int32_t KI_MAX_FREEBURN_CHALLENGES = 1000;

	// ChallengeList.h:74
	extern const int32_t KI_MAX_PROFILE_CHALLENGES = 2000;

private:
	// ChallengeList.h:124
	ResourcePtr<BrnResource::ChallengeListResource>[32] maStaticDataLists;

	// ChallengeList.h:125
	ChallengeSlot[1000] maSlots;

	// ChallengeList.h:126
	int32_t miCount;

	// ChallengeList.h:127
	int32_t miListCount;

public:
	// ChallengeList.h:77
	void Construct();

	// ChallengeList.h:80
	void Destruct();

	// ChallengeList.h:92
	// Declaration
	void AddListResource(ResourcePtr<BrnResource::ChallengeListResource> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ChallengeList.cpp:800
		using namespace CgsDev::Message;

		// ChallengeList.cpp:807
		using namespace CgsDev::Message;

	}

	// ChallengeList.h:95
	int32_t GetChallengeCount() const;

	// ChallengeList.h:98
	const ChallengeListEntry * GetChallengeData(int32_t) const;

	// ChallengeList.h:101
	const ChallengeListEntry * GetChallengeData(CgsID) const;

	// ChallengeList.h:104
	int32_t GetChallengeIndex(CgsID) const;

	// ChallengeList.h:107
	bool IsChallengeInList(CgsID) const;

	// ChallengeList.h:110
	bool IsChallengeContentBought(int32_t) const;

	// ChallengeList.h:113
	bool IsChallengeContentBought(CgsID) const;

	// ChallengeList.h:116
	void SetChallengeContentBought(int32_t, bool);

	// ChallengeList.h:119
	void SetChallengeContentBought(CgsID, bool);

}

