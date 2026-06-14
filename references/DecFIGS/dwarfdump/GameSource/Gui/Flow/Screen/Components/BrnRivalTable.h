// BrnRivalTable.h:49
extern const int32_t KI_MAX_NUM_RIVALS_IN_FLASH = 34;

// BrnRivalTable.h:94
extern const int32_t KI_ROWS_ON_PAGE = 5;

// BrnRivalTable.h:107
extern char[] macSelectedCellName;

// BrnRivalTable.h:108
extern char[] macTableCellNameRoot;

// BrnRivalTable.h:110
extern char[] KAC_APT_SELECTION_TRANS;

// BrnRivalTable.h:111
extern char[] KAC_APT_SELECTION_POS;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RivalTable {
		// BrnRivalTable.h:83
		enum ESelectionState {
			E_SELECTION_STATE_SELECTED = 0,
			E_SELECTION_STATE_TRANS_OUT = 1,
			E_SELECTION_STATE_TRANS_IN = 2,
			E_SELECTION_STATE_INVISIBLE = 3,
			E_SELECTION_STATE_COUNT = 4,
		}

	}

}

// BrnRivalTable.h:46
struct BrnGui::RivalTable : public CgsGui::GuiComponent {
	// BrnRivalTable.h:49
	extern const int32_t KI_MAX_NUM_RIVALS_IN_FLASH = 34;

private:
	// BrnRivalTable.h:94
	extern const int32_t KI_ROWS_ON_PAGE = 5;

	// BrnRivalTable.h:96
	BrnGui::RivalTable::ESelectionState meCurrentSelectionState;

	// BrnRivalTable.h:97
	int32_t miCurrentlySelectedRival;

	// BrnRivalTable.h:98
	bool mbTableDataSet;

	// BrnRivalTable.h:100
	RivalTableCell mSelectedRivalCell;

	// BrnRivalTable.h:102
	BrnGui::SelectableGroup mTable;

	// BrnRivalTable.h:103
	BrnGui::SelectableGroup[5] mTableRows;

	// BrnRivalTable.h:105
	RivalTableCell[34] mRivals;

	// BrnRivalTable.cpp:24
	extern const char[18] macSelectedCellName;

	// BrnRivalTable.cpp:25
	extern const char[7] macTableCellNameRoot;

	// BrnRivalTable.cpp:27
	extern const char[15] KAC_APT_SELECTION_TRANS;

	// BrnRivalTable.cpp:28
	extern const char[13] KAC_APT_SELECTION_POS;

	// BrnRivalTable.cpp:30
	extern const char *[4] KAC_SELECTION_STATE_NAMES;

public:
	// BrnRivalTable.cpp:59
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnRivalTable.cpp:131
	virtual void Update();

	// BrnRivalTable.cpp:154
	void SetRivalData(const CgsModule::Event *);

	// BrnRivalTable.cpp:200
	void SetupComponent();

	// BrnRivalTable.cpp:232
	bool HandleControllerInput(int32_t);

	// BrnRivalTable.h:136
	CgsID GetSelectedRivalID() const;

private:
	// BrnRivalTable.cpp:345
	void ChangeSelection(uint64_t);

	// BrnRivalTable.cpp:370
	void ChangeSelection(int32_t);

}

