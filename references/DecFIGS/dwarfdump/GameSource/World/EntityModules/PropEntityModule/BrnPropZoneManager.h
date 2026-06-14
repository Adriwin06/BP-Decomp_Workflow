// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct PropGraphicsManager {
		// BrnPropZoneManager.h:465
		struct PropGraphicsReference {
			// BrnPropZoneManager.h:63
			typedef BrnPhysics::Props::PropGraphics PropGraphics;

			// BrnPropZoneManager.h:467
			const BrnWorld::PropGraphicsManager::PropGraphicsReference::PropGraphics * mpPropGraphics;

			// BrnPropZoneManager.h:468
			uint8_t mu8RefCount;

		}

	}

	// BrnPropZoneManager.h:57
	const uint32_t KU_SIZE_OF_ZONE_DATA = 1000;

	// BrnPropZoneManager.h:59
	const uint32_t KU_OVERHEAD_SIGN_PROP_TYPES = 3;

	// BrnPropZoneManager.h:737
	const VecFloat KVF_MIN_DIST_FROM_PLAYER;

}

// BrnPropZoneManager.h:80
struct BrnWorld::PropZoneManager {
private:
	// BrnPropZoneManager.h:350
	PropCellManager mCellManager;

	// BrnPropZoneManager.h:356
	extern const uint32_t KU_SIZE_OF_PROP_ZONE_SLOT = 602;

	// BrnPropZoneManager.h:359
	PropEntityInstance[5418] maProps;

	// BrnPropZoneManager.h:361
	extern const uint32_t KU_SIZE_OF_PART_ZONE_SLOT = 502;

	// BrnPropZoneManager.h:364
	PropPartEntityInstance[4518] maParts;

	// BrnPropZoneManager.h:366
	BitArray<9u> maUsedProps;

	// BrnPropZoneManager.h:367
	BitArray<9u> maUsedParts;

	// BrnPropZoneManager.h:368
	BitArray<5400u> maDontRespawnProps;

	// BrnPropZoneManager.h:369
	BitArray<5400u> maRespawnDifferentProps;

	// BrnPropZoneManager.h:371
	Profile::HitPropsBitArray maPreviouslyHitProps;

	// BrnPropZoneManager.h:373
	uint16_t mu16NumberOfLoadedProps;

	// BrnPropZoneManager.h:376
	extern const uint16_t KU_UNLOADED_ZONE = 65535;

	// BrnPropZoneManager.h:377
	uint16_t[500] mauStartIndexOfZone;

	// BrnPropZoneManager.h:378
	uint16_t[500] mauNumberOfPropsInZone;

	// BrnPropZoneManager.h:379
	uint16_t[500] mauStartIndexOfParts;

	// BrnPropZoneManager.h:380
	uint16_t[500] mauNumberOfPartsInZone;

	// BrnPropZoneManager.h:382
	BitArray<100u> mUsedRotationParams;

	// BrnPropZoneManager.h:383
	PropEntityRotationParams[100] maRotationParams;

	// BrnPropZoneManager.h:385
	Array<uint32_t,80u> mauTrafficLightsToRestore;

public:
	// BrnPropZoneManager.h:85
	void Construct();

	// BrnPropZoneManager.h:89
	bool Prepare();

	// BrnPropZoneManager.h:93
	bool Release();

	// BrnPropZoneManager.h:97
	void Destruct();

	// BrnPropZoneManager.h:101
	uint32_t GetNumberOfPropsInZone(uint16_t) const;

	// BrnPropZoneManager.h:105
	uint32_t GetNumberOfPartsInZone(uint16_t) const;

	// BrnPropZoneManager.h:109
	PropEntityInstance * GetProp(PropEntityID);

	// BrnPropZoneManager.h:114
	PropEntityInstance * GetProp(uint16_t, uint32_t);

	// BrnPropZoneManager.h:118
	PropPartEntityInstance * GetPart(PropEntityID);

	// BrnPropZoneManager.h:124
	PropPartEntityInstance * GetPart(uint16_t, uint16_t, uint16_t);

	// BrnPropZoneManager.h:131
	void LoadZone(const PropZoneData *, const PropPhysicsDataHeader *, Vector3, OutputBuffer_PreScene *);

