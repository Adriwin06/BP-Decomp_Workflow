// attribuserinclude.h:119
namespace Attrib {
	// codegen.cpp:8
	extern const void * DefaultDataArea(unsigned int);

	// codegen.cpp:18
	extern uint64_t SchemaVersion();

	// codegen.cpp:168
	Attrib_RefSpec_TypeHandler Attrib_RefSpec_singleton;

	// codegen.cpp:171
	unsigned int kTypeHandlerCount;

	// codegen.cpp:172
	Attribute::Type[2] kTypeHandlerIds;

	// codegen.cpp:178
	Attrib::ITypeHandler *[2] kTypeHandlers;

}

// codegen.cpp:137
struct Attrib::Attrib_RefSpec_TypeHandler : public Attrib::ITypeHandler {
public:
	void Attrib_RefSpec_TypeHandler(const Attrib_RefSpec_TypeHandler &);

	void Attrib_RefSpec_TypeHandler();

	// codegen.cpp:139
	Attribute::Type TypeID();

	// codegen.cpp:141
	virtual void * Retain(void *);

	// codegen.cpp:147
	virtual void * Clone(void *);

	// codegen.cpp:153
	virtual void Clean(void *);

	// codegen.cpp:159
	virtual void Release(void *);

	virtual void ~Attrib_RefSpec_TypeHandler();

}

// codegen.cpp:183
void Attrib::TypeDesc::Lookup(Attribute::Type  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// codegen.cpp:185
		unsigned int index;

		{
			// codegen.cpp:191
			unsigned int branch;

		}
	}
}

// codegen.cpp:113
void Attrib::ClassStaticDesc::GetTable(const unsigned int &  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// codegen.cpp:120
void Attrib::ClassStaticDesc::GetStatic(Attribute::Key  classKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// codegen.cpp:122
		unsigned int index;

		// codegen.cpp:122
		unsigned int count;

		// codegen.cpp:123
		const ClassStaticDesc * table;

		{
			// codegen.cpp:129
			unsigned int branch;

		}
	}
}

// codegen.cpp:197
void Attrib::TypeDesc::NameToType(const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// codegen.cpp:137
void Attrib::Attrib_RefSpec_TypeHandler::~Attrib_RefSpec_TypeHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// codegen.cpp:137
void Attrib::Attrib_RefSpec_TypeHandler::Attrib_RefSpec_TypeHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// codegen.cpp:202
void _GLOBAL__D_KAC_ATTRIB_SCHEMA_VLT_DATA_size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// codegen.cpp:201
void _GLOBAL__I_KAC_ATTRIB_SCHEMA_VLT_DATA_size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

