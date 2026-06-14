// BrnDirectorOutputInterface.h:35
struct BrnDirector::DirectorOutputInterface {
private:
	// BrnDirectorOutputInterface.h:82
	bool mbIsIntroCameraStartingToLookAtRival;

	// BrnDirectorOutputInterface.h:83
	uint32_t muIntroCameraRivalLookedAt;

	// BrnDirectorOutputInterface.h:84
	float32_t mfSecsRemaining;

	// BrnDirectorOutputInterface.h:86
	bool mbStartRivalPresentation;

	// BrnDirectorOutputInterface.h:87
	bool mbFinishedPostRacePresentation;

	// BrnDirectorOutputInterface.h:89
	bool mbPauseRequest;

	// BrnDirectorOutputInterface.h:90
	bool mbPauseRequestState;

public:
	// BrnDirectorOutputInterface.h:39
	void Construct();

	// BrnDirectorOutputInterface.h:51
	bool IsIntroCameraStartingToLookAtRival(uint32_t *, float32_t *) const;

	// BrnDirectorOutputInterface.h:56
	void SetIntroCameraStartingToLookAtRival(uint32_t, float32_t);

	// BrnDirectorOutputInterface.h:59
	void SetStartRivalPresentation(bool);

	// BrnDirectorOutputInterface.h:62
	void SetFinishedPostRacePresentation(bool);

	// BrnDirectorOutputInterface.h:65
	bool GetStartRivalPresentation() const;

	// BrnDirectorOutputInterface.h:68
	bool GetFinishedPostRacePresentation() const;

	// BrnDirectorOutputInterface.h:71
	bool GetPauseRequest() const;

	// BrnDirectorOutputInterface.h:74
	bool GetPauseRequestState() const;

	// BrnDirectorOutputInterface.h:78
	void SetPauseRequest(bool);

}

