// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct BufferedDispatchFrame {
	public:
		// CgsBufferedDispatchFrame.h:117
		void SetNumDispatchFrames(uint32_t);

	}

}

// CgsBufferedDispatchFrame.h:33
struct CgsGraphics::BufferedDispatchFrame {
	int (*)(...) * _vptr.BufferedDispatchFrame;

private:
	// CgsBufferedDispatchFrame.h:81
	CgsGraphics::DispatchFrame ** mapDispatchFrame;

	// CgsBufferedDispatchFrame.h:82
	uint32_t muNumDispatchFrames;

	// CgsBufferedDispatchFrame.h:84
	uint32_t muCurrentFrameForWrite;

	// CgsBufferedDispatchFrame.h:85
	uint32_t muCurrentFrameForRead;

public:
	void BufferedDispatchFrame(const BufferedDispatchFrame &);

	// CgsBufferedDispatchFrame.cpp:45
	virtual void Construct(uint32_t, uint32_t, rw::IResourceAllocator *);

	// CgsBufferedDispatchFrame.cpp:77
	virtual bool Prepare();

	// CgsBufferedDispatchFrame.cpp:95
	virtual bool Release();

	// CgsBufferedDispatchFrame.cpp:111
	virtual void Destruct();

	// CgsBufferedDispatchFrame.h:99
	const uint32_t & GetNumDispatchFrames() const;

	// CgsBufferedDispatchFrame.h:117
	void SetNumDispatchFrames(uint32_t);

	// CgsBufferedDispatchFrame.cpp:141
	virtual void Swap();

	// CgsBufferedDispatchFrame.cpp:169
	virtual DispatchList & GetDispatchListForWrite(uint32_t);

	// CgsBufferedDispatchFrame.cpp:187
	virtual DispatchBin & GetDispatchBinForWrite();

	// CgsBufferedDispatchFrame.cpp:205
	virtual DispatchFrame & GetDispatchFrameForWrite();

	// CgsBufferedDispatchFrame.cpp:224
	virtual DispatchFrame & GetDispatchFrameForRead();

	// CgsBufferedDispatchFrame.cpp:241
	void BufferedDispatchFrame();

	// CgsBufferedDispatchFrame.cpp:259
	void ~BufferedDispatchFrame();

}

