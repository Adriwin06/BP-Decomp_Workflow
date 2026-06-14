// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// passbybin.h:214
		namespace passbybin {
			// passbybin.h:216
			const Attribute::Key FirstBoostPassBy = 1215299641;

			// passbybin.h:217
			const Attribute::Key FirstPassBy = [0, 0, 0, 0, 189, 144, 46, 166];

			// passbybin.h:218
			const Attribute::Key LastBoostPassBy = [0, 0, 0, 0, 43, 44, 242, 165];

			// passbybin.h:219
			const Attribute::Key LastPassBy = [0, 0, 0, 0, 139, 191, 162, 43];

			// passbybin.h:220
			const Attribute::Key mFirstBoostPassBy = 274053560;

			// passbybin.h:221
			const Attribute::Key mFirstPassBy = [0, 0, 0, 0, 155, 175, 234, 178];

			// passbybin.h:222
			const Attribute::Key mLastBoostPassBy = [0, 0, 0, 0, 95, 216, 76, 111];

			// passbybin.h:223
			const Attribute::Key mLastPassBy = [0, 0, 0, 0, 195, 99, 1, 127];

			// passbybin.h:224
			const Attribute::Key PitchCurveBoost = 209056102;

			// passbybin.h:225
			const Attribute::Key PitchCurveNormal = 2788119105;

			// passbybin.h:226
			const Attribute::Key TriggerRadius = [0, 0, 0, 0, 16, 1, 182, 176];

			// passbybin.h:227
			const Attribute::Key VelocityThreshold_Max = [0, 0, 0, 0, 252, 74, 216, 14];

			// passbybin.h:228
			const Attribute::Key VelocityThreshold_Min = [0, 0, 0, 0, 2, 46, 16, 104];

			// passbybin.h:229
			const Attribute::Key VolumeBoost = 3630323193;

			// passbybin.h:230
			const Attribute::Key VolumeNormal = [0, 0, 0, 0, 67, 155, 246, 12];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// passbybin.h:210
		const Attribute::Key passbybin = [0, 0, 0, 0, 110, 132, 23, 115];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// passbybin.h:214
		namespace passbybin {
			// passbybin.h:216
			const Attribute::Key FirstBoostPassBy = 1215299641;

			// passbybin.h:217
			const Attribute::Key FirstPassBy = [0, 0, 0, 0, 189, 144, 46, 166];

			// passbybin.h:218
			const Attribute::Key LastBoostPassBy = [0, 0, 0, 0, 43, 44, 242, 165];

			// passbybin.h:219
			const Attribute::Key LastPassBy = [0, 0, 0, 0, 139, 191, 162, 43];

			// passbybin.h:220
			const Attribute::Key mFirstBoostPassBy = 274053560;

			// passbybin.h:221
			const Attribute::Key mFirstPassBy = [0, 0, 0, 0, 155, 175, 234, 178];

			// passbybin.h:222
			const Attribute::Key mLastBoostPassBy = [0, 0, 0, 0, 95, 216, 76, 111];

			// passbybin.h:223
			const Attribute::Key mLastPassBy = [0, 0, 0, 0, 195, 99, 1, 127];

			// passbybin.h:224
			const Attribute::Key PitchCurveBoost = 209056102;

			// passbybin.h:225
			const Attribute::Key PitchCurveNormal = 2788119105;

			// passbybin.h:226
			const Attribute::Key TriggerRadius = [0, 0, 0, 0, 16, 1, 182, 176];

			// passbybin.h:227
			const Attribute::Key VelocityThreshold_Max = [0, 0, 0, 0, 252, 74, 216, 14];

			// passbybin.h:228
			const Attribute::Key VelocityThreshold_Min = [0, 0, 0, 0, 2, 46, 16, 104];

			// passbybin.h:229
			const Attribute::Key VolumeBoost = 3630323193;

			// passbybin.h:230
			const Attribute::Key VolumeNormal = [0, 0, 0, 0, 67, 155, 246, 12];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// passbybin.h:210
		const Attribute::Key passbybin = [0, 0, 0, 0, 110, 132, 23, 115];

	}

}

// passbybin.h:13
struct Attrib::Gen::passbybin : Instance {
public:
	// passbybin.h:15
	Attribute::Key ClassKey();

	// passbybin.h:17
	void * operator new(size_t);

	// passbybin.h:17
	void operator delete(void *, size_t);

	// passbybin.h:17
	void * operator new(size_t, void *);

	// passbybin.h:17
	void operator delete(void *, void *);

	// passbybin.h:18
	void passbybin(const Attrib::Collection *, uint32_t);

	// passbybin.h:19
	void passbybin(const passbybin &);

	// passbybin.h:20
	void passbybin(const Attrib::Instance &);

	// passbybin.h:21
	void passbybin(const Attrib::RefSpec &, uint32_t);

	// passbybin.h:22
	void passbybin(Attribute::Key, uint32_t);

	// passbybin.h:23
	void ~passbybin();

	// passbybin.h:25
	Attribute::Key GetClass() const;

	// passbybin.h:27
	Instance & GetBase();

	// passbybin.h:28
	const Attrib::Instance & GetBase() const;

