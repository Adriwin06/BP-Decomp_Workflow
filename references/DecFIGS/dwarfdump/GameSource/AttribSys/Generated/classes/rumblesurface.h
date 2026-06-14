// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// rumblesurface.h:214
		namespace rumblesurface {
			// rumblesurface.h:216
			const Attribute::Key LeftMotorAttackTime = 2010632496;

			// rumblesurface.h:217
			const Attribute::Key LeftMotorDecayTime = [0, 0, 0, 0, 144, 27, 80, 234];

			// rumblesurface.h:218
			const Attribute::Key LeftMotorPeakSpeed = [0, 0, 0, 0, 96, 249, 152, 19];

			// rumblesurface.h:219
			const Attribute::Key LeftMotorReleaseTime = [0, 0, 0, 0, 244, 150, 181, 117];

			// rumblesurface.h:220
			const Attribute::Key LeftMotorSustainSpeed = [0, 0, 0, 0, 123, 97, 144, 22];

			// rumblesurface.h:221
			const Attribute::Key LeftMotorSustainTime = 3373641534;

			// rumblesurface.h:222
			const Attribute::Key MaxSpeedForRumble = [0, 0, 0, 0, 236, 104, 243, 40];

			// rumblesurface.h:223
			const Attribute::Key MinSpeedForRumble = [0, 0, 0, 0, 194, 149, 169, 19];

			// rumblesurface.h:224
			const Attribute::Key RightMotorAttackTime = 1320925227;

			// rumblesurface.h:225
			const Attribute::Key RightMotorDecayTime = 2155371429;

			// rumblesurface.h:226
			const Attribute::Key RightMotorPeakSpeed = 3392838796;

			// rumblesurface.h:227
			const Attribute::Key RightMotorReleaseTime = [0, 0, 0, 0, 110, 178, 180, 171];

			// rumblesurface.h:228
			const Attribute::Key RightMotorSustainSpeed = [0, 0, 0, 0, 144, 124, 112, 186];

			// rumblesurface.h:229
			const Attribute::Key RightMotorSustainTime = 90937255;

			// rumblesurface.h:230
			const Attribute::Key RumblePriority = 3383945758;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// rumblesurface.h:210
		const Attribute::Key rumblesurface = 350453106;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// rumblesurface.h:214
		namespace rumblesurface {
			// rumblesurface.h:216
			const Attribute::Key LeftMotorAttackTime = 2010632496;

			// rumblesurface.h:217
			const Attribute::Key LeftMotorDecayTime = [0, 0, 0, 0, 144, 27, 80, 234];

			// rumblesurface.h:218
			const Attribute::Key LeftMotorPeakSpeed = [0, 0, 0, 0, 96, 249, 152, 19];

			// rumblesurface.h:219
			const Attribute::Key LeftMotorReleaseTime = [0, 0, 0, 0, 244, 150, 181, 117];

			// rumblesurface.h:220
			const Attribute::Key LeftMotorSustainSpeed = [0, 0, 0, 0, 123, 97, 144, 22];

			// rumblesurface.h:221
			const Attribute::Key LeftMotorSustainTime = 3373641534;

			// rumblesurface.h:222
			const Attribute::Key MaxSpeedForRumble = [0, 0, 0, 0, 236, 104, 243, 40];

			// rumblesurface.h:223
			const Attribute::Key MinSpeedForRumble = [0, 0, 0, 0, 194, 149, 169, 19];

			// rumblesurface.h:224
			const Attribute::Key RightMotorAttackTime = 1320925227;

			// rumblesurface.h:225
			const Attribute::Key RightMotorDecayTime = 2155371429;

			// rumblesurface.h:226
			const Attribute::Key RightMotorPeakSpeed = 3392838796;

			// rumblesurface.h:227
			const Attribute::Key RightMotorReleaseTime = [0, 0, 0, 0, 110, 178, 180, 171];

			// rumblesurface.h:228
			const Attribute::Key RightMotorSustainSpeed = [0, 0, 0, 0, 144, 124, 112, 186];

			// rumblesurface.h:229
			const Attribute::Key RightMotorSustainTime = 90937255;

			// rumblesurface.h:230
			const Attribute::Key RumblePriority = 3383945758;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// rumblesurface.h:210
		const Attribute::Key rumblesurface = 350453106;

	}

}

// rumblesurface.h:13
struct Attrib::Gen::rumblesurface : Instance {
public:
	// rumblesurface.h:15
	Attribute::Key ClassKey();

	// rumblesurface.h:17
	void * operator new(size_t);

	// rumblesurface.h:17
	void operator delete(void *, size_t);

	// rumblesurface.h:17
	void * operator new(size_t, void *);

	// rumblesurface.h:17
	void operator delete(void *, void *);

	// rumblesurface.h:18
	void rumblesurface(const Attrib::Collection *, uint32_t);

	// rumblesurface.h:19
	void rumblesurface(const rumblesurface &);

	// rumblesurface.h:20
	void rumblesurface(const Attrib::Instance &);

