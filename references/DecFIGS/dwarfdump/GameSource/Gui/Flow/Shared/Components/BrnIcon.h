// BrnIcon.h:72
extern char[] macState;

// BrnIcon.h:42
struct BrnGui::IconComponent : public CgsGui::GuiComponent {
private:
	// BrnIcon.h:72
	extern char[] macState;

	// BrnIcon.h:73
	const char *const* mpStateIdentifiers;

	// BrnIcon.h:74
	uint32_t mStateIndex;

public:
	// BrnIcon.h:54
	void Construct(const char *, StateInterface *, const char *const*, const char *);

	// BrnIcon.h:59
	void SetState(uint32_t);

	// BrnIcon.h:64
	void SetState(const char *);

	// BrnIcon.h:90
	uint32_t GetState() const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct IconComponent {
	private:
		// BrnIcon.h:72
		extern char[] macState;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct IconComponent {
	public:
		// BrnIcon.h:90
		uint32_t GetState() const;

	private:
		// BrnIcon.h:72
		extern char[] macState;

	}

}

// BrnIcon.h:42
struct BrnGui::IconComponent : public CgsGui::GuiComponent {
private:
	// BrnIcon.cpp:25
	extern const char[10] macState;

	// BrnIcon.h:73
	const char *const* mpStateIdentifiers;

	// BrnIcon.h:74
	uint32_t mStateIndex;

public:
	// BrnIcon.cpp:47
	void Construct(const char *, StateInterface *, const char *const*, const char *);

	// BrnIcon.cpp:64
	void SetState(uint32_t);

	// BrnIcon.cpp:83
	void SetState(const char *);

	// BrnIcon.h:90
	uint32_t GetState() const;

}

// BrnIcon.h:42
struct BrnGui::IconComponent : public CgsGui::GuiComponent {
private:
	// BrnIcon.h:72
	extern char[] macState;

	// BrnIcon.h:73
	const char *const* mpStateIdentifiers;

	// BrnIcon.h:74
	uint32_t mStateIndex;

public:
	void IconComponent(const IconComponent &);

	void IconComponent();

	// BrnIcon.h:54
	void Construct(const char *, StateInterface *, const char *const*, const char *);

	// BrnIcon.h:59
	void SetState(uint32_t);

	// BrnIcon.h:64
	void SetState(const char *);

	// BrnIcon.h:90
	uint32_t GetState() const;

}

// BrnIcon.h:42
void BrnGui::IconComponent::IconComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

