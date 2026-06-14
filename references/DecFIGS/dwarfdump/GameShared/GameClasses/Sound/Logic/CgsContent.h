// CgsContent.h:74
struct CgsSound::Logic::Content {
	int (*)(...) * _vptr.Content;

	// CgsContent.h:60
	typedef Handle<CgsSound::Playback::Content> ContentHandle;

protected:
	// CgsContent.h:153
	Content::ContentHandle mContentHandle;

	// CgsContent.h:154
	CgsSound::Logic::Module * mpModule;

public:
	// CgsContent.cpp:54
	void Content();

	// CgsContent.cpp:72
	virtual void ~Content();

	// CgsContent.cpp:92
	void Construct(CgsSound::Logic::Module *, Command::QueueElement, Command::QueueElement);

	// CgsContent.cpp:116
	void Destruct();

	// CgsContent.h:177
	Command::QueueElement GetIdent() const;

	// CgsContent.h:195
	const Content::ContentHandle & GetContent() const;

	// CgsContent.h:213
	bool IsCreated() const;

	// CgsContent.h:231
	bool IsLoaded() const;

private:
	// CgsContent.h:142
	void Content(const CgsSound::Logic::Content &);

	// CgsContent.h:147
	Content & operator=(const CgsSound::Logic::Content &);

}

