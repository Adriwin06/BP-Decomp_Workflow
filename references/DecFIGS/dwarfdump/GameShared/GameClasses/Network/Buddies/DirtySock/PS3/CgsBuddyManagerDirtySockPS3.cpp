// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsBuddyManagerDirtySockPS3.cpp:35
	const uint32_t KU_MAX_PROFILES_AT_ONCE = 15;

	// CgsBuddyManagerDirtySockPS3.cpp:36
	const int32_t KI_FRAMES_BETWEEN_PRESENCE_SEND_ATTEMPTS = 600;

	// CgsBuddyManagerDirtySockPS3.cpp:38
	const char * KPC_MESSAGE_BODY;

	// CgsBuddyManagerDirtySockPS3.cpp:39
	const char * KPC_MESSAGE_HEADER;

	// CgsBuddyManagerDirtySockPS3.cpp:40
	const char * KPC_INVITE_BUDDY;

	// CgsBuddyManagerDirtySockPS3.cpp:41
	const char * KPC_INVITE_STATUS;

	// CgsBuddyManagerDirtySockPS3.cpp:43
	int32_t KI_IMAGE_DECODE_SIZE;

}

// CgsBuddyManagerDirtySockPS3.cpp:57
struct CgsNetwork::MessageHeader {
	// CgsBuddyManagerDirtySockPS3.cpp:59
	int32_t miMessageType;

}

