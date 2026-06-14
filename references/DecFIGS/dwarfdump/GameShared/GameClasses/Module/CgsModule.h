// CgsModule.h:60
struct CgsModule::Module {
	int (*)(...) * _vptr.Module;

protected:
	// CgsModule.h:113
	bool mbIsNewModule;

public:
	// CgsModule.h:67
	virtual void Construct();

	// CgsModule.h:71
	virtual bool Prepare();

	// CgsModule.h:75
	virtual bool Release();

	// CgsModule.h:79
	virtual void Destruct();

	// CgsModule.h:83
	virtual void Update();

	// CgsModule.h:90
	virtual void SetMultiThreaded(bool);

	// CgsModule.h:95
	virtual void LockForInput();

	// CgsModule.h:99
	virtual void UnlockForInput();

	// CgsModule.h:103
	virtual void LockForOutput();

	// CgsModule.h:107
	virtual void UnlockForOutput();

protected:
	// CgsModule.h:119
	virtual bool DestroyInputDataStructure(DataStructure *);

	// CgsModule.h:123
	virtual bool DestroyOutputDataStructure(DataStructure *);

	// CgsModule.h:127
	virtual bool PrepareDataStructures(DataStructure *, DataStructure *);

	// CgsModule.h:131
	virtual bool ReleaseDataStructures(DataStructure *, DataStructure *);

}

// CgsModule.h:60
struct CgsModule::Module {
	int (*)(...) * _vptr.Module;

protected:
	// CgsModule.h:113
	bool mbIsNewModule;

public:
	// CgsModule.h:67
	virtual void Construct();

	// CgsModule.h:71
	virtual bool Prepare();

	// CgsModule.h:75
	virtual bool Release();

	// CgsModule.h:79
	virtual void Destruct();

	// CgsModule.h:83
	virtual void Update();

	// CgsModule.h:90
	virtual void SetMultiThreaded(bool);

	// CgsModule.h:95
	virtual void LockForInput();

	// CgsModule.h:99
	virtual void UnlockForInput();

	// CgsModule.h:103
	virtual void LockForOutput();

	// CgsModule.h:107
	virtual void UnlockForOutput();

protected:
	// CgsModule.h:119
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModule.h:123
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModule.h:127
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModule.h:131
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

// CgsModule.h:60
struct CgsModule::Module {
	int (*)(...) * _vptr.Module;

protected:
	// CgsModule.h:113
	bool mbIsNewModule;

public:
	void Module(const Module &);

	void Module();

	// CgsModule.h:67
	virtual void Construct();

	// CgsModule.h:71
	virtual bool Prepare();

	// CgsModule.h:75
	virtual bool Release();

	// CgsModule.h:79
	virtual void Destruct();

	// CgsModule.h:83
	virtual void Update();

	// CgsModule.h:90
	virtual void SetMultiThreaded(bool);

	// CgsModule.h:95
	virtual void LockForInput();

	// CgsModule.h:99
	virtual void UnlockForInput();

	// CgsModule.h:103
	virtual void LockForOutput();

	// CgsModule.h:107
	virtual void UnlockForOutput();

protected:
	// CgsModule.h:119
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsModule.h:123
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsModule.h:127
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsModule.h:131
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

}

// CgsModule.h:60
void CgsModule::Module::Module() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

