// BrnNetworkUsersetParams.h:47
void BrnNetwork::UsersetParams::UsersetParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkUsersetParams.h:47
void BrnNetwork::UsersetParams::~UsersetParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkUsersetParams.h:47
struct BrnNetwork::UsersetParams : public CgsNetwork::ServerInterfaceUsersetParams {
public:
	// BrnNetworkUsersetParams.cpp:42
	virtual bool Prepare();

private:
	// BrnNetworkUsersetParams.cpp:61
	virtual const char * GetPattern() const;

	// BrnNetworkUsersetParams.cpp:75
	virtual uint32_t GetDataSize() const;

	// BrnNetworkUsersetParams.cpp:89
	virtual void * GetData();

	// BrnNetworkUsersetParams.cpp:103
	virtual const void * GetData() const;

public:
	virtual void ~UsersetParams();

}

