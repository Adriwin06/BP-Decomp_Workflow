// BrnStreamingState.h:36
struct BrnSound::Logic::Streaming::StreamingState : public BrnSound::Logic::BrnState {
protected:
	// BrnStreamingState.cpp:31
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

private:
	// BrnStreamingState.h:105
	StreamRequest mRequest;

	// BrnStreamingState.h:106
	float32_t mfFadeOut;

public:
	void StreamingState(const StreamingState &);

	// BrnStreamingState.cpp:31
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnStreamingState.cpp:31
	virtual const char * GetTypeName() const;

	// BrnStreamingState.h:38
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnStreamingState.cpp:31
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnStreamingState.cpp:50
	void StreamingState();

	// BrnStreamingState.cpp:65
	virtual void ~StreamingState();

	// BrnStreamingState.cpp:82
	virtual void Attach(void *);

	// BrnStreamingState.cpp:115
	virtual bool Detach();

	// BrnStreamingState.cpp:97
	virtual void UpdateParams(float32_t);

	// BrnStreamingState.h:113
	BrnSound::Logic::Streaming::StreamingStateManager * GetStreamingStateManager();

	// BrnStreamingState.h:149
	void SetFadeOut(float32_t);

	// BrnStreamingState.h:166
	const StreamRequest & GetRequest() const;

	// BrnStreamingState.h:184
	float32_t GetFadeOut() const;

private:
	// BrnStreamingState.h:131
	void SetRequest(const StreamRequest &);

}

