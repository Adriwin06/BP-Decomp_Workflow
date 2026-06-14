// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// sampletags.h:124
		namespace sampletags {
			// sampletags.h:126
			const Attribute::Key FirstIndices = [0, 0, 0, 0, 92, 45, 103, 132];

			// sampletags.h:127
			const Attribute::Key LastIndices = 4044354383;

			// sampletags.h:128
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// sampletags.h:120
		const Attribute::Key sampletags = 2664759706;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// sampletags.h:124
		namespace sampletags {
			// sampletags.h:126
			const Attribute::Key FirstIndices = [0, 0, 0, 0, 92, 45, 103, 132];

			// sampletags.h:127
			const Attribute::Key LastIndices = 4044354383;

			// sampletags.h:128
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// sampletags.h:120
		const Attribute::Key sampletags = 2664759706;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct sampletags {
			// sampletags.h:100
			struct _LayoutStruct {
				// sampletags.h:101
				Private _Array_Volumes;

				// sampletags.h:102
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float[32] Volumes;

				// sampletags.h:103
				Private _Array_LastIndices;

				// attribsys.h:872
				typedef int16_t Int16;

				// sampletags.h:104
				Attrib::Gen::sampletags::_LayoutStruct::Int16[32] LastIndices;

				// sampletags.h:105
				Private _Array_FirstIndices;

				// sampletags.h:106
				Attrib::Gen::sampletags::_LayoutStruct::Int16[32] FirstIndices;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// sampletags.h:124
		namespace sampletags {
			// sampletags.h:126
			const Attribute::Key FirstIndices = [0, 0, 0, 0, 92, 45, 103, 132];

			// sampletags.h:127
			const Attribute::Key LastIndices = 4044354383;

			// sampletags.h:128
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// sampletags.h:120
		const Attribute::Key sampletags = 2664759706;

	}

}

// sampletags.h:13
struct Attrib::Gen::sampletags : Instance {
public:
	// sampletags.h:15
	Attribute::Key ClassKey();

	// sampletags.h:17
	void * operator new(size_t);

	// sampletags.h:17
	void operator delete(void *, size_t);

	// sampletags.h:17
	void * operator new(size_t, void *);

	// sampletags.h:17
	void operator delete(void *, void *);

	// sampletags.h:18
	void sampletags(const Attrib::Collection *, uint32_t);

	// sampletags.h:19
	void sampletags(const sampletags &);

	// sampletags.h:20
	void sampletags(const Attrib::Instance &);

	// sampletags.h:21
	void sampletags(const Attrib::RefSpec &, uint32_t);

	// sampletags.h:22
	void sampletags(Attribute::Key, uint32_t);

	// sampletags.h:23
	void ~sampletags();

	// sampletags.h:25
	Attribute::Key GetClass() const;

	// sampletags.h:27
	Instance & GetBase();

	// sampletags.h:28
	const Attrib::Instance & GetBase() const;

	// sampletags.h:30
	void Modify(Attribute::Key, unsigned int);

	// sampletags.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// sampletags.h:32
	void Change(const Attrib::Collection *);

	// sampletags.h:33
	void Change(const Attrib::RefSpec &);

	// sampletags.h:34
	void Change(Attribute::Key);

	// sampletags.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// sampletags.h:36
	void ChangeWithDefault(Attribute::Key);

	// sampletags.h:38
	const sampletags & operator=(const sampletags &);

	// sampletags.h:39
	const sampletags & operator=(const Attrib::Instance &);

	// sampletags.h:40
	bool operator==(const sampletags &) const;

	// sampletags.h:41
	bool operator==(const Attrib::Instance &) const;

	// sampletags.h:42
	bool operator!=(const sampletags &) const;

	// sampletags.h:43
	bool operator!=(const Attrib::Instance &) const;

	// sampletags.h:73
	bool FirstIndices(Attrib::TAttrib<EA::Reflection::Int16> &) const;

	// sampletags.h:74
	bool FirstIndices(Attrib::Gen::sampletags::_LayoutStruct::Int16 &, unsigned int) const;

	// sampletags.h:75
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & FirstIndices(unsigned int) const;

	// sampletags.h:76
	unsigned int Num_FirstIndices() const;

	// sampletags.h:77
	bool Set_FirstIndices(const Attrib::Gen::sampletags::_LayoutStruct::Int16 &, unsigned int);

	// sampletags.h:81
	bool LastIndices(Attrib::TAttrib<EA::Reflection::Int16> &) const;

	// sampletags.h:82
	bool LastIndices(Attrib::Gen::sampletags::_LayoutStruct::Int16 &, unsigned int) const;

	// sampletags.h:83
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & LastIndices(unsigned int) const;

	// sampletags.h:84
	unsigned int Num_LastIndices() const;

	// sampletags.h:85
	bool Set_LastIndices(const Attrib::Gen::sampletags::_LayoutStruct::Int16 &, unsigned int);

	// sampletags.h:89
	bool Volumes(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// sampletags.h:90
	bool Volumes(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &, unsigned int) const;

	// sampletags.h:91
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Volumes(unsigned int) const;

	// sampletags.h:92
	unsigned int Num_Volumes() const;

	// sampletags.h:93
	bool Set_Volumes(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &, unsigned int);

private:
	// sampletags.h:109
	unsigned int GetLayoutSize();

	// sampletags.h:112
	sampletags & ConvertFromInstance(Instance &);

	// sampletags.h:113
	const sampletags & ConvertFromInstance(const Attrib::Instance &);

}

