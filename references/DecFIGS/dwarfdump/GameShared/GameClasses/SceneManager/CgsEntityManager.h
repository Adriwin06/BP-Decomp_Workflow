// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsEntityManager.h:48
	const uint16_t KU16_INVALID_ENTITY_INDEX = 65535;

	// CgsEntityManager.h:49
	const int32_t KI_INVALID_VOLUME_INSTANCE_INDEX = 4294967295;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsEntityManager.h:48
	const uint16_t KU16_INVALID_ENTITY_INDEX = 65535;

	// CgsEntityManager.h:49
	const int32_t KI_INVALID_VOLUME_INSTANCE_INDEX = 4294967295;

}

// CgsEntityManager.h:64
struct CgsSceneManager::SceneManagerEntity {
	// CgsEntityManager.h:66
	EntityId mUserID;

	// CgsEntityManager.h:67
	int32_t miFirstVolumeInstance;

	// CgsEntityManager.h:68
	uint16_t mu16NumVolumeInstances;

}

// CgsEntityManager.h:81
struct CgsSceneManager::EntityManager {
private:
	// CgsEntityManager.h:239
	ObjectPool<CgsSceneManager::SceneManagerEntity,10000,int32_t> mEntityPool;

	// CgsEntityManager.h:240
	ObjectPool<CgsSceneManager::VolumeInstance,5048,int32_t> mVolumeInstancePool;

	// CgsEntityManager.h:242
	IndexedHashTableElement<CgsSceneManager::EntityId,uint16_t>[10000] maEntityIdHashElements;

	// CgsEntityManager.h:243
	IndexedHashTable<CgsSceneManager::EntityId,uint16_t,541u> mEntityIdToIndex;

	// CgsEntityManager.h:245
	IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,uint32_t>[10000] maVolumeInstanceIdHashElements;

	// CgsEntityManager.h:246
	IndexedHashTable<CgsSceneManager::VolumeInstanceId,uint32_t,509u> mVolumeInstanceIdToIndex;

	// CgsEntityManager.h:248
	CgsSceneManager::VolumeManager * mpVolumeManager;

public:
	// CgsEntityManager.h:86
	void Construct(CgsSceneManager::VolumeManager *);

	// CgsEntityManager.h:90
	void Destruct();

	// CgsEntityManager.h:94
	bool Prepare();

	// CgsEntityManager.h:98
	bool Release();

	// CgsEntityManager.h:103
	uint16_t AddEntity(EntityId);

	// CgsEntityManager.h:108
	void RemoveEntity(uint16_t);

	// CgsEntityManager.h:115
	int32_t AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsEntityManager.h:120
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsEntityManager.h:126
	void RemoveVolumeInstanceByIndex(VolumeInstanceId, int32_t);

	// CgsEntityManager.h:132
	void SetVolumePadding(int32_t, Vector3);

	// CgsEntityManager.h:139
	uint16_t GetEntityIndexByID(EntityId) const;

	// CgsEntityManager.h:144
	EntityId GetEntityIdByIndex(uint16_t) const;

	// CgsEntityManager.h:149
	int32_t GetVolumeInstanceIndexByID(VolumeInstanceId) const;

	// CgsEntityManager.h:154
	VolumeInstanceId GetVolumeInstanceIdByIndex(int32_t) const;

	// CgsEntityManager.h:160
	Vector3 SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsEntityManager.h:165
	void SetVolumeForCollision(VolumeInstanceId, bool);

	// CgsEntityManager.h:170
	void SetVolumeForCollisionByIndex(int32_t, bool);

	// CgsEntityManager.h:175
	const VolumeInstance * GetVolumeInstance(int32_t) const;

	// CgsEntityManager.h:180
	VolumeInstance * GetVolumeInstance(int32_t);

	// CgsEntityManager.h:189
	const VolumeInstance * GetFirstEntityVolumeInstance(uint16_t, int32_t *) const;

	// CgsEntityManager.h:195
	const VolumeInstance * GetNextEntityVolumeInstance(const VolumeInstance *, int32_t *) const;

	// CgsEntityManager.h:202
	void GetEntityIndexByIDBulk(const EntityId *, uint32_t, uint16_t *);

	// CgsEntityManager.h:209
	void GetVolumeInstanceIndexByIDBulk(const VolumeInstanceId *, uint32_t, uint32_t *);

	// CgsEntityManager.h:213
	void DebugRenderVolumeInstances();

	// CgsEntityManager.h:216
	int32_t GetFirstEntityIndex() const;

