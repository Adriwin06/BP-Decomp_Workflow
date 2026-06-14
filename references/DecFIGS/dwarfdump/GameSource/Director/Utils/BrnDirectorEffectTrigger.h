// BrnDirectorEffectTrigger.h:39
struct BrnDirector::HookNameStringWrapper {
	// BrnGuiPFXHooks.h:37
	typedef char[33] HookNameString;

	// BrnDirectorEffectTrigger.h:40
	HookNameStringWrapper::HookNameString mHookNameString;

public:
	// BrnDirectorEffectTrigger.h:44
	void operator=(const HookNameStringWrapper &);

	// BrnDirectorEffectTrigger.h:52
	void Set(const char *);

	// BrnDirectorEffectTrigger.h:61
	bool operator==(const HookNameStringWrapper &) const;

	// BrnDirectorEffectTrigger.h:65
	bool operator==(const char *) const;

	// BrnDirectorEffectTrigger.h:69
	bool operator!=(const HookNameStringWrapper &) const;

	// BrnDirectorEffectTrigger.h:73
	bool operator!=(const char *) const;

}

// BrnDirectorEffectTrigger.h:79
struct BrnDirector::EffectInterface {
private:
	// BrnDirectorEffectTrigger.h:195
	Array<BrnDirector::HookNameStringWrapper,100u> maHookNames;

	// BrnDirectorEffectTrigger.h:197
	uint32_t muRequestedPostFxId;

	// BrnDirectorEffectTrigger.h:198
	float32_t mfCurrentEffectBlendAmount;

	// BrnDirectorEffectTrigger.h:199
	float32_t mfCurrentBackgroundEffectBlendAmount;

	// BrnDirectorEffectTrigger.h:200
	HookNameStringWrapper mCurrentEffectName;

	// BrnDirectorEffectTrigger.h:201
	HookNameStringWrapper mCurrentBackgroundHookName;

	// BrnDirectorEffectTrigger.h:203
	bool mbGotHooks;

	// BrnDirectorEffectTrigger.h:204
	bool mbHasCurrentEffectName;

	// BrnDirectorEffectTrigger.h:205
	bool mbHasCurrentBackgroundEffectName;

	// BrnDirectorEffectTrigger.h:206
	bool mbHasCurrentEffectId;

public:
	// BrnDirectorEffectTrigger.h:85
	void Construct();

	// BrnDirectorEffectTrigger.h:91
	void Update(int32_t, const char *const*, bool *);

	// BrnDirectorEffectTrigger.h:95
	void Update(bool *);

	// BrnDirectorEffectTrigger.h:98
	int32_t GetNumHooks() const;

	// BrnDirectorEffectTrigger.h:102
	bool HookExists(const char *) const;

	// BrnDirectorEffectTrigger.h:106
	const char * GetHookName(int32_t) const;

	// BrnDirectorEffectTrigger.h:109
	bool HasCurrentEffectName() const;

	// BrnDirectorEffectTrigger.h:112
	const HookNameStringWrapper & GetCurrentEffectName() const;

	// BrnDirectorEffectTrigger.h:115
	const float32_t GetCurrentEffectBlendAmount() const;

	// BrnDirectorEffectTrigger.h:118
	bool HasCurrentBackgroundEffectName() const;

	// BrnDirectorEffectTrigger.h:121
	const HookNameStringWrapper & GetCurrentBackgroundEffectName() const;

	// BrnDirectorEffectTrigger.h:124
	const float32_t GetCurrentBackgroundEffectBlendAmount() const;

	// BrnDirectorEffectTrigger.h:127
	bool HasCurrentEffectId() const;

	// BrnDirectorEffectTrigger.h:130
	const uint32_t GetCurrentEffectId() const;

	// BrnDirectorEffectTrigger.h:135
	void RegisterStartingEffectWithName(const HookNameStringWrapper &, float32_t);

	// BrnDirectorEffectTrigger.h:145
	void RegisterStoppingEffectWithName(const HookNameStringWrapper &);

	// BrnDirectorEffectTrigger.h:157
	void RegisterStartingBackgroundEffectWithName(const HookNameStringWrapper &, float32_t);

	// BrnDirectorEffectTrigger.h:166
	void RegisterStoppingBackgroundEffectWithName(const HookNameStringWrapper &);

	// BrnDirectorEffectTrigger.h:177
	void RegisterStartingEffectWithId(uint32_t);

	// BrnDirectorEffectTrigger.h:185
	const uint32_t GetNullEffectId() const;

}

// BrnDirectorEffectTrigger.h:212
struct BrnDirector::BackgroundEffectRequest {
private:
	// BrnDirectorEffectTrigger.h:254
	HookNameStringWrapper mBackgroundHookName;

	// BrnDirectorEffectTrigger.h:255
	float32_t mfBackgroundBlendAmount;

	// BrnDirectorEffectTrigger.h:256
	bool mbHasBackgroundEffectName;

	// BrnDirectorEffectTrigger.h:257
	bool mbHasBackgroundStopRequest;

public:
	// BrnDirectorEffectTrigger.h:216
	void Construct();

	// BrnDirectorEffectTrigger.h:222
	void StartOrContinueBackgroundEffect(const char *, const EffectInterface &, float32_t);

	// BrnDirectorEffectTrigger.h:227
	void StopBackgroundEffect(const char *, const EffectInterface &);

	// BrnDirectorEffectTrigger.h:231
	void StopActiveBackgroundEffect(const EffectInterface &);

	// BrnDirectorEffectTrigger.h:235
	void RegisterAndUpdateRequest(EffectInterface *);

	// BrnDirectorEffectTrigger.h:238
	bool HasBackgroundStartRequest() const;

	// BrnDirectorEffectTrigger.h:241
	char &[33] GetBackgroundStartRequestHookName() const;

	// BrnDirectorEffectTrigger.h:244
	const float32_t GetBackgroundStartRequestBlendAmount() const;

	// BrnDirectorEffectTrigger.h:247
	bool HasBackgroundStopRequest() const;

	// BrnDirectorEffectTrigger.h:250
	char &[33] GetBackgroundStopRequestHookName() const;

}

// BrnDirectorEffectTrigger.h:39
struct BrnDirector::HookNameStringWrapper {
	// BrnDirectorEffectTrigger.h:40
	GuiPFXHookEvent::HookNameString mHookNameString;

public:
	// BrnDirectorEffectTrigger.h:44
	void operator=(const HookNameStringWrapper &);

	// BrnDirectorEffectTrigger.h:52
	void Set(const char *);

	// BrnDirectorEffectTrigger.h:61
	bool operator==(const HookNameStringWrapper &) const;

	// BrnDirectorEffectTrigger.h:65
	bool operator==(const char *) const;

	// BrnDirectorEffectTrigger.h:69
	bool operator!=(const HookNameStringWrapper &) const;

	// BrnDirectorEffectTrigger.h:73
	bool operator!=(const char *) const;

}

