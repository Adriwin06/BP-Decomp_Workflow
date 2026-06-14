// CgsSku.h:43
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

// CgsSku.h:175
extern const CgsLanguage::ELanguage[7] maeSupportedLanguages;

// CgsSku.h:176
extern const char[24][32] mapcSupportedLanguageFilenames;

// CgsSku.h:177
extern const char[24][32] mapcSupportedLanguageResources;

// CgsSku.h:180
extern const CgsLanguage::ELanguage meDefaultLanguage;

// CgsSku.h:183
extern const int32_t meNumLanguages;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSku.h:37
	namespace CgsGuiModuleIO {
	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSku.h:37
	namespace CgsGuiModuleIO {
		struct OutputBuffer;

	}

}

// CgsSku.h:43
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	// CgsSku.h:79
	enum ESku {
		E_SKU_US = 0,
		E_SKU_EURO_1 = 1,
		E_SKU_EURO_2 = 2,
		E_SKU_JAPAN = 3,
		E_SKU_KOREA = 4,
		E_SKU_ROA = 5,
		E_SKU_DEFAULT = 6,
		E_SKU_TOTAL = 7,
	}

	struct LanguageManagerDebugComponent;

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSku.h:37
	namespace CgsGuiModuleIO {
		struct OutputBuffer;

		struct InputBuffer;

	}

}

// CgsSku.h:43
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	struct LanguageManagerDebugComponent;

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsSku.h:37
	namespace CgsGuiModuleIO {
		struct OutputBuffer;

		struct InputBuffer;

	}

}

// CgsGuiShared.h:35
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	// CgsSku.h:79
	enum ESku {
		E_SKU_US = 0,
		E_SKU_EURO_1 = 1,
		E_SKU_EURO_2 = 2,
		E_SKU_JAPAN = 3,
		E_SKU_KOREA = 4,
		E_SKU_ROA = 5,
		E_SKU_DEFAULT = 6,
		E_SKU_TOTAL = 7,
	}

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

// CgsSku.h:112
struct CgsLanguage::Sku {
private:
	// CgsSku.h:175
	extern const CgsLanguage::ELanguage[7] maeSupportedLanguages;

	// CgsSku.h:176
	extern const char[24][32] mapcSupportedLanguageFilenames;

	// CgsSku.h:177
	extern const char[24][32] mapcSupportedLanguageResources;

	// CgsSku.h:180
	extern const CgsLanguage::ELanguage meDefaultLanguage;

	// CgsSku.h:183
	extern const int32_t meNumLanguages;

	// CgsSku.h:186
	CgsLanguage::ELanguage meLanguage;

	// CgsSku.h:189
	CgsLanguage::ELanguage meLoadedLanguage;

	// CgsSku.h:190
	int32_t miWaitForUnload;

	// CgsSku.h:193
	CgsLanguage::ESku meSku;

	// CgsSku.h:195
	CgsGui::GuiModule * mpGuiModule;

	// CgsSku.h:197
	bool mbLoaded;

	// CgsSku.h:198
	bool mbLoadRequest;

	// CgsSku.h:199
	bool mbSendLanguage;

	// CgsSku.h:201
	bool mbSendSku;

	// CgsSku.h:204
	extern const char *[24] spLanguageNames;

public:
	// CgsSku.h:118
	void Construct(CgsGui::GuiModule *);

	// CgsSku.h:123
	void SetLanguage(CgsLanguage::ELanguage);

	// CgsSku.h:127
	const CgsLanguage::ELanguage GetLanguage() const;

	// CgsSku.h:131
	const CgsLanguage::ELanguage FindLanguage();

	// CgsSku.h:136
	void SetSku(CgsLanguage::ESku);

	// CgsSku.h:140
	const CgsLanguage::ESku GetSku() const;

	// CgsSku.h:144
	const CgsLanguage::ESku FindSku();

	// CgsSku.h:149
	void Update(InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// CgsSku.h:158
	const char * GetMoviePostfix(CgsLanguage::ELanguage);

private:
	// CgsSku.h:169
	void RequestLoadLanguage(CgsLanguage::ELanguage);

}

// CgsSku.h:43
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	// CgsSku.h:79
	enum ESku {
		E_SKU_US = 0,
		E_SKU_EURO_1 = 1,
		E_SKU_EURO_2 = 2,
		E_SKU_JAPAN = 3,
		E_SKU_KOREA = 4,
		E_SKU_ROA = 5,
		E_SKU_DEFAULT = 6,
		E_SKU_TOTAL = 7,
	}

	// Declaration
	struct LanguageManagerDebugComponent {
	public:
		LanguageManagerDebugComponent();

	}

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

// CgsSku.h:43
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	// CgsSku.h:79
	enum ESku {
		E_SKU_US = 0,
		E_SKU_EURO_1 = 1,
		E_SKU_EURO_2 = 2,
		E_SKU_JAPAN = 3,
		E_SKU_KOREA = 4,
		E_SKU_ROA = 5,
		E_SKU_DEFAULT = 6,
		E_SKU_TOTAL = 7,
	}

	struct Sku;

	struct LanguageManagerDebugComponent;

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsSku.h:37
	namespace CgsGuiModuleIO {
		struct OutputBuffer;

	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsSku.h:37
	namespace CgsGuiModuleIO {
		struct OutputBuffer;

	}

}

// CgsSaveDataPS3.h:38
namespace CgsLanguage {
	// CgsSku.h:46
	enum ELanguage {
		E_LANGUAGE_INVALID = -1,
		E_LANGUAGE_ARABIC = 0,
		E_LANGUAGE_CHINESE = 1,
		E_LANGUAGE_CHINESE_SIMPLIFIED = 2,
		E_LANGUAGE_CHINESE_TRADITIONAL = 3,
		E_LANGUAGE_CZECH = 4,
		E_LANGUAGE_DANISH = 5,
		E_LANGUAGE_DUTCH = 6,
		E_LANGUAGE_ENGLISH_US = 7,
		E_LANGUAGE_ENGLISH_UK = 8,
		E_LANGUAGE_FINNISH = 9,
		E_LANGUAGE_FRENCH = 10,
		E_LANGUAGE_GERMAN = 11,
		E_LANGUAGE_GREEK = 12,
		E_LANGUAGE_HEBREW = 13,
		E_LANGUAGE_HUNGARIAN = 14,
		E_LANGUAGE_ITALIAN = 15,
		E_LANGUAGE_JAPANESE = 16,
		E_LANGUAGE_KOREAN = 17,
		E_LANGUAGE_NORWEGIAN = 18,
		E_LANGUAGE_POLISH = 19,
		E_LANGUAGE_PORTUGUESE_BRAZIL = 20,
		E_LANGUAGE_PORTUGUESE_PORTUGAL = 21,
		E_LANGUAGE_SPANISH = 22,
		E_LANGUAGE_SWEDISH = 23,
		E_LANGUAGE_TOTAL = 24,
	}

	// CgsSku.h:79
	enum ESku {
		E_SKU_US = 0,
		E_SKU_EURO_1 = 1,
		E_SKU_EURO_2 = 2,
		E_SKU_JAPAN = 3,
		E_SKU_KOREA = 4,
		E_SKU_ROA = 5,
		E_SKU_DEFAULT = 6,
		E_SKU_TOTAL = 7,
	}

	// CgsSku.h:94
	const int32_t KI_SKU_LANGUAGES = 7;

}

