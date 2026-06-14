// BrnGameDataModuleIO.h:63
extern const int32_t knRequestInterfaceQueueSize = 32768;

// BrnGameDataModuleIO.h:69
extern const int32_t kiAttribSysRequestInterfaceQueueSize = 32768;

// BrnGameDataModuleIO.h:59
struct BrnResource::GameDataIO::InputBuffer : public IOBuffer {
	// BrnGameDataModuleIO.h:63
	extern const int32_t knRequestInterfaceQueueSize = 32768;

	// BrnGameDataModuleIO.h:69
	extern const int32_t kiAttribSysRequestInterfaceQueueSize = 32768;

private:
	// BrnGameDataModuleIO.h:123
	RequestInterface<32768> mRequestInterface;

	// BrnGameDataModuleIO.h:127
	AttribSysRequestInterface<32768> mAttribSysRequestInterface;

	// BrnGameDataModuleIO.h:130
	CgsGraphics::Im2dRenderBuffer * mpDebug2dRenderBuffer;

public:
	// BrnGameDataModuleIO.h:75
	void Construct();

	// BrnGameDataModuleIO.h:79
	bool Prepare();

	// BrnGameDataModuleIO.h:83
	bool Release();

	// BrnGameDataModuleIO.h:87
	void Destruct();

	// BrnGameDataModuleIO.h:91
	void Clear();

	// BrnGameDataModuleIO.h:99
	const RequestInterface<32768> * GetRequestInterface() const;

	// BrnGameDataModuleIO.h:103
	RequestInterface<32768> * GetRequestInterface();

	// BrnGameDataModuleIO.h:108
	AttribSysRequestInterface<32768> * GetAttribSysRequestInterface();

	// BrnGameDataModuleIO.h:112
	const AttribSysRequestInterface<32768> * GetAttribSysRequestInterface() const;

	// BrnGameDataModuleIO.h:116
	void SetIm2dDebugRenderBuffer(CgsGraphics::Im2dRenderBuffer *);

	// BrnGameDataModuleIO.h:119
	CgsGraphics::Im2dRenderBuffer * GetIm2dDebugRenderBuffer() const;

}

// BrnGameDataModuleIO.h:142
struct BrnResource::GameDataIO::OutputBuffer : public IOBuffer {
private:
	// BrnGameDataModuleIO.h:184
	const AllocatorList * mpAllocatorList;

	// BrnGameDataModuleIO.h:189
	FileSystemStatusInterface mFileSystemStatusInterface;

public:
	// BrnGameDataModuleIO.h:147
	void Construct();

	// BrnGameDataModuleIO.h:151
	bool Prepare();

	// BrnGameDataModuleIO.h:155
	bool Release();

	// BrnGameDataModuleIO.h:159
	void Destruct();

	// BrnGameDataModuleIO.h:163
	void Clear();

	// BrnGameDataModuleIO.h:167
	const AllocatorList * GetAllocatorList() const;

	// BrnGameDataModuleIO.h:171
	void SetAllocatorList(const AllocatorList *);

	// BrnGameDataModuleIO.h:178
	const FileSystemStatusInterface * GetFileSystemStatusInterface() const;

	// BrnGameDataModuleIO.h:179
	void SetFileSystemStatusInterface(const FileSystemStatusInterface *);

}

// BrnGameDataModuleIO.h:202
extern void AppendRequestInterface<4096>(const RequestInterface<4096> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:204
		CgsDev::StrStream lStrStream;

	}
}

// BrnGameDataModuleIO.h:202
extern void AppendRequestInterface<256>(const RequestInterface<256> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:204
		CgsDev::StrStream lStrStream;

	}
}

// BrnGameDataModuleIO.h:202
extern void AppendRequestInterface<1024>(const RequestInterface<1024> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:204
		CgsDev::StrStream lStrStream;

	}
}

// BrnGameDataModuleIO.h:202
extern void AppendRequestInterface<3072>(const RequestInterface<3072> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:204
		CgsDev::StrStream lStrStream;

	}
}

// BrnGameDataModuleIO.h:202
extern void AppendRequestInterface<512>(const RequestInterface<512> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:204
		CgsDev::StrStream lStrStream;

	}
}

