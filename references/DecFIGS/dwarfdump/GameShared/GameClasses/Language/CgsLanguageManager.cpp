// CgsGuiShared.h:35
namespace CgsLanguage {
	// CgsLanguageManager.cpp:42
	const char * KAC_DECIMAL_SEPARATOR;

	// CgsLanguageManager.cpp:43
	const char * KAC_THOUSANDS_SEPARATOR;

	// CgsLanguageManager.cpp:44
	const char * KAC_GENERAL_PERCENTAGE_DISPLAY;

	// CgsLanguageManager.cpp:45
	const char * KAC_GENERAL_X_OVER_Y_DISPLAY;

	// CgsLanguageManager.cpp:48
	const char * KAC_CURRENCY_SEPARATOR;

	// CgsLanguageManager.cpp:49
	const char * KAC_CURRENCY_STRING_WHOLE;

	// CgsLanguageManager.cpp:52
	const char * KAC_TIME_FORMAT_DATE;

	// CgsLanguageManager.cpp:53
	const char * KAC_TIME_FORMAT_ALL;

	// CgsLanguageManager.cpp:54
	const char * KAC_TIME_FORMAT_HRS_MINS_SECS;

	// CgsLanguageManager.cpp:55
	const char * KAC_TIME_FORMAT_MINS_SECS_HNDS;

	// CgsLanguageManager.cpp:56
	const char * KAC_TIME_FORMAT_MINS_SECS;

	// CgsLanguageManager.cpp:57
	const char * KAC_TIME_FORMAT_SECS_HNDS;

	// CgsLanguageManager.cpp:58
	const char * KAC_TIME_FORMAT_SECS;

	// CgsLanguageManager.cpp:59
	const char * KAC_TIME_FORMAT_SECS_LONG;

	// CgsLanguageManager.cpp:60
	const char * KAC_TIME_FORMAT_MIN_SECS_MID_TEXT;

	// CgsLanguageManager.cpp:61
	const char * KAC_TIME_FORMAT_MINS_SECS_MID_TEXT;

	// CgsLanguageManager.cpp:64
	const char * KAC_DISTANCE_FORMAT_SHORT;

	// CgsLanguageManager.cpp:65
	const char * KAC_DISTANCE_FORMAT_SHORT_L;

	// CgsLanguageManager.cpp:66
	const char * KAC_DISTANCE_FORMAT_LONG;

	// CgsLanguageManager.cpp:67
	const char * KAC_DISTANCE_FORMAT_LONG_L;

	// CgsLanguageManager.cpp:68
	const char * KAC_DISTANCE_FORMAT_ISMETRIC;

	// CgsLanguageManager.cpp:71
	const char * KAC_DISTANCE_FORMAT_SHORT_IMPERIAL;

	// CgsLanguageManager.cpp:72
	const char * KAC_DISTANCE_FORMAT_SHORT_IMPERIAL_L;

	// CgsLanguageManager.cpp:73
	const char * KAC_DISTANCE_FORMAT_LONG_IMPERIAL;

	// CgsLanguageManager.cpp:74
	const char * KAC_DISTANCE_FORMAT_LONG_IMPERIAL_L;

	// CgsLanguageManager.cpp:77
	const int32_t KI_SMALL_DISTANCE_STRING_PRECISION;

	// CgsLanguageManager.cpp:78
	const int32_t KI_LARGE_DISTANCE_STRING_PRECISION = 1;

	// CgsLanguageManager.cpp:81
	const float32_t KF_SECONDS_PER_HOUR;

	// CgsLanguageManager.cpp:82
	const float32_t KF_MINUTE_PER_HOUR;

	// CgsLanguageManager.cpp:83
	const float32_t KF_SECONDS_PER_MINUTE;

	// CgsLanguageManager.cpp:84
	const float32_t KF_HUNDREDS_PER_SECOND;

	// CgsLanguageManager.cpp:86
	const int32_t KI_HUNDREDTHSOFSECS_IN_MINUTE = 6000;

