// CgsFsm.h:25
namespace CgsFsm {
}

// CgsFsm.h:25
namespace CgsFsm {
	struct ScriptedFsm;

}

// CgsFsm.h:25
namespace CgsFsm {
	struct Fsm;

}

// CgsFsm.h:47
struct CgsFsm::Fsm {
protected:
	// CgsFsm.h:75
	CgsFsm::State * mpCurrentState;

public:
	// CgsFsm.h:53
	void Construct();

	// CgsFsm.h:57
	bool Release();

	// CgsFsm.h:62
	void SetState(CgsFsm::State *);

	// CgsFsm.h:66
	void Update();

	// CgsFsm.h:70
	void Render();

}

// CgsFsm.h:25
namespace CgsFsm {
	struct Fsm;

	struct State;

	// Declaration
	struct ScriptedFsm {
	public:
		ScriptedFsm();

	}

	struct ScriptedState;

}

// CgsFsm.h:25
namespace CgsFsm {
	struct Event;

	struct Variable;

	struct ScriptedState;

}

