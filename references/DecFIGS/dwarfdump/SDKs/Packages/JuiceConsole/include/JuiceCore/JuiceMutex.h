// JuiceDefines.h:17
namespace Juice {
	// JuiceMutex.h:27
	const int MUTEX2SIZE = 32;

}

// JuiceMutex.h:31
struct Juice::JuiceMutex {
private:
	// JuiceMutex.h:39
	char[32] mBuf;

	// JuiceMutex.h:40
	bool mIsLocked;

public:
	// JuiceMutex.h:33
	void JuiceMutex();

	// JuiceMutex.h:34
	void Create();

	// JuiceMutex.h:35
	void Destroy();

	// JuiceMutex.h:36
	void Lock();

	// JuiceMutex.h:37
	void Unlock();

}

