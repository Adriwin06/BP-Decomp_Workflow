// JuiceThreadInfoNode.cpp:28
void Juice::ThreadInfoNode::ThreadInfoNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:49
void Juice::ThreadInfoNode::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:53
void Juice::ThreadInfoNode::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:63
void Juice::ThreadInfoNode::GetOriginalID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:68
void Juice::ThreadInfoNode::GetSuspendCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:73
void Juice::ThreadInfoNode::SetSuspendCount(unsigned int  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:78
void Juice::ThreadInfoNode::GetPriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:83
void Juice::ThreadInfoNode::GetSentName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:87
void Juice::ThreadInfoNode::SetSentName(bool  sent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:92
void Juice::ThreadInfoNode::GetMarkForDelete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:97
void Juice::ThreadInfoNode::SetMarkForDelete(bool  del) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:102
void Juice::ThreadInfoNode::SetHandle(unsigned int  handle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:112
void Juice::ThreadInfoNode::HookHit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:117
void Juice::ThreadInfoNode::GetHookHits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:122
void Juice::ThreadInfoNode::ThreadInfoUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:133
void Juice::ThreadInfoNode::ReleaseHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:150
void Juice::ThreadInfoNode::SetID(unsigned int  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:155
void Juice::ThreadInfoNode::GetStartTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:208
void Juice::ThreadInfoNode::GetEndTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:296
void Juice::ThreadInfoNode::ConvertThreadTimeToMS(system_time_t  fTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceThreadInfoNode.cpp:298
		unsigned int msTotal;

		// JuiceThreadInfoNode.cpp:309
		uint64_t kTimeBaseFreq;

		sys_time_get_timebase_frequency(/* parameters */);
	}
}

// JuiceThreadInfoNode.cpp:223
void Juice::ThreadInfoNode::GetExecutionTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceThreadInfoNode.cpp:225
		unsigned int total;

	}
}

// JuiceThreadInfoNode.cpp:237
void Juice::ThreadInfoNode::GetTimes(const unsigned int &  start, const unsigned int &  end, const unsigned int &  execution) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:266
void Juice::ThreadInfoNode::GetExitCode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:277
void Juice::ThreadInfoNode::GetCpuId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:282
void Juice::ThreadInfoNode::SetCpuId(int  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:287
void Juice::ThreadInfoNode::GetLastCpuId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:292
void Juice::ThreadInfoNode::SetLastCpuId(int  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:339
void Juice::ThreadInfoNode::UpdateInfo(const const char *&  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:378
void Juice::ThreadInfoNode::GetCallStack(unsigned int *  pArray, unsigned int  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceThreadInfoNode.cpp:380
		unsigned int stackSize;

	}
}

// JuiceThreadInfoNode.cpp:404
void Juice::ThreadInfoNode::UpdateInfo(const SchedulerTraceRecord *  sRec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceThreadInfoNode.cpp:406
		unsigned int prevState;

	}
}

// JuiceThreadInfoNode.cpp:176
extern unsigned int ConvertTimebaseToMs(unsigned int  timebase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceThreadInfoNode.cpp:178
		uint64_t kTimeBaseFreq;

		// JuiceThreadInfoNode.cpp:179
		uint64_t currTime;

		sys_time_get_timebase_frequency(/* parameters */);
	}
}

// JuiceThreadInfoNode.cpp:201
void Juice::ThreadInfoNode::GetTime(unsigned int  timebase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:190
void Juice::ThreadInfoNode::SetStartTime(unsigned int  timebase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceThreadInfoNode.cpp:27
