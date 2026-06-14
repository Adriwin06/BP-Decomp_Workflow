// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSetEntityPosition[1024] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSetVolumeInstanceTransform[1024] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddEntity[5120] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddDynamicVolume[1280] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddForCollision[1536] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddVolumeInstance[1280] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventForceNoPadding[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventRemoveEntity[10000] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventRemoveForCollision[1536] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventRemoveVolume[1344] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventRemoveVolumeInstance[1280] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventReplaceDynamicVolume[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSetCullingGroupPair[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventClearCullingTable[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSetEntityRadius[512] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSetPadding[1280] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddVolumeInstanceForCaching[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventClearEntityPadding[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSetVolumeInstanceCullingGroup[1280] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> : public BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddToCache[298] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> & operator=(const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> : public BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventUpdateCachedPosition[298] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> & operator=(const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> : public BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventRemoveFromCache[298] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> & operator=(const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> : public BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventAddPolySoupList[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> & operator=(const EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> : public BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventClearPolySoupLists[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> & operator=(const EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventRemoveAllEntities[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTestFine[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTestNearest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTestFastDoubleSided[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSphereTestFast[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventVolumeTestDeepest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventVolumeTestFine[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventTriangleCollisionLineTest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventTriangleCollisionLineTestNearest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventTriangleCollisionSphereTest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PotentialContact[2048] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OutOverlapPair[128] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::ErrorEvent,128> : public BaseEventQueue<CgsSceneManager::ErrorEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ErrorEvent[128] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::ErrorEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::ErrorEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::ErrorEvent,128> & operator=(const EventQueue<CgsSceneManager::ErrorEvent,128> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1> : public BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RaceRouteRequest[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1> & operator=(const EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12> : public BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ExtrapolatedRouteRequest[12] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12> & operator=(const EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnDirector::NewVehicleEvent,50> : public BaseEventQueue<BrnDirector::NewVehicleEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	NewVehicleEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnDirector::NewVehicleEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnDirector::NewVehicleEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnDirector::NewVehicleEvent,50> & operator=(const EventQueue<BrnDirector::NewVehicleEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300> : public BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RaceCarContact[300] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300> & operator=(const EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::TrafficContact,400> : public BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficContact[400] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::TrafficContact,400> & operator=(const EventQueue<BrnPhysics::ContactSpy::TrafficContact,400> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> : public BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PhysicalCarPartContact[150] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> & operator=(const EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50> : public BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	HingedPartContact[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50> & operator=(const EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::PropContact,100> : public BaseEventQueue<BrnPhysics::ContactSpy::PropContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropContact[100] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::PropContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::PropContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::PropContact,100> & operator=(const EventQueue<BrnPhysics::ContactSpy::PropContact,100> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20> : public BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DiscardedContact[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20> & operator=(const EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8> : public BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ContactSpyRunData[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8> & operator=(const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64> : public BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ContactSpyRunData[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64> & operator=(const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50> : public BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ContactSpyRunData[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50> & operator=(const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100> : public BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ContactSpyRunData[100] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100> & operator=(const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128> : public BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ResetOnTrackRequest[128] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128> & operator=(const EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34> : public BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RivalInTrafficUpdateEvent[34] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34> & operator=(const EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::TakedownEvent,8> : public BaseEventQueue<BrnGameState::TakedownEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TakedownEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::TakedownEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::TakedownEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::TakedownEvent,8> & operator=(const EventQueue<BrnGameState::TakedownEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,10> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTestFine[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,10> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,40> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTestNearest[40] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,40> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,40> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,10> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventLineTestFastDoubleSided[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,10> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,10> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventSphereTestFast[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,10> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,10> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventVolumeTestDeepest[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,10> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,1> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InEventVolumeTestFine[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,1> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:46
extern const int32_t KI_LENGTH;

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50> : public BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	AddPhysicalPropEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50> & operator=(const EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50> : public BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	AddPhysicalPartEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50> & operator=(const EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300> : public BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemovePhysicalPropEvent[300] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300> & operator=(const EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100> : public BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemovePhysicalPartEvent[100] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100> & operator=(const EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20> : public BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropBecamePhysicalEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20> & operator=(const EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50> : public BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RecordPropHitEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50> & operator=(const EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100> : public BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	HitOverheadSignEvent[100] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100> & operator=(const EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50> : public BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	BrokenPropEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50> & operator=(const EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10> : public BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropVFXLocatorEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10> & operator=(const EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> : public BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ImpactEvent[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> & operator=(const EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> : public BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PhysicalTrafficState[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> & operator=(const EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50> : public BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	JointedPartStateEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50> & operator=(const EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50> : public BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DetachedPartNotificationEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50> & operator=(const EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10> : public BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	BrokenJointNotificationEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10> & operator=(const EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50> : public BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DetachedPartCurrentPositionEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50> & operator=(const EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20> : public BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GlassSmashOrCrackEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20> & operator=(const EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddRigidBody[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateRigidBody[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InApplyForce[250] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InChangeRigidBodyInertia[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InSetRigidBodySpy[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveRigidBody[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveAllRigidBodies[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddPotentialContact[1024] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddJoint[36] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveJoint[36] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateJointFrames[36] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateJointLimits[36] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InSetJointSpy[36] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddDrive[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveDrive[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateDriveFrames[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateDriveDynamics[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InSetDriveSpy[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateExternalBody[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8> : public BaseEventQueue<CgsInput::InputIO::BaseInputEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::BaseInputEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::BaseInputEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::BaseInputEvent,8> & operator=(const EventQueue<CgsInput::InputIO::BaseInputEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::PadMapping,7> : public BaseEventQueue<CgsInput::InputIO::PadMapping> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PadMapping[7] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::PadMapping> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::PadMapping> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::PadMapping,7> & operator=(const EventQueue<CgsInput::InputIO::PadMapping,7> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::BindResult,8> : public BaseEventQueue<CgsInput::InputIO::BindResult> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	BindResult[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::BindResult> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::BindResult> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::BindResult,8> & operator=(const EventQueue<CgsInput::InputIO::BindResult,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8> : public BaseEventQueue<CgsInput::InputIO::UnBindResult> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	UnBindResult[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::UnBindResult> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::UnBindResult> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::UnBindResult,8> & operator=(const EventQueue<CgsInput::InputIO::UnBindResult,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16> : public BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RouteResponse[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16> & operator=(const EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128> : public BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ResetOnTrackResult[128] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128> & operator=(const EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128> : public BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PlaceOnTrackRequest[128] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128> & operator=(const EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> : public BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OutEventLineTestNearestResult[2000] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> & operator=(const EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> : public BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateRaceCarEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> & operator=(const EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> : public BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveRaceCarEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> & operator=(const EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> : public BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ResetVehicleEvent[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> & operator=(const EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> : public BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ValidateRaceCarEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> & operator=(const EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> : public BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	SetRaceCarCollisionEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> & operator=(const EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> : public BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	SetRaceCarCullingGroupEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> & operator=(const EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> : public BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	VehicleAddedForCollisionEvent[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> & operator=(const EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> : public BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreatePhysicalTrafficEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> & operator=(const EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> : public BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateArticulatedTrafficEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> & operator=(const EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> : public BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	SetTrafficCrashingEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> & operator=(const EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> : public BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveTrafficEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> & operator=(const EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> : public BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	UpdateNetworkTrafficEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> & operator=(const EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20> : public BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficCrashedEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20> & operator=(const EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20> : public BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficSlammedEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20> & operator=(const EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10> : public BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficCrashedEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10> & operator=(const EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> : public BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RaceCarCrashEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> & operator=(const EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8> : public BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RaceCarResetEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8> & operator=(const EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8> : public BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateVehicleResult[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8> & operator=(const EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<std::uint16_t,32> : public BaseEventQueue<uint16_t> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	uint16_t[32] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<uint16_t> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<uint16_t> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<std::uint16_t,32> & operator=(const EventQueue<std::uint16_t,32> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> : public BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficRemovedEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> & operator=(const EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20> : public BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateAirRamEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20> & operator=(const EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10> : public BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateSpinEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10> & operator=(const EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34> : public BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateRivalInTrafficSystemEvent[34] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34> & operator=(const EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34> : public BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveRivalFromTrafficSystemEvent[34] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34> & operator=(const EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50> : public BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DetachedPartRenderEvent[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50> & operator=(const EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10> : public BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RaceCarCrashCompleteEvent[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10> & operator=(const EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> : public BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	AudioCarDataLoadedEvent[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> & operator=(const EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,200> : public BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	UpdatePropEvent[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::UpdatePropEvent,200> & operator=(const EventQueue<BrnPhysics::Props::UpdatePropEvent,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::PropUpdateNotification,200> : public BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropUpdateNotification[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::PropUpdateNotification,200> & operator=(const EventQueue<BrnPhysics::Props::PropUpdateNotification,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20> : public BaseEventQueue<BrnWorld::DetachedPartRenderEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DetachedPartRenderEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::DetachedPartRenderEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::DetachedPartRenderEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::DetachedPartRenderEvent,20> & operator=(const EventQueue<BrnWorld::DetachedPartRenderEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8> : public BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	VehicleAddedForCollisionEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8> & operator=(const EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> : public BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ActivateHullEvent[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> & operator=(const EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160> : public BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	AddCrashingTrafficEvent[160] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160> & operator=(const EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160> : public BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveSlammedTrafficEvent[160] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160> & operator=(const EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160> : public BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveCrashedTrafficEvent[160] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160> & operator=(const EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256> : public BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveTriggerEvent[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256> & operator=(const EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> : public BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficLightKnockDownEvent[32] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> & operator=(const EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> : public BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficLightRestoreEvent[80] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> & operator=(const EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> : public BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	TrafficTypeResponse[32] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> & operator=(const EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30> : public BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropInstancesNeededForZoneEvent[30] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30> & operator=(const EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25> : public BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropGraphicsLoadedEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25> & operator=(const EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25> : public BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropGraphicsUnloadedEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25> & operator=(const EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24> : public BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CrashingTrafficUpdateEvent[24] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24> & operator=(const EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> : public BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	SoundWorldLoadEvent[25] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> & operator=(const EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PVSIO::GetZoneRequest,8> : public BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GetZoneRequest[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PVSIO::GetZoneRequest,8> & operator=(const EventQueue<BrnWorld::PVSIO::GetZoneRequest,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::PVSIO::GetZoneResponse,8> : public BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GetZoneResponse[8] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::PVSIO::GetZoneResponse,8> & operator=(const EventQueue<BrnWorld::PVSIO::GetZoneResponse,8> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> : public BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DirtyTrickEvent[28] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> & operator=(const EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14> : public BaseEventQueue<BrnNetwork::RoadRulesRecvData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RoadRulesRecvData[14] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::RoadRulesRecvData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::RoadRulesRecvData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::RoadRulesRecvData,14> & operator=(const EventQueue<BrnNetwork::RoadRulesRecvData,14> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> : public BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RoadRulesDownloadEvent[40] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> & operator=(const EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40> : public BaseEventQueue<BrnNetwork::RoadRulesMessageData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RoadRulesMessageData[40] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::RoadRulesMessageData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::RoadRulesMessageData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::RoadRulesMessageData,40> & operator=(const EventQueue<BrnNetwork::RoadRulesMessageData,40> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7> : public BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CompletedFburnChallengesData[7] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7> & operator=(const EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4> : public BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiNewDirtyTrick[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4> & operator=(const EventQueue<BrnGameState::GameStateToGuiNewDirtyTrick,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4> : public BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiTriggeredDirtyTrick[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4> & operator=(const EventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4> : public BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiEndingDirtyTrick[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4> & operator=(const EventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4> : public BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiOvertakeEvent[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4> & operator=(const EventQueue<BrnGameState::GameStateToGuiOvertakeEvent,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4> : public BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiFinishedRaceEvent[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4> & operator=(const EventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1> : public BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiTookLeadEvent[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1> & operator=(const EventQueue<BrnGameState::GameStateToGuiTookLeadEvent,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1> : public BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiTookLastEvent[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1> & operator=(const EventQueue<BrnGameState::GameStateToGuiTookLastEvent,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7> : public BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	GameStateToGuiOnTailEvent[7] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7> & operator=(const EventQueue<BrnGameState::GameStateToGuiOnTailEvent,7> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::StatsRequestEvent,16> : public BaseEventQueue<BrnNetwork::StatsRequestEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	StatsRequestEvent[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::StatsRequestEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::StatsRequestEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::StatsRequestEvent,16> & operator=(const EventQueue<BrnNetwork::StatsRequestEvent,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::NetworkPlayerStats,16> : public BaseEventQueue<BrnNetwork::NetworkPlayerStats> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	NetworkPlayerStats[16] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::NetworkPlayerStats> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::NetworkPlayerStats> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::NetworkPlayerStats,16> & operator=(const EventQueue<BrnNetwork::NetworkPlayerStats,16> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4> : public BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	NetworkToGuiLiveRevengeUpdate[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4> & operator=(const EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:119
extern bool Append<16>(const const EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<28>(const const EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4> : public BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PlayJoltEffectEvent[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4> & operator=(const EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4> : public BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PlayRumbleEffectEvent[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4> & operator=(const EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4> : public BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	ChangeVolumeRumbleEffectEvent[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4> & operator=(const EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4> : public BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	StopRumbleEffectEvent[4] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4> & operator=(const EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<CgsInput::InputIO::BindResult,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<CgsInput::InputIO::UnBindResult,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<16>(const const EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<CgsInput::InputIO::BaseInputEvent,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<14>(const const EventQueue<BrnNetwork::RoadRulesRecvData,14> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<40>(const const EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<40>(const const EventQueue<BrnNetwork::RoadRulesMessageData,40> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<7>(const const EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<2000>(const const EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<16>(const const EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<25>(const const EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<25>(const const EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<25>(const const EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<256>(const const EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<BrnGameState::TakedownEvent,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<32>(const const EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<200>(const const EventQueue<BrnPhysics::Props::PropUpdateNotification,200> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<BrnDirector::NewVehicleEvent,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<uint16_t,32> : public BaseEventQueue<uint16_t> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	uint16_t[32] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<uint16_t> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<uint16_t> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<uint16_t,32> & operator=(const EventQueue<uint16_t,32> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OutUpdateRigidBody[200] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OutContactSpy[800] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OutJointSpy[64] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OutDriveSpy[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

	// BrnPhysicsModuleEvents.h:29
	typedef InAddRigidBody InAddRigidBody;

protected:
	// CgsEventQueue.h:80
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::InAddRigidBody[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

	// BrnPhysicsModuleEvents.h:30
	typedef InRemoveRigidBody InRemoveRigidBody;

protected:
	// CgsEventQueue.h:80
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50>::InRemoveRigidBody[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddJoint[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveJoint[10] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20> : public BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	AddDeformationModelEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20> & operator=(const EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20> : public BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveDeformationModelEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20> & operator=(const EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28> : public BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DeactivateDeformationModelEvent[28] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28> & operator=(const EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28> : public BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	SetModelCollisionEvent[28] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28> & operator=(const EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28> : public BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	SetModelCullingGroupEvent[28] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28> & operator=(const EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1> : public BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CreateWorldEvent[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1> & operator=(const EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<int8_t,50> : public BaseEventQueue<int8_t> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	int8_t[50] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<int8_t> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<int8_t> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<int8_t,50> & operator=(const EventQueue<int8_t,50> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::PropRaceCarContact,30> : public BaseEventQueue<BrnPhysics::Props::PropRaceCarContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	PropRaceCarContact[30] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::PropRaceCarContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::PropRaceCarContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::PropRaceCarContact,30> & operator=(const EventQueue<BrnPhysics::Props::PropRaceCarContact,30> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,15> : public BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	UpdatePropEvent[15] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnPhysics::Props::UpdatePropEvent,15> & operator=(const EventQueue<BrnPhysics::Props::UpdatePropEvent,15> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddRigidBody[1] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> : public BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

	// BrnPhysicsModuleEvents.h:31
	typedef InUpdateExternalBody InUpdateExternalBody;

protected:
	// CgsEventQueue.h:80
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::InUpdateExternalBody[60] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> & operator=(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:119
extern bool Append<60>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<200>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1>(const const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:143
extern bool AppendSafe<100>(const const EventQueue<BrnPhysics::ContactSpy::PropContact,100> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:143
extern bool AppendSafe<50>(const const EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:143
extern bool AppendSafe<150>(const const EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:143
extern bool AppendSafe<400>(const const EventQueue<BrnPhysics::ContactSpy::TrafficContact,400> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:143
extern bool AppendSafe<300>(const const EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<8>(const const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<100>(const const EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<200>(const const EventQueue<BrnPhysics::Props::UpdatePropEvent,200> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<15>(const const EventQueue<BrnPhysics::Props::UpdatePropEvent,15> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSound::Io::QueueElement,4096> : public BaseEventQueue<CgsSound::Io::QueueElement> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	Command::QueueElement[4096] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSound::Io::QueueElement> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSound::Io::QueueElement> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSound::Io::QueueElement,4096> & operator=(const EventQueue<CgsSound::Io::QueueElement,4096> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSound::Io::QueueElement,1024> : public BaseEventQueue<CgsSound::Io::QueueElement> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	Command::QueueElement[1024] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSound::Io::QueueElement> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSound::Io::QueueElement> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSound::Io::QueueElement,1024> & operator=(const EventQueue<CgsSound::Io::QueueElement,1024> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160> : public BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	CleanupTrafficEvent[160] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160> & operator=(const EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160> : public BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	NetworkTrafficCrashingEvent[160] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160> & operator=(const EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<BrnTraffic::DetachedPartRenderEvent,20> : public BaseEventQueue<BrnTraffic::DetachedPartRenderEvent> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	DetachedPartRenderEvent[20] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<BrnTraffic::DetachedPartRenderEvent> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<BrnTraffic::DetachedPartRenderEvent> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<BrnTraffic::DetachedPartRenderEvent,20> & operator=(const EventQueue<BrnTraffic::DetachedPartRenderEvent,20> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:119
extern bool Append<1>(const const EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<16>(const const EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<300>(const const EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<100>(const const EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<298>(const const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<1024>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1024>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<5120>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1280>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1536>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1280>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10000>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1536>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1344>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1280>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<512>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1280>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1280>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<16>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<298>(const const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<298>(const const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<50>(const const EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<128>(const const EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<30>(const const EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<25>(const const EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<25>(const const EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<256>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<25>(const const EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<2048>(const const EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<10>(const const EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<128>(const const EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<1>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<20>(const const EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<298>(const const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<298>(const const EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<16>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<64>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:119
extern bool Append<1280>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlappingIntervalPair,131072> : public BaseEventQueue<CgsSceneManager::OverlappingIntervalPair> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OverlappingIntervalPair[131072] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlappingIntervalPair> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlappingIntervalPair> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlappingIntervalPair,131072> & operator=(const EventQueue<CgsSceneManager::OverlappingIntervalPair,131072> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody,16384> : public BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InAddBody[16384] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody,16384> & operator=(const EventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody,16384> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody,16384> : public BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InUpdateBody[16384] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody,16384> & operator=(const EventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody,16384> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody,16384> : public BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InRemoveBody[16384] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody,16384> & operator=(const EventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody,16384> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding,128> : public BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	InForceNoPadding[128] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding,128> & operator=(const EventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding,128> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlappingPair,16384> : public BaseEventQueue<CgsSceneManager::OverlappingPair> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	OverlappingPair[16384] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlappingPair> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlappingPair> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlappingPair,16384> & operator=(const EventQueue<CgsSceneManager::OverlappingPair,16384> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume,256> : public BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	AddInternalCollisionVolume[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume,256> & operator=(const EventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume,256> : public BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	RemoveInternalCollisionVolume[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume,256> & operator=(const EventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::Contact,16384> : public BaseEventQueue<CgsSceneManager::Contact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	Contact[16384] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::Contact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::Contact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::Contact,16384> & operator=(const EventQueue<CgsSceneManager::Contact,16384> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsSceneManager::IntermedateContact,2000> : public BaseEventQueue<CgsSceneManager::IntermedateContact> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	IntermedateContact[2000] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsSceneManager::IntermedateContact> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsSceneManager::IntermedateContact> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsSceneManager::IntermedateContact,2000> & operator=(const EventQueue<CgsSceneManager::IntermedateContact,2000> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:119
extern bool Append<256>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest,256> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<256>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest,256> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:119
extern bool Append<256>(const const EventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest,256> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsResource::Events::LoadBundleRequest,256> : public BaseEventQueue<CgsResource::Events::LoadBundleRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	LoadBundleRequest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsResource::Events::LoadBundleRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsResource::Events::LoadBundleRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsResource::Events::LoadBundleRequest,256> & operator=(const EventQueue<CgsResource::Events::LoadBundleRequest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsResource::Events::UnloadBundleRequest,256> : public BaseEventQueue<CgsResource::Events::UnloadBundleRequest> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	UnloadBundleRequest[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsResource::Events::UnloadBundleRequest> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsResource::Events::UnloadBundleRequest> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsResource::Events::UnloadBundleRequest,256> & operator=(const EventQueue<CgsResource::Events::UnloadBundleRequest,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsResource::Events::LoadBundleResponse,256> : public BaseEventQueue<CgsResource::Events::LoadBundleResponse> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	LoadBundleResponse[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsResource::Events::LoadBundleResponse> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsResource::Events::LoadBundleResponse> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsResource::Events::LoadBundleResponse,256> & operator=(const EventQueue<CgsResource::Events::LoadBundleResponse,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

// CgsEventQueue.h:44
struct CgsModule::EventQueue<CgsResource::Events::UnloadBundleResponse,256> : public BaseEventQueue<CgsResource::Events::UnloadBundleResponse> {
	// CgsEventQueue.h:46
	extern const int32_t KI_LENGTH;

protected:
	// CgsEventQueue.h:80
	UnloadBundleResponse[256] maEvents;

public:
	// CgsEventQueue.h:95
	void Construct();

	// CgsEventQueue.h:160
	const BaseEventQueue<CgsResource::Events::UnloadBundleResponse> * GetBaseEventQueue() const;

	// CgsEventQueue.h:177
	BaseEventQueue<CgsResource::Events::UnloadBundleResponse> * GetBaseEventQueue();

	// CgsEventQueue.h:235
	void FixUpInternalEventPointer();

	// CgsEventQueue.h:194
	EventQueue<CgsResource::Events::UnloadBundleResponse,256> & operator=(const EventQueue<CgsResource::Events::UnloadBundleResponse,256> &);

	// CgsEventQueue.h:217
	void Sort(int32_t (*)(const void *, const void *));

}

