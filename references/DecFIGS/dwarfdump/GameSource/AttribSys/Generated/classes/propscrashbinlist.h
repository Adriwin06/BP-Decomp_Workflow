// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// propscrashbinlist.h:122
		namespace propscrashbinlist {
			// propscrashbinlist.h:124
			const Attribute::Key CrashBins = 3995341001;

			// propscrashbinlist.h:125
			const Attribute::Key mMaterialNames = [0, 0, 0, 0, 10, 55, 120, 110];

			// propscrashbinlist.h:126
			const Attribute::Key mNumCrashBins = [0, 0, 0, 0, 172, 100, 11, 178];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// propscrashbinlist.h:118
		const Attribute::Key propscrashbinlist = [0, 0, 0, 0, 79, 16, 208, 31];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct propscrashbinlist {
			// propscrashbinlist.h:99
			struct _LayoutStruct {
				// propscrashbinlist.h:100
				Private _Array_CrashBins;

				// propscrashbinlist.h:101
				RefSpec[40] CrashBins;

				// propscrashbinlist.h:102
				Private _Array_mMaterialNames;

				// propscrashbinlist.h:103
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Text[64] mMaterialNames;

				// propscrashbinlist.h:104
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCrashBins;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// propscrashbinlist.h:122
		namespace propscrashbinlist {
			// propscrashbinlist.h:124
			const Attribute::Key CrashBins = 3995341001;

			// propscrashbinlist.h:125
			const Attribute::Key mMaterialNames = [0, 0, 0, 0, 10, 55, 120, 110];

			// propscrashbinlist.h:126
			const Attribute::Key mNumCrashBins = [0, 0, 0, 0, 172, 100, 11, 178];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// propscrashbinlist.h:118
		const Attribute::Key propscrashbinlist = [0, 0, 0, 0, 79, 16, 208, 31];

	}

}

// propscrashbinlist.h:13
struct Attrib::Gen::propscrashbinlist : Instance {
public:
	// propscrashbinlist.h:15
	Attribute::Key ClassKey();

	// propscrashbinlist.h:17
	void * operator new(size_t);

	// propscrashbinlist.h:17
	void operator delete(void *, size_t);

	// propscrashbinlist.h:17
	void * operator new(size_t, void *);

	// propscrashbinlist.h:17
	void operator delete(void *, void *);

	// propscrashbinlist.h:18
	void propscrashbinlist(const Attrib::Collection *, uint32_t);

	// propscrashbinlist.h:19
	void propscrashbinlist(const propscrashbinlist &);

	// propscrashbinlist.h:20
	void propscrashbinlist(const Attrib::Instance &);

	// propscrashbinlist.h:21
	void propscrashbinlist(const Attrib::RefSpec &, uint32_t);

	// propscrashbinlist.h:22
	void propscrashbinlist(Attribute::Key, uint32_t);

	// propscrashbinlist.h:23
	void ~propscrashbinlist();

	// propscrashbinlist.h:25
	Attribute::Key GetClass() const;

	// propscrashbinlist.h:27
	Instance & GetBase();

	// propscrashbinlist.h:28
	const Attrib::Instance & GetBase() const;

	// propscrashbinlist.h:30
	void Modify(Attribute::Key, unsigned int);

	// propscrashbinlist.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// propscrashbinlist.h:32
	void Change(const Attrib::Collection *);

	// propscrashbinlist.h:33
	void Change(const Attrib::RefSpec &);

	// propscrashbinlist.h:34
	void Change(Attribute::Key);

	// propscrashbinlist.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// propscrashbinlist.h:36
	void ChangeWithDefault(Attribute::Key);

	// propscrashbinlist.h:38
	const propscrashbinlist & operator=(const propscrashbinlist &);

	// propscrashbinlist.h:39
	const propscrashbinlist & operator=(const Attrib::Instance &);

	// propscrashbinlist.h:40
	bool operator==(const propscrashbinlist &) const;

	// propscrashbinlist.h:41
	bool operator==(const Attrib::Instance &) const;

	// propscrashbinlist.h:42
	bool operator!=(const propscrashbinlist &) const;

	// propscrashbinlist.h:43
	bool operator!=(const Attrib::Instance &) const;

	// propscrashbinlist.h:73
	bool CrashBins(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// propscrashbinlist.h:74
	bool CrashBins(RefSpec &, unsigned int) const;

	// propscrashbinlist.h:75
	const Attrib::RefSpec & CrashBins(unsigned int) const;

	// propscrashbinlist.h:76
	unsigned int Num_CrashBins() const;

	// propscrashbinlist.h:77
	bool Set_CrashBins(const Attrib::RefSpec &, unsigned int);

	// propscrashbinlist.h:81
	bool mMaterialNames(Attrib::TAttrib<const char*> &) const;

	// propscrashbinlist.h:82
	bool mMaterialNames(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &, unsigned int) const;

	// propscrashbinlist.h:83
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & mMaterialNames(unsigned int) const;

	// propscrashbinlist.h:84
	unsigned int Num_mMaterialNames() const;

	// propscrashbinlist.h:85
	bool Set_mMaterialNames(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &, unsigned int);

	// propscrashbinlist.h:89
	bool mNumCrashBins(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// propscrashbinlist.h:90
	bool mNumCrashBins(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// propscrashbinlist.h:91
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumCrashBins() const;

	// propscrashbinlist.h:92
	bool Set_mNumCrashBins(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

private:
	// propscrashbinlist.h:107
	unsigned int GetLayoutSize();

	// propscrashbinlist.h:110
	propscrashbinlist & ConvertFromInstance(Instance &);

	// propscrashbinlist.h:111
	const propscrashbinlist & ConvertFromInstance(const Attrib::Instance &);

}

