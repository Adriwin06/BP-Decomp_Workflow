// CgsGuiStateInterface.h:231
struct CgsGui::StateInterface {
	// CgsGuiStateInterface.h:363
	CgsGui::EventObserver * mpObserver;

private:
	// CgsGuiStateInterface.h:367
	GuiAccessPointers * mpAccessPointers;

	// CgsGuiStateInterface.h:368
	rw::IResourceAllocator * mpAllocator;

	// CgsGuiStateInterface.h:369
	GuiStackEventQueue::GuiEventQueueLarge mOutEventQueue;

public:
	// CgsGuiStateInterface.h:236
	void Construct();

	// CgsGuiStateInterface.h:242
	void Prepare(rw::IResourceAllocator *, GuiAccessPointers *);

	// CgsGuiStateInterface.h:248
	void RegisterForEvents(const int32_t *, int32_t);

	// CgsGuiStateInterface.h:254
	void UnRegisterForEvents(const int32_t *, int32_t);

	// CgsGuiStateInterface.h:261
	void PriorityRegisterForEvent(int32_t, const int32_t *, uint32_t);

	// CgsGuiStateInterface.h:266
	void PriorityUnRegisterForEvent(int32_t);

	// CgsGuiStateInterface.h:270
	void StopPriorityEventBlocking();

	// CgsGuiStateInterface.h:278
	void RequestResource(const char *, CgsGui::ResourceRequestTypes, int32_t, CgsGui::ResourceRequestLoadUnload);

	// CgsGuiStateInterface.h:285
	void UnloadResource(const char *, CgsGui::ResourceRequestTypes, int32_t);

	// CgsGuiStateInterface.h:304
	GuiStackEventQueue::GuiEventQueueLarge * GetOutputEventQueue();

	// CgsGuiStateInterface.h:309
	void SetEventObserver(CgsGui::EventObserver *);

	// CgsGuiStateInterface.h:315
	void PlayAptMovie(const char *, int32_t);

	// CgsGuiStateInterface.h:319
	void PlayVideo(const char *);

	// CgsGuiStateInterface.h:324
	void PlayLoadingScreen();

	// CgsGuiStateInterface.h:328
	void StopLoadingScreen();

	// CgsGuiStateInterface.h:332
	void Clear();

	// CgsGuiStateInterface.h:335
	rw::IResourceAllocator * GetAllocator();

	// CgsGuiStateInterface.h:342
	GuiAccessPointers * GetAccessPointers();

	// CgsGuiStateInterface.h:349
	LanguageManager * GetLanguageManager();

	// CgsGuiStateInterface.h:356
	bool IsUsingMetricUnits();

}

// CgsGuiStateInterface.h:164
struct CgsGui::GuiEventPlayAptMovie : public GuiEvent<18> {
	// CgsGuiStateInterface.h:166
	const char * mpacMovieName;

	// CgsGuiStateInterface.h:167
	int32_t miLevelNum;

}

// CgsGuiStateInterface.h:231
struct CgsGui::StateInterface {
	// CgsGuiStateInterface.h:363
	CgsGui::EventObserver * mpObserver;

private:
	// CgsGuiStateInterface.h:367
	GuiAccessPointers * mpAccessPointers;

	// CgsGuiStateInterface.h:368
	rw::IResourceAllocator * mpAllocator;

	// CgsGuiStateInterface.h:369
	GuiStackEventQueue::GuiEventQueueLarge mOutEventQueue;

public:
	// CgsGuiStateInterface.h:236
	void Construct();

	// CgsGuiStateInterface.h:242
	void Prepare(rw::IResourceAllocator *, GuiAccessPointers *);

	// CgsGuiStateInterface.h:248
	void RegisterForEvents(const int32_t *, int32_t);

	// CgsGuiStateInterface.h:254
	void UnRegisterForEvents(const int32_t *, int32_t);

	// CgsGuiStateInterface.h:261
	void PriorityRegisterForEvent(int32_t, const int32_t *, uint32_t);

	// CgsGuiStateInterface.h:266
	void PriorityUnRegisterForEvent(int32_t);

	// CgsGuiStateInterface.h:270
	void StopPriorityEventBlocking();

	// CgsGuiStateInterface.h:278
	void RequestResource(const char *, CgsGui::ResourceRequestTypes, int32_t, CgsGui::ResourceRequestLoadUnload);

	// CgsGuiStateInterface.h:285
	void UnloadResource(const char *, CgsGui::ResourceRequestTypes, int32_t);

	// CgsGuiStateInterface.h:304
	GuiStackEventQueue::GuiEventQueueLarge * GetOutputEventQueue();

	// CgsGuiStateInterface.h:309
	void SetEventObserver(CgsGui::EventObserver *);

	// CgsGuiStateInterface.h:315
	void PlayAptMovie(const char *, int32_t);

	// CgsGuiStateInterface.h:319
	void PlayVideo(const char *);

	// CgsGuiStateInterface.h:324
	void PlayLoadingScreen();

	// CgsGuiStateInterface.h:328
	void StopLoadingScreen();

	// CgsGuiStateInterface.h:332
	void Clear();

	// CgsGuiStateInterface.h:335
	rw::IResourceAllocator * GetAllocator();

	// CgsGuiStateInterface.h:342
	GuiAccessPointers * GetAccessPointers();

	// CgsGuiStateInterface.h:349
	CgsLanguage::LanguageManager * GetLanguageManager();

