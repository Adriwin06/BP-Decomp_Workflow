// Apt.h:21
typedef AptSharedPtr<AptFile> AptFilePtr;

// Apt.h:66
enum AptMaskRenderOperation {
	AptMaskRenderOperation_Subtract = -1,
	AptMaskRenderOperation_None = 0,
	AptMaskRenderOperation_Add = 1,
}

// Apt.h:122
enum AptGetBytesEnum {
	AptGetBytesEnum_MovieClip = 0,
	AptGetBytesEnum_Sound = 1,
	AptGetBytesEnum_XML = 2,
	AptGetBytesEnum_LoadVars = 3,
}

// Apt.h:136
typedef void * AptAssetString;

// Apt.h:140
typedef void * AptAssetRenderingUnit;

// Apt.h:141
typedef void * AptAssetTexture;

// Apt.h:142
typedef void * AptAnimationUserData;

// Apt.h:143
typedef void * AptAssetMoiveClip;

// Apt.h:145
typedef void * AptAssetCustomControlZId;

// Apt.h:166
enum AptStringAlignment {
	AptStringAlignment_Left = 0,
	AptStringAlignment_Right = 1,
	AptStringAlignment_Center = 2,
	AptStringAlignment_None = 3,
	AptStringAlignment_Justify = 4,
}

// Apt.h:225
struct AptAllocateStringParameters {
	// Apt.h:227
	const char * szFontName;

	// Apt.h:231
	float x0;

	// Apt.h:234
	float y0;

	// Apt.h:237
	float x1;

	// Apt.h:240
	float y1;

	// Apt.h:243
	AptStringAlignment eAlignment;

	// Apt.h:245
	AptStringAlignment eBoxAlignment;

	// Apt.h:248
	int bMultiline;

	// Apt.h:250
	int bWordWrap;

	// Apt.h:252
	unsigned int nColour;

	// Apt.h:254
	unsigned int nBackColor;

	// Apt.h:256
	unsigned int nBorderColor;

	// Apt.h:258
	int bBackground;

	// Apt.h:260
	int bBorder;

	// Apt.h:263
	float fFontHeight;

	// Apt.h:266
	uint32_t nLineOffset;

	// Apt.h:269
	int * pnNumLines;

	// Apt.h:274
	const char * szString;

	// Apt.h:277
	unsigned int eFlags;

	// Apt.h:280
	unsigned int nFontStyle;

	// Apt.h:282
	int nIndent;

	// Apt.h:284
	int nLeftMargin;

	// Apt.h:286
	int nRightMargin;

	// Apt.h:290
	float fTextWidth;

	// Apt.h:292
	float fTextHeight;

	// Apt.h:294
	float fStrLen;

	// Apt.h:296
	uint32_t nMaxScroll;

	// Apt.h:303
	AptAssetString pCurrString;

}

// Apt.h:309
struct AptSysClock {
	// Apt.h:310
	int Second;

	// Apt.h:311
	int Minute;

	// Apt.h:312
	int Hour;

	// Apt.h:313
	int Day;

	// Apt.h:314
	int Date;

	// Apt.h:315
	int Month;

	// Apt.h:316
	int Year;

	// Apt.h:317
	int Hundredths;

}

// Apt.h:405
struct AptUserFunctions {
	// Apt.h:417
	void *(*)(size_t) pfnMemAlloc;

	// Apt.h:422
	void (*)(void *) pfnMemFree;

	// Apt.h:427
	void (*)(void *, size_t) pfnMemFreeSize;

	// Apt.h:433
	void (*)(const char *, const char *, unsigned int) pfnAssertFail;

	// Apt.h:436
	void (*)(unsigned int) pfnSetBackgroundColour;

	// Apt.h:441
	void (*)(const char *, ...) pfnDebugPrint;

	// Apt.h:453
	void (*)(AptSavedInputRecord *, int) pfnDebugAddSavedInput;

	// Apt.h:459
	void (*)(const char *) pfnDebugSetScreenGrabPending;