	// BrnPropZoneManager.h:138
	// Declaration
	void UnloadZone(uint16_t, PropPhysicsResourcePtr, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropZoneManager.h:61
		typedef CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> PropPhysicsResourcePtr;

	}

	// BrnPropZoneManager.h:149
	void UpdateInstance(PropEntityID, Matrix44Affine, Vector3, Vector3, bool, PropPhysicsResourcePtr, float32_t, OutputBuffer_PostPhysics *);

	// BrnPropZoneManager.h:153
	bool IsZoneLoaded(uint16_t) const;

	// BrnPropZoneManager.h:157
	int16_t GetZone(PropEntityID) const;

	// BrnPropZoneManager.h:161
	int32_t GetStartIndexOfZone(uint16_t) const;

	// BrnPropZoneManager.h:172
	void UpdateAnimation(float32_t);

	// BrnPropZoneManager.h:176
	BrnPhysics::Props::eRespawnType GetRespawnType(PropEntityID) const;

	// BrnPropZoneManager.h:181
	bool HasPropBeenHit(uint32_t, uint32_t) const;

	// BrnPropZoneManager.h:185
	bool HasPropBeenHit(PropEntityID) const;

	// BrnPropZoneManager.h:189
	void RecordHitProp(PropEntityID);

	// BrnPropZoneManager.h:194
	// Declaration
	void RecordHitProp(int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropZoneManager.h:707
		using namespace CgsDev::Message;

	}

	// BrnPropZoneManager.h:198
	void SetHitPropBitArray(const Profile::HitPropsBitArray &);

	// BrnPropZoneManager.h:201
	// Declaration
	void ResetProgression() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropZoneManager.h:718
		using namespace CgsDev::Message;

	}

	// BrnPropZoneManager.h:208
	void UpdateCollisionStreaming(Vector3, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *);

	// BrnPropZoneManager.h:216
	void AddPropToScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:223
	void RemovePropFromScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:230
	void RemovePropFromSim(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, OutputBuffer_PreScene *);

	// BrnPropZoneManager.h:237
	void AddPropPartsToScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:244
	void RemovePropPartsFromScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:248
	void RemoveAllPropsAndParts(OutputBuffer_PreScene *);

	// BrnPropZoneManager.h:255
	void AddPropToContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:262
	void AddPropPartsToContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:269
	void RemovePropFromContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:276
	void RemovePropPartsFromContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropZoneManager.h:283
	void RemovePropPartsFromSimIfPhysical(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, OutputBuffer_PreScene *);

	// BrnPropZoneManager.h:289
	bool CanSmash(PropEntityID, PropPhysicsDataHeader *);

	// BrnPropZoneManager.h:293
	void IncrementNumberOfPropsInSim(int32_t);

	// BrnPropZoneManager.h:297
	void IncrementNumberOfPartsInSim(int32_t);

	// BrnPropZoneManager.h:301
	void DecrementNumberOfPropsInSim(int32_t);

	// BrnPropZoneManager.h:305
	void DecrementNumberOfPartsInSim(int32_t);

	// BrnPropZoneManager.h:308
	bool IsInPhysicalBudgetForProps() const;

	// BrnPropZoneManager.h:312
	bool IsInPhysicalBudgetForParts(int32_t) const;

	// BrnPropZoneManager.h:316
	void SendTrafficLightRestoreEvents(OutputBuffer_PrePhysics *);

	// BrnPropZoneManager.h:323
	bool GetPhysicalPartSlot(PropEntityID, int32_t &, PropEntityID &, bool &);

	// BrnPropZoneManager.h:330
	bool GetPhysicalPropSlot(PropEntityID, int32_t &, PropEntityID &, bool &);

	// BrnPropZoneManager.h:334
	void FreePhysicalPropSlot(int32_t);

	// BrnPropZoneManager.h:338
	void FreePhysicalPartSlot(int32_t);

	// BrnPropZoneManager.h:346
	void ClearPropsNearPosition(Vector3, VecFloat, const PropPhysicsDataHeader *, PropInputInterface *, InSceneUpdateInterface *);

