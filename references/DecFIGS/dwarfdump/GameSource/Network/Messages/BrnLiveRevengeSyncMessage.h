// BrnLiveRevengeSyncMessage.h:42
struct BrnNetwork::LiveRevengeSyncMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnLiveRevengeSyncMessage.h:94
	LiveRevengeRelationship mLiveRevengeRelationship;

public:
	// BrnLiveRevengeSyncMessage.cpp:38
	void Construct();

	// BrnLiveRevengeSyncMessage.cpp:86
	void PrepareForSend(const LiveRevengeRelationship *, uint16_t);

	// BrnLiveRevengeSyncMessage.cpp:111
	bool Retrieve(LiveRevengeRelationship *);

	// BrnLiveRevengeSyncMessage.cpp:54
	void Release();

	// BrnLiveRevengeSyncMessage.cpp:70
	void Destruct();

	// BrnLiveRevengeSyncMessage.cpp:219
	virtual int32_t GetPackedMessageSize();

	// BrnLiveRevengeSyncMessage.h:100
	virtual const char * GetName() const;

protected:
	// BrnLiveRevengeSyncMessage.cpp:139
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

private:
	// BrnLiveRevengeSyncMessage.cpp:177
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CommonRelationship *);

	// BrnLiveRevengeSyncMessage.cpp:197
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CommonRelationshipStats *);

}

// BrnLiveRevengeSyncMessage.h:42
void BrnNetwork::LiveRevengeSyncMessage::LiveRevengeSyncMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

