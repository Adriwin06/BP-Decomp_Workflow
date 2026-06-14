// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// bloomasset.h:118
		namespace bloomasset {
			// bloomasset.h:120
			const Attribute::Key BloomLuminance = 2283065324;

			// bloomasset.h:121
			const Attribute::Key BloomThreshold = [0, 0, 0, 0, 72, 57, 179, 151];

			// bloomasset.h:122
			const Attribute::Key ColorMultiplicator = 3574551304;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// bloomasset.h:114
		const Attribute::Key bloomasset = [0, 0, 0, 0, 140, 253, 230, 19];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// bloomasset.h:118
		namespace bloomasset {
			// bloomasset.h:120
			const Attribute::Key BloomLuminance = 2283065324;

			// bloomasset.h:121
			const Attribute::Key BloomThreshold = [0, 0, 0, 0, 72, 57, 179, 151];

			// bloomasset.h:122
			const Attribute::Key ColorMultiplicator = 3574551304;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// bloomasset.h:114
		const Attribute::Key bloomasset = [0, 0, 0, 0, 140, 253, 230, 19];

	}

}

// bloomasset.h:13
struct Attrib::Gen::bloomasset : Instance {
public:
	// bloomasset.h:15
	Attribute::Key ClassKey();

	// bloomasset.h:17
	void * operator new(size_t);

	// bloomasset.h:17
	void operator delete(void *, size_t);

	// bloomasset.h:17
	void * operator new(size_t, void *);

	// bloomasset.h:17
	void operator delete(void *, void *);

	// bloomasset.h:18
	void bloomasset(const Attrib::Collection *, uint32_t);

	// bloomasset.h:19
	void bloomasset(const bloomasset &);

	// bloomasset.h:20
	void bloomasset(const Attrib::Instance &);

	// bloomasset.h:21
	void bloomasset(const Attrib::RefSpec &, uint32_t);

	// bloomasset.h:22
	void bloomasset(Attribute::Key, uint32_t);

	// bloomasset.h:23
	void ~bloomasset();

	// bloomasset.h:25
	Attribute::Key GetClass() const;

	// bloomasset.h:27
	Instance & GetBase();

	// bloomasset.h:28
	const Attrib::Instance & GetBase() const;

	// bloomasset.h:30
	void Modify(Attribute::Key, unsigned int);

	// bloomasset.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// bloomasset.h:32
	void Change(const Attrib::Collection *);

	// bloomasset.h:33
	void Change(const Attrib::RefSpec &);

	// bloomasset.h:34
	void Change(Attribute::Key);

	// bloomasset.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// bloomasset.h:36
	void ChangeWithDefault(Attribute::Key);

	// bloomasset.h:38
	const bloomasset & operator=(const bloomasset &);

	// bloomasset.h:39
	const bloomasset & operator=(const Attrib::Instance &);

	// bloomasset.h:40
	bool operator==(const bloomasset &) const;

	// bloomasset.h:41
	bool operator==(const Attrib::Instance &) const;

	// bloomasset.h:42
	bool operator!=(const bloomasset &) const;

	// bloomasset.h:43
	bool operator!=(const Attrib::Instance &) const;

	// bloomasset.h:73
	bool BloomLuminance(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// bloomasset.h:74
	bool BloomLuminance(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// bloomasset.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BloomLuminance() const;

	// bloomasset.h:76
	bool Set_BloomLuminance(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// bloomasset.h:80
	bool BloomThreshold(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// bloomasset.h:81
	bool BloomThreshold(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// bloomasset.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BloomThreshold() const;

	// bloomasset.h:83
	bool Set_BloomThreshold(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// bloomasset.h:87
	bool ColorMultiplicator(Attrib::TAttrib<rw::math::vpu::Vector4> &) const;

	// bloomasset.h:88
	bool ColorMultiplicator(Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &) const;

	// bloomasset.h:89
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 & ColorMultiplicator() const;

	// bloomasset.h:90
	bool Set_ColorMultiplicator(const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &);

private:
	// bloomasset.h:103
	unsigned int GetLayoutSize();

	// bloomasset.h:106
	bloomasset & ConvertFromInstance(Instance &);

	// bloomasset.h:107
	const bloomasset & ConvertFromInstance(const Attrib::Instance &);

}

