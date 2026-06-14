// CgsEventReceiverQueue.h:30
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(DataStructure *, DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(DataStructure *, DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual DataStructure * CreateInputDataStructure();

		// CgsModuleSingleBuffered.h:129
		virtual DataStructure * CreateOutputDataStructure();

	}

}

// CgsIOBuffer.h:29
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual CgsModule::DataStructure * CreateInputDataStructure();

		// CgsModuleSingleBuffered.h:129
		virtual CgsModule::DataStructure * CreateOutputDataStructure();

	}

}

// CgsIOBuffer.h:29
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	public:
		// CgsModuleSingleBuffered.h:368
		CgsModule::DataStructure * GetOutputStructure() const;

	protected:
		// CgsModuleSingleBuffered.h:282
		CgsModule::DataStructure * LockOutputForWrite();

		// CgsModuleSingleBuffered.h:230
		CgsModule::DataStructure * LockInputForRead();

		// CgsModuleSingleBuffered.h:265
		void UnlockInputForRead();

		// CgsModuleSingleBuffered.h:318
		void UnlockOutputForWrite();

		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual CgsModule::DataStructure * CreateInputDataStructure();

		// CgsModuleSingleBuffered.h:129
		virtual CgsModule::DataStructure * CreateOutputDataStructure();

		// CgsModuleSingleBuffered.h:352
		CgsModule::DataStructure * GetInputStructure() const;

	}

}

// CgsIOBuffer.h:29
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:265
		void UnlockInputForRead();

	}

}

// CgsIOBuffer.h:29
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(DataStructure *, DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(DataStructure *, DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual DataStructure * CreateInputDataStructure();

		// CgsModuleSingleBuffered.h:129
		virtual DataStructure * CreateOutputDataStructure();

	}

}

// CgsEventReceiverQueue.h:30
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual CgsModule::DataStructure * CreateInputDataStructure();

		// CgsModuleSingleBuffered.h:129
		virtual CgsModule::DataStructure * CreateOutputDataStructure();

	}

}

// CgsIOBuffer.h:29
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:129
		virtual CgsModule::DataStructure * CreateOutputDataStructure();

		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual CgsModule::DataStructure * CreateInputDataStructure();

	}

}

// CgsModuleSingleBuffered.h:42
void CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModuleSingleBuffered.h:42
void CgsModule::ModuleSingleBuffered::ModuleSingleBuffered() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsIOBuffer.h:29
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	public:
		// CgsModuleSingleBuffered.h:368
		CgsModule::DataStructure * GetOutputStructure() const;

	protected:
		// CgsModuleSingleBuffered.h:282
		CgsModule::DataStructure * LockOutputForWrite();

		// CgsModuleSingleBuffered.h:230
		CgsModule::DataStructure * LockInputForRead();

		// CgsModuleSingleBuffered.h:265
		void UnlockInputForRead();

		// CgsModuleSingleBuffered.h:318
		void UnlockOutputForWrite();

	}

}

// CgsEventReceiverQueue.h:30
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
	protected:
		// CgsModuleSingleBuffered.h:133
		virtual bool DestroyInputDataStructure(DataStructure *);

		// CgsModuleSingleBuffered.h:137
		virtual bool DestroyOutputDataStructure(DataStructure *);

		// CgsModuleSingleBuffered.h:141
		virtual bool PrepareDataStructures(DataStructure *, DataStructure *);

		// CgsModuleSingleBuffered.h:145
		virtual bool ReleaseDataStructures(DataStructure *, DataStructure *);

		// CgsModuleSingleBuffered.h:125
		virtual DataStructure * CreateInputDataStructure();

		// CgsModuleSingleBuffered.h:129
		virtual DataStructure * CreateOutputDataStructure();

		// CgsModuleSingleBuffered.h:352
		DataStructure * GetInputStructure() const;

	}

}

