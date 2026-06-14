// vertexbuffer.h:27
namespace BrnParticle {
	// VFXPropsResourceType.h:39
	enum eVFXCoronaType {
		VFXCorona_Texture_0 = 0,
		VFXCorona_Texture_1 = 1,
		VFXCorona_Texture_2 = 2,
		VFXCorona_Texture_3 = 3,
		VFXCorona_Texture_4 = 4,
		VFXCorona_Texture_5 = 5,
		VFXCorona_Texture_6 = 6,
		VFXCorona_Texture_7 = 7,
		VFXCorona_Texture_8 = 8,
		VFXCorona_Texture_9 = 9,
		VFXCorona_Texture_10 = 10,
		VFXCorona_Texture_11 = 11,
		VFXCorona_Texture_12 = 12,
		VFXCorona_Texture_13 = 13,
		VFXCorona_Texture_14 = 14,
		VFXCorona_Texture_15 = 15,
		VFXCorona_Texture_16 = 16,
		VFXCoronaTypeMax = 17,
	}

	// VFXPropsResourceType.h:61
	enum eVFXMaterialType {
		VFXMaterialTypeDirt = 0,
		VFXMaterialTypeFoliage = 1,
		VFXMaterialTypeMetal = 2,
		VFXMaterialTypePlastic = 3,
		VFXMaterialTypeStuntYellow = 4,
		VFXMaterialTypeWood = 5,
		VFXMaterialTypeWater = 6,
		VFXMaterialTypeStone = 7,
		VFXMaterialTypePaper = 8,
		VFXMaterialTypeBillboard = 9,
		VFXMaterialTypeRedBarrelExplo = 10,
		VFXMaterialTypeBindust = 11,
		VFXMaterialTypeWaterBarrel = 12,
		VFXMaterialTypeDebug = 13,
		VFXMaterialTypeNone = 14,
		VFXMaterialTypeMax = 15,
	}

}

// VFXPropsResourceType.h:84
struct BrnParticle::VFXLocator {
	// VFXPropsResourceType.h:114
	Vector3 mPosition;

	// VFXPropsResourceType.h:115
	uint32_t mHashedName;

	// VFXPropsResourceType.h:117
	extern const uint32_t KU_MAX_DEBUG_LEF_NAME_LENGTH = 60;

	// VFXPropsResourceType.h:118
	char[60] macDebugLefName;

public:
	// VFXPropsResourceType.h:87
	void SetName(const char *);

	// VFXPropsResourceType.h:102
	uint32_t GetHash() const;

	// VFXPropsResourceType.h:107
	void SetTransform(Matrix44Affine);

}

// VFXPropsResourceType.h:123
struct BrnParticle::VFXMaterial {
	// VFXPropsResourceType.h:152
	uint32_t mType;

	// VFXPropsResourceType.h:153
	uint32_t mNumLocators;

	// VFXPropsResourceType.h:154
	VFXLocator * mpLocators;

public:
	// VFXPropsResourceType.h:126
	void SetMaterialType(uint32_t);

	// VFXPropsResourceType.h:131
	BrnParticle::eVFXMaterialType GetMaterialType() const;

	// VFXPropsResourceType.h:138
	VFXLocator * AddLocator(VFXLocator *);

}

// VFXPropsResourceType.h:158
struct BrnParticle::VFXCoronaTypeData {
private:
	// VFXPropsResourceType.h:256
	uint32_t mnID;

	// VFXPropsResourceType.h:257
	uint32_t mType;

	// VFXPropsResourceType.h:258
	float32_t mrTimeOn;

	// VFXPropsResourceType.h:259
	float32_t mrTimeOff;

	// VFXPropsResourceType.h:260
	float32_t mrSizeMin;

	// VFXPropsResourceType.h:261
	float32_t mrSizeMax;

	// VFXPropsResourceType.h:262
	float32_t mrMasterTime;

	// VFXPropsResourceType.h:263
	bool mbSynchronised;

public:
	// VFXPropsResourceType.h:161
	void SetCoronaType(uint32_t);

