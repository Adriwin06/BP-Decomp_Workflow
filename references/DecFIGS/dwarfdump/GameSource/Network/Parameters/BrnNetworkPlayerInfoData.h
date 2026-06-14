// BrnNetworkPlayerInfoData.h:45
void BrnNetwork::PlayerInfoData::PlayerInfoData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerInfoData.h:45
void BrnNetwork::PlayerInfoData::~PlayerInfoData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerInfoData.h:45
struct BrnNetwork::PlayerInfoData : public CgsNetwork::ServerInterfacePlayerInfoData {
public:
	void PlayerInfoData(const PlayerInfoData &);

	void PlayerInfoData();

	// BrnNetworkPlayerInfoData.cpp:41
	virtual bool Prepare();

protected:
	// BrnNetworkPlayerInfoData.cpp:60
	virtual const char * GetPattern() const;

	// BrnNetworkPlayerInfoData.cpp:74
	virtual uint32_t GetDataSize() const;

	// BrnNetworkPlayerInfoData.cpp:88
	virtual void * GetData();

	// BrnNetworkPlayerInfoData.cpp:102
	virtual const void * GetData() const;

public:
	virtual void ~PlayerInfoData();

}

