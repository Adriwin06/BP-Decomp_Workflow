// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// physicsvehiclecollisionattribs.h:102
		namespace physicsvehiclecollisionattribs {
			// physicsvehiclecollisionattribs.h:104
			const Attribute::Key BodyBox = [0, 0, 0, 0, 191, 53, 254, 174];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// physicsvehiclecollisionattribs.h:98
		const Attribute::Key physicsvehiclecollisionattribs = [0, 0, 0, 0, 86, 143, 19, 140];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// physicsvehiclecollisionattribs.h:102
		namespace physicsvehiclecollisionattribs {
			// physicsvehiclecollisionattribs.h:104
			const Attribute::Key BodyBox = [0, 0, 0, 0, 191, 53, 254, 174];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// physicsvehiclecollisionattribs.h:98
		const Attribute::Key physicsvehiclecollisionattribs = [0, 0, 0, 0, 86, 143, 19, 140];

	}

}

// physicsvehiclecollisionattribs.h:13
struct Attrib::Gen::physicsvehiclecollisionattribs : Instance {
public:
	// physicsvehiclecollisionattribs.h:15
	Attribute::Key ClassKey();

	// physicsvehiclecollisionattribs.h:17
	void * operator new(size_t);

	// physicsvehiclecollisionattribs.h:17
	void operator delete(void *, size_t);

	// physicsvehiclecollisionattribs.h:17
	void * operator new(size_t, void *);

	// physicsvehiclecollisionattribs.h:17
	void operator delete(void *, void *);

	// physicsvehiclecollisionattribs.h:18
	void physicsvehiclecollisionattribs(const Attrib::Collection *, uint32_t);

	// physicsvehiclecollisionattribs.h:19
	void physicsvehiclecollisionattribs(const physicsvehiclecollisionattribs &);

	// physicsvehiclecollisionattribs.h:20
	void physicsvehiclecollisionattribs(const Attrib::Instance &);

	// physicsvehiclecollisionattribs.h:21
	void physicsvehiclecollisionattribs(const Attrib::RefSpec &, uint32_t);

	// physicsvehiclecollisionattribs.h:22
	void physicsvehiclecollisionattribs(Attribute::Key, uint32_t);

	// physicsvehiclecollisionattribs.h:23
	void ~physicsvehiclecollisionattribs();

	// physicsvehiclecollisionattribs.h:25
	Attribute::Key GetClass() const;

	// physicsvehiclecollisionattribs.h:27
	Instance & GetBase();

	// physicsvehiclecollisionattribs.h:28
	const Attrib::Instance & GetBase() const;

	// physicsvehiclecollisionattribs.h:30
	void Modify(Attribute::Key, unsigned int);

	// physicsvehiclecollisionattribs.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// physicsvehiclecollisionattribs.h:32
	void Change(const Attrib::Collection *);

	// physicsvehiclecollisionattribs.h:33
	void Change(const Attrib::RefSpec &);

	// physicsvehiclecollisionattribs.h:34
	void Change(Attribute::Key);

	// physicsvehiclecollisionattribs.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// physicsvehiclecollisionattribs.h:36
	void ChangeWithDefault(Attribute::Key);

	// physicsvehiclecollisionattribs.h:38
	const physicsvehiclecollisionattribs & operator=(const physicsvehiclecollisionattribs &);

	// physicsvehiclecollisionattribs.h:39
	const physicsvehiclecollisionattribs & operator=(const Attrib::Instance &);

	// physicsvehiclecollisionattribs.h:40
	bool operator==(const physicsvehiclecollisionattribs &) const;

	// physicsvehiclecollisionattribs.h:41
	bool operator==(const Attrib::Instance &) const;

	// physicsvehiclecollisionattribs.h:42
	bool operator!=(const physicsvehiclecollisionattribs &) const;

	// physicsvehiclecollisionattribs.h:43
	bool operator!=(const Attrib::Instance &) const;

	// physicsvehiclecollisionattribs.h:73
	bool BodyBox(Attrib::TAttrib<rw::math::vpu::Vector3> &) const;

	// physicsvehiclecollisionattribs.h:74
	bool BodyBox(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// physicsvehiclecollisionattribs.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & BodyBox() const;

	// physicsvehiclecollisionattribs.h:76
	bool Set_BodyBox(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

private:
	// physicsvehiclecollisionattribs.h:87
	unsigned int GetLayoutSize();

	// physicsvehiclecollisionattribs.h:90
	physicsvehiclecollisionattribs & ConvertFromInstance(Instance &);

	// physicsvehiclecollisionattribs.h:91
	const physicsvehiclecollisionattribs & ConvertFromInstance(const Attrib::Instance &);

}

