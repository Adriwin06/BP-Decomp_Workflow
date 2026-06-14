// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SelectableGroup {
	protected:
		// BrnSelectableGroup.h:169
		extern const int8_t KI_MAX_SELECTABLES = 100;

	}

}

// BrnSelectableGroup.h:169
extern const int8_t KI_MAX_SELECTABLES = 100;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SelectableGroup {
	public:
		// BrnSelectableGroup.h:339
		bool SetWrapped(bool);

		// BrnSelectableGroup.h:246
		Selectable * GetSelectable(int32_t);

		// BrnSelectableGroup.h:311
		int32_t GetSelectableCount() const;

		// BrnSelectableGroup.h:203
		int32_t GetHighlightedIndex() const;

		// BrnSelectableGroup.h:216
		uint64_t GetHighlightedId() const;

		// BrnSelectableGroup.h:296
		const Selectable * GetHighlighted() const;

	protected:
		// BrnSelectableGroup.h:169
		extern const int8_t KI_MAX_SELECTABLES = 100;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SelectableGroup {
	public:
		// BrnSelectableGroup.h:203
		int32_t GetHighlightedIndex() const;

		// BrnSelectableGroup.h:246
		Selectable * GetSelectable(int32_t);

		// BrnSelectableGroup.h:216
		uint64_t GetHighlightedId() const;

		// BrnSelectableGroup.h:296
		const Selectable * GetHighlighted() const;

		// BrnSelectableGroup.h:264
		const Selectable * GetSelectable(int32_t) const;

		// BrnSelectableGroup.h:339
		bool SetWrapped(bool);

	protected:
		// BrnSelectableGroup.h:169
		extern const int8_t KI_MAX_SELECTABLES = 100;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SelectableGroup {
	public:
		// BrnSelectableGroup.h:203
		int32_t GetHighlightedIndex() const;

		// BrnSelectableGroup.h:216
		uint64_t GetHighlightedId() const;

		// BrnSelectableGroup.h:296
		const Selectable * GetHighlighted() const;

		// BrnSelectableGroup.h:246
		Selectable * GetSelectable(int32_t);

	protected:
		// BrnSelectableGroup.h:169
		extern const int8_t KI_MAX_SELECTABLES = 100;

	}

}

// BrnSelectableGroup.h:41
struct BrnGui::SelectableGroup : public CgsGui::GuiComponent {
protected:
	// BrnSelectableGroup.h:169
	extern const int8_t KI_MAX_SELECTABLES = 100;

private:
	// BrnSelectableGroup.h:176
	int8_t miItemCount;

	// BrnSelectableGroup.h:177
	int8_t miHighlightedIndex;

	// BrnSelectableGroup.h:178
	bool mbWrapped;

	// BrnSelectableGroup.h:179
	BrnGui::Selectable *[100] mapItems;

public:
	// BrnSelectableGroup.cpp:42
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnSelectableGroup.cpp:74
	virtual void Clear();

	// BrnSelectableGroup.cpp:109
	void SetSelectableId(int32_t, uint64_t);

	// BrnSelectableGroup.cpp:125
	void SetIds(const uint64_t *);

	// BrnSelectableGroup.cpp:158
	virtual void Add(BrnGui::Selectable *);

	// BrnSelectableGroup.cpp:180
	virtual void Enable(int32_t);

	// BrnSelectableGroup.cpp:209
	void EnableId(uint64_t);

	// BrnSelectableGroup.cpp:228
	virtual void Disable(int32_t);

	// BrnSelectableGroup.cpp:265
	void DisableId(uint64_t);

	// BrnSelectableGroup.cpp:286
	virtual bool HighlightNext(bool);

	// BrnSelectableGroup.cpp:352
	virtual bool HighlightPrevious(bool);

	// BrnSelectableGroup.cpp:417
	virtual bool HighlightIndex(int32_t);

	// BrnSelectableGroup.cpp:460
	bool HighlightId(uint64_t);

	// BrnSelectableGroup.h:203
	int32_t GetHighlightedIndex() const;

	// BrnSelectableGroup.h:216
	uint64_t GetHighlightedId() const;

	// BrnSelectableGroup.h:232
	bool IsWrapped() const;

	// BrnSelectableGroup.h:296
	const BrnGui::Selectable * GetHighlighted() const;

	// BrnSelectableGroup.h:264
	const BrnGui::Selectable * GetSelectable(int32_t) const;

	// BrnSelectableGroup.h:246
	BrnGui::Selectable * GetSelectable(int32_t);

	// BrnSelectableGroup.h:311
	int32_t GetSelectableCount() const;

	// BrnSelectableGroup.h:325
	int32_t GetMaxSelectableCount() const;

	// BrnSelectableGroup.h:339
	bool SetWrapped(bool);

	// BrnSelectableGroup.cpp:530
	int32_t GetIndexFromId(uint64_t);

	// BrnSelectableGroup.cpp:486
	virtual void Select();

	// BrnSelectableGroup.cpp:505
	virtual void Update();

protected:
	// BrnSelectableGroup.h:279
	BrnGui::Selectable * GetHighlighted();

private:
	// BrnSelectableGroup.h:183
	void ChangeHighlight(int32_t, int32_t);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SelectableGroup {
	public:
		SelectableGroup();

	protected:
		// BrnSelectableGroup.h:169
		extern const int8_t KI_MAX_SELECTABLES = 100;

	}

}

// BrnSelectableGroup.h:41
void BrnGui::SelectableGroup::SelectableGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

