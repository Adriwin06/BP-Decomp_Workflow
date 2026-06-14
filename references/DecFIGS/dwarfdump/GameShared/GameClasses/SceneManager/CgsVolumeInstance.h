// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsVolumeInstance.h:27
	const uint8_t KU8_VOLUME_INSTANCE_FLAG_COLLIDABLE = 1;

	// CgsVolumeInstance.h:28
	const uint8_t KU8_VOLUME_INSTANCE_FLAG_CACHED = 2;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsVolumeInstance.h:27
	const uint8_t KU8_VOLUME_INSTANCE_FLAG_COLLIDABLE = 1;

	// CgsVolumeInstance.h:28
	const uint8_t KU8_VOLUME_INSTANCE_FLAG_CACHED = 2;

}

// CgsVolumeInstance.h:44
struct CgsSceneManager::VolumeInstance {
	// CgsVolumeInstance.h:48
	Matrix44Affine mWorldSpaceTransform;

	// CgsVolumeInstance.h:49
	Vector3 mPadding;

	// CgsVolumeInstance.h:50
	VolumeInstanceId mUserID;

	// CgsVolumeInstance.h:51
	float32_t mfCacheSphereRadius;

	// CgsVolumeInstance.h:52
	int32_t miVolumeIndex;

	// CgsVolumeInstance.h:53
	int32_t miNextEntityVolumeInstance;

	// CgsVolumeInstance.h:54
	uint16_t mu16EntityIndex;

	// CgsVolumeInstance.h:55
	uint16_t mu16FirstCachedTriIndex;

	// CgsVolumeInstance.h:56
	uint16_t mu16NumCachedTris;

	// CgsVolumeInstance.h:57
	uint8_t mx8Flags;

public:
	// CgsVolumeInstance.h:72
	bool IsCached() const;

	// CgsVolumeInstance.h:76
	void SetCached(bool);

	// CgsVolumeInstance.h:79
	bool IsCollidable() const;

	// CgsVolumeInstance.h:83
	void SetCollidable(bool);

}

