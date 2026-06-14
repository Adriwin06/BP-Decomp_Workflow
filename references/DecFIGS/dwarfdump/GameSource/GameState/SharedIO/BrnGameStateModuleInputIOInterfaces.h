// BrnGameStateModuleInputIOInterfaces.h:46
struct BrnGameState::GameStateModuleIO::GameStateToControllerInterface {
private:
	// BrnGameStateModuleInputIOInterfaces.h:75
	PostWorldInputBuffer::BindRequestQueue mBindRequestQueue;

	// BrnGameStateModuleInputIOInterfaces.h:76
	PostWorldInputBuffer::UnBindRequestQueue mUnbindRequestQueue;

public:
	// BrnGameStateModuleInputIOInterfaces.h:51
	void Construct();

	// BrnGameStateModuleInputIOInterfaces.h:55
	void Clear();

	// BrnGameStateModuleInputIOInterfaces.h:59
	const PostWorldInputBuffer::BindRequestQueue * GetBindRequestQueue() const;

	// BrnGameStateModuleInputIOInterfaces.h:63
	PostWorldInputBuffer::BindRequestQueue * GetBindRequestQueue();

	// BrnGameStateModuleInputIOInterfaces.h:67
	const PostWorldInputBuffer::UnBindRequestQueue * GetUnBindRequestQueue() const;

	// BrnGameStateModuleInputIOInterfaces.h:71
	PostWorldInputBuffer::UnBindRequestQueue * GetUnBindRequestQueue();

}

// BrnGameStateModuleInputIOInterfaces.h:90
struct BrnGameState::GameStateModuleIO::ControllerToGameStateInterface {
private:
	// BrnGameStateModuleInputIOInterfaces.h:124
	OutputBuffer::BindResultQueue mBindResultQueue;

	// BrnGameStateModuleInputIOInterfaces.h:125
	OutputBuffer::UnBindResultQueue mUnBindResultQueue;

	// BrnGameStateModuleInputIOInterfaces.h:127
	int32_t miActiveControllerPort;

public:
	// BrnGameStateModuleInputIOInterfaces.h:95
	void Construct();

	// BrnGameStateModuleInputIOInterfaces.h:99
	const OutputBuffer::BindResultQueue * GetBindResultsQueue() const;

	// BrnGameStateModuleInputIOInterfaces.h:103
	OutputBuffer::BindResultQueue * GetBindResultsQueue();

	// BrnGameStateModuleInputIOInterfaces.h:107
	const OutputBuffer::UnBindResultQueue * GetUnBindResultsQueue() const;

	// BrnGameStateModuleInputIOInterfaces.h:111
	OutputBuffer::UnBindResultQueue * GetUnBindResultsQueue();

	// BrnGameStateModuleInputIOInterfaces.h:115
	int32_t GetActiveControllerPort() const;

	// BrnGameStateModuleInputIOInterfaces.h:120
	void SetActiveControllerPort(int32_t);

}