private:
	// BrnPropZoneManager.h:389
	int32_t AllocatePropInstancesBlock(uint32_t);

	// BrnPropZoneManager.h:393
	int32_t AllocatePartInstancesBlock(uint32_t);

	// BrnPropZoneManager.h:398
	void DeallocatePropInstancesBlock(uint32_t, uint32_t);

	// BrnPropZoneManager.h:403
	void DeallocatePartInstancesBlock(uint32_t, uint32_t);

	// BrnPropZoneManager.h:406
	void RebuildUpdateList();

	// BrnPropZoneManager.h:409
	void VerifyUsedPropsBitArray() const;

	// BrnPropZoneManager.h:419
	// Declaration
	void LoadProp(int32_t *, int32_t *, int32_t, const PropZoneData *, const PropPhysicsDataHeader *, Vector3, InSceneUpdateInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropZoneManager.h:845
		using namespace CgsDev::Message;

		// BrnPropZoneManager.h:859
		using namespace CgsDev::Message;

		// BrnPropZoneManager.h:905
		using namespace CgsDev::Message;

	}

}

// BrnPropZoneManager.h:436
struct BrnWorld::PropGraphicsManager {
private:
	// BrnPropZoneManager.h:480
	BrnWorld::PropGraphicsManager::PropGraphicsReference[500] maPropGraphicsReferences;

public:
	// BrnPropZoneManager.h:440
	bool Prepare();

	// BrnPropZoneManager.h:443
	bool Release();

	// BrnPropZoneManager.h:447
	bool Register(const BrnWorld::PropGraphicsManager::PropGraphicsReference::PropGraphics *);

	// BrnPropZoneManager.h:451
	bool UnRegister(uint32_t);

	// BrnPropZoneManager.h:455
	const BrnWorld::PropGraphicsManager::PropGraphicsReference::PropGraphics * GetPropGraphics(uint32_t) const;

	// Unknown accessibility
	// BrnPropZoneManager.h:64
	typedef BrnPhysics::Props::PropPartGraphics PropPartGraphics;

	// BrnPropZoneManager.h:460
	const PropGraphicsManager::PropPartGraphics * GetPropPartGraphics(uint32_t, uint32_t) const;

private:
	// BrnPropZoneManager.h:473
	void AddPropGraphics(const BrnWorld::PropGraphicsManager::PropGraphicsReference::PropGraphics *);

	// BrnPropZoneManager.h:477
	void RemovePropGraphics(uint32_t);

}

// BrnPropZoneManager.h:356
extern const uint32_t KU_SIZE_OF_PROP_ZONE_SLOT = 602;

// BrnPropZoneManager.h:361
extern const uint32_t KU_SIZE_OF_PART_ZONE_SLOT = 502;

// BrnPropZoneManager.h:376
extern const uint16_t KU_UNLOADED_ZONE = 65535;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropZoneManager.h:57
	const uint32_t KU_SIZE_OF_ZONE_DATA = 1000;

	// BrnPropZoneManager.h:59
	const uint32_t KU_OVERHEAD_SIGN_PROP_TYPES = 3;

	// BrnPropZoneManager.h:737
	const VecFloat KVF_MIN_DIST_FROM_PLAYER;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropZoneManager.h:57
	const uint32_t KU_SIZE_OF_ZONE_DATA = 1000;

	// BrnPropZoneManager.h:59
	const uint32_t KU_OVERHEAD_SIGN_PROP_TYPES = 3;

	// BrnPropZoneManager.h:737
	const VecFloat KVF_MIN_DIST_FROM_PLAYER;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropZoneManager.h:57
	const uint32_t KU_SIZE_OF_ZONE_DATA = 1000;

	// BrnPropZoneManager.h:59
	const uint32_t KU_OVERHEAD_SIGN_PROP_TYPES = 3;

	// BrnPropZoneManager.h:737
	const VecFloat KVF_MIN_DIST_FROM_PLAYER;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropZoneManager.h:57
	const uint32_t KU_SIZE_OF_ZONE_DATA = 1000;

	// BrnPropZoneManager.h:59
	const uint32_t KU_OVERHEAD_SIGN_PROP_TYPES = 3;

	// BrnPropZoneManager.h:737
	const VecFloat KVF_MIN_DIST_FROM_PLAYER;

}

