// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct TableRow {
		// BrnTableRow.h:149
		enum TableRowStates {
			E_TABLEROWSTATES_UNUSED = 0,
			E_TABLEROWSTATES_INVISIBLE = 1,
			E_TABLEROWSTATES_DISABLED = 2,
			E_TABLEROWSTATES_UNHIGHLIGHTED = 3,
			E_TABLEROWSTATES_HIGHLIGHTED = 4,
			E_TABLEROWSTATES_SHOWING_HIGHLIGHTED = 5,
			E_TABLEROWSTATES_SHOWING_UNHIGHLIGHTED = 6,
			E_TABLEROWSTATES_COUNT = 7,
		}

	}

	// Declaration
	struct TableRowDataSet {
		// BrnTableRow.h:191
		union CellData {
			// BrnTableRow.h:192
			char[64] macText;

			// BrnTableRow.h:193
			int32_t miInt;

		}
	}

}

// BrnTableRow.h:187
struct BrnGui::TableRowDataSet {
private:
	// BrnTableRow.h:218
	BrnGui::TableRowDataSet::CellData[16] maCellData;

public:
	// BrnTableRow.h:198
	void Clear();

	// BrnTableRow.h:202
	const char * GetText(int32_t) const;

	// BrnTableRow.h:206
	const int32_t GetInteger(int32_t) const;

	// BrnTableRow.h:210
	void SetText(int32_t, const char *);

	// BrnTableRow.h:214
	void SetInteger(int32_t, int32_t);

}

// BrnTableRow.h:44
struct BrnGui::TableRow : public BrnGui::SelectableGroup {
	// BrnTableRow.h:47
	extern const uint8_t KU_MAX_NAME_LENGTH = 64;

	// BrnTableRow.h:48
	extern const int8_t KI_MAX_CELLS_PER_ROW = 16;

private:
	// BrnTableRow.h:165
	BrnGui::TableCell[16] maCells;

	// BrnTableRow.h:166
	extern char[] macAptStateText;

	// BrnTableRow.h:168
	TableRowDataSet * mpData;

	// BrnTableRow.h:169
	extern const char *[] KAC_STATE_NAMES;

	// BrnTableRow.h:171
	BrnGui::TableRow::TableRowStates mePreviousState;

	// BrnTableRow.h:173
	int8_t miNumColumns;

	// BrnTableRow.h:175
	bool mbEnableShowingAnim;

public:
	// BrnTableRow.h:60
	void Construct(const char *, StateInterface *, const char *, CgsGui::GuiComponent **, const BrnGui::TableCell::TableCellComponentTypes *, int32_t, const char *, uint64_t);

	// BrnTableRow.h:64
	void SetupRow(int32_t, bool);

	// BrnTableRow.h:232
	virtual void Select();

	// BrnTableRow.h:72
	virtual void Update();

	// BrnTableRow.h:247
	void SetData(TableRowDataSet *);

	// BrnTableRow.h:263
	const char * GetText(int32_t) const;

	// BrnTableRow.h:278
	void SetText(int32_t, const char *);

	// BrnTableRow.h:301
	void SetLocalisedText(int32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTableRow.h:319
	const uint32_t GetIconState(int32_t) const;

	// BrnTableRow.h:334
	void SetIconState(int32_t, uint32_t);

	// BrnTableRow.h:114
	virtual void Clear();

	// BrnTableRow.h:118
	virtual bool HighlightNext();

	// BrnTableRow.h:122
	virtual bool HighlightPrevious();

	// BrnTableRow.h:366
	const BrnGui::TableCell * GetSelectable(int32_t) const;

	// BrnTableRow.h:133
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnTableRow.h:381
	void SetEnableShowingAnim(bool);

protected:
	// BrnTableRow.h:351
	BrnGui::TableCell * GetSelectable(int32_t);

private:
	// BrnTableRow.h:163
	BrnGui::TableRow::TableRowStates FindState() const;

}

// BrnTableRow.h:48
extern const int8_t KI_MAX_CELLS_PER_ROW = 16;

// BrnTableRow.h:166
extern char[] macAptStateText;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TableRow {
		// BrnTableRow.h:149
		enum TableRowStates {
			E_TABLEROWSTATES_UNUSED = 0,
			E_TABLEROWSTATES_INVISIBLE = 1,
			E_TABLEROWSTATES_DISABLED = 2,
			E_TABLEROWSTATES_UNHIGHLIGHTED = 3,
			E_TABLEROWSTATES_HIGHLIGHTED = 4,
			E_TABLEROWSTATES_SHOWING_HIGHLIGHTED = 5,
			E_TABLEROWSTATES_SHOWING_UNHIGHLIGHTED = 6,
			E_TABLEROWSTATES_COUNT = 7,
		}

	}

	// Declaration
	struct TableRowDataSet {
		// BrnTableRow.h:191
		union CellData {
			// BrnTableRow.h:192
			char[64] macText;

			// BrnTableRow.h:193
			int32_t miInt;

		}
	}

}

// BrnTableRow.h:47
extern const uint8_t KU_MAX_NAME_LENGTH = 64;

