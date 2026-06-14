// BrnMain.cpp:75
extern int main(int  lnArgc, char **  lapcArgv) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnMain.cpp:79
	using namespace CgsDev::Message;

	// BrnMain.cpp:85
	using namespace CgsDev::Message;

	// BrnMain.cpp:78
	uint32_t volatile _liStackValue;

	// BrnMain.cpp:83
	sys_ppu_thread_stack_t lStackInfo;

	// BrnMain.cpp:91
	IOBufferStack gUpdateInputBufferStack;

	// BrnMain.cpp:92
	IOBufferStack gUpdateOutputBufferStack;

	// BrnMain.cpp:93
	IOBufferStack gResourceInputBufferStack;

	// BrnMain.cpp:94
	IOBufferStack gResourceOutputBufferStack;

	// BrnMain.cpp:95
	IOBufferStack gDispatchThreadIOBufferStack;

	// BrnMain.cpp:114
	void * lpNewGame;

	sys_ppu_thread_get_stack_information(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnMain.cpp:193
void _GLOBAL__D___sys_process_param() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMain.cpp:192
void _GLOBAL__I___sys_process_param() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// _built-in_
namespace :: {
	// BrnMain.cpp:55
	extern BrnGame::BrnGameModule * gpBurnoutGame;

	// BrnMain.cpp:42
	extern sys_process_param_t __sys_process_param;

}

