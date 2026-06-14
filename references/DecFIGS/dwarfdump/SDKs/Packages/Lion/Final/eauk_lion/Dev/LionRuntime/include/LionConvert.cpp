// LionConvert.cpp:23
struct cLionLine {
	// LionConvert.cpp:30
	U32 mCharCount;

	// LionConvert.cpp:31
	char * mpChars;

public:
	// LionConvert.cpp:25
	void Init();

	// LionConvert.cpp:26
	void DeInit();

	// LionConvert.cpp:28
	void Build(const char *, U32, U32);

}

// LionConvert.cpp:69
struct cLionConBeh {
	// LionConvert.cpp:86
	cLionStringCollection * mpCol;

	// LionConvert.cpp:87
	cLionStringCollection *[5] mpWaveForms;

	// LionConvert.cpp:88
	cLionConBeh * mpNext;

public:
	// LionConvert.cpp:82
	void Init();

	// LionConvert.cpp:83
	void DeInit();

}

// LionConvert.cpp:92
struct cLionConDes {
	// LionConvert.cpp:97
	U32 mWrittenFlag;

	// LionConvert.cpp:98
	char * mpName;

	// LionConvert.cpp:99
	cLionConBeh * mpBeh;

	// LionConvert.cpp:100
	cLionStringCollection * mpCol;

	// LionConvert.cpp:101
	cLionStringCollection * mpMat;

	// LionConvert.cpp:102
	cLionConDes * mpChild;

	// LionConvert.cpp:103
	cLionConDes * mpParent;

	// LionConvert.cpp:104
	cLionConDes * mpEmitNext;

	// LionConvert.cpp:105
	cLionConDes * mpNext;

public:
	// LionConvert.cpp:94
	void Init(const char *);

	// LionConvert.cpp:95
	void DeInit();

}

// LionConvert.cpp:109
struct cLionChunkGroup {
	// LionConvert.cpp:128
	cLionStringCollection *[6] mpCols;

	// LionConvert.cpp:129
	cLionConBeh * mpBehaviours;

	// LionConvert.cpp:130
	cLionConDes * mpDescriptors;

public:
	// LionConvert.cpp:111
	void Init();

	// LionConvert.cpp:112
	void DeInit();

	// LionConvert.cpp:114
	cLionStringCollection * Add(U32, const char *);

	// LionConvert.cpp:115
	void BehLink();

	// LionConvert.cpp:116
	void DesLink();

	// LionConvert.cpp:117
	void DesSort();

	// LionConvert.cpp:118
	void MatLink();

	// LionConvert.cpp:119
	void ItemsSwap();

	// LionConvert.cpp:120
	cLionConBeh * BehFind(const char *);

	// LionConvert.cpp:121
	cLionConDes * DesFind(const char *);

	// LionConvert.cpp:122
	cLionStringCollection * ColFind(U32, const char *);

	// LionConvert.cpp:123
	cLionStringCollection * ColFind(U32);

	// LionConvert.cpp:124
	cLionStringCollection * ColFindNext(cLionStringCollection *, U32);

	// LionConvert.cpp:125
	void Output(cLionStringCollection *);

	// LionConvert.cpp:126
	void DesOutput(cLionConDes *, cLionStringCollection *);

}

// LionConvert.cpp:208
void cLionConvert::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionConvert.cpp:220
void cLionConvert::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionConvert.cpp:232
void cLionConvert::TextFree(char *  apText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionConvert.cpp:368
void cLionString::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:370
		U32 lSize;

	}
}

// LionConvert.cpp:633
void cLionStringCollection::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:635
		cLionString * lpString;

		// LionConvert.cpp:636
		U32 lSize;

	}
}

// LionConvert.cpp:605
void cLionStringCollection::FindByKeyNext(cLionString *  apString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:607
		cLionString * lpString;

		// LionConvert.cpp:608
		cLionArgsParser lArgs0;

		// LionConvert.cpp:609
		cLionArgsParser lArgs1;

	}
}

// LionConvert.cpp:545
void cLionStringCollection::FindByKey(const char *  apKeyName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:547
		cLionString * lpString;

		// LionConvert.cpp:548
		cLionArgsParser lArgs;

	}
}

