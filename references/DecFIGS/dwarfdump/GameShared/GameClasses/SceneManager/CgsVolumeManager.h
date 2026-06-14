// CgsVolumeManager.h:60
struct CgsSceneManager::VolumeManagerVolume {
	// CgsVolumeManager.h:62
	VolumeId mVolumeId;

	// CgsVolumeManager.h:63
	InEventLineTestFine::VolumeTypeFlags mxFlags;

	// CgsVolumeManager.h:64
	ResourceHandle mVolumeHandle;

	// CgsVolumeManager.h:65
	int32_t miVolumeStoreIndex;

	// CgsVolumeManager.h:66
	bool mbStaticVolume;

}

// CgsVolumeManager.h:81
struct CgsSceneManager::VolumeManager {
private:
	// CgsVolumeManager.h:142
	VolumeStore<4608> mVolumeStore;

	// CgsVolumeManager.h:143
	ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,int32_t> mVolumePool;

	// CgsVolumeManager.h:145
	IndexedHashTableElement<CgsSceneManager::VolumeId,uint32_t>[5048] maVolumeHashElement;

	// CgsVolumeManager.h:146
	IndexedHashTable<CgsSceneManager::VolumeId,uint32_t,227u> mVolumeIdToIndex;

public:
	// CgsVolumeManager.h:84
	void Construct();

	// CgsVolumeManager.h:87
	void Destruct();

	// CgsVolumeManager.h:90
	bool Prepare();

	// CgsVolumeManager.h:93
	bool Release();

	// CgsVolumeManager.h:100
	int32_t AddDynamicVolume(VolumeId, InEventLineTestFine::VolumeTypeFlags, const VolRef::Volume *);

	// CgsVolumeManager.h:106
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsVolumeManager.h:111
	void RemoveVolume(VolumeId);

	// CgsVolumeManager.h:118
	int32_t AddStaticVolume(VolumeId, InEventLineTestFine::VolumeTypeFlags, const ResourceHandle &);

	// CgsVolumeManager.h:123
	VolumeId GetVolumeIdByIndex(int32_t) const;

	// CgsVolumeManager.h:128
	int32_t GetVolumeIndexByID(VolumeId) const;

	// CgsVolumeManager.h:133
	const VolRef::Volume * GetRwVolume(int32_t) const;

	// CgsVolumeManager.h:138
	InEventLineTestFine::VolumeTypeFlags GetVolumeTypeFlags(int32_t) const;

}

// CgsVolumeManager.h:60
struct CgsSceneManager::VolumeManagerVolume {
	// CgsVolumeManager.h:62
	VolumeId mVolumeId;

	// CgsSceneManagerTypes.h:44
	typedef uint8_t VolumeTypeFlags;

	// CgsVolumeManager.h:63
	VolumeManagerVolume::VolumeTypeFlags mxFlags;

	// CgsVolumeManager.h:64
	ResourceHandle mVolumeHandle;

	// CgsVolumeManager.h:65
	int32_t miVolumeStoreIndex;

	// CgsVolumeManager.h:66
	bool mbStaticVolume;

}

// CgsVolumeManager.h:81
struct CgsSceneManager::VolumeManager {
private:
	// CgsVolumeManager.h:142
	VolumeStore<4608> mVolumeStore;

	// CgsVolumeManager.h:143
	ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t> mVolumePool;

	// CgsVolumeManager.h:145
	IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t>[5048] maVolumeHashElement;

	// CgsVolumeManager.h:146
	IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u> mVolumeIdToIndex;

public:
	// CgsVolumeManager.h:84
	void Construct();

	// CgsVolumeManager.h:87
	void Destruct();

	// CgsVolumeManager.h:90
	bool Prepare();

	// CgsVolumeManager.h:93
	bool Release();

	// CgsVolumeManager.h:100
	int32_t AddDynamicVolume(VolumeId, VolumeManagerVolume::VolumeTypeFlags, const VolRef::Volume *);

	// CgsVolumeManager.h:106
	void ReplaceDynamicVolume(VolumeId, const VolRef::Volume *);

	// CgsVolumeManager.h:111
	void RemoveVolume(VolumeId);

	// CgsVolumeManager.h:118
	int32_t AddStaticVolume(VolumeId, VolumeManagerVolume::VolumeTypeFlags, const ResourceHandle &);

	// CgsVolumeManager.h:123
	VolumeId GetVolumeIdByIndex(int32_t) const;

	// CgsVolumeManager.h:128
	int32_t GetVolumeIndexByID(VolumeId) const;

	// CgsVolumeManager.h:133
	const VolRef::Volume * GetRwVolume(int32_t) const;

	// CgsVolumeManager.h:138
	VolumeManagerVolume::VolumeTypeFlags GetVolumeTypeFlags(int32_t) const;

}

