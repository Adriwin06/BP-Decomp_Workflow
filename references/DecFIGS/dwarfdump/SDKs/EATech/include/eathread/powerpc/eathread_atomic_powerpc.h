// eathread_atomic_powerpc.h:50
struct EA::Thread::AtomicInt<std::int32_t> {
protected:
	// eathread_atomic_powerpc.h:84
	int32_t volatile mValue;

public:
	// eathread_atomic_powerpc.h:57
	void AtomicInt();

	// eathread_atomic_powerpc.h:60
	void AtomicInt(int);

	// eathread_atomic_powerpc.h:63
	int32_t GetValueRaw() const;

	// eathread_atomic_powerpc.h:66
	int32_t GetValue() const;

	// eathread_atomic_powerpc.h:67
	int32_t SetValue(int);

	// eathread_atomic_powerpc.h:68
	bool SetValueConditional(int, int);

	// eathread_atomic_powerpc.h:69
	int32_t Increment();

	// eathread_atomic_powerpc.h:70
	int32_t Decrement();

	// eathread_atomic_powerpc.h:71
	int32_t Add(int);

	// eathread_atomic_powerpc.h:74
	const int32_t operator const std::int32_t() const;

	// eathread_atomic_powerpc.h:75
	int32_t operator=(int);

	// eathread_atomic_powerpc.h:76
	int32_t operator+=(int);

	// eathread_atomic_powerpc.h:77
	int32_t operator-=(int);

	// eathread_atomic_powerpc.h:78
	int32_t operator++();

	// eathread_atomic_powerpc.h:79
	int32_t operator++(int);

	// eathread_atomic_powerpc.h:80
	int32_t operator--();

	// eathread_atomic_powerpc.h:81
	int32_t operator--(int);

}

// eathread_atomic_powerpc.h:50
struct EA::Thread::AtomicInt<std::uint64_t> {
protected:
	// eathread_atomic_powerpc.h:84
	uint64_t volatile mValue;

public:
	// eathread_atomic_powerpc.h:57
	void AtomicInt();

	// eathread_atomic_powerpc.h:60
	void AtomicInt(long long unsigned int);

	// eathread_atomic_powerpc.h:63
	uint64_t GetValueRaw() const;

	// eathread_atomic_powerpc.h:66
	uint64_t GetValue() const;

	// eathread_atomic_powerpc.h:67
	uint64_t SetValue(long long unsigned int);

	// eathread_atomic_powerpc.h:68
	bool SetValueConditional(long long unsigned int, long long unsigned int);

	// eathread_atomic_powerpc.h:69
	uint64_t Increment();

	// eathread_atomic_powerpc.h:70
	uint64_t Decrement();

	// eathread_atomic_powerpc.h:71
	uint64_t Add(long long unsigned int);

	// eathread_atomic_powerpc.h:74
	const uint64_t operator const std::uint64_t() const;

	// eathread_atomic_powerpc.h:75
	uint64_t operator=(long long unsigned int);

	// eathread_atomic_powerpc.h:76
	uint64_t operator+=(long long unsigned int);

	// eathread_atomic_powerpc.h:77
	uint64_t operator-=(long long unsigned int);

	// eathread_atomic_powerpc.h:78
	uint64_t operator++();

	// eathread_atomic_powerpc.h:79
	uint64_t operator++(int);

	// eathread_atomic_powerpc.h:80
	uint64_t operator--();

	// eathread_atomic_powerpc.h:81
	uint64_t operator--(int);

}

