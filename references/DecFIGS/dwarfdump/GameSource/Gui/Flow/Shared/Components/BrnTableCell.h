// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct TableCell {
		// BrnTableCell.h:47
		enum TableCellComponentTypes {
			E_TABLECELLCOMPONENTTYPES_NOTYPE = 0,
			E_TABLECELLCOMPONENTTYPES_TEXTFIELD = 1,
			E_TABLECELLCOMPONENTTYPES_ICON = 2,
			E_TABLECELLCOMPONENTTYPES_COUNT = 3,
		}

	}

}

// BrnTableCell.h:42
struct BrnGui::TableCell {
	int (*)(...) * _vptr.TableCell;

	// BrnTableCell.h:45
	extern const uint8_t KI_MAX_TEXT_LENGTH = 64;

private:
	// BrnTableCell.h:123
	BrnGui::TableCell::TableCellComponentTypes meComponentType;

	// BrnTableCell.h:124
	CgsGui::GuiComponent * mpComponent;

public:
	// BrnTableCell.h:64
	void Construct(const char *, StateInterface *, CgsGui::GuiComponent *, BrnGui::TableCell::TableCellComponentTypes, const char *, uint64_t);

	// BrnTableCell.h:68
	void Clear();

	// BrnTableCell.h:139
	bool IsText();

	// BrnTableCell.h:153
	bool IsIcon();

	// BrnTableCell.h:167
	const char * GetText() const;

	// BrnTableCell.h:184
	void SetText(const char *);

	// BrnTableCell.h:206
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTableCell.h:233
	const uint32_t GetIconState() const;

	// BrnTableCell.h:250
	void SetIconState(uint32_t);

	// BrnTableCell.h:267
	virtual void Select();

	// BrnTableCell.h:113
	virtual void Update();

	// BrnTableCell.h:119
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

}

// BrnTableCell.h:45
extern const uint8_t KI_MAX_TEXT_LENGTH = 64;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TableCell {
		// BrnTableCell.h:47
		enum TableCellComponentTypes {
			E_TABLECELLCOMPONENTTYPES_NOTYPE = 0,
			E_TABLECELLCOMPONENTTYPES_TEXTFIELD = 1,
			E_TABLECELLCOMPONENTTYPES_ICON = 2,
			E_TABLECELLCOMPONENTTYPES_COUNT = 3,
		}

	}

}

// BrnTableCell.h:42
struct BrnGui::TableCell {
	int (*)(...) * _vptr.TableCell;

	// BrnTableCell.h:45
	extern const uint8_t KI_MAX_TEXT_LENGTH = 64;

private:
	// BrnTableCell.h:123
	BrnGui::TableCell::TableCellComponentTypes meComponentType;

	// BrnTableCell.h:124
	CgsGui::GuiComponent * mpComponent;

public:
	// BrnTableCell.cpp:46
	void Construct(const char *, StateInterface *, CgsGui::GuiComponent *, BrnGui::TableCell::TableCellComponentTypes, const char *, uint64_t);

	// BrnTableCell.cpp:70
	void Clear();

	// BrnTableCell.h:139
	bool IsText();

	// BrnTableCell.h:153
	bool IsIcon();

	// BrnTableCell.h:167
	const char * GetText() const;

	// BrnTableCell.h:184
	void SetText(const char *);

	// BrnTableCell.h:206
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTableCell.h:233
	const uint32_t GetIconState() const;

	// BrnTableCell.h:250
	void SetIconState(uint32_t);

	// BrnTableCell.h:267
	virtual void Select();

	// BrnTableCell.cpp:86
	virtual void Update();

	// BrnTableCell.cpp:100
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

}

// BrnTableCell.h:42
struct BrnGui::TableCell {
	int (*)(...) * _vptr.TableCell;

	// BrnTableCell.h:45
	extern const uint8_t KI_MAX_TEXT_LENGTH = 64;

private:
	// BrnTableCell.h:123
	BrnGui::TableCell::TableCellComponentTypes meComponentType;

	// BrnTableCell.h:124
	CgsGui::GuiComponent * mpComponent;

public:
	void TableCell(const BrnGui::TableCell &);

	void TableCell();

	// BrnTableCell.h:64
	void Construct(const char *, StateInterface *, CgsGui::GuiComponent *, BrnGui::TableCell::TableCellComponentTypes, const char *, uint64_t);

	// BrnTableCell.h:68
	void Clear();

	// BrnTableCell.h:139
	bool IsText();

	// BrnTableCell.h:153
	bool IsIcon();

	// BrnTableCell.h:167
	const char * GetText() const;

	// BrnTableCell.h:184
	void SetText(const char *);

	// BrnTableCell.h:206
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTableCell.h:233
	const uint32_t GetIconState() const;

	// BrnTableCell.h:250
	void SetIconState(uint32_t);

	// BrnTableCell.h:267
	virtual void Select();

	// BrnTableCell.h:113
	virtual void Update();

	// BrnTableCell.h:119
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

}

// BrnTableCell.h:42
void BrnGui::TableCell::TableCell() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

