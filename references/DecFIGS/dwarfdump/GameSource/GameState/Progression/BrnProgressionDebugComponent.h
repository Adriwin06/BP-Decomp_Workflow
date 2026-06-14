// BrnProgressionDebugComponent.h:63
struct BrnProgression::ProgressionDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnProgressionDebugComponent.h:293
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionDebugComponent.h:294
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnProgressionDebugComponent.h:296
	int32_t miNumberOfRaceWinsToAdd;

	// BrnProgressionDebugComponent.h:297
	int32_t miNumberOfRoadRageWinsToAdd;

	// BrnProgressionDebugComponent.h:298
	int32_t miNumberOfMarkedManWinsToAdd;

	// BrnProgressionDebugComponent.h:299
	int32_t miNumberOfStuntWinsToAdd;

	// BrnProgressionDebugComponent.h:300
	int32_t miNumberOfSpecialEventWinsToAdd;

	// BrnProgressionDebugComponent.h:301
	int32_t miRankToSkipTo;

	// BrnProgressionDebugComponent.h:302
	int32_t miRivalIndex;

	// BrnProgressionDebugComponent.h:303
	int32_t miEventStartIndex;

	// BrnProgressionDebugComponent.h:304
	BrnProgression::RaceEventData::EModeType meDebugGameModeType;

	// BrnProgressionDebugComponent.h:305
	StringList[7] maGameModeOptions;

	// BrnProgressionDebugComponent.h:308
	int32_t miAchievementToAward;

	// BrnProgressionDebugComponent.h:311
	bool mbShowProfile;

	// BrnProgressionDebugComponent.h:312
	bool mbShowProfileEventInfo;

	// BrnProgressionDebugComponent.h:313
	bool mbShowProfileRivalInfo;

	// BrnProgressionDebugComponent.h:314
	bool mbShowRankData;

	// BrnProgressionDebugComponent.h:315
	bool mbShowRaceData;

	// BrnProgressionDebugComponent.h:316
	bool mbShowRivalData;

	// BrnProgressionDebugComponent.h:317
	bool mbShowPlayerOpponents;

	// BrnProgressionDebugComponent.h:319
	bool mbProfileReadyForDisplay;

public:
	// BrnProgressionDebugComponent.cpp:64
	void Construct(BrnProgression::ProgressionManager *, BrnGameState::ModeManager *);

	// BrnProgressionDebugComponent.cpp:115
	void Destruct();

	// BrnProgressionDebugComponent.cpp:466
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnProgressionDebugComponent.cpp:454
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnProgressionDebugComponent.h:331
	void SetProfileReadyForDisplay();

	// BrnProgressionDebugComponent.cpp:369
	void UnlockAllCars();

	// BrnProgressionDebugComponent.cpp:347
	void UnlockGiftCarsUpToRank(int32_t);

	// BrnProgressionDebugComponent.cpp:441
	void UnlockAllCarsCallBack(void *);

	// BrnProgressionDebugComponent.cpp:427
	void GetToOneWinBelowBurnoutLicenseCallBack(void *);

	// BrnProgressionDebugComponent.cpp:312
	void GetToOneWinBelowBurnoutLicense();

	// BrnProgressionDebugComponent.cpp:415
	void GetToOneWinBelowEliteLicenseCallBack(void *);

	// BrnProgressionDebugComponent.cpp:402
	void GetToOneWinBelowEliteBRLicenseCallBack(void *);

	// BrnProgressionDebugComponent.cpp:232
	void GetToOneWinBelowEliteLicenseBR();

	// BrnProgressionDebugComponent.cpp:272
	void GetToOneWinBelowEliteLicense();

protected:
	// BrnProgressionDebugComponent.cpp:128
	virtual const char * GetName() const;

	// BrnProgressionDebugComponent.cpp:140
	virtual const char * GetPath() const;

	// BrnProgressionDebugComponent.cpp:153
	virtual void OnActivate();

