// parametersemantic.h:44
namespace Shader {
	// parameter.h:61
	const ParameterHandle InvalidParameterHandle;

}

// parameter.h:55
struct Shader::ParameterHandle {
	// parameter.h:56
	int index;

	// parameter.h:57
	unsigned int offset;

}

// parametersemantic.h:44
namespace Shader {
	// Declaration
	struct ParameterBlock {
		// parameter.h:83
		struct Parameters {
			// parameter.h:84
			ParameterSemanticBlock * pSemanticBlock;

		}

	}

	// parameter.h:61
	const ParameterHandle InvalidParameterHandle;

}

// parameter.h:67
struct Shader::ParameterBlock {
protected:
	// parameter.h:126
	ParameterSemanticBlock * mpSemanticBlock;

	// parameter.h:127
	uint32_t * mpParameterBlock;

	// parameter.h:128
	uint32_t mDataSize;

public:
	// parameter.h:88
	ResourceDescriptor GetResourceDescriptor(const Shader::ParameterBlock::Parameters &);

	// parameter.h:89
	ParameterBlock * Initialize(const Resource &, const Shader::ParameterBlock::Parameters &);

	// parameter.h:90
	void Release();

	// parameter.h:105
	const ParameterHandle GetHandle(uint32_t) const;

	// parameter.h:106
	void GetValue(ParameterHandle, float *, int) const;

	// parameter.h:107
	void GetValue(ParameterHandle, uint32_t *, int) const;

	// parameter.h:108
	const float *const GetValue(ParameterHandle) const;

	// parameter.h:109
	void SetValue(ParameterHandle, float *, int);

	// parameter.h:110
	void SetValue(ParameterHandle, uint32_t *, int);

	// parameter.h:111
	Shader::ParameterDataType GetType(ParameterHandle);

	// parameter.h:112
	unsigned int GetSize(ParameterHandle);

	// parameter.h:114
	const ParameterSemanticBlock *const GetSemanticBlock() const;

	// parameter.h:115
	const uint32_t *const GetRawData() const;

	// parameter.h:121
	void Load(void (*)(const renderengine::ProgramBuffer *, const renderengine::ProgramBuffer *, const ParameterSemanticBlock *, uint32_t *, void *), const renderengine::ProgramBuffer *, const renderengine::ProgramBuffer *, void *) const;

protected:
	// parameter.h:131
	void ParameterBlock();

}

// parameter.h:67
struct Shader::ParameterBlock {
protected:
	// parameter.h:126
	ParameterSemanticBlock * mpSemanticBlock;

	// parameter.h:127
	uint32_t * mpParameterBlock;

	// parameter.h:128
	uint32_t mDataSize;

public:
	// parameter.h:88
	ResourceDescriptor GetResourceDescriptor(const Shader::ParameterBlock::Parameters &);

	// parameter.h:89
	ParameterBlock * Initialize(const Resource &, const Shader::ParameterBlock::Parameters &);

	// parameter.h:90
	void Release();

	// parameter.h:105
	const ParameterHandle GetHandle(uint32_t) const;

	// parameter.h:106
	void GetValue(ParameterHandle, float *, int) const;

	// parameter.h:107
	void GetValue(ParameterHandle, uint32_t *, int) const;

	// parameter.h:108
	const float *const GetValue(ParameterHandle) const;

	// parameter.h:109
	void SetValue(ParameterHandle, float *, int);

	// parameter.h:110
	void SetValue(ParameterHandle, uint32_t *, int);

	// parameter.h:111
	Shader::ParameterDataType GetType(ParameterHandle);

	// parameter.h:112
	unsigned int GetSize(ParameterHandle);

	// parameter.h:114
	const ParameterSemanticBlock *const GetSemanticBlock() const;

	// parameter.h:115
	const uint32_t *const GetRawData() const;

	// parameter.h:121
	void Load(void (*)(const ProgramBuffer *, const ProgramBuffer *, const ParameterSemanticBlock *, uint32_t *, void *), const ProgramBuffer *, const ProgramBuffer *, void *) const;

protected:
	// parameter.h:131
	void ParameterBlock();

}