// CgsDataBuffer.h:30
namespace CgsModule {
	// Declaration
	struct ModuleSingleBuffered {
		// CgsModuleSingleBuffered.h:48
		enum EManagerPrepareStage {
			E_MANAGERPREPARESTAGE_START = 0,
			E_MANAGERPREPARESTAGE_INPUT = 1,
			E_MANAGERPREPARESTAGE_ALLOCINPUT = 2,
			E_MANAGERPREPARESTAGE_OUTPUT = 3,
			E_MANAGERPREPARESTAGE_ALLOCOUTPUT = 4,
			E_MANAGERPREPARESTAGE_DATASTRUCTURES = 5,
			E_MANAGERPREPARESTAGE_DONE = 6,
		}

		// CgsModuleSingleBuffered.h:60
		enum EManagerReleaseStage {
			E_MANAGERRELEASESTAGE_START = 0,
			E_MANAGERRELEASESTAGE_DATASTRUCTURES = 1,
			E_MANAGERRELEASESTAGE_FREEOUTPUT = 2,
			E_MANAGERRELEASESTAGE_OUTPUT = 3,
			E_MANAGERRELEASESTAGE_FREEINPUT = 4,
			E_MANAGERRELEASESTAGE_INPUT = 5,
			E_MANAGERRELEASESTAGE_DONE = 6,
		}

	}

}

// CgsModuleSingleBuffered.h:42
struct CgsModule::ModuleSingleBuffered : public CgsModule::Module {
private:
	// CgsModuleSingleBuffered.h:172
	CgsModule::ModuleSingleBuffered::EManagerPrepareStage mePrepareStage;

	// CgsModuleSingleBuffered.h:173
	CgsModule::ModuleSingleBuffered::EManagerReleaseStage meReleaseStage;

	// CgsModuleSingleBuffered.h:176
	DataBuffer mInputBuffer;

	// CgsModuleSingleBuffered.h:177
	DataBuffer mOutputBuffer;

	// CgsModuleSingleBuffered.h:178
	CgsModule::DataStructure * mpInputStructure;

	// CgsModuleSingleBuffered.h:179
	CgsModule::DataStructure * mpOutputStructure;

public:
	// CgsModuleSingleBuffered.cpp:36
	virtual void Construct();

	// CgsModuleSingleBuffered.cpp:60
	virtual bool Prepare();

	// CgsModuleSingleBuffered.cpp:194
	virtual bool Release();

	// CgsModuleSingleBuffered.cpp:326
	virtual void Destruct();

	// CgsModuleSingleBuffered.cpp:346
	virtual void Update();

	// CgsModuleSingleBuffered.cpp:362
	virtual void SetMultiThreaded(bool);

	// CgsModuleSingleBuffered.h:368
	CgsModule::DataStructure * GetOutputStructure() const;

	// CgsModuleSingleBuffered.cpp:382
	virtual void LockForInput();

	// CgsModuleSingleBuffered.cpp:398
	virtual void UnlockForInput();

	// CgsModuleSingleBuffered.cpp:414
	virtual void LockForOutput();

	// CgsModuleSingleBuffered.cpp:430
	virtual void UnlockForOutput();

protected:
	// CgsModuleSingleBuffered.h:125
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsModuleSingleBuffered.h:129
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsModuleSingleBuffered.h:133
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBuffered.h:137
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModuleSingleBuffered.h:141
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBuffered.h:145
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModuleSingleBuffered.h:230
	CgsModule::DataStructure * LockInputForRead();

	// CgsModuleSingleBuffered.h:265
	void UnlockInputForRead();

	// CgsModuleSingleBuffered.h:282
	CgsModule::DataStructure * LockOutputForWrite();

	// CgsModuleSingleBuffered.h:318
	void UnlockOutputForWrite();

	// CgsModuleSingleBuffered.h:352
	CgsModule::DataStructure * GetInputStructure() const;

private:
	// CgsModuleSingleBuffered.h:212
	CgsModule::DataStructure * LockInputForWrite();

	// CgsModuleSingleBuffered.h:248
	void UnlockInputForWrite();

	// CgsModuleSingleBuffered.h:300
	CgsModule::DataStructure * LockOutputForRead();

	// CgsModuleSingleBuffered.h:335
	void UnlockOutputForRead();

}

