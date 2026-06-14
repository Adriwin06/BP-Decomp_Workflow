// importnamespaces.h:8
namespace rw {
	// Declaration
	struct LinearResourceAllocator {
		// linearresourceallocator.h:64
		struct RestorePoint {
			// linearresourceallocator.h:65
			ResourceDescriptor currentUsage;

			// linearresourceallocator.h:66
			ResourceDescriptor paddingUsed;

			// linearresourceallocator.h:67
			uint32_t numAllocations;

		}

	}

}

