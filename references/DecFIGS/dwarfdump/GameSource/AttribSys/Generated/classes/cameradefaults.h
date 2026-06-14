// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// cameradefaults.h:166
		namespace cameradefaults {
			// cameradefaults.h:168
			const Attribute::Key CarUnlock = 4132602042;

			// cameradefaults.h:169
			const Attribute::Key ImpactShakeDecayRate = [0, 0, 0, 0, 171, 26, 182, 201];

			// cameradefaults.h:170
			const Attribute::Key ImpactShakeMinimumImpulse = 713192305;

			// cameradefaults.h:171
			const Attribute::Key ImpactShakeScale = [0, 0, 0, 0, 15, 116, 145, 33];

			// cameradefaults.h:172
			const Attribute::Key ImpactShakeType = [0, 0, 0, 0, 54, 14, 245, 252];

			// cameradefaults.h:173
			const Attribute::Key SpeedShakeMaximumSpeed = 1646892311;

			// cameradefaults.h:174
			const Attribute::Key SpeedShakeScale = 3208990283;

			// cameradefaults.h:175
			const Attribute::Key SpeedShakeThreshold = [0, 0, 0, 0, 82, 78, 201, 108];

			// cameradefaults.h:176
			const Attribute::Key SpeedShakeType = [0, 0, 0, 0, 141, 246, 28, 91];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// cameradefaults.h:162
		const Attribute::Key cameradefaults = 1595961137;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// cameradefaults.h:166
		namespace cameradefaults {
			// cameradefaults.h:168
			const Attribute::Key CarUnlock = 4132602042;

			// cameradefaults.h:169
			const Attribute::Key ImpactShakeDecayRate = [0, 0, 0, 0, 171, 26, 182, 201];

			// cameradefaults.h:170
			const Attribute::Key ImpactShakeMinimumImpulse = 713192305;

			// cameradefaults.h:171
			const Attribute::Key ImpactShakeScale = [0, 0, 0, 0, 15, 116, 145, 33];

			// cameradefaults.h:172
			const Attribute::Key ImpactShakeType = [0, 0, 0, 0, 54, 14, 245, 252];

			// cameradefaults.h:173
			const Attribute::Key SpeedShakeMaximumSpeed = 1646892311;

			// cameradefaults.h:174
			const Attribute::Key SpeedShakeScale = 3208990283;

			// cameradefaults.h:175
			const Attribute::Key SpeedShakeThreshold = [0, 0, 0, 0, 82, 78, 201, 108];

			// cameradefaults.h:176
			const Attribute::Key SpeedShakeType = [0, 0, 0, 0, 141, 246, 28, 91];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// cameradefaults.h:162
		const Attribute::Key cameradefaults = 1595961137;

	}

}

// cameradefaults.h:13
struct Attrib::Gen::cameradefaults : Instance {
public:
	// cameradefaults.h:15
	Attribute::Key ClassKey();

	// cameradefaults.h:17
	void * operator new(size_t);

	// cameradefaults.h:17
	void operator delete(void *, size_t);

	// cameradefaults.h:17
	void * operator new(size_t, void *);

	// cameradefaults.h:17
	void operator delete(void *, void *);

	// cameradefaults.h:18
	void cameradefaults(const Attrib::Collection *, uint32_t);

	// cameradefaults.h:19
	void cameradefaults(const cameradefaults &);

	// cameradefaults.h:20
	void cameradefaults(const Attrib::Instance &);

	// cameradefaults.h:21
	void cameradefaults(const Attrib::RefSpec &, uint32_t);

	// cameradefaults.h:22
	void cameradefaults(Attribute::Key, uint32_t);

	// cameradefaults.h:23
	void ~cameradefaults();

	// cameradefaults.h:25
	Attribute::Key GetClass() const;

	// cameradefaults.h:27
	Instance & GetBase();

	// cameradefaults.h:28
	const Attrib::Instance & GetBase() const;

	// cameradefaults.h:30
	void Modify(Attribute::Key, unsigned int);

	// cameradefaults.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// cameradefaults.h:32
	void Change(const Attrib::Collection *);

	// cameradefaults.h:33
	void Change(const Attrib::RefSpec &);

	// cameradefaults.h:34
	void Change(Attribute::Key);

	// cameradefaults.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// cameradefaults.h:36
	void ChangeWithDefault(Attribute::Key);

	// cameradefaults.h:38
	const cameradefaults & operator=(const cameradefaults &);

	// cameradefaults.h:39
	const cameradefaults & operator=(const Attrib::Instance &);

	// cameradefaults.h:40
	bool operator==(const cameradefaults &) const;

	// cameradefaults.h:41
	bool operator==(const Attrib::Instance &) const;

	// cameradefaults.h:42
	bool operator!=(const cameradefaults &) const;

	// cameradefaults.h:43
	bool operator!=(const Attrib::Instance &) const;

	// cameradefaults.h:73
	bool CarUnlock(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// cameradefaults.h:74
	bool CarUnlock(RefSpec &) const;

	// cameradefaults.h:75
	const Attrib::RefSpec & CarUnlock() const;

	// cameradefaults.h:76
	bool Set_CarUnlock(const Attrib::RefSpec &);

	// cameradefaults.h:80
	bool ImpactShakeDecayRate(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameradefaults.h:81
	bool ImpactShakeDecayRate(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameradefaults.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & ImpactShakeDecayRate() const;

	// cameradefaults.h:83
	bool Set_ImpactShakeDecayRate(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameradefaults.h:87
	bool ImpactShakeMinimumImpulse(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameradefaults.h:88
	bool ImpactShakeMinimumImpulse(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameradefaults.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & ImpactShakeMinimumImpulse() const;

	// cameradefaults.h:90
	bool Set_ImpactShakeMinimumImpulse(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameradefaults.h:94
	bool ImpactShakeScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameradefaults.h:95
	bool ImpactShakeScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameradefaults.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & ImpactShakeScale() const;

	// cameradefaults.h:97
	bool Set_ImpactShakeScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameradefaults.h:101
	bool ImpactShakeType(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// cameradefaults.h:102
	bool ImpactShakeType(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// cameradefaults.h:103
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & ImpactShakeType() const;

	// cameradefaults.h:104
	bool Set_ImpactShakeType(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// cameradefaults.h:108
	bool SpeedShakeMaximumSpeed(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameradefaults.h:109
	bool SpeedShakeMaximumSpeed(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameradefaults.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpeedShakeMaximumSpeed() const;

	// cameradefaults.h:111
	bool Set_SpeedShakeMaximumSpeed(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameradefaults.h:115
	bool SpeedShakeScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameradefaults.h:116
	bool SpeedShakeScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameradefaults.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpeedShakeScale() const;

	// cameradefaults.h:118
	bool Set_SpeedShakeScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameradefaults.h:122
	bool SpeedShakeThreshold(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// cameradefaults.h:123
	bool SpeedShakeThreshold(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// cameradefaults.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpeedShakeThreshold() const;

	// cameradefaults.h:125
	bool Set_SpeedShakeThreshold(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// cameradefaults.h:129
	bool SpeedShakeType(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// cameradefaults.h:130
	bool SpeedShakeType(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// cameradefaults.h:131
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & SpeedShakeType() const;

	// cameradefaults.h:132
	bool Set_SpeedShakeType(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

private:
	// cameradefaults.h:151
	unsigned int GetLayoutSize();

	// cameradefaults.h:154
	cameradefaults & ConvertFromInstance(Instance &);

	// cameradefaults.h:155
	const cameradefaults & ConvertFromInstance(const Attrib::Instance &);

}

