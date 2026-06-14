// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// depthoffieldasset.h:134
		namespace depthoffieldasset {
			// depthoffieldasset.h:136
			const Attribute::Key Amount = [0, 0, 0, 0, 195, 137, 254, 86];

			// depthoffieldasset.h:137
			const Attribute::Key Pt1_NearPlane = 4109320197;

			// depthoffieldasset.h:138
			const Attribute::Key Pt2_FocalPlane = 3164423028;

			// depthoffieldasset.h:139
			const Attribute::Key Pt3_FocalPlane = 2446509859;

			// depthoffieldasset.h:140
			const Attribute::Key Pt4_FarPlane = [0, 0, 0, 0, 214, 220, 79, 211];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// depthoffieldasset.h:130
		const Attribute::Key depthoffieldasset = [0, 0, 0, 0, 30, 205, 116, 186];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// depthoffieldasset.h:134
		namespace depthoffieldasset {
			// depthoffieldasset.h:136
			const Attribute::Key Amount = [0, 0, 0, 0, 195, 137, 254, 86];

			// depthoffieldasset.h:137
			const Attribute::Key Pt1_NearPlane = 4109320197;

			// depthoffieldasset.h:138
			const Attribute::Key Pt2_FocalPlane = 3164423028;

			// depthoffieldasset.h:139
			const Attribute::Key Pt3_FocalPlane = 2446509859;

			// depthoffieldasset.h:140
			const Attribute::Key Pt4_FarPlane = [0, 0, 0, 0, 214, 220, 79, 211];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// depthoffieldasset.h:130
		const Attribute::Key depthoffieldasset = [0, 0, 0, 0, 30, 205, 116, 186];

	}

}

// depthoffieldasset.h:13
struct Attrib::Gen::depthoffieldasset : Instance {
public:
	// depthoffieldasset.h:15
	Attribute::Key ClassKey();

	// depthoffieldasset.h:17
	void * operator new(size_t);

	// depthoffieldasset.h:17
	void operator delete(void *, size_t);

	// depthoffieldasset.h:17
	void * operator new(size_t, void *);

	// depthoffieldasset.h:17
	void operator delete(void *, void *);

	// depthoffieldasset.h:18
	void depthoffieldasset(const Attrib::Collection *, uint32_t);

	// depthoffieldasset.h:19
	void depthoffieldasset(const depthoffieldasset &);

	// depthoffieldasset.h:20
	void depthoffieldasset(const Attrib::Instance &);

	// depthoffieldasset.h:21
	void depthoffieldasset(const Attrib::RefSpec &, uint32_t);

	// depthoffieldasset.h:22
	void depthoffieldasset(Attribute::Key, uint32_t);

	// depthoffieldasset.h:23
	void ~depthoffieldasset();

	// depthoffieldasset.h:25
	Attribute::Key GetClass() const;

	// depthoffieldasset.h:27
	Instance & GetBase();

	// depthoffieldasset.h:28
	const Attrib::Instance & GetBase() const;

	// depthoffieldasset.h:30
	void Modify(Attribute::Key, unsigned int);

	// depthoffieldasset.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// depthoffieldasset.h:32
	void Change(const Attrib::Collection *);

	// depthoffieldasset.h:33
	void Change(const Attrib::RefSpec &);

	// depthoffieldasset.h:34
	void Change(Attribute::Key);

	// depthoffieldasset.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// depthoffieldasset.h:36
	void ChangeWithDefault(Attribute::Key);

	// depthoffieldasset.h:38
	const depthoffieldasset & operator=(const depthoffieldasset &);

	// depthoffieldasset.h:39
	const depthoffieldasset & operator=(const Attrib::Instance &);

	// depthoffieldasset.h:40
	bool operator==(const depthoffieldasset &) const;

	// depthoffieldasset.h:41
	bool operator==(const Attrib::Instance &) const;

	// depthoffieldasset.h:42
	bool operator!=(const depthoffieldasset &) const;

	// depthoffieldasset.h:43
	bool operator!=(const Attrib::Instance &) const;

	// depthoffieldasset.h:73
	bool Amount(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// depthoffieldasset.h:74
	bool Amount(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// depthoffieldasset.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Amount() const;

	// depthoffieldasset.h:76
	bool Set_Amount(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// depthoffieldasset.h:80
	bool Pt1_NearPlane(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// depthoffieldasset.h:81
	bool Pt1_NearPlane(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// depthoffieldasset.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Pt1_NearPlane() const;

	// depthoffieldasset.h:83
	bool Set_Pt1_NearPlane(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// depthoffieldasset.h:87
	bool Pt2_FocalPlane(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// depthoffieldasset.h:88
	bool Pt2_FocalPlane(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// depthoffieldasset.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Pt2_FocalPlane() const;

	// depthoffieldasset.h:90
	bool Set_Pt2_FocalPlane(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// depthoffieldasset.h:94
	bool Pt3_FocalPlane(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// depthoffieldasset.h:95
	bool Pt3_FocalPlane(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// depthoffieldasset.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Pt3_FocalPlane() const;

	// depthoffieldasset.h:97
	bool Set_Pt3_FocalPlane(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// depthoffieldasset.h:101
	bool Pt4_FarPlane(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// depthoffieldasset.h:102
	bool Pt4_FarPlane(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// depthoffieldasset.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Pt4_FarPlane() const;

	// depthoffieldasset.h:104
	bool Set_Pt4_FarPlane(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// depthoffieldasset.h:119
	unsigned int GetLayoutSize();

	// depthoffieldasset.h:122
	depthoffieldasset & ConvertFromInstance(Instance &);

	// depthoffieldasset.h:123
	const depthoffieldasset & ConvertFromInstance(const Attrib::Instance &);

}

