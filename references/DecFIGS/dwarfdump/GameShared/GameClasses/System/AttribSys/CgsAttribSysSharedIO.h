// CgsAttribSysSharedIO.h:65
struct CgsAttribSys::AttribSysIO::AttribSysRequestQueue<512> : public VariableEventQueue<512,16> {
}

// CgsAttribSysSharedIO.h:82
struct CgsAttribSys::AttribSysIO::AttribSysRequestInterface<512> {
private:
	// CgsAttribSysSharedIO.h:151
	AttribSysRequestQueue<512> mRequestQueue;

public:
	// CgsAttribSysSharedIO.h:273
	bool RegisterVault(BaseEventReceiverQueue *, ResourceHandle, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO.h:299
	bool RegisterVault(BaseEventReceiverQueue *, ResourceHandle, int, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO.h:333
	bool RegisterSchema(BaseEventReceiverQueue *, void *, int, void *, int);

	// CgsAttribSysSharedIO.h:372
	bool UnregisterVault(BaseEventReceiverQueue *, ResourceHandle);

	// CgsAttribSysSharedIO.h:396
	bool UnregisterVault(BaseEventReceiverQueue *, ResourceHandle, int);

	// CgsAttribSysSharedIO.h:169
	void Construct();

	// CgsAttribSysSharedIO.h:190
	void Clear();

	// CgsAttribSysSharedIO.h:231
	AttribSysRequestQueue<512> * GetRequestQueue();

	// CgsAttribSysSharedIO.h:251
	const AttribSysRequestQueue<512> * GetRequestQueue() const;

}

// CgsAttribSysSharedIO.h:65
struct CgsAttribSys::AttribSysIO::AttribSysRequestQueue<2048> : public VariableEventQueue<2048,16> {
}

// CgsAttribSysSharedIO.h:82
struct CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048> {
private:
	// CgsAttribSysSharedIO.h:151
	AttribSysRequestQueue<2048> mRequestQueue;

public:
	// CgsAttribSysSharedIO.h:273
	bool RegisterVault(BaseEventReceiverQueue *, ResourceHandle, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO.h:299
	bool RegisterVault(BaseEventReceiverQueue *, ResourceHandle, int, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO.h:333
	bool RegisterSchema(BaseEventReceiverQueue *, void *, int, void *, int);

	// CgsAttribSysSharedIO.h:372
	bool UnregisterVault(BaseEventReceiverQueue *, ResourceHandle);

	// CgsAttribSysSharedIO.h:396
	bool UnregisterVault(BaseEventReceiverQueue *, ResourceHandle, int);

	// CgsAttribSysSharedIO.h:169
	void Construct();

	// CgsAttribSysSharedIO.h:190
	void Clear();

	// CgsAttribSysSharedIO.h:231
	AttribSysRequestQueue<2048> * GetRequestQueue();

	// CgsAttribSysSharedIO.h:251
	const AttribSysRequestQueue<2048> * GetRequestQueue() const;

}

// CgsAttribSysSharedIO.h:65
struct CgsAttribSys::AttribSysIO::AttribSysRequestQueue<32768> : public VariableEventQueue<32768,16> {
}

// CgsAttribSysSharedIO.h:82
struct CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768> {
private:
	// CgsAttribSysSharedIO.h:151
	AttribSysRequestQueue<32768> mRequestQueue;

public:
	// CgsAttribSysSharedIO.h:273
	bool RegisterVault(BaseEventReceiverQueue *, ResourceHandle, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO.h:299
	bool RegisterVault(BaseEventReceiverQueue *, ResourceHandle, int, CgsAttribSys::AttribSysIO::EAttribSysVaultType);

	// CgsAttribSysSharedIO.h:333
	bool RegisterSchema(BaseEventReceiverQueue *, void *, int, void *, int);

	// CgsAttribSysSharedIO.h:372
	bool UnregisterVault(BaseEventReceiverQueue *, ResourceHandle);

	// CgsAttribSysSharedIO.h:396
	bool UnregisterVault(BaseEventReceiverQueue *, ResourceHandle, int);

	// CgsAttribSysSharedIO.h:169
	void Construct();

	// CgsAttribSysSharedIO.h:190
	void Clear();

	// CgsAttribSysSharedIO.h:231
	AttribSysRequestQueue<32768> * GetRequestQueue();

	// CgsAttribSysSharedIO.h:251
	const AttribSysRequestQueue<32768> * GetRequestQueue() const;

}

// CgsAttribSysSharedIO.h:211
extern void Append<2048>(const AttribSysRequestInterface<2048> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysSharedIO.h:211
extern void Append<512>(const AttribSysRequestInterface<512> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysSharedIO.h:211
extern void Append<32768>(const AttribSysRequestInterface<32768> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysSharedIO.h:211
extern void Append<2048>(const AttribSysRequestInterface<2048> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<2048,16>::Append<2048, 16>(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

