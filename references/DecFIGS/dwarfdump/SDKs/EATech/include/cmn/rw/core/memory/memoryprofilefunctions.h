// importnamespaces.h:8
namespace rw {
	// memoryprofilefunctions.h:24
	namespace internal {
		// memoryprofilefunctions.h:26
		namespace memory {
		}

	}

}

// memoryprofilefunctions.h:93
extern void (*)() m_pushStackFunc;

// memoryprofilefunctions.h:94
extern void (*)() m_popStackFunc;

// memoryprofilefunctions.h:95
extern void (*)(const RwChar *) m_writeFunc;

// memoryprofilefunctions.h:96
extern void (*)() m_disableFunc;

