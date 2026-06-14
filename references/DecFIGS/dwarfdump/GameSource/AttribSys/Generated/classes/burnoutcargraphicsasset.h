// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// burnoutcargraphicsasset.h:126
		namespace burnoutcargraphicsasset {
			// burnoutcargraphicsasset.h:128
			const Attribute::Key Liveries = [0, 0, 0, 0, 105, 235, 53, 101];

			// burnoutcargraphicsasset.h:129
			const Attribute::Key PlayerColourIndex = [0, 0, 0, 0, 232, 236, 54, 53];

			// burnoutcargraphicsasset.h:130
			const Attribute::Key PlayerColourPaletteIndex = 2082872569;

			// burnoutcargraphicsasset.h:131
			const Attribute::Key RandomTrafficColours = [0, 0, 0, 0, 177, 238, 128, 98];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// burnoutcargraphicsasset.h:122
		const Attribute::Key burnoutcargraphicsasset = [0, 0, 0, 0, 102, 15, 90, 84];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// burnoutcargraphicsasset.h:126
		namespace burnoutcargraphicsasset {
			// burnoutcargraphicsasset.h:128
			const Attribute::Key Liveries = [0, 0, 0, 0, 105, 235, 53, 101];

			// burnoutcargraphicsasset.h:129
			const Attribute::Key PlayerColourIndex = [0, 0, 0, 0, 232, 236, 54, 53];

			// burnoutcargraphicsasset.h:130
			const Attribute::Key PlayerColourPaletteIndex = 2082872569;

			// burnoutcargraphicsasset.h:131
			const Attribute::Key RandomTrafficColours = [0, 0, 0, 0, 177, 238, 128, 98];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// burnoutcargraphicsasset.h:122
		const Attribute::Key burnoutcargraphicsasset = [0, 0, 0, 0, 102, 15, 90, 84];

	}

}

// burnoutcargraphicsasset.h:13
struct Attrib::Gen::burnoutcargraphicsasset : Instance {
public:
	// burnoutcargraphicsasset.h:15
	Attribute::Key ClassKey();

	// burnoutcargraphicsasset.h:17
	void * operator new(size_t);

	// burnoutcargraphicsasset.h:17
	void operator delete(void *, size_t);

	// burnoutcargraphicsasset.h:17
	void * operator new(size_t, void *);

	// burnoutcargraphicsasset.h:17
	void operator delete(void *, void *);

	// burnoutcargraphicsasset.h:18
	void burnoutcargraphicsasset(const Attrib::Collection *, uint32_t);

	// burnoutcargraphicsasset.h:19
	void burnoutcargraphicsasset(const burnoutcargraphicsasset &);

	// burnoutcargraphicsasset.h:20
	void burnoutcargraphicsasset(const Attrib::Instance &);

	// burnoutcargraphicsasset.h:21
	void burnoutcargraphicsasset(const Attrib::RefSpec &, uint32_t);

	// burnoutcargraphicsasset.h:22
	void burnoutcargraphicsasset(Attribute::Key, uint32_t);

	// burnoutcargraphicsasset.h:23
	void ~burnoutcargraphicsasset();

	// burnoutcargraphicsasset.h:25
	Attribute::Key GetClass() const;

	// burnoutcargraphicsasset.h:27
	Instance & GetBase();

	// burnoutcargraphicsasset.h:28
	const Attrib::Instance & GetBase() const;

	// burnoutcargraphicsasset.h:30
	void Modify(Attribute::Key, unsigned int);

	// burnoutcargraphicsasset.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// burnoutcargraphicsasset.h:32
	void Change(const Attrib::Collection *);

	// burnoutcargraphicsasset.h:33
	void Change(const Attrib::RefSpec &);

	// burnoutcargraphicsasset.h:34
	void Change(Attribute::Key);

	// burnoutcargraphicsasset.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// burnoutcargraphicsasset.h:36
	void ChangeWithDefault(Attribute::Key);

	// burnoutcargraphicsasset.h:38
	const burnoutcargraphicsasset & operator=(const burnoutcargraphicsasset &);

	// burnoutcargraphicsasset.h:39
	const burnoutcargraphicsasset & operator=(const Attrib::Instance &);

	// burnoutcargraphicsasset.h:40
	bool operator==(const burnoutcargraphicsasset &) const;

	// burnoutcargraphicsasset.h:41
	bool operator==(const Attrib::Instance &) const;

	// burnoutcargraphicsasset.h:42
	bool operator!=(const burnoutcargraphicsasset &) const;

	// burnoutcargraphicsasset.h:43
	bool operator!=(const Attrib::Instance &) const;

	// burnoutcargraphicsasset.h:73
	bool Liveries(Attrib::TAttrib<EA::Reflection::Int64> &) const;

	// burnoutcargraphicsasset.h:74
	bool Liveries(Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int) const;

	// burnoutcargraphicsasset.h:75
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 & Liveries(unsigned int) const;

	// burnoutcargraphicsasset.h:76
	unsigned int Num_Liveries() const;

	// burnoutcargraphicsasset.h:77
	bool Set_Liveries(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int);

	// burnoutcargraphicsasset.h:81
	bool PlayerColourIndex(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// burnoutcargraphicsasset.h:82
	bool PlayerColourIndex(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// burnoutcargraphicsasset.h:83
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & PlayerColourIndex() const;

	// burnoutcargraphicsasset.h:84
	bool Set_PlayerColourIndex(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// burnoutcargraphicsasset.h:88
	bool PlayerColourPaletteIndex(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// burnoutcargraphicsasset.h:89
	bool PlayerColourPaletteIndex(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// burnoutcargraphicsasset.h:90
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & PlayerColourPaletteIndex() const;

	// burnoutcargraphicsasset.h:91
	bool Set_PlayerColourPaletteIndex(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// burnoutcargraphicsasset.h:95
	bool RandomTrafficColours(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// burnoutcargraphicsasset.h:96
	bool RandomTrafficColours(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int) const;

	// burnoutcargraphicsasset.h:97
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & RandomTrafficColours(unsigned int) const;

	// burnoutcargraphicsasset.h:98
	unsigned int Num_RandomTrafficColours() const;

	// burnoutcargraphicsasset.h:99
	bool Set_RandomTrafficColours(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &, unsigned int);

private:
	// burnoutcargraphicsasset.h:111
	unsigned int GetLayoutSize();

	// burnoutcargraphicsasset.h:114
	burnoutcargraphicsasset & ConvertFromInstance(Instance &);

	// burnoutcargraphicsasset.h:115
	const burnoutcargraphicsasset & ConvertFromInstance(const Attrib::Instance &);

}

