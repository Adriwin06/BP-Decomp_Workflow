// CgsVariable.h:27
namespace CgsFsm {
	struct ScriptedFsm;

}

// CgsVariable.h:27
namespace CgsFsm {
	struct Event;

	struct Variable;

	struct Fsm;

	struct State;

	struct LuaState;

	struct VariableString;

	struct VariableInt;

	struct VariableBool;

	struct ScriptedState;

	struct ScriptedFsm;

	struct FsmDebugComponent;

	struct DebugFsm;

	struct DebugStateIntro;

	struct DebugStateGame;

	struct DebugStateResults;

}

// CgsVariable.h:145
struct CgsFsm::VariableString : public CgsFsm::Variable {
protected:
	// CgsVariable.h:168
	char * mpcValue;

	// CgsVariable.h:169
	int32_t miBufferSize;

public:
	void VariableString(const VariableString &);

	void VariableString();

	// CgsVariable.h:272
	void Construct(CgsID, char *, int32_t);

	// CgsVariable.h:289
	const char * GetValue() const;

	// CgsVariable.cpp:120
	virtual void ToLua(LuaState *, const char *) const;

	// CgsVariable.cpp:137
	virtual void FromLua(LuaState *, const char *);

}

// CgsVariable.h:111
struct CgsFsm::VariableInt : public CgsFsm::Variable {
protected:
	// CgsVariable.h:133
	int32_t miValue;

public:
	void VariableInt(const VariableInt &);

	void VariableInt();

	// CgsVariable.h:238
	void Construct(CgsID, int32_t);

	// CgsVariable.h:254
	int32_t GetValue() const;

	// CgsVariable.cpp:86
	virtual void ToLua(LuaState *, const char *) const;

	// CgsVariable.cpp:103
	virtual void FromLua(LuaState *, const char *);

}

// CgsVariable.h:77
struct CgsFsm::VariableBool : public CgsFsm::Variable {
protected:
	// CgsVariable.h:99
	bool mbValue;

public:
	void VariableBool(const VariableBool &);

	void VariableBool();

	// CgsVariable.h:205
	void Construct(CgsID, bool);

	// CgsVariable.h:221
	bool GetValue() const;

	// CgsVariable.cpp:52
	virtual void ToLua(LuaState *, const char *) const;

	// CgsVariable.cpp:69
	virtual void FromLua(LuaState *, const char *);

}

// CgsVariable.h:49
struct CgsFsm::Variable {
	int (*)(...) * _vptr.Variable;

protected:
	// CgsVariable.h:65
	CgsID mId;

public:
	void Variable(const CgsFsm::Variable &);

	void Variable();

	// CgsVariable.h:188
	CgsID GetId() const;

	// CgsVariable.h:57
	virtual void ToLua(LuaState *, const char *) const;

	// CgsVariable.h:62
	virtual void FromLua(LuaState *, const char *);

}

// CgsVariable.h:145
void CgsFsm::VariableString::VariableString() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVariable.h:49
void CgsFsm::Variable::Variable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVariable.h:111
void CgsFsm::VariableInt::VariableInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVariable.h:77
void CgsFsm::VariableBool::VariableBool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

