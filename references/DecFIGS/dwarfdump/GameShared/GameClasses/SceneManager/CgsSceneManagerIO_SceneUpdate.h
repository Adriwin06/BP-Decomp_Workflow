// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneManagerIO_EventTypes.h:31
	namespace SceneManagerIO {
		// CgsSceneManagerIO_SceneUpdate.h:43
		enum EAddForCollisionCacheOptions {
			E_ADD_TO_CACHE_MANAGER_AS_CACHED = 0,
			E_ADD_TO_CACHE_MANAGER_AS_NON_CACHED = 1,
			E_DO_NOT_ADD_TO_CACHE_MANAGER = 2,
			E_NUM_CACHE_OPTIONS = 3,
		}

	}

}

// CgsSceneManagerIO_SceneUpdate.h:63
struct CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:65
	uint8_t mu8Owner;

}

// CgsSceneManagerIO_SceneUpdate.h:69
struct CgsSceneManager::SceneManagerIO::InEventAddEntity : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:71
	Vector3 mPosition;

	// CgsSceneManagerIO_SceneUpdate.h:73
	EntityId mEntityId;

	// CgsSceneManagerIO_SceneUpdate.h:74
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_SceneUpdate.h:75
	float32_t mfRadius;

}

// CgsSceneManagerIO_SceneUpdate.h:80
struct CgsSceneManager::SceneManagerIO::InEventRemoveEntity : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:82
	EntityId mEntityId;

	// CgsSceneManagerIO_SceneUpdate.h:83
	bool mbRemoveVolumeInstances;

}

// CgsSceneManagerIO_SceneUpdate.h:88
struct CgsSceneManager::SceneManagerIO::InEventSetEntityPosition : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:90
	Vector3 mPosition;

	// CgsSceneManagerIO_SceneUpdate.h:91
	EntityId mEntityId;

}

// CgsSceneManagerIO_SceneUpdate.h:96
struct CgsSceneManager::SceneManagerIO::InEventSetEntityRadius : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:98
	EntityId mEntityId;

	// CgsSceneManagerIO_SceneUpdate.h:99
	float32_t mfRadius;

}

// CgsSceneManagerIO_SceneUpdate.h:106
struct CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:108
	VolumeId mVolumeId;

	// CgsSceneManagerIO_SceneUpdate.h:109
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeID;

	// CgsSceneManagerIO_SceneUpdate.h:111
	VolumeSlot mVolumeBuffer;

}

// CgsSceneManagerIO_SceneUpdate.h:123
struct CgsSceneManager::SceneManagerIO::InEventRemoveVolume : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:125
	VolumeId mVolumeId;

}

// CgsSceneManagerIO_SceneUpdate.h:129
struct CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:131
	VolumeId mVolumeId;

	// CgsSceneManagerIO_SceneUpdate.h:132
	VolumeSlot mVolumeBuffer;

}

// CgsSceneManagerIO_SceneUpdate.h:137
struct CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:139
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:140
	VolumeId mVolumeId;

	// CgsSceneManagerIO_SceneUpdate.h:141
	Matrix44Affine mTransform;

}

// CgsSceneManagerIO_SceneUpdate.h:144
struct CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:146
	VolumeInstanceId mVolumeInstanceId;

}

// CgsSceneManagerIO_SceneUpdate.h:150
struct CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:152
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:153
	Matrix44Affine mTransform;

}

// CgsSceneManagerIO_SceneUpdate.h:172
struct CgsSceneManager::SceneManagerIO::InEventAddForCollision : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:174
	Vector3 mPadding;

	// CgsSceneManagerIO_SceneUpdate.h:175
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:176
	SetRaceCarCullingGroupEvent::CullingGroup mCullGroup;

private:
	// CgsSceneManagerIO_SceneUpdate.h:207
	uint8_t muBodyState;

	// CgsSceneManagerIO_SceneUpdate.h:208
	uint8_t muCacheOptions;

public:
	// CgsSceneManagerIO_SceneUpdate.h:180
	rw::physics::BodyState GetBodyState() const;

	// CgsSceneManagerIO_SceneUpdate.h:186
	void SetBodyState(rw::physics::BodyState);

	// CgsSceneManagerIO_SceneUpdate.h:193
	CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions GetCacheOptions() const;

	// CgsSceneManagerIO_SceneUpdate.h:199
	void SetCacheOptions(CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

}

// CgsSceneManagerIO_SceneUpdate.h:213
struct CgsSceneManager::SceneManagerIO::InEventRemoveForCollision : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:215
	VolumeInstanceId mVolumeInstanceId;

}

// CgsSceneManagerIO_SceneUpdate.h:219
struct CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:221
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:222
	SetRaceCarCullingGroupEvent::CullingGroup mCullingGroup;

}

// CgsSceneManagerIO_SceneUpdate.h:226
struct CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:228
	SetRaceCarCullingGroupEvent::CullingGroup mCullingGroupA;

	// CgsSceneManagerIO_SceneUpdate.h:229
	SetRaceCarCullingGroupEvent::CullingGroup mCullingGroupB;

	// CgsSceneManagerIO_SceneUpdate.h:230
	bool mbCull;

}

// CgsSceneManagerIO_SceneUpdate.h:234
struct CgsSceneManager::SceneManagerIO::InEventClearCullingTable : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:236
	bool mbCullAll;

}

// CgsSceneManagerIO_SceneUpdate.h:240
struct CgsSceneManager::SceneManagerIO::InEventSetPadding : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:242
	VolumeInstanceId mVolInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:243
	Vector3 mPadding;

}

// CgsSceneManagerIO_SceneUpdate.h:247
struct CgsSceneManager::SceneManagerIO::InEventClearEntityPadding : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:249
	EntityId mEntity;

}

// CgsSceneManagerIO_SceneUpdate.h:253
struct CgsSceneManager::SceneManagerIO::InEventForceNoPadding : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:255
	VolumeInstanceId mVolInstanceId;

}

// CgsSceneManagerIO_SceneUpdate.h:259
struct CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:261
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:262
	CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions meCacheOptions;

}

// CgsSceneManagerIO_SceneUpdate.h:307
struct CgsSceneManager::SceneManagerIO::InSceneUpdateInterface {
	// CgsSceneManagerIO_SceneUpdate.h:266
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> InUpdateEntityPositionQueue;

private:
	// CgsSceneManagerIO_SceneUpdate.h:585
	InSceneUpdateInterface::InUpdateEntityPositionQueue mUpdatePositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:267
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> InSetVolumeInstanceTransformQueue;

	// CgsSceneManagerIO_SceneUpdate.h:586
	InSceneUpdateInterface::InSetVolumeInstanceTransformQueue mSetVolumeInstanceTransformQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:268
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> InAddEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:587
	InSceneUpdateInterface::InAddEntityQueue mAddEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:269
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> InAddDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:588
	InSceneUpdateInterface::InAddDynamicVolumeQueue mAddDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:270
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> InAddForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:589
	InSceneUpdateInterface::InAddForCollisionQueue mAddForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:273
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> InAddVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:590
	InSceneUpdateInterface::InAddVolumeInstanceQueue mAddVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:274
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> InForceNoPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:591
	InSceneUpdateInterface::InForceNoPaddingQueue mForceNoPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:275
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> InRemoveEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:592
	InSceneUpdateInterface::InRemoveEntityQueue mRemoveEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:276
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> InRemoveForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:593
	InSceneUpdateInterface::InRemoveForCollisionQueue mRemoveForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:278
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> InRemoveVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:594
	InSceneUpdateInterface::InRemoveVolumeQueue mRemoveVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:279
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> InRemoveVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:595
	InSceneUpdateInterface::InRemoveVolumeInstanceQueue mRemoveVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:280
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> InReplaceDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:596
	InSceneUpdateInterface::InReplaceDynamicVolumeQueue mReplaceDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:281
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> InSetCullingGroupPairQueue;

