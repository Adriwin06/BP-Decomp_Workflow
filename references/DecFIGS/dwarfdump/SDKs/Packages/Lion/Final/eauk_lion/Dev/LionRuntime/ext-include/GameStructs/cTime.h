// cTime.h:21
struct cTime {
private:
	// cTime.h:217
	S32 mTicks;

public:
	// cTime.h:24
	cTime();

	// cTime.h:25
	~cTime();

	// cTime.h:27
	cTime(const cTime &);

	// cTime.h:29
	cTime(U32);

	// cTime.h:31
	S32 GetTicks() const;

	// cTime.h:36
	void SetTicks(S64, S64);

	// cTime.h:49
	void BuildZero();

	// cTime.h:54
	void SetTimeMilliSeconds(U32);

	// cTime.h:59
	void SetTimeSeconds(FP32);

	// cTime.h:64
	FP32 GetTimeSeconds() const;

	// cTime.h:74
	S32 GetTimeMilliSeconds() const;

	// cTime.h:79
	S32 GetTimeDiff(const cTime &) const;

	// cTime.h:85
	FP32 GetTimeDiffSeconds(const cTime &) const;

	// cTime.h:92
	S32 GetTimeDiffMilliSeconds(const cTime &) const;

	// cTime.h:99
	FP32 GetWeight(const cTime &, const cTime &) const;

	// cTime.h:121
	void Lerp(const cTime &, const cTime &, FP32);

	// cTime.h:130
	void * operator void*() const;

	// cTime.h:135
	cTime operator+(const cTime &) const;

	// cTime.h:140
	cTime & operator+=(const cTime &);

	// cTime.h:146
	cTime operator-(const cTime &) const;

	// cTime.h:151
	cTime & operator-=(const cTime &);

	// cTime.h:157
	cTime operator*(const cTime &) const;

	// cTime.h:162
	cTime & operator*=(const cTime &);

	// cTime.h:168
	cTime operator*(FP32) const;

	// cTime.h:173
	cTime & operator*=(FP32);

	// cTime.h:179
	cTime & operator=(const cTime &);

	// cTime.h:185
	bool operator==(const cTime &) const;

	// cTime.h:190
	bool operator!=(const cTime &) const;

	// cTime.h:195
	bool operator>(const cTime &) const;

	// cTime.h:200
	bool operator>=(const cTime &) const;

	// cTime.h:205
	bool operator<(const cTime &) const;

	// cTime.h:210
	bool operator<=(const cTime &) const;

}

// _built-in_
namespace :: {
	// cTime.h:16
	const FP32 msfTicksPerSecond;

	// cTime.h:17
	const FP32 msfOneOverTicksPerSecond;

	// cTime.h:18
	const S32 msuTicksPerMilliSecond = 3;

}

