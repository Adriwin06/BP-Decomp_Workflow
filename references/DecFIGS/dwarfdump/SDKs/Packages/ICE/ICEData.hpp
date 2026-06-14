// Behaviour.h:50
namespace ICE {
	// ICEData.hpp:34
	const uint32_t KU_GTID_STRING_LENGTH = 13;

	// ICEData.hpp:36
	const float32_t ICE_LENS_DEFAULT;

	// ICEData.hpp:37
	const float32_t ICE_NEAR_CLIP_DEFAULT;

	// ICEData.hpp:38
	const uint8_t ICE_APERTURE_MAX = 37;

	// ICEData.hpp:39
	const float32_t ICE_TANGENT_LENGTH_DEFAULT;

	// ICEData.hpp:40
	const uint8_t ICE_PERCENT_MAX = 100;

	// ICEData.hpp:42
	const uint16_t ICE_INVALID_KEY = 65535;

	// ICEData.hpp:43
	const uint16_t ICE_INVALID_INTERVAL = 65535;

	// ICEData.hpp:45
	const uint16_t ICE_MAX_EDIT_KEYS = 100;

	// ICEData.hpp:46
	const uint16_t ICE_MAX_EDIT_INTERVALS = 99;

	// ICEData.hpp:48
	const uint32_t ICE_MAX_UNDO_SIZE = 102400;

	// ICEData.hpp:50
	const float32_t ICE_EPSILON;

	// ICEData.hpp:52
	const float32_t ICE_DATA_SMALL_FLOAT;

	// ICEData.hpp:56
	const int32_t ICE_GROUP_NAME_LENGTH = 128;

	// ICEData.hpp:57
	const int32_t ICE_SHORT_GROUP_NAME_LENGTH = 4;

}

// ICEData.hpp:75
struct ICE::ICEElementCount {
	// ICEData.hpp:76
	uint16_t mu16Intervals;

	// ICEData.hpp:77
	uint16_t mu16Keys;

}

// ICEData.hpp:93
struct ICE::ICETakeData : public bTNode<ICE::ICETakeData> {
private:
	// ICEData.hpp:160
	extern const int32_t KI_MAX_TAKENAME_LENGTH = 32;

	// ICEData.hpp:161
	int32_t miGuid;

	// ICEData.hpp:162
	char[32] macTakeName;

	// ICEData.hpp:163
	float32_t mfLength;

	// ICEData.hpp:164
	uint32_t muAllocated;

	// ICEData.hpp:177
	ICEElementCount[12] mElementCounts;

public:
	// ICEData.hpp:111
	uint32_t GetResourceType();

	// ICEData.hpp:115
	void FixUp(const Resource &);

	// ICEData.hpp:119
	void FixDown(const Resource &);

	// ICEData.hpp:121
	bool operator==(const ICETakeData &);

	// ICEData.hpp:122
	ICETakeData & operator=(const ICETakeData &);

	// ICEData.hpp:124
	void Construct();

	// ICEData.hpp:126
	uint32_t ComputeEditSize();

	// ICEData.hpp:127
	uint32_t ComputeActualSize() const;

	// ICEData.hpp:128
	bool IsAllocated() const;

	// ICEData.hpp:129
	const ICEElementCount * GetElementCounts() const;

	// Unknown accessibility
	// ICEData.hpp:64
	typedef uint16_t ICE_KEY_INDEX;

	// ICEData.hpp:130
	ICETakeData::ICE_KEY_INDEX GetNumKeys(int32_t) const;

	// ICEData.hpp:131
	ICETakeData::ICE_KEY_INDEX GetNumIntervals(int32_t) const;

	// ICEData.hpp:132
	bool HasChannelData(int32_t) const;

	// ICEData.hpp:133
	uint32_t GetVariableDataSize() const;

	// ICEData.hpp:134
	uint8_t * GetVariableData() const;

	// ICEData.hpp:135
	const char * GetName() const;

	// ICEData.hpp:136
	void SetName(const char *);

	// ICEData.hpp:137
	int32_t GetGuid() const;

	// ICEData.hpp:138
	void SetGuid(int32_t);

	// ICEData.hpp:140
	void SetNumKeys(int32_t, int32_t);

	// ICEData.hpp:141
	void SetNumIntervals(int32_t, int32_t);

	// ICEData.hpp:155
	float32_t GetLength() const;

	// ICEData.hpp:156
	void SetLength(float32_t);

}

// ICEData.hpp:236
struct ICE::ICETake {
private:
	// ICEData.hpp:356
	const ICE::IResourceManager * mpResourceManager;

	// ICEData.hpp:357
	ICE::ICETakeData * mpTakeData;

	// ICEData.hpp:358
	float32_t mfParameter;

	// ICEData.hpp:359
	float32_t mfSubParameter;

	// ICEData.hpp:360
	ICE::ICETakeData * mpSubTakeData;

	// ICEData.hpp:361
	ICEValue[48] mValues;

	// ICEData.hpp:362
	ICEChannel[12] mChannels;

	// ICEData.hpp:363
	Cubic1D[28] mCubics;

	// ICEData.hpp:364
	uint8_t *[48] mpElementData;

