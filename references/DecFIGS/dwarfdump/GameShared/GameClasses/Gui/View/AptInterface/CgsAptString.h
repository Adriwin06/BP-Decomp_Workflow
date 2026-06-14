// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsAptString.h:38
	const int32_t KI_MAX_APT_STRING_LEN = 256;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct CgsAptString {
		// CgsAptString.h:66
		enum ETextEffects {
			E_EFFECT_NONE = 0,
			E_EFFECT_DROPSHADOW = 1,
			E_EFFECT_GRADIENT = 2,
			E_EFFECT_EMBOSSED = 3,
			E_EFFECT_ALL = 4,
		}

	}

	// CgsAptString.h:38
	const int32_t KI_MAX_APT_STRING_LEN = 256;

}

// CgsAptString.h:63
struct CgsGui::CgsAptString {
	// CgsAptString.h:75
	TextObject mTextObject;

private:
	// CgsAptString.h:106
	const RGBA * mpAlternateTextColours;

	// CgsAptString.h:107
	int32_t miNumAlternateColours;

public:
	// CgsAptString.h:81
	void Construct(const RGBA *, int32_t);

	// CgsAptString.h:91
	void Prepare(const CgsGui::FontCollection *, AptAllocateStringParameters *, UnicodeBuffer::CgsUtf8 *, CgsGui::CgsAptString::ETextEffects, float32_t);

	// CgsAptString.h:98
	void SetText(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, bool);

	// CgsAptString.h:102
	const UnicodeBuffer::CgsUtf8 * GetText() const;

private:
	// CgsAptString.h:112
	void Reset();

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct CgsAptString {
		// CgsAptString.h:66
		enum ETextEffects {
			E_EFFECT_NONE = 0,
			E_EFFECT_DROPSHADOW = 1,
			E_EFFECT_GRADIENT = 2,
			E_EFFECT_EMBOSSED = 3,
			E_EFFECT_ALL = 4,
		}

	}

	// CgsAptString.h:38
	const int32_t KI_MAX_APT_STRING_LEN = 256;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsAptString.h:38
	const int32_t KI_MAX_APT_STRING_LEN = 256;

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct CgsAptString {
		// CgsAptString.h:66
		enum ETextEffects {
			E_EFFECT_NONE = 0,
			E_EFFECT_DROPSHADOW = 1,
			E_EFFECT_GRADIENT = 2,
			E_EFFECT_EMBOSSED = 3,
			E_EFFECT_ALL = 4,
		}

	}

	// CgsAptString.h:38
	const int32_t KI_MAX_APT_STRING_LEN = 256;

}