	// CgsLanguageManager.cpp:87
	const int32_t KI_HUNDREDTHSOFSECS_IN_SECOND = 100;

	// CgsLanguageManager.cpp:88
	const int32_t KI_SECONDS_IN_HOUR = 3600;

	// CgsLanguageManager.cpp:89
	const int32_t KI_SECONDS_IN_MINUTE = 60;

	// CgsLanguageManager.cpp:91
	const int32_t KI_MAX_MINUTES_PRECISION = 1;

	// CgsLanguageManager.cpp:92
	const int32_t KI_MAX_SECONDS_PRECISION = 2;

	// CgsLanguageManager.cpp:93
	const int32_t KI_MAX_HUNDRETHDS_PRECISION = 2;

	// CgsLanguageManager.cpp:94
	const int32_t KI_MIN_MINUTES_DIGITS = 1;

	// CgsLanguageManager.cpp:95
	const int32_t KI_MIN_SECONDS_DIGITS = 2;

	// CgsLanguageManager.cpp:96
	const int32_t KI_MIN_HUNDRETHDS_DIGITS = 2;

	// CgsLanguageManager.cpp:98
	const int32_t KI_DAYS_DIGITS = 2;

	// CgsLanguageManager.cpp:99
	const int32_t KI_MONTHS_DIGITS = 2;

	// CgsLanguageManager.cpp:100
	const int32_t KI_YEARS_DIGITS = 4;

	// CgsLanguageManager.cpp:103
	const float_t KF_NUMBER_OF_METRES_IN_KM;

	// CgsLanguageManager.cpp:104
	const float_t KF_METRES_TO_YARDS;

	// CgsLanguageManager.cpp:105
	const float_t KF_KILOMETRES_TO_MILES;

}

// CgsLanguageManager.cpp:153
void CgsLanguage::LanguageManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:169
void CgsLanguage::LanguageManager::Prepare(HeapMalloc *  lpLanguageAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:2371
void CgsLanguage::LanguageManager::PrepareDefaultFormattingStrings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:2418
void CgsLanguage::LanguageManager::PrepareDefaultFont(CgsLanguage::ELanguage  leLanguage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:267
void CgsLanguage::LanguageManager::FindStringByHash(uint32_t  luHashID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:269
		const UnicodeBuffer::CgsUtf8 *const* luccp;

	}
	CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Get(/* parameters */);
}

// CgsLanguageManager.cpp:493
void CgsLanguage::LanguageManager::RemoveStringPointerByHash(uint32_t  luHashID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:499
		bool lbRemoved;

		// CgsLanguageManager.cpp:501
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * lpIter;

	}
	CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Remove(/* parameters */);
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::GetHead(/* parameters */);
	{
		// CgsLanguageManager.cpp:505
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * lpElem;

		CgsContainers::LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::GetNext(/* parameters */);
	}
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::RemoveNode(/* parameters */);
}

// CgsLanguageManager.cpp:465
void CgsLanguage::LanguageManager::RemoveStringPointer(const char *const  lpcStringID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:469
		uint32_t luHashID;

	}
	GetHashID(/* parameters */);
}

// CgsLanguageManager.cpp:575
void CgsLanguage::LanguageManager::UnloadStringTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:588
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * lpIter;

		CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Init(/* parameters */);
		CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::GetHead(/* parameters */);
		{
			// CgsLanguageManager.cpp:592
			LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * pElem;

			CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::RemoveHead(/* parameters */);
			CgsContainers::LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::AddHead(/* parameters */);
			CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::GetHead(/* parameters */);
		}
		CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::GetHead(/* parameters */);
		{
			// CgsLanguageManager.cpp:612
			LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * pElem;

			CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::RemoveHead(/* parameters */);
			CgsContainers::LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::AddHead(/* parameters */);
			CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::GetHead(/* parameters */);
		}
	}
}

// CgsLanguageManager.cpp:193
void CgsLanguage::LanguageManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:123
void CgsLanguage::LanguageManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::Clear(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::Init(/* parameters */);
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::Clear(/* parameters */);
	CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Init(/* parameters */);
	SetUseMetricUnits(/* parameters */);
}

