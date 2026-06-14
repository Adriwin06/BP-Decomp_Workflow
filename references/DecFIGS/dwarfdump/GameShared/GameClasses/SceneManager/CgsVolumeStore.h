// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsVolumeStore.h:33
	const int32_t KI_VOLUME_SLOT_SIZE = 128;

	// CgsVolumeStore.h:34
	const int32_t KI_INVALID_VOLUME_INDEX = 4294967295;

}

// CgsVolumeStore.h:51
struct CgsSceneManager::VolumeSlot {
private:
	// CgsVolumeStore.h:64
	uint8_t[128] macBuffer;

public:
	// CgsVolumeStore.h:56
	void SetVolume(const VolRef::Volume *, int32_t);

	// CgsVolumeStore.h:59
	VolRef::Volume * GetVolume() const;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsVolumeStore.h:33
	const int32_t KI_VOLUME_SLOT_SIZE = 128;

	// CgsVolumeStore.h:34
	const int32_t KI_INVALID_VOLUME_INDEX = 4294967295;

}

// CgsVolumeStore.h:77
struct CgsSceneManager::VolumeStore<4608> {
private:
	// CgsVolumeStore.h:126
	ObjectPool<CgsSceneManager::VolumeSlot,4608,int32_t> mVolumePool;

public:
	// CgsVolumeStore.h:172
	void Construct();

	// CgsVolumeStore.h:190
	void Destruct();

	// CgsVolumeStore.h:208
	bool Prepare();

	// CgsVolumeStore.h:246
	bool Release();

	// CgsVolumeStore.h:227
	void Clear();

	// CgsVolumeStore.h:267
	int32_t AddVolume(const VolRef::Volume *);

	// CgsVolumeStore.h:295
	void RemoveVolume(int);

	// CgsVolumeStore.h:318
	bool ReplaceVolume(int, const VolRef::Volume *);

	// CgsVolumeStore.h:421
	const VolRef::Volume * GetVolume(int) const;

private:
	// CgsVolumeStore.h:350
	ResourceDescriptor GetVolumeResourceDescriptor(const VolRef::Volume *);

	// CgsVolumeStore.h:386
	bool IsPrimitiveVolume(const VolRef::Volume *) const;

}

// CgsVolumeStore.h:77
struct CgsSceneManager::VolumeStore<4608> {
private:
	// CgsVolumeStore.h:126
	ObjectPool<CgsSceneManager::VolumeSlot,4608,std::int32_t> mVolumePool;

public:
	// CgsVolumeStore.h:172
	void Construct();

	// CgsVolumeStore.h:190
	void Destruct();

	// CgsVolumeStore.h:208
	bool Prepare();

	// CgsVolumeStore.h:246
	bool Release();

	// CgsVolumeStore.h:227
	void Clear();

	// CgsVolumeStore.h:267
	int32_t AddVolume(const VolRef::Volume *);

	// CgsVolumeStore.h:295
	void RemoveVolume(int);

	// CgsVolumeStore.h:318
	bool ReplaceVolume(int, const VolRef::Volume *);

	// CgsVolumeStore.h:421
	const VolRef::Volume * GetVolume(int) const;

private:
	// CgsVolumeStore.h:350
	// Declaration
	ResourceDescriptor GetVolumeResourceDescriptor(const VolRef::Volume *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVolumeStore.h:352
		using namespace rw;

		// CgsVolumeStore.h:353
		using namespace rw::collision;

	}

	// CgsVolumeStore.h:386
	// Declaration
	bool IsPrimitiveVolume(const VolRef::Volume *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVolumeStore.h:388
		using namespace rw::collision;

	}

}

