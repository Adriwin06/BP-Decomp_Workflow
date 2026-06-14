// CgsGuiStateMachine.h:81
extern const int32_t KI_MAX_NUM_STATES = 128;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct StateMachine {
	public:
		// CgsGuiStateMachine.h:118
		CgsGui::State * GetCurrentState();

	private:
		// CgsGuiStateMachine.h:81
		extern const int32_t KI_MAX_NUM_STATES = 128;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct StateMachine {
	public:
		// CgsGuiStateMachine.h:118
		CgsGui::State * GetCurrentState();

		// CgsGuiStateMachine.h:104
		void SetStateInterface(StateInterface *);

		// CgsGuiStateMachine.h:161
		const CgsGui::State * GetStateByIndex(int32_t);

		// CgsGuiStateMachine.h:175
		void SetInEventQueue(InputBuffer::GuiEventQueue *);

	private:
		// CgsGuiStateMachine.h:81
		extern const int32_t KI_MAX_NUM_STATES = 128;

	}

}

// CgsGuiStateMachine.h:45
struct CgsGui::StateMachine : public CgsFsm::ScriptedFsm {
private:
	// CgsGuiStateMachine.h:81
	extern const int32_t KI_MAX_NUM_STATES = 128;

	// CgsGuiStateMachine.h:83
	int32_t miNumStates;

	// CgsGuiStateMachine.h:84
	CgsGui::State *[128] mapGuiStates;

	// CgsGuiStateMachine.h:86
	StateInterface * mpStateInterface;

public:
	void StateMachine(const StateMachine &);

	void StateMachine();

	// CgsGuiStateMachine.h:104
	void SetStateInterface(StateInterface *);

	// CgsGuiStateMachine.h:175
	void SetInEventQueue(InputBuffer::GuiEventQueue *);

	// CgsGuiStateMachine.h:118
	CgsGui::State * GetCurrentState();

	// CgsGuiStateMachine.h:146
	virtual CgsFsm::ScriptedState * GetState(int32_t);

	// CgsGuiStateMachine.h:133
	virtual int32_t GetStateCount();

	// CgsGuiStateMachine.h:73
	void SetStates(CgsGui::State **, int32_t);

	// CgsGuiStateMachine.h:161
	const CgsGui::State * GetStateByIndex(int32_t);

}

// CgsGuiStateMachine.h:45
void CgsGui::StateMachine::StateMachine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct StateMachine {
	public:
		// CgsGuiStateMachine.cpp:43
		void SetStates(State **, int32_t);

	private:
		// CgsGuiStateMachine.h:81
		extern const int32_t KI_MAX_NUM_STATES = 128;

	}

}