	// CgsGuiStateInterface.h:356
	bool IsUsingMetricUnits();

}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> : public GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> : public GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<155> > : public GuiEventWrapper<CgsGui::GuiEvent<155>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiAudioEvent> : public GuiEventWrapper<BrnGui::GuiAudioEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiDirtyTrickTriggerableEvent> : public GuiEventWrapper<BrnGui::GuiDirtyTrickTriggerableEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRequestTraining> : public GuiEventWrapper<BrnGui::GuiEventRequestTraining,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> : public GuiEventWrapper<BrnGui::GuiAudioTriggerEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEventSoundTrigger> : public GuiEventWrapper<CgsGui::GuiEventSoundTrigger,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleFail> : public GuiEventWrapper<BrnGui::GuiEventRoadRuleFail,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> : public GuiEventWrapper<BrnGui::GuiEventFriendListShowing,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> : public GuiEventWrapper<BrnGui::GuiEventOnlineInviteEvent,40> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> : public GuiEventWrapper<BrnGui::GuiEventPerformOnlineMainMenuOption,42> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> : public GuiEventWrapper<BrnGui::GuiEventPerformOnlinePauseOption,42> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkGameParams> : public GuiEventWrapper<BrnGui::GuiEventNetworkGameParams,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventOnlineShowProfile> : public GuiEventWrapper<BrnGui::GuiEventOnlineShowProfile,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleModeRequest> : public GuiEventWrapper<BrnGui::GuiEventRoadRuleModeRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<98> > : public GuiEventWrapper<CgsGui::GuiEvent<98>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<99> > : public GuiEventWrapper<CgsGui::GuiEvent<99>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> : public GuiEventWrapper<BrnGui::GuiEventTickerCustomMessage,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<560> > : public GuiEventWrapper<CgsGui::GuiEvent<560>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEATraxChyronActive> : public GuiEventWrapper<BrnGui::GuiEATraxChyronActive,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<107> > : public GuiEventWrapper<CgsGui::GuiEvent<107>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventStatsRequest> : public GuiEventWrapper<BrnGui::GuiEventStatsRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<432> > : public GuiEventWrapper<CgsGui::GuiEvent<432>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventSetRoadRuleScoreMode> : public GuiEventWrapper<BrnGui::GuiEventSetRoadRuleScoreMode,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSelectedPlayerOption> : public GuiEventWrapper<BrnGui::GuiEventNetworkSelectedPlayerOption,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventNetworkPlayerImage> : public GuiEventWrapper<BrnGui::GuiEventNetworkPlayerImage,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkOutputPlayerTexture> : public GuiEventWrapper<BrnGui::GuiEventNetworkOutputPlayerTexture,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRequestCompressedCamPic> : public GuiEventWrapper<BrnGui::GuiEventRequestCompressedCamPic,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventTickerClearMessages> : public GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40> {
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<CgsGui::GuiEventPlayAptMovie>(const GuiEventPlayAptMovie &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<CgsGui::GuiEventPlayAptMovie> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRequestCompressedCamPic>(const GuiEventRequestCompressedCamPic &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRequestCompressedCamPic> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventStatsRequest>(const GuiEventStatsRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventStatsRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkSelectedPlayerOption>(const GuiEventNetworkSelectedPlayerOption &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkSelectedPlayerOption> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventSetRoadRuleScoreMode>(const GuiEventSetRoadRuleScoreMode &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventSetRoadRuleScoreMode> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOnlineNotificationChyronFinishedEvent>(const GuiEventWrapper<CgsGui::GuiEvent<107>,40>::GuiOnlineNotificationChyronFinishedEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<107> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEATraxChyronActive>(const GuiEATraxChyronActive &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEATraxChyronActive> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiChallengeTriggerRequest>(const GuiEventWrapper<CgsGui::GuiEvent<560>,40>::GuiChallengeTriggerRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<560> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineGetBuddies>(const GuiEventWrapper<CgsGui::GuiEvent<99>,40>::GuiEventOnlineGetBuddies &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<99> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineGetBuddyCount>(const GuiEventWrapper<CgsGui::GuiEvent<98>,40>::GuiEventOnlineGetBuddyCount &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<98> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRequestTraining>(const GuiEventRequestTraining &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRequestTraining> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventSoundTrigger>(const GuiEventSoundTrigger &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEventSoundTrigger> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiDirtyTrickTriggerableEvent>(const GuiDirtyTrickTriggerableEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiDirtyTrickTriggerableEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiAudioEvent>(const GuiAudioEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiAudioEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiHudMessageControllerRequest>(const GuiEventWrapper<CgsGui::GuiEvent<155>,40>::GuiHudMessageControllerRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<155> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRankProgressRequest>(const GuiEventWrapper<CgsGui::GuiEvent<432>,40>::GuiEventRankProgressRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<432> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRoadRuleFail>(const GuiEventRoadRuleFail &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRoadRuleFail> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventNetworkPlayerImage>(const GuiEventNetworkPlayerImage &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventNetworkPlayerImage> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(const GuiEventNetworkOutputPlayerTexture &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkOutputPlayerTexture> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(const GuiChallengeSelectedEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiChallengeSelectedEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(const GuiAudioTriggerEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiAudioTriggerEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(const GuiEventTickerCustomMessage &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventTickerCustomMessage> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(const GuiEventTickerClearMessages &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventTickerClearMessages> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(const GuiEventFriendListShowing &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventFriendListShowing> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRoadRuleModeRequest>(const GuiEventRoadRuleModeRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRoadRuleModeRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(const GuiEventPerformOnlineMainMenuOption &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(const GuiEventPerformOnlinePauseOption &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineShowProfile>(const GuiEventOnlineShowProfile &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventOnlineShowProfile> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(const GuiEventOnlineInviteEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkGameParams>(const GuiEventNetworkGameParams &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkGameParams> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventRenderSatNav> : public GuiEventWrapper<BrnGui::GuiEventRenderSatNav,41> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventRenderMainMap> : public GuiEventWrapper<BrnGui::GuiEventRenderMainMap,41> {
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventRenderMainMap>(const GuiEventRenderMainMap &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventRenderMainMap> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventRenderSatNav>(const GuiEventRenderSatNav &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventRenderSatNav> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:193
struct CgsGui::GuiEventPlayMusicOnMenuStream : public GuiEvent<23> {
	// CgsGuiStateInterface.h:196
	Name mName;

	// CgsGuiStateInterface.h:197
	bool mbRewardsScreenCredits;

	// CgsGuiStateInterface.h:198
	bool mbOverrideCustomSoundtracks;

}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<19> > : public GuiEventWrapper<CgsGui::GuiEvent<19>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<20> > : public GuiEventWrapper<CgsGui::GuiEvent<20>,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> : public GuiEventWrapper<BrnGui::GuiEventShowHideBoostBar,41> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<CgsGui::GuiEventClearScreenSet> : public GuiEventWrapper<CgsGui::GuiEventClearScreenSet,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<71> > : public GuiEventWrapper<CgsGui::GuiEvent<71>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventBlackOverlayFadeIn> : public GuiEventWrapper<BrnGui::GuiEventBlackOverlayFadeIn,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEventPlayMusicOnMenuStream> : public GuiEventWrapper<CgsGui::GuiEventPlayMusicOnMenuStream,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<91> > : public GuiEventWrapper<CgsGui::GuiEvent<91>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventPlayVideo> : public GuiEventWrapper<BrnGui::GuiEventPlayVideo,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventStopVideo> : public GuiEventWrapper<BrnGui::GuiEventStopVideo,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventBlackOverlayFadeOut> : public GuiEventWrapper<BrnGui::GuiEventBlackOverlayFadeOut,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<70> > : public GuiEventWrapper<CgsGui::GuiEvent<70>,40> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPreloadedResourcesLoaded> : public GuiEventWrapper<BrnGui::GuiEventPreloadedResourcesLoaded,42> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventPreloadedResourcesLoaded> : public GuiEventWrapper<BrnGui::GuiEventPreloadedResourcesLoaded,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<136> > : public GuiEventWrapper<CgsGui::GuiEvent<136>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventTriggerGetPlayerName> : public GuiEventWrapper<BrnGui::GuiEventTriggerGetPlayerName,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<565> > : public GuiEventWrapper<CgsGui::GuiEvent<565>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiSetEasyDriveNotAllowedEvent> : public GuiEventWrapper<BrnGui::GuiSetEasyDriveNotAllowedEvent,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideSatNav> : public GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<528> > : public GuiEventWrapper<CgsGui::GuiEvent<528>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<529> > : public GuiEventWrapper<CgsGui::GuiEvent<529>,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<CgsGui::GuiEvent<60> > : public GuiEventWrapper<CgsGui::GuiEvent<60>,41> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<CgsGui::GuiEvent<61> > : public GuiEventWrapper<CgsGui::GuiEvent<61>,41> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> : public GuiEventWrapper<BrnGui::GuiEventShowHideSatNav,42> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiAudioEventResults> : public GuiEventWrapper<BrnGui::GuiAudioEventResults,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiOverlayWaitFinishRequest> : public GuiEventWrapper<BrnGui::GuiOverlayWaitFinishRequest,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventShowHideAboveCar> : public GuiEventWrapper<BrnGui::GuiEventShowHideAboveCar,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiOverlayRequest> : public GuiEventWrapper<BrnGui::GuiOverlayRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<233> > : public GuiEventWrapper<CgsGui::GuiEvent<233>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleDataRequest> : public GuiEventWrapper<BrnGui::GuiEventRoadRuleDataRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<428> > : public GuiEventWrapper<CgsGui::GuiEvent<428>,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<CgsGui::GuiEventUpdateLocalisedCpt> : public GuiEventWrapper<CgsGui::GuiEventUpdateLocalisedCpt,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<306> > : public GuiEventWrapper<CgsGui::GuiEvent<306>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventTrophyCarUnlock> : public GuiEventWrapper<BrnGui::GuiEventTrophyCarUnlock,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventEventStateRequest> : public GuiEventWrapper<BrnGui::GuiEventEventStateRequest,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventEnableSatNavIcons> : public GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventEnableSatNavIcons> : public GuiEventWrapper<BrnGui::GuiEventEnableSatNavIcons,40> {
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiAudioEventResults>(const GuiAudioEventResults &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiAudioEventResults> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventEnableSatNavIcons>(const GuiEventEnableSatNavIcons &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventEnableSatNavIcons> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<CgsGui::GuiEventUpdateLocalisedCpt>(const GuiEventUpdateLocalisedCpt &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<CgsGui::GuiEventUpdateLocalisedCpt> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventStopAptLoadingMovie>(const GuiEventWrapper<CgsGui::GuiEvent<20>,40>::GuiEventStopAptLoadingMovie &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<20> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventPlayAptLoadingMovie>(const GuiEventWrapper<CgsGui::GuiEvent<19>,40>::GuiEventPlayAptLoadingMovie &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<19> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventEnableSatNavIcons>(const GuiEventEnableSatNavIcons &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventEnableSatNavIcons> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventEventStateRequest>(const GuiEventEventStateRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventEventStateRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventTriggerGetPlayerName>(const GuiEventTriggerGetPlayerName &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventTriggerGetPlayerName> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventFreeburnChallengeRequestEveryPlayerStatus>(const GuiEventWrapper<CgsGui::GuiEvent<565>,40>::GuiEventFreeburnChallengeRequestEveryPlayerStatus &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<565> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiSetEasyDriveNotAllowedEvent>(const GuiSetEasyDriveNotAllowedEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiSetEasyDriveNotAllowedEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<CgsGui::GuiEventClearScreenSet>(const GuiEventClearScreenSet &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<CgsGui::GuiEventClearScreenSet> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventShowHideAboveCar>(const GuiEventShowHideAboveCar &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventShowHideAboveCar> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventGameCompleteRequest>(const GuiEventWrapper<CgsGui::GuiEvent<306>,40>::GuiEventGameCompleteRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<306> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventStopVideo>(const GuiEventStopVideo &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventStopVideo> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEvent<70> >(const GuiEvent<70> &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<70> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventPreloadedResourcesLoaded>(const GuiEventPreloadedResourcesLoaded &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventPreloadedResourcesLoaded> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPreloadedResourcesLoaded>(const GuiEventPreloadedResourcesLoaded &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventPreloadedResourcesLoaded> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventShowLoadingScreenAsBackground>(const GuiEventWrapper<CgsGui::GuiEvent<136>,40>::GuiEventShowLoadingScreenAsBackground &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<136> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEvent<71> >(const GuiEvent<71> &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<71> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventBlackOverlayFadeIn>(const GuiEventBlackOverlayFadeIn &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventBlackOverlayFadeIn> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(const GuiEventPlayMusicOnMenuStream &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEventPlayMusicOnMenuStream> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEvent<91> >(const GuiEvent<91> &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<91> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPlayVideo>(const GuiEventPlayVideo &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventPlayVideo> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventBlackOverlayFadeOut>(const GuiEventBlackOverlayFadeOut &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventBlackOverlayFadeOut> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventShowHideBoostBar>(const GuiEventShowHideBoostBar &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventShowHideBoostBar> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(const GuiOverlayWaitFinishRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiOverlayWaitFinishRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventShowHideSatNav>(const GuiEventShowHideSatNav &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventShowHideSatNav> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOverlayRequest>(const GuiOverlayRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiOverlayRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventShowHideSatNav>(const GuiEventShowHideSatNav &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventShowHideSatNav> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventStarted>(const GuiEventWrapper<CgsGui::GuiEvent<233>,40>::GuiEventStarted &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<233> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiNewBurnoutSkillzSelectNextCategory>(const GuiEventWrapper<CgsGui::GuiEvent<528>,40>::GuiNewBurnoutSkillzSelectNextCategory &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<528> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiFreeburnChallengeTargetSelectNextCategory>(const GuiEventWrapper<CgsGui::GuiEvent<529>,40>::GuiFreeburnChallengeTargetSelectNextCategory &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<529> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<CgsGui::GuiViewEventFontRotateDefault>(const GuiEventWrapper<CgsGui::GuiEvent<60>,41>::GuiViewEventFontRotateDefault &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<CgsGui::GuiEvent<60> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<CgsGui::GuiViewEventFontEffectRotateDefault>(const GuiEventWrapper<CgsGui::GuiEvent<61>,41>::GuiViewEventFontEffectRotateDefault &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<CgsGui::GuiEvent<61> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRoadRuleDataRequest>(const GuiEventRoadRuleDataRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRoadRuleDataRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventStartPursuitEvent>(const GuiEventStartPursuitEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<428> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventTrophyCarUnlock>(const GuiEventTrophyCarUnlock &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventTrophyCarUnlock> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventMapCursorStatus> : public GuiEventWrapper<BrnGui::GuiEventMapCursorStatus,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSettingsUpdate> : public GuiEventWrapper<BrnGui::GuiEventNetworkSettingsUpdate,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioSettings> : public GuiEventWrapper<BrnGui::GuiEventAudioSettings,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventControllerSettings> : public GuiEventWrapper<BrnGui::GuiEventControllerSettings,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventDirectorSettings> : public GuiEventWrapper<BrnGui::GuiEventDirectorSettings,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventGameOptionsSettings> : public GuiEventWrapper<BrnGui::GuiEventGameOptionsSettings,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiAutosaveRequestEvent> : public GuiEventWrapper<BrnGui::GuiAutosaveRequestEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<288> > : public GuiEventWrapper<CgsGui::GuiEvent<288>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiRequestCarControlChangeEvent> : public GuiEventWrapper<BrnGui::GuiRequestCarControlChangeEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSplashEvent> : public GuiEventWrapper<BrnGui::GuiEventNetworkSplashEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<290> > : public GuiEventWrapper<CgsGui::GuiEvent<290>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<292> > : public GuiEventWrapper<CgsGui::GuiEvent<292>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRunFsm> : public GuiEventWrapper<BrnGui::GuiEventRunFsm,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<291> > : public GuiEventWrapper<CgsGui::GuiEvent<291>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventActivateCrashNav> : public GuiEventWrapper<BrnGui::GuiEventActivateCrashNav,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventShowHideHud> : public GuiEventWrapper<BrnGui::GuiEventShowHideHud,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedCountEvent> : public GuiEventWrapper<BrnGui::GuiImageGalleryRequestCollectedCountEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedDataEvent> : public GuiEventWrapper<BrnGui::GuiImageGalleryRequestCollectedDataEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiSaveLoadImageExportRequested> : public GuiEventWrapper<BrnGui::GuiSaveLoadImageExportRequested,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEventNetworkSuspension> : public GuiEventWrapper<CgsGui::GuiEventNetworkSuspension,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiImageGalleryRequestEvent> : public GuiEventWrapper<BrnGui::GuiImageGalleryRequestEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiSnapShotRequested> : public GuiEventWrapper<BrnGui::GuiSnapShotRequested,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventActivateCarSelect> : public GuiEventWrapper<BrnGui::GuiEventActivateCarSelect,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiChangeCarEvent> : public GuiEventWrapper<BrnGui::GuiChangeCarEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<251> > : public GuiEventWrapper<CgsGui::GuiEvent<251>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCustomMatchSearch> : public GuiEventWrapper<BrnGui::GuiEventNetworkCustomMatchSearch,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCustomMatchJoin> : public GuiEventWrapper<BrnGui::GuiEventNetworkCustomMatchJoin,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<133> > : public GuiEventWrapper<CgsGui::GuiEvent<133>,40> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventShowHideHud> : public GuiEventWrapper<BrnGui::GuiEventShowHideHud,42> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<456> > : public GuiEventWrapper<CgsGui::GuiEvent<456>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<258> > : public GuiEventWrapper<CgsGui::GuiEvent<258>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<56> > : public GuiEventWrapper<CgsGui::GuiEvent<56>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventVoipSettings> : public GuiEventWrapper<BrnGui::GuiEventVoipSettings,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestGamercardEvent> : public GuiEventWrapper<BrnGui::GuiEventScoreboardRequestGamercardEvent,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventSetInspectedEventIcon> : public GuiEventWrapper<BrnGui::GuiEventSetInspectedEventIcon,41> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventSetInspectedEventIcon> : public GuiEventWrapper<BrnGui::GuiEventSetInspectedEventIcon,42> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<52> > : public GuiEventWrapper<CgsGui::GuiEvent<52>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkHighlightedPlayer> : public GuiEventWrapper<BrnGui::GuiEventNetworkHighlightedPlayer,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<54> > : public GuiEventWrapper<CgsGui::GuiEvent<54>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<263> > : public GuiEventWrapper<CgsGui::GuiEvent<263>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<93> > : public GuiEventWrapper<CgsGui::GuiEvent<93>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingFinished> : public GuiEventWrapper<BrnGui::GuiEventDirectorOnlineLoadingFinished,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingStarted> : public GuiEventWrapper<BrnGui::GuiEventDirectorOnlineLoadingStarted,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<279> > : public GuiEventWrapper<CgsGui::GuiEvent<279>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<247> > : public GuiEventWrapper<CgsGui::GuiEvent<247>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<248> > : public GuiEventWrapper<CgsGui::GuiEvent<248>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkNewsAndTOS> : public GuiEventWrapper<BrnGui::GuiEventNetworkNewsAndTOS,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<257> > : public GuiEventWrapper<CgsGui::GuiEvent<257>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiNetworkPrepareGameEvent> : public GuiEventWrapper<BrnGui::GuiNetworkPrepareGameEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRequestCollisionWorldEvent> : public GuiEventWrapper<BrnGui::GuiEventRequestCollisionWorldEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventFriendsListUtilShut> : public GuiEventWrapper<BrnGui::GuiEventFriendsListUtilShut,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiCarSelectionRequest> : public GuiEventWrapper<BrnGui::GuiCarSelectionRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRequestSpecificPreSetRaces> : public GuiEventWrapper<BrnGui::GuiEventRequestSpecificPreSetRaces,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkCreateGame> : public GuiEventWrapper<BrnGui::GuiEventNetworkCreateGame,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<173> > : public GuiEventWrapper<CgsGui::GuiEvent<173>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiNetworkCustomRouteCreated> : public GuiEventWrapper<BrnGui::GuiNetworkCustomRouteCreated,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<111> > : public GuiEventWrapper<CgsGui::GuiEvent<111>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestIndexEvent> : public GuiEventWrapper<BrnGui::GuiEventScoreboardRequestIndexEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestVariationEvent> : public GuiEventWrapper<BrnGui::GuiEventScoreboardRequestVariationEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventScoreboardRequestTableEvent> : public GuiEventWrapper<BrnGui::GuiEventScoreboardRequestTableEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiTelemetryEvent> : public GuiEventWrapper<BrnGui::GuiTelemetryEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<115> > : public GuiEventWrapper<CgsGui::GuiEvent<115>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<116> > : public GuiEventWrapper<CgsGui::GuiEvent<116>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkQuickMatch> : public GuiEventWrapper<BrnGui::GuiEventNetworkQuickMatch,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkMarkedManLoadedEvent> : public GuiEventWrapper<BrnGui::GuiEventNetworkMarkedManLoadedEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<238> > : public GuiEventWrapper<CgsGui::GuiEvent<238>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventOnlineStatsResponse> : public GuiEventWrapper<BrnGui::GuiEventOnlineStatsResponse,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<322> > : public GuiEventWrapper<CgsGui::GuiEvent<322>,40> {
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRequestCollisionWorldEvent>(const GuiEventRequestCollisionWorldEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRequestCollisionWorldEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiRequestOnlinePhotoFinishEvent>(const GuiEventWrapper<CgsGui::GuiEvent<322>,40>::GuiRequestOnlinePhotoFinishEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<322> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventNetworkSuspension>(const GuiEventNetworkSuspension &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEventNetworkSuspension> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventActivateCrashNav>(const GuiEventActivateCrashNav &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventActivateCrashNav> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventShowHideHud>(const GuiEventShowHideHud &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventShowHideHud> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineStatsResponse>(const GuiEventOnlineStatsResponse &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventOnlineStatsResponse> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineStatsRequest>(const GuiEventWrapper<CgsGui::GuiEvent<238>,40>::GuiEventOnlineStatsRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<238> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiAutosaveRequestEvent>(const GuiAutosaveRequestEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiAutosaveRequestEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(const GuiEventNetworkNewsAndTOS &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkNewsAndTOS> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiTelemetryEvent>(const GuiTelemetryEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiTelemetryEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestPageDownEvent>(const GuiEventWrapper<CgsGui::GuiEvent<116>,40>::GuiEventScoreboardRequestPageDownEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<116> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestPageUpEvent>(const GuiEventWrapper<CgsGui::GuiEvent<115>,40>::GuiEventScoreboardRequestPageUpEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<115> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventShowHideHud>(const GuiEventShowHideHud &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventShowHideHud> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiNetworkCustomRouteCreated>(const GuiNetworkCustomRouteCreated &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiNetworkCustomRouteCreated> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiNetworkPrepareGameEvent>(const GuiNetworkPrepareGameEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiNetworkPrepareGameEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkLocalPlayerStatsRequest>(const GuiEventWrapper<CgsGui::GuiEvent<257>,40>::GuiEventNetworkLocalPlayerStatsRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<257> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkQuitPlaying>(const GuiEventWrapper<CgsGui::GuiEvent<248>,40>::GuiEventNetworkQuitPlaying &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<248> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventVoipSettings>(const GuiEventVoipSettings &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventVoipSettings> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioSettings>(const GuiEventAudioSettings &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioSettings> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkHighlightedPlayer>(const GuiEventNetworkHighlightedPlayer &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkHighlightedPlayer> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventSetInspectedEventIcon>(const GuiEventSetInspectedEventIcon &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventSetInspectedEventIcon> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventSetInspectedEventIcon>(const GuiEventSetInspectedEventIcon &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventSetInspectedEventIcon> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventNetworkLaunch>(const GuiEventWrapper<CgsGui::GuiEvent<56>,40>::GuiEventNetworkLaunch &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<56> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventActivateCarSelect>(const GuiEventActivateCarSelect &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventActivateCarSelect> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiChangeCarEvent>(const GuiChangeCarEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiChangeCarEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestCategoryEvent>(const GuiEventWrapper<CgsGui::GuiEvent<111>,40>::GuiEventScoreboardRequestCategoryEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<111> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestIndexEvent>(const GuiEventScoreboardRequestIndexEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventScoreboardRequestIndexEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestVariationEvent>(const GuiEventScoreboardRequestVariationEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventScoreboardRequestVariationEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestTableEvent>(const GuiEventScoreboardRequestTableEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventScoreboardRequestTableEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRequestSpecificPreSetRaces>(const GuiEventRequestSpecificPreSetRaces &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRequestSpecificPreSetRaces> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiImageGalleryRequestCollectedCountEvent>(const GuiImageGalleryRequestCollectedCountEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedCountEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiImageGalleryRequestCollectedDataEvent>(const GuiImageGalleryRequestCollectedDataEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiImageGalleryRequestCollectedDataEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchSearch>(const GuiEventNetworkCustomMatchSearch &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkCustomMatchSearch> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkSplashEvent>(const GuiEventNetworkSplashEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkSplashEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkGameOptionsRequest>(const GuiEventWrapper<CgsGui::GuiEvent<258>,40>::GuiEventNetworkGameOptionsRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<258> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventFriendsListUtilShut>(const GuiEventFriendsListUtilShut &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventFriendsListUtilShut> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiImageGalleryRequestEvent>(const GuiImageGalleryRequestEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiImageGalleryRequestEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventEnteredOnlinePostEventState>(const GuiEventWrapper<CgsGui::GuiEvent<288>,40>::GuiEventEnteredOnlinePostEventState &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<288> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkCancelSearch>(const GuiEventWrapper<CgsGui::GuiEvent<251>,40>::GuiEventNetworkCancelSearch &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<251> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkQuickMatch>(const GuiEventNetworkQuickMatch &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkQuickMatch> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkMarkedManLoadedEvent>(const GuiEventNetworkMarkedManLoadedEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkMarkedManLoadedEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiRequestCarControlChangeEvent>(const GuiRequestCarControlChangeEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiRequestCarControlChangeEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventLeftPostEventState>(const GuiEventWrapper<CgsGui::GuiEvent<292>,40>::GuiEventLeftPostEventState &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<292> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiCarSelectionRequest>(const GuiCarSelectionRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiCarSelectionRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiCustomEventHostEasyDriveStartEvent>(const GuiEventWrapper<CgsGui::GuiEvent<173>,40>::GuiCustomEventHostEasyDriveStartEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<173> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventDirectorOnlineLoadingFinished>(const GuiEventDirectorOnlineLoadingFinished &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingFinished> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventDirectorOnlineLoadingStarted>(const GuiEventDirectorOnlineLoadingStarted &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventDirectorOnlineLoadingStarted> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkLoadingScreenShown>(const GuiEventWrapper<CgsGui::GuiEvent<279>,40>::GuiEventNetworkLoadingScreenShown &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<279> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventLoadingScreenLoaded>(const GuiEventWrapper<CgsGui::GuiEvent<93>,40>::GuiEventLoadingScreenLoaded &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<93> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiSnapShotRequested>(const GuiSnapShotRequested &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiSnapShotRequested> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventScoreboardRequestGamercardEvent>(const GuiEventScoreboardRequestGamercardEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventScoreboardRequestGamercardEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRunFsm>(const GuiEventRunFsm &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRunFsm> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventLeftPostEvent>(const GuiEventWrapper<CgsGui::GuiEvent<291>,40>::GuiEventLeftPostEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<291> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventLeavePostEvent>(const GuiEventWrapper<CgsGui::GuiEvent<290>,40>::GuiEventLeavePostEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<290> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiSaveLoadImageExportRequested>(const GuiSaveLoadImageExportRequested &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiSaveLoadImageExportRequested> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchJoin>(const GuiEventNetworkCustomMatchJoin &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkCustomMatchJoin> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkSettingsUpdate>(const GuiEventNetworkSettingsUpdate &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkSettingsUpdate> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventControllerSettings>(const GuiEventControllerSettings &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventControllerSettings> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventDirectorSettings>(const GuiEventDirectorSettings &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventDirectorSettings> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventGameOptionsSettings>(const GuiEventGameOptionsSettings &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventGameOptionsSettings> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventNetworkStartPressed>(const GuiEventWrapper<CgsGui::GuiEvent<54>,40>::GuiEventNetworkStartPressed &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<54> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkChangeTeams>(const GuiEventWrapper<CgsGui::GuiEvent<263>,40>::GuiEventNetworkChangeTeams &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<263> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventNetworkLeaveGame>(const GuiEventWrapper<CgsGui::GuiEvent<52>,40>::GuiEventNetworkLeaveGame &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<52> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventStreamingComplete>(const GuiEventWrapper<CgsGui::GuiEvent<133>,40>::GuiEventStreamingComplete &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<133> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioTraxAdvanceTrack>(const GuiEventWrapper<CgsGui::GuiEvent<456>,40>::GuiEventAudioTraxAdvanceTrack &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<456> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkFinishRound>(const GuiEventWrapper<CgsGui::GuiEvent<247>,40>::GuiEventNetworkFinishRound &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<247> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkCreateGame>(const GuiEventNetworkCreateGame &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkCreateGame> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventMapCursorStatus>(const GuiEventMapCursorStatus &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventMapCursorStatus> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<184> > : public GuiEventWrapper<CgsGui::GuiEvent<184>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiOverlayShowingNotification> : public GuiEventWrapper<BrnGui::GuiOverlayShowingNotification,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiOverlayCompleteEvent> : public GuiEventWrapper<BrnGui::GuiOverlayCompleteEvent,40> {
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOverlayCompleteEvent>(const GuiOverlayCompleteEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiOverlayCompleteEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOverlayFullInfoRequest>(const GuiEventWrapper<CgsGui::GuiEvent<184>,40>::GuiOverlayFullInfoRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<184> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOverlayShowingNotification>(const GuiOverlayShowingNotification &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiOverlayShowingNotification> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiReplaySetModeEvent> : public GuiEventWrapper<BrnGui::GuiReplaySetModeEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioGenericSequence> : public GuiEventWrapper<BrnGui::GuiEventAudioGenericSequence,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventPostEventFreeCarSequenceStart> : public GuiEventWrapper<BrnGui::GuiEventPostEventFreeCarSequenceStart,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventPostEventRankUpSequenceStart> : public GuiEventWrapper<BrnGui::GuiEventPostEventRankUpSequenceStart,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventPostEventNewRivalSequenceStart> : public GuiEventWrapper<BrnGui::GuiEventPostEventNewRivalSequenceStart,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventPreraceTriggerExit> : public GuiEventWrapper<BrnGui::GuiEventPreraceTriggerExit,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioEventIntros> : public GuiEventWrapper<BrnGui::GuiEventAudioEventIntros,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<80> > : public GuiEventWrapper<CgsGui::GuiEvent<80>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiPlayerCarColourRequest> : public GuiEventWrapper<BrnGui::GuiPlayerCarColourRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiCarUnlockedLiveryRequest> : public GuiEventWrapper<BrnGui::GuiCarUnlockedLiveryRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiChangePlayerCarColourEvent> : public GuiEventWrapper<BrnGui::GuiChangePlayerCarColourEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiPlayerInfoRequest> : public GuiEventWrapper<BrnGui::GuiPlayerInfoRequest,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiCarUnlockTickerClosed> : public GuiEventWrapper<BrnGui::GuiCarUnlockTickerClosed,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<49> > : public GuiEventWrapper<CgsGui::GuiEvent<49>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventNetworkConnect> : public GuiEventWrapper<BrnGui::GuiEventNetworkConnect,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEventAnswerLoginQuestion> : public GuiEventWrapper<CgsGui::GuiEventAnswerLoginQuestion,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<326> > : public GuiEventWrapper<CgsGui::GuiEvent<326>,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventSetHoveredEventIcon> : public GuiEventWrapper<BrnGui::GuiEventSetHoveredEventIcon,41> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventFilterEventIcons> : public GuiEventWrapper<BrnGui::GuiEventFilterEventIcons,41> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<139> > : public GuiEventWrapper<CgsGui::GuiEvent<139>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventCustomeEventDelete> : public GuiEventWrapper<BrnGui::GuiEventCustomeEventDelete,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventCustomeEventCreate> : public GuiEventWrapper<BrnGui::GuiEventCustomeEventCreate,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAcceptEventStart> : public GuiEventWrapper<BrnGui::GuiEventAcceptEventStart,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiRequestCarUnlockEvent> : public GuiEventWrapper<BrnGui::GuiRequestCarUnlockEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEventClearScreenSet> : public GuiEventWrapper<CgsGui::GuiEventClearScreenSet,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxPreview> : public GuiEventWrapper<BrnGui::GuiEventAudioTraxPreview,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<122> > : public GuiEventWrapper<CgsGui::GuiEvent<122>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventOnlineAccountUpdate> : public GuiEventWrapper<BrnGui::GuiEventOnlineAccountUpdate,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventColourCalibrationScreenShow> : public GuiEventWrapper<BrnGui::GuiEventColourCalibrationScreenShow,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventColourCalibrationScreenHide> : public GuiEventWrapper<BrnGui::GuiEventColourCalibrationScreenHide,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiOptionsBrightnessContrast> : public GuiEventWrapper<BrnGui::GuiOptionsBrightnessContrast,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventEnableAutoSave> : public GuiEventWrapper<BrnGui::GuiEventEnableAutoSave,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventQueryTickerStatus> : public GuiEventWrapper<BrnGui::GuiEventQueryTickerStatus,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxUpdate> : public GuiEventWrapper<BrnGui::GuiEventAudioTraxUpdate,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxPlayOrder> : public GuiEventWrapper<BrnGui::GuiEventAudioTraxPlayOrder,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventEnterCredits> : public GuiEventWrapper<BrnGui::GuiEventEnterCredits,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventLeaveCredits> : public GuiEventWrapper<BrnGui::GuiEventLeaveCredits,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiReplayPlayReelEvent> : public GuiEventWrapper<BrnGui::GuiReplayPlayReelEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiReplayDeleteReelEvent> : public GuiEventWrapper<BrnGui::GuiReplayDeleteReelEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiReplayStopPlayingReelEvent> : public GuiEventWrapper<BrnGui::GuiReplayStopPlayingReelEvent,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<259> > : public GuiEventWrapper<CgsGui::GuiEvent<259>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<143> > : public GuiEventWrapper<CgsGui::GuiEvent<143>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventDirectorNewProfileIntroStart> : public GuiEventWrapper<BrnGui::GuiEventDirectorNewProfileIntroStart,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioTraxLastPlayedIndexes> : public GuiEventWrapper<BrnGui::GuiEventAudioTraxLastPlayedIndexes,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventDirectorFlybyStart> : public GuiEventWrapper<BrnGui::GuiEventDirectorFlybyStart,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventDirectorFlybyFinish> : public GuiEventWrapper<BrnGui::GuiEventDirectorFlybyFinish,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventAudioVoiceOver> : public GuiEventWrapper<BrnGui::GuiEventAudioVoiceOver,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEvent100PerCentComplete> : public GuiEventWrapper<BrnGui::GuiEvent100PerCentComplete,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<302> > : public GuiEventWrapper<CgsGui::GuiEvent<302>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<293> > : public GuiEventWrapper<CgsGui::GuiEvent<293>,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventCarbonCarSequence> : public GuiEventWrapper<BrnGui::GuiEventCarbonCarSequence,40> {
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioGenericSequence>(const GuiEventAudioGenericSequence &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioGenericSequence> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPostEventFreeCarSequenceStart>(const GuiEventPostEventFreeCarSequenceStart &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventPostEventFreeCarSequenceStart> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPostEventCompletionSequenceInProgess>(const GuiEventWrapper<CgsGui::GuiEvent<302>,40>::GuiEventPostEventCompletionSequenceInProgess &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<302> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioTraxUpdate>(const GuiEventAudioTraxUpdate &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioTraxUpdate> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioTraxLastPlayedIndexes>(const GuiEventAudioTraxLastPlayedIndexes &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioTraxLastPlayedIndexes> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioTraxPlayOrder>(const GuiEventAudioTraxPlayOrder &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioTraxPlayOrder> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiOptionsBrightnessContrast>(const GuiOptionsBrightnessContrast &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiOptionsBrightnessContrast> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiReplayStopPlayingReelEvent>(const GuiReplayStopPlayingReelEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiReplayStopPlayingReelEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiReplayDeleteReelEvent>(const GuiReplayDeleteReelEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiReplayDeleteReelEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiReplayPlayReelEvent>(const GuiReplayPlayReelEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiReplayPlayReelEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventEnterCredits>(const GuiEventEnterCredits &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventEnterCredits> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioTraxPreview>(const GuiEventAudioTraxPreview &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioTraxPreview> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventEnableAutoSave>(const GuiEventEnableAutoSave &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventEnableAutoSave> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineRequestAccountSettings>(const GuiEventWrapper<CgsGui::GuiEvent<122>,40>::GuiEventOnlineRequestAccountSettings &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<122> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventClearScreenSet>(const GuiEventClearScreenSet &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEventClearScreenSet> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventKeyboardRequest>(const GuiEventWrapper<CgsGui::GuiEvent<139>,40>::GuiEventKeyboardRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<139> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAcceptEventStart>(const GuiEventAcceptEventStart &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAcceptEventStart> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventFilterEventIcons>(const GuiEventFilterEventIcons &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventFilterEventIcons> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventAnswerLoginQuestion>(const GuiEventAnswerLoginQuestion &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEventAnswerLoginQuestion> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventCancelLogin>(const GuiEventWrapper<CgsGui::GuiEvent<49>,40>::GuiEventCancelLogin &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<49> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiChangePlayerCarColourEvent>(const GuiChangePlayerCarColourEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiChangePlayerCarColourEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiCarUnlockedLiveryRequest>(const GuiCarUnlockedLiveryRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiCarUnlockedLiveryRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiPlayerCarColourRequest>(const GuiPlayerCarColourRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiPlayerCarColourRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioEventIntros>(const GuiEventAudioEventIntros &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioEventIntros> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventCarbonCarSequence>(const GuiEventCarbonCarSequence &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventCarbonCarSequence> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventSetHoveredEventIcon>(const GuiEventSetHoveredEventIcon &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventSetHoveredEventIcon> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventColourCalibrationScreenShow>(const GuiEventColourCalibrationScreenShow &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventColourCalibrationScreenShow> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventColourCalibrationScreenHide>(const GuiEventColourCalibrationScreenHide &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventColourCalibrationScreenHide> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiPlayerInfoRequest>(const GuiPlayerInfoRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiPlayerInfoRequest> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventAudioVoiceOver>(const GuiEventAudioVoiceOver &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventAudioVoiceOver> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPostEventRankUpSequenceStart>(const GuiEventPostEventRankUpSequenceStart &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventPostEventRankUpSequenceStart> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventLeavingJunkyard>(const GuiEventWrapper<CgsGui::GuiEvent<80>,40>::GuiEventLeavingJunkyard &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<80> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventLeaveCredits>(const GuiEventLeaveCredits &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventLeaveCredits> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiReplaySetModeEvent>(const GuiReplaySetModeEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiReplaySetModeEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEvent100PerCentComplete>(const GuiEvent100PerCentComplete &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEvent100PerCentComplete> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiHudMessageAllFinshedShowingRivalShutdown>(const GuiEventWrapper<CgsGui::GuiEvent<293>,40>::GuiHudMessageAllFinshedShowingRivalShutdown &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<293> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventQueryTickerStatus>(const GuiEventQueryTickerStatus &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventQueryTickerStatus> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkReadyToJoinGameSession>(const GuiEventWrapper<CgsGui::GuiEvent<259>,40>::GuiEventNetworkReadyToJoinGameSession &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<259> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventStartedGame>(const GuiEventWrapper<CgsGui::GuiEvent<143>,40>::GuiEventStartedGame &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<143> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventNetworkConnect>(const GuiEventNetworkConnect &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventNetworkConnect> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiRequestCarUnlockEvent>(const GuiRequestCarUnlockEvent &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiRequestCarUnlockEvent> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventOnlineAccountUpdate>(const GuiEventOnlineAccountUpdate &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventOnlineAccountUpdate> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPostEventNewRivalSequenceStart>(const GuiEventPostEventNewRivalSequenceStart &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventPostEventNewRivalSequenceStart> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventPreraceTriggerExit>(const GuiEventPreraceTriggerExit &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventPreraceTriggerExit> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiCarUnlockTickerClosed>(const GuiCarUnlockTickerClosed &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiCarUnlockTickerClosed> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRoadRuleBatchDataRequest>(const GuiEventWrapper<CgsGui::GuiEvent<326>,40>::GuiEventRoadRuleBatchDataRequest &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEvent<326> > lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventCustomeEventDelete>(const GuiEventCustomeEventDelete &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventCustomeEventDelete> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventCustomeEventCreate>(const GuiEventCustomeEventCreate &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventCustomeEventCreate> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventDirectorNewProfileIntroStart>(const GuiEventDirectorNewProfileIntroStart &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventDirectorNewProfileIntroStart> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventDirectorFlybyStart>(const GuiEventDirectorFlybyStart &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventDirectorFlybyStart> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventDirectorFlybyFinish>(const GuiEventDirectorFlybyFinish &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventDirectorFlybyFinish> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventMapIconStatus> : public GuiEventWrapper<BrnGui::GuiEventMapIconStatus,40> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<BrnGui::GuiEventRoadSignIconStatus> : public GuiEventWrapper<BrnGui::GuiEventRoadSignIconStatus,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<BrnGui::GuiEventDrawEventIcons> : public GuiEventWrapper<BrnGui::GuiEventDrawEventIcons,41> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<BrnGui::GuiEventDrawEventIcons> : public GuiEventWrapper<BrnGui::GuiEventDrawEventIcons,42> {
}

// CgsGuiStateInterface.h:423
extern void OutputViewState<BrnGui::GuiEventDrawEventIcons>(const GuiEventDrawEventIcons &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:425
		GuiOutViewState<BrnGui::GuiEventDrawEventIcons> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:442
extern void OutputInternalState<BrnGui::GuiEventDrawEventIcons>(const GuiEventDrawEventIcons &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:444
		GuiOutInternalEvent<BrnGui::GuiEventDrawEventIcons> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventRoadSignIconStatus>(const GuiEventRoadSignIconStatus &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventRoadSignIconStatus> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<BrnGui::GuiEventMapIconStatus>(const GuiEventMapIconStatus &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<BrnGui::GuiEventMapIconStatus> lOutEventWrapper;

	}
}

// CgsGuiStateInterface.h:55
struct CgsGui::GuiEventRegisterForEvents : public GuiEvent<34> {
	// CgsGuiStateInterface.h:57
	int32_t miEventType;

	// CgsGuiStateInterface.h:58
	CgsGui::EventObserver * lpEventObserver;

}

// CgsGuiStateInterface.h:70
struct CgsGui::GuiEventUnRegisterForEvents : public GuiEvent<35> {
	// CgsGuiStateInterface.h:72
	int32_t miEventType;

	// CgsGuiStateInterface.h:73
	CgsGui::EventObserver * lpEventObserver;

}

// CgsGuiStateInterface.h:85
struct CgsGui::GuiEventPriorityRegisterForEvents : public GuiEvent<36> {
	// CgsGuiStateInterface.h:87
	int32_t miEventType;

	// CgsGuiStateInterface.h:88
	int32_t[576] miEventTypeOverridden;

	// CgsGuiStateInterface.h:89
	uint32_t muOverrideCount;

	// CgsGuiStateInterface.h:90
	CgsGui::EventObserver * lpEventObserver;

}

// CgsGuiStateInterface.h:102
struct CgsGui::GuiEventPriorityUnRegisterForEvents : public GuiEvent<37> {
	// CgsGuiStateInterface.h:104
	int32_t miEventType;

	// CgsGuiStateInterface.h:105
	CgsGui::EventObserver * lpEventObserver;

}

// CgsGuiStateInterface.h:117
struct CgsGui::GuiEventPriorityStopBlocking : public GuiEvent<38> {
	// CgsGuiStateInterface.h:119
	CgsGui::EventObserver * lpEventObserver;

}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEvent<-0x00000000000000001> > : public GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,40> {
}

// CgsGuiStateInterface.h:142
struct CgsGui::GuiOutViewState<CgsGui::GuiEvent<-0x00000000000000001> > : public GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,41> {
}

// CgsGuiStateInterface.h:153
struct CgsGui::GuiOutInternalEvent<CgsGui::GuiEvent<-0x00000000000000001> > : public GuiEventWrapper<CgsGui::GuiEvent<-0x00000000000000001>,42> {
}

// CgsGuiStateInterface.h:131
struct CgsGui::GuiEventOut<CgsGui::GuiEventStateChange> : public GuiEventWrapper<CgsGui::GuiEventStateChange,40> {
}

// CgsGuiStateInterface.h:404
extern void OutputGuiEvent<CgsGui::GuiEventStateChange>(const GuiEventStateChange &  lOutEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:406
		GuiEventOut<CgsGui::GuiEventStateChange> lOutEventWrapper;

	}
}

