// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// aftertouchcam.h:142
		namespace aftertouchcam {
			// aftertouchcam.h:144
			const Attribute::Key FOV = 590766015;

			// aftertouchcam.h:145
			const Attribute::Key MaxDistance = [0, 0, 0, 0, 102, 35, 29, 118];

			// aftertouchcam.h:146
			const Attribute::Key MaxHeight = 1715538016;

			// aftertouchcam.h:147
			const Attribute::Key MinDistance = 3287930793;

			// aftertouchcam.h:148
			const Attribute::Key MinHeight = [0, 0, 0, 0, 186, 27, 41, 230];

			// aftertouchcam.h:149
			const Attribute::Key Pitch = [0, 0, 0, 0, 240, 72, 241, 123];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// aftertouchcam.h:138
		const Attribute::Key aftertouchcam = 1663273174;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// aftertouchcam.h:142
		namespace aftertouchcam {
			// aftertouchcam.h:144
			const Attribute::Key FOV = 590766015;

			// aftertouchcam.h:145
			const Attribute::Key MaxDistance = [0, 0, 0, 0, 102, 35, 29, 118];

			// aftertouchcam.h:146
			const Attribute::Key MaxHeight = 1715538016;

			// aftertouchcam.h:147
			const Attribute::Key MinDistance = 3287930793;

			// aftertouchcam.h:148
			const Attribute::Key MinHeight = [0, 0, 0, 0, 186, 27, 41, 230];

			// aftertouchcam.h:149
			const Attribute::Key Pitch = [0, 0, 0, 0, 240, 72, 241, 123];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// aftertouchcam.h:138
		const Attribute::Key aftertouchcam = 1663273174;

	}

}

// aftertouchcam.h:13
struct Attrib::Gen::aftertouchcam : Instance {
public:
	// aftertouchcam.h:15
	Attribute::Key ClassKey();

	// aftertouchcam.h:17
	void * operator new(size_t);

	// aftertouchcam.h:17
	void operator delete(void *, size_t);

	// aftertouchcam.h:17
	void * operator new(size_t, void *);

	// aftertouchcam.h:17
	void operator delete(void *, void *);

	// aftertouchcam.h:18
	void aftertouchcam(const Attrib::Collection *, uint32_t);

	// aftertouchcam.h:19
	void aftertouchcam(const aftertouchcam &);

	// aftertouchcam.h:20
	void aftertouchcam(const Attrib::Instance &);

	// aftertouchcam.h:21
	void aftertouchcam(const Attrib::RefSpec &, uint32_t);

	// aftertouchcam.h:22
	void aftertouchcam(Attribute::Key, uint32_t);

	// aftertouchcam.h:23
	void ~aftertouchcam();

	// aftertouchcam.h:25
	Attribute::Key GetClass() const;

	// aftertouchcam.h:27
	Instance & GetBase();

	// aftertouchcam.h:28
	const Attrib::Instance & GetBase() const;

	// aftertouchcam.h:30
	void Modify(Attribute::Key, unsigned int);

	// aftertouchcam.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// aftertouchcam.h:32
	void Change(const Attrib::Collection *);

	// aftertouchcam.h:33
	void Change(const Attrib::RefSpec &);

	// aftertouchcam.h:34
	void Change(Attribute::Key);

	// aftertouchcam.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// aftertouchcam.h:36
	void ChangeWithDefault(Attribute::Key);

	// aftertouchcam.h:38
	const aftertouchcam & operator=(const aftertouchcam &);

	// aftertouchcam.h:39
	const aftertouchcam & operator=(const Attrib::Instance &);

	// aftertouchcam.h:40
	bool operator==(const aftertouchcam &) const;

	// aftertouchcam.h:41
	bool operator==(const Attrib::Instance &) const;

	// aftertouchcam.h:42
	bool operator!=(const aftertouchcam &) const;

	// aftertouchcam.h:43
	bool operator!=(const Attrib::Instance &) const;

	// aftertouchcam.h:73
	bool FOV(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// aftertouchcam.h:74
	bool FOV(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// aftertouchcam.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & FOV() const;

	// aftertouchcam.h:76
	bool Set_FOV(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// aftertouchcam.h:80
	bool MaxDistance(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// aftertouchcam.h:81
	bool MaxDistance(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// aftertouchcam.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxDistance() const;

	// aftertouchcam.h:83
	bool Set_MaxDistance(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// aftertouchcam.h:87
	bool MaxHeight(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// aftertouchcam.h:88
	bool MaxHeight(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// aftertouchcam.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxHeight() const;

	// aftertouchcam.h:90
	bool Set_MaxHeight(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// aftertouchcam.h:94
	bool MinDistance(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// aftertouchcam.h:95
	bool MinDistance(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// aftertouchcam.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MinDistance() const;

	// aftertouchcam.h:97
	bool Set_MinDistance(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// aftertouchcam.h:101
	bool MinHeight(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// aftertouchcam.h:102
	bool MinHeight(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// aftertouchcam.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MinHeight() const;

	// aftertouchcam.h:104
	bool Set_MinHeight(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// aftertouchcam.h:108
	bool Pitch(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// aftertouchcam.h:109
	bool Pitch(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// aftertouchcam.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Pitch() const;

	// aftertouchcam.h:111
	bool Set_Pitch(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// aftertouchcam.h:127
	unsigned int GetLayoutSize();

	// aftertouchcam.h:130
	aftertouchcam & ConvertFromInstance(Instance &);

	// aftertouchcam.h:131
	const aftertouchcam & ConvertFromInstance(const Attrib::Instance &);

}

