// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysSharedIO_Events.h:38
	namespace AttribSysIO {
		// CgsAttribSysModuleIO.h:44
		const int32_t KI_ATTRIBSYS_EVENT_QUEUE_MAX_SIZE = 2048;

	}

}

// CgsAttribSysModuleIO.h:65
struct CgsAttribSys::AttribSysIO::InputBuffer : public IOBuffer {
	// CgsAttribSysModuleIO.h:50
	typedef VariableEventQueue<2048,16> InAttribSysEventQueue;

private:
	// CgsAttribSysModuleIO.h:92
	InputBuffer::InAttribSysEventQueue mEventQueue;

	// Unknown accessibility
	// CgsAttribSysModuleIO.h:53
	typedef AttribSysRequestInterface<2048> AttribSysModuleRequestInterface;

	// CgsAttribSysModuleIO.h:93
	InputBuffer::AttribSysModuleRequestInterface mVaultRequestInterface;

public:
	// CgsAttribSysModuleIO.h:70
	void Construct();

	// CgsAttribSysModuleIO.h:74
	void Destruct();

	// CgsAttribSysModuleIO.h:84
	const InputBuffer::InAttribSysEventQueue * GetEventQueue() const;

	// CgsAttribSysModuleIO.h:85
	const InputBuffer::AttribSysModuleRequestInterface * GetVaultRequestInterface() const;

	// CgsAttribSysModuleIO.h:88
	InputBuffer::AttribSysModuleRequestInterface * GetVaultRequestInterface();

}

// CgsAttribSysModuleIO.h:114
extern void AppendRequestInterface<32768>(const AttribSysRequestInterface<32768> *  lpSourceInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModuleIO.h:116
		CgsDev::StrStream lStrStream;

	}
}

