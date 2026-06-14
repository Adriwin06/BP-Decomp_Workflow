// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ReadyMessage {
	public:
		// CgsReadyMessage.cpp:133
		void Destruct();

		// CgsReadyMessage.cpp:114
		void Release();

		// CgsReadyMessage.cpp:85
		bool Retrieve();

		// CgsReadyMessage.cpp:45
		void Construct();

		// CgsReadyMessage.cpp:65
		void PrepareForSend(uint16_t);

	}

}

