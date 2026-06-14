// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct PropCellManager {
		// BrnPropCellManager.h:302
		struct PhysicalParams {
			// BrnPropCellManager.h:304
			PropEntityID mEntityId;

			// BrnPropCellManager.h:305
			float32_t mfTimeInSim;

		}

	}

	// BrnPropCellManager.h:33
	const uint32_t KU_MAX_BROKEN_PROPS_PER_FRAME = 32;

}

// BrnPropCellManager.h:45
struct BrnWorld::PropCellRecord {
private:
	// BrnPropCellManager.h:74
	PropCellId mCellId;

	// BrnPropCellManager.h:75
	uint16_t mu16StartIndex;

	// BrnPropCellManager.h:76
	uint16_t mu16EndIndex;

	// BrnPropCellManager.h:77
	int16_t mi16ZoneId;

	// BrnPropCellManager.h:78
	bool mbActive;

public:
	// BrnPropCellManager.h:52
	void Constuct(int16_t, int16_t, const PropCellData *);

	// BrnPropCellManager.h:55
	PropCellId GetId() const;

	// BrnPropCellManager.h:58
	int16_t GetZoneId() const;

	// BrnPropCellManager.h:61
	uint16_t GetStartIndex() const;

	// BrnPropCellManager.h:64
	uint16_t GetEndIndex() const;

	// BrnPropCellManager.h:68
	void SetActive(bool);

	// BrnPropCellManager.h:71
	bool IsActive() const;

}

// BrnPropCellManager.h:90
struct BrnWorld::PropCellManager {
private:
	// BrnPropCellManager.h:309
	PropCellRecord[150] maCells;

	// BrnPropCellManager.h:310
	int32_t miNumLoadedCells;

	// BrnPropCellManager.h:313
	PropEntityInstance * mpaProps;

	// BrnPropCellManager.h:314
	PropPartEntityInstance * mpaPropParts;

	// BrnPropCellManager.h:317
	BitArray<15u> mPhysicalProps;

	// BrnPropCellManager.h:318
	BitArray<30u> mPhysicalParts;

	// BrnPropCellManager.h:320
	BrnWorld::PropCellManager::PhysicalParams[15] maPhysicalPropParams;

	// BrnPropCellManager.h:321
	BrnWorld::PropCellManager::PhysicalParams[30] maPhysicalPartParams;

	// BrnPropCellManager.h:324
	PropCellId[4] maTargetList;

	// BrnPropCellManager.h:325
	int32_t miSizeOfTargetList;

	// BrnPropCellManager.h:326
	int32_t miNumPropsInSim;

	// BrnPropCellManager.h:327
	int32_t miNumPartsInSim;

	// BrnPropCellManager.h:329
	uint16_t mu16NumberOfPropVolumesInScene;

	// BrnPropCellManager.h:330
	uint16_t mu16NumberOfPropEntitiesInScene;

public:
	// BrnPropCellManager.h:96
	void Construct(PropEntityInstance *, PropPartEntityInstance *);

	// BrnPropCellManager.h:101
	void AddCells(const PropZoneData *, int32_t);

	// BrnPropCellManager.h:108
	// Declaration
	void RemoveCells(int16_t, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.h:39
		typedef CgsContainers::Set<BrnWorld::PropEntityID,32u> RecentlyBrokenPropsArray;

	}

	// BrnPropCellManager.h:112
	bool IsCellLoaded(PropCellId) const;

	// BrnPropCellManager.h:119
	void Update(Vector3, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *);

	// BrnPropCellManager.h:123
	// Declaration
	void GenerateTargetList(Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:200
		using namespace BrnPhysics::Props;

	}

