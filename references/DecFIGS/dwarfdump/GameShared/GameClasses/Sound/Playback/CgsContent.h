// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsContent.h:37
		enum EContentState {
			E_CONTENT_STATE_INVALID = 0,
			E_CONTENT_STATE_UNLOADED = 1,
			E_CONTENT_STATE_LOADING = 2,
			E_CONTENT_STATE_LOADED = 3,
			E_CONTENT_STATE_UNLOADING = 4,
			E_CONTENT_STATE_COUNT = 5,
			E_CONTENT_STATE_CHANGED = 128,
		}

		// CgsContent.h:51
		enum EContentRemoveState {
			E_CONTENT_REMOVE_INVALID = 0,
			E_CONTENT_REMOVE_ALIVE = 1,
			E_CONTENT_REMOVE_REMOVING = 2,
			E_CONTENT_REMOVE_REMOVED = 3,
		}

	}

}

// CgsContent.h:91
struct CgsSound::Playback::Content : public CgsSound::Playback::Object {
	// CgsContent.h:93
	extern const Name SK_WAVE_DATA_CLASS;

	// CgsContent.h:94
	extern const Name SK_REVERB_IR_DATA_CLASS;

private:
	// CgsContent.h:306
	const CgsSound::Playback::Factory & mFactory;

	// CgsContent.h:307
	const const ContentSpec & mContentSpec;

	// CgsContent.h:308
	CgsSound::Playback::Module::Module::StreamBuffer::Ident mIdent;

	// CgsContent.h:309
	CgsSound::Playback::IContentLoadService * mpLoadService;

	// CgsContent.h:310
	uint32_t mu32DataSize;

	// CgsContent.h:312
	uint16_t mu16LoadCount;

	// CgsContent.h:313
	uint8_t mu8ContentState;

	// CgsContent.h:314
	uint8_t mu8RemoveState;

public:
	void Content(const CgsSound::Playback::Content &);

	// CgsContent.h:104
	void * operator new(size_t, CgsSound::Playback::Factory &, const ContentSpec &);

	// CgsContent.h:113
	void operator delete(void *, CgsSound::Playback::Factory &);

	// CgsContent.h:121
	void operator delete(void *, CgsSound::Playback::Factory &, const ContentSpec &);

	// CgsContent.h:125
	void operator delete(void *);

	// CgsContent.h:341
	void Content(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

	// CgsContent.h:356
	virtual void ~Content();

	// CgsContent.h:367
	void Update(float);

	// CgsContent.h:153
	void OnAttach(CgsSound::Playback::Voice &, Slot &);

	// CgsContent.h:163
	void OnDetach(CgsSound::Playback::Voice &, Slot &);

	// CgsContent.h:393
	bool IsAttached();

	// CgsContent.h:402
	const ContentSpec & GetContentSpec() const;

	// CgsContent.h:409
	const ContentType & GetContentType() const;

	// CgsContent.h:416
	CgsSound::Playback::Module::Module::StreamBuffer::Ident GetIdent() const;

	// CgsContent.h:424
	void SetIdent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsContent.h:431
	CgsSound::Playback::EContentState GetContentState() const;

	// CgsContent.h:438
	CgsSound::Playback::EContentRemoveState GetRemoveState() const;

	// CgsContent.h:445
	bool HasContentStateChanged() const;

	// CgsContent.h:452
	void AcknowledgeContentStateChange();

	// CgsContent.h:500
	void SetLoadService(CgsSound::Playback::IContentLoadService *);

	// CgsContent.h:513
	CgsSound::Playback::EContentLoadTime GetLoadTime() const;

	// CgsContent.h:520
	void * GetData();

	// CgsContent.h:536
	void BeginRemove();

	// CgsContent.h:215
	void StallUnload();

protected:
	// CgsContent.h:460
	void SetContentState(CgsSound::Playback::EContentState);

	// CgsContent.h:474
	void SetRemoveState(CgsSound::Playback::EContentRemoveState);

	// CgsContent.h:481
	virtual void DoDispose();

	// CgsContent.h:259
	virtual bool DoLoad();

	// CgsContent.h:267
	virtual bool DoUnload();

	// CgsContent.h:271
	virtual bool DoOnPostLoad();

	// CgsContent.h:274
	virtual bool DoOnPreUnload();

	// CgsContent.h:278
	virtual void DoUpdate(float);

	// CgsContent.h:281
	virtual void * DoGetData();

	// CgsContent.h:492
	CgsSound::Playback::Factory & GetFactory();

	// CgsContent.h:506
	CgsSound::Playback::IContentLoadService * GetLoadService();

	// CgsContent.h:528
	void * GetData(CgsSound::Playback::EContentState);

	// CgsContent.h:294
	uint32_t GetDataSize();

	// CgsContent.h:300
	void SetDataSize(uint32_t);

private:
	// CgsContent.h:318
	CgsSound::Playback::Content & operator=(const CgsSound::Playback::Content &);

}

// CgsContent.h:93
extern const Name SK_WAVE_DATA_CLASS;

// CgsContent.h:94
extern const Name SK_REVERB_IR_DATA_CLASS;

// CgsContent.h:91
struct CgsSound::Playback::Content : public CgsSound::Playback::Object {
	// CgsObject.cpp:63
	extern const Name SK_WAVE_DATA_CLASS;

