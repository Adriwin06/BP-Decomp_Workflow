// BrnGuiPFXHooks.h:27
namespace BrnGui {
	struct GuiPFXHookEnumeration;

	// BrnGuiPFXHooks.h:31
	const uint32_t KI_MAX_PFX_ID_LENGTH = 32;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiPFXHooks.h:31
	const uint32_t KI_MAX_PFX_ID_LENGTH = 32;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiPFXHooks.h:31
	const uint32_t KI_MAX_PFX_ID_LENGTH = 32;

}

// BrnGuiPFXHooks.h:48
struct BrnGui::PFXGroup {
private:
	// BrnGuiPFXHooks.h:152
	int32_t miID;

	// BrnGuiPFXHooks.h:155
	float32_t mfFadeIn;

	// BrnGuiPFXHooks.h:156
	float32_t mfFadeOut;

	// BrnGuiPFXHooks.h:157
	float32_t mfDuration;

	// BrnGuiPFXHooks.h:162
	uint8_t mbUseBloom;

	// BrnGuiPFXHooks.h:163
	uint8_t mbUseVignette;

	// BrnGuiPFXHooks.h:164
	uint8_t mbUseDepthOfField;

	// BrnGuiPFXHooks.h:165
	uint8_t mbUseBlur;

	// BrnGuiPFXHooks.h:166
	uint8_t mbUseTint2D;

	// BrnGuiPFXHooks.h:167
	uint8_t mbUseTint3D;

	// Unknown accessibility
	// BrnGuiPFXHooks.h:170
	char[32] macBloomDataID;

	// Unknown accessibility
	// BrnGuiPFXHooks.h:171
	char[32] macVignetteDataID;

	// Unknown accessibility
	// BrnGuiPFXHooks.h:172
	char[32] macDepthOfFieldDataID;

	// Unknown accessibility
	// BrnGuiPFXHooks.h:173
	char[32] macBlurDataID;

	// Unknown accessibility
	// BrnGuiPFXHooks.h:175
	char[32] macTint2DDataID;

	// Unknown accessibility
	// BrnGuiPFXHooks.h:176
	uint64_t muTint3DResourceId;

public:
	// BrnGuiPFXHooks.h:53
	void Construct();

	// BrnGuiPFXHooks.h:57
	int32_t GetID() const;

	// BrnGuiPFXHooks.h:62
	void SetID(int32_t);

	// BrnGuiPFXHooks.h:66
	float32_t GetFadeIn() const;

	// BrnGuiPFXHooks.h:71
	void SetFadeIn(float32_t);

	// BrnGuiPFXHooks.h:75
	float32_t GetFadeOut() const;

	// BrnGuiPFXHooks.h:80
	void SetFadeOut(float32_t);

	// BrnGuiPFXHooks.h:84
	float_t GetDuration() const;

	// BrnGuiPFXHooks.h:89
	void SetDuration(float_t);

	// BrnGuiPFXHooks.h:94
	bool GetUseBloom() const;

	// BrnGuiPFXHooks.h:98
	bool GetUseVignette() const;

	// BrnGuiPFXHooks.h:102
	bool GetUseDepthOfField() const;

	// BrnGuiPFXHooks.h:106
	bool GetUseBlur() const;

	// BrnGuiPFXHooks.h:110
	bool GetUseTint2D() const;

	// BrnGuiPFXHooks.h:114
	bool GetUseTint3D() const;

	// BrnGuiPFXHooks.h:119
	void SetUseBloom(bool);

	// BrnGuiPFXHooks.h:124
	void SetUseVignette(bool);

	// BrnGuiPFXHooks.h:129
	void SetUseDepthOfField(bool);

	// BrnGuiPFXHooks.h:134
	void SetUseBlur(bool);

	// BrnGuiPFXHooks.h:139
	void SetUseTint2D(bool);

	// BrnGuiPFXHooks.h:144
	void SetUseTint3D(bool);

	// BrnGuiPFXHooks.h:148
	void EndianSwap();

}

// BrnGuiPFXHooks.h:189
struct BrnGui::PFXHookNode {
	// BrnGuiPFXHooks.h:191
	float32_t mfStartTime;

	// BrnGuiPFXHooks.h:192
	PFXGroup * mpGroup;

}

// BrnGuiPFXHooks.h:204
struct BrnGui::PFXHook {
	// BrnGuiPFXHooks.h:242
	char[32] macName;

	// BrnGuiPFXHooks.h:243
	uint32_t muId;

	// BrnGuiPFXHooks.h:244
	int32_t miPriority;

	// BrnGuiPFXHooks.h:245
	uint32_t meTransitionMode;

	// BrnGuiPFXHooks.h:246
	float mfTransitionTime;

	// BrnGuiPFXHooks.h:247
	uint8_t mbIsMenu;

	// BrnGuiPFXHooks.h:249
	PFXHookNode ** mpaNodes;

	// BrnGuiPFXHooks.h:250
	int32_t miNodeCount;

public:
	// BrnGuiPFXHooks.h:214
	void Construct();

	// BrnGuiPFXHooks.h:217
	void Construct(const char *);

	// BrnGuiPFXHooks.h:221
	bool IsMenu() const;

	// BrnGuiPFXHooks.h:226
	void SetMenu(bool);

	// BrnGuiPFXHooks.h:235
	void FixUp(uint32_t);

	// BrnGuiPFXHooks.h:239
	void FixDown(uint32_t);

}

// BrnGuiPFXHooks.h:265
struct BrnGui::PFXHookBundle {
	// BrnGuiPFXHooks.h:268
	int32_t miHookCount;

	// BrnGuiPFXHooks.h:269
	int32_t miGroupCount;

	// BrnGuiPFXHooks.h:271
	PFXHook ** mpaHooks;

	// BrnGuiPFXHooks.h:272
	PFXGroup ** mpaGroups;

	// BrnGuiPFXHooks.h:274
	size_t mSizeOfBundle;

}

