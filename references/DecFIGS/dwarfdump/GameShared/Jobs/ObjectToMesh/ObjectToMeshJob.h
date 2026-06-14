// ObjectToMeshJob.h:34
struct ObjectToMeshJob {
private:
	// ObjectToMeshJob.h:46
	ObjectToMeshJobInfo * mpData;

public:
	// ObjectToMeshJob.h:37
	void Execute(ObjectToMeshJobInfo *);

private:
	// ObjectToMeshJob.h:41
	// Declaration
	void ExecuteImplementation(ObjectToMeshJobInfo *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:2971
		using namespace CgsGraphics;

	}

	// ObjectToMeshJob.h:44
	// Declaration
	void SharedMemoryChangeCallback(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:2936
		using namespace CgsGraphics;

	}

}