// LionConvert.cpp:575
void cLionStringCollection::FindByKeyFirst(const char *  apKeyName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:577
		cLionString * lpString;

		// LionConvert.cpp:578
		cLionArgsParser lArgs;

	}
}

// LionConvert.cpp:331
void cLionString::Init(const char *  apChars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionConvert::GetpAllocator(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionConvert.cpp:352
void cLionString::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionConvert::GetpAllocator(/* parameters */);
}

// LionConvert.cpp:391
void cLionStringFactory::Create(const char *  apChars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:394
		cLionString * lpString;

		cLionConvert::GetpAllocator(/* parameters */);
	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionConvert.cpp:465
void cLionStringCollection::Add(const char *  apString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:467
		cLionString * lpString;

		// LionConvert.cpp:468
		cLionString * lpTail;

	}
}

// LionConvert.cpp:496
void cLionStringCollection::Add(const cLionStringCollection *  apCol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:498
		cLionString * lpString;

	}
}

// LionConvert.cpp:425
void cLionStringCollection::Init(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionConvert.cpp:409
void cLionStringFactory::Destroy(cLionString *  apString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionConvert::GetpAllocator(/* parameters */);
}

// LionConvert.cpp:518
void cLionStringCollection::Remove(cLionString *  apString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:520
		cLionString * lpString;

		// LionConvert.cpp:521
		cLionString ** lppLast;

	}
}

// LionConvert.cpp:439
void cLionStringCollection::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:441
		cLionString * lpString;

		// LionConvert.cpp:442
		cLionString * lpNext;

	}
}

// LionConvert.cpp:657
void cLionStringCollection::Serialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:659
		cLionString * lpString;

		// LionConvert.cpp:660
		char * lpChars;

		// LionConvert.cpp:661
		U32 lSize;

		// LionConvert.cpp:662
		U32 i;

		cLionConvert::GetpAllocator(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::TagValuePair(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
		EA::TagValuePair::operator+(/* parameters */);
	}
}

// LionConvert.cpp:694
void cLionStringCollectionFactory::Create(const char *  apName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:696
		cLionStringCollection * lpCol;

		cLionConvert::GetpAllocator(/* parameters */);
	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

// LionConvert.cpp:711
void cLionStringCollectionFactory::Destroy(cLionStringCollection *  apCol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cLionConvert::GetpAllocator(/* parameters */);
}

// LionConvert.cpp:1470
void cLionConvert::TextConvert(const char *  apData, const U32  aSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionConvert.cpp:1472
		char * lpConText;

		// LionConvert.cpp:1473
		cLionArgsParser lArgs;

		// LionConvert.cpp:1474
		U32 lInChunkFlag;

		// LionConvert.cpp:1475
		U32 lChunkType;

		// LionConvert.cpp:1476
		U32 lOffset;

		// LionConvert.cpp:1477
		cLionChunkGroup lGroup;

		// LionConvert.cpp:1478
		cLionStringCollection * lpCol;

		// LionConvert.cpp:1479
		cLionLine lLine;

	}
	cLionArgsParser::GetArgCount(/* parameters */);
}

// _built-in_
namespace :: {
	// LionConvert.cpp:140
	extern char *[8] gLionConvertDesToBeh;

	// LionConvert.cpp:152
	extern char *[4] gLionConvertBehToDes;

	// LionConvert.cpp:160
	extern sKeyString[5] gLionConvertBehWaveStrings;

	// LionConvert.cpp:169
	extern sKeyString[5] gLionConvertBehWaveFlagStrings;

	// LionConvert.cpp:178
	extern sKeyString[6] gLionConvertChunkStrings;

	// LionConvert.cpp:189
	extern cKeyStringTable gLionConvertChunkTable;

	// LionConvert.cpp:190
	extern cKeyStringTable gLionConvertBehWaveTable;

	// LionConvert.cpp:191
	extern cKeyStringTable gLionConvertBehWaveFlagTable;

}

// LionConvert.cpp:138
