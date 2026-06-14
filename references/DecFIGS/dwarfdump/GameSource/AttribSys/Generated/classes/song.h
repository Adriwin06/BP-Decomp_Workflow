// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// song.h:135
		namespace song {
			// song.h:137
			const Attribute::Key AlbumName = 3639851509;

			// song.h:138
			const Attribute::Key ArtistName = 3819787049;

			// song.h:139
			const Attribute::Key Hint = [0, 0, 0, 0, 231, 39, 244, 240];

			// song.h:140
			const Attribute::Key StreamName = [0, 0, 0, 0, 0, 107, 152, 34];

			// song.h:141
			const Attribute::Key TrackName = [0, 0, 0, 0, 130, 100, 246, 70];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// song.h:131
		const Attribute::Key song = [0, 0, 0, 0, 249, 101, 75, 76];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// song.h:135
		namespace song {
			// song.h:137
			const Attribute::Key AlbumName = 3639851509;

			// song.h:138
			const Attribute::Key ArtistName = 3819787049;

			// song.h:139
			const Attribute::Key Hint = [0, 0, 0, 0, 231, 39, 244, 240];

			// song.h:140
			const Attribute::Key StreamName = [0, 0, 0, 0, 0, 107, 152, 34];

			// song.h:141
			const Attribute::Key TrackName = [0, 0, 0, 0, 130, 100, 246, 70];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// song.h:131
		const Attribute::Key song = [0, 0, 0, 0, 249, 101, 75, 76];

	}

}

// song.h:14
struct Attrib::Gen::song : Instance {
public:
	// song.h:16
	Attribute::Key ClassKey();

	// song.h:18
	void * operator new(size_t);

	// song.h:18
	void operator delete(void *, size_t);

	// song.h:18
	void * operator new(size_t, void *);

	// song.h:18
	void operator delete(void *, void *);

	// song.h:19
	void song(const Attrib::Collection *, uint32_t);

	// song.h:20
	void song(const song &);

	// song.h:21
	void song(const Attrib::Instance &);

	// song.h:22
	void song(const Attrib::RefSpec &, uint32_t);

	// song.h:23
	void song(Attribute::Key, uint32_t);

	// song.h:24
	void ~song();

	// song.h:26
	Attribute::Key GetClass() const;

	// song.h:28
	Instance & GetBase();

	// song.h:29
	const Attrib::Instance & GetBase() const;

	// song.h:31
	void Modify(Attribute::Key, unsigned int);

	// song.h:32
	Attribute::Key GenerateUniqueKey(const char *) const;

	// song.h:33
	void Change(const Attrib::Collection *);

	// song.h:34
	void Change(const Attrib::RefSpec &);

	// song.h:35
	void Change(Attribute::Key);

	// song.h:36
	void ChangeWithDefault(const Attrib::RefSpec &);

	// song.h:37
	void ChangeWithDefault(Attribute::Key);

	// song.h:39
	const song & operator=(const song &);

	// song.h:40
	const song & operator=(const Attrib::Instance &);

	// song.h:41
	bool operator==(const song &) const;

	// song.h:42
	bool operator==(const Attrib::Instance &) const;

	// song.h:43
	bool operator!=(const song &) const;

	// song.h:44
	bool operator!=(const Attrib::Instance &) const;

	// song.h:74
	bool AlbumName(Attrib::TAttrib<const char*> &) const;

	// song.h:75
	bool AlbumName(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// song.h:76
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & AlbumName() const;

	// song.h:77
	bool Set_AlbumName(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// song.h:81
	bool ArtistName(Attrib::TAttrib<const char*> &) const;

	// song.h:82
	bool ArtistName(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// song.h:83
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & ArtistName() const;

	// song.h:84
	bool Set_ArtistName(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// song.h:88
	bool Hint(Attrib::TAttrib<AttribSys::Enums::eSongHint::eSongHint> &) const;

	// song.h:89
	bool Hint(AttribSys::Enums::eSongHint::eSongHint &) const;

	// song.h:90
	const AttribSys::Enums::eSongHint::eSongHint & Hint() const;

	// song.h:91
	bool Set_Hint(const AttribSys::Enums::eSongHint::eSongHint &);

	// song.h:95
	bool StreamName(Attrib::TAttrib<const char*> &) const;

	// song.h:96
	bool StreamName(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// song.h:97
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & StreamName() const;

	// song.h:98
	bool Set_StreamName(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// song.h:102
	bool TrackName(Attrib::TAttrib<const char*> &) const;

	// song.h:103
	bool TrackName(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// song.h:104
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & TrackName() const;

	// song.h:105
	bool Set_TrackName(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

private:
	// song.h:120
	unsigned int GetLayoutSize();

	// song.h:123
	song & ConvertFromInstance(Instance &);

	// song.h:124
	const song & ConvertFromInstance(const Attrib::Instance &);

}

