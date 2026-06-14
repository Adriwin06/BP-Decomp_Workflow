// CgsCommandQueue.h:45
struct CgsSound::Playback::CommandQueue<255u,std::uintptr_t> {
	// CgsCommandQueue.h:79
	uintptr_t[255] mauCommandQueue;

	// CgsCommandQueue.h:80
	uint32_t mu32Read;

	// CgsCommandQueue.h:81
	uint32_t mu32Write;

public:
	// CgsCommandQueue.h:47
	void CommandQueue();

	// CgsCommandQueue.h:50
	void ~CommandQueue();

	// CgsCommandQueue.h:53
	void Update();

	// CgsCommandQueue.h:89
	bool PostCommand(unsigned int, const uintptr_t *);

	// CgsCommandQueue.h:117
	bool GetCommand(uint32_t &, uintptr_t *);

	// CgsCommandQueue.h:148
	bool PostCommand(unsigned int);

	// CgsCommandQueue.h:162
	bool GetCommand(uintptr_t &);

}

