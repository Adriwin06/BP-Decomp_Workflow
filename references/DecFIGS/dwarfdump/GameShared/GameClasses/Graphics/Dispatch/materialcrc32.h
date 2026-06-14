// materialcrc32.h:43
struct MaterialCRC32 {
	// materialcrc32.h:62
	uint32_t m_vertexProgramBuffer;

	// materialcrc32.h:63
	uint32_t m_pixelProgramBuffer;

	// materialcrc32.h:64
	uint32_t m_materialState;

public:
	// materialcrc32.h:47
	ResourceDescriptor GetResourceDescriptor();

	// materialcrc32.h:48
	MaterialCRC32 * Initialize(const Resource &);

	// materialcrc32.h:49
	void Release();

	// materialcrc32.h:50
	ResourceDescriptor GetInstanceResourceDescriptor() const;

private:
	// materialcrc32.h:68
	MaterialCRC32();

	// materialcrc32.h:69
	MaterialCRC32(const MaterialCRC32 &);

	// materialcrc32.h:70
	~MaterialCRC32();

}

