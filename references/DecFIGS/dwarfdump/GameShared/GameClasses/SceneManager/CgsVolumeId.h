// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsVolumeId.h:70
	const VolumeId K_INVALID_VOLUME_ID;

}

// CgsVolumeId.h:48
struct CgsSceneManager::VolumeId {
private:
	// CgsVolumeId.h:67
	uint64_t mId;

public:
	// CgsVolumeId.h:54
	void Set(uint8_t, uint16_t);

	// CgsVolumeId.h:57
	uint8_t GetOwner() const;

	// CgsVolumeId.h:60
	uint16_t GetIndex() const;

	// CgsVolumeId.h:63
	void VolumeId();

	// CgsVolumeId.h:64
	void VolumeId(uint64_t);

	// CgsVolumeId.h:65
	uint64_t operator std::uint64_t() const;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsVolumeId.h:70
	const VolumeId K_INVALID_VOLUME_ID;

}

