// BrnPositionIndicator.h:95
extern char[] KAC_TEXTFIELD_NAME;

// BrnPositionIndicator.h:96
extern char[] KAC_MOVIECLIP_NAME;

// BrnPositionIndicator.h:98
extern char[] KAC_APT_VAR_NAME;

// BrnPositionIndicator.h:45
struct BrnGui::PositionIndicator : public CgsGui::GuiComponent {
private:
	// BrnPositionIndicator.h:93
	BrnGui::TextField mRacePositionTextField;

	// BrnPositionIndicator.cpp:26
	extern const char[9] KAC_TEXTFIELD_NAME;

	// BrnPositionIndicator.cpp:27
	extern const char[21] KAC_MOVIECLIP_NAME;

	// BrnPositionIndicator.cpp:28
	extern const char *[5] KAC_APTSTATE_NAMES;

	// BrnPositionIndicator.cpp:29
	extern const char[10] KAC_APT_VAR_NAME;

	// BrnPositionIndicator.cpp:30
	extern const char *[9] KAC_POSITION_NAMES;

	// BrnPositionIndicator.h:102
	bool mbVisible;

	// BrnPositionIndicator.h:103
	bool mbLoaded;

	// BrnPositionIndicator.h:104
	bool mbFirstFrame;

public:
	// BrnPositionIndicator.cpp:63
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnPositionIndicator.h:123
	bool IsVisible() const;

	// BrnPositionIndicator.cpp:86
	void SetVisible(bool);

	// BrnPositionIndicator.cpp:140
	void SetPosition(int32_t);

	// BrnPositionIndicator.h:139
	bool IsLoaded() const;

	// BrnPositionIndicator.h:156
	bool IsFirstFrame() const;

	// BrnPositionIndicator.cpp:123
	void SetLoaded();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PositionIndicator {
	public:
		// BrnPositionIndicator.h:156
		bool IsFirstFrame() const;

	private:
		// BrnPositionIndicator.h:95
		extern char[] KAC_TEXTFIELD_NAME;

		// BrnPositionIndicator.h:96
		extern char[] KAC_MOVIECLIP_NAME;

		// BrnPositionIndicator.h:98
		extern char[] KAC_APT_VAR_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PositionIndicator {
	public:
		PositionIndicator();

	private:
		// BrnPositionIndicator.h:95
		extern char[] KAC_TEXTFIELD_NAME;

		// BrnPositionIndicator.h:96
		extern char[] KAC_MOVIECLIP_NAME;

		// BrnPositionIndicator.h:98
		extern char[] KAC_APT_VAR_NAME;

	}

}

// BrnPositionIndicator.h:45
void BrnGui::PositionIndicator::PositionIndicator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

