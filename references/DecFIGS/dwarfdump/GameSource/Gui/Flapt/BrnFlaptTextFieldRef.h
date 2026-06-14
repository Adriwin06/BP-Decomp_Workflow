// BrnFlaptTextFieldRef.h:55
struct BrnFlapt::TextFieldRef {
private:
	// BrnFlaptTextFieldRef.h:190
	BrnFlapt::TextFieldInstance * mpTextFieldInst;

	// BrnFlaptTextFieldRef.h:191
	BrnFlapt::MovieClipInstance * mpParentMovie;

	// BrnFlaptTextFieldRef.h:192
	Im2dTransform * mpTransform;

public:
	// BrnFlaptTextFieldRef.h:63
	void Construct(BrnFlapt::TextFieldInstance *, BrnFlapt::MovieClipInstance *, Im2dTransform *);

	// BrnFlaptTextFieldRef.h:67
	void SetInvalid();

	// BrnFlaptTextFieldRef.h:71
	bool IsValid() const;

	// BrnFlaptTextFieldRef.h:76
	void GetPosition(Vector2 &) const;

	// BrnFlaptTextFieldRef.h:81
	void SetPosition(Vector2);

	// BrnFlaptTextFieldRef.h:85
	void ClearText();

	// BrnFlaptTextFieldRef.h:90
	void SetColour(Vector4);

	// BrnFlaptTextFieldRef.h:96
	void SetText(const char *, bool);

	// BrnFlaptTextFieldRef.h:100
	const char * GetText() const;

	// BrnFlaptTextFieldRef.h:106
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:111
	bool SetLocalisedText(float, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:116
	bool SetLocalisedText(int, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:123
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// BrnFlaptTextFieldRef.h:131
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnFlaptTextFieldRef.h:138
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:145
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:154
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:163
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:174
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:177
	LanguageManager * GetLanguageManager();

	// BrnFlaptTextFieldRef.h:181
	float32_t GetTextWidth();

	// BrnFlaptTextFieldRef.h:186
	void SetAutoSize(bool);

}

// BrnFlaptTextFieldRef.h:55
struct BrnFlapt::TextFieldRef {
private:
	// BrnFlaptTextFieldRef.h:190
	BrnFlapt::TextFieldInstance * mpTextFieldInst;

	// BrnFlaptTextFieldRef.h:191
	BrnFlapt::MovieClipInstance * mpParentMovie;

	// BrnFlaptTextFieldRef.h:192
	Im2dTransform * mpTransform;

public:
	// BrnFlaptTextFieldRef.h:63
	void Construct(BrnFlapt::TextFieldInstance *, BrnFlapt::MovieClipInstance *, Im2dTransform *);

	// BrnFlaptTextFieldRef.h:67
	void SetInvalid();

	// BrnFlaptTextFieldRef.h:71
	bool IsValid() const;

	// BrnFlaptTextFieldRef.h:76
	void GetPosition(Vector2 &) const;

	// BrnFlaptTextFieldRef.h:81
	void SetPosition(Vector2);

	// BrnFlaptTextFieldRef.h:85
	void ClearText();

	// BrnFlaptTextFieldRef.h:90
	void SetColour(Vector4);

	// BrnFlaptTextFieldRef.h:96
	void SetText(const char *, bool);

	// BrnFlaptTextFieldRef.h:100
	const char * GetText() const;

	// BrnFlaptTextFieldRef.h:106
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:111
	bool SetLocalisedText(float, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:116
	bool SetLocalisedText(int, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:123
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// BrnFlaptTextFieldRef.h:131
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnFlaptTextFieldRef.h:138
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:145
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:154
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:163
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:174
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnFlaptTextFieldRef.h:177
	CgsLanguage::LanguageManager * GetLanguageManager();

	// BrnFlaptTextFieldRef.h:181
	float32_t GetTextWidth();

	// BrnFlaptTextFieldRef.h:186
	void SetAutoSize(bool);

}

// BrnFlaptTextFieldRef.h:31
namespace BrnFlapt {
	struct TextFieldRef;

	struct TextFieldInstance;

	struct MovieClipInstance;

	struct HashedString;

	struct Transform;

	struct ColourTransform;

	struct TextField;

	struct Mesh;

	struct RenderLayer;

	struct RenderLayerKeyFrame;

	struct KeyFrameAnims;

	struct MovieClip;

	struct FlaptFile;

	struct TriggerParameters;

	struct FileDebugData;

	struct FontStyle;

	struct IndexPath;

	struct FlaptRenderer;

	struct MovieClipRef;

	struct FlaptFileInstance;

	struct FileRef;

	struct FlaptFileResourceType;

}

