// Behaviour.h:50
namespace ICE {
	// ICEDataEnums.hpp:41
	enum eICESpace {
		eICE_CAR_SPACE = 0,
		eICE_WORLD_SPACE = 1,
		eICE_HYBRID_SPACE = 2,
		eICE_SCENE_SPACE = 3,
		eICE_CAR2_SPACE = 4,
		eICE_TRAFFIC_LIGHT_SPACE = 5,
		eICE_TAKEDOWN_SPACE = 6,
		eICE_IMPACT_SPACE = 7,
		eICE_REVERSE_TAKEDOWN_SPACE = 8,
		eICE_GAMEPLAY_SPACE = 9,
		eICE_HEADING_SPACE = 10,
		eICE_BYSTANDER_SPACE = 11,
		eICE_HEADING2_SPACE = 12,
		eICE_LOOSE_HEADING_SPACE = 13,
		eICE_NUM_SPACES = 14,
	}

	// ICEDataEnums.hpp:26
	const int32_t ICE_MAX_GENERIC_CATEGORY_NAMES = 1;

	// ICEDataEnums.hpp:28
	const int32_t ICE_MAX_WORLD_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:30
	const int32_t ICE_MAX_VEHICLE_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:32
	const int32_t ICE_MAX_EVENTS_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:34
	const uint16_t ICE_PARAMETER_MAX = 65535;

}

// ICEDataEnums.hpp:237
struct ICE::ICEParameter {
private:
	// ICEDataEnums.hpp:257
	uint16_t muPacked;

public:
	// ICEDataEnums.hpp:240
	void ICEParameter(float32_t);

	// ICEDataEnums.hpp:242
	float32_t GetValue();

	// ICEDataEnums.hpp:243
	void SetValue(float32_t);

	// ICEDataEnums.hpp:245
	uint16_t * GetPackedPtr();

	// ICEDataEnums.hpp:247
	bool operator<(const ICEParameter &) const;

	// ICEDataEnums.hpp:248
	bool operator>(const ICEParameter &) const;

	// ICEDataEnums.hpp:249
	bool operator>=(const ICEParameter &) const;

	// ICEDataEnums.hpp:250
	bool operator<=(const ICEParameter &) const;

	// ICEDataEnums.hpp:251
	bool operator==(const ICEParameter &) const;

	// ICEDataEnums.hpp:252
	bool operator!=(const ICEParameter &) const;

	// ICEDataEnums.hpp:253
	ICEParameter & operator=(const ICEParameter &);

}

// ICEDataEnums.hpp:265
struct ICE::ICEValue {
private:
	// ICEDataEnums.hpp:289
	// ICEDataEnums.hpp:289
	union {
		// ICEDataEnums.hpp:289
		int32_t liInt;

		// ICEDataEnums.hpp:289
		float32_t lfFloat;

	}
 Value;

public:
	// ICEDataEnums.hpp:268
	void ICEValue();

	// ICEDataEnums.hpp:269
	void ICEValue(float32_t);

	// ICEDataEnums.hpp:270
	void ICEValue(int32_t);

	// ICEDataEnums.hpp:271
	void ICEValue(uint32_t);

	// ICEDataEnums.hpp:273
	void Set(int32_t);

	// ICEDataEnums.hpp:274
	void Set(float32_t);

	// ICEDataEnums.hpp:276
	bool GetBool() const;

	// ICEDataEnums.hpp:277
	float32_t GetFloat() const;

	// ICEDataEnums.hpp:278
	int32_t GetSignedInt() const;

	// ICEDataEnums.hpp:279
	uint32_t GetUnsignedInt() const;

	// ICEDataEnums.hpp:281
	ICEValue & operator=(float32_t);

	// ICEDataEnums.hpp:282
	ICEValue & operator=(int32_t);

	// ICEDataEnums.hpp:283
	ICEValue & operator=(const ICEValue &);

	// ICEDataEnums.hpp:284
	bool operator==(const ICEValue &) const;

	// ICEDataEnums.hpp:285
	bool operator!=(const ICEValue &) const;

}

// ICEDataEnums.hpp:371
struct ICE::ICEChannel {
private:
	// ICEDataEnums.hpp:417
	uint16_t mu16Keys;

	// ICEDataEnums.hpp:418
	uint16_t mu16Intervals;

	// ICEDataEnums.hpp:419
	uint16_t mu16CurrentInterval;

	// ICEDataEnums.hpp:420
	uint16_t * mpKeyIndices;

	// ICEDataEnums.hpp:421
	ICEParameter * mpParameters;

public:
	// ICEDataEnums.hpp:374
	void Construct();