// CgsLanguageManager.cpp:1438
void CgsLanguage::LanguageManager::FormatIntegerNoSeperatorString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, int32_t  lnValue, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1449
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:375
void CgsLanguage::LanguageManager::RemoveStringByHash(uint32_t  luHashID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:381
		bool lbRemoved;

		// CgsLanguageManager.cpp:383
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> * lpIter;

	}
	CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Remove(/* parameters */);
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::GetHead(/* parameters */);
	{
		// CgsLanguageManager.cpp:387
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * lpElem;

		CgsContainers::LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::GetNext(/* parameters */);
	}
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::RemoveNode(/* parameters */);
}

// CgsLanguageManager.cpp:346
void CgsLanguage::LanguageManager::RemoveString(const char *const  lpcStringID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:348
		uint32_t luHashID;

	}
	GetHashID(/* parameters */);
}

// CgsLanguageManager.cpp:1403
void CgsLanguage::LanguageManager::FormatIntegerString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, int32_t  lnValue, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1414
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPointCharacter(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetThousandsSeparator(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
}

// CgsLanguageManager.cpp:1848
void CgsLanguage::LanguageManager::FormatSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1857
		int32_t liHundredsOfSeconds;

		// CgsLanguageManager.cpp:1859
		int32_t liNumberOfHundreds;

		// CgsLanguageManager.cpp:1860
		int32_t liNumberOfSeconds;

		// CgsLanguageManager.cpp:1862
		int32_t liSeconds;

		// CgsLanguageManager.cpp:1863
		int32_t liHundredths;

		// CgsLanguageManager.cpp:1865
		UnicodeBuffer lSecondsBuffer;

		// CgsLanguageManager.cpp:1866
		UnicodeBuffer lHundredthsBuffer;

	}
	rw::math::fpu::IntRound<float>(/* parameters */);
	__fsel(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:1730
void CgsLanguage::LanguageManager::FormatMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1739
		int32_t liTotalSeconds;

		// CgsLanguageManager.cpp:1741
		int32_t liSecSeconds;

		// CgsLanguageManager.cpp:1742
		int32_t liSecMinutes;

		// CgsLanguageManager.cpp:1744
		int32_t liMinutes;

		// CgsLanguageManager.cpp:1745
		int32_t liSeconds;

		// CgsLanguageManager.cpp:1747
		UnicodeBuffer lMinutesBuffer;

		// CgsLanguageManager.cpp:1748
		UnicodeBuffer lSecondsBuffer;

	}
	rw::math::fpu::IntRound<float>(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
}

// CgsLanguageManager.cpp:1474
void CgsLanguage::LanguageManager::FormatXoverYString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, int32_t  lnX, int32_t  lnY, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1485
		UnicodeBuffer lXBuffer;

		// CgsLanguageManager.cpp:1486
		UnicodeBuffer lYBuffer;

	}
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
}

// CgsLanguageManager.cpp:1792
void CgsLanguage::LanguageManager::FormatSecondsAndHundredsStringLong(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1801
		int32_t liHundredsOfSeconds;

		// CgsLanguageManager.cpp:1803
		int32_t liNumberOfHundreds;

		// CgsLanguageManager.cpp:1804
		int32_t liNumberOfSeconds;

		// CgsLanguageManager.cpp:1806
		int32_t liSeconds;

		// CgsLanguageManager.cpp:1807
		int32_t liHundredths;

		// CgsLanguageManager.cpp:1809
		char[64] lacFinalString;

		// CgsLanguageManager.cpp:1810
		UnicodeBuffer::CgsUtf8 * lpcFinalUTF;

		// CgsLanguageManager.cpp:1812
		UnicodeBuffer lSecondsBuffer;

		// CgsLanguageManager.cpp:1813
		UnicodeBuffer lHundredthsBuffer;

	}
	rw::math::fpu::IntRound<float>(/* parameters */);
	__fsel(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:1667
void CgsLanguage::LanguageManager::FormatMinutesAndSecondsAndHundredsString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1676
		int32_t liHundredsOfSeconds;

		// CgsLanguageManager.cpp:1678
		int32_t liNumberOfSeconds;

		// CgsLanguageManager.cpp:1679
		int32_t liNumberOfMinutes;

		// CgsLanguageManager.cpp:1680
		int32_t liNumberOfHundreds;

		// CgsLanguageManager.cpp:1683
		int32_t liMinutes;

		// CgsLanguageManager.cpp:1684
		int32_t liSeconds;

		// CgsLanguageManager.cpp:1685
		int32_t liHundredths;

		// CgsLanguageManager.cpp:1687
		UnicodeBuffer lMinutesBuffer;

		// CgsLanguageManager.cpp:1688
		UnicodeBuffer lSecondsBuffer;

		// CgsLanguageManager.cpp:1689
		UnicodeBuffer lHundredthsBuffer;

	}
	rw::math::fpu::IntRound<float>(/* parameters */);
	__fsel(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
}

