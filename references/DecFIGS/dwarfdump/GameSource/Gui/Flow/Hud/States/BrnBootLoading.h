// BrnBootLoading.h:67
extern int32_t[] maiEventToObserve;

// BrnBootLoading.h:68
extern const int32_t miNumEventsObserved;

// BrnBootLoading.h:42
struct BrnGui::BootLoading : public CgsGui::State {
private:
	// BrnBootLoading.cpp:25
	extern const int32_t[2] maiEventToObserve;

	// BrnBootLoading.cpp:31
	extern const int32_t miNumEventsObserved = 2;

	// BrnBootLoading.h:70
	bool mbScreenPlaying;

public:
	// BrnBootLoading.cpp:51
	virtual void OnEnter();

	// BrnBootLoading.cpp:130
	virtual void OnLeave();

	// BrnBootLoading.cpp:76
	virtual void Update();

	// BrnBootLoading.h:60
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BootLoading {
	public:
		BootLoading();

	private:
		// BrnBootLoading.h:67
		extern int32_t[] maiEventToObserve;

		// BrnBootLoading.h:68
		extern const int32_t miNumEventsObserved;

	}

}

// BrnBootLoading.h:42
void BrnGui::BootLoading::BootLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

