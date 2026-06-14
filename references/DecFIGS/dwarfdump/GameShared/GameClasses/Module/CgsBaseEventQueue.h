// CgsBaseEventQueue.h:46
struct CgsModule::Event {
}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> {
private:
	// CgsBaseEventQueue.h:138
	InEventSetEntityPosition * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSetEntityPosition *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSetEntityPosition & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSetEntityPosition & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSetEntityPosition &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSetEntityPosition &);

	// CgsBaseEventQueue.h:356
	InEventSetEntityPosition * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSetEntityPosition * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> &);

	// CgsBaseEventQueue.h:484
	const InEventSetEntityPosition * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSetEntityPosition *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> {
private:
	// CgsBaseEventQueue.h:138
	InEventSetVolumeInstanceTransform * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSetVolumeInstanceTransform *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSetVolumeInstanceTransform & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSetVolumeInstanceTransform & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSetVolumeInstanceTransform &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSetVolumeInstanceTransform &);

	// CgsBaseEventQueue.h:356
	InEventSetVolumeInstanceTransform * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSetVolumeInstanceTransform * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> &);

	// CgsBaseEventQueue.h:484
	const InEventSetVolumeInstanceTransform * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSetVolumeInstanceTransform *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddEntity * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddEntity *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddEntity & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddEntity & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddEntity &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddEntity &);

	// CgsBaseEventQueue.h:356
	InEventAddEntity * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddEntity * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> &);

	// CgsBaseEventQueue.h:484
	const InEventAddEntity * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddEntity *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddDynamicVolume * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddDynamicVolume *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddDynamicVolume & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddDynamicVolume & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddDynamicVolume &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddDynamicVolume &);

	// CgsBaseEventQueue.h:356
	InEventAddDynamicVolume * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddDynamicVolume * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> &);

	// CgsBaseEventQueue.h:484
	const InEventAddDynamicVolume * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddDynamicVolume *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddForCollision * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddForCollision *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddForCollision & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddForCollision & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddForCollision &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddForCollision &);

	// CgsBaseEventQueue.h:356
	InEventAddForCollision * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddForCollision * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> &);

	// CgsBaseEventQueue.h:484
	const InEventAddForCollision * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddForCollision *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddVolumeInstance * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddVolumeInstance *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddVolumeInstance & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddVolumeInstance & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddVolumeInstance &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddVolumeInstance &);

	// CgsBaseEventQueue.h:356
	InEventAddVolumeInstance * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddVolumeInstance * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> &);

	// CgsBaseEventQueue.h:484
	const InEventAddVolumeInstance * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddVolumeInstance *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> {
private:
	// CgsBaseEventQueue.h:138
	InEventForceNoPadding * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventForceNoPadding *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventForceNoPadding & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventForceNoPadding & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventForceNoPadding &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventForceNoPadding &);

	// CgsBaseEventQueue.h:356
	InEventForceNoPadding * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventForceNoPadding * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> &);

	// CgsBaseEventQueue.h:484
	const InEventForceNoPadding * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventForceNoPadding *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> {
private:
	// CgsBaseEventQueue.h:138
	InEventRemoveEntity * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventRemoveEntity *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventRemoveEntity & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventRemoveEntity & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventRemoveEntity &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventRemoveEntity &);

	// CgsBaseEventQueue.h:356
	InEventRemoveEntity * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventRemoveEntity * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> &);

	// CgsBaseEventQueue.h:484
	const InEventRemoveEntity * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventRemoveEntity *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> {
private:
	// CgsBaseEventQueue.h:138
	InEventRemoveForCollision * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventRemoveForCollision *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventRemoveForCollision & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventRemoveForCollision & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventRemoveForCollision &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventRemoveForCollision &);

	// CgsBaseEventQueue.h:356
	InEventRemoveForCollision * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventRemoveForCollision * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> &);

	// CgsBaseEventQueue.h:484
	const InEventRemoveForCollision * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventRemoveForCollision *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> {
private:
	// CgsBaseEventQueue.h:138
	InEventRemoveVolume * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventRemoveVolume *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventRemoveVolume & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventRemoveVolume & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventRemoveVolume &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventRemoveVolume &);

	// CgsBaseEventQueue.h:356
	InEventRemoveVolume * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventRemoveVolume * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> &);

	// CgsBaseEventQueue.h:484
	const InEventRemoveVolume * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventRemoveVolume *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> {
private:
	// CgsBaseEventQueue.h:138
	InEventRemoveVolumeInstance * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventRemoveVolumeInstance *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventRemoveVolumeInstance & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventRemoveVolumeInstance & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventRemoveVolumeInstance &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventRemoveVolumeInstance &);

	// CgsBaseEventQueue.h:356
	InEventRemoveVolumeInstance * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventRemoveVolumeInstance * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> &);

	// CgsBaseEventQueue.h:484
	const InEventRemoveVolumeInstance * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventRemoveVolumeInstance *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> {
private:
	// CgsBaseEventQueue.h:138
	InEventReplaceDynamicVolume * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventReplaceDynamicVolume *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventReplaceDynamicVolume & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventReplaceDynamicVolume & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventReplaceDynamicVolume &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventReplaceDynamicVolume &);

	// CgsBaseEventQueue.h:356
	InEventReplaceDynamicVolume * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventReplaceDynamicVolume * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> &);

	// CgsBaseEventQueue.h:484
	const InEventReplaceDynamicVolume * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventReplaceDynamicVolume *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> {
private:
	// CgsBaseEventQueue.h:138
	InEventSetCullingGroupPair * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSetCullingGroupPair *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSetCullingGroupPair & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSetCullingGroupPair & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSetCullingGroupPair &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSetCullingGroupPair &);

	// CgsBaseEventQueue.h:356
	InEventSetCullingGroupPair * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSetCullingGroupPair * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> &);

	// CgsBaseEventQueue.h:484
	const InEventSetCullingGroupPair * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSetCullingGroupPair *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> {
private:
	// CgsBaseEventQueue.h:138
	InEventClearCullingTable * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventClearCullingTable *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventClearCullingTable & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventClearCullingTable & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventClearCullingTable &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventClearCullingTable &);

	// CgsBaseEventQueue.h:356
	InEventClearCullingTable * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventClearCullingTable * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> &);

	// CgsBaseEventQueue.h:484
	const InEventClearCullingTable * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventClearCullingTable *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> {
private:
	// CgsBaseEventQueue.h:138
	InEventSetEntityRadius * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSetEntityRadius *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSetEntityRadius & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSetEntityRadius & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSetEntityRadius &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSetEntityRadius &);

	// CgsBaseEventQueue.h:356
	InEventSetEntityRadius * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSetEntityRadius * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> &);

	// CgsBaseEventQueue.h:484
	const InEventSetEntityRadius * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSetEntityRadius *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> {
private:
	// CgsBaseEventQueue.h:138
	InEventSetPadding * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSetPadding *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSetPadding & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSetPadding & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSetPadding &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSetPadding &);

	// CgsBaseEventQueue.h:356
	InEventSetPadding * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSetPadding * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> &);

	// CgsBaseEventQueue.h:484
	const InEventSetPadding * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSetPadding *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddVolumeInstanceForCaching * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddVolumeInstanceForCaching *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddVolumeInstanceForCaching & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddVolumeInstanceForCaching & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddVolumeInstanceForCaching &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddVolumeInstanceForCaching &);

	// CgsBaseEventQueue.h:356
	InEventAddVolumeInstanceForCaching * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddVolumeInstanceForCaching * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> &);

	// CgsBaseEventQueue.h:484
	const InEventAddVolumeInstanceForCaching * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddVolumeInstanceForCaching *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> {
private:
	// CgsBaseEventQueue.h:138
	InEventClearEntityPadding * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventClearEntityPadding *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventClearEntityPadding & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventClearEntityPadding & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventClearEntityPadding &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventClearEntityPadding &);

	// CgsBaseEventQueue.h:356
	InEventClearEntityPadding * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventClearEntityPadding * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> &);

	// CgsBaseEventQueue.h:484
	const InEventClearEntityPadding * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventClearEntityPadding *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> {
private:
	// CgsBaseEventQueue.h:138
	InEventSetVolumeInstanceCullingGroup * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSetVolumeInstanceCullingGroup *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSetVolumeInstanceCullingGroup & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSetVolumeInstanceCullingGroup & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSetVolumeInstanceCullingGroup &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSetVolumeInstanceCullingGroup &);

	// CgsBaseEventQueue.h:356
	InEventSetVolumeInstanceCullingGroup * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSetVolumeInstanceCullingGroup * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> &);

	// CgsBaseEventQueue.h:484
	const InEventSetVolumeInstanceCullingGroup * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSetVolumeInstanceCullingGroup *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddToCache * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddToCache *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddToCache & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddToCache & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddToCache &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddToCache &);

	// CgsBaseEventQueue.h:356
	InEventAddToCache * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddToCache * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> &);

	// CgsBaseEventQueue.h:484
	const InEventAddToCache * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddToCache *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> {
private:
	// CgsBaseEventQueue.h:138
	InEventUpdateCachedPosition * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventUpdateCachedPosition *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventUpdateCachedPosition & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventUpdateCachedPosition & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventUpdateCachedPosition &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventUpdateCachedPosition &);

	// CgsBaseEventQueue.h:356
	InEventUpdateCachedPosition * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventUpdateCachedPosition * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> &);

	// CgsBaseEventQueue.h:484
	const InEventUpdateCachedPosition * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventUpdateCachedPosition *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> {
private:
	// CgsBaseEventQueue.h:138
	InEventRemoveFromCache * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventRemoveFromCache *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventRemoveFromCache & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventRemoveFromCache & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventRemoveFromCache &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventRemoveFromCache &);

	// CgsBaseEventQueue.h:356
	InEventRemoveFromCache * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventRemoveFromCache * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> &);

	// CgsBaseEventQueue.h:484
	const InEventRemoveFromCache * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventRemoveFromCache *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> {
private:
	// CgsBaseEventQueue.h:138
	InEventAddPolySoupList * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventAddPolySoupList *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventAddPolySoupList & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventAddPolySoupList & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventAddPolySoupList &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventAddPolySoupList &);

	// CgsBaseEventQueue.h:356
	InEventAddPolySoupList * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventAddPolySoupList * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> &);

	// CgsBaseEventQueue.h:484
	const InEventAddPolySoupList * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventAddPolySoupList *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> {
private:
	// CgsBaseEventQueue.h:138
	InEventClearPolySoupLists * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventClearPolySoupLists *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventClearPolySoupLists & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventClearPolySoupLists & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventClearPolySoupLists &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventClearPolySoupLists &);

	// CgsBaseEventQueue.h:356
	InEventClearPolySoupLists * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventClearPolySoupLists * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> &);

	// CgsBaseEventQueue.h:484
	const InEventClearPolySoupLists * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventClearPolySoupLists *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> {
private:
	// CgsBaseEventQueue.h:138
	InEventRemoveAllEntities * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventRemoveAllEntities *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventRemoveAllEntities & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventRemoveAllEntities & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventRemoveAllEntities &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventRemoveAllEntities &);

	// CgsBaseEventQueue.h:356
	InEventRemoveAllEntities * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventRemoveAllEntities * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> &);

	// CgsBaseEventQueue.h:484
	const InEventRemoveAllEntities * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventRemoveAllEntities *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest> {
private:
	// CgsBaseEventQueue.h:138
	InEventLineTest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventLineTest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventLineTest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventLineTest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventLineTest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventLineTest &);

	// CgsBaseEventQueue.h:356
	InEventLineTest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventLineTest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTest> &);

	// CgsBaseEventQueue.h:484
	const InEventLineTest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventLineTest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> {
private:
	// CgsBaseEventQueue.h:138
	InEventLineTestFine * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventLineTestFine *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventLineTestFine & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventLineTestFine & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventLineTestFine &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventLineTestFine &);

	// CgsBaseEventQueue.h:356
	InEventLineTestFine * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventLineTestFine * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> &);

	// CgsBaseEventQueue.h:484
	const InEventLineTestFine * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventLineTestFine *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> {
private:
	// CgsBaseEventQueue.h:138
	InEventLineTestNearest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventLineTestNearest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventLineTestNearest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventLineTestNearest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventLineTestNearest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventLineTestNearest &);

	// CgsBaseEventQueue.h:356
	InEventLineTestNearest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventLineTestNearest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest> &);

	// CgsBaseEventQueue.h:484
	const InEventLineTestNearest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventLineTestNearest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> {
private:
	// CgsBaseEventQueue.h:138
	InEventLineTestFastDoubleSided * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventLineTestFastDoubleSided *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventLineTestFastDoubleSided & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventLineTestFastDoubleSided & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventLineTestFastDoubleSided &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventLineTestFastDoubleSided &);

	// CgsBaseEventQueue.h:356
	InEventLineTestFastDoubleSided * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventLineTestFastDoubleSided * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided> &);

	// CgsBaseEventQueue.h:484
	const InEventLineTestFastDoubleSided * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventLineTestFastDoubleSided *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> {
private:
	// CgsBaseEventQueue.h:138
	InEventSphereTestFast * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventSphereTestFast *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventSphereTestFast & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventSphereTestFast & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventSphereTestFast &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventSphereTestFast &);

	// CgsBaseEventQueue.h:356
	InEventSphereTestFast * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventSphereTestFast * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast> &);

	// CgsBaseEventQueue.h:484
	const InEventSphereTestFast * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventSphereTestFast *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> {
private:
	// CgsBaseEventQueue.h:138
	InEventVolumeTestDeepest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventVolumeTestDeepest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventVolumeTestDeepest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventVolumeTestDeepest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventVolumeTestDeepest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventVolumeTestDeepest &);

	// CgsBaseEventQueue.h:356
	InEventVolumeTestDeepest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventVolumeTestDeepest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest> &);

	// CgsBaseEventQueue.h:484
	const InEventVolumeTestDeepest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventVolumeTestDeepest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> {
private:
	// CgsBaseEventQueue.h:138
	InEventVolumeTestFine * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventVolumeTestFine *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventVolumeTestFine & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventVolumeTestFine & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventVolumeTestFine &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventVolumeTestFine &);

	// CgsBaseEventQueue.h:356
	InEventVolumeTestFine * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventVolumeTestFine * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine> &);

	// CgsBaseEventQueue.h:484
	const InEventVolumeTestFine * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventVolumeTestFine *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> {
private:
	// CgsBaseEventQueue.h:138
	InEventTriangleCollisionLineTest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventTriangleCollisionLineTest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventTriangleCollisionLineTest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventTriangleCollisionLineTest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventTriangleCollisionLineTest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventTriangleCollisionLineTest &);

	// CgsBaseEventQueue.h:356
	InEventTriangleCollisionLineTest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventTriangleCollisionLineTest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest> &);

	// CgsBaseEventQueue.h:484
	const InEventTriangleCollisionLineTest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventTriangleCollisionLineTest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> {
private:
	// CgsBaseEventQueue.h:138
	InEventTriangleCollisionLineTestNearest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventTriangleCollisionLineTestNearest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventTriangleCollisionLineTestNearest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventTriangleCollisionLineTestNearest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventTriangleCollisionLineTestNearest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventTriangleCollisionLineTestNearest &);

	// CgsBaseEventQueue.h:356
	InEventTriangleCollisionLineTestNearest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventTriangleCollisionLineTestNearest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest> &);

	// CgsBaseEventQueue.h:484
	const InEventTriangleCollisionLineTestNearest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventTriangleCollisionLineTestNearest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> {
private:
	// CgsBaseEventQueue.h:138
	InEventTriangleCollisionSphereTest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InEventTriangleCollisionSphereTest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InEventTriangleCollisionSphereTest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InEventTriangleCollisionSphereTest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InEventTriangleCollisionSphereTest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InEventTriangleCollisionSphereTest &);

	// CgsBaseEventQueue.h:356
	InEventTriangleCollisionSphereTest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InEventTriangleCollisionSphereTest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest> &);

	// CgsBaseEventQueue.h:484
	const InEventTriangleCollisionSphereTest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InEventTriangleCollisionSphereTest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> {
private:
	// CgsBaseEventQueue.h:138
	PotentialContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PotentialContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PotentialContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PotentialContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PotentialContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PotentialContact &);

	// CgsBaseEventQueue.h:356
	PotentialContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PotentialContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> &);

	// CgsBaseEventQueue.h:484
	const PotentialContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PotentialContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> {
private:
	// CgsBaseEventQueue.h:138
	OutOverlapPair * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OutOverlapPair *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OutOverlapPair & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OutOverlapPair & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OutOverlapPair &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OutOverlapPair &);

	// CgsBaseEventQueue.h:356
	OutOverlapPair * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OutOverlapPair * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> &);

	// CgsBaseEventQueue.h:484
	const OutOverlapPair * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OutOverlapPair *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::ErrorEvent> {
private:
	// CgsBaseEventQueue.h:138
	ErrorEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ErrorEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ErrorEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ErrorEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ErrorEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ErrorEvent &);

	// CgsBaseEventQueue.h:356
	ErrorEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ErrorEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::ErrorEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::ErrorEvent> &);

	// CgsBaseEventQueue.h:484
	const ErrorEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ErrorEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> {
private:
	// CgsBaseEventQueue.h:138
	RaceRouteRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RaceRouteRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RaceRouteRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RaceRouteRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RaceRouteRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RaceRouteRequest &);

	// CgsBaseEventQueue.h:356
	RaceRouteRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RaceRouteRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> &);

	// CgsBaseEventQueue.h:484
	const RaceRouteRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RaceRouteRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest> {
private:
	// CgsBaseEventQueue.h:138
	ExtrapolatedRouteRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ExtrapolatedRouteRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ExtrapolatedRouteRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ExtrapolatedRouteRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ExtrapolatedRouteRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ExtrapolatedRouteRequest &);

	// CgsBaseEventQueue.h:356
	ExtrapolatedRouteRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ExtrapolatedRouteRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest> &);

	// CgsBaseEventQueue.h:484
	const ExtrapolatedRouteRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ExtrapolatedRouteRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent> {
private:
	// CgsBaseEventQueue.h:138
	NewVehicleEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(NewVehicleEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const NewVehicleEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	NewVehicleEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const NewVehicleEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const NewVehicleEvent &);

	// CgsBaseEventQueue.h:356
	NewVehicleEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	NewVehicleEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnDirector::NewVehicleEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnDirector::NewVehicleEvent> &);

	// CgsBaseEventQueue.h:484
	const NewVehicleEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(NewVehicleEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> {
private:
	// CgsBaseEventQueue.h:138
	ContactSpyRunData * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ContactSpyRunData *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ContactSpyRunData & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ContactSpyRunData & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ContactSpyRunData &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ContactSpyRunData &);

	// CgsBaseEventQueue.h:356
	ContactSpyRunData * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ContactSpyRunData * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::ContactSpyRunData> &);

	// CgsBaseEventQueue.h:484
	const ContactSpyRunData * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ContactSpyRunData *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> {
private:
	// CgsBaseEventQueue.h:138
	RaceCarContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RaceCarContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RaceCarContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RaceCarContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RaceCarContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RaceCarContact &);

	// CgsBaseEventQueue.h:356
	RaceCarContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RaceCarContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact> &);

	// CgsBaseEventQueue.h:484
	const RaceCarContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RaceCarContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> {
private:
	// CgsBaseEventQueue.h:138
	TrafficContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficContact &);

	// CgsBaseEventQueue.h:356
	TrafficContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact> &);

	// CgsBaseEventQueue.h:484
	const TrafficContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> {
private:
	// CgsBaseEventQueue.h:138
	PhysicalCarPartContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PhysicalCarPartContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PhysicalCarPartContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PhysicalCarPartContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PhysicalCarPartContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PhysicalCarPartContact &);

	// CgsBaseEventQueue.h:356
	PhysicalCarPartContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PhysicalCarPartContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact> &);

	// CgsBaseEventQueue.h:484
	const PhysicalCarPartContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PhysicalCarPartContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> {
private:
	// CgsBaseEventQueue.h:138
	HingedPartContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(HingedPartContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const HingedPartContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	HingedPartContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const HingedPartContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const HingedPartContact &);

	// CgsBaseEventQueue.h:356
	HingedPartContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	HingedPartContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::HingedPartContact> &);

	// CgsBaseEventQueue.h:484
	const HingedPartContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(HingedPartContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::PropContact> {
private:
	// CgsBaseEventQueue.h:138
	PropContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropContact &);

	// CgsBaseEventQueue.h:356
	PropContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::PropContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::PropContact> &);

	// CgsBaseEventQueue.h:484
	const PropContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact> {
private:
	// CgsBaseEventQueue.h:138
	DiscardedContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DiscardedContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DiscardedContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DiscardedContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DiscardedContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DiscardedContact &);

	// CgsBaseEventQueue.h:356
	DiscardedContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DiscardedContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact> &);

	// CgsBaseEventQueue.h:484
	const DiscardedContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DiscardedContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> {
private:
	// CgsBaseEventQueue.h:138
	ResetOnTrackRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ResetOnTrackRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ResetOnTrackRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ResetOnTrackRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ResetOnTrackRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ResetOnTrackRequest &);

	// CgsBaseEventQueue.h:356
	ResetOnTrackRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ResetOnTrackRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> &);

	// CgsBaseEventQueue.h:484
	const ResetOnTrackRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ResetOnTrackRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent> {
private:
	// CgsBaseEventQueue.h:138
	RivalInTrafficUpdateEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RivalInTrafficUpdateEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RivalInTrafficUpdateEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RivalInTrafficUpdateEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RivalInTrafficUpdateEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RivalInTrafficUpdateEvent &);

	// CgsBaseEventQueue.h:356
	RivalInTrafficUpdateEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RivalInTrafficUpdateEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent> &);

	// CgsBaseEventQueue.h:484
	const RivalInTrafficUpdateEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RivalInTrafficUpdateEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::TakedownEvent> {
private:
	// CgsBaseEventQueue.h:138
	TakedownEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TakedownEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TakedownEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TakedownEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TakedownEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TakedownEvent &);

	// CgsBaseEventQueue.h:356
	TakedownEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TakedownEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::TakedownEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::TakedownEvent> &);

	// CgsBaseEventQueue.h:484
	const TakedownEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TakedownEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> {
private:
	// CgsBaseEventQueue.h:138
	AddPhysicalPropEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(AddPhysicalPropEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const AddPhysicalPropEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	AddPhysicalPropEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const AddPhysicalPropEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const AddPhysicalPropEvent &);

	// CgsBaseEventQueue.h:356
	AddPhysicalPropEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	AddPhysicalPropEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> &);

	// CgsBaseEventQueue.h:484
	const AddPhysicalPropEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(AddPhysicalPropEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> {
private:
	// CgsBaseEventQueue.h:138
	AddPhysicalPartEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(AddPhysicalPartEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const AddPhysicalPartEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	AddPhysicalPartEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const AddPhysicalPartEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const AddPhysicalPartEvent &);

	// CgsBaseEventQueue.h:356
	AddPhysicalPartEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	AddPhysicalPartEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> &);

	// CgsBaseEventQueue.h:484
	const AddPhysicalPartEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(AddPhysicalPartEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemovePhysicalPropEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemovePhysicalPropEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemovePhysicalPropEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemovePhysicalPropEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemovePhysicalPropEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemovePhysicalPropEvent &);

	// CgsBaseEventQueue.h:356
	RemovePhysicalPropEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemovePhysicalPropEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> &);

	// CgsBaseEventQueue.h:484
	const RemovePhysicalPropEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemovePhysicalPropEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemovePhysicalPartEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemovePhysicalPartEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemovePhysicalPartEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemovePhysicalPartEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemovePhysicalPartEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemovePhysicalPartEvent &);

	// CgsBaseEventQueue.h:356
	RemovePhysicalPartEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemovePhysicalPartEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> &);

	// CgsBaseEventQueue.h:484
	const RemovePhysicalPartEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemovePhysicalPartEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> {
private:
	// CgsBaseEventQueue.h:138
	PropBecamePhysicalEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropBecamePhysicalEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropBecamePhysicalEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropBecamePhysicalEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropBecamePhysicalEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropBecamePhysicalEvent &);

	// CgsBaseEventQueue.h:356
	PropBecamePhysicalEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropBecamePhysicalEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> &);

	// CgsBaseEventQueue.h:484
	const PropBecamePhysicalEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropBecamePhysicalEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent> {
private:
	// CgsBaseEventQueue.h:138
	RecordPropHitEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RecordPropHitEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RecordPropHitEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RecordPropHitEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RecordPropHitEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RecordPropHitEvent &);

	// CgsBaseEventQueue.h:356
	RecordPropHitEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RecordPropHitEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent> &);

	// CgsBaseEventQueue.h:484
	const RecordPropHitEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RecordPropHitEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent> {
private:
	// CgsBaseEventQueue.h:138
	HitOverheadSignEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(HitOverheadSignEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const HitOverheadSignEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	HitOverheadSignEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const HitOverheadSignEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const HitOverheadSignEvent &);

	// CgsBaseEventQueue.h:356
	HitOverheadSignEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	HitOverheadSignEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent> &);

	// CgsBaseEventQueue.h:484
	const HitOverheadSignEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(HitOverheadSignEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent> {
private:
	// CgsBaseEventQueue.h:138
	BrokenPropEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(BrokenPropEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const BrokenPropEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	BrokenPropEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const BrokenPropEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const BrokenPropEvent &);

	// CgsBaseEventQueue.h:356
	BrokenPropEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	BrokenPropEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::BrokenPropEvent> &);

	// CgsBaseEventQueue.h:484
	const BrokenPropEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(BrokenPropEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> {
private:
	// CgsBaseEventQueue.h:138
	PropVFXLocatorEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropVFXLocatorEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropVFXLocatorEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropVFXLocatorEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropVFXLocatorEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropVFXLocatorEvent &);

	// CgsBaseEventQueue.h:356
	PropVFXLocatorEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropVFXLocatorEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> &);

	// CgsBaseEventQueue.h:484
	const PropVFXLocatorEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropVFXLocatorEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> {
private:
	// CgsBaseEventQueue.h:138
	ImpactEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ImpactEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ImpactEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ImpactEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ImpactEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ImpactEvent &);

	// CgsBaseEventQueue.h:356
	ImpactEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ImpactEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> &);

	// CgsBaseEventQueue.h:484
	const ImpactEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ImpactEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> {
private:
	// CgsBaseEventQueue.h:138
	PhysicalTrafficState * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PhysicalTrafficState *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PhysicalTrafficState & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PhysicalTrafficState & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PhysicalTrafficState &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PhysicalTrafficState &);

	// CgsBaseEventQueue.h:356
	PhysicalTrafficState * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PhysicalTrafficState * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> &);

	// CgsBaseEventQueue.h:484
	const PhysicalTrafficState * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PhysicalTrafficState *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> {
private:
	// CgsBaseEventQueue.h:138
	JointedPartStateEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(JointedPartStateEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const JointedPartStateEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	JointedPartStateEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const JointedPartStateEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const JointedPartStateEvent &);

	// CgsBaseEventQueue.h:356
	JointedPartStateEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	JointedPartStateEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> &);

	// CgsBaseEventQueue.h:484
	const JointedPartStateEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(JointedPartStateEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> {
private:
	// CgsBaseEventQueue.h:138
	DetachedPartNotificationEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DetachedPartNotificationEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DetachedPartNotificationEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DetachedPartNotificationEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DetachedPartNotificationEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DetachedPartNotificationEvent &);

	// CgsBaseEventQueue.h:356
	DetachedPartNotificationEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DetachedPartNotificationEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> &);

	// CgsBaseEventQueue.h:484
	const DetachedPartNotificationEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DetachedPartNotificationEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> {
private:
	// CgsBaseEventQueue.h:138
	BrokenJointNotificationEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(BrokenJointNotificationEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const BrokenJointNotificationEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	BrokenJointNotificationEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const BrokenJointNotificationEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const BrokenJointNotificationEvent &);

	// CgsBaseEventQueue.h:356
	BrokenJointNotificationEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	BrokenJointNotificationEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> &);

	// CgsBaseEventQueue.h:484
	const BrokenJointNotificationEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(BrokenJointNotificationEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> {
private:
	// CgsBaseEventQueue.h:138
	DetachedPartCurrentPositionEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DetachedPartCurrentPositionEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DetachedPartCurrentPositionEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DetachedPartCurrentPositionEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DetachedPartCurrentPositionEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DetachedPartCurrentPositionEvent &);

	// CgsBaseEventQueue.h:356
	DetachedPartCurrentPositionEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DetachedPartCurrentPositionEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> &);

	// CgsBaseEventQueue.h:484
	const DetachedPartCurrentPositionEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DetachedPartCurrentPositionEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> {
private:
	// CgsBaseEventQueue.h:138
	GlassSmashOrCrackEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GlassSmashOrCrackEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GlassSmashOrCrackEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GlassSmashOrCrackEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GlassSmashOrCrackEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GlassSmashOrCrackEvent &);

	// CgsBaseEventQueue.h:356
	GlassSmashOrCrackEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GlassSmashOrCrackEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> &);

	// CgsBaseEventQueue.h:484
	const GlassSmashOrCrackEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GlassSmashOrCrackEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> {
private:
	// CgsBaseEventQueue.h:138
	InAddRigidBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InAddRigidBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InAddRigidBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InAddRigidBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InAddRigidBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InAddRigidBody &);

	// CgsBaseEventQueue.h:356
	InAddRigidBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InAddRigidBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody> &);

	// CgsBaseEventQueue.h:484
	const InAddRigidBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InAddRigidBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateRigidBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateRigidBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateRigidBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateRigidBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateRigidBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateRigidBody &);

	// CgsBaseEventQueue.h:356
	InUpdateRigidBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateRigidBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody> &);

	// CgsBaseEventQueue.h:484
	const InUpdateRigidBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateRigidBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce> {
private:
	// CgsBaseEventQueue.h:138
	InApplyForce * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InApplyForce *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InApplyForce & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InApplyForce & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InApplyForce &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InApplyForce &);

	// CgsBaseEventQueue.h:356
	InApplyForce * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InApplyForce * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce> &);

	// CgsBaseEventQueue.h:484
	const InApplyForce * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InApplyForce *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> {
private:
	// CgsBaseEventQueue.h:138
	InChangeRigidBodyInertia * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InChangeRigidBodyInertia *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InChangeRigidBodyInertia & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia &);

	// CgsBaseEventQueue.h:356
	InChangeRigidBodyInertia * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InChangeRigidBodyInertia * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> &);

	// CgsBaseEventQueue.h:484
	const CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InChangeRigidBodyInertia *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy> {
private:
	// CgsBaseEventQueue.h:138
	InSetRigidBodySpy * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InSetRigidBodySpy *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InSetRigidBodySpy & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InSetRigidBodySpy & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InSetRigidBodySpy &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InSetRigidBodySpy &);

	// CgsBaseEventQueue.h:356
	InSetRigidBodySpy * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InSetRigidBodySpy * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy> &);

	// CgsBaseEventQueue.h:484
	const InSetRigidBodySpy * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InSetRigidBodySpy *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> {
private:
	// CgsBaseEventQueue.h:138
	InRemoveRigidBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InRemoveRigidBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InRemoveRigidBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InRemoveRigidBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InRemoveRigidBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InRemoveRigidBody &);

	// CgsBaseEventQueue.h:356
	InRemoveRigidBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InRemoveRigidBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody> &);

	// CgsBaseEventQueue.h:484
	const InRemoveRigidBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InRemoveRigidBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies> {
private:
	// CgsBaseEventQueue.h:138
	InRemoveAllRigidBodies * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InRemoveAllRigidBodies *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InRemoveAllRigidBodies & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InRemoveAllRigidBodies & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InRemoveAllRigidBodies &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InRemoveAllRigidBodies &);

	// CgsBaseEventQueue.h:356
	InRemoveAllRigidBodies * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InRemoveAllRigidBodies * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies> &);

	// CgsBaseEventQueue.h:484
	const InRemoveAllRigidBodies * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InRemoveAllRigidBodies *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact> {
private:
	// CgsBaseEventQueue.h:138
	InAddPotentialContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InAddPotentialContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InAddPotentialContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InAddPotentialContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InAddPotentialContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InAddPotentialContact &);

	// CgsBaseEventQueue.h:356
	InAddPotentialContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InAddPotentialContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact> &);

	// CgsBaseEventQueue.h:484
	const InAddPotentialContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InAddPotentialContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> {
private:
	// CgsBaseEventQueue.h:138
	InAddJoint * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InAddJoint *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InAddJoint & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InAddJoint & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InAddJoint &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InAddJoint &);

	// CgsBaseEventQueue.h:356
	InAddJoint * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InAddJoint * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint> &);

	// CgsBaseEventQueue.h:484
	const InAddJoint * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InAddJoint *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> {
private:
	// CgsBaseEventQueue.h:138
	InRemoveJoint * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InRemoveJoint *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InRemoveJoint & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InRemoveJoint & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InRemoveJoint &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InRemoveJoint &);

	// CgsBaseEventQueue.h:356
	InRemoveJoint * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InRemoveJoint * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint> &);

	// CgsBaseEventQueue.h:484
	const InRemoveJoint * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InRemoveJoint *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateJointFrames * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateJointFrames *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateJointFrames & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateJointFrames & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateJointFrames &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateJointFrames &);

	// CgsBaseEventQueue.h:356
	InUpdateJointFrames * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateJointFrames * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames> &);

	// CgsBaseEventQueue.h:484
	const InUpdateJointFrames * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateJointFrames *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateJointLimits * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateJointLimits *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateJointLimits & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateJointLimits & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateJointLimits &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateJointLimits &);

	// CgsBaseEventQueue.h:356
	InUpdateJointLimits * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateJointLimits * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits> &);

	// CgsBaseEventQueue.h:484
	const InUpdateJointLimits * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateJointLimits *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy> {
private:
	// CgsBaseEventQueue.h:138
	InSetJointSpy * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InSetJointSpy *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InSetJointSpy & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InSetJointSpy & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InSetJointSpy &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InSetJointSpy &);

	// CgsBaseEventQueue.h:356
	InSetJointSpy * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InSetJointSpy * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy> &);

	// CgsBaseEventQueue.h:484
	const InSetJointSpy * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InSetJointSpy *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive> {
private:
	// CgsBaseEventQueue.h:138
	InAddDrive * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InAddDrive *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InAddDrive & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InAddDrive & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InAddDrive &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InAddDrive &);

	// CgsBaseEventQueue.h:356
	InAddDrive * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InAddDrive * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive> &);

	// CgsBaseEventQueue.h:484
	const InAddDrive * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InAddDrive *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive> {
private:
	// CgsBaseEventQueue.h:138
	InRemoveDrive * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InRemoveDrive *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InRemoveDrive & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InRemoveDrive & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InRemoveDrive &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InRemoveDrive &);

	// CgsBaseEventQueue.h:356
	InRemoveDrive * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InRemoveDrive * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive> &);

	// CgsBaseEventQueue.h:484
	const InRemoveDrive * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InRemoveDrive *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateDriveFrames * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateDriveFrames *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateDriveFrames & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateDriveFrames & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateDriveFrames &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateDriveFrames &);

	// CgsBaseEventQueue.h:356
	InUpdateDriveFrames * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateDriveFrames * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames> &);

	// CgsBaseEventQueue.h:484
	const InUpdateDriveFrames * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateDriveFrames *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateDriveDynamics * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateDriveDynamics *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateDriveDynamics & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateDriveDynamics & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateDriveDynamics &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateDriveDynamics &);

	// CgsBaseEventQueue.h:356
	InUpdateDriveDynamics * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateDriveDynamics * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics> &);

	// CgsBaseEventQueue.h:484
	const InUpdateDriveDynamics * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateDriveDynamics *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy> {
private:
	// CgsBaseEventQueue.h:138
	InSetDriveSpy * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InSetDriveSpy *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InSetDriveSpy & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InSetDriveSpy & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InSetDriveSpy &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InSetDriveSpy &);

	// CgsBaseEventQueue.h:356
	InSetDriveSpy * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InSetDriveSpy * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy> &);

	// CgsBaseEventQueue.h:484
	const InSetDriveSpy * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InSetDriveSpy *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateExternalBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateExternalBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateExternalBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateExternalBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateExternalBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateExternalBody &);

	// CgsBaseEventQueue.h:356
	InUpdateExternalBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateExternalBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody> &);

	// CgsBaseEventQueue.h:484
	const InUpdateExternalBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateExternalBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent> {
	// CgsInputModuleIO.h:125
	typedef BaseInputEvent BindRequest;

private:
	// CgsBaseEventQueue.h:138
	BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest &);

	// CgsBaseEventQueue.h:356
	BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::BaseInputEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::BaseInputEvent> &);

	// CgsBaseEventQueue.h:484
	const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping> {
private:
	// CgsBaseEventQueue.h:138
	PadMapping * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PadMapping *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PadMapping & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PadMapping & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PadMapping &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PadMapping &);

	// CgsBaseEventQueue.h:356
	PadMapping * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PadMapping * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::PadMapping> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::PadMapping> &);

	// CgsBaseEventQueue.h:484
	const PadMapping * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PadMapping *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult> {
private:
	// CgsBaseEventQueue.h:138
	BindResult * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(BindResult *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const BindResult & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	BindResult & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const BindResult &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const BindResult &);

	// CgsBaseEventQueue.h:356
	BindResult * AllocateEvent();

	// CgsBaseEventQueue.h:379
	BindResult * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::BindResult> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::BindResult> &);

	// CgsBaseEventQueue.h:484
	const BindResult * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(BindResult *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult> {
private:
	// CgsBaseEventQueue.h:138
	UnBindResult * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(UnBindResult *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const UnBindResult & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	UnBindResult & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const UnBindResult &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const UnBindResult &);

	// CgsBaseEventQueue.h:356
	UnBindResult * AllocateEvent();

	// CgsBaseEventQueue.h:379
	UnBindResult * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::UnBindResult> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::UnBindResult> &);

	// CgsBaseEventQueue.h:484
	const UnBindResult * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(UnBindResult *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> {
private:
	// CgsBaseEventQueue.h:138
	RouteResponse * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RouteResponse *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RouteResponse & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RouteResponse & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RouteResponse &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RouteResponse &);

	// CgsBaseEventQueue.h:356
	RouteResponse * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RouteResponse * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> &);

	// CgsBaseEventQueue.h:484
	const RouteResponse * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RouteResponse *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> {
private:
	// CgsBaseEventQueue.h:138
	ResetOnTrackResult * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ResetOnTrackResult *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ResetOnTrackResult & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ResetOnTrackResult & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ResetOnTrackResult &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ResetOnTrackResult &);

	// CgsBaseEventQueue.h:356
	ResetOnTrackResult * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ResetOnTrackResult * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> &);

	// CgsBaseEventQueue.h:484
	const ResetOnTrackResult * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ResetOnTrackResult *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> {
private:
	// CgsBaseEventQueue.h:138
	PlaceOnTrackRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PlaceOnTrackRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PlaceOnTrackRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PlaceOnTrackRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PlaceOnTrackRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PlaceOnTrackRequest &);

	// CgsBaseEventQueue.h:356
	PlaceOnTrackRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PlaceOnTrackRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> &);

	// CgsBaseEventQueue.h:484
	const PlaceOnTrackRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PlaceOnTrackRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> {
private:
	// CgsBaseEventQueue.h:138
	OutEventLineTestNearestResult * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OutEventLineTestNearestResult *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OutEventLineTestNearestResult & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OutEventLineTestNearestResult & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OutEventLineTestNearestResult &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OutEventLineTestNearestResult &);

	// CgsBaseEventQueue.h:356
	OutEventLineTestNearestResult * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OutEventLineTestNearestResult * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &);

	// CgsBaseEventQueue.h:484
	const OutEventLineTestNearestResult * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OutEventLineTestNearestResult *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreateRaceCarEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateRaceCarEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateRaceCarEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateRaceCarEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateRaceCarEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateRaceCarEvent &);

	// CgsBaseEventQueue.h:356
	CreateRaceCarEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateRaceCarEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> &);

	// CgsBaseEventQueue.h:484
	const CreateRaceCarEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateRaceCarEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemoveRaceCarEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveRaceCarEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveRaceCarEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveRaceCarEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveRaceCarEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveRaceCarEvent &);

	// CgsBaseEventQueue.h:356
	RemoveRaceCarEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveRaceCarEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> &);

	// CgsBaseEventQueue.h:484
	const RemoveRaceCarEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveRaceCarEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> {
private:
	// CgsBaseEventQueue.h:138
	ResetVehicleEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ResetVehicleEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ResetVehicleEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ResetVehicleEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ResetVehicleEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ResetVehicleEvent &);

	// CgsBaseEventQueue.h:356
	ResetVehicleEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ResetVehicleEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> &);

	// CgsBaseEventQueue.h:484
	const ResetVehicleEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ResetVehicleEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> {
private:
	// CgsBaseEventQueue.h:138
	ValidateRaceCarEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ValidateRaceCarEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ValidateRaceCarEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ValidateRaceCarEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ValidateRaceCarEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ValidateRaceCarEvent &);

	// CgsBaseEventQueue.h:356
	ValidateRaceCarEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ValidateRaceCarEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> &);

	// CgsBaseEventQueue.h:484
	const ValidateRaceCarEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ValidateRaceCarEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> {
private:
	// CgsBaseEventQueue.h:138
	SetRaceCarCollisionEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(SetRaceCarCollisionEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const SetRaceCarCollisionEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	SetRaceCarCollisionEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const SetRaceCarCollisionEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const SetRaceCarCollisionEvent &);

	// CgsBaseEventQueue.h:356
	SetRaceCarCollisionEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	SetRaceCarCollisionEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> &);

	// CgsBaseEventQueue.h:484
	const SetRaceCarCollisionEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(SetRaceCarCollisionEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> {
private:
	// CgsBaseEventQueue.h:138
	SetRaceCarCullingGroupEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(SetRaceCarCullingGroupEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const SetRaceCarCullingGroupEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	SetRaceCarCullingGroupEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const SetRaceCarCullingGroupEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const SetRaceCarCullingGroupEvent &);

	// CgsBaseEventQueue.h:356
	SetRaceCarCullingGroupEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	SetRaceCarCullingGroupEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> &);

	// CgsBaseEventQueue.h:484
	const SetRaceCarCullingGroupEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(SetRaceCarCullingGroupEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> {
private:
	// CgsBaseEventQueue.h:138
	VehicleAddedForCollisionEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(VehicleAddedForCollisionEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const VehicleAddedForCollisionEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	VehicleAddedForCollisionEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const VehicleAddedForCollisionEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const VehicleAddedForCollisionEvent &);

	// CgsBaseEventQueue.h:356
	VehicleAddedForCollisionEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	VehicleAddedForCollisionEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> &);

	// CgsBaseEventQueue.h:484
	const VehicleAddedForCollisionEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(VehicleAddedForCollisionEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreatePhysicalTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreatePhysicalTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreatePhysicalTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreatePhysicalTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreatePhysicalTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreatePhysicalTrafficEvent &);

	// CgsBaseEventQueue.h:356
	CreatePhysicalTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreatePhysicalTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const CreatePhysicalTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreatePhysicalTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreateArticulatedTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateArticulatedTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateArticulatedTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateArticulatedTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateArticulatedTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateArticulatedTrafficEvent &);

	// CgsBaseEventQueue.h:356
	CreateArticulatedTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateArticulatedTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const CreateArticulatedTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateArticulatedTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> {
private:
	// CgsBaseEventQueue.h:138
	SetTrafficCrashingEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(SetTrafficCrashingEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const SetTrafficCrashingEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	SetTrafficCrashingEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const SetTrafficCrashingEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const SetTrafficCrashingEvent &);

	// CgsBaseEventQueue.h:356
	SetTrafficCrashingEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	SetTrafficCrashingEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> &);

	// CgsBaseEventQueue.h:484
	const SetTrafficCrashingEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(SetTrafficCrashingEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemoveTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveTrafficEvent &);

	// CgsBaseEventQueue.h:356
	RemoveTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const RemoveTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	UpdateNetworkTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(UpdateNetworkTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const UpdateNetworkTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	UpdateNetworkTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const UpdateNetworkTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const UpdateNetworkTrafficEvent &);

	// CgsBaseEventQueue.h:356
	UpdateNetworkTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	UpdateNetworkTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const UpdateNetworkTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(UpdateNetworkTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> {
private:
	// CgsBaseEventQueue.h:138
	TrafficCrashedEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficCrashedEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficCrashedEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficCrashedEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficCrashedEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficCrashedEvent &);

	// CgsBaseEventQueue.h:356
	TrafficCrashedEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficCrashedEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> &);

	// CgsBaseEventQueue.h:484
	const TrafficCrashedEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficCrashedEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> {
private:
	// CgsBaseEventQueue.h:138
	TrafficSlammedEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficSlammedEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficSlammedEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficSlammedEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficSlammedEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficSlammedEvent &);

	// CgsBaseEventQueue.h:356
	TrafficSlammedEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficSlammedEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> &);

	// CgsBaseEventQueue.h:484
	const TrafficSlammedEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficSlammedEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> {
private:
	// CgsBaseEventQueue.h:138
	RaceCarCrashEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RaceCarCrashEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RaceCarCrashEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RaceCarCrashEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RaceCarCrashEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RaceCarCrashEvent &);

	// CgsBaseEventQueue.h:356
	RaceCarCrashEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RaceCarCrashEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> &);

	// CgsBaseEventQueue.h:484
	const RaceCarCrashEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RaceCarCrashEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> {
private:
	// CgsBaseEventQueue.h:138
	RaceCarResetEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RaceCarResetEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RaceCarResetEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RaceCarResetEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RaceCarResetEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RaceCarResetEvent &);

	// CgsBaseEventQueue.h:356
	RaceCarResetEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RaceCarResetEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> &);

	// CgsBaseEventQueue.h:484
	const RaceCarResetEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RaceCarResetEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> {
private:
	// CgsBaseEventQueue.h:138
	CreateVehicleResult * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateVehicleResult *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateVehicleResult & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateVehicleResult & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateVehicleResult &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateVehicleResult &);

	// CgsBaseEventQueue.h:356
	CreateVehicleResult * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateVehicleResult * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> &);

	// CgsBaseEventQueue.h:484
	const CreateVehicleResult * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateVehicleResult *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<uint16_t> {
private:
	// CgsBaseEventQueue.h:138
	uint16_t * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(uint16_t *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const uint16_t & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	uint16_t & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const uint16_t &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const uint16_t &);

	// CgsBaseEventQueue.h:356
	uint16_t * AllocateEvent();

	// CgsBaseEventQueue.h:379
	uint16_t * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<uint16_t> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<uint16_t> &);

	// CgsBaseEventQueue.h:484
	const uint16_t * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(uint16_t *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> {
private:
	// CgsBaseEventQueue.h:138
	TrafficRemovedEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficRemovedEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficRemovedEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficRemovedEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficRemovedEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficRemovedEvent &);

	// CgsBaseEventQueue.h:356
	TrafficRemovedEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficRemovedEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> &);

	// CgsBaseEventQueue.h:484
	const TrafficRemovedEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficRemovedEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreateAirRamEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateAirRamEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateAirRamEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateAirRamEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateAirRamEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateAirRamEvent &);

	// CgsBaseEventQueue.h:356
	CreateAirRamEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateAirRamEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> &);

	// CgsBaseEventQueue.h:484
	const CreateAirRamEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateAirRamEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreateSpinEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateSpinEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateSpinEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateSpinEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateSpinEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateSpinEvent &);

	// CgsBaseEventQueue.h:356
	CreateSpinEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateSpinEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> &);

	// CgsBaseEventQueue.h:484
	const CreateSpinEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateSpinEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreateRivalInTrafficSystemEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateRivalInTrafficSystemEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateRivalInTrafficSystemEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateRivalInTrafficSystemEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateRivalInTrafficSystemEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateRivalInTrafficSystemEvent &);

	// CgsBaseEventQueue.h:356
	CreateRivalInTrafficSystemEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateRivalInTrafficSystemEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> &);

	// CgsBaseEventQueue.h:484
	const CreateRivalInTrafficSystemEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateRivalInTrafficSystemEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemoveRivalFromTrafficSystemEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveRivalFromTrafficSystemEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveRivalFromTrafficSystemEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveRivalFromTrafficSystemEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveRivalFromTrafficSystemEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveRivalFromTrafficSystemEvent &);

	// CgsBaseEventQueue.h:356
	RemoveRivalFromTrafficSystemEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveRivalFromTrafficSystemEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> &);

	// CgsBaseEventQueue.h:484
	const RemoveRivalFromTrafficSystemEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveRivalFromTrafficSystemEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> {
private:
	// CgsBaseEventQueue.h:138
	DetachedPartRenderEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DetachedPartRenderEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DetachedPartRenderEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DetachedPartRenderEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DetachedPartRenderEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DetachedPartRenderEvent &);

	// CgsBaseEventQueue.h:356
	DetachedPartRenderEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DetachedPartRenderEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> &);

	// CgsBaseEventQueue.h:484
	const DetachedPartRenderEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DetachedPartRenderEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> {
private:
	// CgsBaseEventQueue.h:138
	RaceCarCrashCompleteEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RaceCarCrashCompleteEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RaceCarCrashCompleteEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RaceCarCrashCompleteEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RaceCarCrashCompleteEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RaceCarCrashCompleteEvent &);

	// CgsBaseEventQueue.h:356
	RaceCarCrashCompleteEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RaceCarCrashCompleteEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> &);

	// CgsBaseEventQueue.h:484
	const RaceCarCrashCompleteEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RaceCarCrashCompleteEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> {
private:
	// CgsBaseEventQueue.h:138
	AudioCarDataLoadedEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(AudioCarDataLoadedEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const AudioCarDataLoadedEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	AudioCarDataLoadedEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const AudioCarDataLoadedEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const AudioCarDataLoadedEvent &);

	// CgsBaseEventQueue.h:356
	AudioCarDataLoadedEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	AudioCarDataLoadedEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> &);

	// CgsBaseEventQueue.h:484
	const AudioCarDataLoadedEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(AudioCarDataLoadedEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> {
private:
	// CgsBaseEventQueue.h:138
	UpdatePropEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(UpdatePropEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const UpdatePropEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	UpdatePropEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const UpdatePropEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const UpdatePropEvent &);

	// CgsBaseEventQueue.h:356
	UpdatePropEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	UpdatePropEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> &);

	// CgsBaseEventQueue.h:484
	const UpdatePropEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(UpdatePropEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> {
private:
	// CgsBaseEventQueue.h:138
	PropUpdateNotification * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropUpdateNotification *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropUpdateNotification & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropUpdateNotification & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropUpdateNotification &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropUpdateNotification &);

	// CgsBaseEventQueue.h:356
	PropUpdateNotification * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropUpdateNotification * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> &);

	// CgsBaseEventQueue.h:484
	const PropUpdateNotification * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropUpdateNotification *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent> {
private:
	// CgsBaseEventQueue.h:138
	DetachedPartRenderEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DetachedPartRenderEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DetachedPartRenderEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DetachedPartRenderEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DetachedPartRenderEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DetachedPartRenderEvent &);

	// CgsBaseEventQueue.h:356
	DetachedPartRenderEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DetachedPartRenderEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::DetachedPartRenderEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::DetachedPartRenderEvent> &);

	// CgsBaseEventQueue.h:484
	const DetachedPartRenderEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DetachedPartRenderEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> {
private:
	// CgsBaseEventQueue.h:138
	ActivateHullEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ActivateHullEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ActivateHullEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ActivateHullEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ActivateHullEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ActivateHullEvent &);

	// CgsBaseEventQueue.h:356
	ActivateHullEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ActivateHullEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> &);

	// CgsBaseEventQueue.h:484
	const ActivateHullEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ActivateHullEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	AddCrashingTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(AddCrashingTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const AddCrashingTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	AddCrashingTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const AddCrashingTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const AddCrashingTrafficEvent &);

	// CgsBaseEventQueue.h:356
	AddCrashingTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	AddCrashingTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const AddCrashingTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(AddCrashingTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemoveSlammedTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveSlammedTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveSlammedTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveSlammedTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveSlammedTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveSlammedTrafficEvent &);

	// CgsBaseEventQueue.h:356
	RemoveSlammedTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveSlammedTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const RemoveSlammedTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveSlammedTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemoveCrashedTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveCrashedTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveCrashedTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveCrashedTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveCrashedTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveCrashedTrafficEvent &);

	// CgsBaseEventQueue.h:356
	RemoveCrashedTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveCrashedTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const RemoveCrashedTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveCrashedTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> {
private:
	// CgsBaseEventQueue.h:138
	InRemoveTriggerEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InRemoveTriggerEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InRemoveTriggerEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InRemoveTriggerEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InRemoveTriggerEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InRemoveTriggerEvent &);

	// CgsBaseEventQueue.h:356
	InRemoveTriggerEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InRemoveTriggerEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> &);

	// CgsBaseEventQueue.h:484
	const InRemoveTriggerEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InRemoveTriggerEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> {
private:
	// CgsBaseEventQueue.h:138
	TrafficLightKnockDownEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficLightKnockDownEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficLightKnockDownEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficLightKnockDownEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficLightKnockDownEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficLightKnockDownEvent &);

	// CgsBaseEventQueue.h:356
	TrafficLightKnockDownEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficLightKnockDownEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> &);

	// CgsBaseEventQueue.h:484
	const TrafficLightKnockDownEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficLightKnockDownEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> {
private:
	// CgsBaseEventQueue.h:138
	TrafficLightRestoreEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficLightRestoreEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficLightRestoreEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficLightRestoreEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficLightRestoreEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficLightRestoreEvent &);

	// CgsBaseEventQueue.h:356
	TrafficLightRestoreEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficLightRestoreEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> &);

	// CgsBaseEventQueue.h:484
	const TrafficLightRestoreEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficLightRestoreEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> {
private:
	// CgsBaseEventQueue.h:138
	TrafficTypeResponse * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(TrafficTypeResponse *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const TrafficTypeResponse & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	TrafficTypeResponse & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const TrafficTypeResponse &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const TrafficTypeResponse &);

	// CgsBaseEventQueue.h:356
	TrafficTypeResponse * AllocateEvent();

	// CgsBaseEventQueue.h:379
	TrafficTypeResponse * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> &);

	// CgsBaseEventQueue.h:484
	const TrafficTypeResponse * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(TrafficTypeResponse *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> {
private:
	// CgsBaseEventQueue.h:138
	PropInstancesNeededForZoneEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropInstancesNeededForZoneEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropInstancesNeededForZoneEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropInstancesNeededForZoneEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropInstancesNeededForZoneEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropInstancesNeededForZoneEvent &);

	// CgsBaseEventQueue.h:356
	PropInstancesNeededForZoneEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropInstancesNeededForZoneEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> &);

	// CgsBaseEventQueue.h:484
	const PropInstancesNeededForZoneEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropInstancesNeededForZoneEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> {
private:
	// CgsBaseEventQueue.h:138
	PropGraphicsLoadedEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropGraphicsLoadedEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropGraphicsLoadedEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropGraphicsLoadedEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropGraphicsLoadedEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropGraphicsLoadedEvent &);

	// CgsBaseEventQueue.h:356
	PropGraphicsLoadedEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropGraphicsLoadedEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> &);

	// CgsBaseEventQueue.h:484
	const PropGraphicsLoadedEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropGraphicsLoadedEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> {
private:
	// CgsBaseEventQueue.h:138
	PropGraphicsUnloadedEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropGraphicsUnloadedEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropGraphicsUnloadedEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropGraphicsUnloadedEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropGraphicsUnloadedEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropGraphicsUnloadedEvent &);

	// CgsBaseEventQueue.h:356
	PropGraphicsUnloadedEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropGraphicsUnloadedEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> &);

	// CgsBaseEventQueue.h:484
	const PropGraphicsUnloadedEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropGraphicsUnloadedEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> {
private:
	// CgsBaseEventQueue.h:138
	CrashingTrafficUpdateEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CrashingTrafficUpdateEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CrashingTrafficUpdateEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CrashingTrafficUpdateEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CrashingTrafficUpdateEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CrashingTrafficUpdateEvent &);

	// CgsBaseEventQueue.h:356
	CrashingTrafficUpdateEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CrashingTrafficUpdateEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> &);

	// CgsBaseEventQueue.h:484
	const CrashingTrafficUpdateEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CrashingTrafficUpdateEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> {
private:
	// CgsBaseEventQueue.h:138
	SoundWorldLoadEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(SoundWorldLoadEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const SoundWorldLoadEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	SoundWorldLoadEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const SoundWorldLoadEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const SoundWorldLoadEvent &);

	// CgsBaseEventQueue.h:356
	SoundWorldLoadEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	SoundWorldLoadEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> &);

	// CgsBaseEventQueue.h:484
	const SoundWorldLoadEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(SoundWorldLoadEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest> {
private:
	// CgsBaseEventQueue.h:138
	GetZoneRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GetZoneRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GetZoneRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GetZoneRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GetZoneRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GetZoneRequest &);

	// CgsBaseEventQueue.h:356
	GetZoneRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GetZoneRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest> &);

	// CgsBaseEventQueue.h:484
	const GetZoneRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GetZoneRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse> {
private:
	// CgsBaseEventQueue.h:138
	GetZoneResponse * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GetZoneResponse *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GetZoneResponse & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GetZoneResponse & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GetZoneResponse &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GetZoneResponse &);

	// CgsBaseEventQueue.h:356
	GetZoneResponse * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GetZoneResponse * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse> &);

	// CgsBaseEventQueue.h:484
	const GetZoneResponse * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GetZoneResponse *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> {
private:
	// CgsBaseEventQueue.h:138
	DirtyTrickEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DirtyTrickEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DirtyTrickEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DirtyTrickEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DirtyTrickEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DirtyTrickEvent &);

	// CgsBaseEventQueue.h:356
	DirtyTrickEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DirtyTrickEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> &);

	// CgsBaseEventQueue.h:484
	const DirtyTrickEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DirtyTrickEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData> {
private:
	// CgsBaseEventQueue.h:138
	RoadRulesRecvData * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RoadRulesRecvData *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RoadRulesRecvData & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RoadRulesRecvData & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RoadRulesRecvData &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RoadRulesRecvData &);

	// CgsBaseEventQueue.h:356
	RoadRulesRecvData * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RoadRulesRecvData * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::RoadRulesRecvData> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::RoadRulesRecvData> &);

	// CgsBaseEventQueue.h:484
	const RoadRulesRecvData * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RoadRulesRecvData *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> {
private:
	// CgsBaseEventQueue.h:138
	RoadRulesDownloadEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RoadRulesDownloadEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RoadRulesDownloadEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RoadRulesDownloadEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RoadRulesDownloadEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RoadRulesDownloadEvent &);

	// CgsBaseEventQueue.h:356
	RoadRulesDownloadEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RoadRulesDownloadEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> &);

	// CgsBaseEventQueue.h:484
	const RoadRulesDownloadEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RoadRulesDownloadEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData> {
private:
	// CgsBaseEventQueue.h:138
	RoadRulesMessageData * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RoadRulesMessageData *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RoadRulesMessageData & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RoadRulesMessageData & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RoadRulesMessageData &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RoadRulesMessageData &);

	// CgsBaseEventQueue.h:356
	RoadRulesMessageData * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RoadRulesMessageData * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::RoadRulesMessageData> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::RoadRulesMessageData> &);

	// CgsBaseEventQueue.h:484
	const RoadRulesMessageData * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RoadRulesMessageData *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> {
private:
	// CgsBaseEventQueue.h:138
	CompletedFburnChallengesData * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CompletedFburnChallengesData *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CompletedFburnChallengesData & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CompletedFburnChallengesData & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CompletedFburnChallengesData &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CompletedFburnChallengesData &);

	// CgsBaseEventQueue.h:356
	CompletedFburnChallengesData * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CompletedFburnChallengesData * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> &);

	// CgsBaseEventQueue.h:484
	const CompletedFburnChallengesData * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CompletedFburnChallengesData *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiNewDirtyTrick * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiNewDirtyTrick *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiNewDirtyTrick & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiNewDirtyTrick & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiNewDirtyTrick &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiNewDirtyTrick &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiNewDirtyTrick * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiNewDirtyTrick * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiNewDirtyTrick> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiNewDirtyTrick * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiNewDirtyTrick *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiTriggeredDirtyTrick * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiTriggeredDirtyTrick *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiTriggeredDirtyTrick & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiTriggeredDirtyTrick & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiTriggeredDirtyTrick &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiTriggeredDirtyTrick &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiTriggeredDirtyTrick * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiTriggeredDirtyTrick * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiTriggeredDirtyTrick> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiTriggeredDirtyTrick * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiTriggeredDirtyTrick *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiEndingDirtyTrick * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiEndingDirtyTrick *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiEndingDirtyTrick & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiEndingDirtyTrick & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiEndingDirtyTrick &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiEndingDirtyTrick &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiEndingDirtyTrick * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiEndingDirtyTrick * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiEndingDirtyTrick> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiEndingDirtyTrick * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiEndingDirtyTrick *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiOvertakeEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiOvertakeEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiOvertakeEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiOvertakeEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiOvertakeEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiOvertakeEvent &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiOvertakeEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiOvertakeEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiOvertakeEvent> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiOvertakeEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiOvertakeEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiFinishedRaceEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiFinishedRaceEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiFinishedRaceEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiFinishedRaceEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiFinishedRaceEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiFinishedRaceEvent &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiFinishedRaceEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiFinishedRaceEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiFinishedRaceEvent> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiFinishedRaceEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiFinishedRaceEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiTookLeadEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiTookLeadEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiTookLeadEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiTookLeadEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiTookLeadEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiTookLeadEvent &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiTookLeadEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiTookLeadEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiTookLeadEvent> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiTookLeadEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiTookLeadEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiTookLastEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiTookLastEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiTookLastEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiTookLastEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiTookLastEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiTookLastEvent &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiTookLastEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiTookLastEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiTookLastEvent> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiTookLastEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiTookLastEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent> {
private:
	// CgsBaseEventQueue.h:138
	GameStateToGuiOnTailEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(GameStateToGuiOnTailEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const GameStateToGuiOnTailEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	GameStateToGuiOnTailEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const GameStateToGuiOnTailEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const GameStateToGuiOnTailEvent &);

	// CgsBaseEventQueue.h:356
	GameStateToGuiOnTailEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	GameStateToGuiOnTailEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnGameState::GameStateToGuiOnTailEvent> &);

	// CgsBaseEventQueue.h:484
	const GameStateToGuiOnTailEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(GameStateToGuiOnTailEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent> {
private:
	// CgsBaseEventQueue.h:138
	StatsRequestEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(StatsRequestEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const StatsRequestEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	StatsRequestEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const StatsRequestEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const StatsRequestEvent &);

	// CgsBaseEventQueue.h:356
	StatsRequestEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	StatsRequestEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::StatsRequestEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::StatsRequestEvent> &);

	// CgsBaseEventQueue.h:484
	const StatsRequestEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(StatsRequestEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats> {
private:
	// CgsBaseEventQueue.h:138
	NetworkPlayerStats * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(NetworkPlayerStats *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const NetworkPlayerStats & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	NetworkPlayerStats & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const NetworkPlayerStats &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const NetworkPlayerStats &);

	// CgsBaseEventQueue.h:356
	NetworkPlayerStats * AllocateEvent();

	// CgsBaseEventQueue.h:379
	NetworkPlayerStats * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::NetworkPlayerStats> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::NetworkPlayerStats> &);

	// CgsBaseEventQueue.h:484
	const NetworkPlayerStats * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(NetworkPlayerStats *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate> {
private:
	// CgsBaseEventQueue.h:138
	NetworkToGuiLiveRevengeUpdate * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(NetworkToGuiLiveRevengeUpdate *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const NetworkToGuiLiveRevengeUpdate & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	NetworkToGuiLiveRevengeUpdate & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const NetworkToGuiLiveRevengeUpdate &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const NetworkToGuiLiveRevengeUpdate &);

	// CgsBaseEventQueue.h:356
	NetworkToGuiLiveRevengeUpdate * AllocateEvent();

	// CgsBaseEventQueue.h:379
	NetworkToGuiLiveRevengeUpdate * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate> &);

	// CgsBaseEventQueue.h:484
	const NetworkToGuiLiveRevengeUpdate * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(NetworkToGuiLiveRevengeUpdate *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent> {
private:
	// CgsBaseEventQueue.h:138
	PlayJoltEffectEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PlayJoltEffectEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PlayJoltEffectEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PlayJoltEffectEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PlayJoltEffectEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PlayJoltEffectEvent &);

	// CgsBaseEventQueue.h:356
	PlayJoltEffectEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PlayJoltEffectEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent> &);

	// CgsBaseEventQueue.h:484
	const PlayJoltEffectEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PlayJoltEffectEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent> {
private:
	// CgsBaseEventQueue.h:138
	PlayRumbleEffectEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PlayRumbleEffectEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PlayRumbleEffectEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PlayRumbleEffectEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PlayRumbleEffectEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PlayRumbleEffectEvent &);

	// CgsBaseEventQueue.h:356
	PlayRumbleEffectEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PlayRumbleEffectEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent> &);

	// CgsBaseEventQueue.h:484
	const PlayRumbleEffectEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PlayRumbleEffectEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent> {
private:
	// CgsBaseEventQueue.h:138
	ChangeVolumeRumbleEffectEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(ChangeVolumeRumbleEffectEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const ChangeVolumeRumbleEffectEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	ChangeVolumeRumbleEffectEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const ChangeVolumeRumbleEffectEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const ChangeVolumeRumbleEffectEvent &);

	// CgsBaseEventQueue.h:356
	ChangeVolumeRumbleEffectEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	ChangeVolumeRumbleEffectEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent> &);

	// CgsBaseEventQueue.h:484
	const ChangeVolumeRumbleEffectEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(ChangeVolumeRumbleEffectEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent> {
private:
	// CgsBaseEventQueue.h:138
	StopRumbleEffectEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(StopRumbleEffectEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const StopRumbleEffectEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	StopRumbleEffectEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const StopRumbleEffectEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const StopRumbleEffectEvent &);

	// CgsBaseEventQueue.h:356
	StopRumbleEffectEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	StopRumbleEffectEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent> &);

	// CgsBaseEventQueue.h:484
	const StopRumbleEffectEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(StopRumbleEffectEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> {
private:
	// CgsBaseEventQueue.h:138
	InChangeRigidBodyInertia * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InChangeRigidBodyInertia *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InChangeRigidBodyInertia & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InChangeRigidBodyInertia & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InChangeRigidBodyInertia &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InChangeRigidBodyInertia &);

	// CgsBaseEventQueue.h:356
	InChangeRigidBodyInertia * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InChangeRigidBodyInertia * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia> &);

	// CgsBaseEventQueue.h:484
	const InChangeRigidBodyInertia * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InChangeRigidBodyInertia *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody> {
private:
	// CgsBaseEventQueue.h:138
	OutUpdateRigidBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OutUpdateRigidBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OutUpdateRigidBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OutUpdateRigidBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OutUpdateRigidBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OutUpdateRigidBody &);

	// CgsBaseEventQueue.h:356
	OutUpdateRigidBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OutUpdateRigidBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody> &);

	// CgsBaseEventQueue.h:484
	const OutUpdateRigidBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OutUpdateRigidBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy> {
private:
	// CgsBaseEventQueue.h:138
	OutContactSpy * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OutContactSpy *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OutContactSpy & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OutContactSpy & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OutContactSpy &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OutContactSpy &);

	// CgsBaseEventQueue.h:356
	OutContactSpy * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OutContactSpy * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy> &);

	// CgsBaseEventQueue.h:484
	const OutContactSpy * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OutContactSpy *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy> {
private:
	// CgsBaseEventQueue.h:138
	OutJointSpy * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OutJointSpy *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OutJointSpy & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OutJointSpy & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OutJointSpy &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OutJointSpy &);

	// CgsBaseEventQueue.h:356
	OutJointSpy * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OutJointSpy * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy> &);

	// CgsBaseEventQueue.h:484
	const OutJointSpy * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OutJointSpy *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy> {
private:
	// CgsBaseEventQueue.h:138
	OutDriveSpy * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OutDriveSpy *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OutDriveSpy & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OutDriveSpy & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OutDriveSpy &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OutDriveSpy &);

	// CgsBaseEventQueue.h:356
	OutDriveSpy * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OutDriveSpy * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy> &);

	// CgsBaseEventQueue.h:484
	const OutDriveSpy * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OutDriveSpy *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent> {
private:
	// CgsBaseEventQueue.h:138
	AddDeformationModelEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(AddDeformationModelEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const AddDeformationModelEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	AddDeformationModelEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const AddDeformationModelEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const AddDeformationModelEvent &);

	// CgsBaseEventQueue.h:356
	AddDeformationModelEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	AddDeformationModelEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent> &);

	// CgsBaseEventQueue.h:484
	const AddDeformationModelEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(AddDeformationModelEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent> {
private:
	// CgsBaseEventQueue.h:138
	RemoveDeformationModelEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveDeformationModelEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveDeformationModelEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveDeformationModelEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveDeformationModelEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveDeformationModelEvent &);

	// CgsBaseEventQueue.h:356
	RemoveDeformationModelEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveDeformationModelEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent> &);

	// CgsBaseEventQueue.h:484
	const RemoveDeformationModelEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveDeformationModelEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent> {
private:
	// CgsBaseEventQueue.h:138
	DeactivateDeformationModelEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DeactivateDeformationModelEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DeactivateDeformationModelEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DeactivateDeformationModelEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DeactivateDeformationModelEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DeactivateDeformationModelEvent &);

	// CgsBaseEventQueue.h:356
	DeactivateDeformationModelEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DeactivateDeformationModelEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent> &);

	// CgsBaseEventQueue.h:484
	const DeactivateDeformationModelEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DeactivateDeformationModelEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent> {
private:
	// CgsBaseEventQueue.h:138
	SetModelCollisionEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(SetModelCollisionEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const SetModelCollisionEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	SetModelCollisionEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const SetModelCollisionEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const SetModelCollisionEvent &);

	// CgsBaseEventQueue.h:356
	SetModelCollisionEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	SetModelCollisionEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent> &);

	// CgsBaseEventQueue.h:484
	const SetModelCollisionEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(SetModelCollisionEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent> {
private:
	// CgsBaseEventQueue.h:138
	SetModelCullingGroupEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(SetModelCullingGroupEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const SetModelCullingGroupEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	SetModelCullingGroupEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const SetModelCullingGroupEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const SetModelCullingGroupEvent &);

	// CgsBaseEventQueue.h:356
	SetModelCullingGroupEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	SetModelCullingGroupEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent> &);

	// CgsBaseEventQueue.h:484
	const SetModelCullingGroupEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(SetModelCullingGroupEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent> {
private:
	// CgsBaseEventQueue.h:138
	CreateWorldEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CreateWorldEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CreateWorldEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CreateWorldEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CreateWorldEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CreateWorldEvent &);

	// CgsBaseEventQueue.h:356
	CreateWorldEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CreateWorldEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Vehicle::CreateWorldEvent> &);

	// CgsBaseEventQueue.h:484
	const CreateWorldEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CreateWorldEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<int8_t> {
private:
	// CgsBaseEventQueue.h:138
	int8_t * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(int8_t *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const int8_t & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	int8_t & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const int8_t &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const int8_t &);

	// CgsBaseEventQueue.h:356
	int8_t * AllocateEvent();

	// CgsBaseEventQueue.h:379
	int8_t * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<int8_t> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<int8_t> &);

	// CgsBaseEventQueue.h:484
	const int8_t * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(int8_t *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnPhysics::Props::PropRaceCarContact> {
private:
	// CgsBaseEventQueue.h:138
	PropRaceCarContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(PropRaceCarContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const PropRaceCarContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	PropRaceCarContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const PropRaceCarContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const PropRaceCarContact &);

	// CgsBaseEventQueue.h:356
	PropRaceCarContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	PropRaceCarContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnPhysics::Props::PropRaceCarContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnPhysics::Props::PropRaceCarContact> &);

	// CgsBaseEventQueue.h:484
	const PropRaceCarContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(PropRaceCarContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSound::Io::QueueElement> {
private:
	// CgsBaseEventQueue.h:138
	Command::QueueElement * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(Command::QueueElement *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const Command::QueueElement & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	Command::QueueElement & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const Command::QueueElement &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const Command::QueueElement &);

	// CgsBaseEventQueue.h:356
	Command::QueueElement * AllocateEvent();

	// CgsBaseEventQueue.h:379
	Command::QueueElement * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSound::Io::QueueElement> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSound::Io::QueueElement> &);

	// CgsBaseEventQueue.h:484
	const Command::QueueElement * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(Command::QueueElement *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> {
private:
	// CgsBaseEventQueue.h:138
	CleanupTrafficEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(CleanupTrafficEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const CleanupTrafficEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	CleanupTrafficEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const CleanupTrafficEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const CleanupTrafficEvent &);

	// CgsBaseEventQueue.h:356
	CleanupTrafficEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	CleanupTrafficEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> &);

	// CgsBaseEventQueue.h:484
	const CleanupTrafficEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(CleanupTrafficEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> {
private:
	// CgsBaseEventQueue.h:138
	NetworkTrafficCrashingEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(NetworkTrafficCrashingEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const NetworkTrafficCrashingEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	NetworkTrafficCrashingEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const NetworkTrafficCrashingEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const NetworkTrafficCrashingEvent &);

	// CgsBaseEventQueue.h:356
	NetworkTrafficCrashingEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	NetworkTrafficCrashingEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> &);

	// CgsBaseEventQueue.h:484
	const NetworkTrafficCrashingEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(NetworkTrafficCrashingEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent> {
private:
	// CgsBaseEventQueue.h:138
	DetachedPartRenderEvent * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(DetachedPartRenderEvent *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const DetachedPartRenderEvent & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	DetachedPartRenderEvent & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const DetachedPartRenderEvent &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const DetachedPartRenderEvent &);

	// CgsBaseEventQueue.h:356
	DetachedPartRenderEvent * AllocateEvent();

	// CgsBaseEventQueue.h:379
	DetachedPartRenderEvent * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<BrnTraffic::DetachedPartRenderEvent> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<BrnTraffic::DetachedPartRenderEvent> &);

	// CgsBaseEventQueue.h:484
	const DetachedPartRenderEvent * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(DetachedPartRenderEvent *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlappingIntervalPair> {
private:
	// CgsBaseEventQueue.h:138
	OverlappingIntervalPair * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OverlappingIntervalPair *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OverlappingIntervalPair & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OverlappingIntervalPair & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OverlappingIntervalPair &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OverlappingIntervalPair &);

	// CgsBaseEventQueue.h:356
	OverlappingIntervalPair * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OverlappingIntervalPair * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlappingIntervalPair> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlappingIntervalPair> &);

	// CgsBaseEventQueue.h:484
	const OverlappingIntervalPair * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OverlappingIntervalPair *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody> {
private:
	// CgsBaseEventQueue.h:138
	InAddBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InAddBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InAddBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InAddBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InAddBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InAddBody &);

	// CgsBaseEventQueue.h:356
	InAddBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InAddBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody> &);

	// CgsBaseEventQueue.h:484
	const InAddBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InAddBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody> {
private:
	// CgsBaseEventQueue.h:138
	InUpdateBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InUpdateBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InUpdateBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InUpdateBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InUpdateBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InUpdateBody &);

	// CgsBaseEventQueue.h:356
	InUpdateBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InUpdateBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody> &);

	// CgsBaseEventQueue.h:484
	const InUpdateBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InUpdateBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody> {
private:
	// CgsBaseEventQueue.h:138
	InRemoveBody * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InRemoveBody *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InRemoveBody & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InRemoveBody & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InRemoveBody &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InRemoveBody &);

	// CgsBaseEventQueue.h:356
	InRemoveBody * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InRemoveBody * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody> &);

	// CgsBaseEventQueue.h:484
	const InRemoveBody * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InRemoveBody *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding> {
private:
	// CgsBaseEventQueue.h:138
	InForceNoPadding * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(InForceNoPadding *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const InForceNoPadding & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	InForceNoPadding & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const InForceNoPadding &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const InForceNoPadding &);

	// CgsBaseEventQueue.h:356
	InForceNoPadding * AllocateEvent();

	// CgsBaseEventQueue.h:379
	InForceNoPadding * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding> &);

	// CgsBaseEventQueue.h:484
	const InForceNoPadding * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(InForceNoPadding *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlappingPair> {
private:
	// CgsBaseEventQueue.h:138
	OverlappingPair * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(OverlappingPair *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const OverlappingPair & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	OverlappingPair & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const OverlappingPair &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const OverlappingPair &);

	// CgsBaseEventQueue.h:356
	OverlappingPair * AllocateEvent();

	// CgsBaseEventQueue.h:379
	OverlappingPair * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlappingPair> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlappingPair> &);

	// CgsBaseEventQueue.h:484
	const OverlappingPair * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(OverlappingPair *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume> {
private:
	// CgsBaseEventQueue.h:138
	AddInternalCollisionVolume * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(AddInternalCollisionVolume *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const AddInternalCollisionVolume & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	AddInternalCollisionVolume & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const AddInternalCollisionVolume &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const AddInternalCollisionVolume &);

	// CgsBaseEventQueue.h:356
	AddInternalCollisionVolume * AllocateEvent();

	// CgsBaseEventQueue.h:379
	AddInternalCollisionVolume * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume> &);

	// CgsBaseEventQueue.h:484
	const AddInternalCollisionVolume * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(AddInternalCollisionVolume *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume> {
private:
	// CgsBaseEventQueue.h:138
	RemoveInternalCollisionVolume * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(RemoveInternalCollisionVolume *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const RemoveInternalCollisionVolume & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	RemoveInternalCollisionVolume & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const RemoveInternalCollisionVolume &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const RemoveInternalCollisionVolume &);

	// CgsBaseEventQueue.h:356
	RemoveInternalCollisionVolume * AllocateEvent();

	// CgsBaseEventQueue.h:379
	RemoveInternalCollisionVolume * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume> &);

	// CgsBaseEventQueue.h:484
	const RemoveInternalCollisionVolume * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(RemoveInternalCollisionVolume *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::Contact> {
private:
	// CgsBaseEventQueue.h:138
	Contact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(Contact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const Contact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	Contact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const Contact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const Contact &);

	// CgsBaseEventQueue.h:356
	Contact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	Contact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::Contact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::Contact> &);

	// CgsBaseEventQueue.h:484
	const Contact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(Contact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsSceneManager::IntermedateContact> {
private:
	// CgsBaseEventQueue.h:138
	IntermedateContact * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(IntermedateContact *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const IntermedateContact & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	IntermedateContact & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const IntermedateContact &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const IntermedateContact &);

	// CgsBaseEventQueue.h:356
	IntermedateContact * AllocateEvent();

	// CgsBaseEventQueue.h:379
	IntermedateContact * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsSceneManager::IntermedateContact> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsSceneManager::IntermedateContact> &);

	// CgsBaseEventQueue.h:484
	const IntermedateContact * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(IntermedateContact *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest> {
private:
	// CgsBaseEventQueue.h:138
	LoadBundleRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(LoadBundleRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const LoadBundleRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	LoadBundleRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const LoadBundleRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const LoadBundleRequest &);

	// CgsBaseEventQueue.h:356
	LoadBundleRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	LoadBundleRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsResource::Events::LoadBundleRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsResource::Events::LoadBundleRequest> &);

	// CgsBaseEventQueue.h:484
	const LoadBundleRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(LoadBundleRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest> {
private:
	// CgsBaseEventQueue.h:138
	UnloadBundleRequest * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(UnloadBundleRequest *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const UnloadBundleRequest & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	UnloadBundleRequest & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const UnloadBundleRequest &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const UnloadBundleRequest &);

	// CgsBaseEventQueue.h:356
	UnloadBundleRequest * AllocateEvent();

	// CgsBaseEventQueue.h:379
	UnloadBundleRequest * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsResource::Events::UnloadBundleRequest> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsResource::Events::UnloadBundleRequest> &);

	// CgsBaseEventQueue.h:484
	const UnloadBundleRequest * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(UnloadBundleRequest *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse> {
private:
	// CgsBaseEventQueue.h:138
	LoadBundleResponse * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(LoadBundleResponse *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const LoadBundleResponse & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	LoadBundleResponse & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const LoadBundleResponse &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const LoadBundleResponse &);

	// CgsBaseEventQueue.h:356
	LoadBundleResponse * AllocateEvent();

	// CgsBaseEventQueue.h:379
	LoadBundleResponse * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsResource::Events::LoadBundleResponse> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsResource::Events::LoadBundleResponse> &);

	// CgsBaseEventQueue.h:484
	const LoadBundleResponse * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(LoadBundleResponse *);

}

// CgsBaseEventQueue.h:62
struct CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse> {
private:
	// CgsBaseEventQueue.h:138
	UnloadBundleResponse * mpEvents;

	// CgsBaseEventQueue.h:139
	int32_t miMaxLength;

	// CgsBaseEventQueue.h:140
	int32_t miLength;

public:
	// CgsBaseEventQueue.h:158
	void Construct(UnloadBundleResponse *, int);

	// CgsBaseEventQueue.h:178
	bool Prepare();

	// CgsBaseEventQueue.h:194
	bool Release();

	// CgsBaseEventQueue.h:210
	void Destruct();

	// CgsBaseEventQueue.h:225
	void Clear();

	// CgsBaseEventQueue.h:240
	int32_t GetMaxLength() const;

	// CgsBaseEventQueue.h:255
	int32_t GetLength() const;

	// CgsBaseEventQueue.h:270
	const UnloadBundleResponse & GetEvent(int) const;

	// CgsBaseEventQueue.h:290
	UnloadBundleResponse & GetEvent(int);

	// CgsBaseEventQueue.h:310
	bool AddEvent(const UnloadBundleResponse &);

	// CgsBaseEventQueue.h:329
	bool AddEventSafe(const UnloadBundleResponse &);

	// CgsBaseEventQueue.h:356
	UnloadBundleResponse * AllocateEvent();

	// CgsBaseEventQueue.h:379
	UnloadBundleResponse * AllocateEventSafe();

	// CgsBaseEventQueue.h:411
	bool Append(const BaseEventQueue<CgsResource::Events::UnloadBundleResponse> &);

	// CgsBaseEventQueue.h:438
	bool AppendSafe(const BaseEventQueue<CgsResource::Events::UnloadBundleResponse> &);

	// CgsBaseEventQueue.h:484
	const UnloadBundleResponse * GetQueueStartPointer() const;

protected:
	// CgsBaseEventQueue.h:468
	void SetEventPointer(UnloadBundleResponse *);

}

