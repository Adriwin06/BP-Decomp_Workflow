// CgsFsm.h:25
namespace CgsFsm {
	// Declaration
	struct ScriptedState {
	public:
		// CgsScriptedState.h:79
		CgsID GetId() const;

	}

}

// CgsFsm.h:25
namespace CgsFsm {
	// Declaration
	struct ScriptedState {
	public:
		ScriptedState();

		// CgsScriptedState.h:79
		CgsID GetId() const;

	}

}

// CgsScriptedState.h:48
void CgsFsm::ScriptedState::ScriptedState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsScriptedState.h:48
struct CgsFsm::ScriptedState : public State {
protected:
	// CgsScriptedState.h:59
	CgsID mId;

	// CgsScriptedState.h:60
	CgsFsm::ScriptedFsm * mpFsm;

public:
	// CgsScriptedState.cpp:55
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// CgsScriptedState.h:79
	CgsID GetId() const;

}

