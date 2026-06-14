// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnGameModuleIO.h:34
	namespace BrnGameModuleIO {
	}

}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnGameModuleIO.h:34
	namespace BrnGameModuleIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// BrnGameModuleIO.h:48
struct BrnGame::BrnGameModuleIO::InputBuffer : public DataStructure {
public:
	// BrnGameModuleIO.h:53
	void Construct();

	// BrnGameModuleIO.h:57
	bool Prepare();

	// BrnGameModuleIO.h:61
	bool Release();

	// BrnGameModuleIO.h:65
	void Destruct();

	// BrnGameModuleIO.h:69
	void Clear();

}

// BrnGameModuleIO.h:82
struct BrnGame::BrnGameModuleIO::OutputBuffer : public DataStructure {
	// BrnGameModuleIO.h:37
	typedef RequestInterface<1024> ResourceRequestInterface;

private:
	// BrnGameModuleIO.h:109
	OutputBuffer::ResourceRequestInterface mResourceRequestInterface;

public:
	// BrnGameModuleIO.h:86
	void Construct();

	// BrnGameModuleIO.h:90
	bool Prepare();

	// BrnGameModuleIO.h:94
	bool Release();

	// BrnGameModuleIO.h:98
	void Destruct();

	// BrnGameModuleIO.h:102
	void Clear();

	// BrnGameModuleIO.h:105
	const OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface() const;

}

