// csisdef.h:78
namespace CsisDef {
	union Parameter {
	}
	struct CrcAndKey;

	struct FunctionDesc;

	struct GlobalVariableDesc;

	struct SystemDesc;

}

// csisdef.h:102
union CsisDef::Parameter {
	// csisdef.h:103
	int intVal;

	// csisdef.h:104
	float floatVal;

}
// csisdef.h:108
struct CsisDef::CrcAndKey {
	// csisdef.h:109
	short int crc;

	// csisdef.h:110
	short int key;

}

// csisdef.h:114
struct CsisDef::FunctionDesc {
	// csisdef.h:116
	CListDStack clients;

	// csisdef.h:125
	int padTo64Bit1;

	// csisdef.h:127
	const char * pStringId;

	// csisdef.h:141
	// csisdef.h:138
	union {
		// csisdef.h:111
		typedef CrcAndKey CrcAndKey;

		// csisdef.h:139
		FunctionDesc::union ::CrcAndKey crcAndKey;

		// csisdef.h:140
		int key;

	}
 u;

	// csisdef.h:143
	int padTo64Bit2;

}

// csisdef.h:172
struct CsisDef::GlobalVariableDesc {
	// csisdef.h:174
	CListDStack clients;

	// csisdef.h:105
	typedef Parameter Parameter;

	// csisdef.h:177
	GlobalVariableDesc::Parameter curVal;

	// csisdef.h:179
	int padTo64Bit1;

	// csisdef.h:184
	int padTo64Bit2;

	// csisdef.h:186
	const char * pStringId;

	// csisdef.h:192
	// csisdef.h:189
	union {
		// csisdef.h:190
		FunctionDesc::union ::CrcAndKey crcAndKey;

		// csisdef.h:191
		int key;

	}
 u;

	// csisdef.h:194
	int padTo64Bit3;

}

// csisdef.h:219
struct CsisDef::SystemDesc {
	// csisdef.h:221
	char[4] id;

	// csisdef.h:225
	unsigned char ver;

	// csisdef.h:227
	unsigned char verCsisxMajor;

	// csisdef.h:228
	unsigned char verCsisxMinor;

	// csisdef.h:229
	unsigned char verCsisxPatch;

	// csisdef.h:232
	unsigned char platform;

	// csisdef.h:233
	unsigned char resolved;

	// csisdef.h:234
	short unsigned int numFunctions;

	// csisdef.h:236
	short unsigned int numClasses;

	// csisdef.h:237
	short unsigned int numGlobalVariables;

	// csisdef.h:240
	short int crc;

	// csisdef.h:241
	char[2] pad;

	// csisdef.h:243
	char[4] padTo64Bit1;

	// csisdef.h:249
	int padTo64Bit2;

	// csisdef.h:145
	typedef FunctionDesc FunctionDesc;

	// csisdef.h:251
	SystemDesc::FunctionDesc * pFunctionDesc;

	// csisdef.h:253
	int padTo64Bit3;

	// csisdef.h:145
	typedef FunctionDesc ClassDesc;

	// csisdef.h:255
	SystemDesc::ClassDesc * pClassDesc;

	// csisdef.h:257
	int padTo64Bit4;

	// csisdef.h:259
	GlobalVariableDesc * pGlobalVariableDesc;

	// csisdef.h:261
	CListDNode linkNode;

}

