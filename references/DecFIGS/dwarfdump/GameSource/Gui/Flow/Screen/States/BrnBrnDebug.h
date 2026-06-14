// BrnBrnDebug.h:67
extern int32_t[] maiEventToObserve;

// BrnBrnDebug.h:68
extern const int32_t miNumEventsObserved;

// BrnBrnDebug.h:42
struct BrnGui::BrnDebug : public CgsGui::State {
private:
	// BrnBrnDebug.cpp:27
	extern const int32_t[2] maiEventToObserve;

	// BrnBrnDebug.cpp:33
	extern const int32_t miNumEventsObserved = 2;

public:
	// BrnBrnDebug.cpp:52
	virtual void OnEnter();

	// BrnBrnDebug.cpp:132
	virtual void OnLeave();

	// BrnBrnDebug.cpp:73
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBrnDebug.cpp:109
		using namespace CgsDev::Message;

	}

	// BrnBrnDebug.h:60
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BrnDebug {
	public:
		BrnDebug();

	private:
		// BrnBrnDebug.h:67
		extern int32_t[] maiEventToObserve;

		// BrnBrnDebug.h:68
		extern const int32_t miNumEventsObserved;

	}

}

// BrnBrnDebug.h:42
void BrnGui::BrnDebug::BrnDebug() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

