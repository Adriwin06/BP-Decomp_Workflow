// CgsServerInterfaceDirtySockPS3.h:48
void CgsNetwork::ServerInterfaceDirtySockPS3::~ServerInterfaceDirtySockPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceDirtySockPS3.h:48
void CgsNetwork::ServerInterfaceDirtySockPS3::ServerInterfaceDirtySockPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceDirtySockPS3.h:48
struct CgsNetwork::ServerInterfaceDirtySockPS3 : public CgsNetwork::ServerInterfaceDirtySock {
private:
	// CgsServerInterfaceDirtySockPS3.h:84
	CgsNetwork::DirtySock::ProtoUpnpRefT * mpProtoUpnpRef;

public:
	// CgsServerInterfaceDirtySockPS3.cpp:49
	virtual void Construct();

	// CgsServerInterfaceDirtySockPS3.cpp:69
	virtual bool Prepare(ServerInterfacePrepareParams *);

	// CgsServerInterfaceDirtySockPS3.cpp:101
	virtual bool Release();

	// CgsServerInterfaceDirtySockPS3.cpp:124
	virtual void Destruct();

	// CgsServerInterfaceDirtySockPS3.cpp:142
	virtual void Update();

	// CgsServerInterfaceDirtySockPS3.cpp:157
	virtual void Suspend(int32_t);

	// CgsServerInterfaceDirtySockPS3.cpp:173
	virtual void Resume();

	virtual void ~ServerInterfaceDirtySockPS3();

}

