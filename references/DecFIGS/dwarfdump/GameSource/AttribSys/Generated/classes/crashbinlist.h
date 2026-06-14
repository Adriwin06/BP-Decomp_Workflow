// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// crashbinlist.h:122
		namespace crashbinlist {
			// crashbinlist.h:124
			const Attribute::Key CrashBins = 3995341001;

			// crashbinlist.h:125
			const Attribute::Key mMaterialNames = [0, 0, 0, 0, 10, 55, 120, 110];

			// crashbinlist.h:126
			const Attribute::Key mNumCrashBins = [0, 0, 0, 0, 172, 100, 11, 178];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// crashbinlist.h:118
		const Attribute::Key crashbinlist = [0, 0, 0, 0, 85, 199, 156, 194];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct crashbinlist {
			// crashbinlist.h:99
			struct _LayoutStruct {
				// crashbinlist.h:100
				Private _Array_CrashBins;

				// crashbinlist.h:101
				RefSpec[40] CrashBins;

				// crashbinlist.h:102
				Private _Array_mMaterialNames;

				// crashbinlist.h:103
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Text[64] mMaterialNames;

				// crashbinlist.h:104
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCrashBins;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// crashbinlist.h:122
		namespace crashbinlist {
			// crashbinlist.h:124
			const Attribute::Key CrashBins = 3995341001;

			// crashbinlist.h:125
			const Attribute::Key mMaterialNames = [0, 0, 0, 0, 10, 55, 120, 110];

			// crashbinlist.h:126
			const Attribute::Key mNumCrashBins = [0, 0, 0, 0, 172, 100, 11, 178];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// crashbinlist.h:118
		const Attribute::Key crashbinlist = [0, 0, 0, 0, 85, 199, 156, 194];

	}

}

// crashbinlist.h:13
struct Attrib::Gen::crashbinlist : Instance {
public:
	// crashbinlist.h:15
	Attribute::Key ClassKey();

	// crashbinlist.h:17
	void * operator new(size_t);

	// crashbinlist.h:17
	void operator delete(void *, size_t);

	// crashbinlist.h:17
	void * operator new(size_t, void *);

	// crashbinlist.h:17
	void operator delete(void *, void *);

	// crashbinlist.h:18
	void crashbinlist(const Attrib::Collection *, uint32_t);

	// crashbinlist.h:19
	void crashbinlist(const crashbinlist &);

	// crashbinlist.h:20
	void crashbinlist(const Attrib::Instance &);

	// crashbinlist.h:21
	void crashbinlist(const Attrib::RefSpec &, uint32_t);

	// crashbinlist.h:22
	void crashbinlist(Attribute::Key, uint32_t);

	// crashbinlist.h:23
	void ~crashbinlist();

	// crashbinlist.h:25
	Attribute::Key GetClass() const;

	// crashbinlist.h:27
	Instance & GetBase();

	// crashbinlist.h:28
	const Attrib::Instance & GetBase() const;

	// crashbinlist.h:30
	void Modify(Attribute::Key, unsigned int);

	// crashbinlist.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// crashbinlist.h:32
	void Change(const Attrib::Collection *);

	// crashbinlist.h:33
	void Change(const Attrib::RefSpec &);

	// crashbinlist.h:34
	void Change(Attribute::Key);

	// crashbinlist.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// crashbinlist.h:36
	void ChangeWithDefault(Attribute::Key);

	// crashbinlist.h:38
	const crashbinlist & operator=(const crashbinlist &);

	// crashbinlist.h:39
	const crashbinlist & operator=(const Attrib::Instance &);

	// crashbinlist.h:40
	bool operator==(const crashbinlist &) const;

	// crashbinlist.h:41
	bool operator==(const Attrib::Instance &) const;

	// crashbinlist.h:42
	bool operator!=(const crashbinlist &) const;

	// crashbinlist.h:43
	bool operator!=(const Attrib::Instance &) const;

	// crashbinlist.h:73
	bool CrashBins(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// crashbinlist.h:74
	bool CrashBins(RefSpec &, unsigned int) const;

	// crashbinlist.h:75
	const Attrib::RefSpec & CrashBins(unsigned int) const;

	// crashbinlist.h:76
	unsigned int Num_CrashBins() const;

	// crashbinlist.h:77
	bool Set_CrashBins(const Attrib::RefSpec &, unsigned int);

	// crashbinlist.h:81
	bool mMaterialNames(Attrib::TAttrib<const char*> &) const;

	// crashbinlist.h:82
	bool mMaterialNames(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &, unsigned int) const;

	// crashbinlist.h:83
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & mMaterialNames(unsigned int) const;

	// crashbinlist.h:84
	unsigned int Num_mMaterialNames() const;

	// crashbinlist.h:85
	bool Set_mMaterialNames(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &, unsigned int);

	// crashbinlist.h:89
	bool mNumCrashBins(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// crashbinlist.h:90
	bool mNumCrashBins(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// crashbinlist.h:91
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCrashBins() const;

	// crashbinlist.h:92
	bool Set_mNumCrashBins(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

private:
	// crashbinlist.h:107
	unsigned int GetLayoutSize();

	// crashbinlist.h:110
	crashbinlist & ConvertFromInstance(Instance &);

	// crashbinlist.h:111
	const crashbinlist & ConvertFromInstance(const Attrib::Instance &);

}

