// CgsStackUnpick.h:46
struct CgsDev::StackUnpickBase {
protected:
	// CgsStackUnpick.h:115
	extern const int32_t KI_MAX_STACK = 25;

	// CgsStackUnpick.h:118
	int32_t miStackSize;

	// CgsStackUnpick.h:119
	SPU::HostPtr[25] maStack;

	// CgsStackUnpick.h:120
	SPU::HostPtr[25] maRawStack;

public:
	// CgsStackUnpick.h:51
	bool Prepare();

	// CgsStackUnpick.h:56
	bool IsStackAvailable() const;

	// CgsStackUnpick.h:59
	int32_t GetStackSize() const;

	// CgsStackUnpick.h:63
	SPU::HostPtr GetStackAddress(int32_t) const;

	// CgsStackUnpick.h:68
	bool GetStack(SPU::HostPtr *, int32_t);

	// CgsStackUnpick.h:71
	SPU::HostPtr * GetStackArray();

	// CgsStackUnpick.h:74
	void Clear();

	// CgsStackUnpick.h:79
	SPU::HostPtr GetRawStackAddress(int32_t) const;

	// CgsStackUnpick.h:84
	bool GetRawStack(SPU::HostPtr *, int32_t);

	// CgsStackUnpick.h:87
	SPU::HostPtr * GetRawStackArray();

	// CgsStackUnpick.h:92
	void DumpStack() const;

	// CgsStackUnpick.h:95
	void DumpRawStack() const;

	// CgsStackUnpick.h:100
	void SetStackSize(int32_t);

	// CgsStackUnpick.h:103
	void RemoveFirstItemInStack();

protected:
	// CgsStackUnpick.h:109
	void CalcStackSize();

	// CgsStackUnpick.h:112
	void CopyRawStackToStack();

}

// CgsStackUnpick.h:115
extern const int32_t KI_MAX_STACK = 25;

// CgsStackUnpick.h:46
struct CgsDev::StackUnpickBase {
protected:
	// CgsStackUnpick.h:115
	extern const int32_t KI_MAX_STACK = 25;

	// CgsStackUnpick.h:118
	int32_t miStackSize;

	// CgsStackUnpick.h:119
	SPU::HostPtr[25] maStack;

	// CgsStackUnpick.h:120
	SPU::HostPtr[25] maRawStack;

public:
	// CgsStackUnpick.h:51
	bool Prepare();

	// CgsStackUnpick.h:56
	bool IsStackAvailable() const;

	// CgsStackUnpick.h:59
	int32_t GetStackSize() const;

	// CgsStackUnpick.h:63
	SPU::HostPtr GetStackAddress(int32_t) const;

	// CgsStackUnpick.h:68
	bool GetStack(SPU::HostPtr *, int32_t);

	// CgsStackUnpick.h:71
	SPU::HostPtr * GetStackArray();

	// CgsStackUnpick.h:74
	void Clear();

	// CgsStackUnpick.h:79
	SPU::HostPtr GetRawStackAddress(int32_t) const;

	// CgsStackUnpick.h:84
	bool GetRawStack(SPU::HostPtr *, int32_t);

	// CgsStackUnpick.h:87
	SPU::HostPtr * GetRawStackArray();

	// CgsStackUnpick.h:92
	// Declaration
	void DumpStack() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStackUnpick.cpp:314
		using namespace Message;

		// CgsStackUnpick.cpp:318
		using namespace Message;

		// CgsStackUnpick.cpp:320
		using namespace Message;

	}

	// CgsStackUnpick.h:95
	// Declaration
	void DumpRawStack() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStackUnpick.cpp:338
		using namespace Message;

		// CgsStackUnpick.cpp:342
		using namespace Message;

		// CgsStackUnpick.cpp:344
		using namespace Message;

	}

	// CgsStackUnpick.h:100
	void SetStackSize(int32_t);

	// CgsStackUnpick.h:103
	void RemoveFirstItemInStack();

protected:
	// CgsStackUnpick.h:109
	void CalcStackSize();

	// CgsStackUnpick.h:112
	void CopyRawStackToStack();

}

