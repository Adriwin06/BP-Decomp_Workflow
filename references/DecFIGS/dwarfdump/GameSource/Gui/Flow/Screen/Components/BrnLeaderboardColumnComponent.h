// BrnLeaderboardColumnComponent.h:72
extern const int8_t KI_MAX_CELLS = 8;

// BrnLeaderboardColumnComponent.h:43
struct BrnGui::LeaderboardColumnComponent : public CgsGui::GuiComponent {
private:
	// BrnLeaderboardColumnComponent.h:72
	extern const int8_t KI_MAX_CELLS = 8;

	// BrnLeaderboardColumnComponent.cpp:21
	extern const char *[8] KAPC_CELL_STRINGS;

	// BrnLeaderboardColumnComponent.h:76
	int8_t miCellCount;

public:
	// BrnLeaderboardColumnComponent.cpp:54
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnLeaderboardColumnComponent.cpp:75
	void Init(const char *, int8_t, int8_t, int32_t);

	// BrnLeaderboardColumnComponent.cpp:111
	void SetCell(const char *);

	// BrnLeaderboardColumnComponent.cpp:130
	void FinaliseColumn();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LeaderboardColumnComponent {
	public:
		LeaderboardColumnComponent();

	private:
		// BrnLeaderboardColumnComponent.h:72
		extern const int8_t KI_MAX_CELLS = 8;

	}

}

// BrnLeaderboardColumnComponent.h:43
void BrnGui::LeaderboardColumnComponent::LeaderboardColumnComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

