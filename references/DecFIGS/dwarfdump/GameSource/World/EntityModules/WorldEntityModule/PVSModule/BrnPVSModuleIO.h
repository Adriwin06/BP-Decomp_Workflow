// BrnPVSModuleIO.h:51
struct BrnWorld::PVSIO::InputBuffer : public DataStructure {
private:
	// BrnPVSModuleIO.h:85
	InputInterface mInputInterface;

public:
	// BrnPVSModuleIO.h:56
	void Construct();

	// BrnPVSModuleIO.h:60
	bool Prepare();

	// BrnPVSModuleIO.h:64
	bool Release();

	// BrnPVSModuleIO.h:68
	void Destruct();

	// BrnPVSModuleIO.h:72
	void Clear();

	// BrnPVSModuleIO.h:76
	InputInterface * GetInputInterface();

	// BrnPVSModuleIO.h:80
	const InputInterface * GetInputInterface() const;

}

// BrnPVSModuleIO.h:98
struct BrnWorld::PVSIO::OutputBuffer : public DataStructure {
private:
	// BrnPVSModuleIO.h:139
	OutputInterface mOutputInterface;

	// Unknown accessibility
	// BrnPVSModuleIO.h:39
	typedef RequestInterface<512> PVSGameDataRequestInterface;

	// BrnPVSModuleIO.h:140
	OutputBuffer::PVSGameDataRequestInterface mGameDataRequestInterface;

public:
	// BrnPVSModuleIO.h:103
	void Construct();

	// BrnPVSModuleIO.h:107
	bool Prepare();

	// BrnPVSModuleIO.h:111
	bool Release();

	// BrnPVSModuleIO.h:115
	void Destruct();

	// BrnPVSModuleIO.h:119
	void Clear();

	// BrnPVSModuleIO.h:123
	OutputInterface * GetOutputInterface();

	// BrnPVSModuleIO.h:127
	const OutputInterface * GetOutputInterface() const;

	// BrnPVSModuleIO.h:131
	OutputBuffer::PVSGameDataRequestInterface * GetGameDataRequestInterface();

	// BrnPVSModuleIO.h:135
	const OutputBuffer::PVSGameDataRequestInterface * GetGameDataRequestInterface() const;

}

