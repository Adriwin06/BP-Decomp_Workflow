// BrnFlaptMovieClipInstance.h:66
struct BrnFlapt::MovieClipInstance {
	// BrnFlaptMovieClipInstance.h:69
	extern int32_t _miMCRenderMaskPerfMon;

	// BrnFlaptMovieClipInstance.h:70
	extern int32_t _miMCRenderChildClipPerfMon;

	// BrnFlaptMovieClipInstance.h:71
	extern int32_t _miMCRenderMeshPerfMon;

	// BrnFlaptMovieClipInstance.h:72
	extern int32_t _miMCRenderTextFieldPerfMon;

	// BrnFlaptTypes.h:44
	typedef void (*)(void *, const char *, const char *, const char *, const char *) SoundTriggerCallback;

private:
	// BrnFlaptMovieClipInstance.h:197
	extern MovieClipInstance::SoundTriggerCallback gpSoundTriggerCallback;

	// BrnFlaptMovieClipInstance.h:198
	extern void * gpSoundTriggerUserData;

	// BrnFlaptMovieClipInstance.h:203
	const MovieClip * mpMovieClip;

	// BrnFlaptMovieClipInstance.h:204
	const char * mpcDEBUGName;

	// BrnFlaptMovieClipInstance.h:206
	uint32_t[3] maxPlacedChildren;

	// BrnFlaptMovieClipInstance.h:208
	BrnFlapt::MovieClipInstance * mpParentInstance;

	// BrnFlaptMovieClipInstance.h:209
	BrnFlapt::MovieClipInstance * mpaChildInstances;

	// BrnFlaptMovieClipInstance.h:211
	Im2dTransform * mpaTransforms;

	// BrnFlaptMovieClipInstance.h:213
	BrnFlapt::TextFieldInstance * mpaTextFieldInstances;

	// BrnFlaptMovieClipInstance.h:215
	float32_t mfTimeTillNextFrame;

	// BrnFlaptMovieClipInstance.h:217
	uint16_t muCurrentFrame;

	// BrnFlaptMovieClipInstance.h:218
	uint16_t muLastKeyFrameApplied;

	// Unknown accessibility
	// BrnFlaptTypes.h:36
	typedef void (*)(void *, uint16_t) FrameTriggerCallback;

	// BrnFlaptMovieClipInstance.h:220
	MovieClipInstance::FrameTriggerCallback mpFrameTriggerCallback;

	// BrnFlaptMovieClipInstance.h:221
	void * mpFrameTriggerUserData;

	// BrnFlaptMovieClipInstance.h:223
	uint16_t muParameterIndex;

	// BrnFlaptMovieClipInstance.h:224
	uint8_t mxFlags;

public:
	// BrnFlaptMovieClipInstance.h:83
	void Construct(const MovieClip *, const char *, BrnFlapt::MovieClipInstance *, LinearMalloc *, const BrnFlapt::FlaptRenderer *, const RGBA *, int32_t);

	// BrnFlaptMovieClipInstance.h:88
	void Update(float32_t);

	// BrnFlaptMovieClipInstance.h:93
	void Render(BrnFlapt::FlaptRenderer *) const;

