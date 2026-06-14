// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// streamsettings.h:106
		namespace streamsettings {
			// streamsettings.h:108
			const Attribute::Key ContentSpecs = 337666280;

			// streamsettings.h:109
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// streamsettings.h:102
		const Attribute::Key streamsettings = 2109924313;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// streamsettings.h:106
		namespace streamsettings {
			// streamsettings.h:108
			const Attribute::Key ContentSpecs = 337666280;

			// streamsettings.h:109
			const Attribute::Key Volumes = [0, 0, 0, 0, 123, 2, 124, 126];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// streamsettings.h:102
		const Attribute::Key streamsettings = 2109924313;

	}

}

// streamsettings.h:13
struct Attrib::Gen::streamsettings : Instance {
public:
	// streamsettings.h:15
	Attribute::Key ClassKey();

	// streamsettings.h:17
	void * operator new(size_t);

	// streamsettings.h:17
	void operator delete(void *, size_t);

	// streamsettings.h:17
	void * operator new(size_t, void *);

	// streamsettings.h:17
	void operator delete(void *, void *);

	// streamsettings.h:18
	void streamsettings(const Attrib::Collection *, uint32_t);

	// streamsettings.h:19
	void streamsettings(const streamsettings &);

	// streamsettings.h:20
	void streamsettings(const Attrib::Instance &);

	// streamsettings.h:21
	void streamsettings(const Attrib::RefSpec &, uint32_t);

	// streamsettings.h:22
	void streamsettings(Attribute::Key, uint32_t);

	// streamsettings.h:23
	void ~streamsettings();

	// streamsettings.h:25
	Attribute::Key GetClass() const;

	// streamsettings.h:27
	Instance & GetBase();

	// streamsettings.h:28
	const Attrib::Instance & GetBase() const;

	// streamsettings.h:30
	void Modify(Attribute::Key, unsigned int);

	// streamsettings.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// streamsettings.h:32
	void Change(const Attrib::Collection *);

	// streamsettings.h:33
	void Change(const Attrib::RefSpec &);

	// streamsettings.h:34
	void Change(Attribute::Key);

	// streamsettings.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// streamsettings.h:36
	void ChangeWithDefault(Attribute::Key);

	// streamsettings.h:38
	const streamsettings & operator=(const streamsettings &);

	// streamsettings.h:39
	const streamsettings & operator=(const Attrib::Instance &);

	// streamsettings.h:40
	bool operator==(const streamsettings &) const;

	// streamsettings.h:41
	bool operator==(const Attrib::Instance &) const;

	// streamsettings.h:42
	bool operator!=(const streamsettings &) const;

	// streamsettings.h:43
	bool operator!=(const Attrib::Instance &) const;

	// streamsettings.h:73
	bool ContentSpecs(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// streamsettings.h:74
	bool ContentSpecs(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int) const;

	// streamsettings.h:75
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & ContentSpecs(unsigned int) const;

	// streamsettings.h:76
	unsigned int Num_ContentSpecs() const;

	// streamsettings.h:77
	bool Set_ContentSpecs(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int);

	// streamsettings.h:81
	bool Volumes(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// streamsettings.h:82
	bool Volumes(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &, unsigned int) const;

	// streamsettings.h:83
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Volumes(unsigned int) const;

	// streamsettings.h:84
	unsigned int Num_Volumes() const;

	// streamsettings.h:85
	bool Set_Volumes(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &, unsigned int);

private:
	// streamsettings.h:91
	unsigned int GetLayoutSize();

	// streamsettings.h:94
	streamsettings & ConvertFromInstance(Instance &);

	// streamsettings.h:95
	const streamsettings & ConvertFromInstance(const Attrib::Instance &);

}

