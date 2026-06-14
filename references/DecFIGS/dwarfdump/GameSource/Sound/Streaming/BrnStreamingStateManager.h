// BrnStreamingStateManager.h:49
struct BrnSound::Logic::Streaming::StreamRequest {
	// BrnStreamingStateManager.h:61
	BrnSound::Logic::Streaming::IStreamUser * mpAttachment;

	// BrnStreamingStateManager.h:62
	uint32_t mu32Priority;

	// BrnStreamingStateManager.h:63
	float32_t mfLagTolerance;

	// BrnStreamingStateManager.h:64
	float32_t mfTimeStamp;

	// BrnStreamingStateManager.h:65
	uint32_t mu32UniqueId;

	// BrnStreamingStateManager.h:66
	bool mbDirty;

public:
	// BrnStreamingStateManager.h:53
	void StreamRequest();

	// BrnStreamingStateManager.h:59
	void StreamRequest(BrnSound::Logic::Streaming::IStreamUser *, uint32_t, float32_t);

}

// BrnStreamingStateManager.h:81
struct BrnSound::Logic::Streaming::StreamStopRequest {
	// BrnStreamingStateManager.h:92
	const BrnSound::Logic::Streaming::IStreamUser * mpAttachment;

	// BrnStreamingStateManager.h:93
	float32_t mfFadeOut;

	// BrnStreamingStateManager.h:94
	float32_t mfTimeStamp;

	// BrnStreamingStateManager.h:95
	uint32_t mu32UniqueId;

public:
	// BrnStreamingStateManager.h:85
	void StreamStopRequest();

	// BrnStreamingStateManager.h:90
	void StreamStopRequest(const BrnSound::Logic::Streaming::IStreamUser *, float32_t);

}

// BrnStreamingStateManager.h:107
struct BrnSound::Logic::Streaming::StreamingStateManager : public BrnSound::Logic::BrnStateManager {
protected:
	// BrnStreamingStateManager.cpp:34
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// BrnStreamingStateManager.h:229
	StreamRequest[6] maRePostRequests;

	// BrnStreamingStateManager.h:230
	StreamRequest[6] maPlayRequests;

	// BrnStreamingStateManager.h:231
	StreamStopRequest[6] maStopRequests;

	// BrnStreamingStateManager.h:233
	uint32_t muPlayRequestCount;

	// BrnStreamingStateManager.h:234
	uint32_t muStopRequestCount;

	// BrnStreamingStateManager.h:235
	uint32_t muNumRePostRequests;

	// BrnStreamingStateManager.h:237
	uint32_t muUniqueId;

public:
	void StreamingStateManager(const StreamingStateManager &);

	// BrnStreamingStateManager.cpp:34
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// BrnStreamingStateManager.cpp:34
	virtual const char * GetTypeName() const;

	// BrnStreamingStateManager.h:109
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// BrnStreamingStateManager.cpp:34
	CgsSound::Logic::StateManager * CreateObject(uint32_t);

	// BrnStreamingStateManager.cpp:49
	void StreamingStateManager();

	// BrnStreamingStateManager.cpp:63
	virtual bool Prepare();

	// BrnStreamingStateManager.cpp:177
	virtual bool Release();

	// BrnStreamingStateManager.cpp:194
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingStateManager.cpp:221
		using namespace CgsDev::Message;

	}

	// BrnStreamingStateManager.cpp:162
	virtual void ResourcesAreReady();

	// BrnStreamingStateManager.h:255
	void PostStreamRequest(const StreamRequest &);

	// BrnStreamingStateManager.h:280
	void PostStreamRequest(const StreamStopRequest &);

	// BrnStreamingStateManager.cpp:249
	// Declaration
	virtual CgsSound::Logic::State * GetFreeState(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingStateManager.cpp:285
		using namespace CgsDev::Message;

		// BrnStreamingStateManager.cpp:336
		using namespace CgsDev::Message;

	}

private:
	// BrnStreamingStateManager.cpp:359
	// Declaration
	void ProcessStopRequests() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingStateManager.cpp:384
		using namespace CgsDev::Message;

		// BrnStreamingStateManager.cpp:412
		using namespace CgsDev::Message;

	}

	// BrnStreamingStateManager.h:347
	void RePostStreamRequest(const StreamRequest &);

	// BrnStreamingStateManager.cpp:450
	void RemoveRequestsForUser(const StreamStopRequest &);

	// BrnStreamingStateManager.cpp:476
	void CheckForDuplicates(uint32_t) const;

	// BrnStreamingStateManager.h:305
	void PostStreamRequestInternal(const StreamRequest &);

	// BrnStreamingStateManager.h:326
	void PostStreamRequestInternal(const StreamStopRequest &);

public:
	virtual void ~StreamingStateManager();

}

// BrnStreamingStateManager.h:107
void BrnSound::Logic::Streaming::StreamingStateManager::~StreamingStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

