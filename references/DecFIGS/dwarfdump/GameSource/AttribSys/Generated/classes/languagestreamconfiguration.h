// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// languagestreamconfiguration.h:104
		namespace languagestreamconfiguration {
			// languagestreamconfiguration.h:106
			const Attribute::Key ContentSpecs = 337666280;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// languagestreamconfiguration.h:100
		const Attribute::Key languagestreamconfiguration = [0, 0, 0, 0, 213, 12, 193, 240];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct languagestreamconfiguration {
			// languagestreamconfiguration.h:84
			struct _LayoutStruct {
				// languagestreamconfiguration.h:85
				Private _Array_ContentSpecs;

				// languagestreamconfiguration.h:86
				Attrib::Gen::iceanim::_LayoutStruct::UInt32[6] ContentSpecs;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// languagestreamconfiguration.h:104
		namespace languagestreamconfiguration {
			// languagestreamconfiguration.h:106
			const Attribute::Key ContentSpecs = 337666280;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// languagestreamconfiguration.h:100
		const Attribute::Key languagestreamconfiguration = [0, 0, 0, 0, 213, 12, 193, 240];

	}

}

// languagestreamconfiguration.h:13
struct Attrib::Gen::languagestreamconfiguration : Instance {
public:
	// languagestreamconfiguration.h:15
	Attribute::Key ClassKey();

	// languagestreamconfiguration.h:17
	void * operator new(size_t);

	// languagestreamconfiguration.h:17
	void operator delete(void *, size_t);

	// languagestreamconfiguration.h:17
	void * operator new(size_t, void *);

	// languagestreamconfiguration.h:17
	void operator delete(void *, void *);

	// languagestreamconfiguration.h:18
	void languagestreamconfiguration(const Attrib::Collection *, uint32_t);

	// languagestreamconfiguration.h:19
	void languagestreamconfiguration(const languagestreamconfiguration &);

	// languagestreamconfiguration.h:20
	void languagestreamconfiguration(const Attrib::Instance &);

	// languagestreamconfiguration.h:21
	void languagestreamconfiguration(const Attrib::RefSpec &, uint32_t);

	// languagestreamconfiguration.h:22
	void languagestreamconfiguration(Attribute::Key, uint32_t);

	// languagestreamconfiguration.h:23
	void ~languagestreamconfiguration();

	// languagestreamconfiguration.h:25
	Attribute::Key GetClass() const;

	// languagestreamconfiguration.h:27
	Instance & GetBase();

	// languagestreamconfiguration.h:28
	const Attrib::Instance & GetBase() const;

	// languagestreamconfiguration.h:30
	void Modify(Attribute::Key, unsigned int);

	// languagestreamconfiguration.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// languagestreamconfiguration.h:32
	void Change(const Attrib::Collection *);

	// languagestreamconfiguration.h:33
	void Change(const Attrib::RefSpec &);

	// languagestreamconfiguration.h:34
	void Change(Attribute::Key);

	// languagestreamconfiguration.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// languagestreamconfiguration.h:36
	void ChangeWithDefault(Attribute::Key);

	// languagestreamconfiguration.h:38
	const languagestreamconfiguration & operator=(const languagestreamconfiguration &);

	// languagestreamconfiguration.h:39
	const languagestreamconfiguration & operator=(const Attrib::Instance &);

	// languagestreamconfiguration.h:40
	bool operator==(const languagestreamconfiguration &) const;

	// languagestreamconfiguration.h:41
	bool operator==(const Attrib::Instance &) const;

	// languagestreamconfiguration.h:42
	bool operator!=(const languagestreamconfiguration &) const;

	// languagestreamconfiguration.h:43
	bool operator!=(const Attrib::Instance &) const;

	// languagestreamconfiguration.h:73
	bool ContentSpecs(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// languagestreamconfiguration.h:74
	bool ContentSpecs(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int) const;

	// languagestreamconfiguration.h:75
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & ContentSpecs(unsigned int) const;

	// languagestreamconfiguration.h:76
	unsigned int Num_ContentSpecs() const;

	// languagestreamconfiguration.h:77
	bool Set_ContentSpecs(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int);

private:
	// languagestreamconfiguration.h:89
	unsigned int GetLayoutSize();

	// languagestreamconfiguration.h:92
	languagestreamconfiguration & ConvertFromInstance(Instance &);

	// languagestreamconfiguration.h:93
	const languagestreamconfiguration & ConvertFromInstance(const Attrib::Instance &);

}