	// CgsObject.cpp:66
	extern const Name SK_REVERB_IR_DATA_CLASS;

private:
	// CgsContent.h:306
	const CgsSound::Playback::Factory & mFactory;

	// CgsContent.h:307
	const const ContentSpec & mContentSpec;

	// CgsContent.h:308
	CgsSound::Playback::Module::Module::StreamBuffer::Ident mIdent;

	// CgsContent.h:309
	CgsSound::Playback::IContentLoadService * mpLoadService;

	// CgsContent.h:310
	uint32_t mu32DataSize;

	// CgsContent.h:312
	uint16_t mu16LoadCount;

	// CgsContent.h:313
	uint8_t mu8ContentState;

	// CgsContent.h:314
	uint8_t mu8RemoveState;

public:
	void Content(const CgsSound::Playback::Content &);

	// CgsObject.cpp:43
	void * operator new(size_t, CgsSound::Playback::Factory &, const ContentSpec &);

	// CgsObject.cpp:55
	void operator delete(void *, CgsSound::Playback::Factory &);

	// CgsContent.h:121
	void operator delete(void *, CgsSound::Playback::Factory &, const ContentSpec &);

	// CgsContent.h:125
	void operator delete(void *);

	// CgsContent.h:341
	void Content(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

	// CgsContent.h:356
	virtual void ~Content();

	// CgsContent.h:367
	void Update(float);

	// CgsObject.cpp:74
	void OnAttach(CgsSound::Playback::Voice &, Slot &);

	// CgsObject.cpp:102
	void OnDetach(CgsSound::Playback::Voice &, Slot &);

	// CgsContent.h:393
	bool IsAttached();

	// CgsContent.h:402
	const ContentSpec & GetContentSpec() const;

	// CgsContent.h:409
	const ContentType & GetContentType() const;

	// CgsContent.h:416
	CgsSound::Playback::Module::Module::StreamBuffer::Ident GetIdent() const;

	// CgsContent.h:424
	void SetIdent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsContent.h:431
	CgsSound::Playback::EContentState GetContentState() const;

	// CgsContent.h:438
	CgsSound::Playback::EContentRemoveState GetRemoveState() const;

	// CgsContent.h:445
	bool HasContentStateChanged() const;

	// CgsContent.h:452
	void AcknowledgeContentStateChange();

	// CgsContent.h:500
	void SetLoadService(CgsSound::Playback::IContentLoadService *);

	// CgsContent.h:513
	CgsSound::Playback::EContentLoadTime GetLoadTime() const;

	// CgsContent.h:520
	void * GetData();

	// CgsContent.h:536
	void BeginRemove();

	// CgsContent.h:215
	void StallUnload();

protected:
	// CgsContent.h:460
	void SetContentState(CgsSound::Playback::EContentState);

	// CgsContent.h:474
	void SetRemoveState(CgsSound::Playback::EContentRemoveState);

	// CgsContent.h:481
	virtual void DoDispose();

	// CgsContent.h:259
	virtual bool DoLoad();

	// CgsContent.h:267
	virtual bool DoUnload();

	// CgsContent.h:271
	virtual bool DoOnPostLoad();

	// CgsContent.h:274
	virtual bool DoOnPreUnload();

	// CgsContent.h:278
	virtual void DoUpdate(float);

	// CgsContent.h:281
	virtual void * DoGetData();

	// CgsContent.h:492
	CgsSound::Playback::Factory & GetFactory();

	// CgsContent.h:506
	CgsSound::Playback::IContentLoadService * GetLoadService();

	// CgsContent.h:528
	void * GetData(CgsSound::Playback::EContentState);

	// CgsContent.h:294
	uint32_t GetDataSize();

	// CgsContent.h:300
	void SetDataSize(uint32_t);

private:
	// CgsContent.h:318
	CgsSound::Playback::Content & operator=(const CgsSound::Playback::Content &);

}

// CgsContent.h:70
struct CgsSound::Playback::IContentLoadService {
	int (*)(...) * _vptr.IContentLoadService;

public:
	// CgsContent.h:81
	virtual bool DoServiceContentLoadRequest(CgsSound::Playback::Module::Module::StreamBuffer::Ident, CgsSound::Playback::EContentLoadMethod, const char *, void *);

}

// CgsContent.h:70
struct CgsSound::Playback::IContentLoadService {
	int (*)(...) * _vptr.IContentLoadService;

public:
	void IContentLoadService(const IContentLoadService &);

	void IContentLoadService();

	// CgsContent.h:81
	virtual bool DoServiceContentLoadRequest(CgsSound::Playback::Module::Module::StreamBuffer::Ident, CgsSound::Playback::EContentLoadMethod, const char *, void *);

}

// CgsContent.h:70
void CgsSound::Playback::IContentLoadService::IContentLoadService() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

