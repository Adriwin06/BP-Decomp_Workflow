// CgsGuiComponent.h:54
extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiComponent {
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiComponent {
	public:
		// CgsGuiComponent.h:153
		uint32_t GetNameHash() const;

		// CgsGuiComponent.h:138
		const char * GetName() const;

		// Unknown accessibility
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiComponent {
	public:
		GuiComponent();

		CgsGui::GuiComponent & operator=(const CgsGui::GuiComponent &);

		// CgsGuiComponent.h:138
		const char * GetName() const;

		// Unknown accessibility
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiComponent.h:51
void CgsGui::GuiComponent::GuiComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiComponent.h:51
void CgsGui::GuiComponent::operator=(const const CgsGui::GuiComponent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiComponent {
	public:
		// CgsGuiComponent.h:138
		const char * GetName() const;

		// Unknown accessibility
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiComponent {
	public:
		// CgsGuiComponent.h:138
		const char * GetName() const;

		// CgsGuiComponent.h:153
		uint32_t GetNameHash() const;

		// CgsGuiComponent.h:123
		CgsLanguage::LanguageManager * GetLanguageManager() const;

		GuiComponent();

		CgsGui::GuiComponent & operator=(const CgsGui::GuiComponent &);

		// Unknown accessibility
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct GuiComponent {
	public:
		GuiComponent();

		// CgsGuiComponent.h:138
		const char * GetName() const;

		// Unknown accessibility
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiComponent {
	public:
		GuiComponent();

		// Unknown accessibility
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

// CgsGuiComponent.h:51
struct CgsGui::GuiComponent {
	int (*)(...) * _vptr.GuiComponent;

	// CgsGuiComponent.h:54
	extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

protected:
	// CgsGuiComponent.h:102
	char[128] macName;

	// CgsGuiComponent.h:103
	uint32_t muHashedName;

	// CgsGuiComponent.h:104
	StateInterface * mpStateInterface;

public:
	// CgsGuiComponent.cpp:117
	virtual void Construct(const char *, StateInterface *, const char *);

	// CgsGuiComponent.cpp:48
	void AddOutputAptViewState(const char *, const char *, bool);

	// CgsGuiComponent.h:138
	const char * GetName() const;

	// CgsGuiComponent.h:153
	uint32_t GetNameHash() const;

	// CgsGuiComponent.cpp:70
	void FillAptViewMessage(const char *, const char *, const char *, bool);

	// CgsGuiComponent.h:123
	LanguageManager * GetLanguageManager() const;

protected:
	// CgsGuiComponent.cpp:88
	void SetName(const char *, const char *);

	// CgsGuiComponent.h:167
	void SetStateInterface(StateInterface *);

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct GuiComponent {
		// CgsGuiComponent.h:54
		extern const uint8_t KU_MAX_COMPONENT_NAME_LEN = 128;

	}

}

