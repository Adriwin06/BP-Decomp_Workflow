// JuiceDefines.h:17
namespace Juice {
	// JuiceMutex.cpp:28
	enum MUTEX_STATE {
		ALLOCATED = 0,
		DEALLOCATED = 1,
	}

}

// JuiceMutex.cpp:35
struct Juice::MutexSignature {
	// JuiceMutex.cpp:36
	Juice::MUTEX_STATE status;

	// JuiceMutex.cpp:45
	sys_ppu_thread_t lockthreadid;

	// JuiceMutex.cpp:46
	uint32_t lockcount;

	// JuiceMutex.cpp:47
	sys_mutex_t mutex;

}

// JuiceMutex.cpp:56
void Juice::JuiceMutex::JuiceMutex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceMutex.cpp:60
		MutexSignature * m;

	}
}

// JuiceMutex.cpp:64
void Juice::JuiceMutex::Create() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceMutex.cpp:67
		MutexSignature * m;

		// JuiceMutex.cpp:87
		sys_mutex_attribute_t mutexAttrib;

		sys_mutex_create(/* parameters */);
	}
}

// JuiceMutex.cpp:97
void Juice::JuiceMutex::Destroy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceMutex.cpp:99
		MutexSignature * m;

		sys_mutex_destroy(/* parameters */);
	}
}

// JuiceMutex.cpp:187
void Juice::JuiceMutex::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceMutex.cpp:193
		MutexSignature * m;

		// JuiceMutex.cpp:224
		sys_ppu_thread_t currentThreadID;

		sys_mutex_unlock(/* parameters */);
	}
}

// JuiceMutex.cpp:128
void Juice::JuiceMutex::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceMutex.cpp:131
		MutexSignature * m;

		// JuiceMutex.cpp:161
		sys_ppu_thread_t currentThreadID;

	}
	sys_mutex_lock(/* parameters */);
}