	// CgsSceneManagerIO_SceneUpdate.h:597
	InSceneUpdateInterface::InSetCullingGroupPairQueue mSetCullingGroupPairQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:282
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> InClearCullingTableQueue;

	// CgsSceneManagerIO_SceneUpdate.h:598
	InSceneUpdateInterface::InClearCullingTableQueue mClearCullingTableQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:283
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> InSetEntityRadiusQueue;

	// CgsSceneManagerIO_SceneUpdate.h:599
	InSceneUpdateInterface::InSetEntityRadiusQueue mSetEntityRadiusQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:284
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> InSetPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:600
	InSceneUpdateInterface::InSetPaddingQueue mSetPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:287
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> InAddVolumeInstanceForCachingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:601
	InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue mAddVolumeInstanceForCachingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:285
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> InClearEntityPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:602
	InSceneUpdateInterface::InClearEntityPaddingQueue mClearEntityPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:286
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> InSetVolumeInstanceCullingGroupQueue;

	// CgsSceneManagerIO_SceneUpdate.h:603
	InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue mSetVolumeInstanceCullingGroupQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:292
	typedef InAddCachedObjectQueue InAddCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:605
	InSceneUpdateInterface::InAddCachedObjectQueue mAddCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:293
	typedef InUpdateCachedObjectPositionQueue InUpdateCachedObjectPositionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:606
	InSceneUpdateInterface::InUpdateCachedObjectPositionQueue mUpdateCachedObjectPositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:294
	typedef InSceneUpdateInterface::InRemoveCachedObjectQueue InRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsTriangleCacheManagerIO.h:114
	typedef EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> InRemoveCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:607
	InSceneUpdateInterface::InRemoveCachedObjectQueue mRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:295
	typedef InSceneUpdateInterface::InAddPolySoupListQueue InAddPolySoupListQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:74
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> InAddPolySoupListQueue;

	// CgsSceneManagerIO_SceneUpdate.h:609
	InSceneUpdateInterface::InAddPolySoupListQueue mAddPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:296
	typedef InSceneUpdateInterface::InClearPolySoupListsQueue InClearPolySoupListsQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:75
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> InClearPolySoupListsQueue;

	// CgsSceneManagerIO_SceneUpdate.h:610
	InSceneUpdateInterface::InClearPolySoupListsQueue mClearPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:288
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> InRemoveAllEntitiesQueue;

	// CgsSceneManagerIO_SceneUpdate.h:611
	InSceneUpdateInterface::InRemoveAllEntitiesQueue mRemoveAllEntitiesQueue;

public:
	// CgsSceneManagerIO_SceneUpdate.h:311
	void Construct();

	// CgsSceneManagerIO_SceneUpdate.h:314
	void Destruct();

	// CgsSceneManagerIO_SceneUpdate.h:317
	void Clear();

	// CgsSceneManagerIO_SceneUpdate.h:320
	void Append(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &);

	// CgsSceneManagerIO_SceneUpdate.h:323
	bool HasData() const;