	// BrnPropCellManager.h:130
	// Declaration
	void AddPropToScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:697
		using namespace CgsDev::Message;

	}

	// BrnPropCellManager.h:137
	void RemovePropFromScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:144
	// Declaration
	void AddPropPartsToScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:764
		using namespace CgsDev::Message;

	}

	// BrnPropCellManager.h:151
	void RemovePropPartsFromScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:158
	// Declaration
	void AddPropToContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:280
		using namespace CgsDev::Message;

	}

	// BrnPropCellManager.h:166
	// Declaration
	void AddPropPartsToContactGeneration(PropEntityInstance *, PropPartEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:343
		using namespace CgsDev::Message;

	}

	// BrnPropCellManager.h:173
	void RemovePropFromContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:180
	void RemovePropPartsFromContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:187
	void RemovePropFromSim(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, PropInputInterface *);

	// BrnPropCellManager.h:194
	void RemovePropPartsFromSimIfPhysical(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, OutputBuffer_PreScene *);

	// BrnPropCellManager.h:200
	// Declaration
	void ActivateCell(PropCellRecord *, const PropPhysicsDataHeader *, InSceneUpdateInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:502
		using namespace CgsDev::Message;

	}

	// BrnPropCellManager.h:207
	// Declaration
	void DeactivateCell(PropCellRecord *, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.cpp:553
		using namespace CgsDev::Message;

	}

	// BrnPropCellManager.h:211
	bool CanAddPartVolumes(const PropTypeData *);

	// BrnPropCellManager.h:214
	int32_t GetNumberOfPropsInSim();

	// BrnPropCellManager.h:217
	int32_t GetNumberOfPartsInSim();

	// BrnPropCellManager.h:221
	void IncrementNumberOfPropsInSim(int32_t);

	// BrnPropCellManager.h:225
	void IncrementNumberOfPartsInSim(int32_t);

	// BrnPropCellManager.h:229
	void DecrementNumberOfPropsInSim(int32_t);

	// BrnPropCellManager.h:233
	void DecrementNumberOfPartsInSim(int32_t);

	// BrnPropCellManager.h:237
	PropEntityInstance * GetProp(PropEntityID);

	// BrnPropCellManager.h:240
	PropPartEntityInstance * GetPart(PropEntityID);

	// BrnPropCellManager.h:246
	bool CanSmash(PropEntityID, PropPhysicsDataHeader *);

	// BrnPropCellManager.h:249
	bool IsInPhysicalBudgetForProps() const;

	// BrnPropCellManager.h:253
	bool IsInPhysicalBudgetForParts(int32_t) const;

	// BrnPropCellManager.h:260
	bool GetPhysicalPartSlot(PropEntityID, int32_t &, PropEntityID &, bool &);

	// BrnPropCellManager.h:267
	bool GetPhysicalPropSlot(PropEntityID, int32_t &, PropEntityID &, bool &);

	// BrnPropCellManager.h:271
	void FreePhysicalPropSlot(int32_t);

	// BrnPropCellManager.h:275
	void FreePhysicalPartSlot(int32_t);

	// BrnPropCellManager.h:280
	void IncrementPropsTimeInSim(int32_t, float32_t);

	// BrnPropCellManager.h:285
	void IncrementPartsTimeInSim(int32_t, float32_t);

	// BrnPropCellManager.h:288
	void Clear();

	// BrnPropCellManager.h:296
	void ClearPropsNearPosition(Vector3, VecFloat, const PropPhysicsDataHeader *, PropInputInterface *, InSceneUpdateInterface *);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropCellManager.h:33
	const uint32_t KU_MAX_BROKEN_PROPS_PER_FRAME = 32;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropCellManager.h:33
	const uint32_t KU_MAX_BROKEN_PROPS_PER_FRAME = 32;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropCellManager.h:33
	const uint32_t KU_MAX_BROKEN_PROPS_PER_FRAME = 32;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropCellManager.h:33
	const uint32_t KU_MAX_BROKEN_PROPS_PER_FRAME = 32;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct PropCellManager {
		// BrnPropCellManager.h:302
		struct PhysicalParams {
			// BrnPropCellManager.h:304
			PropEntityID mEntityId;

			// BrnPropCellManager.h:305
			float32_t mfTimeInSim;

		}

	}

	// BrnPropCellManager.h:33
	const uint32_t KU_MAX_BROKEN_PROPS_PER_FRAME = 32;

}

// BrnPropCellManager.h:90
struct BrnWorld::PropCellManager {
private:
	// BrnPropCellManager.h:309
	PropCellRecord[150] maCells;

	// BrnPropCellManager.h:310
	int32_t miNumLoadedCells;

	// BrnPropCellManager.h:313
	PropEntityInstance * mpaProps;

	// BrnPropCellManager.h:314
	PropPartEntityInstance * mpaPropParts;

	// BrnPropCellManager.h:317
	BitArray<15u> mPhysicalProps;

	// BrnPropCellManager.h:318
	BitArray<30u> mPhysicalParts;

	// BrnPropCellManager.h:320
	BrnWorld::PropCellManager::PhysicalParams[15] maPhysicalPropParams;

	// BrnPropCellManager.h:321
	BrnWorld::PropCellManager::PhysicalParams[30] maPhysicalPartParams;

