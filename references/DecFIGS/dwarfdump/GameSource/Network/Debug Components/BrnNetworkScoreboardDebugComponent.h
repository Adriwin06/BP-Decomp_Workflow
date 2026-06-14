// BrnNetworkScoreboardDebugComponent.h:54
struct BrnNetwork::ScoreboardDebugComponent : CgsDev::DebugComponent {
private:
	// BrnNetworkScoreboardDebugComponent.h:98
	NetworkOutScoreboardEvent mScoreboardEvent;

	// BrnNetworkScoreboardDebugComponent.h:101
	ScoreboardManager * mpScoreboardManager;

	// BrnNetworkScoreboardDebugComponent.h:103
	StringList[10] maCategoryList;

	// BrnNetworkScoreboardDebugComponent.h:104
	StringList[10] maIndexList;

	// BrnNetworkScoreboardDebugComponent.h:105
	StringList[66] maVariationList;

	// BrnNetworkScoreboardDebugComponent.h:107
	char[10][31] maacCategories;

	// BrnNetworkScoreboardDebugComponent.h:108
	char[10][31] maacIndexes;

	// BrnNetworkScoreboardDebugComponent.h:109
	char[66][31] maacVariations;

	// BrnNetworkScoreboardDebugComponent.h:112
	int32_t miCategory;

	// BrnNetworkScoreboardDebugComponent.h:113
	int32_t miIndex;

	// BrnNetworkScoreboardDebugComponent.h:114
	int32_t miVariation;

public:
	// BrnNetworkScoreboardDebugComponent.cpp:43
	void Construct(ScoreboardManager *);

	// BrnNetworkScoreboardDebugComponent.cpp:67
	bool Prepare();

	// BrnNetworkScoreboardDebugComponent.cpp:101
	bool Release();

	// BrnNetworkScoreboardDebugComponent.cpp:122
	void Destruct();

	// BrnNetworkScoreboardDebugComponent.cpp:86
	virtual void OnActivate();

	// BrnNetworkScoreboardDebugComponent.cpp:142
	virtual const char * GetName() const;

	// BrnNetworkScoreboardDebugComponent.cpp:157
	virtual const char * GetPath() const;

	// BrnNetworkScoreboardDebugComponent.cpp:277
	void HandleScoreboardHeadingEvent(NetworkOutScoreboardHeadingList *);

	// BrnNetworkScoreboardDebugComponent.cpp:376
	void HandleScoreboardEvent(NetworkOutScoreboardEvent *);

private:
	// BrnNetworkScoreboardDebugComponent.cpp:174
	void GetCategories(void *, void *);

	// BrnNetworkScoreboardDebugComponent.cpp:196
	void GetIndexes(void *, void *);

	// BrnNetworkScoreboardDebugComponent.cpp:223
	void GetVariations(void *, void *);

	// BrnNetworkScoreboardDebugComponent.cpp:251
	void GetScoreboard(void *, void *);

	// BrnNetworkScoreboardDebugComponent.cpp:394
	// Declaration
	void PrintScoreboard(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkScoreboardDebugComponent.cpp:401
		using namespace CgsDev::Message;

		// BrnNetworkScoreboardDebugComponent.cpp:403
		using namespace CgsDev::Message;

		// BrnNetworkScoreboardDebugComponent.cpp:408
		using namespace CgsDev::Message;

		// BrnNetworkScoreboardDebugComponent.cpp:410
		using namespace CgsDev::Message;

		// BrnNetworkScoreboardDebugComponent.cpp:418
		using namespace CgsDev::Message;

		// BrnNetworkScoreboardDebugComponent.cpp:420
		using namespace CgsDev::Message;

	}

}

// BrnNetworkScoreboardDebugComponent.h:54
void BrnNetwork::ScoreboardDebugComponent::ScoreboardDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