	// ICEData.hpp:365
	int32_t mxSubTakeChannels;

	// ICEData.hpp:366
	bool mbNewSubTakeThisFrame;

public:
	// ICEData.hpp:239
	void Construct(const ICE::IResourceManager *);

	// ICEData.hpp:240
	void Destruct();

	// ICEData.hpp:242
	void NewEditBuffer();

	// ICEData.hpp:243
	void FreeEditBuffer();

	// ICEData.hpp:244
	bool IsAllocated() const;

	// ICEData.hpp:246
	ICE::ICETakeData * GetData() const;

	// ICEData.hpp:247
	void SetData(ICE::ICETakeData *, float32_t);

	// ICEData.hpp:248
	void SetDataPointers(ICE::ICETakeData *, bool);

	// ICEData.hpp:249
	bool IsChannelFromSubTake(int32_t);

	// ICEData.hpp:251
	float32_t GetParameter() const;

	// ICEData.hpp:252
	bool SetParameter(float32_t, bool, bool);

	// ICEData.hpp:254
	float32_t GetSubParameter() const;

	// ICEData.hpp:255
	void SetSubParameter(float32_t);

	// ICEData.hpp:256
	void SetSubTake(int32_t, bool);

	// ICEData.hpp:257
	void SetSubTake(const ICETakeData *, bool);

	// ICEData.hpp:259
	void SetLength(float32_t);

	// ICEData.hpp:260
	float32_t GetLength() const;

	// ICEData.hpp:262
	float32_t GetSubTakeLength() const;

	// ICEData.hpp:265
	ICEValue GetValue(int32_t, uint16_t) const;

	// ICEData.hpp:266
	ICEValue GetValue(int32_t) const;

	// ICEData.hpp:267
	void SetValue(int32_t, uint16_t, ICEValue);

	// ICEData.hpp:270
	float32_t GetValueFloat(int32_t, uint16_t) const;

	// ICEData.hpp:271
	float32_t GetValueFloat(int32_t) const;

	// ICEData.hpp:274
	int32_t GetValueInt(int32_t, uint16_t) const;

	// ICEData.hpp:275
	int32_t GetValueInt(int32_t) const;

	// ICEData.hpp:277
	bool IsHardCut(int32_t, int32_t) const;

	// ICEData.hpp:278
	bool IsHardCut(int32_t, uint16_t, int32_t) const;

	// ICEData.hpp:280
	bool IsNewSubTakeThisFrame() const;

	// ICEData.hpp:282
	ICEParameter * GetParameterData(int32_t) const;

	// ICEData.hpp:283
	uint16_t * GetKeyData(int32_t) const;

	// ICEData.hpp:284
	uint8_t * GetElementData(int32_t) const;

	// ICEData.hpp:285
	uint16_t GetNumKeys(int32_t) const;

	// ICEData.hpp:286
	uint16_t GetNumIntervals(int32_t) const;

	// ICEData.hpp:287
	uint16_t GetCurrentInterval(int32_t) const;

	// ICEData.hpp:289
	uint16_t GetIntervalKey(int32_t, uint16_t) const;

	// ICEData.hpp:290
	float32_t GetIntervalEnd(int32_t, uint16_t) const;

	// ICEData.hpp:291
	float32_t GetIntervalSize(int32_t, uint16_t) const;

	// ICEData.hpp:292
	float32_t GetIntervalStart(int32_t, uint16_t) const;

	// ICEData.hpp:293
	void GetIntervalBracket(int32_t, uint16_t, float32_t *, float32_t *) const;

	// ICEData.hpp:294
	float32_t GetIntervalParameter(int32_t, uint16_t, int32_t) const;

private:
	// ICEData.hpp:334
	bool SetParameter(int32_t, float32_t, bool);

	// ICEData.hpp:335
	float32_t GetSlope(int32_t, int32_t, uint16_t, int32_t) const;

	// ICEData.hpp:336
	void MarkChannelFromSubTake(int32_t);

	// ICEData.hpp:352
	void FlushUndo();

	// ICEData.hpp:353
	bool IsEditable() const;

}

// ICEData.hpp:376
struct ICE::ICEGroup {
private:
	// ICEData.hpp:435
	uint32_t muHandle;

	// ICEData.hpp:436
	int32_t miContext;

	// ICEData.hpp:438
	int32_t miNumTakes;

	// ICEData.hpp:439
	bTList<ICE::ICETakeData> mTakeList;

	// ICEData.hpp:441
	int32_t miNumAssemblyTakes;

	// ICEData.hpp:442
	bTList<ICE::ICETakeData> mAssemblyList;

public:
	// ICEData.hpp:385
	void Construct();

	// ICEData.hpp:386
	void Destruct();

	// ICEData.hpp:388
	void GetName(char *, bool);

	// ICEData.hpp:389
	void GetShortName(char *);

	// ICEData.hpp:390
	uint32_t GetHandle();

	// ICEData.hpp:391
	int32_t GetContext();

	// ICEData.hpp:392
	void SetHandle(uint32_t);

	// ICEData.hpp:393
	void SetContext(int32_t);

