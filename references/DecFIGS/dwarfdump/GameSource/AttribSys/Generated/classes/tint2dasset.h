// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// tint2dasset.h:102
		namespace tint2dasset {
			// tint2dasset.h:104
			const Attribute::Key Colour = [0, 0, 0, 0, 138, 213, 70, 245];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// tint2dasset.h:98
		const Attribute::Key tint2dasset = 746366090;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// tint2dasset.h:102
		namespace tint2dasset {
			// tint2dasset.h:104
			const Attribute::Key Colour = [0, 0, 0, 0, 138, 213, 70, 245];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// tint2dasset.h:98
		const Attribute::Key tint2dasset = 746366090;

	}

}

// tint2dasset.h:13
struct Attrib::Gen::tint2dasset : Instance {
public:
	// tint2dasset.h:15
	Attribute::Key ClassKey();

	// tint2dasset.h:17
	void * operator new(size_t);

	// tint2dasset.h:17
	void operator delete(void *, size_t);

	// tint2dasset.h:17
	void * operator new(size_t, void *);

	// tint2dasset.h:17
	void operator delete(void *, void *);

	// tint2dasset.h:18
	void tint2dasset(const Attrib::Collection *, uint32_t);

	// tint2dasset.h:19
	void tint2dasset(const tint2dasset &);

	// tint2dasset.h:20
	void tint2dasset(const Attrib::Instance &);

	// tint2dasset.h:21
	void tint2dasset(const Attrib::RefSpec &, uint32_t);

	// tint2dasset.h:22
	void tint2dasset(Attribute::Key, uint32_t);

	// tint2dasset.h:23
	void ~tint2dasset();

	// tint2dasset.h:25
	Attribute::Key GetClass() const;

	// tint2dasset.h:27
	Instance & GetBase();

	// tint2dasset.h:28
	const Attrib::Instance & GetBase() const;

	// tint2dasset.h:30
	void Modify(Attribute::Key, unsigned int);

	// tint2dasset.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// tint2dasset.h:32
	void Change(const Attrib::Collection *);

	// tint2dasset.h:33
	void Change(const Attrib::RefSpec &);

	// tint2dasset.h:34
	void Change(Attribute::Key);

	// tint2dasset.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// tint2dasset.h:36
	void ChangeWithDefault(Attribute::Key);

	// tint2dasset.h:38
	const tint2dasset & operator=(const tint2dasset &);

	// tint2dasset.h:39
	const tint2dasset & operator=(const Attrib::Instance &);

	// tint2dasset.h:40
	bool operator==(const tint2dasset &) const;

	// tint2dasset.h:41
	bool operator==(const Attrib::Instance &) const;

	// tint2dasset.h:42
	bool operator!=(const tint2dasset &) const;

	// tint2dasset.h:43
	bool operator!=(const Attrib::Instance &) const;

	// tint2dasset.h:73
	bool Colour(Attrib::TAttrib<rw::math::vpu::Vector4> &) const;

	// tint2dasset.h:74
	bool Colour(Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &) const;

	// tint2dasset.h:75
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 & Colour() const;

	// tint2dasset.h:76
	bool Set_Colour(const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &);

private:
	// tint2dasset.h:87
	unsigned int GetLayoutSize();

	// tint2dasset.h:90
	tint2dasset & ConvertFromInstance(Instance &);

	// tint2dasset.h:91
	const tint2dasset & ConvertFromInstance(const Attrib::Instance &);

}

