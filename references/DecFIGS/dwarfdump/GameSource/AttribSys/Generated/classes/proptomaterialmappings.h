// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// proptomaterialmappings.h:122
		namespace proptomaterialmappings {
			// proptomaterialmappings.h:124
			const Attribute::Key CgsIds = [0, 0, 0, 0, 92, 94, 155, 143];

			// proptomaterialmappings.h:125
			const Attribute::Key MappingCount = [0, 0, 0, 0, 198, 255, 5, 9];

			// proptomaterialmappings.h:126
			const Attribute::Key MaterialIndices = 3504046158;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// proptomaterialmappings.h:118
		const Attribute::Key proptomaterialmappings = 931143846;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct proptomaterialmappings {
			// proptomaterialmappings.h:99
			struct _LayoutStruct {
				// proptomaterialmappings.h:100
				Private _Array_CgsIds;

				// proptomaterialmappings.h:101
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64[512] CgsIds;

				// proptomaterialmappings.h:102
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 MappingCount;

				// proptomaterialmappings.h:103
				Private _Array_MaterialIndices;

				// attribsys.h:877
				typedef uint8_t UInt8;

				// proptomaterialmappings.h:104
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[512] MaterialIndices;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// proptomaterialmappings.h:122
		namespace proptomaterialmappings {
			// proptomaterialmappings.h:124
			const Attribute::Key CgsIds = [0, 0, 0, 0, 92, 94, 155, 143];

			// proptomaterialmappings.h:125
			const Attribute::Key MappingCount = [0, 0, 0, 0, 198, 255, 5, 9];

			// proptomaterialmappings.h:126
			const Attribute::Key MaterialIndices = 3504046158;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// proptomaterialmappings.h:118
		const Attribute::Key proptomaterialmappings = 931143846;

	}

}

// proptomaterialmappings.h:13
struct Attrib::Gen::proptomaterialmappings : Instance {
public:
	// proptomaterialmappings.h:15
	Attribute::Key ClassKey();

	// proptomaterialmappings.h:17
	void * operator new(size_t);

	// proptomaterialmappings.h:17
	void operator delete(void *, size_t);

	// proptomaterialmappings.h:17
	void * operator new(size_t, void *);

	// proptomaterialmappings.h:17
	void operator delete(void *, void *);

	// proptomaterialmappings.h:18
	void proptomaterialmappings(const Attrib::Collection *, uint32_t);

	// proptomaterialmappings.h:19
	void proptomaterialmappings(const proptomaterialmappings &);

	// proptomaterialmappings.h:20
	void proptomaterialmappings(const Attrib::Instance &);

	// proptomaterialmappings.h:21
	void proptomaterialmappings(const Attrib::RefSpec &, uint32_t);

	// proptomaterialmappings.h:22
	void proptomaterialmappings(Attribute::Key, uint32_t);

	// proptomaterialmappings.h:23
	void ~proptomaterialmappings();

	// proptomaterialmappings.h:25
	Attribute::Key GetClass() const;

	// proptomaterialmappings.h:27
	Instance & GetBase();

	// proptomaterialmappings.h:28
	const Attrib::Instance & GetBase() const;

	// proptomaterialmappings.h:30
	void Modify(Attribute::Key, unsigned int);

	// proptomaterialmappings.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// proptomaterialmappings.h:32
	void Change(const Attrib::Collection *);

	// proptomaterialmappings.h:33
	void Change(const Attrib::RefSpec &);

	// proptomaterialmappings.h:34
	void Change(Attribute::Key);

	// proptomaterialmappings.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// proptomaterialmappings.h:36
	void ChangeWithDefault(Attribute::Key);

	// proptomaterialmappings.h:38
	const proptomaterialmappings & operator=(const proptomaterialmappings &);

	// proptomaterialmappings.h:39
	const proptomaterialmappings & operator=(const Attrib::Instance &);

	// proptomaterialmappings.h:40
	bool operator==(const proptomaterialmappings &) const;

	// proptomaterialmappings.h:41
	bool operator==(const Attrib::Instance &) const;

	// proptomaterialmappings.h:42
	bool operator!=(const proptomaterialmappings &) const;

	// proptomaterialmappings.h:43
	bool operator!=(const Attrib::Instance &) const;

	// proptomaterialmappings.h:73
	bool CgsIds(Attrib::TAttrib<EA::Reflection::Int64> &) const;

	// proptomaterialmappings.h:74
	bool CgsIds(Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int) const;

	// proptomaterialmappings.h:75
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 & CgsIds(unsigned int) const;

	// proptomaterialmappings.h:76
	unsigned int Num_CgsIds() const;

	// proptomaterialmappings.h:77
	bool Set_CgsIds(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int);

	// proptomaterialmappings.h:81
	bool MappingCount(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// proptomaterialmappings.h:82
	bool MappingCount(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// proptomaterialmappings.h:83
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & MappingCount() const;

	// proptomaterialmappings.h:84
	bool Set_MappingCount(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// proptomaterialmappings.h:88
	bool MaterialIndices(Attrib::TAttrib<EA::Reflection::UInt8> &) const;

	// proptomaterialmappings.h:89
	bool MaterialIndices(Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int) const;

	// proptomaterialmappings.h:90
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & MaterialIndices(unsigned int) const;

	// proptomaterialmappings.h:91
	unsigned int Num_MaterialIndices() const;

	// proptomaterialmappings.h:92
	bool Set_MaterialIndices(const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int);

private:
	// proptomaterialmappings.h:107
	unsigned int GetLayoutSize();

	// proptomaterialmappings.h:110
	proptomaterialmappings & ConvertFromInstance(Instance &);

	// proptomaterialmappings.h:111
	const proptomaterialmappings & ConvertFromInstance(const Attrib::Instance &);

}

