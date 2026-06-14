// CgsTriangleList.h:62
struct CgsSceneManager::CgsCollision::TriangleList {
	// CgsTriangleList.h:65
	extern const int32_t KI_BATCH_SIZE = 4;

private:
	// CgsTriangleList.h:98
	const Triangle4 * mpaTriangleBatches;

	// CgsTriangleList.h:99
	int32_t miNumTriangleBatches;

public:
	// CgsTriangleList.h:68
	int32_t GetTriangleDataSize() const;

	// CgsTriangleList.h:72
	int32_t GetNumTriangleBatches() const;

	// CgsTriangleList.h:78
	void SetTriangleBuffer(const Triangle4 *, int32_t);

	// CgsTriangleList.h:81
	const Triangle4 * GetTriangleBuffer() const;

	// CgsTriangleList.h:85
	const Triangle4 & GetTriangleBatch(int32_t) const;

	// CgsTriangleList.h:90
	void CheckAlignment() const;

	// CgsTriangleList.h:93
	void ValidateTriangles() const;

}

