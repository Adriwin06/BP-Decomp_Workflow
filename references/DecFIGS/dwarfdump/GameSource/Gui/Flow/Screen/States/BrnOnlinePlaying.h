// BrnOnlinePlaying.h:42
struct BrnGui::OnlinePlaying : public CgsGui::State {
private:
	// BrnOnlinePlaying.cpp:26
	extern const int32_t[5] maiEventToObserve;

	// BrnOnlinePlaying.cpp:35
	extern const int32_t miNumEventsObserved = 5;

public:
	// BrnOnlinePlaying.cpp:54
	virtual void OnEnter();

	// BrnOnlinePlaying.cpp:149
	virtual void OnLeave();

	// BrnOnlinePlaying.cpp:75
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlinePlaying.cpp:90
		using namespace CgsDev::Message;

		// BrnOnlinePlaying.cpp:126
		using namespace CgsDev::Message;

	}

private:
	// BrnOnlinePlaying.cpp:170
	void HandleControllerInput(const CgsModule::Event *);

}

