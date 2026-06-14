// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentSelector {
		// BrnMomentSelector.h:95
		enum ESelectionMode {
			E_MODE_LRU_BEST = 0,
			E_MODE_RANDOM_BEST = 1,
			E_MODE_COUNT = 2,
		}

		// BrnMomentSelector.h:215
		enum EPickBestInhibitedOptions {
			E_PICK_BEST_FUSSY = 0,
			E_PICK_BEST_ANY = 1,
		}

		// BrnMomentSelector.h:221
		enum EPickWorstUninhibitedOptions {
			E_PICK_WORST_FUSSY = 0,
			E_PICK_WORST_ANY = 1,
		}

	}

}

// BrnMomentSelector.h:39
struct BrnDirector::MomentDescription {
	// BrnMomentSelector.h:40
	BrnDirector::Moment::EType meMomentType;

	// BrnMomentSelector.h:41
	BrnDirector::MomentParameterBank::EMomentParamID meMomentParamID;

	// BrnMomentSelector.h:42
	float32_t mfWeighting;

	// BrnMomentSelector.h:43
	bool mbCanBeInhibited;

}

// BrnMomentSelector.h:92
struct BrnDirector::MomentSelector {
private:
	// BrnMomentSelector.h:250
	Array<BrnDirector::MomentDescription,10u> mMomentDescriptionArray;

	// BrnMomentSelector.h:251
	Array<BrnDirector::MomentController::MomentHandle,10u> mMomentHandleArray;

	// BrnMomentSelector.h:253
	Array<float32_t,10u> mRecencyArray;

	// BrnMomentSelector.h:255
	float32_t mfTimeActive;

	// BrnMomentSelector.h:256
	uint32_t miFramesActive;

	// BrnMomentSelector.h:257
	float32_t mfRecencyFactor;

	// BrnMomentSelector.h:258
	uint32_t muValidMoments;

	// BrnMomentSelector.h:259
	uint32_t muMaxActiveMomentLimit;

	// BrnMomentSelector.h:260
	int32_t miSelectedMoment;

	// BrnMomentSelector.h:262
	BrnDirector::MomentSelector::ESelectionMode meSelectionMode;

	// BrnMomentSelector.h:264
	bool mbHasSelectedMoment;

	// BrnMomentSelector.h:265
	bool mbPrepared;

	// BrnMomentSelector.h:266
	bool mbHasMaxLimit;

public:
	// BrnMomentSelector.h:104
	void Construct();

	// BrnMomentSelector.h:109
	bool Prepare(MomentController &, BehaviourManager &);

	// BrnMomentSelector.h:113
	void Update(float32_t);

	// BrnMomentSelector.h:116
	bool Release();

	// BrnMomentSelector.h:119
	void Destruct();

	// BrnMomentSelector.h:123
	void SetSelectionMode(BrnDirector::MomentSelector::ESelectionMode);

	// BrnMomentSelector.h:132
	bool AddMoment(MomentDescription);

	// BrnMomentSelector.h:139
	bool AddMoment(BrnDirector::Moment::EType, BrnDirector::MomentParameterBank::EMomentParamID, float32_t, bool);

	// BrnMomentSelector.h:142
	void ResetTimeActive();

	// BrnMomentSelector.h:145
	float32_t GetTimeActive();

	// BrnMomentSelector.h:148
	int32_t GetFramesActive();

	// BrnMomentSelector.h:151
	uint32_t GetNumValidMoments();

	// BrnMomentSelector.h:154
	uint32_t SnoopNumValidMoments();

	// BrnMomentSelector.h:157
	bool IsPrepared();

	// BrnMomentSelector.h:164
	void SetRecencyFactor(float32_t);

	// BrnMomentSelector.h:172
	bool SelectBestMoment(Random &);

	// BrnMomentSelector.h:176
	bool SelectNewBestMoment(Random &);

	// BrnMomentSelector.h:179
	bool HasSelectedMoment();

	// BrnMomentSelector.h:182
	BrnDirector::Moment & GetSelectedMoment();

	// BrnMomentSelector.h:185
	void CancelSelection();

	// BrnMomentSelector.h:189
	void SetMaxActiveMoments(uint32_t);

	// BrnMomentSelector.h:193
	void DebugRender(BrnDirector::DebugPrinter &) const;

private:
	// BrnMomentSelector.h:200
	bool SelectBestMomentWithExclusion(Random &, int32_t);

	// BrnMomentSelector.h:206
	bool SelectBestLRUMomentWithExclusion(int32_t);

	// BrnMomentSelector.h:213
	bool SelectBestRandomMomentWithExclusion(Random &, int32_t);

	// BrnMomentSelector.h:230
	bool PickBestInhibitedMoment(uint32_t *, BrnDirector::MomentSelector::EPickBestInhibitedOptions);

	// BrnMomentSelector.h:235
	bool PickWorstUninhibitedMoment(uint32_t *, BrnDirector::MomentSelector::EPickWorstUninhibitedOptions);

	// BrnMomentSelector.h:239
	void ActualDebugRender(BrnDirector::DebugPrinter &) const;

}

// BrnMomentSelector.h:50
struct BrnDirector::Selector<uint32_t,10u> {
private:
	// BrnMomentSelector.h:76
	Array<uint32_t,10u> mOutputArray;

	// BrnMomentSelector.h:77
	Array<float32_t,10u> mOriginalWeights;

	// BrnMomentSelector.h:84
	Array<float32_t,9u> mIntervalEnds;

	// BrnMomentSelector.h:85
	bool mbNormalised;

public:
	// BrnMomentSelector.h:54
	void Construct();

	// BrnMomentSelector.h:327
	void AddElement(float, const uint32_t &);

	// BrnMomentSelector.h:66
	const uint32_t & GetSelection(Random &) const;

	// BrnMomentSelector.h:340
	uint32_t GetLength() const;

private:
	// BrnMomentSelector.h:74
	void CalculateIntervals() const;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct MomentSelector {
		// BrnMomentSelector.h:95
		enum ESelectionMode {
			E_MODE_LRU_BEST = 0,
			E_MODE_RANDOM_BEST = 1,
			E_MODE_COUNT = 2,
		}

		// BrnMomentSelector.h:215
		enum EPickBestInhibitedOptions {
			E_PICK_BEST_FUSSY = 0,
			E_PICK_BEST_ANY = 1,
		}

		// BrnMomentSelector.h:221
		enum EPickWorstUninhibitedOptions {
			E_PICK_WORST_FUSSY = 0,
			E_PICK_WORST_ANY = 1,
		}

	}

}

