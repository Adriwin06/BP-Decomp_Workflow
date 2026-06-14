// BrnNull.h:42
struct BrnGui::NullState : public CgsGui::State {
public:
	// BrnNull.cpp:40
	virtual void OnEnter();

	// BrnNull.cpp:70
	virtual void OnLeave();

	// BrnNull.cpp:55
	virtual void Update();

	// BrnNull.h:60
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// BrnNull.h:42
void BrnGui::NullState::NullState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

