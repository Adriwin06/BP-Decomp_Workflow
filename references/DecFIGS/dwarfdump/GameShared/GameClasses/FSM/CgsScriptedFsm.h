// CgsFsm.h:25
namespace CgsFsm {
	// Declaration
	struct ScriptedFsm {
	public:
		// CgsScriptedFsm.h:183
		void Construct();

		// CgsScriptedFsm.h:201
		void Destruct();

		// CgsScriptedFsm.h:215
		bool IsLuaResourceValid();

		// CgsScriptedFsm.h:232
		uint32_t GetSequenceNumber() const;

	}

}

// CgsScriptedFsm.h:63
void CgsFsm::ScriptedFsm::ScriptedFsm() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsScriptedFsm.h:63
struct CgsFsm::ScriptedFsm : public Fsm {
	int (*)(...) * _vptr.ScriptedFsm;

	// CgsScriptedFsm.cpp:33
	extern const char * KPC_GET_EVENT_VARIABLE_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:34
	extern const char * KPC_SET_EVENT_VARIABLE_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:35
	extern const char * KPC_GET_STATE_VARIABLE_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:36
	extern const char * KPC_SET_STATE_VARIABLE_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:37
	extern const char * KPC_GET_GLOBAL_VARIABLE_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:38
	extern const char * KPC_SET_GLOBAL_VARIABLE_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:39
	extern const char * KPC_GET_USED_STATES_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:40
	extern const char * KPC_GET_STATE_NAME_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:41
	extern const char * KPC_GET_NEXT_STATES_FUNCTION_NAME;

	// CgsScriptedFsm.cpp:42
	extern const char * KPC_GET_CURRENT_STATE_INDEX_FUNCTION_NAME;

private:
	// CgsScriptedFsm.h:162
	LuaState mLuaState;

	// CgsScriptedFsm.h:164
	uint32_t muSequenceNumber;

public:
	// CgsScriptedFsm.h:183
	void Construct();

	// CgsScriptedFsm.cpp:68
	bool Prepare(CgsResource::LuaCodeResource *, CgsMemory::HeapMalloc *, CgsID);

	// CgsScriptedFsm.cpp:95
	bool Release();

	// CgsScriptedFsm.h:201
	void Destruct();

	// CgsScriptedFsm.h:215
	bool IsLuaResourceValid();

	// CgsScriptedFsm.cpp:115
	void GetGlobalVariable(CgsFsm::Variable *);

	// CgsScriptedFsm.cpp:132
	void SetGlobalVariable(const CgsFsm::Variable *);

	// CgsScriptedFsm.cpp:149
	void GetStateVariable(CgsFsm::Variable *);

	// CgsScriptedFsm.cpp:181
	void GetUsedStates(int32_t *, int32_t *);

	// CgsScriptedFsm.cpp:218
	const ScriptedState * GetStateByIndex(int32_t);

	// CgsScriptedFsm.cpp:261
	void GetNextStates(int32_t, int32_t *, int32_t *);

	// CgsScriptedFsm.cpp:310
	int32_t GetCurrentStateIndex();

	// CgsScriptedFsm.cpp:166
	void SetStateVariable(const CgsFsm::Variable *);

	// CgsScriptedFsm.cpp:333
	virtual void SendEvent(const Event *);

	// CgsScriptedFsm.h:134
	virtual ScriptedState * GetState(int32_t);

	// CgsScriptedFsm.h:137
	virtual int32_t GetStateCount();

	// CgsScriptedFsm.h:232
	uint32_t GetSequenceNumber() const;

private:
	// CgsScriptedFsm.cpp:366
	void SetState(CgsID);

}

// CgsFsm.h:25
namespace CgsFsm {
	// Declaration
	struct ScriptedFsm {
	public:
		// CgsScriptedFsm.h:215
		bool IsLuaResourceValid();

	}

}

