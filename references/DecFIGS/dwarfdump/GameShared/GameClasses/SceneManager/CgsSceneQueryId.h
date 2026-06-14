// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneQueryId.h:70
	const SceneQueryId K_INVALID_SCENE_QUERY_ID;

}

// CgsSceneQueryId.h:48
struct CgsSceneManager::SceneQueryId {
private:
	// CgsSceneQueryId.h:67
	uint32_t mId;

public:
	// CgsSceneQueryId.h:54
	void Set(uint8_t, uint16_t);

	// CgsSceneQueryId.h:57
	uint8_t GetOwner() const;

	// CgsSceneQueryId.h:60
	uint16_t GetIndex() const;

	// CgsSceneQueryId.h:63
	void SceneQueryId();

	// CgsSceneQueryId.h:64
	void SceneQueryId(uint32_t);

	// CgsSceneQueryId.h:65
	uint32_t operator std::uint32_t() const;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneQueryId.h:70
	const SceneQueryId K_INVALID_SCENE_QUERY_ID;

}

// CgsSceneQueryId.h:48
struct CgsSceneManager::SceneQueryId {
private:
	// CgsSceneQueryId.h:67
	uint32_t mId;

public:
	// CgsSceneQueryId.h:54
	void Set(uint8_t, uint16_t);

	// CgsSceneQueryId.h:57
	uint8_t GetOwner() const;

	// CgsSceneQueryId.h:60
	uint16_t GetIndex() const;

	// CgsSceneQueryId.h:63
	void SceneQueryId();

	// CgsSceneQueryId.h:64
	void SceneQueryId(uint32_t);

	// CgsSceneQueryId.h:65
	uint32_t operator uint32_t() const;

}