	// CgsEntityManager.h:220
	int32_t GetNextEntityIndex(int32_t) const;

protected:
	// CgsEntityManager.h:227
	void AddVolumeInstanceToEntity(uint16_t, int32_t);

	// CgsEntityManager.h:231
	void RemoveVolumeInstanceFromEntity(int32_t);

	// CgsEntityManager.h:236
	void DebugRenderVolume(const VolRef::Volume *, Matrix44Affine);

}

// CgsEntityManager.h:81
struct CgsSceneManager::EntityManager {
private:
	// CgsEntityManager.h:239
	ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t> mEntityPool;

	// CgsEntityManager.h:240
	ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t> mVolumeInstancePool;

	// CgsEntityManager.h:242
	IndexedHashTableElement<CgsSceneManager::EntityId,std::uint16_t>[10000] maEntityIdHashElements;

	// CgsEntityManager.h:243
	IndexedHashTable<CgsSceneManager::EntityId,std::uint16_t,541u> mEntityIdToIndex;

	// CgsEntityManager.h:245
	IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,std::uint32_t>[10000] maVolumeInstanceIdHashElements;

	// CgsEntityManager.h:246
	IndexedHashTable<CgsSceneManager::VolumeInstanceId,std::uint32_t,509u> mVolumeInstanceIdToIndex;

	// CgsEntityManager.h:248
	CgsSceneManager::VolumeManager * mpVolumeManager;

public:
	// CgsEntityManager.h:86
	void Construct(CgsSceneManager::VolumeManager *);

	// CgsEntityManager.h:90
	void Destruct();

	// CgsEntityManager.h:94
	bool Prepare();

	// CgsEntityManager.h:98
	bool Release();

	// CgsEntityManager.h:103
	uint16_t AddEntity(EntityId);

	// CgsEntityManager.h:108
	void RemoveEntity(uint16_t);

	// CgsEntityManager.h:115
	int32_t AddVolumeInstance(VolumeInstanceId, VolumeId, const rw::math::vpu::Matrix44Affine &);

	// CgsEntityManager.h:120
	void RemoveVolumeInstance(VolumeInstanceId);

	// CgsEntityManager.h:126
	void RemoveVolumeInstanceByIndex(VolumeInstanceId, int32_t);

	// CgsEntityManager.h:132
	void SetVolumePadding(int32_t, Vector3);

	// CgsEntityManager.h:139
	uint16_t GetEntityIndexByID(EntityId) const;

	// CgsEntityManager.h:144
	EntityId GetEntityIdByIndex(uint16_t) const;

	// CgsEntityManager.h:149
	int32_t GetVolumeInstanceIndexByID(VolumeInstanceId) const;

	// CgsEntityManager.h:154
	VolumeInstanceId GetVolumeInstanceIdByIndex(int32_t) const;

	// CgsEntityManager.h:160
	Vector3 SetVolumeInstanceTransform(VolumeInstanceId, const rw::math::vpu::Matrix44Affine &);

	// CgsEntityManager.h:165
	void SetVolumeForCollision(VolumeInstanceId, bool);

	// CgsEntityManager.h:170
	void SetVolumeForCollisionByIndex(int32_t, bool);

	// CgsEntityManager.h:175
	const VolumeInstance * GetVolumeInstance(int32_t) const;

	// CgsEntityManager.h:180
	VolumeInstance * GetVolumeInstance(int32_t);

	// CgsEntityManager.h:189
	const VolumeInstance * GetFirstEntityVolumeInstance(uint16_t, int32_t *) const;

	// CgsEntityManager.h:195
	const VolumeInstance * GetNextEntityVolumeInstance(const VolumeInstance *, int32_t *) const;

	// CgsEntityManager.h:202
	void GetEntityIndexByIDBulk(const EntityId *, uint32_t, uint16_t *);

	// CgsEntityManager.h:209
	void GetVolumeInstanceIndexByIDBulk(const VolumeInstanceId *, uint32_t, uint32_t *);

	// CgsEntityManager.h:213
	void DebugRenderVolumeInstances();

	// CgsEntityManager.h:216
	int32_t GetFirstEntityIndex() const;

	// CgsEntityManager.h:220
	int32_t GetNextEntityIndex(int32_t) const;

protected:
	// CgsEntityManager.h:227
	void AddVolumeInstanceToEntity(uint16_t, int32_t);

	// CgsEntityManager.h:231
	void RemoveVolumeInstanceFromEntity(int32_t);

	// CgsEntityManager.h:236
	void DebugRenderVolume(const VolRef::Volume *, Matrix44Affine);

}

