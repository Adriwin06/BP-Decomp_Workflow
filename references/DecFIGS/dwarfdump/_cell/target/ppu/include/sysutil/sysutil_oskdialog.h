// sysutil_oskdialog.h:111
enum CellOskDialogInputFieldResult {
	CELL_OSKDIALOG_INPUT_FIELD_RESULT_OK = 0,
	CELL_OSKDIALOG_INPUT_FIELD_RESULT_CANCELED = 1,
	CELL_OSKDIALOG_INPUT_FIELD_RESULT_ABORT = 2,
	CELL_OSKDIALOG_INPUT_FIELD_RESULT_NO_INPUT_TEXT = 3,
}

// sysutil_oskdialog.h:152
struct CellOskDialogCallbackReturnParam {
	// sysutil_oskdialog.h:153
	CellOskDialogInputFieldResult result;

	// sysutil_oskdialog.h:154
	int numCharsResultString;

	// sysutil_oskdialog.h:155
	uint16_t * pResultString;

}

// sysutil_oskdialog.h:143
struct CellOskDialogInputFieldInfo {
	// sysutil_oskdialog.h:144
	uint16_t * message;

	// sysutil_oskdialog.h:146
	uint16_t * init_text;

	// sysutil_oskdialog.h:147
	int limit_length;

}

// sysutil_oskdialog.h:159
struct CellOskDialogPoint {
	// sysutil_oskdialog.h:160
	float x;

	// sysutil_oskdialog.h:161
	float y;

}

// sysutil_oskdialog.h:184
struct CellOskDialogParam {
	// sysutil_oskdialog.h:186
	unsigned int allowOskPanelFlg;

	// sysutil_oskdialog.h:188
	unsigned int firstViewPanel;

	// sysutil_oskdialog.h:189
	CellOskDialogPoint controlPoint;

	// sysutil_oskdialog.h:190
	int prohibitFlgs;

}

