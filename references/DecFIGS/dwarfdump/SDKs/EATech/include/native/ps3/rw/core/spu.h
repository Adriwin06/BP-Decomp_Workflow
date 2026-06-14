// spu.h:72
struct rw::SPU {
	// hosttype.h:70
	typedef uint32_t HostPtr;

private:
	// spu.h:95
	extern const SPU::HostPtr m_baseAddress = 3758096384;

	// spu.h:96
	extern const SPU::HostPtr m_offset = 1048576;

	// spu.h:98
	extern const SPU::HostPtr m_tagQueryTypeAddress = 3758371332;

	// spu.h:100
	extern const SPU::HostPtr m_tagQueryMaskAddress = 3758371356;

	// spu.h:102
	extern const SPU::HostPtr m_tagStatusAddress = 3758371372;

	// spu.h:104
	extern const SPU::HostPtr m_spuMailboxAddress = 3758374924;

	// spu.h:106
	extern const SPU::HostPtr m_runControlAddress = 3758374940;

	// spu.h:107
	extern const uint32_t m_runControlStop;

	// spu.h:108
	extern const uint32_t m_runControlRun = 1;

	// spu.h:109
	extern const uint32_t m_runControlIsolateExit = 2;

	// spu.h:110
	extern const uint32_t m_runControlIsolateLoad = 3;

	// spu.h:112
	extern const SPU::HostPtr m_statusAddress = 3758374948;

	// spu.h:113
	extern const uint32_t m_statusRunMask = 1;

	// spu.h:115
	extern const SPU::HostPtr m_nextProgramCounterAddress = 3758374964;

	// spu.h:116
	extern const uint32_t m_memorySize = 262144;

	// spu.h:118
	extern const SPU::HostPtr m_signal1Address = 3758440460;

	// spu.h:120
	extern const SPU::HostPtr m_signal2Address = 3758473228;

	// spu.h:130
	sys_raw_spu_t m_id;

	// spu.h:132
	extern const uint64_t m_statusMask = 1;

	// spu.h:133
	extern const uint32_t m_bufferSize = 256;

	// spu.h:134
	extern const uint32_t m_flagZero = 1;

	// spu.h:135
	extern const uint32_t m_flagUpper = 2;

	// spu.h:136
	extern const uint32_t m_flagSigned = 4;

	// spu.h:143
	sys_ppu_thread_t m_thread;

	// spu.h:144
	sys_interrupt_tag_t m_tag;

	// spu.h:145
	sys_interrupt_thread_handle_t m_handle;

public:
	// spu.h:75
	void ManagerInitialize(uint32_t);

	// spu.h:76
	void ManagerRelease();

	// spu.h:78
	void Initialize();

	// spu.h:79
	void Release();

	// spu.h:82
	uint32_t GetMail();

	// spu.h:84
	void PutMail(uint32_t);

	// spu.h:85
	void PutMail(int32_t);

	// spu.h:86
	void SendSignal1(uint32_t);

	// spu.h:87
	void SendSignal2(uint32_t);

	// spu.h:89
	void Execute(const RwChar *);

	// spu.h:90
	void WaitForCompletion();

	// spu.h:91
	void WaitForDMA(uint32_t);

private:
	// spu.h:122
	SPU::HostPtr LocalToEffectiveAddress(uint32_t);

	// spu.h:123
	uint32_t GetStatus();

	// spu.h:124
	uint32_t GetTagStatus();

	// spu.h:125
	void SetNextProgramCounter(uint32_t);

	// spu.h:126
	void SetRunControl(uint32_t);

	// spu.h:127
	void SetTagQueryMask(uint32_t);

	// spu.h:128
	void SetTagQueryType(uint32_t);

	// spu.h:138
	uint32_t ToString(RwChar *, uint32_t, uint32_t, uint32_t, uint32_t);

	// spu.h:139
	void Printf(uint32_t);

	// spu.h:140
	void HandleInterrupt();

	// spu.h:141
	void InterruptHandler(uint64_t);

}

// spu.h:95
extern const SPU::HostPtr m_baseAddress = 3758096384;

// spu.h:96
extern const SPU::HostPtr m_offset = 1048576;

// spu.h:98
extern const SPU::HostPtr m_tagQueryTypeAddress = 3758371332;

// spu.h:100
extern const SPU::HostPtr m_tagQueryMaskAddress = 3758371356;

// spu.h:102
extern const SPU::HostPtr m_tagStatusAddress = 3758371372;

// spu.h:104
extern const SPU::HostPtr m_spuMailboxAddress = 3758374924;

// spu.h:106
extern const SPU::HostPtr m_runControlAddress = 3758374940;

// spu.h:112
extern const SPU::HostPtr m_statusAddress = 3758374948;

// spu.h:113
extern const uint32_t m_statusRunMask = 1;

// spu.h:115
extern const SPU::HostPtr m_nextProgramCounterAddress = 3758374964;

// spu.h:118
extern const SPU::HostPtr m_signal1Address = 3758440460;

// spu.h:120
extern const SPU::HostPtr m_signal2Address = 3758473228;

