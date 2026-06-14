// CgsCore.h:144
namespace renderengine {
	// drvtypes.h:64
	enum PrimitiveType {
		PRIMITIVETYPE_NA = 0,
		PRIMITIVETYPE_POINTS = 1,
		PRIMITIVETYPE_LINES = 2,
		PRIMITIVETYPE_LINELOOP = 3,
		PRIMITIVETYPE_LINESTRIP = 4,
		PRIMITIVETYPE_TRIANGLES = 5,
		PRIMITIVETYPE_TRIANGLESTRIPS = 6,
		PRIMITIVETYPE_TRIANGLEFAN = 7,
		PRIMITIVETYPE_QUADS = 8,
		PRIMITIVETYPE_QUADSTRIPS = 9,
		PRIMITIVETYPE_POLYGON = 10,
		PRIMITIVETYPE_MAX = 11,
		PRIMITIVETYPE_NUM = 11,
		PRIMITIVETYPE_FORCEENUMSIZEINT = 2147483647,
	}

	// drvtypes.h:87
	const uint32_t PS3_GCM_FALSE;

	// drvtypes.h:88
	const uint32_t PS3_GCM_TRUE = 1;

	// drvtypes.h:91
	const uint8_t SYNC_HSYNC = 1;

	// drvtypes.h:92
	const uint8_t SYNC_VSYNC = 2;

	// drvtypes.h:95
	const uint8_t LOCATION_LOCAL;

	// drvtypes.h:96
	const uint8_t LOCATION_SYSTEM = 1;

	// drvtypes.h:100
	const uint8_t COMPMODE_DISABLED;

	// drvtypes.h:101
	const uint8_t COMPMODE_C32_2X1 = 7;

	// drvtypes.h:102
	const uint8_t COMPMODE_C32_2X2 = 8;

	// drvtypes.h:103
	const uint8_t COMPMODE_Z32_SEPSTENCIL = 9;

	// drvtypes.h:104
	const uint8_t COMPMODE_Z32_SEPSTENCIL_REGULAR = 10;

	// drvtypes.h:105
	const uint8_t COMPMODE_Z32_SEPSTENCIL_DIAGONAL = 11;

	// drvtypes.h:106
	const uint8_t COMPMODE_Z32_SEPSTENCIL_ROTATED = 12;

	// drvtypes.h:110
	const uint8_t MULTISAMPLETYPE_NONE;

	// drvtypes.h:111
	const uint8_t MULTISAMPLETYPE_DIAGONAL_2 = 3;

	// drvtypes.h:112
	const uint8_t MULTISAMPLETYPE_SQUARE_4 = 4;

	// drvtypes.h:113
	const uint8_t MULTISAMPLETYPE_SQUARE_4_ROT = 5;

	// drvtypes.h:117
	const uint32_t ZCULLDIR_LESS;

	// drvtypes.h:118
	const uint32_t ZCULLDIR_GREATER = 1;

	// drvtypes.h:122
	const uint32_t ZCULLFORMAT_MSB;

	// drvtypes.h:123
	const uint32_t ZCULLFORMAT_LONES = 1;

	// drvtypes.h:127
	const uint32_t CLEARFLAGS_Z = 1;

	// drvtypes.h:128
	const uint32_t CLEARFLAGS_S = 2;

	// drvtypes.h:129
	const uint32_t CLEARFLAGS_R = 16;

	// drvtypes.h:130
	const uint32_t CLEARFLAGS_G = 32;

	// drvtypes.h:131
	const uint32_t CLEARFLAGS_B = 64;

	// drvtypes.h:132
	const uint32_t CLEARFLAGS_A = 128;

	// drvtypes.h:136
	const uint8_t PS3INDEXTYPE_32;

	// drvtypes.h:137
	const uint8_t PS3INDEXTYPE_16 = 1;

}

