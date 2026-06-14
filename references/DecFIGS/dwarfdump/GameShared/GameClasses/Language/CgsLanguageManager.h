// CgsSku.h:43
namespace CgsLanguage {
	// CgsLanguageManager.h:39
	const int32_t KI_LANGUAGE_MAX_STRINGID_LENGTH = 128;

	// CgsLanguageManager.h:47
	const int KI_LANGUAGE_MAX_DYNAMIC_STRINGS = 1024;

	// CgsLanguageManager.h:48
	const int KI_LANGUAGE_NUM_HASH_BINS = 13;

	// CgsLanguageManager.h:49
	const int KI_LANGUAGE_CURRENCY_STR_SIZE = 4;

}

// CgsLanguageManager.h:477
extern const int32_t KI_SMALL_PARAM_LENGTH = 64;

// CgsSku.h:43
namespace CgsLanguage {
	// Declaration
	struct LanguageManager {
		// CgsLanguageManager.h:71
		enum ParameterFormatType {
			E_FORMAT_TEXT = 0,
			E_FORMAT_HOURS_MINUTES_SECONDS = 1,
			E_FORMAT_MINUTES_SECONDS_HUNDREDTHS = 2,
			E_FORMAT_MINUTES_SECONDS = 3,
			E_FORMAT_SECONDS_HUNDREDTHS = 4,
			E_FORMAT_SECONDS_HUNDREDTHS_LONG = 5,
			E_FORMAT_SECONDS = 6,
			E_FORMAT_SECONDS_LONG = 7,
			E_FORMAT_MINUTES_SECONDS_MID_TEXT = 8,
			E_FORMAT_ID_LOOKUP = 9,
			E_FORMAT_ID_LOOKUP_TOUPPER = 10,
			E_FORMAT_INTEGER = 11,
			E_FORMAT_INTEGER_NOSEPERATOR = 12,
			E_FORMAT_PERCENTAGE = 13,
			E_FORMAT_MONEY = 14,
			E_FORMAT_AUTO_DISTANCE = 15,
			E_FORMAT_AUTO_DISTANCE_LONG = 16,
			E_FORMAT_SMALL_DISTANCE = 17,
			E_FORMAT_SMALL_DISTANCE_LONG = 18,
			E_FORMAT_LARGE_DISTANCE = 19,
			E_FORMAT_LARGE_DISTANCE_LONG = 20,
			E_FORMAT_COUNT = 21,
		}

		// CgsLanguageManager.h:98
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// CgsLanguageManager.h:105
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

	}

	// CgsLanguageManager.h:39
	const int32_t KI_LANGUAGE_MAX_STRINGID_LENGTH = 128;

	// CgsLanguageManager.h:47
	const int KI_LANGUAGE_MAX_DYNAMIC_STRINGS = 1024;

	// CgsLanguageManager.h:48
	const int KI_LANGUAGE_NUM_HASH_BINS = 13;

	// CgsLanguageManager.h:49
	const int KI_LANGUAGE_CURRENCY_STR_SIZE = 4;

}

// CgsLanguageManager.h:65
struct CgsLanguage::LanguageManager {
	// CgsLanguageManager.h:474
	extern const int32_t KI_MAX_STRING_ID_LENGTH = 64;

	// CgsLanguageManager.h:475
	extern const int32_t KI_MAX_STRING_LENGTH = 1024;

	// CgsLanguageManager.h:476
	extern const int32_t KI_MAX_PARAM_LENGTH = 512;

	// CgsLanguageManager.h:477
	extern const int32_t KI_SMALL_PARAM_LENGTH = 64;

	// CgsLanguageManager.h:478
	extern const int32_t KI_MAX_PARAMS = 4;

private:
	// CgsLanguageManager.h:507
	CgsLanguage::ELanguage meLanguage;

	// CgsLanguageManager.h:508
	const char * mpcDefaultFontName;

	// Unknown accessibility
	// CgsLanguageManager.h:52
	typedef HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u> HashIDStringArray;

	// CgsLanguageManager.h:510
	LanguageManager::HashIDStringArray mStrings;

	// Unknown accessibility
	// CgsLanguageManager.h:54
	typedef LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> DynamicHashElementsList;

	// CgsLanguageManager.h:511
	LanguageManager::DynamicHashElementsList mDynamicStringElements;

	// CgsLanguageManager.h:512
	LanguageManager::DynamicHashElementsList mDynamicStringPointerElements;

	// CgsLanguageManager.h:513
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * mpStringElements;

	// CgsLanguageManager.h:515
	HeapMalloc * mpLanguageAllocator;

	// CgsLanguageManager.h:517
	LanguageResource * mpResource;