// CgsLanguageManager.cpp:1603
void CgsLanguage::LanguageManager::FormatHoursAndMinutesAndSecondsString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1612
		UnicodeBuffer lHoursBuffer;

		// CgsLanguageManager.cpp:1613
		UnicodeBuffer lMinutesBuffer;

		// CgsLanguageManager.cpp:1614
		UnicodeBuffer lSecondsBuffer;

		// CgsLanguageManager.cpp:1620
		int32_t liTotalSeconds;

		// CgsLanguageManager.cpp:1622
		int32_t liTimeNotInHours;

		// CgsLanguageManager.cpp:1624
		int32_t liSecHours;

		// CgsLanguageManager.cpp:1625
		int32_t liSecSeconds;

		// CgsLanguageManager.cpp:1626
		int32_t liSecMinutes;

		// CgsLanguageManager.cpp:1628
		int32_t liHours;

		// CgsLanguageManager.cpp:1629
		int32_t liMinutes;

		// CgsLanguageManager.cpp:1630
		int32_t liSeconds;

	}
	rw::math::fpu::IntRound<float>(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
}

// CgsLanguageManager.cpp:1555
void CgsLanguage::LanguageManager::FormatDateString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, int  lnDay, int  lnMonth, int  lnYear, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1566
		UnicodeBuffer lDayBuffer;

		// CgsLanguageManager.cpp:1567
		UnicodeBuffer lMonthBuffer;

		// CgsLanguageManager.cpp:1568
		UnicodeBuffer lYearBuffer;

	}
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:295
void CgsLanguage::LanguageManager::AddString(const char *const  lpcStringID, const UnicodeBuffer::CgsUtf8 *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:297
		uint32_t luByteLength;

		// CgsLanguageManager.cpp:298
		uint32_t luHashID;

		// CgsLanguageManager.cpp:299
		const UnicodeBuffer::CgsUtf8 * lpUTFString;

		// CgsLanguageManager.cpp:300
		UnicodeBuffer::CgsUtf8 * lpcStringCopy;

		// CgsLanguageManager.cpp:301
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * pElement;

	}
	GetHashID(/* parameters */);
	CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>::Set(/* parameters */);
	CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Insert(/* parameters */);
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::AddTail(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddTail(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddHead(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddBefore(/* parameters */);
}

// CgsLanguageManager.cpp:213
void CgsLanguage::LanguageManager::FindString(const char *const  lpcStringID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:222
		uint32_t luHashID;

		// CgsLanguageManager.cpp:223
		const UnicodeBuffer::CgsUtf8 * lpcString;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GetHashID(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsLanguageManager.cpp:240
		int32_t liLength;

		LanguageManagerDebugComponent::GetStarString(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:2269
void CgsLanguage::LanguageManager::PrepareFormattingStrings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:641
void CgsLanguage::LanguageManager::InitaliseLanguage(CgsLanguage::ELanguage  leLanguage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManager.cpp:663
void CgsLanguage::LanguageManager::FormatAndAddText(const char *const  lpcStringID, const char *const  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:665
		const UnicodeBuffer::CgsUtf8 * lpUtf8;

	}
}

// CgsLanguageManager.cpp:423
void CgsLanguage::LanguageManager::AddStringPointer(const char *const  lpcStringID, const UnicodeBuffer::CgsUtf8 *const  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:425
		uint32_t luHashID;

		// CgsLanguageManager.cpp:426
		const UnicodeBuffer::CgsUtf8 * lpUTFString;

		// CgsLanguageManager.cpp:427
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * pElement;

	}
	GetHashID(/* parameters */);
	CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>::Set(/* parameters */);
	CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Insert(/* parameters */);
	CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::AddTail(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddTail(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddHead(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddBefore(/* parameters */);
}

// CgsLanguageManager.cpp:535
void CgsLanguage::LanguageManager::LoadStringTable(const const LanguageResource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:546
		uint32_t luIndex;

	}
	{
		// CgsLanguageManager.cpp:537
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:548
		LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::HashIDStringArrayElement * pElement;

		CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>::Set(/* parameters */);
		CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::Insert(/* parameters */);
		CgsResource::LanguageResourceHashEntry::GetString(/* parameters */);
		CgsContainers::HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>::GetKey(/* parameters */);
		{
			CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::GetHead(/* parameters */);
			CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::GetTail(/* parameters */);
			{
				CgsContainers::LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::GetNext(/* parameters */);
			}
		}
	}
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddTail(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddHead(/* parameters */);
	CgsContainers::LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >::AddBefore(/* parameters */);
}

// CgsLanguageManager.cpp:2171
void CgsLanguage::LanguageManager::FormatLargeDistanceStringLong(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float_t  lfMetres, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:2179
		float32_t lrDistance;

		// CgsLanguageManager.cpp:2187
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetThousandsSeparator(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPointCharacter(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:2132
void CgsLanguage::LanguageManager::FormatLargeDistanceString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float_t  lfMetres, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:2140
		float32_t lrDistance;

		// CgsLanguageManager.cpp:2148
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetThousandsSeparator(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPointCharacter(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:2093
void CgsLanguage::LanguageManager::FormatSmallDistanceStringLong(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float_t  lfMetres, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:2101
		int32_t lnDistance;

		// CgsLanguageManager.cpp:2109
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetThousandsSeparator(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPointCharacter(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
}

// CgsLanguageManager.cpp:2241
void CgsLanguage::LanguageManager::FormatAutoDistanceStringLong(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float_t  lfMetres, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:2246
		float32_t lrDistance;

	}
}

// CgsLanguageManager.cpp:2053
void CgsLanguage::LanguageManager::FormatSmallDistanceString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float_t  lfMetres, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:2061
		int32_t lnDistance;

		// CgsLanguageManager.cpp:2069
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetThousandsSeparator(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPointCharacter(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:2210
void CgsLanguage::LanguageManager::FormatAutoDistanceString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float_t  lfMetres, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:2215
		float32_t lrDistance;

	}
}

// CgsLanguageManager.cpp:1979
void CgsLanguage::LanguageManager::FormatMinutesSecondsStringMediumText(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1989
		int32_t liTotalSeconds;

		// CgsLanguageManager.cpp:1991
		int32_t liSecSeconds;

		// CgsLanguageManager.cpp:1992
		int32_t liSecMinutes;

		// CgsLanguageManager.cpp:1994
		int32_t liMinutes;

		// CgsLanguageManager.cpp:1995
		int32_t liSeconds;

	}
	rw::math::fpu::IntRound<float>(/* parameters */);
	{
		// CgsLanguageManager.cpp:2016
		UnicodeBuffer lMinutesBuffer;

		// CgsLanguageManager.cpp:2017
		UnicodeBuffer lSecondsBuffer;

		CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
		CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
		CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
		CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
		CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
		CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
		CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
		CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
		CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1999
		UnicodeBuffer lSecondsBuffer;

		CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
		CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
		CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
		CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
		CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1940
void CgsLanguage::LanguageManager::FormatSecondsStringLong(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1949
		int32_t liSeconds;

		// CgsLanguageManager.cpp:1951
		UnicodeBuffer lSecondsBuffer;

	}
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	rw::math::fpu::IntRound<float>(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
}

// CgsLanguageManager.cpp:1901
void CgsLanguage::LanguageManager::FormatSecondsString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, float32_t  lfTimeInSeconds, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1910
		int32_t liSeconds;

		// CgsLanguageManager.cpp:1912
		UnicodeBuffer lSecondsBuffer;

	}
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	rw::math::fpu::IntRound<float>(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
}

// CgsLanguageManager.cpp:1514
void CgsLanguage::LanguageManager::FormatPercentageString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, int32_t  lnValue, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1525
		UnicodeBuffer::CgsUtf8 * lpStringPtr;

		// CgsLanguageManager.cpp:1526
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetMinimumDigits(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetDecimalPlaces(/* parameters */);
}

// CgsLanguageManager.cpp:1369
void CgsLanguage::LanguageManager::FormatCurrencyString(UnicodeBuffer::CgsUtf8 *const  lpTargetString, int32_t  lnCurrencyValue, int32_t  lnTargetStringSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1382
		UnicodeBuffer lUnicodeBuffer;

	}
	CgsUnicode::UnicodeBuffer::Construct(/* parameters */);
	CgsUnicode::UnicodeBuffer::SetThousandsSeparator(/* parameters */);
	CgsUnicode::UnicodeBuffer::Reset(/* parameters */);
	CgsUnicode::UnicodeBuffer::Convert(/* parameters */);
}

// CgsLanguageManager.cpp:929
void CgsLanguage::LanguageManager::FormatText(char *  lpcTarget, uint32_t  liTargetLength, int32_t  lnInt, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:933
		UnicodeBuffer::CgsUtf8 * lpcUTFFieldText;

	}
	{
		// CgsLanguageManager.cpp:959
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:931
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:812
void CgsLanguage::LanguageManager::FormatText(char *  lpcTarget, uint32_t  liTargetLength, float32_t  lrFloat, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:816
		UnicodeBuffer::CgsUtf8 * lpcUTFFieldText;

	}
	{
		// CgsLanguageManager.cpp:907
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:814
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:686
void CgsLanguage::LanguageManager::FormatText(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:693
		const UnicodeBuffer::CgsUtf8 * lpcUTFText;

		// CgsLanguageManager.cpp:694
		UnicodeBuffer::CgsUtf8 * lpcUTFFieldText;

	}
	{
		// CgsLanguageManager.cpp:761
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:690
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::StrCpy(/* parameters */);
	{
		// CgsLanguageManager.cpp:707
		const UnicodeBuffer::CgsUtf8 * lpcUTFFindString;

		// CgsLanguageManager.cpp:708
		const char * lpcFindString;

	}
	std(/* parameters */);
	std(/* parameters */);
	{
		// CgsLanguageManager.cpp:688
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:689
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:712
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1330
void CgsLanguage::LanguageManager::FormatTextFromInt(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liValue1, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat1, int32_t  liValue2, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat2, int32_t  liValue3, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1335
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1336
		char[3][64] lacParamBuffers;

		// CgsLanguageManager.cpp:1338
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1339
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1340
		UnicodeBuffer::CgsUtf8 *[4] lParams;

	}
	{
		// CgsLanguageManager.cpp:1333
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1332
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1288
void CgsLanguage::LanguageManager::FormatTextFromFloat(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, float32_t  lrValue1, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat1, float32_t  lrValue2, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1293
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1294
		char[2][64] lacParamBuffers;

		// CgsLanguageManager.cpp:1296
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1297
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1298
		UnicodeBuffer::CgsUtf8 *[4] lParams;

	}
	{
		// CgsLanguageManager.cpp:1291
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1290
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1248
void CgsLanguage::LanguageManager::FormatTextFromInt(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liValue1, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat1, int32_t  liValue2, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1253
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1254
		char[2][64] lacParamBuffers;

		// CgsLanguageManager.cpp:1256
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1257
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1258
		UnicodeBuffer::CgsUtf8 *[4] lParams;

	}
	{
		// CgsLanguageManager.cpp:1251
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1250
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1210
void CgsLanguage::LanguageManager::FormatTextFromFloat(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, float32_t  lrValue, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1215
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1216
		char[64] lacParamBuffer;

		// CgsLanguageManager.cpp:1218
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1219
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1220
		UnicodeBuffer::CgsUtf8 *[4] lParams;

	}
	{
		// CgsLanguageManager.cpp:1213
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1212
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1174
void CgsLanguage::LanguageManager::FormatTextFromInt(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liValue, CgsLanguage::LanguageManager::ParameterFormatType  leValueFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1179
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1180
		char[64] lacParamBuffer;

		// CgsLanguageManager.cpp:1182
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1183
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1184
		UnicodeBuffer::CgsUtf8 *[4] lParams;

	}
	{
		// CgsLanguageManager.cpp:1177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1176
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1116
void CgsLanguage::LanguageManager::Obsolete_FormatTextByArray(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liParameterCount, const char *const*  lpacParameterText, CgsLanguage::LanguageManager::ParameterFormatType *  lpeParameterFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1123
		bool lbUsesNumAsString;

		// CgsLanguageManager.cpp:1124
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1125
		char[4][512] lacParamBuffer;

		// CgsLanguageManager.cpp:1126
		UnicodeBuffer::CgsUtf8 *[4] lParams;

		// CgsLanguageManager.cpp:1128
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1129
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1135
		int32_t liCurrentParameter;

	}
	{
		// CgsLanguageManager.cpp:1138
		CgsLanguage::LanguageManager::ParameterFormatType leParameterType;

		// CgsLanguageManager.cpp:1139
		const char * lpcParameterText;

		// CgsLanguageManager.cpp:1140
		bool lbIsFast;

	}
	{
		// CgsLanguageManager.cpp:1120
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1118
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1051
void CgsLanguage::LanguageManager::FormatTextV(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liParameterCount, va_list  lpArgument) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1057
		bool lbUsesNumAsString;

		// CgsLanguageManager.cpp:1058
		char[1024] lacMainBuffer;

		// CgsLanguageManager.cpp:1059
		char[4][512] lacParamBuffer;

		// CgsLanguageManager.cpp:1060
		UnicodeBuffer::CgsUtf8 *[4] lParams;

		// CgsLanguageManager.cpp:1062
		UnicodeBuffer::CgsUtf8 * lpcUTFTarget;

		// CgsLanguageManager.cpp:1063
		UnicodeBuffer::CgsUtf8 * lpcUTFMainBuffer;

		// CgsLanguageManager.cpp:1069
		int32_t liCurrentParameter;

	}
	{
		// CgsLanguageManager.cpp:1072
		CgsLanguage::LanguageManager::ParameterFormatType leParameterType;

		// CgsLanguageManager.cpp:1073
		const char * lpcParameterText;

		// CgsLanguageManager.cpp:1074
		bool lbIsFast;

	}
	{
		// CgsLanguageManager.cpp:1055
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1054
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLanguageManager.cpp:1053
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsLanguageManager.cpp:1011
void CgsLanguage::LanguageManager::FormatAndAddText(const char *  lpcStringID, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liParameterCount, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:1013
		char[1024] lacBuffer;

		// CgsLanguageManager.cpp:1014
		bool lbResult;

		// CgsLanguageManager.cpp:1015
		va_list lpArgument;

	}
}

// CgsLanguageManager.cpp:985
void CgsLanguage::LanguageManager::FormatTextV(char *  lpcTarget, uint32_t  liTargetLength, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat, int32_t  liParameterCount, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:987
		bool lbResult;

		// CgsLanguageManager.cpp:988
		va_list lpArgument;

	}
}

// CgsLanguageManager.cpp:782
void CgsLanguage::LanguageManager::FormatAndAddText(const char *  lpcStringID, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLanguageManager.cpp:784
		char[1024] lacBuffer;

		// CgsLanguageManager.cpp:785
		bool lbResult;

	}
}

