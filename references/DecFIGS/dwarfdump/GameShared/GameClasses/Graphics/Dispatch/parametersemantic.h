// parametersemantic.h:44
namespace Shader {
	struct ParameterHandle;

}

// parametersemantic.h:44
namespace Shader {
	// parametersemantic.h:62
	enum ParameterDataType {
		Float = 0,
		Int = 1,
		Bool = 2,
	}

	struct ParameterSemantic;

	// Declaration
	struct ParameterSemanticBlock {
		// parametersemantic.h:94
		struct Parameters {
			// parametersemantic.h:95
			unsigned int count;

			// parametersemantic.h:96
			unsigned int dataSize;

			// parametersemantic.h:97
			unsigned int semanticNameTotal;

			// parametersemantic.h:98
			unsigned int * semanticNameSize;

			// parametersemantic.h:99
			unsigned int namespaceNameTotal;

			// parametersemantic.h:100
			unsigned int * namespaceNameSize;

		}

	}

	struct HashTableResolver;

	struct ParameterHandle;

}

// parametersemantic.h:73
struct Shader::ParameterSemantic {
	// parametersemantic.h:75
	void * m_hParameter;

	// parametersemantic.h:76
	const char * m_Namespace;

	// parametersemantic.h:77
	uint32_t m_NamespaceId;

	// parametersemantic.h:78
	const char * m_Semantic;

	// parametersemantic.h:79
	uint32_t m_SemanticId;

	// parametersemantic.h:80
	void * m_pData;

	// parametersemantic.h:81
	uint16_t m_uNum;

	// parametersemantic.h:82
	uint8_t m_uStride;

	// parametersemantic.h:83
	uint8_t m_uType;

}

// parametersemantic.h:90
struct Shader::ParameterSemanticBlock {
protected:
	// parametersemantic.h:129
	unsigned int mCount;

	// parametersemantic.h:130
	unsigned int mDataSize;

	// parametersemantic.h:131
	ParameterSemantic * mpSemantics;

public:
	// parametersemantic.h:104
	ResourceDescriptor GetResourceDescriptor(const Shader::ParameterSemanticBlock::Parameters &);

	// parametersemantic.h:105
	ParameterSemanticBlock * Initialize(const Resource &, const Shader::ParameterSemanticBlock::Parameters &);

	// parametersemantic.h:106
	void Release();

	// parametersemantic.h:109
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// parametersemantic.h:110
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// parametersemantic.h:111
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// parametersemantic.h:113
	void RegisterArenaReadCallbacks();

	// parametersemantic.h:114
	void RegisterArenaWriteCallbacks();

	// parametersemantic.h:117
	void RuntimeFixup(ProgramBuffer *, Shader::HashTableResolver *);

	// parametersemantic.h:120
	unsigned int GetCount() const;

	// parametersemantic.h:121
	unsigned int GetDataSize() const;

	// parametersemantic.h:122
	const ParameterSemantic *const GetSemantics() const;

	// parametersemantic.h:123
	const ParameterSemantic *const Find(unsigned int, unsigned int);

	// parametersemantic.h:126
	const ParameterSemantic & operator[](unsigned int) const;

protected:
	// parametersemantic.h:134
	void ParameterSemanticBlock();

}