	// CgsLanguageManager.h:519
	CgsLanguage::LanguageManager::EPrepareStage mePrepareStage;

	// CgsLanguageManager.h:520
	CgsLanguage::LanguageManager::EReleaseStage meReleaseStage;

	// CgsLanguageManager.h:526
	bool mbIsUsingMetricUnits;

	// CgsLanguageManager.h:527
	float32_t mrLargeDistanceConversion;

	// CgsLanguageManager.h:528
	float32_t mrSmallDistanceConversion;

	// CgsLanguageManager.h:531
	const UnicodeBuffer::CgsUtf8 * mpGeneralDecimalSeparator;

	// CgsLanguageManager.h:532
	const UnicodeBuffer::CgsUtf8 * mpGeneralThousandsSeparator;

	// CgsLanguageManager.h:533
	const UnicodeBuffer::CgsUtf8 * mpGeneralPercentage;

	// CgsLanguageManager.h:534
	const UnicodeBuffer::CgsUtf8 * mpGeneralXOverY;

	// CgsLanguageManager.h:537
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrencySeparator;

	// CgsLanguageManager.h:538
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrency;

	// CgsLanguageManager.h:541
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatDate;

	// CgsLanguageManager.h:542
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatAll;

	// CgsLanguageManager.h:543
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatHrsMinsSecs;

	// CgsLanguageManager.h:544
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsHnds;

	// CgsLanguageManager.h:545
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecs;

	// CgsLanguageManager.h:546
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsHnds;

	// CgsLanguageManager.h:547
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecs;

	// CgsLanguageManager.h:548
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsLong;

	// CgsLanguageManager.h:549
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinSecsMidText;

	// CgsLanguageManager.h:550
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsMidText;

	// CgsLanguageManager.h:553
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShort;

	// CgsLanguageManager.h:554
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShortL;

	// CgsLanguageManager.h:555
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLong;

	// CgsLanguageManager.h:556
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLongL;

	// CgsLanguageManager.h:557
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatIsMetric;

	// CgsLanguageManager.h:560
	CgsLanguage::LanguageManagerDebugComponent mDebugComponent;

public:
	// CgsLanguageManager.h:114
	void Construct();

	// CgsLanguageManager.h:118
	void Destruct();

	// CgsLanguageManager.h:122
	bool Prepare(HeapMalloc *);

	// CgsLanguageManager.h:126
	bool Release();

	// CgsLanguageManager.h:135
	uint32_t GetHashID(const char *) const;

	// CgsLanguageManager.h:140
	const UnicodeBuffer::CgsUtf8 * FindString(const char *) const;

	// CgsLanguageManager.h:145
	const UnicodeBuffer::CgsUtf8 * FindStringByHash(uint32_t) const;