// BrnTableRow.h:44
struct BrnGui::TableRow : public BrnGui::SelectableGroup {
	// BrnTableRow.h:47
	extern const uint8_t KU_MAX_NAME_LENGTH = 64;

	// BrnTableRow.h:48
	extern const int8_t KI_MAX_CELLS_PER_ROW = 16;

private:
	// BrnTableRow.h:165
	BrnGui::TableCell[16] maCells;

	// BrnTableRow.cpp:35
	extern const char[10] macAptStateText;

	// BrnTableRow.h:168
	TableRowDataSet * mpData;

	// BrnTableRow.cpp:24
	extern const char *[7] KAC_STATE_NAMES;

	// BrnTableRow.h:171
	BrnGui::TableRow::TableRowStates mePreviousState;

	// BrnTableRow.h:173
	int8_t miNumColumns;

	// BrnTableRow.h:175
	bool mbEnableShowingAnim;

public:
	// BrnTableRow.cpp:61
	void Construct(const char *, StateInterface *, const char *, CgsGui::GuiComponent **, const BrnGui::TableCell::TableCellComponentTypes *, int32_t, const char *, uint64_t);

	// BrnTableRow.cpp:101
	void SetupRow(int32_t, bool);

	// BrnTableRow.h:232
	virtual void Select();

	// BrnTableRow.cpp:148
	virtual void Update();

	// BrnTableRow.h:247
	void SetData(TableRowDataSet *);

	// BrnTableRow.h:263
	const char * GetText(int32_t) const;

	// BrnTableRow.h:278
	void SetText(int32_t, const char *);

	// BrnTableRow.h:301
	void SetLocalisedText(int32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTableRow.h:319
	const uint32_t GetIconState(int32_t) const;

	// BrnTableRow.h:334
	void SetIconState(int32_t, uint32_t);

	// BrnTableRow.cpp:121
	virtual void Clear();

	// BrnTableRow.cpp:194
	virtual bool HighlightNext();

	// BrnTableRow.cpp:210
	virtual bool HighlightPrevious();

	// BrnTableRow.h:366
	const BrnGui::TableCell * GetSelectable(int32_t) const;

	// BrnTableRow.cpp:225
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnTableRow.h:381
	void SetEnableShowingAnim(bool);

protected:
	// BrnTableRow.h:351
	BrnGui::TableCell * GetSelectable(int32_t);

private:
	// BrnTableRow.cpp:248
	BrnGui::TableRow::TableRowStates FindState() const;

}

// BrnTableRow.h:44
struct BrnGui::TableRow : public BrnGui::SelectableGroup {
	// BrnTableRow.h:47
	extern const uint8_t KU_MAX_NAME_LENGTH = 64;

	// BrnTableRow.h:48
	extern const int8_t KI_MAX_CELLS_PER_ROW = 16;

private:
	// BrnTableRow.h:165
	BrnGui::TableCell[16] maCells;

	// BrnTableRow.h:166
	extern char[] macAptStateText;

	// BrnTableRow.h:168
	TableRowDataSet * mpData;

	// BrnTableRow.h:169
	extern const char *[] KAC_STATE_NAMES;

	// BrnTableRow.h:171
	BrnGui::TableRow::TableRowStates mePreviousState;

	// BrnTableRow.h:173
	int8_t miNumColumns;

	// BrnTableRow.h:175
	bool mbEnableShowingAnim;

public:
	void TableRow(const TableRow &);

	void TableRow();

	// BrnTableRow.h:60
	void Construct(const char *, StateInterface *, const char *, CgsGui::GuiComponent **, const BrnGui::TableCell::TableCellComponentTypes *, int32_t, const char *, uint64_t);

	// BrnTableRow.h:64
	void SetupRow(int32_t, bool);

	// BrnTableRow.h:232
	virtual void Select();

	// BrnTableRow.h:72
	virtual void Update();

	// BrnTableRow.h:247
	void SetData(TableRowDataSet *);

	// BrnTableRow.h:263
	const char * GetText(int32_t) const;

	// BrnTableRow.h:278
	void SetText(int32_t, const char *);

	// BrnTableRow.h:301
	void SetLocalisedText(int32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTableRow.h:319
	const uint32_t GetIconState(int32_t) const;

	// BrnTableRow.h:334
	void SetIconState(int32_t, uint32_t);

	// BrnTableRow.h:114
	virtual void Clear();

	// BrnTableRow.h:118
	virtual bool HighlightNext();

	// BrnTableRow.h:122
	virtual bool HighlightPrevious();

	// BrnTableRow.h:366
	const BrnGui::TableCell * GetSelectable(int32_t) const;

	// BrnTableRow.h:133
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnTableRow.h:381
	void SetEnableShowingAnim(bool);

protected:
	// BrnTableRow.h:351
	BrnGui::TableCell * GetSelectable(int32_t);

private:
	// BrnTableRow.h:163
	BrnGui::TableRow::TableRowStates FindState() const;

}

// BrnTableRow.h:44
void BrnGui::TableRow::TableRow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