	// Apt.h:469
	void (*)(const char *, AptFilePtr) pfnLoadAnimation;

	// Apt.h:470
	void (*)(void *) pfnFreeAnimation;

	// Apt.h:471
	void (*)(void *) pfnFreeConstantTable;

	// Apt.h:480
	void (*)(const char *, const char *) pfnLoadAnimationCompleted;

	// Apt.h:490
	void (*)(const char *, const char *) pfnCommand;

	// Apt.h:499
	AptValue *(*)(const char *) pfnLoadVariables;

	// Apt.h:511
	AptValue *(*)() pfnLoadVariablesNULL;

	// Apt.h:529
	void (*)(const char *, const char *) pfnSetExternVariable;

	// Apt.h:530
	AptValue *(*)(const char *) pfnGetExternVariable;

	// Apt.h:548
	void (*)(const char *, const char *, const char *, const char *, int) pfnSendVariables;

	// Apt.h:558
	AptAssetString (*)(AptAllocateStringParameters *) pfnAllocateString;

	// Apt.h:572
	void (*)(AptAssetString, unsigned int) pfnDeallocateString;

	// Apt.h:580
	void (*)(AptAssetString, AptMaskRenderOperation, int) pfnDrawString;

	// Apt.h:625
	AptAssetTexture (*)(AptAnimationUserData, int) pfnLoadTexture;

	// Apt.h:626
	void (*)(AptAssetTexture) pfnFreeTexture;

	// Apt.h:637
	void (*)(AptAnimationUserData, int, AptAssetTexture) pfnBindTexture;

	// Apt.h:650
	AptAssetRenderingUnit (*)(AptAnimationUserData, int) pfnLoadRenderingUnit;

	// Apt.h:653
	void (*)(AptAssetRenderingUnit) pfnFreeRenderingUnit;

	// Apt.h:659
	void (*)(AptMatrix *) pfnSetVertexMatrix;

	// Apt.h:668
	void (*)(AptCXForm *) pfnSetColourTransform;

	// Apt.h:685
	void (*)(AptAssetRenderingUnit, AptMaskRenderOperation, int) pfnDrawRenderingUnit;

	// Apt.h:708
	void (*)(char *, char *, AptAssetRenderingUnit, const char *, AptMaskRenderOperation, int) pfnCustomControlRender;

	// Apt.h:713
	bool (*)(AptAssetRenderingUnit) pfnCustomControlUpdate;

	// Apt.h:730
	AptAssetCustomControlZId (*)(AptAssetRenderingUnit, const char *, AptValue *, AptAssetCustomControlZId, bool) pfnCreateCustomControlZid;

	// Apt.h:733
	void (*)(AptAssetCustomControlZId) pfnDestroyCustomControlZid;

	// Apt.h:740
	void (*)(AptAssetCustomControlZId, AptAssetRenderingUnit, AptMaskRenderOperation, int) pfnCustomControlRenderWithZid;

	// Apt.h:747
	void (*)(AptValue *) pfnOnUnload;

	// Apt.h:752
	int (*)(float, float, AptAssetMoiveClip) pfnPointHitTest;

	// Apt.h:760
	void (*)(AptSysClock *, bool) pfnGetRealTimeClock;

	// Apt.h:771
	int (*)(const char *, AptGetBytesEnum) pfnGetBytesTotal;

	// Apt.h:783
	int (*)(const char *, AptGetBytesEnum) pfnGetBytesLoaded;

	// Apt.h:822
	void (*)(const char *) pfnUninitializedVarAccess;

	// Apt.h:826
	float (*)() pfnGetStageHeight;

	// Apt.h:828
	float (*)() pfnGetStageWidth;

	// Apt.h:832
	void (*)(void *, unsigned int) pfnCustomSavedInputHandler;

	// Apt.h:836
	void (*)(bool, const char *) pfnPlaySavedInputsDone;

	// Apt.h:843
	void (*)(bool, bool, const char *, const char *) pfnHandleZombieState;

