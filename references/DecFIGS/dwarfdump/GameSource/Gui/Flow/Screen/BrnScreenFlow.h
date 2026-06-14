// BrnScreenFlow.h:110
struct BrnGui::BrnScreenFlow : public BrnGui::BrnBaseFlow {
private:
	// BrnScreenFlow.h:145
	BrnGui::NullState * mpStateNull;

	// BrnScreenFlow.h:146
	BrnGui::Intro * mpStateIntro;

	// BrnScreenFlow.h:147
	BrnGui::CarSelectUnlock * mpStateCarSelectUnlock;

	// BrnScreenFlow.h:148
	BrnGui::CarSelectVehicle * mpStateCarSelectVehicle;

	// BrnScreenFlow.h:149
	BrnGui::CarSelectLivery * mpStateCarSelectLivery;

	// BrnScreenFlow.h:150
	BrnGui::CarSelectOnlineEnd * mpStateCarSelectOnlineEnd;

	// BrnScreenFlow.h:151
	BrnGui::ScreenLoading * mpStateLoading;

	// BrnScreenFlow.h:152
	BrnGui::InGame * mpStateInGame;

	// BrnScreenFlow.h:153
	BrnGui::CrashNavMapEvent * mpStateCrashNavMapEvent;

	// BrnScreenFlow.h:154
	BrnGui::CrashNavMapMain * mpStateCrashNavMapMain;

	// BrnScreenFlow.h:155
	BrnGui::CrashNavStats * mpStateCrashNavStats;

	// BrnScreenFlow.h:156
	BrnGui::CrashNavSettings * mpStateCrashNavSettings;

	// BrnScreenFlow.h:157
	BrnGui::CrashNavProfile * mpStateCrashNavProfile;

	// BrnScreenFlow.h:158
	BrnGui::CrashNavOptions * mpStateCrashNavOptions;

	// BrnScreenFlow.h:159
	BrnGui::CrashNavAccountManagement * mpStateCrashNavAccountManagement;

	// BrnScreenFlow.h:160
	BrnGui::CrashNavTrax * mpStateCrashNavTrax;

	// BrnScreenFlow.h:162
	BrnGui::CrashNavAchievements * mpStateCrashNavAchievements;

	// BrnScreenFlow.h:164
	BrnGui::Credits * mpStateCredits;

	// BrnScreenFlow.h:165
	BrnGui::CrashNavReplay * mpStateReplay;

	// BrnScreenFlow.h:166
	BrnGui::CrashNavColourCalibrate * mpStateColourCalibration;

	// BrnScreenFlow.h:167
	BrnGui::CrashNavDriverDetails * mpStateDriverDetails;

	// BrnScreenFlow.h:168
	BrnGui::CrashNavEnterOnlineFull * mpStateCrashNavEnterOnlineFull;

	// BrnScreenFlow.h:169
	BrnGui::CrashNavEnterOnlineNoTitle * mpStateCrashNavEnterOnlineNoTitle;

	// BrnScreenFlow.h:170
	BrnGui::PauseScreen * mpStatePause;

	// BrnScreenFlow.h:171
	BrnGui::Video * mpStateVideo;

	// BrnScreenFlow.h:174
	BrnGui::ImageGalleryState * mpStateImageGallery;

	// BrnScreenFlow.h:175
	BrnGui::OnlinePlay * mpStateOnlinePlay;

	// BrnScreenFlow.h:176
	BrnGui::OnlineGameRoomPlayerInfo * mpStateOnlineGameRoom;

	// BrnScreenFlow.h:177
	BrnGui::OnlineCustomMatch * mpStateOnlineCustomMatch;

	// BrnScreenFlow.h:178
	BrnGui::OnlineCreateFreeburn * mpStateOnlineCreateFreeburn;

	// BrnScreenFlow.h:179
	BrnGui::OnlineSelectRoute * mpStateOnlineSelectRoute;

