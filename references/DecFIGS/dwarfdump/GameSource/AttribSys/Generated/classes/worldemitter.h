// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// worldemitter.h:118
		namespace worldemitter {
			// worldemitter.h:120
			const Attribute::Key AffectedByDoppler = [0, 0, 0, 0, 242, 243, 215, 191];

			// worldemitter.h:121
			const Attribute::Key EmitterName = [0, 0, 0, 0, 46, 50, 46, 177];

			// worldemitter.h:122
			const Attribute::Key IsStream = 3443683179;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// worldemitter.h:114
		const Attribute::Key worldemitter = 2576838257;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// worldemitter.h:118
		namespace worldemitter {
			// worldemitter.h:120
			const Attribute::Key AffectedByDoppler = [0, 0, 0, 0, 242, 243, 215, 191];

			// worldemitter.h:121
			const Attribute::Key EmitterName = [0, 0, 0, 0, 46, 50, 46, 177];

			// worldemitter.h:122
			const Attribute::Key IsStream = 3443683179;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// worldemitter.h:114
		const Attribute::Key worldemitter = 2576838257;

	}

}

// worldemitter.h:13
struct Attrib::Gen::worldemitter : Instance {
public:
	// worldemitter.h:15
	Attribute::Key ClassKey();

	// worldemitter.h:17
	void * operator new(size_t);

	// worldemitter.h:17
	void operator delete(void *, size_t);

	// worldemitter.h:17
	void * operator new(size_t, void *);

	// worldemitter.h:17
	void operator delete(void *, void *);

	// worldemitter.h:18
	void worldemitter(const Attrib::Collection *, uint32_t);

	// worldemitter.h:19
	void worldemitter(const worldemitter &);

	// worldemitter.h:20
	void worldemitter(const Attrib::Instance &);

	// worldemitter.h:21
	void worldemitter(const Attrib::RefSpec &, uint32_t);

	// worldemitter.h:22
	void worldemitter(Attribute::Key, uint32_t);

	// worldemitter.h:23
	void ~worldemitter();

	// worldemitter.h:25
	Attribute::Key GetClass() const;

	// worldemitter.h:27
	Instance & GetBase();

	// worldemitter.h:28
	const Attrib::Instance & GetBase() const;

	// worldemitter.h:30
	void Modify(Attribute::Key, unsigned int);

	// worldemitter.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// worldemitter.h:32
	void Change(const Attrib::Collection *);

	// worldemitter.h:33
	void Change(const Attrib::RefSpec &);

	// worldemitter.h:34
	void Change(Attribute::Key);

	// worldemitter.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// worldemitter.h:36
	void ChangeWithDefault(Attribute::Key);

	// worldemitter.h:38
	const worldemitter & operator=(const worldemitter &);

	// worldemitter.h:39
	const worldemitter & operator=(const Attrib::Instance &);

	// worldemitter.h:40
	bool operator==(const worldemitter &) const;

	// worldemitter.h:41
	bool operator==(const Attrib::Instance &) const;

	// worldemitter.h:42
	bool operator!=(const worldemitter &) const;

	// worldemitter.h:43
	bool operator!=(const Attrib::Instance &) const;

	// worldemitter.h:73
	bool AffectedByDoppler(Attrib::TAttrib<EA::Reflection::Bool> &) const;

	// worldemitter.h:74
	bool AffectedByDoppler(Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &) const;

	// worldemitter.h:75
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool & AffectedByDoppler() const;

	// worldemitter.h:76
	bool Set_AffectedByDoppler(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &);

	// worldemitter.h:80
	bool EmitterName(Attrib::TAttrib<const char*> &) const;

	// worldemitter.h:81
	bool EmitterName(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// worldemitter.h:82
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & EmitterName() const;

	// worldemitter.h:83
	bool Set_EmitterName(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// worldemitter.h:87
	bool IsStream(Attrib::TAttrib<EA::Reflection::Bool> &) const;

	// worldemitter.h:88
	bool IsStream(Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &) const;

	// worldemitter.h:89
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool & IsStream() const;

	// worldemitter.h:90
	bool Set_IsStream(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &);

private:
	// worldemitter.h:103
	unsigned int GetLayoutSize();

	// worldemitter.h:106
	worldemitter & ConvertFromInstance(Instance &);

	// worldemitter.h:107
	const worldemitter & ConvertFromInstance(const Attrib::Instance &);

}

