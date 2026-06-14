// BrnTable.h:56
extern const int8_t KI_MAX_ROWS_PER_TABLE = 16;

// BrnTable.h:195
extern const int32_t KI_MAX_DATASETS_PER_TABLE = 16;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Table {
	public:
		// BrnTable.h:247
		const char * GetText(int32_t, int32_t) const;

		// BrnTable.h:422
		const TableRow * GetSelectable(int32_t) const;

		// BrnTable.h:333
		TableRow * GetSelectable(int32_t);

		// BrnTable.h:318
		void SetIconState(int32_t, int32_t, uint32_t);

		// BrnTable.h:262
		void SetText(int32_t, int32_t, const char *);

		// BrnTable.h:286
		void SetLocalisedText(int32_t, int32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

		// BrnTable.h:233
		bool HasData();

		// BrnTable.h:436
		void SetEnableShowingAnim(bool);

		// Unknown accessibility
		// BrnTable.h:56
		extern const int8_t KI_MAX_ROWS_PER_TABLE = 16;

	}

}

// BrnTable.h:192
struct BrnGui::TableDataSet {
	// BrnTable.h:195
	extern const int32_t KI_MAX_DATASETS_PER_TABLE = 16;

private:
	// BrnTable.h:219
	TableRowDataSet *[16] mapRowData;

	// BrnTable.h:220
	int8_t miNumRowDataSets;

public:
	// BrnTable.h:199
	void Construct();

	// BrnTable.h:203
	void Clear();

	// BrnTable.h:207
	bool AddRowData(TableRowDataSet *);

	// BrnTable.h:211
	TableRowDataSet * GetRowData(int32_t);

	// BrnTable.h:215
	const int32_t GetNumRowDataSets() const;

}

// BrnTable.h:53
struct BrnGui::Table : public BrnGui::SelectableGroup {
	// BrnTable.h:56
	extern const int8_t KI_MAX_ROWS_PER_TABLE = 16;

private:
	// BrnTable.h:175
	BrnGui::TableRow[16] maRows;

	// BrnTable.h:176
	TableDataSet * mpData;

	// BrnTable.h:177
	int8_t miNumRows;

	// BrnTable.h:178
	int8_t miNumColumns;

	// BrnTable.h:179
	int8_t miFirstRowDataSet;

	// BrnTable.h:180
	bool mbEnableShowingAnim;

public:
	// BrnTable.cpp:49
	void Construct(const char *, StateInterface *, const char *, CgsGui::GuiComponent * *[16], const BrnGui::TableCell::TableCellComponentTypes *, int32_t, int32_t, const char *, uint64_t);

	// BrnTable.cpp:87
	void SetupTable(TableDataSet *, bool, bool);

	// BrnTable.h:233
	bool HasData();

	// BrnTable.h:247
	const char * GetText(int32_t, int32_t) const;

	// BrnTable.h:262
	void SetText(int32_t, int32_t, const char *);

	// BrnTable.h:286
	void SetLocalisedText(int32_t, int32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTable.h:303
	const uint32_t GetIconState(int32_t, int32_t) const;

	// BrnTable.h:318
	void SetIconState(int32_t, int32_t, uint32_t);

	// BrnTable.h:348
	void SelectRow(int32_t);

	// BrnTable.cpp:135
	virtual void Update();

	// BrnTable.cpp:166
	virtual void Clear();

	// BrnTable.cpp:191
	virtual bool HighlightNext();

	// BrnTable.cpp:231
	virtual bool HighlightPrevious();

	// BrnTable.h:422
	const BrnGui::TableRow * GetSelectable(int32_t) const;

	// BrnTable.h:333
	BrnGui::TableRow * GetSelectable(int32_t);

	// BrnTable.cpp:292
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnTable.h:436
	void SetEnableShowingAnim(bool);

protected:
	// BrnTable.cpp:268
	void SetRowData();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Table {
	public:
		Table();

		// Unknown accessibility
		// BrnTable.h:56
		extern const int8_t KI_MAX_ROWS_PER_TABLE = 16;

	}

}

// BrnTable.h:53
void BrnGui::Table::Table() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