	// ICEDataEnums.hpp:376
	void Prepare();

	// ICEDataEnums.hpp:378
	int16_t GetNumKeys() const;

	// ICEDataEnums.hpp:379
	void SetNumKeys(int16_t);

	// ICEDataEnums.hpp:381
	int16_t GetNumIntervals() const;

	// ICEDataEnums.hpp:382
	void SetNumIntervals(int16_t);

	// ICEDataEnums.hpp:384
	int16_t GetCurrentInterval() const;

	// ICEDataEnums.hpp:385
	void SetCurrentInterval(uint16_t);

	// ICEDataEnums.hpp:387
	int16_t GetKeyIndex(uint16_t) const;

	// ICEDataEnums.hpp:388
	void SetIntervalKey(uint16_t, int16_t);

	// ICEDataEnums.hpp:390
	float32_t GetIntervalParameter(uint16_t) const;

	// ICEDataEnums.hpp:391
	void SetIntervalParameter(uint16_t, float32_t);

	// ICEDataEnums.hpp:393
	bool IsHardCut(uint16_t, int32_t) const;

	// ICEDataEnums.hpp:394
	bool IsHardCut(int32_t) const;

	// ICEDataEnums.hpp:396
	float32_t GetIntervalSize(uint16_t) const;

	// ICEDataEnums.hpp:397
	void GetIntervalBracket(uint16_t, float32_t *, float32_t *) const;

	// ICEDataEnums.hpp:398
	float32_t GetIntervalSize() const;

	// ICEDataEnums.hpp:399
	void GetIntervalBracket(float32_t *, float32_t *) const;

	// ICEDataEnums.hpp:401
	float32_t GetIntervalEnd() const;

	// ICEDataEnums.hpp:402
	float32_t GetIntervalStart() const;

	// ICEDataEnums.hpp:403
	float32_t GetIntervalStart(uint16_t) const;

	// ICEDataEnums.hpp:404
	float32_t GetIntervalEnd(uint16_t) const;

	// ICEDataEnums.hpp:406
	bool HasData() const;

	// ICEDataEnums.hpp:407
	bool SetParameter(float32_t, float32_t *, float32_t *);

	// ICEDataEnums.hpp:408
	void EnforceSpacing(uint16_t, float32_t);

	// ICEDataEnums.hpp:410
	void SetKeyData(uint16_t *);

	// ICEDataEnums.hpp:411
	uint16_t * GetKeyData() const;

	// ICEDataEnums.hpp:412
	void SetParameterData(ICEParameter *);

	// ICEDataEnums.hpp:413
	ICEParameter * GetParameterData() const;

}

// Behaviour.h:50
namespace ICE {
	// ICEDataEnums.hpp:26
	const int32_t ICE_MAX_GENERIC_CATEGORY_NAMES = 1;

	// ICEDataEnums.hpp:28
	const int32_t ICE_MAX_WORLD_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:30
	const int32_t ICE_MAX_VEHICLE_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:32
	const int32_t ICE_MAX_EVENTS_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:34
	const uint16_t ICE_PARAMETER_MAX = 65535;

}

// ICEActionQueue.hpp:21
namespace ICE {
	// ICEDataEnums.hpp:41
	enum eICESpace {
		eICE_CAR_SPACE = 0,
		eICE_WORLD_SPACE = 1,
		eICE_HYBRID_SPACE = 2,
		eICE_SCENE_SPACE = 3,
		eICE_CAR2_SPACE = 4,
		eICE_TRAFFIC_LIGHT_SPACE = 5,
		eICE_TAKEDOWN_SPACE = 6,
		eICE_IMPACT_SPACE = 7,
		eICE_REVERSE_TAKEDOWN_SPACE = 8,
		eICE_GAMEPLAY_SPACE = 9,
		eICE_HEADING_SPACE = 10,
		eICE_BYSTANDER_SPACE = 11,
		eICE_HEADING2_SPACE = 12,
		eICE_LOOSE_HEADING_SPACE = 13,
		eICE_NUM_SPACES = 14,
	}

	// ICEDataEnums.hpp:214
	enum ICEInputType {
		eICE_INPUT_BOOL = 0,
		eICE_INPUT_ANALOG = 1,
		eICE_INPUT_DISCREET = 2,
		eICE_INPUT_ACCELERATED = 3,
		eICE_NUM_INPUT_TYPES = 4,
	}

	// ICEDataEnums.hpp:225
	enum ICEDataType {
		eICE_INT = 0,
		eICE_UINT = 1,
		eICE_HASH = 2,
		eICE_FIXED = 3,
		eICE_FLOAT = 4,
		eICE_NUM_DATA_TYPES = 5,
	}

