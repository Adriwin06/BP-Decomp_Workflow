// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// b4blurasset.h:166
		namespace b4blurasset {
			// b4blurasset.h:168
			const Attribute::Key Angle = [0, 0, 0, 0, 41, 185, 6, 23];

			// b4blurasset.h:169
			const Attribute::Key BlendAmount = [0, 0, 0, 0, 244, 254, 29, 225];

			// b4blurasset.h:170
			const Attribute::Key BlendCenter = [0, 0, 0, 0, 95, 78, 32, 73];

			// b4blurasset.h:171
			const Attribute::Key BlurAmount = 233787705;

			// b4blurasset.h:172
			const Attribute::Key BlurCenter = [0, 0, 0, 0, 65, 175, 35, 62];

			// b4blurasset.h:173
			const Attribute::Key Noise = 3934959900;

			// b4blurasset.h:174
			const Attribute::Key Opacity = 1116289920;

			// b4blurasset.h:175
			const Attribute::Key Sharpness = 4122943693;

			// b4blurasset.h:176
			const Attribute::Key Velocity = 2150865316;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// b4blurasset.h:162
		const Attribute::Key b4blurasset = [0, 0, 0, 0, 115, 98, 216, 207];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// b4blurasset.h:166
		namespace b4blurasset {
			// b4blurasset.h:168
			const Attribute::Key Angle = [0, 0, 0, 0, 41, 185, 6, 23];

			// b4blurasset.h:169
			const Attribute::Key BlendAmount = [0, 0, 0, 0, 244, 254, 29, 225];

			// b4blurasset.h:170
			const Attribute::Key BlendCenter = [0, 0, 0, 0, 95, 78, 32, 73];

			// b4blurasset.h:171
			const Attribute::Key BlurAmount = 233787705;

			// b4blurasset.h:172
			const Attribute::Key BlurCenter = [0, 0, 0, 0, 65, 175, 35, 62];

			// b4blurasset.h:173
			const Attribute::Key Noise = 3934959900;

			// b4blurasset.h:174
			const Attribute::Key Opacity = 1116289920;

			// b4blurasset.h:175
			const Attribute::Key Sharpness = 4122943693;

			// b4blurasset.h:176
			const Attribute::Key Velocity = 2150865316;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// b4blurasset.h:162
		const Attribute::Key b4blurasset = [0, 0, 0, 0, 115, 98, 216, 207];

	}

}

// b4blurasset.h:13
struct Attrib::Gen::b4blurasset : Instance {
public:
	// b4blurasset.h:15
	Attribute::Key ClassKey();

	// b4blurasset.h:17
	void * operator new(size_t);

	// b4blurasset.h:17
	void operator delete(void *, size_t);

	// b4blurasset.h:17
	void * operator new(size_t, void *);

	// b4blurasset.h:17
	void operator delete(void *, void *);

	// b4blurasset.h:18
	void b4blurasset(const Attrib::Collection *, uint32_t);

	// b4blurasset.h:19
	void b4blurasset(const b4blurasset &);

	// b4blurasset.h:20
	void b4blurasset(const Attrib::Instance &);

	// b4blurasset.h:21
	void b4blurasset(const Attrib::RefSpec &, uint32_t);

	// b4blurasset.h:22
	void b4blurasset(Attribute::Key, uint32_t);

	// b4blurasset.h:23
	void ~b4blurasset();

	// b4blurasset.h:25
	Attribute::Key GetClass() const;

	// b4blurasset.h:27
	Instance & GetBase();

	// b4blurasset.h:28
	const Attrib::Instance & GetBase() const;

	// b4blurasset.h:30
	void Modify(Attribute::Key, unsigned int);

	// b4blurasset.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// b4blurasset.h:32
	void Change(const Attrib::Collection *);

	// b4blurasset.h:33
	void Change(const Attrib::RefSpec &);

	// b4blurasset.h:34
	void Change(Attribute::Key);

	// b4blurasset.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// b4blurasset.h:36
	void ChangeWithDefault(Attribute::Key);

	// b4blurasset.h:38
	const b4blurasset & operator=(const b4blurasset &);

	// b4blurasset.h:39
	const b4blurasset & operator=(const Attrib::Instance &);

	// b4blurasset.h:40
	bool operator==(const b4blurasset &) const;

	// b4blurasset.h:41
	bool operator==(const Attrib::Instance &) const;

	// b4blurasset.h:42
	bool operator!=(const b4blurasset &) const;

	// b4blurasset.h:43
	bool operator!=(const Attrib::Instance &) const;

	// b4blurasset.h:73
	bool Angle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// b4blurasset.h:74
	bool Angle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// b4blurasset.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Angle() const;

	// b4blurasset.h:76
	bool Set_Angle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// b4blurasset.h:80
	bool BlendAmount(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// b4blurasset.h:81
	bool BlendAmount(Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// b4blurasset.h:82
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & BlendAmount() const;

	// b4blurasset.h:83
	bool Set_BlendAmount(const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// b4blurasset.h:87
	bool BlendCenter(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// b4blurasset.h:88
	bool BlendCenter(Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// b4blurasset.h:89
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & BlendCenter() const;

	// b4blurasset.h:90
	bool Set_BlendCenter(const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// b4blurasset.h:94
	bool BlurAmount(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// b4blurasset.h:95
	bool BlurAmount(Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// b4blurasset.h:96
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & BlurAmount() const;

	// b4blurasset.h:97
	bool Set_BlurAmount(const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// b4blurasset.h:101
	bool BlurCenter(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// b4blurasset.h:102
	bool BlurCenter(Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// b4blurasset.h:103
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & BlurCenter() const;

	// b4blurasset.h:104
	bool Set_BlurCenter(const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// b4blurasset.h:108
	bool Noise(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// b4blurasset.h:109
	bool Noise(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// b4blurasset.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Noise() const;

	// b4blurasset.h:111
	bool Set_Noise(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// b4blurasset.h:115
	bool Opacity(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// b4blurasset.h:116
	bool Opacity(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// b4blurasset.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Opacity() const;

	// b4blurasset.h:118
	bool Set_Opacity(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// b4blurasset.h:122
	bool Sharpness(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// b4blurasset.h:123
	bool Sharpness(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// b4blurasset.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Sharpness() const;

	// b4blurasset.h:125
	bool Set_Sharpness(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// b4blurasset.h:129
	bool Velocity(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// b4blurasset.h:130
	bool Velocity(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// b4blurasset.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Velocity() const;

	// b4blurasset.h:132
	bool Set_Velocity(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// b4blurasset.h:151
	unsigned int GetLayoutSize();

	// b4blurasset.h:154
	b4blurasset & ConvertFromInstance(Instance &);

	// b4blurasset.h:155
	const b4blurasset & ConvertFromInstance(const Attrib::Instance &);

}

