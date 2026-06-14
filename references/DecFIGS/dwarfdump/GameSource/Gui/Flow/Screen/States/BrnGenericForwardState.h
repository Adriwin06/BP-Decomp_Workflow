// BrnGenericForwardState.h:42
struct BrnGui::GenericForwardState : public CgsGui::State {
public:
	void GenericForwardState(const GenericForwardState &);

	void GenericForwardState();

	// BrnGenericForwardState.h:48
	virtual void OnEnter();

	// BrnGenericForwardState.h:52
	virtual void OnLeave();

	// BrnGenericForwardState.h:56
	virtual void Update();

	// BrnGenericForwardState.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// BrnGenericForwardState.h:42
void BrnGui::GenericForwardState::GenericForwardState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

