// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEffectsArbitrator.h:37
	const int32_t KI_MAX_NUM_CONCURRENT_EFFECTS = 1;

	// BrnGuiEffectsArbitrator.h:38
	const int32_t KI_MAX_NUM_HOOKS_PER_BUNDLE = 20;

	// BrnGuiEffectsArbitrator.h:39
	const uint32_t KU_MAX_NUM_COLOURCUBES = 6;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiEffectsArbitrator.h:37
	const int32_t KI_MAX_NUM_CONCURRENT_EFFECTS = 1;

	// BrnGuiEffectsArbitrator.h:38
	const int32_t KI_MAX_NUM_HOOKS_PER_BUNDLE = 20;

	// BrnGuiEffectsArbitrator.h:39
	const uint32_t KU_MAX_NUM_COLOURCUBES = 6;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct EffectsArbitrator {
		// BrnGuiEffectsArbitrator.h:135
		enum EHookState {
			E_NORMAL = 0,
			E_CROSSFADE = 1,
			E_FADE_TO_MENU = 2,
			E_FULL_MENU = 3,
			E_FADE_FROM_MENU = 4,
			E_PAUSED = 5,
		}

		// BrnGuiEffectsArbitrator.h:145
		enum EBackgroundHookState {
			E_BACKGROUND_INACTIVE = 0,
			E_BACKGROUND_RUNNING = 1,
			E_BACKGROUND_CROSSFADING = 2,
		}

	}

	// BrnGuiEffectsArbitrator.h:37
	const int32_t KI_MAX_NUM_CONCURRENT_EFFECTS = 1;

	// BrnGuiEffectsArbitrator.h:38
	const int32_t KI_MAX_NUM_HOOKS_PER_BUNDLE = 20;

	// BrnGuiEffectsArbitrator.h:39
	const uint32_t KU_MAX_NUM_COLOURCUBES = 6;

}

// BrnGuiEffectsArbitrator.h:54
struct BrnGui::EffectsArbitrator {
private:
	// BrnGuiEffectsArbitrator.h:128
	ColourCubeInfo[6] mColourCubes;

	// BrnGuiEffectsArbitrator.h:129
	uint32_t[6] mauColourCubeRequestIds;

	// BrnGuiEffectsArbitrator.h:131
	uint32_t muColourCubeCount;

	// BrnGuiEffectsArbitrator.h:133
	ResourcePtr<BrnGui::PFXHookBundle> mpHookInfo;

	// BrnGuiEffectsArbitrator.h:152
	PFXHookNodeBlender mBlender1;

	// BrnGuiEffectsArbitrator.h:153
	PFXHookNodeBlender mBlender2;

	// BrnGuiEffectsArbitrator.h:154
	PFXHookNodeBlender mMenuBlender;

	// BrnGuiEffectsArbitrator.h:155
	PFXHookNodeBlender mBackgroundBlender1;

	// BrnGuiEffectsArbitrator.h:156
	PFXHookNodeBlender mBackgroundBlender2;

	// BrnGuiEffectsArbitrator.h:158
	PFXHookNodeBlender * mpCurrent;

	// BrnGuiEffectsArbitrator.h:159
	PFXHookNodeBlender * mpOutgoing;

	// BrnGuiEffectsArbitrator.h:160
	PFXHookNodeBlender * mpMenu;

	// BrnGuiEffectsArbitrator.h:161
	PFXHookNodeBlender * mpBackgroundCurrent;

	// BrnGuiEffectsArbitrator.h:162
	PFXHookNodeBlender * mpBackgroundOutgoing;

	// BrnGuiEffectsArbitrator.h:164
	BrnGui::EffectsArbitrator::EHookState meStateBeforeMenu;

	// BrnGuiEffectsArbitrator.h:165
	BrnGui::EffectsArbitrator::EHookState meHookState;

	// BrnGuiEffectsArbitrator.h:166
	BrnGui::EffectsArbitrator::EBackgroundHookState meBackgroundHookState;

	// BrnGuiEffectsArbitrator.h:167
	float32_t mfMenuPhaseTimeExpired;

	// BrnGuiEffectsArbitrator.h:168
	float32_t mfMenuPhaseTimeToEnd;

	// BrnGuiEffectsArbitrator.h:170
	float32_t mfCrossFadeTimeExpired;

	// BrnGuiEffectsArbitrator.h:171
	float32_t mfCrossFadeTimeToEnd;

	// BrnGuiEffectsArbitrator.h:173
	float32_t mfBackgroundFadeTimeExpired;

	// BrnGuiEffectsArbitrator.h:174
	float32_t mfBackgroundFadeTimeToEnd;

