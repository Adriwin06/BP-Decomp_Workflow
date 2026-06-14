// BrnMenuComponent.h:57
extern const int32_t KI_MAX_ITEMS_PER_MENU = 16;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuComponent {
	public:
		// BrnMenuComponent.h:136
		void SetText(int32_t, const char *);

	protected:
		// BrnMenuComponent.h:169
		MenuItem * GetSelectable(int32_t);

		// Unknown accessibility
		// BrnMenuComponent.h:57
		extern const int32_t KI_MAX_ITEMS_PER_MENU = 16;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuComponent {
	protected:
		// BrnMenuComponent.h:169
		MenuItem * GetSelectable(int32_t);

	public:
		// BrnMenuComponent.h:136
		void SetText(int32_t, const char *);

		// BrnMenuComponent.h:154
		void SetId(int32_t, uint64_t);

		// Unknown accessibility
		// BrnMenuComponent.h:57
		extern const int32_t KI_MAX_ITEMS_PER_MENU = 16;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MenuComponent {
	protected:
		// BrnMenuComponent.h:169
		MenuItem * GetSelectable(int32_t);

	public:
		// BrnMenuComponent.h:136
		void SetText(int32_t, const char *);

		// Unknown accessibility
		// BrnMenuComponent.h:57
		extern const int32_t KI_MAX_ITEMS_PER_MENU = 16;

	}

}

// BrnMenuComponent.h:54
struct BrnGui::MenuComponent : public SelectableGroup {
	// BrnMenuComponent.h:57
	extern const int32_t KI_MAX_ITEMS_PER_MENU = 16;

private:
	// BrnMenuComponent.h:121
	BrnGui::MenuItem[16] maItems;

	// BrnMenuComponent.h:122
	int32_t miMaxItems;

public:
	// BrnMenuComponent.cpp:45
	void Construct(const char *, StateInterface *, int32_t, const char *, uint64_t);

	// BrnMenuComponent.cpp:79
	void SetupMenu(int32_t, bool);

	// BrnMenuComponent.h:136
	void SetText(int32_t, const char *);

	// BrnMenuComponent.h:154
	void SetId(int32_t, uint64_t);

	// BrnMenuComponent.cpp:121
	virtual void Clear();

	// BrnMenuComponent.cpp:144
	virtual bool HighlightNext();

	// BrnMenuComponent.cpp:160
	virtual bool HighlightPrevious();

	// BrnMenuComponent.h:184
	const BrnGui::MenuItem * GetROSelectable(int32_t) const;

	// BrnMenuComponent.cpp:195
	void DisableSelectable(int32_t);

	// BrnMenuComponent.cpp:175
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

protected:
	// BrnMenuComponent.h:169
	BrnGui::MenuItem * GetSelectable(int32_t);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuComponent {
	public:
		MenuComponent();

		// Unknown accessibility
		// BrnMenuComponent.h:57
		extern const int32_t KI_MAX_ITEMS_PER_MENU = 16;

	}

}

// BrnMenuComponent.h:54
void BrnGui::MenuComponent::MenuComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