	// ICEData.hpp:394
	int32_t GetNumTakes();

	// ICEData.hpp:395
	int32_t GetNumAssemblyTakes();

	// ICEData.hpp:405
	ICE::ICETakeData * GetTake(int32_t);

	// ICEData.hpp:406
	int32_t GetTakeNumber(ICE::ICETakeData *);

	// ICEData.hpp:410
	ICE::ICETakeData * GetAssembly(int32_t);

	// ICEData.hpp:411
	int32_t GetAssemblyNumber(ICE::ICETakeData *);

	// ICEData.hpp:421
	void FlushTake(ICE::ICETakeData *);

	// ICEData.hpp:422
	void FlushTakes();

	// ICEData.hpp:423
	void FlushAllocatedTakes();

	// ICEData.hpp:425
	bTList<ICE::ICETakeData> * GetTakeList();

	// ICEData.hpp:427
	void FlushAssembly(ICE::ICETakeData *);

	// ICEData.hpp:428
	void FlushAssemblyTakes();

	// ICEData.hpp:429
	void FlushAllocatedAssemblyTakes();

}

// ICEData.hpp:226
struct ICE::IResourceManager {
	int (*)(...) * _vptr.IResourceManager;

public:
	// ICEData.hpp:229
	virtual const ICETakeData * GetTakeData(ID) const;

	// ICEData.hpp:232
	virtual const ICETakeData * GetTakeData(int32_t) const;

}

// ICEData.hpp:160
extern const int32_t KI_MAX_TAKENAME_LENGTH = 32;

// ICEActionQueue.hpp:21
namespace ICE {
	// ICEData.hpp:34
	const uint32_t KU_GTID_STRING_LENGTH = 13;

	// ICEData.hpp:36
	const float32_t ICE_LENS_DEFAULT;

	// ICEData.hpp:37
	const float32_t ICE_NEAR_CLIP_DEFAULT;

	// ICEData.hpp:38
	const uint8_t ICE_APERTURE_MAX = 37;

	// ICEData.hpp:39
	const float32_t ICE_TANGENT_LENGTH_DEFAULT;

	// ICEData.hpp:40
	const uint8_t ICE_PERCENT_MAX = 100;

	// ICEData.hpp:42
	const uint16_t ICE_INVALID_KEY = 65535;

	// ICEData.hpp:43
	const uint16_t ICE_INVALID_INTERVAL = 65535;

	// ICEData.hpp:45
	const uint16_t ICE_MAX_EDIT_KEYS = 100;

	// ICEData.hpp:46
	const uint16_t ICE_MAX_EDIT_INTERVALS = 99;

	// ICEData.hpp:48
	const uint32_t ICE_MAX_UNDO_SIZE = 102400;

	// ICEData.hpp:50
	const float32_t ICE_EPSILON;

	// ICEData.hpp:52
	const float32_t ICE_DATA_SMALL_FLOAT;

	// ICEData.hpp:56
	const int32_t ICE_GROUP_NAME_LENGTH = 128;

	// ICEData.hpp:57
	const int32_t ICE_SHORT_GROUP_NAME_LENGTH = 4;

}

// ICEMath.hpp:43
namespace ICE {
	// ICEData.hpp:34
	const uint32_t KU_GTID_STRING_LENGTH = 13;

	// ICEData.hpp:36
	const float32_t ICE_LENS_DEFAULT;

	// ICEData.hpp:37
	const float32_t ICE_NEAR_CLIP_DEFAULT;

	// ICEData.hpp:38
	const uint8_t ICE_APERTURE_MAX = 37;

	// ICEData.hpp:39
	const float32_t ICE_TANGENT_LENGTH_DEFAULT;

	// ICEData.hpp:40
	const uint8_t ICE_PERCENT_MAX = 100;

	// ICEData.hpp:42
	const uint16_t ICE_INVALID_KEY = 65535;

	// ICEData.hpp:43
	const uint16_t ICE_INVALID_INTERVAL = 65535;

	// ICEData.hpp:45
	const uint16_t ICE_MAX_EDIT_KEYS = 100;

	// ICEData.hpp:46
	const uint16_t ICE_MAX_EDIT_INTERVALS = 99;

	// ICEData.hpp:48
	const uint32_t ICE_MAX_UNDO_SIZE = 102400;

	// ICEData.hpp:50
	const float32_t ICE_EPSILON;

	// ICEData.hpp:52
	const float32_t ICE_DATA_SMALL_FLOAT;

	// ICEData.hpp:56
	const int32_t ICE_GROUP_NAME_LENGTH = 128;

	// ICEData.hpp:57
	const int32_t ICE_SHORT_GROUP_NAME_LENGTH = 4;

}

// ICEData.hpp:226
struct ICE::IResourceManager {
	int (*)(...) * _vptr.IResourceManager;

public:
	void IResourceManager(const ICE::IResourceManager &);

	void IResourceManager();

	// ICEData.hpp:229
	virtual const ICETakeData * GetTakeData(ID) const;

	// ICEData.hpp:232
	virtual const ICETakeData * GetTakeData(int32_t) const;

}

// ICEData.hpp:226
void ICE::IResourceManager::IResourceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

