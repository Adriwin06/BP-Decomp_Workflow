// CgsFsm.h:25
namespace CgsFsm {
	// Declaration
	struct State {
	public:
		// CgsState.h:63
		virtual void Render();

	}

}

// CgsVariable.h:27
namespace CgsFsm {
	// Declaration
	struct State {
	public:
		// CgsState.h:63
		virtual void Render();

	}

}

// CgsFsm.h:25
namespace CgsFsm {
	// Declaration
	struct State {
	public:
		// CgsState.h:63
		virtual void Render();

		State();

	}

}

// CgsState.h:45
void CgsFsm::State::State() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsState.h:45
struct CgsFsm::State {
	int (*)(...) * _vptr.State;

public:
	// CgsState.h:48
	virtual void OnEnter();

	// CgsState.h:51
	virtual void OnLeave();

	// CgsState.h:54
	virtual void Update();

	// CgsState.cpp:44
	virtual void PreUpdate();

	// CgsState.cpp:58
	virtual void PostUpdate();

	// CgsState.h:63
	virtual void Render();

}

