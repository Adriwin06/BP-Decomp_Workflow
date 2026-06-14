// CgsDateAndTimePS3.h:33
struct CgsSystem::DateAndTime {
private:
	// CgsDateAndTimePS3.h:142
	bool mbIsLocal;

	// CgsDateAndTimePS3.h:143
	time_t mSystemTime;

public:
	// CgsDateAndTimePS3.h:39
	void SetLocal(bool);

	// CgsDateAndTimePS3.h:43
	void Update();

	// CgsDateAndTimePS3.h:47
	void Clear();

	// CgsDateAndTimePS3.h:52
	int32_t GetDifferenceInSeconds(const DateAndTime &);

	// CgsDateAndTimePS3.h:59
	int32_t GetYear() const;

	// CgsDateAndTimePS3.h:62
	int32_t GetMonth() const;

	// CgsDateAndTimePS3.h:65
	int32_t GetDay() const;

	// CgsDateAndTimePS3.h:68
	int32_t GetHour() const;

	// CgsDateAndTimePS3.h:71
	int32_t GetMinute() const;

	// CgsDateAndTimePS3.h:74
	int32_t GetSecond() const;

	// CgsDateAndTimePS3.h:78
	void SetYear(int32_t);

	// CgsDateAndTimePS3.h:82
	void SetMonth(int32_t);

	// CgsDateAndTimePS3.h:86
	void SetDay(int32_t);

	// CgsDateAndTimePS3.h:90
	void SetHour(int32_t);

	// CgsDateAndTimePS3.h:94
	void SetMinute(int32_t);

	// CgsDateAndTimePS3.h:98
	void SetSecond(int32_t);

	// CgsDateAndTimePS3.h:102
	bool IsLocal() const;

	// CgsDateAndTimePS3.h:105
	bool IsZero() const;

	// CgsDateAndTimePS3.h:108
	uint64_t GetRawTimeValue() const;

	// CgsDateAndTimePS3.h:116
	bool operator==(const DateAndTime &) const;

	// CgsDateAndTimePS3.h:120
	bool operator<(const DateAndTime &) const;

	// CgsDateAndTimePS3.h:124
	bool operator<=(const DateAndTime &) const;

	// CgsDateAndTimePS3.h:128
	bool operator>(const DateAndTime &) const;

	// CgsDateAndTimePS3.h:132
	bool operator>=(const DateAndTime &) const;

private:
	// CgsDateAndTimePS3.h:137
	tm * GetTimeStructure();

	// CgsDateAndTimePS3.h:140
	const tm * GetTimeStructure() const;

}

