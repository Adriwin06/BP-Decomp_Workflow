// ObjectToMesh.h:35
struct ObjectToMeshJobInfo {
	// ObjectToMesh.h:36
	uint32_t muListID;

	// ObjectToMesh.h:38
	DispatchPacketInterpreter * mpDispatchInterpreter;

	// ObjectToMesh.h:39
	CgsGraphics::DispatchObjectContext * mpDispatchObjectContext;

	// ObjectToMesh.h:41
	DispatchList * mpDispatchListInput;

	// ObjectToMesh.h:42
	DispatchList * mpaDispatchListOutputArray;

	// ObjectToMesh.h:43
	uint32_t muDispatchListOutputCount;

	// ObjectToMesh.h:45
	DispatchCommand * mpDispatchBinMasterAddress;

	// ObjectToMesh.h:47
	uintptr_t muSharedMemoryStartAddress;

	// ObjectToMesh.h:48
	uint32_t * mpSharedMemoryBlockNextFreeAtomic;

	// ObjectToMesh.h:49
	uint32_t muSharedMemoryBlockMax;

	// ObjectToMesh.h:51
	int32_t miStartIndex;

	// ObjectToMesh.h:52
	int32_t miEndIndex;

	// ObjectToMesh.h:54
	bool mbSoftwareBreakpointOnEntry;

}

// _built-in_
namespace :: {
	// ObjectToMesh.h:91
	extern char[] _binary_ObjectToMesh_elf_start;

	// ObjectToMesh.h:92
	extern uint32_t _binary_ObjectToMesh_elf_size;

}

// ObjectToMesh.h:91
extern char[] _binary_ObjectToMesh_elf_start;

// ObjectToMesh.h:92
extern uint32_t _binary_ObjectToMesh_elf_size;

