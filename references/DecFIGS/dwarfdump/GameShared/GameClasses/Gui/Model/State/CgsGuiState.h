// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct State {
	public:
		State();

		// CgsGuiState.h:180
		const bool IsSaveLoadState() const;

		// CgsGuiState.h:167
		const bool IsVideoState() const;

		// CgsGuiState.h:153
		void SetInEventQueue(InputBuffer::GuiEventQueue *);

	}

}

// CgsGuiState.h:49
void CgsGui::State::State() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiState.h:49
struct CgsGui::State : public CgsFsm::ScriptedState {
protected:
	// CgsGuiState.h:112
	InputBuffer::GuiEventQueue * mpInGuiEventQueue;

	// CgsGuiState.h:113
	StateInterface * mpStateInterface;

	// CgsGuiState.h:115
	bool mbStateChangePending;

	// CgsGuiState.h:116
	char[16] macEvent;

	// CgsGuiState.h:119
	bool mbIsSaveLoadState;

	// CgsGuiState.h:120
	bool mbIsVideoState;

public:
	// CgsGuiState.cpp:43
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// CgsGuiState.cpp:64
	virtual void PreWorldUpdate();

	// CgsGuiState.h:138
	void SetStateInterface(StateInterface *);

	// CgsGuiState.h:153
	void SetInEventQueue(InputBuffer::GuiEventQueue *);

	// CgsGuiState.cpp:78
	void SendStateEvent(const char *);

	// CgsGuiState.h:167
	const bool IsVideoState() const;

	// CgsGuiState.h:180
	const bool IsSaveLoadState() const;

	// CgsGuiState.h:100
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// CgsGuiState.cpp:102
	virtual void PreUpdate();

	// CgsGuiState.cpp:116
	virtual void PostUpdate();

}