	// ICEDataEnums.hpp:176
	bool IsElementValid(int32_t);

	// ICEDataEnums.hpp:26
	const int32_t ICE_MAX_GENERIC_CATEGORY_NAMES = 1;

	// ICEDataEnums.hpp:28
	const int32_t ICE_MAX_WORLD_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:30
	const int32_t ICE_MAX_VEHICLE_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:32
	const int32_t ICE_MAX_EVENTS_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:34
	const uint16_t ICE_PARAMETER_MAX = 65535;

}

// ICEDataEnums.hpp:293
struct ICE::ICEElementDescription {
	// ICEDataEnums.hpp:313
	char * mpTag;

	// ICEDataEnums.hpp:314
	char * mpDisplayName;

	// ICEDataEnums.hpp:315
	int32_t miChannelNumber;

	// ICEDataEnums.hpp:317
	ICE::ICEDataType mDataType;

	// ICEDataEnums.hpp:318
	int32_t miDataBits;

	// ICEDataEnums.hpp:320
	ICEValue mDefault;

	// ICEDataEnums.hpp:321
	ICEValue mMin;

	// ICEDataEnums.hpp:322
	ICEValue mMax;

	// ICEDataEnums.hpp:324
	float32_t mfQuantSlotsLo;

	// ICEDataEnums.hpp:325
	float32_t mfQuantRangeLo;

	// ICEDataEnums.hpp:327
	float32_t mfQuantSlotsHi;

	// ICEDataEnums.hpp:328
	float32_t mfQuantRangeHi;

	// ICEDataEnums.hpp:334
	int32_t miCubicLinear;

	// ICEDataEnums.hpp:335
	int32_t miTangentScale;

	// ICEDataEnums.hpp:339
	ICE::ICEInputType mInputType;

	// ICEDataEnums.hpp:340
	int32_t miIncButton;

	// ICEDataEnums.hpp:341
	int32_t miDecButton;

	// ICEDataEnums.hpp:342
	float32_t mfIncDecSpeed;

	// ICEDataEnums.hpp:343
	float32_t mfIncDecAccel;

	// ICEDataEnums.hpp:344
	float32_t mfIncDecDecel;

	// ICEDataEnums.hpp:346
	char ** mpTokens;

	// ICEDataEnums.hpp:347
	int32_t miTokens;

public:
	// ICEDataEnums.hpp:294
	void Prepare();

	// ICEDataEnums.hpp:295
	bool IsInt() const;

	// ICEDataEnums.hpp:296
	bool IsFloat() const;

	// ICEDataEnums.hpp:297
	bool IsHash() const;

	// ICEDataEnums.hpp:299
	uint32_t Encode(float32_t) const;

	// ICEDataEnums.hpp:300
	float32_t Decode(uint32_t) const;

	// ICEDataEnums.hpp:302
	float32_t GetDefaultFloat() const;

	// ICEDataEnums.hpp:303
	int32_t GetDefaultSignedInt() const;

	// ICEDataEnums.hpp:305
	uint32_t GetRawInt(uint8_t *, int32_t) const;

	// ICEDataEnums.hpp:306
	void SetRawInt(uint8_t *, int32_t, uint32_t) const;

	// ICEDataEnums.hpp:308
	ICEValue GetValue(uint8_t *, int32_t) const;

	// ICEDataEnums.hpp:309
	void SetValue(uint8_t *, int32_t, const ICEValue &) const;

	// ICEDataEnums.hpp:311
	uint32_t GetDataSize(int32_t) const;

}

// ICEDataEnums.hpp:358
struct ICE::ICEChannelDescription {
	// ICEDataEnums.hpp:359
	char * mpTag;

	// ICEDataEnums.hpp:361
	int32_t miNumKeyElements;

	// ICEDataEnums.hpp:362
	int32_t[28] miKeyElements;

	// ICEDataEnums.hpp:364
	int32_t miNumIntervalElements;

	// ICEDataEnums.hpp:365
	int32_t[20] miIntervalElements;

}

// ICEMath.hpp:43
namespace ICE {
	// ICEDataEnums.hpp:26
	const int32_t ICE_MAX_GENERIC_CATEGORY_NAMES = 1;

	// ICEDataEnums.hpp:28
	const int32_t ICE_MAX_WORLD_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:30
	const int32_t ICE_MAX_VEHICLE_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:32
	const int32_t ICE_MAX_EVENTS_CATEGORY_NAMES = 2;

	// ICEDataEnums.hpp:34
	const uint16_t ICE_PARAMETER_MAX = 65535;

}

