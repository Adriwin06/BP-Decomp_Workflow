// Behaviour.h:50
namespace ICE {
	// ICEFile.hpp:28
	const uint32_t KU_NORMAL_BUFFER = 1024;

	// ICEFile.hpp:29
	const uint32_t KU_BUFFER_BLOCKS = 24;

}

// ICEFile.hpp:52
struct ICE::ICEFileHandler {
private:
	// ICEFile.hpp:63
	extern const int32_t KI_WRITEBUFFER_SIZE = 32768;

	// ICEFile.hpp:65
	char[32768] macWriteBuffer;

public:
	// ICEFile.hpp:54
	void Construct();

	// ICEFile.hpp:55
	void Destruct();

	// ICEFile.hpp:57
	ICEFileHandler * FileOpen(const char *, const char *);

	// ICEFile.hpp:58
	void FileClose();

	// ICEFile.hpp:59
	int32_t FilePrintf(char *, ...);

	// ICEFile.hpp:60
	int32_t FilePrintfAtEnd(char *, ...);

}

// ICEFile.hpp:63
extern const int32_t KI_WRITEBUFFER_SIZE = 32768;

// ICEActionQueue.hpp:21
namespace ICE {
	// ICEFile.hpp:28
	const uint32_t KU_NORMAL_BUFFER = 1024;

	// ICEFile.hpp:29
	const uint32_t KU_BUFFER_BLOCKS = 24;

}

// ICEMath.hpp:43
namespace ICE {
	// ICEFile.hpp:28
	const uint32_t KU_NORMAL_BUFFER = 1024;

	// ICEFile.hpp:29
	const uint32_t KU_BUFFER_BLOCKS = 24;

}

