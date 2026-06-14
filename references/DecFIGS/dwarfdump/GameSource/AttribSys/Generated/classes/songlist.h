// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// songlist.h:112
		namespace songlist {
			// songlist.h:114
			const Attribute::Key NumSongs = 882550121;

			// songlist.h:115
			const Attribute::Key Songs = [0, 0, 0, 0, 87, 80, 139, 141];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// songlist.h:108
		const Attribute::Key songlist = [0, 0, 0, 0, 124, 148, 187, 70];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct songlist {
			// songlist.h:91
			struct _LayoutStruct {
				// songlist.h:92
				Private _Array_Songs;

				// songlist.h:93
				RefSpec[100] Songs;

				// songlist.h:94
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 NumSongs;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// songlist.h:112
		namespace songlist {
			// songlist.h:114
			const Attribute::Key NumSongs = 882550121;

			// songlist.h:115
			const Attribute::Key Songs = [0, 0, 0, 0, 87, 80, 139, 141];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// songlist.h:108
		const Attribute::Key songlist = [0, 0, 0, 0, 124, 148, 187, 70];

	}

}

// songlist.h:13
struct Attrib::Gen::songlist : Instance {
public:
	// songlist.h:15
	Attribute::Key ClassKey();

	// songlist.h:17
	void * operator new(size_t);

	// songlist.h:17
	void operator delete(void *, size_t);

	// songlist.h:17
	void * operator new(size_t, void *);

	// songlist.h:17
	void operator delete(void *, void *);

	// songlist.h:18
	void songlist(const Attrib::Collection *, uint32_t);

	// songlist.h:19
	void songlist(const songlist &);

	// songlist.h:20
	void songlist(const Attrib::Instance &);

	// songlist.h:21
	void songlist(const Attrib::RefSpec &, uint32_t);

	// songlist.h:22
	void songlist(Attribute::Key, uint32_t);

	// songlist.h:23
	void ~songlist();

	// songlist.h:25
	Attribute::Key GetClass() const;

	// songlist.h:27
	Instance & GetBase();

	// songlist.h:28
	const Attrib::Instance & GetBase() const;

	// songlist.h:30
	void Modify(Attribute::Key, unsigned int);

	// songlist.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// songlist.h:32
	void Change(const Attrib::Collection *);

	// songlist.h:33
	void Change(const Attrib::RefSpec &);

	// songlist.h:34
	void Change(Attribute::Key);

	// songlist.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// songlist.h:36
	void ChangeWithDefault(Attribute::Key);

	// songlist.h:38
	const songlist & operator=(const songlist &);

	// songlist.h:39
	const songlist & operator=(const Attrib::Instance &);

	// songlist.h:40
	bool operator==(const songlist &) const;

	// songlist.h:41
	bool operator==(const Attrib::Instance &) const;

	// songlist.h:42
	bool operator!=(const songlist &) const;

	// songlist.h:43
	bool operator!=(const Attrib::Instance &) const;

	// songlist.h:73
	bool NumSongs(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// songlist.h:74
	bool NumSongs(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// songlist.h:75
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & NumSongs() const;

	// songlist.h:76
	bool Set_NumSongs(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// songlist.h:80
	bool Songs(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// songlist.h:81
	bool Songs(RefSpec &, unsigned int) const;

	// songlist.h:82
	const Attrib::RefSpec & Songs(unsigned int) const;

	// songlist.h:83
	unsigned int Num_Songs() const;

	// songlist.h:84
	bool Set_Songs(const Attrib::RefSpec &, unsigned int);

private:
	// songlist.h:97
	unsigned int GetLayoutSize();

	// songlist.h:100
	songlist & ConvertFromInstance(Instance &);

	// songlist.h:101
	const songlist & ConvertFromInstance(const Attrib::Instance &);

}

