// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// languagestreamcollection.h:98
		namespace languagestreamcollection {
			// languagestreamcollection.h:100
			const Attribute::Key Items = 2329451857;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// languagestreamcollection.h:94
		const Attribute::Key languagestreamcollection = 1573411476;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// languagestreamcollection.h:98
		namespace languagestreamcollection {
			// languagestreamcollection.h:100
			const Attribute::Key Items = 2329451857;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// languagestreamcollection.h:94
		const Attribute::Key languagestreamcollection = 1573411476;

	}

}

// languagestreamcollection.h:13
struct Attrib::Gen::languagestreamcollection : Instance {
public:
	// languagestreamcollection.h:15
	Attribute::Key ClassKey();

	// languagestreamcollection.h:17
	void * operator new(size_t);

	// languagestreamcollection.h:17
	void operator delete(void *, size_t);

	// languagestreamcollection.h:17
	void * operator new(size_t, void *);

	// languagestreamcollection.h:17
	void operator delete(void *, void *);

	// languagestreamcollection.h:18
	void languagestreamcollection(const Attrib::Collection *, uint32_t);

	// languagestreamcollection.h:19
	void languagestreamcollection(const languagestreamcollection &);

	// languagestreamcollection.h:20
	void languagestreamcollection(const Attrib::Instance &);

	// languagestreamcollection.h:21
	void languagestreamcollection(const Attrib::RefSpec &, uint32_t);

	// languagestreamcollection.h:22
	void languagestreamcollection(Attribute::Key, uint32_t);

	// languagestreamcollection.h:23
	void ~languagestreamcollection();

	// languagestreamcollection.h:25
	Attribute::Key GetClass() const;

	// languagestreamcollection.h:27
	Instance & GetBase();

	// languagestreamcollection.h:28
	const Attrib::Instance & GetBase() const;

	// languagestreamcollection.h:30
	void Modify(Attribute::Key, unsigned int);

	// languagestreamcollection.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// languagestreamcollection.h:32
	void Change(const Attrib::Collection *);

	// languagestreamcollection.h:33
	void Change(const Attrib::RefSpec &);

	// languagestreamcollection.h:34
	void Change(Attribute::Key);

	// languagestreamcollection.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// languagestreamcollection.h:36
	void ChangeWithDefault(Attribute::Key);

	// languagestreamcollection.h:38
	const languagestreamcollection & operator=(const languagestreamcollection &);

	// languagestreamcollection.h:39
	const languagestreamcollection & operator=(const Attrib::Instance &);

	// languagestreamcollection.h:40
	bool operator==(const languagestreamcollection &) const;

	// languagestreamcollection.h:41
	bool operator==(const Attrib::Instance &) const;

	// languagestreamcollection.h:42
	bool operator!=(const languagestreamcollection &) const;

	// languagestreamcollection.h:43
	bool operator!=(const Attrib::Instance &) const;

	// languagestreamcollection.h:73
	bool Items(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// languagestreamcollection.h:74
	bool Items(RefSpec &, unsigned int) const;

	// languagestreamcollection.h:75
	const Attrib::RefSpec & Items(unsigned int) const;

	// languagestreamcollection.h:76
	unsigned int Num_Items() const;

	// languagestreamcollection.h:77
	bool Set_Items(const Attrib::RefSpec &, unsigned int);

private:
	// languagestreamcollection.h:83
	unsigned int GetLayoutSize();

	// languagestreamcollection.h:86
	languagestreamcollection & ConvertFromInstance(Instance &);

	// languagestreamcollection.h:87
	const languagestreamcollection & ConvertFromInstance(const Attrib::Instance &);

}

