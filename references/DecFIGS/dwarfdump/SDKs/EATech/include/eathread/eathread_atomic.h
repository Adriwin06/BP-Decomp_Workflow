// eathread_atomic.h:332
struct EA::Thread::AtomicPointer : public AtomicInt<std::int32_t> {
public:
	// eathread_atomic.h:336
	void AtomicPointer(void *);

	// eathread_atomic.h:339
	AtomicPointer & operator=(void *);

	// eathread_atomic.h:342
	const void * operator const void*() const;

	// eathread_atomic.h:345
	void * GetValue() const;

	// eathread_atomic.h:348
	void * GetValueRaw() const;

	// eathread_atomic.h:351
	void * SetValue(void *);

	// eathread_atomic.h:354
	bool SetValueConditional(void *, void *);

}