	// BrnFlaptMovieClipInstance.h:101
	void FindChildMovieClip(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptMovieClipInstance.h:108
	void FindChildTextField(uint32_t, TextFieldRef *, const char *);

	// BrnFlaptMovieClipInstance.h:115
	void FindChildMovieClipOnFrame(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptMovieClipInstance.h:122
	bool TryFindChildComponentRecursively(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptMovieClipInstance.h:128
	void GetParent(BrnFlapt::MovieClipRef *);

	// BrnFlaptMovieClipInstance.h:134
	void GetNthChild(uint32_t, BrnFlapt::MovieClipRef *) const;

	// BrnFlaptMovieClipInstance.h:139
	BrnFlapt::MovieClipInstance * GetNthChild(uint32_t) const;

	// BrnFlaptMovieClipInstance.h:145
	void GotoAndPlayLabel(uint32_t, const char *);

	// BrnFlaptMovieClipInstance.h:151
	void GotoAndStopLabel(uint32_t, const char *);

	// BrnFlaptMovieClipInstance.h:156
	void GotoFrame(uint32_t);

	// BrnFlaptMovieClipInstance.h:160
	void ResetTimeline();

	// BrnFlaptMovieClipInstance.h:166
	void SetFrameTriggerCallback(MovieClipInstance::FrameTriggerCallback, void *);

	// BrnFlaptMovieClipInstance.h:173
	void SetSoundTriggerHandler(MovieClipInstance::SoundTriggerCallback, void *);

	// BrnFlaptMovieClipInstance.h:176
	const TriggerParameters * GetTriggerParameters() const;

	// BrnFlaptMovieClipInstance.h:179
	const MovieClip * GetMovieClip() const;

	// BrnFlaptMovieClipInstance.h:180
	int32_t GetCurrentFrame() const;

	// BrnFlaptMovieClipInstance.h:182
	bool IsVisible() const;

	// BrnFlaptMovieClipInstance.h:183
	void SetVisible(bool);

private:
	// BrnFlaptMovieClipInstance.h:228
	bool IsStopped() const;

	// BrnFlaptMovieClipInstance.h:229
	void SetStopped();

	// BrnFlaptMovieClipInstance.h:230
	void ClearStopped();

	// BrnFlaptMovieClipInstance.h:231
	bool DidFrameChange() const;

	// BrnFlaptMovieClipInstance.h:232
	void SetChangedFrame();

	// BrnFlaptMovieClipInstance.h:233
	void ClearChangedFrame();

	// BrnFlaptMovieClipInstance.h:236
	void SetParameterIndex(uint16_t);

	// BrnFlaptMovieClipInstance.h:239
	uint16_t GetParameterIndex() const;

	// BrnFlaptMovieClipInstance.h:245
	void DEBUGSetTransformsInvalid(uint32_t);

	// BrnFlaptMovieClipInstance.h:250
	void DEBUGCheckTransformsValid(uint32_t);

	// BrnFlaptMovieClipInstance.h:256
	void ApplyKeyFrame(uint32_t);

	// BrnFlaptMovieClipInstance.h:263
	void ProcessFScript(const FScriptCommand *, uint32_t, uint32_t);

	// BrnFlaptMovieClipInstance.h:269
	void FireTrigger(BrnFlapt::FScriptCommand::TriggerTypes, uint16_t) const;

}

// BrnFlaptMovieClipInstance.h:66
struct BrnFlapt::MovieClipInstance {
	// BrnFlaptMovieClipInstance.h:69
	extern int32_t _miMCRenderMaskPerfMon;

	// BrnFlaptMovieClipInstance.h:70
	extern int32_t _miMCRenderChildClipPerfMon;

	// BrnFlaptMovieClipInstance.h:71
	extern int32_t _miMCRenderMeshPerfMon;

	// BrnFlaptMovieClipInstance.h:72
	extern int32_t _miMCRenderTextFieldPerfMon;

	// BrnFlaptTypes.h:44
	typedef void (*)(void *, const char *, const char *, const char *, const char *) SoundTriggerCallback;

private:
	// BrnFlaptMovieClipInstance.h:197
	extern MovieClipInstance::SoundTriggerCallback gpSoundTriggerCallback;

	// BrnFlaptMovieClipInstance.h:198
	extern void * gpSoundTriggerUserData;

	// BrnFlaptMovieClipInstance.h:203
	const MovieClip * mpMovieClip;

	// BrnFlaptMovieClipInstance.h:204
	const char * mpcDEBUGName;

	// BrnFlaptMovieClipInstance.h:206
	uint32_t[3] maxPlacedChildren;

	// BrnFlaptMovieClipInstance.h:208
	BrnFlapt::MovieClipInstance * mpParentInstance;

	// BrnFlaptMovieClipInstance.h:209
	BrnFlapt::MovieClipInstance * mpaChildInstances;

	// BrnFlaptMovieClipInstance.h:211
	Im2dTransform * mpaTransforms;

	// BrnFlaptMovieClipInstance.h:213
	BrnFlapt::TextFieldInstance * mpaTextFieldInstances;

	// BrnFlaptMovieClipInstance.h:215
	float32_t mfTimeTillNextFrame;

	// BrnFlaptMovieClipInstance.h:217
	uint16_t muCurrentFrame;

	// BrnFlaptMovieClipInstance.h:218
	uint16_t muLastKeyFrameApplied;

	// Unknown accessibility
	// BrnFlaptTypes.h:36
	typedef void (*)(void *, uint16_t) FrameTriggerCallback;

	// BrnFlaptMovieClipInstance.h:220
	MovieClipInstance::FrameTriggerCallback mpFrameTriggerCallback;

	// BrnFlaptMovieClipInstance.h:221
	void * mpFrameTriggerUserData;

	// BrnFlaptMovieClipInstance.h:223
	uint16_t muParameterIndex;

	// BrnFlaptMovieClipInstance.h:224
	uint8_t mxFlags;

public:
	// BrnFlaptMovieClipInstance.h:83
	void Construct(const MovieClip *, const char *, BrnFlapt::MovieClipInstance *, LinearMalloc *, const BrnFlapt::FlaptRenderer *, const RGBA *, int32_t);

	// BrnFlaptMovieClipInstance.h:88
	void Update(float32_t);

	// BrnFlaptMovieClipInstance.h:93
	void Render(BrnFlapt::FlaptRenderer *) const;

	// BrnFlaptMovieClipInstance.h:101
	void FindChildMovieClip(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptMovieClipInstance.h:108
	void FindChildTextField(uint32_t, TextFieldRef *, const char *);

	// BrnFlaptMovieClipInstance.h:115
	void FindChildMovieClipOnFrame(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptMovieClipInstance.h:122
	bool TryFindChildComponentRecursively(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptMovieClipInstance.h:128
	void GetParent(BrnFlapt::MovieClipRef *);

	// BrnFlaptMovieClipInstance.h:134
	void GetNthChild(uint32_t, BrnFlapt::MovieClipRef *) const;

	// BrnFlaptMovieClipInstance.h:139
	BrnFlapt::MovieClipInstance * GetNthChild(uint32_t) const;

	// BrnFlaptMovieClipInstance.h:145
	void GotoAndPlayLabel(uint32_t, const char *);

	// BrnFlaptMovieClipInstance.h:151
	void GotoAndStopLabel(uint32_t, const char *);

	// BrnFlaptMovieClipInstance.h:156
	void GotoFrame(uint32_t);

	// BrnFlaptMovieClipInstance.h:160
	void ResetTimeline();

	// BrnFlaptMovieClipInstance.h:166
	void SetFrameTriggerCallback(MovieClipInstance::FrameTriggerCallback, void *);

	// BrnFlaptMovieClipInstance.h:173
	void SetSoundTriggerHandler(MovieClipInstance::SoundTriggerCallback, void *);

	// BrnFlaptMovieClipInstance.h:176
	const TriggerParameters * GetTriggerParameters() const;

	// BrnFlaptMovieClipInstance.h:179
	const MovieClip * GetMovieClip() const;

	// BrnFlaptMovieClipInstance.h:180
	int32_t GetCurrentFrame() const;

	// BrnFlaptMovieClipInstance.h:182
	bool IsVisible() const;

	// BrnFlaptMovieClipInstance.h:183
	void SetVisible(bool);

private:
	// BrnFlaptMovieClipInstance.h:228
	bool IsStopped() const;

	// BrnFlaptMovieClipInstance.h:229
	void SetStopped();

	// BrnFlaptMovieClipInstance.h:230
	void ClearStopped();

	// BrnFlaptMovieClipInstance.h:231
	bool DidFrameChange() const;

	// BrnFlaptMovieClipInstance.h:232
	void SetChangedFrame();

	// BrnFlaptMovieClipInstance.h:233
	void ClearChangedFrame();

	// BrnFlaptMovieClipInstance.h:236
	void SetParameterIndex(uint16_t);

	// BrnFlaptMovieClipInstance.h:239
	uint16_t GetParameterIndex() const;

	// BrnFlaptMovieClipInstance.h:245
	void DEBUGSetTransformsInvalid(uint32_t);

	// BrnFlaptMovieClipInstance.h:250
	void DEBUGCheckTransformsValid(uint32_t);

	// BrnFlaptMovieClipInstance.h:256
	void ApplyKeyFrame(uint32_t);

	// BrnFlaptMovieClipInstance.h:263
	void ProcessFScript(const FScriptCommand *, uint32_t, uint32_t);

	// BrnFlaptMovieClipInstance.h:269
	// Declaration
	void FireTrigger(BrnFlapt::FScriptCommand::TriggerTypes, uint16_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnFlaptMovieClipInstance.cpp:541
		using namespace CgsDev::Message;

		// BrnFlaptMovieClipInstance.cpp:572
		using namespace CgsDev::Message;

	}

}

