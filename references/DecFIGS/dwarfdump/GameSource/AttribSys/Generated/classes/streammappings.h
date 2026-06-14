// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// streammappings.h:106
		namespace streammappings {
			// streammappings.h:108
			const Attribute::Key LanguageStreamConfigurations = [0, 0, 0, 0, 104, 193, 84, 13];

			// streammappings.h:109
			const Attribute::Key UserStringsHashed = [0, 0, 0, 0, 195, 46, 26, 29];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// streammappings.h:102
		const Attribute::Key streammappings = [0, 0, 0, 0, 212, 20, 241, 249];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// streammappings.h:106
		namespace streammappings {
			// streammappings.h:108
			const Attribute::Key LanguageStreamConfigurations = [0, 0, 0, 0, 104, 193, 84, 13];

			// streammappings.h:109
			const Attribute::Key UserStringsHashed = [0, 0, 0, 0, 195, 46, 26, 29];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// streammappings.h:102
		const Attribute::Key streammappings = [0, 0, 0, 0, 212, 20, 241, 249];

	}

}

// streammappings.h:13
struct Attrib::Gen::streammappings : Instance {
public:
	// streammappings.h:15
	Attribute::Key ClassKey();

	// streammappings.h:17
	void * operator new(size_t);

	// streammappings.h:17
	void operator delete(void *, size_t);

	// streammappings.h:17
	void * operator new(size_t, void *);

	// streammappings.h:17
	void operator delete(void *, void *);

	// streammappings.h:18
	void streammappings(const Attrib::Collection *, uint32_t);

	// streammappings.h:19
	void streammappings(const streammappings &);

	// streammappings.h:20
	void streammappings(const Attrib::Instance &);

	// streammappings.h:21
	void streammappings(const Attrib::RefSpec &, uint32_t);

	// streammappings.h:22
	void streammappings(Attribute::Key, uint32_t);

	// streammappings.h:23
	void ~streammappings();

	// streammappings.h:25
	Attribute::Key GetClass() const;

	// streammappings.h:27
	Instance & GetBase();

	// streammappings.h:28
	const Attrib::Instance & GetBase() const;

	// streammappings.h:30
	void Modify(Attribute::Key, unsigned int);

	// streammappings.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// streammappings.h:32
	void Change(const Attrib::Collection *);

	// streammappings.h:33
	void Change(const Attrib::RefSpec &);

	// streammappings.h:34
	void Change(Attribute::Key);

	// streammappings.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// streammappings.h:36
	void ChangeWithDefault(Attribute::Key);

	// streammappings.h:38
	const streammappings & operator=(const streammappings &);

	// streammappings.h:39
	const streammappings & operator=(const Attrib::Instance &);

	// streammappings.h:40
	bool operator==(const streammappings &) const;

	// streammappings.h:41
	bool operator==(const Attrib::Instance &) const;

	// streammappings.h:42
	bool operator!=(const streammappings &) const;

	// streammappings.h:43
	bool operator!=(const Attrib::Instance &) const;

	// streammappings.h:73
	bool LanguageStreamConfigurations(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// streammappings.h:74
	bool LanguageStreamConfigurations(RefSpec &, unsigned int) const;

	// streammappings.h:75
	const Attrib::RefSpec & LanguageStreamConfigurations(unsigned int) const;

	// streammappings.h:76
	unsigned int Num_LanguageStreamConfigurations() const;

	// streammappings.h:77
	bool Set_LanguageStreamConfigurations(const Attrib::RefSpec &, unsigned int);

	// streammappings.h:81
	bool UserStringsHashed(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// streammappings.h:82
	bool UserStringsHashed(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int) const;

	// streammappings.h:83
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & UserStringsHashed(unsigned int) const;

	// streammappings.h:84
	unsigned int Num_UserStringsHashed() const;

	// streammappings.h:85
	bool Set_UserStringsHashed(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int);

private:
	// streammappings.h:91
	unsigned int GetLayoutSize();

	// streammappings.h:94
	streammappings & ConvertFromInstance(Instance &);

	// streammappings.h:95
	const streammappings & ConvertFromInstance(const Attrib::Instance &);

}

