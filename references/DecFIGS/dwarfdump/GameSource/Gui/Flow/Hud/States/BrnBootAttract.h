// BrnBootAttract.h:68
extern int32_t[] maiEventToObserve;

// BrnBootAttract.h:69
extern const int32_t miNumEventsObserved;

// BrnBootAttract.h:43
struct BrnGui::BootAttract : public CgsGui::State {
private:
	// BrnBootAttract.cpp:25
	extern const int32_t[1] maiEventToObserve;

	// BrnBootAttract.cpp:30
	extern const int32_t miNumEventsObserved = 1;

public:
	// BrnBootAttract.cpp:49
	virtual void OnEnter();

	// BrnBootAttract.cpp:114
	virtual void OnLeave();

	// BrnBootAttract.cpp:70
	virtual void Update();

	// BrnBootAttract.h:61
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BootAttract {
	public:
		BootAttract();

	private:
		// BrnBootAttract.h:68
		extern int32_t[] maiEventToObserve;

		// BrnBootAttract.h:69
		extern const int32_t miNumEventsObserved;

	}

}

// BrnBootAttract.h:43
void BrnGui::BootAttract::BootAttract() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

