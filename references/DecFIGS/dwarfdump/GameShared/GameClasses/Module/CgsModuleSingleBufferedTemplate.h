// CgsModuleSingleBufferedTemplate.h:47
struct CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer> : public CgsModule::ModuleSingleBuffered {
private:
	// CgsModuleSingleBufferedTemplate.h:241
	InputBuffer mInputBuffer;

	// CgsModuleSingleBufferedTemplate.h:242
	OutputBuffer mOutputBuffer;

public:
	// CgsModuleSingleBufferedTemplate.h:52
	const InputBuffer * SafeLockInputForRead();

	// CgsModuleSingleBufferedTemplate.h:61
	OutputBuffer * SafeLockOutputForWrite();

	// CgsModuleSingleBufferedTemplate.h:70
	InputBuffer * SafeGetInputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:79
	OutputBuffer * SafeGetOutputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:88
	void ClearInputBuffer();

	// CgsModuleSingleBufferedTemplate.h:97
	void ClearOutputBuffer();

protected:
	// CgsModuleSingleBufferedTemplate.h:120
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:143
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:163
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:184
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:205
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:227
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

// CgsModuleSingleBufferedTemplate.h:47
struct CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer> : public CgsModule::ModuleSingleBuffered {
private:
	// CgsModuleSingleBufferedTemplate.h:241
	InputBuffer mInputBuffer;

	// CgsModuleSingleBufferedTemplate.h:242
	OutputBuffer mOutputBuffer;

public:
	// CgsModuleSingleBufferedTemplate.h:52
	const InputBuffer * SafeLockInputForRead();

	// CgsModuleSingleBufferedTemplate.h:61
	OutputBuffer * SafeLockOutputForWrite();

	// CgsModuleSingleBufferedTemplate.h:70
	InputBuffer * SafeGetInputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:79
	OutputBuffer * SafeGetOutputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:88
	void ClearInputBuffer();

	// CgsModuleSingleBufferedTemplate.h:97
	void ClearOutputBuffer();

protected:
	// CgsModuleSingleBufferedTemplate.h:120
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:143
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:163
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:184
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:205
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:227
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

// CgsModuleSingleBufferedTemplate.h:47
struct CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer> : public CgsModule::ModuleSingleBuffered {
private:
	// CgsModuleSingleBufferedTemplate.h:241
	InputBuffer mInputBuffer;

	// CgsModuleSingleBufferedTemplate.h:242
	OutputBuffer mOutputBuffer;

public:
	void ~ModuleSingleBufferedTemplate();

	void ModuleSingleBufferedTemplate(const ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer> &);

	void ModuleSingleBufferedTemplate();

	// CgsModuleSingleBufferedTemplate.h:52
	const InputBuffer * SafeLockInputForRead();

	// CgsModuleSingleBufferedTemplate.h:61
	OutputBuffer * SafeLockOutputForWrite();

	// CgsModuleSingleBufferedTemplate.h:70
	InputBuffer * SafeGetInputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:79
	OutputBuffer * SafeGetOutputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:88
	void ClearInputBuffer();

	// CgsModuleSingleBufferedTemplate.h:97
	void ClearOutputBuffer();

protected:
	// CgsModuleSingleBufferedTemplate.h:120
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:143
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:163
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:184
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:205
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:227
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

// CgsModuleSingleBufferedTemplate.h:47
struct CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer> : public CgsModule::ModuleSingleBuffered {
private:
	// CgsModuleSingleBufferedTemplate.h:241
	InputBuffer mInputBuffer;

	// CgsModuleSingleBufferedTemplate.h:242
	OutputBuffer mOutputBuffer;

public:
	void ~ModuleSingleBufferedTemplate();

	void ModuleSingleBufferedTemplate(const ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer> &);

	void ModuleSingleBufferedTemplate();

	// CgsModuleSingleBufferedTemplate.h:52
	const InputBuffer * SafeLockInputForRead();

	// CgsModuleSingleBufferedTemplate.h:61
	OutputBuffer * SafeLockOutputForWrite();

	// CgsModuleSingleBufferedTemplate.h:70
	InputBuffer * SafeGetInputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:79
	OutputBuffer * SafeGetOutputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:88
	void ClearInputBuffer();

	// CgsModuleSingleBufferedTemplate.h:97
	void ClearOutputBuffer();

protected:
	// CgsModuleSingleBufferedTemplate.h:120
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:143
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:163
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:184
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:205
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:227
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

// CgsModuleSingleBufferedTemplate.h:47
void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::~ModuleSingleBufferedTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModuleSingleBufferedTemplate.h:47
void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::ModuleSingleBufferedTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModuleSingleBufferedTemplate.h:47
void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::ModuleSingleBufferedTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModuleSingleBufferedTemplate.h:47
void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::~ModuleSingleBufferedTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModuleSingleBufferedTemplate.h:47
struct CgsModule::ModuleSingleBufferedTemplate<CgsGraphics::FontIO::InputBuffer,CgsGraphics::FontIO::OutputBuffer> : public CgsModule::ModuleSingleBuffered {
private:
	// CgsModuleSingleBufferedTemplate.h:241
	InputBuffer mInputBuffer;

	// CgsModuleSingleBufferedTemplate.h:242
	OutputBuffer mOutputBuffer;

public:
	// CgsModuleSingleBufferedTemplate.h:52
	const InputBuffer * SafeLockInputForRead();

	// CgsModuleSingleBufferedTemplate.h:61
	OutputBuffer * SafeLockOutputForWrite();

	// CgsModuleSingleBufferedTemplate.h:70
	InputBuffer * SafeGetInputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:79
	OutputBuffer * SafeGetOutputStructure() const;

	// CgsModuleSingleBufferedTemplate.h:88
	void ClearInputBuffer();

	// CgsModuleSingleBufferedTemplate.h:97
	void ClearOutputBuffer();

protected:
	// CgsModuleSingleBufferedTemplate.h:120
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:143
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsModuleSingleBufferedTemplate.h:163
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:184
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:205
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBufferedTemplate.h:227
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

