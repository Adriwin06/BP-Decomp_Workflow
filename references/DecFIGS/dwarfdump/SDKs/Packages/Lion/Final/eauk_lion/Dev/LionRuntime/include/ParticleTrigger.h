// ParticleTrigger.h:21
struct cParticleTrigger {
private:
	// ParticleTrigger.h:181
	cTime mTime;

	// ParticleTrigger.h:182
	cTime mTimeStart;

	// ParticleTrigger.h:183
	cTime mTimeStop;

	// ParticleTrigger.h:184
	bool mbEnabled;

public:
	// ParticleTrigger.h:31
	void Init();

	// ParticleTrigger.h:39
	void Update(U32, const cTime &);

	// ParticleTrigger.h:65
	bool IsRunning() const;

	// ParticleTrigger.h:70
	const cTime & GetTime() const;

	// ParticleTrigger.h:74
	const cTime & GetTimeStart() const;

	// ParticleTrigger.h:79
	void SetStartTime(const cTime &);

	// ParticleTrigger.h:84
	const cTime & GetTimeStop() const;

	// ParticleTrigger.h:98
	U32 GetStatus(const cTime &, FP32, FP32, FP32, FP32, FP32, U32, FP32 &, FP32 &);

	// ParticleTrigger.h:174
	cTime GetAge() const;

}

