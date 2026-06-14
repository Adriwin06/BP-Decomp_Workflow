// drvindexdescriptor.h:59
struct rw::graphics::IndexDescriptor {
private:
	// drvindexdescriptor.h:70
	extern IndexDescriptor[2] m_PSGLDefault;

	// drvindexdescriptor.h:72
	uint32_t m_indexSize;

public:
	// drvindexdescriptor.h:62
	ResourceDescriptor GetResourceDescriptor();

	// drvindexdescriptor.h:62
	uint32_t GetAlignment();

	// drvindexdescriptor.h:62
	uint32_t GetSize();

	// drvindexdescriptor.h:62
	IndexDescriptor * Initialize(const Resource &);

	// drvindexdescriptor.h:62
	IndexDescriptor * Initialize(void *, uint32_t);

	// drvindexdescriptor.h:62
	void Release();

	// drvindexdescriptor.h:62
	IndexDescriptor * Lock(uint32_t);

	// drvindexdescriptor.h:62
	IndexDescriptor * Unlock();

	// drvindexdescriptor.h:62
	const IndexDescriptor * GetDefault(uint32_t);

	// drvindexdescriptor.h:62
	void RegisterArenaReadCallbacks();

	// drvindexdescriptor.h:62
	void RegisterArenaWriteCallbacks();

	// drvindexdescriptor.h:65
	const IndexDescriptor * PSGLGetDefault(uint32_t);

	// drvindexdescriptor.h:66
	uint32_t PSGLGetIndexSize() const;

private:
	// drvindexdescriptor.h:75
	void IndexDescriptor(uint32_t);

	// drvindexdescriptor.h:80
	void IndexDescriptor(const IndexDescriptor &);

	// drvindexdescriptor.h:85
	void ~IndexDescriptor();

}

// drvindexdescriptor.h:70
extern IndexDescriptor[2] m_PSGLDefault;

