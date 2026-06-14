// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// surfacelist.h:110
		namespace surfacelist {
			// surfacelist.h:112
			const Attribute::Key DefaultSurface = 3721446684;

			// surfacelist.h:113
			const Attribute::Key Surfaces = 4091182879;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// surfacelist.h:106
		const Attribute::Key surfacelist = 2243282164;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// surfacelist.h:110
		namespace surfacelist {
			// surfacelist.h:112
			const Attribute::Key DefaultSurface = 3721446684;

			// surfacelist.h:113
			const Attribute::Key Surfaces = 4091182879;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// surfacelist.h:106
		const Attribute::Key surfacelist = 2243282164;

	}

}

// surfacelist.h:13
struct Attrib::Gen::surfacelist : Instance {
public:
	// surfacelist.h:15
	Attribute::Key ClassKey();

	// surfacelist.h:17
	void * operator new(size_t);

	// surfacelist.h:17
	void operator delete(void *, size_t);

	// surfacelist.h:17
	void * operator new(size_t, void *);

	// surfacelist.h:17
	void operator delete(void *, void *);

	// surfacelist.h:18
	void surfacelist(const Attrib::Collection *, uint32_t);

	// surfacelist.h:19
	void surfacelist(const surfacelist &);

	// surfacelist.h:20
	void surfacelist(const Attrib::Instance &);

	// surfacelist.h:21
	void surfacelist(const Attrib::RefSpec &, uint32_t);

	// surfacelist.h:22
	void surfacelist(Attribute::Key, uint32_t);

	// surfacelist.h:23
	void ~surfacelist();

	// surfacelist.h:25
	Attribute::Key GetClass() const;

	// surfacelist.h:27
	Instance & GetBase();

	// surfacelist.h:28
	const Attrib::Instance & GetBase() const;

	// surfacelist.h:30
	void Modify(Attribute::Key, unsigned int);

	// surfacelist.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// surfacelist.h:32
	void Change(const Attrib::Collection *);

	// surfacelist.h:33
	void Change(const Attrib::RefSpec &);

	// surfacelist.h:34
	void Change(Attribute::Key);

	// surfacelist.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// surfacelist.h:36
	void ChangeWithDefault(Attribute::Key);

	// surfacelist.h:38
	const surfacelist & operator=(const surfacelist &);

	// surfacelist.h:39
	const surfacelist & operator=(const Attrib::Instance &);

	// surfacelist.h:40
	bool operator==(const surfacelist &) const;

	// surfacelist.h:41
	bool operator==(const Attrib::Instance &) const;

	// surfacelist.h:42
	bool operator!=(const surfacelist &) const;

	// surfacelist.h:43
	bool operator!=(const Attrib::Instance &) const;

	// surfacelist.h:73
	bool DefaultSurface(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surfacelist.h:74
	bool DefaultSurface(RefSpec &) const;

	// surfacelist.h:75
	const Attrib::RefSpec & DefaultSurface() const;

	// surfacelist.h:76
	bool Set_DefaultSurface(const Attrib::RefSpec &);

	// surfacelist.h:80
	bool Surfaces(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// surfacelist.h:81
	bool Surfaces(RefSpec &, unsigned int) const;

	// surfacelist.h:82
	const Attrib::RefSpec & Surfaces(unsigned int) const;

	// surfacelist.h:83
	unsigned int Num_Surfaces() const;

	// surfacelist.h:84
	bool Set_Surfaces(const Attrib::RefSpec &, unsigned int);

private:
	// surfacelist.h:95
	unsigned int GetLayoutSize();

	// surfacelist.h:98
	surfacelist & ConvertFromInstance(Instance &);

	// surfacelist.h:99
	const surfacelist & ConvertFromInstance(const Attrib::Instance &);

}

