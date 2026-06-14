// attribuserinclude.h:119
namespace Attrib {
	// attriblivelink.h:36
	enum EDecodeResult {
		kDecodeSuccessful = 0,
		kDecodeMalformedObjectName = 1,
		kDecodeMalformedFixupList = 2,
		kDecodeUnableToAllocateEditRecord = 3,
		kDecodeCannotFindObject = 4,
		kDecodeObjectAlreadyExists = 5,
		kDecodeFailedOnInternalInconsistency = 6,
		kDecodeInvalidOperation = 7,
		kDecodeFailedToRemoveCollection = 8,
		kDecodeFailedToRemoveAttribute = 9,
		kDecodeFailedToAddCollection = 10,
		kDecodeFailedToAddAttribute = 11,
		kDecodeFailedToSetAttributeLength = 12,
	}

}