	// BrnScreenFlow.h:180
	BrnGui::OnlineGameOptions * mpStateOnlineGameOptions;

	// BrnScreenFlow.h:181
	BrnGui::OnlineGameOptionsSummary * mpStateOnlineGameOptionsSummary;

	// BrnScreenFlow.h:182
	BrnGui::OnlineScoreboards * mpStateOnlineScoreboards;

	// BrnScreenFlow.h:183
	BrnGui::OnlineStats * mpStateOnlineStats;

	// BrnScreenFlow.h:184
	BrnGui::OnlineQuickMatch * mpStateOnlineQuickMatch;

	// BrnScreenFlow.h:185
	BrnGui::OnlineNews * mpStateOnlineNews;

	// BrnScreenFlow.h:186
	BrnGui::OnlineRivals * mpStateOnlineRivals;

	// BrnScreenFlow.h:187
	BrnGui::OnlineQuickCustomCreate * mpStateOnlineQuickCustomCreate;

	// BrnScreenFlow.h:188
	BrnGui::OnlineFBurnQuickCustomCreate * mpStateOnlineFBurnQuickCustCreate;

	// BrnScreenFlow.h:189
	BrnGui::OnlineViewChallenges * mpStateOnlineViewChallenges;

	// BrnScreenFlow.h:192
	BrnGui::OnlineLoading * mpStateOnlineLoading;

	// BrnScreenFlow.h:193
	BrnGui::OnlinePause * mpStateOnlinePause;

	// BrnScreenFlow.h:194
	BrnGui::OnlineMarkMan * mpStateOnlineMarkMan;

	// BrnScreenFlow.h:195
	BrnGui::OnlinePreEvent * mpStateOnlinePreEvent;

	// BrnScreenFlow.h:197
	BrnGui::InstantResultsState * mpStateOfflineInstantResults;

	// BrnScreenFlow.h:199
	BrnGui::CompletedGame * mpStateOfflineCompletedGame;

	// BrnScreenFlow.h:200
	BrnGui::OfflineRivalShutdown * mpStateOfflineRivalShutdown;

	// BrnScreenFlow.h:201
	BrnGui::OfflineTrophyCarUnlock * mpStateOfflineTrophyCarUnlock;

	// BrnScreenFlow.h:205
	BrnGui::OnlineInstantResultsState * mpStateOnlineInstantResults;

	// BrnScreenFlow.h:206
	BrnGui::OnlineYouWin * mpStateOnlineYouWin;

	// BrnScreenFlow.h:207
	BrnGui::ShowtimeInstantResultsState * mpStateShowtimeInstantResults;

	// BrnScreenFlow.h:209
	BrnGui::GenericForwardState * mpStateGenericForward;

	// BrnScreenFlow.h:211
	BrnGui::BrnDebug * mpStateDebug;

public:
	// BrnScreenFlow.cpp:42
	virtual void Construct(BrnGui::GuiCache *);

	// BrnScreenFlow.cpp:61
	virtual bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *, LinearMalloc *, BrnGui::ProfileManager &);

	// BrnScreenFlow.h:226
	bool IsInEnterOnlineState();

	// BrnScreenFlow.cpp:293
	virtual void Update();

private:
	// BrnScreenFlow.cpp:313
	// Declaration
	virtual void PrintStateSizes() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScreenFlow.cpp:317
		using namespace CgsDev::Message;

		// BrnScreenFlow.cpp:318
		using namespace CgsDev::Message;

		// BrnScreenFlow.cpp:319
		using namespace CgsDev::Message;

		// BrnScreenFlow.cpp:374
		using namespace CgsDev::Message;

		// BrnScreenFlow.cpp:375
		using namespace CgsDev::Message;

		// BrnScreenFlow.cpp:376
		using namespace CgsDev::Message;

	}

}

// BrnScreenFlow.h:110
void BrnGui::BrnScreenFlow::BrnScreenFlow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