	// VFXPropsResourceType.h:166
	BrnParticle::eVFXCoronaType GetCoronaType() const;

	// VFXPropsResourceType.h:172
	int32_t GetID() const;

	// VFXPropsResourceType.h:177
	float32_t GetTimeOn() const;

	// VFXPropsResourceType.h:182
	float32_t GetTimeOff() const;

	// VFXPropsResourceType.h:187
	float32_t GetSizeMin() const;

	// VFXPropsResourceType.h:192
	float32_t GetSizeMax() const;

	// VFXPropsResourceType.h:197
	float32_t GetMasterTime() const;

	// VFXPropsResourceType.h:202
	float32_t GetTotalTime() const;

	// VFXPropsResourceType.h:207
	bool IsSynchronised() const;

	// VFXPropsResourceType.h:212
	void SetID(int32_t);

	// VFXPropsResourceType.h:217
	void SetTimeOn(float32_t);

	// VFXPropsResourceType.h:222
	void SetTimeOff(float32_t);

	// VFXPropsResourceType.h:227
	void SetSizeMin(float32_t);

	// VFXPropsResourceType.h:232
	void SetSizeMax(float32_t);

	// VFXPropsResourceType.h:237
	void SetIsSynchronised(bool);

	// VFXPropsResourceType.h:242
	void SetMasterTime(float32_t);

	// VFXPropsResourceType.h:247
	void UpdateMasterTime(float32_t);

}

// VFXPropsResourceType.h:267
struct BrnParticle::VFXCoronaType {
	// VFXPropsResourceType.h:302
	Matrix44Affine mTransform;

	// VFXPropsResourceType.h:303
	VFXCoronaTypeData * mpTypeData;

private:
	// VFXPropsResourceType.h:306
	float32_t mrTimeOffset;

public:
	// VFXPropsResourceType.h:269
	void VFXCoronaType();

	// VFXPropsResourceType.h:274
	VFXCoronaTypeData * GetTypeData() const;

	// VFXPropsResourceType.h:279
	void SetTypeData(VFXCoronaTypeData *);

	// VFXPropsResourceType.h:284
	void SetTransform(Matrix44Affine);

	// VFXPropsResourceType.h:289
	float32_t GetTimeOffset() const;

	// VFXPropsResourceType.h:294
	void SetTimeOffset(float32_t);

}

// VFXPropsResourceType.h:311
struct BrnParticle::VFXPropState {
	// VFXPropsResourceType.h:344
	VFXMaterial * mpVFXMaterial;

	// VFXPropsResourceType.h:345
	uint32_t muNumVFXMaterials;

	// VFXPropsResourceType.h:347
	VFXCoronaType * mpCoronaType;

	// VFXPropsResourceType.h:348
	uint32_t muNumCoronas;

public:
	// VFXPropsResourceType.h:314
	void VFXPropState();

	// VFXPropsResourceType.h:320
	VFXMaterial * AddMaterial(VFXMaterial *);

	// VFXPropsResourceType.h:332
	VFXCoronaType * AddCoronaType(VFXCoronaType *);

}

// VFXPropsResourceType.h:352
struct BrnParticle::VFXProp {
private:
	// VFXPropsResourceType.h:436
	uint64_t mPropID;

	// VFXPropsResourceType.h:437
	VFXPropState * mpPropStates;

	// VFXPropsResourceType.h:438
	uint32_t muNumPropStates;

public:
	// VFXPropsResourceType.h:355
	uint32_t HashString(const char *);

	// VFXPropsResourceType.h:370
	void Initialise();

	// VFXPropsResourceType.h:377
	void SetPropID(const char *);

	// VFXPropsResourceType.h:386
	uint64_t GetPropID() const;

	// VFXPropsResourceType.h:392
	uint32_t GetNumStates() const;

	// VFXPropsResourceType.h:400
	const VFXPropState * GetState(uint32_t) const;

	// VFXPropsResourceType.h:407
	VFXPropState * AddPropState(VFXPropState *);