	// BrnPropCellManager.h:324
	PropCellId[4] maTargetList;

	// BrnPropCellManager.h:325
	int32_t miSizeOfTargetList;

	// BrnPropCellManager.h:326
	int32_t miNumPropsInSim;

	// BrnPropCellManager.h:327
	int32_t miNumPartsInSim;

	// BrnPropCellManager.h:329
	uint16_t mu16NumberOfPropVolumesInScene;

	// BrnPropCellManager.h:330
	uint16_t mu16NumberOfPropEntitiesInScene;

public:
	// BrnPropCellManager.h:96
	void Construct(PropEntityInstance *, PropPartEntityInstance *);

	// BrnPropCellManager.h:101
	void AddCells(const PropZoneData *, int32_t);

	// BrnPropCellManager.h:108
	// Declaration
	void RemoveCells(int16_t, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropCellManager.h:39
		typedef CgsContainers::Set<BrnWorld::PropEntityID,32u> RecentlyBrokenPropsArray;

	}

	// BrnPropCellManager.h:112
	bool IsCellLoaded(PropCellId) const;

	// BrnPropCellManager.h:119
	void Update(Vector3, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *);

	// BrnPropCellManager.h:123
	void GenerateTargetList(Vector3);

	// BrnPropCellManager.h:130
	void AddPropToScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:137
	void RemovePropFromScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:144
	void AddPropPartsToScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:151
	void RemovePropPartsFromScene(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:158
	void AddPropToContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:166
	void AddPropPartsToContactGeneration(PropEntityInstance *, PropPartEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:173
	void RemovePropFromContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:180
	void RemovePropPartsFromContactGeneration(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, InSceneUpdateInterface *);

	// BrnPropCellManager.h:187
	void RemovePropFromSim(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, PropInputInterface *);

	// BrnPropCellManager.h:194
	void RemovePropPartsFromSimIfPhysical(PropEntityInstance *, const PropTypeData *, PropVolumeInstanceID, OutputBuffer_PreScene *);

	// BrnPropCellManager.h:200
	void ActivateCell(PropCellRecord *, const PropPhysicsDataHeader *, InSceneUpdateInterface *);

	// BrnPropCellManager.h:207
	void DeactivateCell(PropCellRecord *, const PropPhysicsDataHeader *, RecentlyBrokenPropsArray *, OutputBuffer_PreScene *);

	// BrnPropCellManager.h:211
	bool CanAddPartVolumes(const PropTypeData *);

	// BrnPropCellManager.h:214
	int32_t GetNumberOfPropsInSim();

	// BrnPropCellManager.h:217
	int32_t GetNumberOfPartsInSim();

	// BrnPropCellManager.h:221
	void IncrementNumberOfPropsInSim(int32_t);

	// BrnPropCellManager.h:225
	void IncrementNumberOfPartsInSim(int32_t);

	// BrnPropCellManager.h:229
	void DecrementNumberOfPropsInSim(int32_t);

	// BrnPropCellManager.h:233
	void DecrementNumberOfPartsInSim(int32_t);

	// BrnPropCellManager.h:237
	PropEntityInstance * GetProp(PropEntityID);

	// BrnPropCellManager.h:240
	PropPartEntityInstance * GetPart(PropEntityID);

	// BrnPropCellManager.h:246
	bool CanSmash(PropEntityID, PropPhysicsDataHeader *);

	// BrnPropCellManager.h:249
	bool IsInPhysicalBudgetForProps() const;

	// BrnPropCellManager.h:253
	bool IsInPhysicalBudgetForParts(int32_t) const;

	// BrnPropCellManager.h:260
	bool GetPhysicalPartSlot(PropEntityID, int32_t &, PropEntityID &, bool &);

	// BrnPropCellManager.h:267
	bool GetPhysicalPropSlot(PropEntityID, int32_t &, PropEntityID &, bool &);

	// BrnPropCellManager.h:271
	void FreePhysicalPropSlot(int32_t);

	// BrnPropCellManager.h:275
	void FreePhysicalPartSlot(int32_t);

	// BrnPropCellManager.h:280
	void IncrementPropsTimeInSim(int32_t, float32_t);

	// BrnPropCellManager.h:285
	void IncrementPartsTimeInSim(int32_t, float32_t);

	// BrnPropCellManager.h:288
	void Clear();

	// BrnPropCellManager.h:296
	void ClearPropsNearPosition(Vector3, VecFloat, const PropPhysicsDataHeader *, PropInputInterface *, InSceneUpdateInterface *);

}