	// rumblesurface.h:21
	void rumblesurface(const Attrib::RefSpec &, uint32_t);

	// rumblesurface.h:22
	void rumblesurface(Attribute::Key, uint32_t);

	// rumblesurface.h:23
	void ~rumblesurface();

	// rumblesurface.h:25
	Attribute::Key GetClass() const;

	// rumblesurface.h:27
	Instance & GetBase();

	// rumblesurface.h:28
	const Attrib::Instance & GetBase() const;

	// rumblesurface.h:30
	void Modify(Attribute::Key, unsigned int);

	// rumblesurface.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// rumblesurface.h:32
	void Change(const Attrib::Collection *);

	// rumblesurface.h:33
	void Change(const Attrib::RefSpec &);

	// rumblesurface.h:34
	void Change(Attribute::Key);

	// rumblesurface.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// rumblesurface.h:36
	void ChangeWithDefault(Attribute::Key);

	// rumblesurface.h:38
	const rumblesurface & operator=(const rumblesurface &);

	// rumblesurface.h:39
	const rumblesurface & operator=(const Attrib::Instance &);

	// rumblesurface.h:40
	bool operator==(const rumblesurface &) const;

	// rumblesurface.h:41
	bool operator==(const Attrib::Instance &) const;

	// rumblesurface.h:42
	bool operator!=(const rumblesurface &) const;

	// rumblesurface.h:43
	bool operator!=(const Attrib::Instance &) const;

	// rumblesurface.h:73
	bool LeftMotorAttackTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:74
	bool LeftMotorAttackTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LeftMotorAttackTime() const;

	// rumblesurface.h:76
	bool Set_LeftMotorAttackTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:80
	bool LeftMotorDecayTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:81
	bool LeftMotorDecayTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LeftMotorDecayTime() const;

	// rumblesurface.h:83
	bool Set_LeftMotorDecayTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:87
	bool LeftMotorPeakSpeed(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:88
	bool LeftMotorPeakSpeed(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LeftMotorPeakSpeed() const;

	// rumblesurface.h:90
	bool Set_LeftMotorPeakSpeed(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:94
	bool LeftMotorReleaseTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:95
	bool LeftMotorReleaseTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LeftMotorReleaseTime() const;

	// rumblesurface.h:97
	bool Set_LeftMotorReleaseTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:101
	bool LeftMotorSustainSpeed(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:102
	bool LeftMotorSustainSpeed(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LeftMotorSustainSpeed() const;

	// rumblesurface.h:104
	bool Set_LeftMotorSustainSpeed(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:108
	bool LeftMotorSustainTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:109
	bool LeftMotorSustainTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & LeftMotorSustainTime() const;

	// rumblesurface.h:111
	bool Set_LeftMotorSustainTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:115
	bool MaxSpeedForRumble(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:116
	bool MaxSpeedForRumble(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxSpeedForRumble() const;

	// rumblesurface.h:118
	bool Set_MaxSpeedForRumble(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:122
	bool MinSpeedForRumble(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:123
	bool MinSpeedForRumble(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MinSpeedForRumble() const;

	// rumblesurface.h:125
	bool Set_MinSpeedForRumble(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:129
	bool RightMotorAttackTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:130
	bool RightMotorAttackTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RightMotorAttackTime() const;

	// rumblesurface.h:132
	bool Set_RightMotorAttackTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:136
	bool RightMotorDecayTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:137
	bool RightMotorDecayTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RightMotorDecayTime() const;

	// rumblesurface.h:139
	bool Set_RightMotorDecayTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:143
	bool RightMotorPeakSpeed(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:144
	bool RightMotorPeakSpeed(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:145
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RightMotorPeakSpeed() const;

	// rumblesurface.h:146
	bool Set_RightMotorPeakSpeed(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:150
	bool RightMotorReleaseTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:151
	bool RightMotorReleaseTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:152
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RightMotorReleaseTime() const;

	// rumblesurface.h:153
	bool Set_RightMotorReleaseTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:157
	bool RightMotorSustainSpeed(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:158
	bool RightMotorSustainSpeed(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:159
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RightMotorSustainSpeed() const;

	// rumblesurface.h:160
	bool Set_RightMotorSustainSpeed(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:164
	bool RightMotorSustainTime(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// rumblesurface.h:165
	bool RightMotorSustainTime(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// rumblesurface.h:166
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RightMotorSustainTime() const;

	// rumblesurface.h:167
	bool Set_RightMotorSustainTime(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// rumblesurface.h:171
	bool RumblePriority(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// rumblesurface.h:172
	bool RumblePriority(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// rumblesurface.h:173
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & RumblePriority() const;

	// rumblesurface.h:174
	bool Set_RumblePriority(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

private:
	// rumblesurface.h:199
	unsigned int GetLayoutSize();

	// rumblesurface.h:202
	rumblesurface & ConvertFromInstance(Instance &);

	// rumblesurface.h:203
	const rumblesurface & ConvertFromInstance(const Attrib::Instance &);

}

