// CgsTime.h:33
struct CgsSystem::Time {
private:
	// CgsTime.h:94
	int32_t miSeconds;

	// CgsTime.h:95
	float32_t mfFraction;

public:
	// CgsTime.h:36
	void Time();

	// CgsTime.h:38
	void Time(const Time &);

	// CgsTime.h:40
	void Time(float32_t);

	// CgsTime.h:42
	void Time(int32_t, float32_t);

	// CgsTime.h:45
	Time & operator=(const Time &);

	// CgsTime.h:48
	Time & operator=(float);

	// CgsTime.h:51
	Time operator+(const Time &) const;

	// CgsTime.h:54
	Time operator-(const Time &) const;

	// CgsTime.h:57
	Time & operator+=(const Time &);

	// CgsTime.h:60
	Time & operator-=(const Time &);

	// CgsTime.h:63
	bool operator>(const Time &) const;

	// CgsTime.h:66
	bool operator<(const Time &) const;

	// CgsTime.h:69
	bool operator>=(const Time &) const;

	// CgsTime.h:72
	bool operator<=(const Time &) const;

	// CgsTime.h:75
	float32_t GetFraction() const;

	// CgsTime.h:78
	int32_t GetSeconds() const;

	// CgsTime.h:81
	float32_t GetFloatVal() const;

	// CgsTime.h:84
	void SetFraction(float32_t);

	// CgsTime.h:87
	void SetSeconds(int32_t);

	// CgsTime.h:90
	void SetFloatVal(float32_t);

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct DateAndTime;

	struct ThreadLayout;

	struct TimerRequests;

	struct TimerRequestInterface;

	struct FrameRateTypeRequestInterface;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct DateAndTime;

	struct ThreadLayout;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct TimerRequests;

	struct TimerRequestInterface;

	struct FrameRateTypeRequestInterface;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct TimerRequests;

	struct TimerRequestInterface;

	struct ThreadLayout;

	struct FrameRateManager;

	struct DateAndTime;

	struct IThreadClass;

	struct FrameRateTypeRequestInterface;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct DateAndTime;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct ThreadLayout;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct TimerRequests;

	struct TimerRequestInterface;

	struct ThreadLayout;

	struct DateAndTime;

	struct IThreadClass;

	struct FrameRateTypeRequestInterface;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct ThreadLayout;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct DateAndTime;

	struct ThreadLayout;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

	struct TimerRequests;

	struct TimerRequestInterface;

	struct IThreadClass;

	struct FrameRateTypeRequestInterface;

}

// CgsTime.h:24
namespace CgsSystem {
	struct Time;

	struct ThreadLayout;

	struct Timer;

	struct TimerStatus;

	struct TimerStatusInterface;

}

