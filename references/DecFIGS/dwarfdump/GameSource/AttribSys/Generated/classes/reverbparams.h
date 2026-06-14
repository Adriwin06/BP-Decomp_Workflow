// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// reverbparams.h:126
		namespace reverbparams {
			// reverbparams.h:128
			const Attribute::Key Brightness = [0, 0, 0, 0, 26, 221, 23, 89];

			// reverbparams.h:129
			const Attribute::Key Gain = [0, 0, 0, 0, 69, 58, 214, 156];

			// reverbparams.h:130
			const Attribute::Key SpaceSize = [0, 0, 0, 0, 108, 106, 136, 135];

			// reverbparams.h:131
			const Attribute::Key Time = 3911256564;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// reverbparams.h:122
		const Attribute::Key reverbparams = [0, 0, 0, 0, 99, 182, 42, 136];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// reverbparams.h:126
		namespace reverbparams {
			// reverbparams.h:128
			const Attribute::Key Brightness = [0, 0, 0, 0, 26, 221, 23, 89];

			// reverbparams.h:129
			const Attribute::Key Gain = [0, 0, 0, 0, 69, 58, 214, 156];

			// reverbparams.h:130
			const Attribute::Key SpaceSize = [0, 0, 0, 0, 108, 106, 136, 135];

			// reverbparams.h:131
			const Attribute::Key Time = 3911256564;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// reverbparams.h:122
		const Attribute::Key reverbparams = [0, 0, 0, 0, 99, 182, 42, 136];

	}

}

// reverbparams.h:13
struct Attrib::Gen::reverbparams : Instance {
public:
	// reverbparams.h:15
	Attribute::Key ClassKey();

	// reverbparams.h:17
	void * operator new(size_t);

	// reverbparams.h:17
	void operator delete(void *, size_t);

	// reverbparams.h:17
	void * operator new(size_t, void *);

	// reverbparams.h:17
	void operator delete(void *, void *);

	// reverbparams.h:18
	void reverbparams(const Attrib::Collection *, uint32_t);

	// reverbparams.h:19
	void reverbparams(const reverbparams &);

	// reverbparams.h:20
	void reverbparams(const Attrib::Instance &);

	// reverbparams.h:21
	void reverbparams(const Attrib::RefSpec &, uint32_t);

	// reverbparams.h:22
	void reverbparams(Attribute::Key, uint32_t);

	// reverbparams.h:23
	void ~reverbparams();

	// reverbparams.h:25
	Attribute::Key GetClass() const;

	// reverbparams.h:27
	Instance & GetBase();

	// reverbparams.h:28
	const Attrib::Instance & GetBase() const;

	// reverbparams.h:30
	void Modify(Attribute::Key, unsigned int);

	// reverbparams.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// reverbparams.h:32
	void Change(const Attrib::Collection *);

	// reverbparams.h:33
	void Change(const Attrib::RefSpec &);

	// reverbparams.h:34
	void Change(Attribute::Key);

	// reverbparams.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// reverbparams.h:36
	void ChangeWithDefault(Attribute::Key);

	// reverbparams.h:38
	const reverbparams & operator=(const reverbparams &);

	// reverbparams.h:39
	const reverbparams & operator=(const Attrib::Instance &);

	// reverbparams.h:40
	bool operator==(const reverbparams &) const;

	// reverbparams.h:41
	bool operator==(const Attrib::Instance &) const;

	// reverbparams.h:42
	bool operator!=(const reverbparams &) const;

	// reverbparams.h:43
	bool operator!=(const Attrib::Instance &) const;

	// reverbparams.h:73
	bool Brightness(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// reverbparams.h:74
	bool Brightness(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// reverbparams.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Brightness() const;

	// reverbparams.h:76
	bool Set_Brightness(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// reverbparams.h:80
	bool Gain(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// reverbparams.h:81
	bool Gain(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// reverbparams.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Gain() const;

	// reverbparams.h:83
	bool Set_Gain(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// reverbparams.h:87
	bool SpaceSize(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// reverbparams.h:88
	bool SpaceSize(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// reverbparams.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpaceSize() const;

	// reverbparams.h:90
	bool Set_SpaceSize(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// reverbparams.h:94
	bool Time(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// reverbparams.h:95
	bool Time(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// reverbparams.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Time() const;

	// reverbparams.h:97
	bool Set_Time(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// reverbparams.h:111
	unsigned int GetLayoutSize();

	// reverbparams.h:114
	reverbparams & ConvertFromInstance(Instance &);

	// reverbparams.h:115
	const reverbparams & ConvertFromInstance(const Attrib::Instance &);

}