	// BrnGuiEffectsArbitrator.h:176
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiEffectsArbitrator.h:177
	float32_t mfLastTime;

	// BrnGuiEffectsArbitrator.h:180
	bool mbForceTime;

	// BrnGuiEffectsArbitrator.h:181
	float32_t mfForcedTime;

	// BrnGuiEffectsArbitrator.h:182
	float32_t mfBackgroundWeight;

	// BrnGuiEffectsArbitrator.h:183
	int32_t miPfxHookIndex;

	// BrnGuiEffectsArbitrator.h:184
	StringList[100] maPfxHookList;

public:
	// BrnGuiEffectsArbitrator.h:59
	void Construct();

	// BrnGuiEffectsArbitrator.h:63
	void Destruct();

	// BrnGuiEffectsArbitrator.h:69
	void ResourceUpdate(InputBuffer *, const OutputBuffer *);

	// BrnGuiEffectsArbitrator.h:75
	// Declaration
	void EventUpdate(BrnUpdateSet, const InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEffectsArbitrator.cpp:309
		using namespace CgsDev::Message;

	}

	// BrnGuiEffectsArbitrator.h:81
	void GenerateEffectFrameEvents(OutputBuffer *);

private:
	// BrnGuiEffectsArbitrator.h:87
	const PFXHook * GetHookFromName(const char *);

	// BrnGuiEffectsArbitrator.h:91
	const PFXHook * GetHookFromGUID(uint32_t);

	// BrnGuiEffectsArbitrator.h:96
	// Declaration
	void StartHook(const GuiPFXHookEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEffectsArbitrator.cpp:592
		using namespace CgsDev::Message;

	}

	// BrnGuiEffectsArbitrator.h:101
	void StopHook(const PFXHook *);

	// BrnGuiEffectsArbitrator.h:106
	void StartBackgroundHook(const GuiPFXStartBackgroundHookEvent *);

	// BrnGuiEffectsArbitrator.h:110
	void StopBackgroundHook(const GuiPFXStopBackgroundHookEvent *);

	// BrnGuiEffectsArbitrator.h:114
	void StopMenuHook();

	// BrnGuiEffectsArbitrator.h:118
	void UpdateHooks();

	// BrnGuiEffectsArbitrator.h:123
	void Acquire3dTints(InputBuffer *);

	// BrnGuiEffectsArbitrator.h:126
	ColourCubeInfo * LookupColourCube(uint64_t);

	// BrnGuiEffectsArbitrator.h:186
	void Debug_StartHook(void *);

	// BrnGuiEffectsArbitrator.h:187
	void Debug_StartBackgroundHook(void *);

	// BrnGuiEffectsArbitrator.h:188
	void Debug_StopHook(void *);

	// BrnGuiEffectsArbitrator.h:189
	void Debug_StopBackgroundHook(void *);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct EffectsArbitrator {
		// BrnGuiEffectsArbitrator.h:135
		enum EHookState {
			E_NORMAL = 0,
			E_CROSSFADE = 1,
			E_FADE_TO_MENU = 2,
			E_FULL_MENU = 3,
			E_FADE_FROM_MENU = 4,
			E_PAUSED = 5,
		}

		// BrnGuiEffectsArbitrator.h:145
		enum EBackgroundHookState {
			E_BACKGROUND_INACTIVE = 0,
			E_BACKGROUND_RUNNING = 1,
			E_BACKGROUND_CROSSFADING = 2,
		}

	}

	// BrnGuiEffectsArbitrator.h:37
	const int32_t KI_MAX_NUM_CONCURRENT_EFFECTS = 1;

	// BrnGuiEffectsArbitrator.h:38
	const int32_t KI_MAX_NUM_HOOKS_PER_BUNDLE = 20;

	// BrnGuiEffectsArbitrator.h:39
	const uint32_t KU_MAX_NUM_COLOURCUBES = 6;

}

// BrnGuiEffectsArbitrator.h:54
struct BrnGui::EffectsArbitrator {
private:
	// BrnGuiEffectsArbitrator.h:128
	ColourCubeInfo[6] mColourCubes;

	// BrnGuiEffectsArbitrator.h:129
	uint32_t[6] mauColourCubeRequestIds;

	// BrnGuiEffectsArbitrator.h:131
	uint32_t muColourCubeCount;

	// BrnGuiEffectsArbitrator.h:133
	ResourcePtr<BrnGui::PFXHookBundle> mpHookInfo;

	// BrnGuiEffectsArbitrator.h:152
	PFXHookNodeBlender mBlender1;

	// BrnGuiEffectsArbitrator.h:153
	PFXHookNodeBlender mBlender2;

