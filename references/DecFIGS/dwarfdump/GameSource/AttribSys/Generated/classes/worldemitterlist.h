// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// worldemitterlist.h:112
		namespace worldemitterlist {
			// worldemitterlist.h:114
			const Attribute::Key mNumWorldEmitters = 1889158710;

			// worldemitterlist.h:115
			const Attribute::Key mWorldEmitters = 2073524050;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// worldemitterlist.h:108
		const Attribute::Key worldemitterlist = 2034189526;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct worldemitterlist {
			// worldemitterlist.h:91
			struct _LayoutStruct {
				// worldemitterlist.h:92
				Private _Array_mWorldEmitters;

				// worldemitterlist.h:93
				RefSpec[50] mWorldEmitters;

				// worldemitterlist.h:94
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumWorldEmitters;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// worldemitterlist.h:112
		namespace worldemitterlist {
			// worldemitterlist.h:114
			const Attribute::Key mNumWorldEmitters = 1889158710;

			// worldemitterlist.h:115
			const Attribute::Key mWorldEmitters = 2073524050;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// worldemitterlist.h:108
		const Attribute::Key worldemitterlist = 2034189526;

	}

}

// worldemitterlist.h:13
struct Attrib::Gen::worldemitterlist : Instance {
public:
	// worldemitterlist.h:15
	Attribute::Key ClassKey();

	// worldemitterlist.h:17
	void * operator new(size_t);

	// worldemitterlist.h:17
	void operator delete(void *, size_t);

	// worldemitterlist.h:17
	void * operator new(size_t, void *);

	// worldemitterlist.h:17
	void operator delete(void *, void *);

	// worldemitterlist.h:18
	void worldemitterlist(const Attrib::Collection *, uint32_t);

	// worldemitterlist.h:19
	void worldemitterlist(const worldemitterlist &);

	// worldemitterlist.h:20
	void worldemitterlist(const Attrib::Instance &);

	// worldemitterlist.h:21
	void worldemitterlist(const Attrib::RefSpec &, uint32_t);

	// worldemitterlist.h:22
	void worldemitterlist(Attribute::Key, uint32_t);

	// worldemitterlist.h:23
	void ~worldemitterlist();

	// worldemitterlist.h:25
	Attribute::Key GetClass() const;

	// worldemitterlist.h:27
	Instance & GetBase();

	// worldemitterlist.h:28
	const Attrib::Instance & GetBase() const;

	// worldemitterlist.h:30
	void Modify(Attribute::Key, unsigned int);

	// worldemitterlist.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// worldemitterlist.h:32
	void Change(const Attrib::Collection *);

	// worldemitterlist.h:33
	void Change(const Attrib::RefSpec &);

	// worldemitterlist.h:34
	void Change(Attribute::Key);

	// worldemitterlist.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// worldemitterlist.h:36
	void ChangeWithDefault(Attribute::Key);

	// worldemitterlist.h:38
	const worldemitterlist & operator=(const worldemitterlist &);

	// worldemitterlist.h:39
	const worldemitterlist & operator=(const Attrib::Instance &);

	// worldemitterlist.h:40
	bool operator==(const worldemitterlist &) const;

	// worldemitterlist.h:41
	bool operator==(const Attrib::Instance &) const;

	// worldemitterlist.h:42
	bool operator!=(const worldemitterlist &) const;

	// worldemitterlist.h:43
	bool operator!=(const Attrib::Instance &) const;

	// worldemitterlist.h:73
	bool mNumWorldEmitters(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// worldemitterlist.h:74
	bool mNumWorldEmitters(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// worldemitterlist.h:75
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mNumWorldEmitters() const;

	// worldemitterlist.h:76
	bool Set_mNumWorldEmitters(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// worldemitterlist.h:80
	bool mWorldEmitters(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// worldemitterlist.h:81
	bool mWorldEmitters(RefSpec &, unsigned int) const;

	// worldemitterlist.h:82
	const Attrib::RefSpec & mWorldEmitters(unsigned int) const;

	// worldemitterlist.h:83
	unsigned int Num_mWorldEmitters() const;

	// worldemitterlist.h:84
	bool Set_mWorldEmitters(const Attrib::RefSpec &, unsigned int);

private:
	// worldemitterlist.h:97
	unsigned int GetLayoutSize();

	// worldemitterlist.h:100
	worldemitterlist & ConvertFromInstance(Instance &);

	// worldemitterlist.h:101
	const worldemitterlist & ConvertFromInstance(const Attrib::Instance &);

}