private:
	// BrnProgressionDebugComponent.cpp:642
	void DrawText(CgsDev::Debug2DImmediateRender *, CgsDev::StrStream *);

	// BrnProgressionDebugComponent.cpp:659
	void DrawRankAsBar(CgsDev::Debug2DImmediateRender *, BrnGameState::GameStateModuleIO::EGameModeType, RGBA, Vector2, char *);

	// BrnProgressionDebugComponent.cpp:705
	void DrawTextWithOffsets(CgsDev::Debug2DImmediateRender *, CgsDev::StrStream *, float32_t, float32_t);

	// BrnProgressionDebugComponent.cpp:747
	void AddRaceWins();

	// BrnProgressionDebugComponent.cpp:775
	void AddRoadRageWins();

	// BrnProgressionDebugComponent.cpp:802
	void AddMarkedManWins();

	// BrnProgressionDebugComponent.cpp:828
	void AddStuntWins();

	// BrnProgressionDebugComponent.cpp:857
	// Declaration
	void AddEventWinsForProfileEvents(int32_t, BrnProgression::RaceEventData::EModeType) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionDebugComponent.cpp:878
		using namespace CgsDev::Message;

	}

	// BrnProgressionDebugComponent.cpp:900
	// Declaration
	void AddSpecialEventWins() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionDebugComponent.cpp:935
		using namespace CgsDev::Message;

	}

	// BrnProgressionDebugComponent.cpp:978
	void JuiceUnlockEntireGame();

	// BrnProgressionDebugComponent.cpp:992
	void DefeatAllRivals();

	// BrnProgressionDebugComponent.cpp:1014
	void DefeatRival();

	// BrnProgressionDebugComponent.cpp:1027
	void SkipToProgressionRank();

	// BrnProgressionDebugComponent.cpp:1054
	void FindAllDriveThrus();

	// BrnProgressionDebugComponent.cpp:1084
	void AwardAchievement();

	// BrnProgressionDebugComponent.cpp:1101
	void AwardAllAchievements();

	// BrnProgressionDebugComponent.cpp:1128
	void LockUnlockAllRivals(bool);

	// BrnProgressionDebugComponent.cpp:1174
	void AddWinsRaceCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1188
	void AddWinsRoadRageCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1202
	void AddWinsMarkedManCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1217
	void AddSpecialEventWinsCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1232
	void AddWinsStuntCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1245
	void ClearMedalsCallback(void *);

	// BrnProgressionDebugComponent.cpp:1258
	void DiscoverAllEventsCallback(void *);

	// BrnProgressionDebugComponent.cpp:1147
	void LockAllRivalsCallback(void *);

	// BrnProgressionDebugComponent.cpp:1160
	void UnlockAllRivalsCallback(void *);

	// BrnProgressionDebugComponent.cpp:1272
	void DefeatAllRivalsCallback(void *);

	// BrnProgressionDebugComponent.cpp:1286
	void DefeatRivalCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1301
	void SkipToProgressionRankCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1315
	void FindAllDriveThrusCallback(void *);

	// BrnProgressionDebugComponent.cpp:1331
	void AwardAchievementCallback(void *, void *);

	// BrnProgressionDebugComponent.cpp:1345
	void AwardAllAchievementsCallback(void *);

	// BrnProgressionDebugComponent.cpp:1360
	void RenderRaceEvents(CgsDev::Debug2DImmediateRender *);

	// BrnProgressionDebugComponent.cpp:1444
	void RenderRaceEventData(CgsDev::Debug2DImmediateRender *, const BrnProgression::RaceEventData *, CgsDev::StrStream &);

	// BrnProgressionDebugComponent.cpp:1539
	void RenderProfileEvents(CgsDev::Debug2DImmediateRender *, const BrnProgression::Profile *);

	// BrnProgressionDebugComponent.cpp:1660
	void RenderProfileRivals(CgsDev::Debug2DImmediateRender *, const BrnProgression::Profile *);

}

// BrnProgressionDebugComponent.h:63
void BrnProgression::ProgressionDebugComponent::ProgressionDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