	// CgsLanguageManager.h:151
	bool AddString(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:156
	bool RemoveString(const char *);

	// CgsLanguageManager.h:161
	bool RemoveStringByHash(uint32_t);

	// CgsLanguageManager.h:167
	bool AddStringPointer(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:172
	bool RemoveStringPointer(const char *);

	// CgsLanguageManager.h:177
	bool RemoveStringPointerByHash(uint32_t);

	// CgsLanguageManager.h:187
	bool FormatAndAddText(const char *, const char *);

	// CgsLanguageManager.h:194
	bool FormatText(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:200
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:207
	bool FormatText(char *, uint32_t, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:214
	bool FormatText(char *, uint32_t, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:223
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:231
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:240
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, va_list);

	// CgsLanguageManager.h:250
	bool Obsolete_FormatTextByArray(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// CgsLanguageManager.h:260
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:269
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:281
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:292
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:305
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:312
	void FormatCurrencyString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:319
	void FormatIntegerString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:326
	void FormatIntegerNoSeperatorString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:334
	void FormatXoverYString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t, int32_t) const;

	// CgsLanguageManager.h:341
	void FormatPercentageString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:350
	void FormatDateString(UnicodeBuffer::CgsUtf8 *, int, int, int, int32_t) const;

	// CgsLanguageManager.h:357
	void FormatHoursAndMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:364
	void FormatMinutesAndSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:371
	void FormatSecondsAndHundredsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:378
	void FormatMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:385
	void FormatSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:392
	void FormatSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:399
	void FormatSecondsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:406
	void FormatMinutesSecondsStringMediumText(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:413
	void FormatSmallDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:420
	void FormatSmallDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:427
	void FormatLargeDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:434
	void FormatLargeDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:441
	void FormatAutoDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:448
	void FormatAutoDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:452
	void SetUseMetricUnits(bool);

	// CgsLanguageManager.h:456
	bool IsUsingMetricUnits() const;

	// CgsLanguageManager.h:460
	const CgsLanguage::ELanguage GetLanguage() const;

	// CgsLanguageManager.h:463
	const char * GetDefaultFont() const;

	// CgsLanguageManager.h:468
	void LoadStringTable(const LanguageResource &);

	// CgsLanguageManager.h:472
	void UnloadStringTable();

private:
	// CgsLanguageManager.h:489
	bool InitaliseLanguage(CgsLanguage::ELanguage);

	// CgsLanguageManager.h:497
	void PrepareFormattingStrings();

	// CgsLanguageManager.h:501
	void PrepareDefaultFormattingStrings();

	// CgsLanguageManager.h:505
	void PrepareDefaultFont(CgsLanguage::ELanguage);

}

// CgsLanguageManager.h:474
extern const int32_t KI_MAX_STRING_ID_LENGTH = 64;

// CgsLanguageManager.h:65
struct CgsLanguage::LanguageManager {
	// CgsLanguageManager.h:474
	extern const int32_t KI_MAX_STRING_ID_LENGTH = 64;

	// CgsLanguageManager.h:475
	extern const int32_t KI_MAX_STRING_LENGTH = 1024;

	// CgsLanguageManager.h:476
	extern const int32_t KI_MAX_PARAM_LENGTH = 512;

	// CgsLanguageManager.h:477
	extern const int32_t KI_SMALL_PARAM_LENGTH = 64;

	// CgsLanguageManager.h:478
	extern const int32_t KI_MAX_PARAMS = 4;

private:
	// CgsLanguageManager.h:507
	CgsLanguage::ELanguage meLanguage;

	// CgsLanguageManager.h:508
	const char * mpcDefaultFontName;

	// Unknown accessibility
	// CgsLanguageManager.h:52
	typedef HashTable<uint32_t,const CgsUnicode::CgsUtf8*,13u> HashIDStringArray;

	// CgsLanguageManager.h:510
	LanguageManager::HashIDStringArray mStrings;

	// Unknown accessibility
	// CgsLanguageManager.h:54
	typedef LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> DynamicHashElementsList;

	// CgsLanguageManager.h:511
	LanguageManager::DynamicHashElementsList mDynamicStringElements;

	// CgsLanguageManager.h:512
	LanguageManager::DynamicHashElementsList mDynamicStringPointerElements;

	// CgsLanguageManager.h:513
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * mpStringElements;

	// CgsLanguageManager.h:515
	HeapMalloc * mpLanguageAllocator;

	// CgsLanguageManager.h:517
	LanguageResource * mpResource;

	// CgsLanguageManager.h:519
	CgsLanguage::LanguageManager::EPrepareStage mePrepareStage;

	// CgsLanguageManager.h:520
	CgsLanguage::LanguageManager::EReleaseStage meReleaseStage;

	// CgsLanguageManager.h:526
	bool mbIsUsingMetricUnits;

	// CgsLanguageManager.h:527
	float32_t mrLargeDistanceConversion;

	// CgsLanguageManager.h:528
	float32_t mrSmallDistanceConversion;

	// CgsLanguageManager.h:531
	const UnicodeBuffer::CgsUtf8 * mpGeneralDecimalSeparator;

	// CgsLanguageManager.h:532
	const UnicodeBuffer::CgsUtf8 * mpGeneralThousandsSeparator;

	// CgsLanguageManager.h:533
	const UnicodeBuffer::CgsUtf8 * mpGeneralPercentage;

	// CgsLanguageManager.h:534
	const UnicodeBuffer::CgsUtf8 * mpGeneralXOverY;

	// CgsLanguageManager.h:537
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrencySeparator;

	// CgsLanguageManager.h:538
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrency;

	// CgsLanguageManager.h:541
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatDate;

	// CgsLanguageManager.h:542
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatAll;

	// CgsLanguageManager.h:543
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatHrsMinsSecs;

	// CgsLanguageManager.h:544
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsHnds;

	// CgsLanguageManager.h:545
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecs;

	// CgsLanguageManager.h:546
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsHnds;

	// CgsLanguageManager.h:547
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecs;

	// CgsLanguageManager.h:548
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsLong;

	// CgsLanguageManager.h:549
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinSecsMidText;

	// CgsLanguageManager.h:550
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsMidText;

	// CgsLanguageManager.h:553
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShort;

	// CgsLanguageManager.h:554
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShortL;

	// CgsLanguageManager.h:555
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLong;

	// CgsLanguageManager.h:556
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLongL;

	// CgsLanguageManager.h:557
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatIsMetric;

	// CgsLanguageManager.h:560
	CgsLanguage::LanguageManagerDebugComponent mDebugComponent;

public:
	// CgsLanguageManager.h:114
	void Construct();

	// CgsLanguageManager.h:118
	void Destruct();

	// CgsLanguageManager.h:122
	bool Prepare(HeapMalloc *);

	// CgsLanguageManager.h:126
	bool Release();

	// CgsLanguageManager.h:135
	uint32_t GetHashID(const char *) const;

	// CgsLanguageManager.h:140
	const UnicodeBuffer::CgsUtf8 * FindString(const char *) const;

	// CgsLanguageManager.h:145
	const UnicodeBuffer::CgsUtf8 * FindStringByHash(uint32_t) const;

	// CgsLanguageManager.h:151
	bool AddString(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:156
	bool RemoveString(const char *);

	// CgsLanguageManager.h:161
	bool RemoveStringByHash(uint32_t);

	// CgsLanguageManager.h:167
	bool AddStringPointer(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:172
	bool RemoveStringPointer(const char *);

	// CgsLanguageManager.h:177
	bool RemoveStringPointerByHash(uint32_t);

	// CgsLanguageManager.h:187
	bool FormatAndAddText(const char *, const char *);

	// CgsLanguageManager.h:194
	bool FormatText(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:200
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:207
	bool FormatText(char *, uint32_t, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:214
	bool FormatText(char *, uint32_t, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:223
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:231
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:240
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, va_list);

	// CgsLanguageManager.h:250
	bool Obsolete_FormatTextByArray(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// CgsLanguageManager.h:260
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:269
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:281
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:292
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:305
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:312
	void FormatCurrencyString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:319
	void FormatIntegerString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:326
	void FormatIntegerNoSeperatorString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:334
	void FormatXoverYString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t, int32_t) const;

	// CgsLanguageManager.h:341
	void FormatPercentageString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:350
	void FormatDateString(UnicodeBuffer::CgsUtf8 *, int, int, int, int32_t) const;

	// CgsLanguageManager.h:357
	void FormatHoursAndMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:364
	void FormatMinutesAndSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:371
	void FormatSecondsAndHundredsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:378
	void FormatMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:385
	void FormatSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:392
	void FormatSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:399
	void FormatSecondsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:406
	void FormatMinutesSecondsStringMediumText(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:413
	void FormatSmallDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:420
	void FormatSmallDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:427
	void FormatLargeDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:434
	void FormatLargeDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:441
	void FormatAutoDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:448
	void FormatAutoDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:452
	void SetUseMetricUnits(bool);

	// CgsLanguageManager.h:456
	bool IsUsingMetricUnits() const;

	// CgsLanguageManager.h:460
	const CgsLanguage::ELanguage GetLanguage() const;

	// CgsLanguageManager.h:463
	const char * GetDefaultFont() const;

	// CgsLanguageManager.h:468
	void LoadStringTable(const LanguageResource &);

	// CgsLanguageManager.h:472
	void UnloadStringTable();

private:
	// CgsLanguageManager.h:489
	bool InitaliseLanguage(CgsLanguage::ELanguage);

	// CgsLanguageManager.h:497
	void PrepareFormattingStrings();

	// CgsLanguageManager.h:501
	void PrepareDefaultFormattingStrings();

	// CgsLanguageManager.h:505
	void PrepareDefaultFont(CgsLanguage::ELanguage);

}

// CgsLanguageManager.h:475
extern const int32_t KI_MAX_STRING_LENGTH = 1024;

// CgsLanguageManager.h:478
extern const int32_t KI_MAX_PARAMS = 4;

// CgsLanguageManager.h:65
struct CgsLanguage::LanguageManager {
	// CgsLanguageManager.h:474
	extern const int32_t KI_MAX_STRING_ID_LENGTH = 64;

	// CgsLanguageManager.h:475
	extern const int32_t KI_MAX_STRING_LENGTH = 1024;

	// CgsLanguageManager.h:476
	extern const int32_t KI_MAX_PARAM_LENGTH = 512;

	// CgsLanguageManager.h:477
	extern const int32_t KI_SMALL_PARAM_LENGTH = 64;

	// CgsLanguageManager.h:478
	extern const int32_t KI_MAX_PARAMS = 4;

private:
	// CgsLanguageManager.h:507
	CgsLanguage::ELanguage meLanguage;

	// CgsLanguageManager.h:508
	const char * mpcDefaultFontName;

	// Unknown accessibility
	// CgsLanguageManager.h:52
	typedef HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u> HashIDStringArray;

	// CgsLanguageManager.h:510
	LanguageManager::HashIDStringArray mStrings;

	// Unknown accessibility
	// CgsLanguageManager.h:54
	typedef LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> DynamicHashElementsList;

	// CgsLanguageManager.h:511
	LanguageManager::DynamicHashElementsList mDynamicStringElements;

	// CgsLanguageManager.h:512
	LanguageManager::DynamicHashElementsList mDynamicStringPointerElements;

	// CgsLanguageManager.h:513
	LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * mpStringElements;

	// CgsLanguageManager.h:515
	CgsMemory::HeapMalloc * mpLanguageAllocator;

	// CgsLanguageManager.h:517
	LanguageResource * mpResource;

	// CgsLanguageManager.h:519
	CgsLanguage::LanguageManager::EPrepareStage mePrepareStage;

	// CgsLanguageManager.h:520
	CgsLanguage::LanguageManager::EReleaseStage meReleaseStage;

	// CgsLanguageManager.h:526
	bool mbIsUsingMetricUnits;

	// CgsLanguageManager.h:527
	float32_t mrLargeDistanceConversion;

	// CgsLanguageManager.h:528
	float32_t mrSmallDistanceConversion;

	// CgsLanguageManager.h:531
	const UnicodeBuffer::CgsUtf8 * mpGeneralDecimalSeparator;

	// CgsLanguageManager.h:532
	const UnicodeBuffer::CgsUtf8 * mpGeneralThousandsSeparator;

	// CgsLanguageManager.h:533
	const UnicodeBuffer::CgsUtf8 * mpGeneralPercentage;

	// CgsLanguageManager.h:534
	const UnicodeBuffer::CgsUtf8 * mpGeneralXOverY;

	// CgsLanguageManager.h:537
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrencySeparator;

	// CgsLanguageManager.h:538
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrency;

	// CgsLanguageManager.h:541
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatDate;

	// CgsLanguageManager.h:542
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatAll;

	// CgsLanguageManager.h:543
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatHrsMinsSecs;

	// CgsLanguageManager.h:544
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsHnds;

	// CgsLanguageManager.h:545
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecs;

	// CgsLanguageManager.h:546
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsHnds;

	// CgsLanguageManager.h:547
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecs;

	// CgsLanguageManager.h:548
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsLong;

	// CgsLanguageManager.h:549
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinSecsMidText;

	// CgsLanguageManager.h:550
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsMidText;

	// CgsLanguageManager.h:553
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShort;

	// CgsLanguageManager.h:554
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShortL;

	// CgsLanguageManager.h:555
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLong;

	// CgsLanguageManager.h:556
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLongL;

	// CgsLanguageManager.h:557
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatIsMetric;

	// CgsLanguageManager.h:560
	CgsLanguage::LanguageManagerDebugComponent mDebugComponent;

public:
	// CgsLanguageManager.h:114
	void Construct();

	// CgsLanguageManager.h:118
	void Destruct();

	// CgsLanguageManager.h:122
	bool Prepare(CgsMemory::HeapMalloc *);

	// CgsLanguageManager.h:126
	bool Release();

	// CgsLanguageManager.h:135
	uint32_t GetHashID(const char *) const;

	// CgsLanguageManager.h:140
	const UnicodeBuffer::CgsUtf8 * FindString(const char *) const;

	// CgsLanguageManager.h:145
	const UnicodeBuffer::CgsUtf8 * FindStringByHash(uint32_t) const;

	// CgsLanguageManager.h:151
	bool AddString(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:156
	bool RemoveString(const char *);

	// CgsLanguageManager.h:161
	bool RemoveStringByHash(uint32_t);

	// CgsLanguageManager.h:167
	bool AddStringPointer(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:172
	bool RemoveStringPointer(const char *);

	// CgsLanguageManager.h:177
	bool RemoveStringPointerByHash(uint32_t);

	// CgsLanguageManager.h:187
	bool FormatAndAddText(const char *, const char *);

	// CgsLanguageManager.h:194
	bool FormatText(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:200
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:207
	bool FormatText(char *, uint32_t, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:214
	bool FormatText(char *, uint32_t, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:223
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:231
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:240
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, va_list);

	// CgsLanguageManager.h:250
	bool Obsolete_FormatTextByArray(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// CgsLanguageManager.h:260
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:269
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:281
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:292
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:305
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:312
	void FormatCurrencyString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:319
	void FormatIntegerString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:326
	void FormatIntegerNoSeperatorString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:334
	void FormatXoverYString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t, int32_t) const;

	// CgsLanguageManager.h:341
	void FormatPercentageString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:350
	void FormatDateString(UnicodeBuffer::CgsUtf8 *, int, int, int, int32_t) const;

	// CgsLanguageManager.h:357
	void FormatHoursAndMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:364
	void FormatMinutesAndSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:371
	void FormatSecondsAndHundredsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:378
	void FormatMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:385
	void FormatSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:392
	void FormatSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:399
	void FormatSecondsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:406
	void FormatMinutesSecondsStringMediumText(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:413
	void FormatSmallDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:420
	void FormatSmallDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:427
	void FormatLargeDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:434
	void FormatLargeDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:441
	void FormatAutoDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:448
	void FormatAutoDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:452
	void SetUseMetricUnits(bool);

	// CgsLanguageManager.h:456
	bool IsUsingMetricUnits() const;

	// CgsLanguageManager.h:460
	const CgsLanguage::ELanguage GetLanguage() const;

	// CgsLanguageManager.h:463
	const char * GetDefaultFont() const;

	// CgsLanguageManager.h:468
	void LoadStringTable(const LanguageResource &);

	// CgsLanguageManager.h:472
	void UnloadStringTable();

private:
	// CgsLanguageManager.h:489
	bool InitaliseLanguage(CgsLanguage::ELanguage);

	// CgsLanguageManager.h:497
	void PrepareFormattingStrings();

	// CgsLanguageManager.h:501
	void PrepareDefaultFormattingStrings();

	// CgsLanguageManager.h:505
	void PrepareDefaultFont(CgsLanguage::ELanguage);

}

// CgsLanguageManager.h:65
struct CgsLanguage::LanguageManager {
	// CgsLanguageManager.h:474
	extern const int32_t KI_MAX_STRING_ID_LENGTH = 64;

	// CgsLanguageManager.h:475
	extern const int32_t KI_MAX_STRING_LENGTH = 1024;

	// CgsLanguageManager.h:476
	extern const int32_t KI_MAX_PARAM_LENGTH = 512;

	// CgsLanguageManager.h:477
	extern const int32_t KI_SMALL_PARAM_LENGTH = 64;

	// CgsLanguageManager.h:478
	extern const int32_t KI_MAX_PARAMS = 4;

private:
	// CgsLanguageManager.h:507
	CgsLanguage::ELanguage meLanguage;

	// CgsLanguageManager.h:508
	const char * mpcDefaultFontName;

	// Unknown accessibility
	// CgsLanguageManager.h:52
	typedef HashTable<uint32_t,const CgsUnicode::CgsUtf8*,13u> HashIDStringArray;

	// CgsLanguageManager.h:510
	LanguageManager::HashIDStringArray mStrings;

	// Unknown accessibility
	// CgsLanguageManager.h:54
	typedef LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u> DynamicHashElementsList;

	// CgsLanguageManager.h:511
	LanguageManager::DynamicHashElementsList mDynamicStringElements;

	// CgsLanguageManager.h:512
	LanguageManager::DynamicHashElementsList mDynamicStringPointerElements;

	// CgsLanguageManager.h:513
	LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * mpStringElements;

	// CgsLanguageManager.h:515
	CgsMemory::HeapMalloc * mpLanguageAllocator;

	// CgsLanguageManager.h:517
	LanguageResource * mpResource;

	// CgsLanguageManager.h:519
	CgsLanguage::LanguageManager::EPrepareStage mePrepareStage;

	// CgsLanguageManager.h:520
	CgsLanguage::LanguageManager::EReleaseStage meReleaseStage;

	// CgsLanguageManager.h:526
	bool mbIsUsingMetricUnits;

	// CgsLanguageManager.h:527
	float32_t mrLargeDistanceConversion;

	// CgsLanguageManager.h:528
	float32_t mrSmallDistanceConversion;

	// CgsLanguageManager.h:531
	const UnicodeBuffer::CgsUtf8 * mpGeneralDecimalSeparator;

	// CgsLanguageManager.h:532
	const UnicodeBuffer::CgsUtf8 * mpGeneralThousandsSeparator;

	// CgsLanguageManager.h:533
	const UnicodeBuffer::CgsUtf8 * mpGeneralPercentage;

	// CgsLanguageManager.h:534
	const UnicodeBuffer::CgsUtf8 * mpGeneralXOverY;

	// CgsLanguageManager.h:537
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrencySeparator;

	// CgsLanguageManager.h:538
	const UnicodeBuffer::CgsUtf8 * mpGeneralCurrency;

	// CgsLanguageManager.h:541
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatDate;

	// CgsLanguageManager.h:542
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatAll;

	// CgsLanguageManager.h:543
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatHrsMinsSecs;

	// CgsLanguageManager.h:544
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsHnds;

	// CgsLanguageManager.h:545
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecs;

	// CgsLanguageManager.h:546
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsHnds;

	// CgsLanguageManager.h:547
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecs;

	// CgsLanguageManager.h:548
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatSecsLong;

	// CgsLanguageManager.h:549
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinSecsMidText;

	// CgsLanguageManager.h:550
	const UnicodeBuffer::CgsUtf8 * mpTimeFormatMinsSecsMidText;

	// CgsLanguageManager.h:553
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShort;

	// CgsLanguageManager.h:554
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatShortL;

	// CgsLanguageManager.h:555
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLong;

	// CgsLanguageManager.h:556
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatLongL;

	// CgsLanguageManager.h:557
	const UnicodeBuffer::CgsUtf8 * mpDistanceFormatIsMetric;

	// CgsLanguageManager.h:560
	CgsLanguage::LanguageManagerDebugComponent mDebugComponent;

public:
	// CgsLanguageManager.h:114
	void Construct();

	// CgsLanguageManager.h:118
	void Destruct();

	// CgsLanguageManager.h:122
	bool Prepare(CgsMemory::HeapMalloc *);

	// CgsLanguageManager.h:126
	bool Release();

	// CgsLanguageManager.h:135
	uint32_t GetHashID(const char *) const;

	// CgsLanguageManager.h:140
	const UnicodeBuffer::CgsUtf8 * FindString(const char *) const;

	// CgsLanguageManager.h:145
	const UnicodeBuffer::CgsUtf8 * FindStringByHash(uint32_t) const;

	// CgsLanguageManager.h:151
	bool AddString(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:156
	bool RemoveString(const char *);

	// CgsLanguageManager.h:161
	bool RemoveStringByHash(uint32_t);

	// CgsLanguageManager.h:167
	bool AddStringPointer(const char *, const UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageManager.h:172
	bool RemoveStringPointer(const char *);

	// CgsLanguageManager.h:177
	bool RemoveStringPointerByHash(uint32_t);

	// CgsLanguageManager.h:187
	bool FormatAndAddText(const char *, const char *);

	// CgsLanguageManager.h:194
	bool FormatText(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:200
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:207
	bool FormatText(char *, uint32_t, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:214
	bool FormatText(char *, uint32_t, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:223
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:231
	bool FormatAndAddText(const char *, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// CgsLanguageManager.h:240
	bool FormatTextV(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, va_list);

	// CgsLanguageManager.h:250
	bool Obsolete_FormatTextByArray(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// CgsLanguageManager.h:260
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:269
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:281
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:292
	bool FormatTextFromFloat(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:305
	bool FormatTextFromInt(char *, uint32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// CgsLanguageManager.h:312
	void FormatCurrencyString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:319
	void FormatIntegerString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:326
	void FormatIntegerNoSeperatorString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:334
	void FormatXoverYString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t, int32_t) const;

	// CgsLanguageManager.h:341
	void FormatPercentageString(UnicodeBuffer::CgsUtf8 *, int32_t, int32_t) const;

	// CgsLanguageManager.h:350
	void FormatDateString(UnicodeBuffer::CgsUtf8 *, int, int, int, int32_t) const;

	// CgsLanguageManager.h:357
	void FormatHoursAndMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:364
	void FormatMinutesAndSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:371
	void FormatSecondsAndHundredsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:378
	void FormatMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:385
	void FormatSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:392
	void FormatSecondsString(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:399
	void FormatSecondsStringLong(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:406
	void FormatMinutesSecondsStringMediumText(UnicodeBuffer::CgsUtf8 *, float32_t, int32_t) const;

	// CgsLanguageManager.h:413
	void FormatSmallDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:420
	void FormatSmallDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:427
	void FormatLargeDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:434
	void FormatLargeDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:441
	void FormatAutoDistanceString(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:448
	void FormatAutoDistanceStringLong(UnicodeBuffer::CgsUtf8 *, float_t, int32_t) const;

	// CgsLanguageManager.h:452
	void SetUseMetricUnits(bool);

	// CgsLanguageManager.h:456
	bool IsUsingMetricUnits() const;

	// CgsLanguageManager.h:460
	const CgsLanguage::ELanguage GetLanguage() const;

	// CgsLanguageManager.h:463
	const char * GetDefaultFont() const;

	// CgsLanguageManager.h:468
	void LoadStringTable(const LanguageResource &);

	// CgsLanguageManager.h:472
	void UnloadStringTable();

private:
	// CgsLanguageManager.h:489
	bool InitaliseLanguage(CgsLanguage::ELanguage);

	// CgsLanguageManager.h:497
	void PrepareFormattingStrings();

	// CgsLanguageManager.h:501
	void PrepareDefaultFormattingStrings();

	// CgsLanguageManager.h:505
	void PrepareDefaultFont(CgsLanguage::ELanguage);

}

// CgsGuiShared.h:35
namespace CgsLanguage {
	// Declaration
	struct LanguageManager {
		// CgsLanguageManager.h:71
		enum ParameterFormatType {
			E_FORMAT_TEXT = 0,
			E_FORMAT_HOURS_MINUTES_SECONDS = 1,
			E_FORMAT_MINUTES_SECONDS_HUNDREDTHS = 2,
			E_FORMAT_MINUTES_SECONDS = 3,
			E_FORMAT_SECONDS_HUNDREDTHS = 4,
			E_FORMAT_SECONDS_HUNDREDTHS_LONG = 5,
			E_FORMAT_SECONDS = 6,
			E_FORMAT_SECONDS_LONG = 7,
			E_FORMAT_MINUTES_SECONDS_MID_TEXT = 8,
			E_FORMAT_ID_LOOKUP = 9,
			E_FORMAT_ID_LOOKUP_TOUPPER = 10,
			E_FORMAT_INTEGER = 11,
			E_FORMAT_INTEGER_NOSEPERATOR = 12,
			E_FORMAT_PERCENTAGE = 13,
			E_FORMAT_MONEY = 14,
			E_FORMAT_AUTO_DISTANCE = 15,
			E_FORMAT_AUTO_DISTANCE_LONG = 16,
			E_FORMAT_SMALL_DISTANCE = 17,
			E_FORMAT_SMALL_DISTANCE_LONG = 18,
			E_FORMAT_LARGE_DISTANCE = 19,
			E_FORMAT_LARGE_DISTANCE_LONG = 20,
			E_FORMAT_COUNT = 21,
		}

		// CgsLanguageManager.h:98
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// CgsLanguageManager.h:105
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

	}

	// CgsLanguageManager.h:39
	const int32_t KI_LANGUAGE_MAX_STRINGID_LENGTH = 128;

	// CgsLanguageManager.h:47
	const int KI_LANGUAGE_MAX_DYNAMIC_STRINGS = 1024;

	// CgsLanguageManager.h:48
	const int KI_LANGUAGE_NUM_HASH_BINS = 13;

	// CgsLanguageManager.h:49
	const int KI_LANGUAGE_CURRENCY_STR_SIZE = 4;

}

// CgsLanguageManager.h:476
extern const int32_t KI_MAX_PARAM_LENGTH = 512;

// CgsSaveDataPS3.h:38
namespace CgsLanguage {
	// Declaration
	struct LanguageManager {
		// CgsLanguageManager.h:71
		enum ParameterFormatType {
			E_FORMAT_TEXT = 0,
			E_FORMAT_HOURS_MINUTES_SECONDS = 1,
			E_FORMAT_MINUTES_SECONDS_HUNDREDTHS = 2,
			E_FORMAT_MINUTES_SECONDS = 3,
			E_FORMAT_SECONDS_HUNDREDTHS = 4,
			E_FORMAT_SECONDS_HUNDREDTHS_LONG = 5,
			E_FORMAT_SECONDS = 6,
			E_FORMAT_SECONDS_LONG = 7,
			E_FORMAT_MINUTES_SECONDS_MID_TEXT = 8,
			E_FORMAT_ID_LOOKUP = 9,
			E_FORMAT_ID_LOOKUP_TOUPPER = 10,
			E_FORMAT_INTEGER = 11,
			E_FORMAT_INTEGER_NOSEPERATOR = 12,
			E_FORMAT_PERCENTAGE = 13,
			E_FORMAT_MONEY = 14,
			E_FORMAT_AUTO_DISTANCE = 15,
			E_FORMAT_AUTO_DISTANCE_LONG = 16,
			E_FORMAT_SMALL_DISTANCE = 17,
			E_FORMAT_SMALL_DISTANCE_LONG = 18,
			E_FORMAT_LARGE_DISTANCE = 19,
			E_FORMAT_LARGE_DISTANCE_LONG = 20,
			E_FORMAT_COUNT = 21,
		}

		// CgsLanguageManager.h:98
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// CgsLanguageManager.h:105
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

	}

	// CgsLanguageManager.h:39
	const int32_t KI_LANGUAGE_MAX_STRINGID_LENGTH = 128;

	// CgsLanguageManager.h:47
	const int KI_LANGUAGE_MAX_DYNAMIC_STRINGS = 1024;

	// CgsLanguageManager.h:48
	const int KI_LANGUAGE_NUM_HASH_BINS = 13;

	// CgsLanguageManager.h:49
	const int KI_LANGUAGE_CURRENCY_STR_SIZE = 4;

}

