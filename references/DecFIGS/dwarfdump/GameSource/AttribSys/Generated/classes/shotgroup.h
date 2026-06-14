// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// shotgroup.h:98
		namespace shotgroup {
			// shotgroup.h:100
			const Attribute::Key ShotList = 354708297;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// shotgroup.h:94
		const Attribute::Key shotgroup = 948423623;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// shotgroup.h:98
		namespace shotgroup {
			// shotgroup.h:100
			const Attribute::Key ShotList = 354708297;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// shotgroup.h:94
		const Attribute::Key shotgroup = 948423623;

	}

}

// shotgroup.h:13
struct Attrib::Gen::shotgroup : Instance {
public:
	// shotgroup.h:15
	Attribute::Key ClassKey();

	// shotgroup.h:17
	void * operator new(size_t);

	// shotgroup.h:17
	void operator delete(void *, size_t);

	// shotgroup.h:17
	void * operator new(size_t, void *);

	// shotgroup.h:17
	void operator delete(void *, void *);

	// shotgroup.h:18
	void shotgroup(const Attrib::Collection *, uint32_t);

	// shotgroup.h:19
	void shotgroup(const shotgroup &);

	// shotgroup.h:20
	void shotgroup(const Attrib::Instance &);

	// shotgroup.h:21
	void shotgroup(const Attrib::RefSpec &, uint32_t);

	// shotgroup.h:22
	void shotgroup(Attribute::Key, uint32_t);

	// shotgroup.h:23
	void ~shotgroup();

	// shotgroup.h:25
	Attribute::Key GetClass() const;

	// shotgroup.h:27
	Instance & GetBase();

	// shotgroup.h:28
	const Attrib::Instance & GetBase() const;

	// shotgroup.h:30
	void Modify(Attribute::Key, unsigned int);

	// shotgroup.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// shotgroup.h:32
	void Change(const Attrib::Collection *);

	// shotgroup.h:33
	void Change(const Attrib::RefSpec &);

	// shotgroup.h:34
	void Change(Attribute::Key);

	// shotgroup.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// shotgroup.h:36
	void ChangeWithDefault(Attribute::Key);

	// shotgroup.h:38
	const shotgroup & operator=(const shotgroup &);

	// shotgroup.h:39
	const shotgroup & operator=(const Attrib::Instance &);

	// shotgroup.h:40
	bool operator==(const shotgroup &) const;

	// shotgroup.h:41
	bool operator==(const Attrib::Instance &) const;

	// shotgroup.h:42
	bool operator!=(const shotgroup &) const;

	// shotgroup.h:43
	bool operator!=(const Attrib::Instance &) const;

	// shotgroup.h:73
	bool ShotList(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// shotgroup.h:74
	bool ShotList(RefSpec &, unsigned int) const;

	// shotgroup.h:75
	const Attrib::RefSpec & ShotList(unsigned int) const;

	// shotgroup.h:76
	unsigned int Num_ShotList() const;

	// shotgroup.h:77
	bool Set_ShotList(const Attrib::RefSpec &, unsigned int);

private:
	// shotgroup.h:83
	unsigned int GetLayoutSize();

	// shotgroup.h:86
	shotgroup & ConvertFromInstance(Instance &);

	// shotgroup.h:87
	const shotgroup & ConvertFromInstance(const Attrib::Instance &);

}