	// passbybin.h:30
	void Modify(Attribute::Key, unsigned int);

	// passbybin.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// passbybin.h:32
	void Change(const Attrib::Collection *);

	// passbybin.h:33
	void Change(const Attrib::RefSpec &);

	// passbybin.h:34
	void Change(Attribute::Key);

	// passbybin.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// passbybin.h:36
	void ChangeWithDefault(Attribute::Key);

	// passbybin.h:38
	const passbybin & operator=(const passbybin &);

	// passbybin.h:39
	const passbybin & operator=(const Attrib::Instance &);

	// passbybin.h:40
	bool operator==(const passbybin &) const;

	// passbybin.h:41
	bool operator==(const Attrib::Instance &) const;

	// passbybin.h:42
	bool operator!=(const passbybin &) const;

	// passbybin.h:43
	bool operator!=(const Attrib::Instance &) const;

	// passbybin.h:73
	bool FirstBoostPassBy(Attrib::TAttrib<const char*> &) const;

	// passbybin.h:74
	bool FirstBoostPassBy(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// passbybin.h:75
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & FirstBoostPassBy() const;

	// passbybin.h:76
	bool Set_FirstBoostPassBy(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// passbybin.h:80
	bool FirstPassBy(Attrib::TAttrib<const char*> &) const;

	// passbybin.h:81
	bool FirstPassBy(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// passbybin.h:82
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & FirstPassBy() const;

	// passbybin.h:83
	bool Set_FirstPassBy(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// passbybin.h:87
	bool LastBoostPassBy(Attrib::TAttrib<const char*> &) const;

	// passbybin.h:88
	bool LastBoostPassBy(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// passbybin.h:89
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & LastBoostPassBy() const;

	// passbybin.h:90
	bool Set_LastBoostPassBy(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// passbybin.h:94
	bool LastPassBy(Attrib::TAttrib<const char*> &) const;

	// passbybin.h:95
	bool LastPassBy(Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// passbybin.h:96
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & LastPassBy() const;

	// passbybin.h:97
	bool Set_LastPassBy(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// passbybin.h:101
	bool mFirstBoostPassBy(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// passbybin.h:102
	bool mFirstBoostPassBy(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// passbybin.h:103
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mFirstBoostPassBy() const;

	// passbybin.h:104
	bool Set_mFirstBoostPassBy(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// passbybin.h:108
	bool mFirstPassBy(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// passbybin.h:109
	bool mFirstPassBy(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// passbybin.h:110
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mFirstPassBy() const;

	// passbybin.h:111
	bool Set_mFirstPassBy(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// passbybin.h:115
	bool mLastBoostPassBy(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// passbybin.h:116
	bool mLastBoostPassBy(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// passbybin.h:117
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mLastBoostPassBy() const;

	// passbybin.h:118
	bool Set_mLastBoostPassBy(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// passbybin.h:122
	bool mLastPassBy(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// passbybin.h:123
	bool mLastPassBy(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// passbybin.h:124
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & mLastPassBy() const;

	// passbybin.h:125
	bool Set_mLastPassBy(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// passbybin.h:129
	bool PitchCurveBoost(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// passbybin.h:130
	bool PitchCurveBoost(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// passbybin.h:131
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & PitchCurveBoost() const;

	// passbybin.h:132
	bool Set_PitchCurveBoost(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

	// passbybin.h:136
	bool PitchCurveNormal(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// passbybin.h:137
	bool PitchCurveNormal(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// passbybin.h:138
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & PitchCurveNormal() const;

	// passbybin.h:139
	bool Set_PitchCurveNormal(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

	// passbybin.h:143
	bool TriggerRadius(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// passbybin.h:144
	bool TriggerRadius(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// passbybin.h:145
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & TriggerRadius() const;

	// passbybin.h:146
	bool Set_TriggerRadius(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// passbybin.h:150
	bool VelocityThreshold_Max(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// passbybin.h:151
	bool VelocityThreshold_Max(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// passbybin.h:152
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & VelocityThreshold_Max() const;

	// passbybin.h:153
	bool Set_VelocityThreshold_Max(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// passbybin.h:157
	bool VelocityThreshold_Min(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// passbybin.h:158
	bool VelocityThreshold_Min(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// passbybin.h:159
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & VelocityThreshold_Min() const;

	// passbybin.h:160
	bool Set_VelocityThreshold_Min(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// passbybin.h:164
	bool VolumeBoost(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// passbybin.h:165
	bool VolumeBoost(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// passbybin.h:166
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & VolumeBoost() const;

	// passbybin.h:167
	bool Set_VolumeBoost(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

	// passbybin.h:171
	bool VolumeNormal(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// passbybin.h:172
	bool VolumeNormal(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// passbybin.h:173
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & VolumeNormal() const;

	// passbybin.h:174
	bool Set_VolumeNormal(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

private:
	// passbybin.h:199
	unsigned int GetLayoutSize();

	// passbybin.h:202
	passbybin & ConvertFromInstance(Instance &);

	// passbybin.h:203
	const passbybin & ConvertFromInstance(const Attrib::Instance &);

}

