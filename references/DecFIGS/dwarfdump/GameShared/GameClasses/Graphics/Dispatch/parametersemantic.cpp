// parametersemantic.cpp:66
using namespace Shader;

// parametersemantic.cpp:563
void Shader::ParameterSemanticBlock::ParameterSemanticBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// parametersemantic.cpp:208
void Shader::ParameterSemanticBlock::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// parametersemantic.cpp:221
void Shader::ParameterSemanticBlock::RuntimeFixup(ProgramBuffer *  pProgramBuffer, Shader::HashTableResolver *  pResolver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// parametersemantic.cpp:519
void Shader::ParameterSemanticBlock::RegisterArenaReadCallbacks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:521
		ArenaTypeReg * typeReg;

	}
}

// parametersemantic.cpp:536
void Shader::ParameterSemanticBlock::RegisterArenaWriteCallbacks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:538
		ArenaTypeReg * typeReg;

	}
}

// parametersemantic.cpp:555
void Shader::ParameterSemanticBlock::Find(unsigned int  namespaceId, unsigned int  semanticId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:557
		unsigned int i;

	}
}

// parametersemantic.cpp:482
void Shader::ParameterSemanticBlock::Fixup(void *  ptr, rw::core::arena::ArenaIterator *  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:486
		ParameterSemanticBlock * obj;

		off2ptr<Shader::ParameterSemanticBlock, Shader::ParameterSemantic>(/* parameters */);
		{
			// parametersemantic.cpp:492
			unsigned int i;

		}
		off2ptr<Shader::ParameterSemanticBlock, const char>(/* parameters */);
		off2ptr<Shader::ParameterSemanticBlock, const char>(/* parameters */);
	}
}

// parametersemantic.cpp:442
void Shader::ParameterSemanticBlock::Refix(void *  ptr, void *, rw::core::arena::ArenaIterator *  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:446
		ParameterSemanticBlock * obj;

		off2ptr<Shader::ParameterSemanticBlock, Shader::ParameterSemantic>(/* parameters */);
		{
			// parametersemantic.cpp:452
			unsigned int i;

		}
		off2ptr<Shader::ParameterSemanticBlock, const char>(/* parameters */);
		off2ptr<Shader::ParameterSemanticBlock, const char>(/* parameters */);
	}
}

// parametersemantic.cpp:405
void Shader::ParameterSemanticBlock::Unfix(void *  ptr, Arena::SizeAndAlignment *  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:407
		ParameterSemanticBlock * obj;

		{
			// parametersemantic.cpp:409
			unsigned int i;

			ptr2off<Shader::ParameterSemanticBlock, const char>(/* parameters */);
			ptr2off<Shader::ParameterSemanticBlock, const char>(/* parameters */);
		}
		ptr2off<Shader::ParameterSemanticBlock, Shader::ParameterSemantic>(/* parameters */);
	}
}

// parametersemantic.cpp:150
void Shader::ParameterSemanticBlock::Initialize(const const Resource &  resource, const const Shader::ParameterSemanticBlock::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:152
		ParameterSemanticBlock * pParameterSemanticBlock;

		// parametersemantic.cpp:156
		uint8_t * pData;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
	alignptr<Shader::ParameterSemanticBlock, std::uint8_t>(/* parameters */);
	alignptr<Shader::ParameterSemantic, std::uint8_t>(/* parameters */);
	{
		// parametersemantic.cpp:170
		unsigned int i;

	}
	alignptr<const char, std::uint8_t>(/* parameters */);
	{
		// parametersemantic.cpp:184
		unsigned int i;

	}
	alignptr<const char, std::uint8_t>(/* parameters */);
}

// parametersemantic.cpp:122
void Shader::ParameterSemanticBlock::GetResourceDescriptor(const const Shader::ParameterSemanticBlock::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// parametersemantic.cpp:124
		unsigned int size;

		{
			// parametersemantic.cpp:127
			unsigned int i;

		}
		{
			// parametersemantic.cpp:129
			unsigned int i;

		}
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