	// BrnGuiEffectsArbitrator.h:154
	PFXHookNodeBlender mMenuBlender;

	// BrnGuiEffectsArbitrator.h:155
	PFXHookNodeBlender mBackgroundBlender1;

	// BrnGuiEffectsArbitrator.h:156
	PFXHookNodeBlender mBackgroundBlender2;

	// BrnGuiEffectsArbitrator.h:158
	PFXHookNodeBlender * mpCurrent;

	// BrnGuiEffectsArbitrator.h:159
	PFXHookNodeBlender * mpOutgoing;

	// BrnGuiEffectsArbitrator.h:160
	PFXHookNodeBlender * mpMenu;

	// BrnGuiEffectsArbitrator.h:161
	PFXHookNodeBlender * mpBackgroundCurrent;

	// BrnGuiEffectsArbitrator.h:162
	PFXHookNodeBlender * mpBackgroundOutgoing;

	// BrnGuiEffectsArbitrator.h:164
	BrnGui::EffectsArbitrator::EHookState meStateBeforeMenu;

	// BrnGuiEffectsArbitrator.h:165
	BrnGui::EffectsArbitrator::EHookState meHookState;

	// BrnGuiEffectsArbitrator.h:166
	BrnGui::EffectsArbitrator::EBackgroundHookState meBackgroundHookState;

	// BrnGuiEffectsArbitrator.h:167
	float32_t mfMenuPhaseTimeExpired;

	// BrnGuiEffectsArbitrator.h:168
	float32_t mfMenuPhaseTimeToEnd;

	// BrnGuiEffectsArbitrator.h:170
	float32_t mfCrossFadeTimeExpired;

	// BrnGuiEffectsArbitrator.h:171
	float32_t mfCrossFadeTimeToEnd;

	// BrnGuiEffectsArbitrator.h:173
	float32_t mfBackgroundFadeTimeExpired;

	// BrnGuiEffectsArbitrator.h:174
	float32_t mfBackgroundFadeTimeToEnd;

	// BrnGuiEffectsArbitrator.h:176
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiEffectsArbitrator.h:177
	float32_t mfLastTime;

	// BrnGuiEffectsArbitrator.h:180
	bool mbForceTime;

	// BrnGuiEffectsArbitrator.h:181
	float32_t mfForcedTime;

	// BrnGuiEffectsArbitrator.h:182
	float32_t mfBackgroundWeight;

	// BrnGuiEffectsArbitrator.h:183
	int32_t miPfxHookIndex;

	// BrnGuiEffectsArbitrator.h:184
	StringList[100] maPfxHookList;

public:
	// BrnGuiEffectsArbitrator.h:59
	void Construct();

	// BrnGuiEffectsArbitrator.h:63
	void Destruct();

	// BrnGuiEffectsArbitrator.h:69
	void ResourceUpdate(InputBuffer *, const OutputBuffer *);

	// BrnGuiEffectsArbitrator.h:75
	void EventUpdate(BrnUpdateSet, const InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiEffectsArbitrator.h:81
	void GenerateEffectFrameEvents(OutputBuffer *);

private:
	// BrnGuiEffectsArbitrator.h:87
	const PFXHook * GetHookFromName(const char *);

	// BrnGuiEffectsArbitrator.h:91
	const PFXHook * GetHookFromGUID(uint32_t);

	// BrnGuiEffectsArbitrator.h:96
	void StartHook(const GuiPFXHookEvent *);

	// BrnGuiEffectsArbitrator.h:101
	void StopHook(const PFXHook *);

	// BrnGuiEffectsArbitrator.h:106
	void StartBackgroundHook(const GuiPFXStartBackgroundHookEvent *);

	// BrnGuiEffectsArbitrator.h:110
	void StopBackgroundHook(const GuiPFXStopBackgroundHookEvent *);

	// BrnGuiEffectsArbitrator.h:114
	void StopMenuHook();

	// BrnGuiEffectsArbitrator.h:118
	void UpdateHooks();

	// BrnGuiEffectsArbitrator.h:123
	void Acquire3dTints(InputBuffer *);

	// BrnGuiEffectsArbitrator.h:126
	ColourCubeInfo * LookupColourCube(uint64_t);

	// BrnGuiEffectsArbitrator.h:186
	void Debug_StartHook(void *);

	// BrnGuiEffectsArbitrator.h:187
	void Debug_StartBackgroundHook(void *);

	// BrnGuiEffectsArbitrator.h:188
	void Debug_StopHook(void *);

	// BrnGuiEffectsArbitrator.h:189
	void Debug_StopBackgroundHook(void *);

}