	// Apt.h:855
	void (*)(const char *) pfnPushRenderFlags;

	// Apt.h:856
	void (*)(const char *) pfnPopRenderFlags;

public:
	// Apt.h:859
	AptUserFunctions();

}

// _built-in_
namespace :: {
	// Apt.h:866
	extern AptUserFunctions gAptFuncs;

}

// Apt.h:866
extern AptUserFunctions gAptFuncs;

// Apt.h:147
typedef void * AptTargetInstance;

// Apt.h:19
struct AptSharedPtr<AptFile> {
	// AptSharedPtr.h:116
	AptFile * pData;

public:
	// AptSharedPtr.h:56
	void AptSharedPtr(AptFile *);

	// AptSharedPtr.h:67
	void AptSharedPtr(const AptSharedPtr<AptFile> &);

	// AptSharedPtr.h:78
	void ~AptSharedPtr();

	// AptSharedPtr.h:84
	AptSharedPtr<AptFile> & operator=(const AptSharedPtr<AptFile> &);

	// AptSharedPtr.h:102
	void Reset();

	// AptSharedPtr.h:109
	AptFile & operator*() const;

	// AptSharedPtr.h:110
	AptFile * operator->() const;

	// AptSharedPtr.h:111
	AptFile * Get() const;

	// AptSharedPtr.h:113
	bool operator bool() const;

	// AptSharedPtr.h:114
	bool operator!() const;

	// AptSharedPtr.h:118
	void Dispose(AptFile *);

	// AptSharedPtr.h:144
	void * operator new(unsigned int);

	// AptSharedPtr.h:144
	void operator delete(void *, unsigned int);

	// AptSharedPtr.h:144
	void * operator new [](unsigned int);

	// AptSharedPtr.h:144
	void operator delete [](void *);

}

// Apt.h:322
struct AptAnalogStickInfo {
	// Apt.h:325
	float fXAxisValue;

	// Apt.h:327
	float fYAxisValue;

	// Apt.h:329
	unsigned char nController;

	// Apt.h:331
	AptInputType nSide;

}

// Apt.h:871
struct AptInitParmsT {
	// Apt.h:873
	int iButtonSetSize;

	// Apt.h:875
	int iInputSetSize;

	// Apt.h:877
	int iListenerSetSize;

	// Apt.h:879
	int iActionPoolSize;

	// Apt.h:881
	int iMaxIntervalFunctions;

	// Apt.h:883
	int iMaxButtonInstances;

	// Apt.h:885
	int iMaxNewMovieClipsPerFrame;

	// Apt.h:887
	int iMaxQueuedInputs;

	// Apt.h:890
	int iStackSize;

	// Apt.h:898
	int iCallStackDepth;

	// Apt.h:905
	int iDeferedVectorSize;

	// Apt.h:911
	int iStringPoolSize;

	// Apt.h:918
	int iRegArraySize;

	// Apt.h:923
	int iLookupArraySize;

	// Apt.h:929
	int iZombieVectorSize;

	// Apt.h:932
	bool bDefaultMouseWheelFlag;

	// Apt.h:937
	bool bPrintZombieDump;

	// Apt.h:939
	bool bCustomControlUseZid;

	// Apt.h:944
	bool bUseNewClassInitOrder;

	// Apt.h:960
	bool bSkipTraceBytecodes;

public:
	// Apt.h:962
	AptInitParmsT();

}

// Apt.h:989
struct AptTargetInitParams {
	// Apt.h:991
	int iMaxIntervalFunctions;

	// Apt.h:993
	int iMaxQueuedInputs;

	// Apt.h:995
	int iListenerSetSize;

	// Apt.h:997
	int iInputSetSize;

	// Apt.h:999
	int iButtonSetSize;

	// Apt.h:1001
	int iActionPoolSize;

public:
	// Apt.h:1003
	AptTargetInitParams();

	// Apt.h:1013
	void CopyAptInitParms(const AptInitParmsT *);

}

