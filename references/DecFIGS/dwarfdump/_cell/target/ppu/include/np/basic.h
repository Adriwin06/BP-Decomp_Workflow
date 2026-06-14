// basic.h:109
typedef uint32_t SceNpBasicAttachmentDataId;

// basic.h:111
struct SceNpBasicAttachmentData {
	// basic.h:112
	SceNpBasicAttachmentDataId id;

	// basic.h:113
	size_t size;

}

// basic.h:114
typedef SceNpBasicAttachmentData SceNpBasicAttachmentData;

// basic.h:139
typedef int (*)(int, int, uint32_t, void *) SceNpBasicEventHandler;

