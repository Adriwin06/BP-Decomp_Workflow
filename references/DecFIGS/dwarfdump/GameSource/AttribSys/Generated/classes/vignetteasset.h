// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// vignetteasset.h:142
		namespace vignetteasset {
			// vignetteasset.h:144
			const Attribute::Key Amount = [0, 0, 0, 0, 195, 137, 254, 86];

			// vignetteasset.h:145
			const Attribute::Key Angle = [0, 0, 0, 0, 41, 185, 6, 23];

			// vignetteasset.h:146
			const Attribute::Key Center = [0, 0, 0, 0, 128, 36, 127, 97];

			// vignetteasset.h:147
			const Attribute::Key InnerColour = [0, 0, 0, 0, 200, 221, 229, 30];

			// vignetteasset.h:148
			const Attribute::Key OuterColour = [0, 0, 0, 0, 116, 16, 161, 106];

			// vignetteasset.h:149
			const Attribute::Key Sharpness = 4122943693;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// vignetteasset.h:138
		const Attribute::Key vignetteasset = [0, 0, 0, 0, 156, 2, 183, 63];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct vignetteasset {
			// vignetteasset.h:118
			struct _LayoutStruct {
				// attribuserinclude.h:126
				typedef Vector2 RwVector2;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// vignetteasset.h:142
		namespace vignetteasset {
			// vignetteasset.h:144
			const Attribute::Key Amount = [0, 0, 0, 0, 195, 137, 254, 86];

			// vignetteasset.h:145
			const Attribute::Key Angle = [0, 0, 0, 0, 41, 185, 6, 23];

			// vignetteasset.h:146
			const Attribute::Key Center = [0, 0, 0, 0, 128, 36, 127, 97];

			// vignetteasset.h:147
			const Attribute::Key InnerColour = [0, 0, 0, 0, 200, 221, 229, 30];

			// vignetteasset.h:148
			const Attribute::Key OuterColour = [0, 0, 0, 0, 116, 16, 161, 106];

			// vignetteasset.h:149
			const Attribute::Key Sharpness = 4122943693;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// vignetteasset.h:138
		const Attribute::Key vignetteasset = [0, 0, 0, 0, 156, 2, 183, 63];

	}

}

// vignetteasset.h:13
struct Attrib::Gen::vignetteasset : Instance {
public:
	// vignetteasset.h:15
	Attribute::Key ClassKey();

	// vignetteasset.h:17
	void * operator new(size_t);

	// vignetteasset.h:17
	void operator delete(void *, size_t);

	// vignetteasset.h:17
	void * operator new(size_t, void *);

	// vignetteasset.h:17
	void operator delete(void *, void *);

	// vignetteasset.h:18
	void vignetteasset(const Attrib::Collection *, uint32_t);

	// vignetteasset.h:19
	void vignetteasset(const vignetteasset &);

	// vignetteasset.h:20
	void vignetteasset(const Attrib::Instance &);

	// vignetteasset.h:21
	void vignetteasset(const Attrib::RefSpec &, uint32_t);

	// vignetteasset.h:22
	void vignetteasset(Attribute::Key, uint32_t);

	// vignetteasset.h:23
	void ~vignetteasset();

	// vignetteasset.h:25
	Attribute::Key GetClass() const;

	// vignetteasset.h:27
	Instance & GetBase();

	// vignetteasset.h:28
	const Attrib::Instance & GetBase() const;

	// vignetteasset.h:30
	void Modify(Attribute::Key, unsigned int);

	// vignetteasset.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// vignetteasset.h:32
	void Change(const Attrib::Collection *);

	// vignetteasset.h:33
	void Change(const Attrib::RefSpec &);

	// vignetteasset.h:34
	void Change(Attribute::Key);

	// vignetteasset.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// vignetteasset.h:36
	void ChangeWithDefault(Attribute::Key);

	// vignetteasset.h:38
	const vignetteasset & operator=(const vignetteasset &);

	// vignetteasset.h:39
	const vignetteasset & operator=(const Attrib::Instance &);

	// vignetteasset.h:40
	bool operator==(const vignetteasset &) const;

	// vignetteasset.h:41
	bool operator==(const Attrib::Instance &) const;

	// vignetteasset.h:42
	bool operator!=(const vignetteasset &) const;

	// vignetteasset.h:43
	bool operator!=(const Attrib::Instance &) const;

	// vignetteasset.h:73
	bool Amount(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// vignetteasset.h:74
	bool Amount(Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// vignetteasset.h:75
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & Amount() const;

	// vignetteasset.h:76
	bool Set_Amount(const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// vignetteasset.h:80
	bool Angle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// vignetteasset.h:81
	bool Angle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// vignetteasset.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Angle() const;

	// vignetteasset.h:83
	bool Set_Angle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// vignetteasset.h:87
	bool Center(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// vignetteasset.h:88
	bool Center(Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// vignetteasset.h:89
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & Center() const;

	// vignetteasset.h:90
	bool Set_Center(const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// vignetteasset.h:94
	bool InnerColour(Attrib::TAttrib<rw::math::vpu::Vector4> &) const;

	// vignetteasset.h:95
	bool InnerColour(Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &) const;

	// vignetteasset.h:96
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 & InnerColour() const;

	// vignetteasset.h:97
	bool Set_InnerColour(const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &);

	// vignetteasset.h:101
	bool OuterColour(Attrib::TAttrib<rw::math::vpu::Vector4> &) const;

	// vignetteasset.h:102
	bool OuterColour(Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &) const;

	// vignetteasset.h:103
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 & OuterColour() const;

	// vignetteasset.h:104
	bool Set_OuterColour(const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &);

	// vignetteasset.h:108
	bool Sharpness(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// vignetteasset.h:109
	bool Sharpness(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// vignetteasset.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Sharpness() const;

	// vignetteasset.h:111
	bool Set_Sharpness(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// vignetteasset.h:127
	unsigned int GetLayoutSize();

	// vignetteasset.h:130
	vignetteasset & ConvertFromInstance(Instance &);

	// vignetteasset.h:131
	const vignetteasset & ConvertFromInstance(const Attrib::Instance &);

}