	// VFXPropsResourceType.h:423
	void VFXProp();

	// VFXPropsResourceType.h:429
	void VFXProp(char *);

}

// VFXPropsResourceType.h:446
struct BrnParticle::VFXPropCollection {
private:
	// VFXPropsResourceType.h:645
	VFXProp * mpPropTable;

	// VFXPropsResourceType.h:646
	uint32_t muPropTableSize;

	// VFXPropsResourceType.h:648
	VFXPropState * mpPropStateTable;

	// VFXPropsResourceType.h:649
	uint32_t muPropStateTableSize;

	// VFXPropsResourceType.h:651
	VFXMaterial * mpMaterialTable;

	// VFXPropsResourceType.h:652
	uint32_t muMaterialTableSize;

	// VFXPropsResourceType.h:654
	VFXLocator * mpLocatorTable;

	// VFXPropsResourceType.h:655
	uint32_t muLocatorTableSize;

	// VFXPropsResourceType.h:657
	VFXCoronaType * mpCoronaTable;

	// VFXPropsResourceType.h:658
	uint32_t muCoronaTableSize;

	// VFXPropsResourceType.h:660
	VFXCoronaTypeData * mpCoronaTypeDataTable;

	// VFXPropsResourceType.h:661
	uint32_t muCoronaDataTableSize;

	// VFXPropsResourceType.h:672
	uint32_t muVersion;

public:
	// VFXPropsResourceType.h:449
	void ~VFXPropCollection();

	// VFXPropsResourceType.h:460
	const VFXProp * GetTable() const;

	// VFXPropsResourceType.h:466
	uint32_t GetTableSize() const;

	// VFXPropsResourceType.h:479
	void Initialise(VFXProp *, VFXPropState *, VFXMaterial *, VFXLocator *, VFXCoronaType *, VFXCoronaTypeData *);

	// VFXPropsResourceType.h:515
	VFXProp * CreateProp();

	// VFXPropsResourceType.h:526
	VFXProp * CreateProp(int);

	// VFXPropsResourceType.h:537
	VFXPropState * CreatePropState();

	// VFXPropsResourceType.h:550
	VFXMaterial * CreateMaterial();

	// VFXPropsResourceType.h:562
	VFXLocator * CreateLocator();

	// VFXPropsResourceType.h:574
	VFXCoronaType * CreateCoronaType();

	// VFXPropsResourceType.h:586
	VFXCoronaTypeData * CreateCoronaTypeData();

	// VFXPropsResourceType.h:603
	uint32_t SizeOf() const;

	// VFXPropsResourceType.h:614
	uint32_t GetNumberCoronaTypes();

	// VFXPropsResourceType.h:619
	VFXCoronaTypeData * GetCoronaTypeDataByID(int32_t);

	// VFXPropsResourceType.h:634
	VFXCoronaTypeData * GetCoronaTypeDataByOffset(uint32_t);

}

// VFXPropsResourceType.h:117
extern const uint32_t KU_MAX_DEBUG_LEF_NAME_LENGTH = 60;

// VFXPropsResourceType.h:686
void BrnParticle::VFXPropCollectionResourceType::VFXPropCollectionResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// VFXPropsResourceType.h:686
struct BrnParticle::VFXPropCollectionResourceType : public CgsResource::Type {
public:
	// VFXPropsResourceType.cpp:245
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// VFXPropsResourceType.cpp:274
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// VFXPropsResourceType.cpp:295
	virtual uint32_t GetTypeID() const;

	// VFXPropsResourceType.cpp:313
	virtual void FixUp(void *, const Resource &) const;

	// VFXPropsResourceType.cpp:407
	virtual void FixDown(void *, const Resource &) const;

	// VFXPropsResourceType.cpp:602
	virtual bool DeSerialise(void *) const;

	// VFXPropsResourceType.cpp:619
	virtual uint32_t GetImportCount(const void *) const;

	// VFXPropsResourceType.cpp:638
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}

