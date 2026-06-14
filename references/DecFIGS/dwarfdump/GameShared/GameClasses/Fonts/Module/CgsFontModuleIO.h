// CgsFontModuleIO.h:27
namespace CgsGraphics {
	// CgsFontModuleIO.h:36
	namespace FontIO {
		struct InputBuffer;

		struct OutputBuffer;

	}

}

// CgsFontModuleIO.h:47
struct CgsGraphics::FontIO::InputBuffer : public DataStructure {
public:
	// CgsFontModuleIO.h:52
	void Construct();

	// CgsFontModuleIO.h:56
	bool Prepare();

	// CgsFontModuleIO.h:60
	bool Release();

	// CgsFontModuleIO.h:64
	void Destruct();

	// CgsFontModuleIO.h:68
	void Clear();

}

// CgsFontModuleIO.h:81
struct CgsGraphics::FontIO::OutputBuffer : public DataStructure {
	// CgsFontModuleIO.h:37
	typedef ResourceRequestQueue<1024> FontResourceRequestQueue;

	// CgsFontModuleIO.h:83
	OutputBuffer::FontResourceRequestQueue mResourceRequestQueue;

public:
	// CgsFontModuleIO.h:86
	void Construct();

	// CgsFontModuleIO.h:90
	bool Prepare();

	// CgsFontModuleIO.h:94
	bool Release();

	// CgsFontModuleIO.h:98
	void Destruct();

	// CgsFontModuleIO.h:102
	void Clear();

}

