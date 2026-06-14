// CgsTestConnectionMessage.h:40
void CgsNetwork::TestConnectionMessage::TestConnectionMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTestConnectionMessage.h:40
struct CgsNetwork::TestConnectionMessage : public CgsNetwork::ReliableMessage {
public:
	// CgsTestConnectionMessage.cpp:45
	void Construct();

	// CgsTestConnectionMessage.cpp:65
	// Declaration
	void PrepareForSend(uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestConnectionMessage.cpp:67
		using namespace CgsDev::Message;

	}

	// CgsTestConnectionMessage.cpp:88
	// Declaration
	bool Retrieve() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestConnectionMessage.cpp:93
		using namespace CgsDev::Message;

	}

	// CgsTestConnectionMessage.h:53
	void Update();

	// CgsTestConnectionMessage.cpp:122
	// Declaration
	void Release() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTestConnectionMessage.cpp:124
		using namespace CgsDev::Message;

	}

	// CgsTestConnectionMessage.cpp:142
	void Destruct();

	// CgsTestConnectionMessage.cpp:171
	virtual int32_t GetPackedMessageSize();

	// CgsTestConnectionMessage.h:79
	virtual const char * GetName() const;

protected:
	// CgsTestConnectionMessage.cpp:156
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

