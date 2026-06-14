// pad_codes.h:21
struct CellPadInfo {
	// pad_codes.h:22
	uint32_t max_connect;

	// pad_codes.h:23
	uint32_t now_connect;

	// pad_codes.h:24
	uint32_t info;

	// pad_codes.h:25
	uint16_t[127] vendor_id;

	// pad_codes.h:26
	uint16_t[127] product_id;

	// pad_codes.h:27
	uint8_t[127] status;

}

// pad_codes.h:28
typedef CellPadInfo CellPadInfo;

// pad_codes.h:77
struct CellPadData {
	// pad_codes.h:78
	int32_t len;

	// pad_codes.h:79
	uint16_t[64] button;

}

// pad_codes.h:80
typedef CellPadData CellPadData;

// pad_codes.h:118
struct CellPadCapabilityInfo {
	// pad_codes.h:119
	uint32_t[32] info;

}

// pad_codes.h:120
typedef CellPadCapabilityInfo CellPadCapabilityInfo;

// pad_codes.h:124
struct CellPadActParam {
	// pad_codes.h:125
	uint8_t[2] motor;

	// pad_codes.h:126
	uint8_t[6] reserved;

}

// pad_codes.h:127
typedef CellPadActParam CellPadActParam;

