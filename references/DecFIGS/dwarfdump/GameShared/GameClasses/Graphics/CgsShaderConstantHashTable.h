// CgsShaderConstantHashTable.h:43
struct CgsGraphics::ShaderConstantHashTable {
private:
	// CgsShaderConstantHashTable.h:65
	uint32_t * mpuHashKeys;

	// CgsShaderConstantHashTable.h:66
	char ** mppcNames;

	// CgsShaderConstantHashTable.h:67
	uint32_t muSize;

public:
	// CgsShaderConstantHashTable.h:48
	void FixUp(uint8_t *);

	// CgsShaderConstantHashTable.h:52
	void FixDown(uint8_t *);

	// CgsShaderConstantHashTable.h:56
	const char * GetName(uint32_t) const;

	// CgsShaderConstantHashTable.h:59
	uint32_t GetSize() const;

}