	// CgsSceneManagerIO_SceneUpdate.h:334
	void AddEntity(EntityId, InEventLineTestFine::EntityTypeFlags, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:340
	void RemoveEntity(EntityId, bool);

	// CgsSceneManagerIO_SceneUpdate.h:346
	void SetEntityPosition(EntityId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:352
	void SetEntityRadius(EntityId, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:357
	void RemoveAllEntities(uint8_t);

	// CgsSceneManagerIO_SceneUpdate.h:367
	void AddDynamicVolume(VolumeId, const VolRef::Volume *, InEventLineTestFine::VolumeTypeFlags);

	// CgsSceneManagerIO_SceneUpdate.h:373
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsSceneManagerIO_SceneUpdate.h:378
	void RemoveVolume(VolumeId);

	// CgsSceneManagerIO_SceneUpdate.h:388
	void AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:393
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:399
	void SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:409
	void AddInternalVolume(VolumeInstanceId, VolumeInstanceId, VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:418
	void AddForCollision(VolumeInstanceId, SetRaceCarCullingGroupEvent::CullingGroup, rw::physics::BodyState, Vector3, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:423
	void RemoveForCollision(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:429
	void SetVolumeInstanceCullingGroup(VolumeInstanceId, SetRaceCarCullingGroupEvent::CullingGroup);

	// CgsSceneManagerIO_SceneUpdate.h:436
	void SetCullingGroupPair(SetRaceCarCullingGroupEvent::CullingGroup, SetRaceCarCullingGroupEvent::CullingGroup, bool);

	// CgsSceneManagerIO_SceneUpdate.h:441
	void ClearCullingTable(bool);

	// CgsSceneManagerIO_SceneUpdate.h:447
	void SetVolumeInstancePadding(VolumeInstanceId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:452
	void ClearEntityVolumesPadding(EntityId);

	// CgsSceneManagerIO_SceneUpdate.h:457
	void ForceNoPadding(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:463
	void AddVolumeInstanceForCaching(VolumeInstanceId, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:472
	void AddCachedObject(int32_t, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:478
	void UpdateCachedObjectPosition(int32_t, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:484
	void UpdateCachedObjectPosition(int32_t, Vector3, VecFloat);

	// CgsSceneManagerIO_SceneUpdate.h:488
	void RemoveCachedObject(int32_t);

	// CgsSceneManagerIO_SceneUpdate.h:498
	void AddPolygonSoupList(ResourceHandle, int32_t, bool);

	// CgsSceneManagerIO_SceneUpdate.h:501
	void ClearPolygonSoupLists();

	// CgsSceneManagerIO_SceneUpdate.h:509
	const InSceneUpdateInterface::InUpdateEntityPositionQueue & GetUpdatePositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:512
	const InSceneUpdateInterface::InSetVolumeInstanceTransformQueue & GetVolumeInstanceTransformUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:515
	const InSceneUpdateInterface::InAddEntityQueue & GetAddEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:518
	const InSceneUpdateInterface::InAddDynamicVolumeQueue & GetAddDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:521
	const InSceneUpdateInterface::InAddForCollisionQueue & GetAddForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:524
	const InSceneUpdateInterface::InAddVolumeInstanceQueue & GetAddVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:527
	const InSceneUpdateInterface::InForceNoPaddingQueue & GetForceNoPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:530
	const InSceneUpdateInterface::InRemoveEntityQueue & GetRemoveEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:533
	const InSceneUpdateInterface::InRemoveForCollisionQueue & GetRemoveForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:536
	const InSceneUpdateInterface::InRemoveVolumeQueue & GetRemoveVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:539
	const InSceneUpdateInterface::InRemoveVolumeInstanceQueue & GetRemoveVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:542
	const InSceneUpdateInterface::InReplaceDynamicVolumeQueue & GetReplaceDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:545
	const InSceneUpdateInterface::InSetCullingGroupPairQueue & GetCullingGroupPairUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:548
	const InSceneUpdateInterface::InClearCullingTableQueue & GetClearCullingTableQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:551
	const InSceneUpdateInterface::InSetEntityRadiusQueue & GetEntityRadiusUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:554
	const InSceneUpdateInterface::InSetPaddingQueue & GetPaddingUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:557
	const InSceneUpdateInterface::InClearEntityPaddingQueue & GetClearEntityPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:560
	const InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue & GetVolumeInstanceCullingGroupQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:563
	const InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue & GetAddVolumeInstanceForCachingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:566
	const InSceneUpdateInterface::InAddCachedObjectQueue & GetAddCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:569
	const InSceneUpdateInterface::InUpdateCachedObjectPositionQueue & GetUpdateCachedObjectPositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:572
	const InSceneUpdateInterface::InRemoveCachedObjectQueue & GetRemoveCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:575
	const InSceneUpdateInterface::InAddPolySoupListQueue & GetAddPolySoupListQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:578
	const InSceneUpdateInterface::InClearPolySoupListsQueue & GetClearPolySoupListsQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:581
	const InSceneUpdateInterface::InRemoveAllEntitiesQueue & GetRemoveAllEntitiesQueue() const;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerIO_EventTypes.h:31
	namespace SceneManagerIO {
		// CgsSceneManagerIO_SceneUpdate.h:43
		enum EAddForCollisionCacheOptions {
			E_ADD_TO_CACHE_MANAGER_AS_CACHED = 0,
			E_ADD_TO_CACHE_MANAGER_AS_NON_CACHED = 1,
			E_DO_NOT_ADD_TO_CACHE_MANAGER = 2,
			E_NUM_CACHE_OPTIONS = 3,
		}

	}

}

// CgsSceneManagerIO_SceneUpdate.h:69
struct CgsSceneManager::SceneManagerIO::InEventAddEntity : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:71
	Vector3 mPosition;

	// CgsSceneManagerIO_SceneUpdate.h:73
	EntityId mEntityId;

	// CgsSceneManagerTypes.h:43
	typedef uint32_t EntityTypeFlags;

	// CgsSceneManagerIO_SceneUpdate.h:74
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_SceneUpdate.h:75
	float32_t mfRadius;

}

// CgsSceneManagerIO_SceneUpdate.h:106
struct CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:108
	VolumeId mVolumeId;

	// CgsSceneManagerTypes.h:44
	typedef uint8_t VolumeTypeFlags;

	// CgsSceneManagerIO_SceneUpdate.h:109
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeID;

	// CgsSceneManagerIO_SceneUpdate.h:111
	VolumeSlot mVolumeBuffer;

}

// CgsSceneManagerIO_SceneUpdate.h:172
struct CgsSceneManager::SceneManagerIO::InEventAddForCollision : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:174
	Vector3 mPadding;

	// CgsSceneManagerIO_SceneUpdate.h:175
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerTypes.h:45
	typedef uint32_t CullingGroup;

	// CgsSceneManagerIO_SceneUpdate.h:176
	InEventAddForCollision::CullingGroup mCullGroup;

private:
	// CgsSceneManagerIO_SceneUpdate.h:207
	uint8_t muBodyState;

	// CgsSceneManagerIO_SceneUpdate.h:208
	uint8_t muCacheOptions;

public:
	// CgsSceneManagerIO_SceneUpdate.h:180
	rw::physics::BodyState GetBodyState() const;

	// CgsSceneManagerIO_SceneUpdate.h:186
	void SetBodyState(rw::physics::BodyState);

	// CgsSceneManagerIO_SceneUpdate.h:193
	CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions GetCacheOptions() const;

	// CgsSceneManagerIO_SceneUpdate.h:199
	void SetCacheOptions(CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

}

// CgsSceneManagerIO_SceneUpdate.h:219
struct CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:221
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerIO_SceneUpdate.h:222
	InEventAddForCollision::CullingGroup mCullingGroup;

}

// CgsSceneManagerIO_SceneUpdate.h:226
struct CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:228
	InEventAddForCollision::CullingGroup mCullingGroupA;

	// CgsSceneManagerIO_SceneUpdate.h:229
	InEventAddForCollision::CullingGroup mCullingGroupB;

	// CgsSceneManagerIO_SceneUpdate.h:230
	bool mbCull;

}

// CgsSceneManagerIO_SceneUpdate.h:307
struct CgsSceneManager::SceneManagerIO::InSceneUpdateInterface {
	// CgsSceneManagerIO_SceneUpdate.h:266
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> InUpdateEntityPositionQueue;

private:
	// CgsSceneManagerIO_SceneUpdate.h:585
	InSceneUpdateInterface::InUpdateEntityPositionQueue mUpdatePositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:267
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> InSetVolumeInstanceTransformQueue;

	// CgsSceneManagerIO_SceneUpdate.h:586
	InSceneUpdateInterface::InSetVolumeInstanceTransformQueue mSetVolumeInstanceTransformQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:268
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> InAddEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:587
	InSceneUpdateInterface::InAddEntityQueue mAddEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:269
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> InAddDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:588
	InSceneUpdateInterface::InAddDynamicVolumeQueue mAddDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:270
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> InAddForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:589
	InSceneUpdateInterface::InAddForCollisionQueue mAddForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:273
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> InAddVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:590
	InSceneUpdateInterface::InAddVolumeInstanceQueue mAddVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:274
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> InForceNoPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:591
	InSceneUpdateInterface::InForceNoPaddingQueue mForceNoPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:275
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> InRemoveEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:592
	InSceneUpdateInterface::InRemoveEntityQueue mRemoveEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:276
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> InRemoveForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:593
	InSceneUpdateInterface::InRemoveForCollisionQueue mRemoveForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:278
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> InRemoveVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:594
	InSceneUpdateInterface::InRemoveVolumeQueue mRemoveVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:279
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> InRemoveVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:595
	InSceneUpdateInterface::InRemoveVolumeInstanceQueue mRemoveVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:280
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> InReplaceDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:596
	InSceneUpdateInterface::InReplaceDynamicVolumeQueue mReplaceDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:281
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> InSetCullingGroupPairQueue;

	// CgsSceneManagerIO_SceneUpdate.h:597
	InSceneUpdateInterface::InSetCullingGroupPairQueue mSetCullingGroupPairQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:282
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> InClearCullingTableQueue;

	// CgsSceneManagerIO_SceneUpdate.h:598
	InSceneUpdateInterface::InClearCullingTableQueue mClearCullingTableQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:283
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> InSetEntityRadiusQueue;

	// CgsSceneManagerIO_SceneUpdate.h:599
	InSceneUpdateInterface::InSetEntityRadiusQueue mSetEntityRadiusQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:284
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> InSetPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:600
	InSceneUpdateInterface::InSetPaddingQueue mSetPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:287
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> InAddVolumeInstanceForCachingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:601
	InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue mAddVolumeInstanceForCachingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:285
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> InClearEntityPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:602
	InSceneUpdateInterface::InClearEntityPaddingQueue mClearEntityPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:286
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> InSetVolumeInstanceCullingGroupQueue;

	// CgsSceneManagerIO_SceneUpdate.h:603
	InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue mSetVolumeInstanceCullingGroupQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:292
	typedef InAddCachedObjectQueue InAddCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:605
	InSceneUpdateInterface::InAddCachedObjectQueue mAddCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:293
	typedef InUpdateCachedObjectPositionQueue InUpdateCachedObjectPositionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:606
	InSceneUpdateInterface::InUpdateCachedObjectPositionQueue mUpdateCachedObjectPositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:294
	typedef InSceneUpdateInterface::InRemoveCachedObjectQueue InRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsTriangleCacheManagerIO.h:114
	typedef EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> InRemoveCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:607
	InSceneUpdateInterface::InRemoveCachedObjectQueue mRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:295
	typedef InSceneUpdateInterface::InAddPolySoupListQueue InAddPolySoupListQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:74
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> InAddPolySoupListQueue;

	// CgsSceneManagerIO_SceneUpdate.h:609
	InSceneUpdateInterface::InAddPolySoupListQueue mAddPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:296
	typedef InSceneUpdateInterface::InClearPolySoupListsQueue InClearPolySoupListsQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:75
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> InClearPolySoupListsQueue;

	// CgsSceneManagerIO_SceneUpdate.h:610
	InSceneUpdateInterface::InClearPolySoupListsQueue mClearPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:288
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> InRemoveAllEntitiesQueue;

	// CgsSceneManagerIO_SceneUpdate.h:611
	InSceneUpdateInterface::InRemoveAllEntitiesQueue mRemoveAllEntitiesQueue;

public:
	// CgsSceneManagerIO_SceneUpdate.h:311
	void Construct();

	// CgsSceneManagerIO_SceneUpdate.h:314
	void Destruct();

	// CgsSceneManagerIO_SceneUpdate.h:317
	void Clear();

	// CgsSceneManagerIO_SceneUpdate.h:320
	void Append(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &);

	// CgsSceneManagerIO_SceneUpdate.h:323
	bool HasData() const;

	// CgsSceneManagerIO_SceneUpdate.h:334
	void AddEntity(EntityId, InEventAddEntity::EntityTypeFlags, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:340
	void RemoveEntity(EntityId, bool);

	// CgsSceneManagerIO_SceneUpdate.h:346
	void SetEntityPosition(EntityId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:352
	void SetEntityRadius(EntityId, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:357
	void RemoveAllEntities(uint8_t);

	// CgsSceneManagerIO_SceneUpdate.h:367
	void AddDynamicVolume(VolumeId, const VolRef::Volume *, InEventAddDynamicVolume::VolumeTypeFlags);

	// CgsSceneManagerIO_SceneUpdate.h:373
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsSceneManagerIO_SceneUpdate.h:378
	void RemoveVolume(VolumeId);

	// CgsSceneManagerIO_SceneUpdate.h:388
	void AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:393
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:399
	void SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:409
	void AddInternalVolume(VolumeInstanceId, VolumeInstanceId, VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:418
	void AddForCollision(VolumeInstanceId, InEventAddForCollision::CullingGroup, rw::physics::BodyState, Vector3, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:423
	void RemoveForCollision(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:429
	void SetVolumeInstanceCullingGroup(VolumeInstanceId, InEventAddForCollision::CullingGroup);

	// CgsSceneManagerIO_SceneUpdate.h:436
	void SetCullingGroupPair(InEventAddForCollision::CullingGroup, InEventAddForCollision::CullingGroup, bool);

	// CgsSceneManagerIO_SceneUpdate.h:441
	void ClearCullingTable(bool);

	// CgsSceneManagerIO_SceneUpdate.h:447
	void SetVolumeInstancePadding(VolumeInstanceId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:452
	void ClearEntityVolumesPadding(EntityId);

	// CgsSceneManagerIO_SceneUpdate.h:457
	void ForceNoPadding(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:463
	void AddVolumeInstanceForCaching(VolumeInstanceId, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:472
	void AddCachedObject(int32_t, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:478
	void UpdateCachedObjectPosition(int32_t, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:484
	void UpdateCachedObjectPosition(int32_t, Vector3, VecFloat);

	// CgsSceneManagerIO_SceneUpdate.h:488
	void RemoveCachedObject(int32_t);

	// CgsSceneManagerIO_SceneUpdate.h:498
	void AddPolygonSoupList(ResourceHandle, int32_t, bool);

	// CgsSceneManagerIO_SceneUpdate.h:501
	void ClearPolygonSoupLists();

	// CgsSceneManagerIO_SceneUpdate.h:509
	const InSceneUpdateInterface::InUpdateEntityPositionQueue & GetUpdatePositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:512
	const InSceneUpdateInterface::InSetVolumeInstanceTransformQueue & GetVolumeInstanceTransformUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:515
	const InSceneUpdateInterface::InAddEntityQueue & GetAddEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:518
	const InSceneUpdateInterface::InAddDynamicVolumeQueue & GetAddDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:521
	const InSceneUpdateInterface::InAddForCollisionQueue & GetAddForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:524
	const InSceneUpdateInterface::InAddVolumeInstanceQueue & GetAddVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:527
	const InSceneUpdateInterface::InForceNoPaddingQueue & GetForceNoPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:530
	const InSceneUpdateInterface::InRemoveEntityQueue & GetRemoveEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:533
	const InSceneUpdateInterface::InRemoveForCollisionQueue & GetRemoveForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:536
	const InSceneUpdateInterface::InRemoveVolumeQueue & GetRemoveVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:539
	const InSceneUpdateInterface::InRemoveVolumeInstanceQueue & GetRemoveVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:542
	const InSceneUpdateInterface::InReplaceDynamicVolumeQueue & GetReplaceDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:545
	const InSceneUpdateInterface::InSetCullingGroupPairQueue & GetCullingGroupPairUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:548
	const InSceneUpdateInterface::InClearCullingTableQueue & GetClearCullingTableQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:551
	const InSceneUpdateInterface::InSetEntityRadiusQueue & GetEntityRadiusUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:554
	const InSceneUpdateInterface::InSetPaddingQueue & GetPaddingUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:557
	const InSceneUpdateInterface::InClearEntityPaddingQueue & GetClearEntityPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:560
	const InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue & GetVolumeInstanceCullingGroupQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:563
	const InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue & GetAddVolumeInstanceForCachingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:566
	const InSceneUpdateInterface::InAddCachedObjectQueue & GetAddCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:569
	const InSceneUpdateInterface::InUpdateCachedObjectPositionQueue & GetUpdateCachedObjectPositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:572
	const InSceneUpdateInterface::InRemoveCachedObjectQueue & GetRemoveCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:575
	const InSceneUpdateInterface::InAddPolySoupListQueue & GetAddPolySoupListQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:578
	const InSceneUpdateInterface::InClearPolySoupListsQueue & GetClearPolySoupListsQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:581
	const InSceneUpdateInterface::InRemoveAllEntitiesQueue & GetRemoveAllEntitiesQueue() const;

}

// CgsSceneManagerIO_SceneUpdate.h:307
struct CgsSceneManager::SceneManagerIO::InSceneUpdateInterface {
	// CgsSceneManagerIO_SceneUpdate.h:266
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> InUpdateEntityPositionQueue;

private:
	// CgsSceneManagerIO_SceneUpdate.h:585
	InSceneUpdateInterface::InUpdateEntityPositionQueue mUpdatePositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:267
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> InSetVolumeInstanceTransformQueue;

	// CgsSceneManagerIO_SceneUpdate.h:586
	InSceneUpdateInterface::InSetVolumeInstanceTransformQueue mSetVolumeInstanceTransformQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:268
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> InAddEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:587
	InSceneUpdateInterface::InAddEntityQueue mAddEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:269
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> InAddDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:588
	InSceneUpdateInterface::InAddDynamicVolumeQueue mAddDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:270
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> InAddForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:589
	InSceneUpdateInterface::InAddForCollisionQueue mAddForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:273
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> InAddVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:590
	InSceneUpdateInterface::InAddVolumeInstanceQueue mAddVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:274
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> InForceNoPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:591
	InSceneUpdateInterface::InForceNoPaddingQueue mForceNoPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:275
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> InRemoveEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:592
	InSceneUpdateInterface::InRemoveEntityQueue mRemoveEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:276
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> InRemoveForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:593
	InSceneUpdateInterface::InRemoveForCollisionQueue mRemoveForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:278
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> InRemoveVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:594
	InSceneUpdateInterface::InRemoveVolumeQueue mRemoveVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:279
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> InRemoveVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:595
	InSceneUpdateInterface::InRemoveVolumeInstanceQueue mRemoveVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:280
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> InReplaceDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:596
	InSceneUpdateInterface::InReplaceDynamicVolumeQueue mReplaceDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:281
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> InSetCullingGroupPairQueue;

	// CgsSceneManagerIO_SceneUpdate.h:597
	InSceneUpdateInterface::InSetCullingGroupPairQueue mSetCullingGroupPairQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:282
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> InClearCullingTableQueue;

	// CgsSceneManagerIO_SceneUpdate.h:598
	InSceneUpdateInterface::InClearCullingTableQueue mClearCullingTableQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:283
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> InSetEntityRadiusQueue;

	// CgsSceneManagerIO_SceneUpdate.h:599
	InSceneUpdateInterface::InSetEntityRadiusQueue mSetEntityRadiusQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:284
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> InSetPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:600
	InSceneUpdateInterface::InSetPaddingQueue mSetPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:287
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> InAddVolumeInstanceForCachingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:601
	InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue mAddVolumeInstanceForCachingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:285
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> InClearEntityPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:602
	InSceneUpdateInterface::InClearEntityPaddingQueue mClearEntityPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:286
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> InSetVolumeInstanceCullingGroupQueue;

	// CgsSceneManagerIO_SceneUpdate.h:603
	InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue mSetVolumeInstanceCullingGroupQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:292
	typedef InAddCachedObjectQueue InAddCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:605
	InSceneUpdateInterface::InAddCachedObjectQueue mAddCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:293
	typedef InUpdateCachedObjectPositionQueue InUpdateCachedObjectPositionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:606
	InSceneUpdateInterface::InUpdateCachedObjectPositionQueue mUpdateCachedObjectPositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:294
	typedef InSceneUpdateInterface::InRemoveCachedObjectQueue InRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsTriangleCacheManagerIO.h:114
	typedef EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> InRemoveCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:607
	InSceneUpdateInterface::InRemoveCachedObjectQueue mRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:295
	typedef InSceneUpdateInterface::InAddPolySoupListQueue InAddPolySoupListQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:74
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> InAddPolySoupListQueue;

	// CgsSceneManagerIO_SceneUpdate.h:609
	InSceneUpdateInterface::InAddPolySoupListQueue mAddPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:296
	typedef InSceneUpdateInterface::InClearPolySoupListsQueue InClearPolySoupListsQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:75
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> InClearPolySoupListsQueue;

	// CgsSceneManagerIO_SceneUpdate.h:610
	InSceneUpdateInterface::InClearPolySoupListsQueue mClearPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:288
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> InRemoveAllEntitiesQueue;

	// CgsSceneManagerIO_SceneUpdate.h:611
	InSceneUpdateInterface::InRemoveAllEntitiesQueue mRemoveAllEntitiesQueue;

public:
	// CgsSceneManagerIO_SceneUpdate.h:311
	void Construct();

	// CgsSceneManagerIO_SceneUpdate.h:314
	void Destruct();

	// CgsSceneManagerIO_SceneUpdate.h:317
	void Clear();

	// CgsSceneManagerIO_SceneUpdate.h:320
	void Append(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &);

	// CgsSceneManagerIO_SceneUpdate.h:323
	bool HasData() const;

	// CgsSceneManagerIO_SceneUpdate.h:334
	void AddEntity(EntityId, InEventAddEntity::EntityTypeFlags, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:340
	void RemoveEntity(EntityId, bool);

	// CgsSceneManagerIO_SceneUpdate.h:346
	void SetEntityPosition(EntityId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:352
	void SetEntityRadius(EntityId, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:357
	void RemoveAllEntities(uint8_t);

	// CgsSceneManagerIO_SceneUpdate.h:367
	void AddDynamicVolume(VolumeId, const VolRef::Volume *, InEventAddDynamicVolume::VolumeTypeFlags);

	// CgsSceneManagerIO_SceneUpdate.h:373
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsSceneManagerIO_SceneUpdate.h:378
	void RemoveVolume(VolumeId);

	// CgsSceneManagerIO_SceneUpdate.h:388
	void AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:393
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:399
	void SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:409
	void AddInternalVolume(VolumeInstanceId, VolumeInstanceId, VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:418
	void AddForCollision(VolumeInstanceId, SetRaceCarCullingGroupEvent::CullingGroup, rw::physics::BodyState, Vector3, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:423
	void RemoveForCollision(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:429
	void SetVolumeInstanceCullingGroup(VolumeInstanceId, SetRaceCarCullingGroupEvent::CullingGroup);

	// CgsSceneManagerIO_SceneUpdate.h:436
	void SetCullingGroupPair(SetRaceCarCullingGroupEvent::CullingGroup, SetRaceCarCullingGroupEvent::CullingGroup, bool);

	// CgsSceneManagerIO_SceneUpdate.h:441
	void ClearCullingTable(bool);

	// CgsSceneManagerIO_SceneUpdate.h:447
	void SetVolumeInstancePadding(VolumeInstanceId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:452
	void ClearEntityVolumesPadding(EntityId);

	// CgsSceneManagerIO_SceneUpdate.h:457
	void ForceNoPadding(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:463
	void AddVolumeInstanceForCaching(VolumeInstanceId, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:472
	void AddCachedObject(int32_t, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:478
	void UpdateCachedObjectPosition(int32_t, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:484
	void UpdateCachedObjectPosition(int32_t, Vector3, VecFloat);

	// CgsSceneManagerIO_SceneUpdate.h:488
	void RemoveCachedObject(int32_t);

	// CgsSceneManagerIO_SceneUpdate.h:498
	void AddPolygonSoupList(ResourceHandle, int32_t, bool);

	// CgsSceneManagerIO_SceneUpdate.h:501
	void ClearPolygonSoupLists();

	// CgsSceneManagerIO_SceneUpdate.h:509
	const InSceneUpdateInterface::InUpdateEntityPositionQueue & GetUpdatePositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:512
	const InSceneUpdateInterface::InSetVolumeInstanceTransformQueue & GetVolumeInstanceTransformUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:515
	const InSceneUpdateInterface::InAddEntityQueue & GetAddEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:518
	const InSceneUpdateInterface::InAddDynamicVolumeQueue & GetAddDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:521
	const InSceneUpdateInterface::InAddForCollisionQueue & GetAddForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:524
	const InSceneUpdateInterface::InAddVolumeInstanceQueue & GetAddVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:527
	const InSceneUpdateInterface::InForceNoPaddingQueue & GetForceNoPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:530
	const InSceneUpdateInterface::InRemoveEntityQueue & GetRemoveEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:533
	const InSceneUpdateInterface::InRemoveForCollisionQueue & GetRemoveForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:536
	const InSceneUpdateInterface::InRemoveVolumeQueue & GetRemoveVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:539
	const InSceneUpdateInterface::InRemoveVolumeInstanceQueue & GetRemoveVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:542
	const InSceneUpdateInterface::InReplaceDynamicVolumeQueue & GetReplaceDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:545
	const InSceneUpdateInterface::InSetCullingGroupPairQueue & GetCullingGroupPairUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:548
	const InSceneUpdateInterface::InClearCullingTableQueue & GetClearCullingTableQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:551
	const InSceneUpdateInterface::InSetEntityRadiusQueue & GetEntityRadiusUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:554
	const InSceneUpdateInterface::InSetPaddingQueue & GetPaddingUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:557
	const InSceneUpdateInterface::InClearEntityPaddingQueue & GetClearEntityPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:560
	const InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue & GetVolumeInstanceCullingGroupQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:563
	const InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue & GetAddVolumeInstanceForCachingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:566
	const InSceneUpdateInterface::InAddCachedObjectQueue & GetAddCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:569
	const InSceneUpdateInterface::InUpdateCachedObjectPositionQueue & GetUpdateCachedObjectPositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:572
	const InSceneUpdateInterface::InRemoveCachedObjectQueue & GetRemoveCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:575
	const InSceneUpdateInterface::InAddPolySoupListQueue & GetAddPolySoupListQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:578
	const InSceneUpdateInterface::InClearPolySoupListsQueue & GetClearPolySoupListsQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:581
	const InSceneUpdateInterface::InRemoveAllEntitiesQueue & GetRemoveAllEntitiesQueue() const;

}

// CgsSceneManagerIO_SceneUpdate.h:307
struct CgsSceneManager::SceneManagerIO::InSceneUpdateInterface {
	// CgsSceneManagerIO_SceneUpdate.h:266
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> InUpdateEntityPositionQueue;

private:
	// CgsSceneManagerIO_SceneUpdate.h:585
	InSceneUpdateInterface::InUpdateEntityPositionQueue mUpdatePositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:267
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> InSetVolumeInstanceTransformQueue;

	// CgsSceneManagerIO_SceneUpdate.h:586
	InSceneUpdateInterface::InSetVolumeInstanceTransformQueue mSetVolumeInstanceTransformQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:268
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> InAddEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:587
	InSceneUpdateInterface::InAddEntityQueue mAddEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:269
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> InAddDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:588
	InSceneUpdateInterface::InAddDynamicVolumeQueue mAddDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:270
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> InAddForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:589
	InSceneUpdateInterface::InAddForCollisionQueue mAddForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:273
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> InAddVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:590
	InSceneUpdateInterface::InAddVolumeInstanceQueue mAddVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:274
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> InForceNoPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:591
	InSceneUpdateInterface::InForceNoPaddingQueue mForceNoPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:275
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> InRemoveEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:592
	InSceneUpdateInterface::InRemoveEntityQueue mRemoveEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:276
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> InRemoveForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:593
	InSceneUpdateInterface::InRemoveForCollisionQueue mRemoveForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:278
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> InRemoveVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:594
	InSceneUpdateInterface::InRemoveVolumeQueue mRemoveVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:279
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> InRemoveVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:595
	InSceneUpdateInterface::InRemoveVolumeInstanceQueue mRemoveVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:280
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> InReplaceDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:596
	InSceneUpdateInterface::InReplaceDynamicVolumeQueue mReplaceDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:281
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> InSetCullingGroupPairQueue;

	// CgsSceneManagerIO_SceneUpdate.h:597
	InSceneUpdateInterface::InSetCullingGroupPairQueue mSetCullingGroupPairQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:282
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> InClearCullingTableQueue;

	// CgsSceneManagerIO_SceneUpdate.h:598
	InSceneUpdateInterface::InClearCullingTableQueue mClearCullingTableQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:283
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> InSetEntityRadiusQueue;

	// CgsSceneManagerIO_SceneUpdate.h:599
	InSceneUpdateInterface::InSetEntityRadiusQueue mSetEntityRadiusQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:284
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> InSetPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:600
	InSceneUpdateInterface::InSetPaddingQueue mSetPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:287
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> InAddVolumeInstanceForCachingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:601
	InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue mAddVolumeInstanceForCachingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:285
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> InClearEntityPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:602
	InSceneUpdateInterface::InClearEntityPaddingQueue mClearEntityPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:286
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> InSetVolumeInstanceCullingGroupQueue;

	// CgsSceneManagerIO_SceneUpdate.h:603
	InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue mSetVolumeInstanceCullingGroupQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:292
	typedef InAddCachedObjectQueue InAddCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:605
	InSceneUpdateInterface::InAddCachedObjectQueue mAddCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:293
	typedef InUpdateCachedObjectPositionQueue InUpdateCachedObjectPositionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:606
	InSceneUpdateInterface::InUpdateCachedObjectPositionQueue mUpdateCachedObjectPositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:294
	typedef InSceneUpdateInterface::InRemoveCachedObjectQueue InRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsTriangleCacheManagerIO.h:114
	typedef EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> InRemoveCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:607
	InSceneUpdateInterface::InRemoveCachedObjectQueue mRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:295
	typedef InSceneUpdateInterface::InAddPolySoupListQueue InAddPolySoupListQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:74
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> InAddPolySoupListQueue;

	// CgsSceneManagerIO_SceneUpdate.h:609
	InSceneUpdateInterface::InAddPolySoupListQueue mAddPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:296
	typedef InSceneUpdateInterface::InClearPolySoupListsQueue InClearPolySoupListsQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:75
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> InClearPolySoupListsQueue;

	// CgsSceneManagerIO_SceneUpdate.h:610
	InSceneUpdateInterface::InClearPolySoupListsQueue mClearPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:288
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> InRemoveAllEntitiesQueue;

	// CgsSceneManagerIO_SceneUpdate.h:611
	InSceneUpdateInterface::InRemoveAllEntitiesQueue mRemoveAllEntitiesQueue;

public:
	// CgsSceneManagerIO_SceneUpdate.h:311
	void Construct();

	// CgsSceneManagerIO_SceneUpdate.h:314
	void Destruct();

	// CgsSceneManagerIO_SceneUpdate.h:317
	void Clear();

	// CgsSceneManagerIO_SceneUpdate.h:320
	void Append(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &);

	// CgsSceneManagerIO_SceneUpdate.h:323
	bool HasData() const;

	// CgsSceneManagerIO_SceneUpdate.h:334
	void AddEntity(EntityId, InEventLineTestFine::EntityTypeFlags, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:340
	void RemoveEntity(EntityId, bool);

	// CgsSceneManagerIO_SceneUpdate.h:346
	void SetEntityPosition(EntityId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:352
	void SetEntityRadius(EntityId, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:357
	void RemoveAllEntities(uint8_t);

	// CgsSceneManagerIO_SceneUpdate.h:367
	void AddDynamicVolume(VolumeId, const VolRef::Volume *, InEventLineTestFine::VolumeTypeFlags);

	// CgsSceneManagerIO_SceneUpdate.h:373
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsSceneManagerIO_SceneUpdate.h:378
	void RemoveVolume(VolumeId);

	// CgsSceneManagerIO_SceneUpdate.h:388
	void AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:393
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:399
	void SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:409
	void AddInternalVolume(VolumeInstanceId, VolumeInstanceId, VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:418
	void AddForCollision(VolumeInstanceId, InEventAddForCollision::CullingGroup, rw::physics::BodyState, Vector3, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:423
	void RemoveForCollision(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:429
	void SetVolumeInstanceCullingGroup(VolumeInstanceId, InEventAddForCollision::CullingGroup);

	// CgsSceneManagerIO_SceneUpdate.h:436
	void SetCullingGroupPair(InEventAddForCollision::CullingGroup, InEventAddForCollision::CullingGroup, bool);

	// CgsSceneManagerIO_SceneUpdate.h:441
	void ClearCullingTable(bool);

	// CgsSceneManagerIO_SceneUpdate.h:447
	void SetVolumeInstancePadding(VolumeInstanceId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:452
	void ClearEntityVolumesPadding(EntityId);

	// CgsSceneManagerIO_SceneUpdate.h:457
	void ForceNoPadding(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:463
	void AddVolumeInstanceForCaching(VolumeInstanceId, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:472
	void AddCachedObject(int32_t, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:478
	void UpdateCachedObjectPosition(int32_t, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:484
	void UpdateCachedObjectPosition(int32_t, Vector3, VecFloat);

	// CgsSceneManagerIO_SceneUpdate.h:488
	void RemoveCachedObject(int32_t);

	// CgsSceneManagerIO_SceneUpdate.h:498
	void AddPolygonSoupList(ResourceHandle, int32_t, bool);

	// CgsSceneManagerIO_SceneUpdate.h:501
	void ClearPolygonSoupLists();

	// CgsSceneManagerIO_SceneUpdate.h:509
	const InSceneUpdateInterface::InUpdateEntityPositionQueue & GetUpdatePositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:512
	const InSceneUpdateInterface::InSetVolumeInstanceTransformQueue & GetVolumeInstanceTransformUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:515
	const InSceneUpdateInterface::InAddEntityQueue & GetAddEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:518
	const InSceneUpdateInterface::InAddDynamicVolumeQueue & GetAddDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:521
	const InSceneUpdateInterface::InAddForCollisionQueue & GetAddForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:524
	const InSceneUpdateInterface::InAddVolumeInstanceQueue & GetAddVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:527
	const InSceneUpdateInterface::InForceNoPaddingQueue & GetForceNoPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:530
	const InSceneUpdateInterface::InRemoveEntityQueue & GetRemoveEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:533
	const InSceneUpdateInterface::InRemoveForCollisionQueue & GetRemoveForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:536
	const InSceneUpdateInterface::InRemoveVolumeQueue & GetRemoveVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:539
	const InSceneUpdateInterface::InRemoveVolumeInstanceQueue & GetRemoveVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:542
	const InSceneUpdateInterface::InReplaceDynamicVolumeQueue & GetReplaceDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:545
	const InSceneUpdateInterface::InSetCullingGroupPairQueue & GetCullingGroupPairUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:548
	const InSceneUpdateInterface::InClearCullingTableQueue & GetClearCullingTableQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:551
	const InSceneUpdateInterface::InSetEntityRadiusQueue & GetEntityRadiusUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:554
	const InSceneUpdateInterface::InSetPaddingQueue & GetPaddingUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:557
	const InSceneUpdateInterface::InClearEntityPaddingQueue & GetClearEntityPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:560
	const InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue & GetVolumeInstanceCullingGroupQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:563
	const InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue & GetAddVolumeInstanceForCachingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:566
	const InSceneUpdateInterface::InAddCachedObjectQueue & GetAddCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:569
	const InSceneUpdateInterface::InUpdateCachedObjectPositionQueue & GetUpdateCachedObjectPositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:572
	const InSceneUpdateInterface::InRemoveCachedObjectQueue & GetRemoveCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:575
	const InSceneUpdateInterface::InAddPolySoupListQueue & GetAddPolySoupListQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:578
	const InSceneUpdateInterface::InClearPolySoupListsQueue & GetClearPolySoupListsQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:581
	const InSceneUpdateInterface::InRemoveAllEntitiesQueue & GetRemoveAllEntitiesQueue() const;

}

// CgsSceneManagerIO_SceneUpdate.h:106
struct CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume : public Event {
	// CgsSceneManagerIO_SceneUpdate.h:108
	VolumeId mVolumeId;

	// CgsSceneManagerIO_SceneUpdate.h:109
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeID;

	// CgsSceneManagerIO_SceneUpdate.h:111
	VolumeSlot mVolumeBuffer;

}

// CgsSceneManagerIO_SceneUpdate.h:307
struct CgsSceneManager::SceneManagerIO::InSceneUpdateInterface {
	// CgsSceneManagerIO_SceneUpdate.h:266
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> InUpdateEntityPositionQueue;

private:
	// CgsSceneManagerIO_SceneUpdate.h:585
	InSceneUpdateInterface::InUpdateEntityPositionQueue mUpdatePositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:267
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> InSetVolumeInstanceTransformQueue;

	// CgsSceneManagerIO_SceneUpdate.h:586
	InSceneUpdateInterface::InSetVolumeInstanceTransformQueue mSetVolumeInstanceTransformQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:268
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> InAddEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:587
	InSceneUpdateInterface::InAddEntityQueue mAddEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:269
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> InAddDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:588
	InSceneUpdateInterface::InAddDynamicVolumeQueue mAddDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:270
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> InAddForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:589
	InSceneUpdateInterface::InAddForCollisionQueue mAddForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:273
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> InAddVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:590
	InSceneUpdateInterface::InAddVolumeInstanceQueue mAddVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:274
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> InForceNoPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:591
	InSceneUpdateInterface::InForceNoPaddingQueue mForceNoPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:275
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> InRemoveEntityQueue;

	// CgsSceneManagerIO_SceneUpdate.h:592
	InSceneUpdateInterface::InRemoveEntityQueue mRemoveEntityQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:276
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> InRemoveForCollisionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:593
	InSceneUpdateInterface::InRemoveForCollisionQueue mRemoveForCollisionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:278
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> InRemoveVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:594
	InSceneUpdateInterface::InRemoveVolumeQueue mRemoveVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:279
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> InRemoveVolumeInstanceQueue;

	// CgsSceneManagerIO_SceneUpdate.h:595
	InSceneUpdateInterface::InRemoveVolumeInstanceQueue mRemoveVolumeInstanceQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:280
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> InReplaceDynamicVolumeQueue;

	// CgsSceneManagerIO_SceneUpdate.h:596
	InSceneUpdateInterface::InReplaceDynamicVolumeQueue mReplaceDynamicVolumeQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:281
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> InSetCullingGroupPairQueue;

	// CgsSceneManagerIO_SceneUpdate.h:597
	InSceneUpdateInterface::InSetCullingGroupPairQueue mSetCullingGroupPairQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:282
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> InClearCullingTableQueue;

	// CgsSceneManagerIO_SceneUpdate.h:598
	InSceneUpdateInterface::InClearCullingTableQueue mClearCullingTableQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:283
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> InSetEntityRadiusQueue;

	// CgsSceneManagerIO_SceneUpdate.h:599
	InSceneUpdateInterface::InSetEntityRadiusQueue mSetEntityRadiusQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:284
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> InSetPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:600
	InSceneUpdateInterface::InSetPaddingQueue mSetPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:287
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> InAddVolumeInstanceForCachingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:601
	InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue mAddVolumeInstanceForCachingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:285
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> InClearEntityPaddingQueue;

	// CgsSceneManagerIO_SceneUpdate.h:602
	InSceneUpdateInterface::InClearEntityPaddingQueue mClearEntityPaddingQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:286
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> InSetVolumeInstanceCullingGroupQueue;

	// CgsSceneManagerIO_SceneUpdate.h:603
	InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue mSetVolumeInstanceCullingGroupQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:292
	typedef InAddCachedObjectQueue InAddCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:605
	InSceneUpdateInterface::InAddCachedObjectQueue mAddCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:293
	typedef InUpdateCachedObjectPositionQueue InUpdateCachedObjectPositionQueue;

	// CgsSceneManagerIO_SceneUpdate.h:606
	InSceneUpdateInterface::InUpdateCachedObjectPositionQueue mUpdateCachedObjectPositionQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:294
	typedef InSceneUpdateInterface::InRemoveCachedObjectQueue InRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsTriangleCacheManagerIO.h:114
	typedef EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> InRemoveCachedObjectQueue;

	// CgsSceneManagerIO_SceneUpdate.h:607
	InSceneUpdateInterface::InRemoveCachedObjectQueue mRemoveCachedObjectQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:295
	typedef InSceneUpdateInterface::InAddPolySoupListQueue InAddPolySoupListQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:74
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> InAddPolySoupListQueue;

	// CgsSceneManagerIO_SceneUpdate.h:609
	InSceneUpdateInterface::InAddPolySoupListQueue mAddPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:296
	typedef InSceneUpdateInterface::InClearPolySoupListsQueue InClearPolySoupListsQueue;

	// Unknown accessibility
	// CgsTriangleCollisionManagerIO.h:75
	typedef EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> InClearPolySoupListsQueue;

	// CgsSceneManagerIO_SceneUpdate.h:610
	InSceneUpdateInterface::InClearPolySoupListsQueue mClearPolySoupListQueue;

	// Unknown accessibility
	// CgsSceneManagerIO_SceneUpdate.h:288
	typedef EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> InRemoveAllEntitiesQueue;

	// CgsSceneManagerIO_SceneUpdate.h:611
	InSceneUpdateInterface::InRemoveAllEntitiesQueue mRemoveAllEntitiesQueue;

public:
	// CgsSceneManagerIO_SceneUpdate.h:311
	void Construct();

	// CgsSceneManagerIO_SceneUpdate.h:314
	void Destruct();

	// CgsSceneManagerIO_SceneUpdate.h:317
	void Clear();

	// CgsSceneManagerIO_SceneUpdate.h:320
	void Append(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &);

	// CgsSceneManagerIO_SceneUpdate.h:323
	bool HasData() const;

	// CgsSceneManagerIO_SceneUpdate.h:334
	void AddEntity(EntityId, InEventLineTestFine::EntityTypeFlags, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:340
	void RemoveEntity(EntityId, bool);

	// CgsSceneManagerIO_SceneUpdate.h:346
	void SetEntityPosition(EntityId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:352
	void SetEntityRadius(EntityId, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:357
	void RemoveAllEntities(uint8_t);

	// CgsSceneManagerIO_SceneUpdate.h:367
	void AddDynamicVolume(VolumeId, const VolRef::Volume *, VolumeManagerVolume::VolumeTypeFlags);

	// CgsSceneManagerIO_SceneUpdate.h:373
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsSceneManagerIO_SceneUpdate.h:378
	void RemoveVolume(VolumeId);

	// CgsSceneManagerIO_SceneUpdate.h:388
	void AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:393
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:399
	void SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsSceneManagerIO_SceneUpdate.h:409
	void AddInternalVolume(VolumeInstanceId, VolumeInstanceId, VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:418
	void AddForCollision(VolumeInstanceId, InEventAddForCollision::CullingGroup, rw::physics::BodyState, Vector3, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:423
	void RemoveForCollision(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:429
	void SetVolumeInstanceCullingGroup(VolumeInstanceId, InEventAddForCollision::CullingGroup);

	// CgsSceneManagerIO_SceneUpdate.h:436
	void SetCullingGroupPair(InEventAddForCollision::CullingGroup, InEventAddForCollision::CullingGroup, bool);

	// CgsSceneManagerIO_SceneUpdate.h:441
	void ClearCullingTable(bool);

	// CgsSceneManagerIO_SceneUpdate.h:447
	void SetVolumeInstancePadding(VolumeInstanceId, Vector3);

	// CgsSceneManagerIO_SceneUpdate.h:452
	void ClearEntityVolumesPadding(EntityId);

	// CgsSceneManagerIO_SceneUpdate.h:457
	void ForceNoPadding(VolumeInstanceId);

	// CgsSceneManagerIO_SceneUpdate.h:463
	void AddVolumeInstanceForCaching(VolumeInstanceId, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions);

	// CgsSceneManagerIO_SceneUpdate.h:472
	void AddCachedObject(int32_t, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:478
	void UpdateCachedObjectPosition(int32_t, Vector3, float32_t);

	// CgsSceneManagerIO_SceneUpdate.h:484
	void UpdateCachedObjectPosition(int32_t, Vector3, VecFloat);

	// CgsSceneManagerIO_SceneUpdate.h:488
	void RemoveCachedObject(int32_t);

	// CgsSceneManagerIO_SceneUpdate.h:498
	void AddPolygonSoupList(ResourceHandle, int32_t, bool);

	// CgsSceneManagerIO_SceneUpdate.h:501
	void ClearPolygonSoupLists();

	// CgsSceneManagerIO_SceneUpdate.h:509
	const InSceneUpdateInterface::InUpdateEntityPositionQueue & GetUpdatePositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:512
	const InSceneUpdateInterface::InSetVolumeInstanceTransformQueue & GetVolumeInstanceTransformUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:515
	const InSceneUpdateInterface::InAddEntityQueue & GetAddEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:518
	const InSceneUpdateInterface::InAddDynamicVolumeQueue & GetAddDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:521
	const InSceneUpdateInterface::InAddForCollisionQueue & GetAddForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:524
	const InSceneUpdateInterface::InAddVolumeInstanceQueue & GetAddVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:527
	const InSceneUpdateInterface::InForceNoPaddingQueue & GetForceNoPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:530
	const InSceneUpdateInterface::InRemoveEntityQueue & GetRemoveEntityQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:533
	const InSceneUpdateInterface::InRemoveForCollisionQueue & GetRemoveForCollisionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:536
	const InSceneUpdateInterface::InRemoveVolumeQueue & GetRemoveVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:539
	const InSceneUpdateInterface::InRemoveVolumeInstanceQueue & GetRemoveVolumeInstanceQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:542
	const InSceneUpdateInterface::InReplaceDynamicVolumeQueue & GetReplaceDynamicVolumeQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:545
	const InSceneUpdateInterface::InSetCullingGroupPairQueue & GetCullingGroupPairUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:548
	const InSceneUpdateInterface::InClearCullingTableQueue & GetClearCullingTableQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:551
	const InSceneUpdateInterface::InSetEntityRadiusQueue & GetEntityRadiusUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:554
	const InSceneUpdateInterface::InSetPaddingQueue & GetPaddingUpdateQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:557
	const InSceneUpdateInterface::InClearEntityPaddingQueue & GetClearEntityPaddingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:560
	const InSceneUpdateInterface::InSetVolumeInstanceCullingGroupQueue & GetVolumeInstanceCullingGroupQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:563
	const InSceneUpdateInterface::InAddVolumeInstanceForCachingQueue & GetAddVolumeInstanceForCachingQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:566
	const InSceneUpdateInterface::InAddCachedObjectQueue & GetAddCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:569
	const InSceneUpdateInterface::InUpdateCachedObjectPositionQueue & GetUpdateCachedObjectPositionQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:572
	const InSceneUpdateInterface::InRemoveCachedObjectQueue & GetRemoveCachedObjectQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:575
	const InSceneUpdateInterface::InAddPolySoupListQueue & GetAddPolySoupListQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:578
	const InSceneUpdateInterface::InClearPolySoupListsQueue & GetClearPolySoupListsQueue() const;

	// CgsSceneManagerIO_SceneUpdate.h:581
	const InSceneUpdateInterface::InRemoveAllEntitiesQueue & GetRemoveAllEntitiesQueue() const;

}

