// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// physicsvehiclesteeringattribs.h:206
		namespace physicsvehiclesteeringattribs {
			// physicsvehiclesteeringattribs.h:208
			const Attribute::Key AiLookAheadTimeForDrift = 1987555964;

			// physicsvehiclesteeringattribs.h:209
			const Attribute::Key AiMinLookAheadDistanceForDrift = 1854946018;

			// physicsvehiclesteeringattribs.h:210
			const Attribute::Key AiPidCoefficientD = 1853737051;

			// physicsvehiclesteeringattribs.h:211
			const Attribute::Key AiPidCoefficientDriftD = 3480259747;

			// physicsvehiclesteeringattribs.h:212
			const Attribute::Key AiPidCoefficientDriftI = [0, 0, 0, 0, 204, 17, 86, 233];

			// physicsvehiclesteeringattribs.h:213
			const Attribute::Key AiPidCoefficientDriftP = 3638205403;

			// physicsvehiclesteeringattribs.h:214
			const Attribute::Key AiPidCoefficientI = 1818556907;

			// physicsvehiclesteeringattribs.h:215
			const Attribute::Key AiPidCoefficientP = [0, 0, 0, 0, 28, 140, 78, 164];

			// physicsvehiclesteeringattribs.h:216
			const Attribute::Key MaxAngle = 2515369827;

			// physicsvehiclesteeringattribs.h:217
			const Attribute::Key MinAngle = 2889850000;

			// physicsvehiclesteeringattribs.h:218
			const Attribute::Key SpeedForMaxAngle = [0, 0, 0, 0, 178, 219, 38, 249];

			// physicsvehiclesteeringattribs.h:219
			const Attribute::Key SpeedForMinAngle = [0, 0, 0, 0, 173, 8, 148, 75];

			// physicsvehiclesteeringattribs.h:220
			const Attribute::Key StraightReactionBias = [0, 0, 0, 0, 164, 55, 71, 14];

			// physicsvehiclesteeringattribs.h:221
			const Attribute::Key TimeForLock = 903717288;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// physicsvehiclesteeringattribs.h:202
		const Attribute::Key physicsvehiclesteeringattribs = 556409804;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// physicsvehiclesteeringattribs.h:206
		namespace physicsvehiclesteeringattribs {
			// physicsvehiclesteeringattribs.h:208
			const Attribute::Key AiLookAheadTimeForDrift = 1987555964;

			// physicsvehiclesteeringattribs.h:209
			const Attribute::Key AiMinLookAheadDistanceForDrift = 1854946018;

			// physicsvehiclesteeringattribs.h:210
			const Attribute::Key AiPidCoefficientD = 1853737051;

			// physicsvehiclesteeringattribs.h:211
			const Attribute::Key AiPidCoefficientDriftD = 3480259747;

			// physicsvehiclesteeringattribs.h:212
			const Attribute::Key AiPidCoefficientDriftI = [0, 0, 0, 0, 204, 17, 86, 233];

			// physicsvehiclesteeringattribs.h:213
			const Attribute::Key AiPidCoefficientDriftP = 3638205403;

			// physicsvehiclesteeringattribs.h:214
			const Attribute::Key AiPidCoefficientI = 1818556907;

			// physicsvehiclesteeringattribs.h:215
			const Attribute::Key AiPidCoefficientP = [0, 0, 0, 0, 28, 140, 78, 164];

			// physicsvehiclesteeringattribs.h:216
			const Attribute::Key MaxAngle = 2515369827;

			// physicsvehiclesteeringattribs.h:217
			const Attribute::Key MinAngle = 2889850000;

			// physicsvehiclesteeringattribs.h:218
			const Attribute::Key SpeedForMaxAngle = [0, 0, 0, 0, 178, 219, 38, 249];

			// physicsvehiclesteeringattribs.h:219
			const Attribute::Key SpeedForMinAngle = [0, 0, 0, 0, 173, 8, 148, 75];

			// physicsvehiclesteeringattribs.h:220
			const Attribute::Key StraightReactionBias = [0, 0, 0, 0, 164, 55, 71, 14];

			// physicsvehiclesteeringattribs.h:221
			const Attribute::Key TimeForLock = 903717288;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// physicsvehiclesteeringattribs.h:202
		const Attribute::Key physicsvehiclesteeringattribs = 556409804;

	}

}

// physicsvehiclesteeringattribs.h:13
struct Attrib::Gen::physicsvehiclesteeringattribs : Instance {
public:
	// physicsvehiclesteeringattribs.h:15
	Attribute::Key ClassKey();

	// physicsvehiclesteeringattribs.h:17
	void * operator new(size_t);

	// physicsvehiclesteeringattribs.h:17
	void operator delete(void *, size_t);

	// physicsvehiclesteeringattribs.h:17
	void * operator new(size_t, void *);

	// physicsvehiclesteeringattribs.h:17
	void operator delete(void *, void *);

	// physicsvehiclesteeringattribs.h:18
	void physicsvehiclesteeringattribs(const Attrib::Collection *, uint32_t);

	// physicsvehiclesteeringattribs.h:19
	void physicsvehiclesteeringattribs(const physicsvehiclesteeringattribs &);

	// physicsvehiclesteeringattribs.h:20
	void physicsvehiclesteeringattribs(const Attrib::Instance &);

	// physicsvehiclesteeringattribs.h:21
	void physicsvehiclesteeringattribs(const Attrib::RefSpec &, uint32_t);

	// physicsvehiclesteeringattribs.h:22
	void physicsvehiclesteeringattribs(Attribute::Key, uint32_t);

	// physicsvehiclesteeringattribs.h:23
	void ~physicsvehiclesteeringattribs();

	// physicsvehiclesteeringattribs.h:25
	Attribute::Key GetClass() const;

	// physicsvehiclesteeringattribs.h:27
	Instance & GetBase();

	// physicsvehiclesteeringattribs.h:28
	const Attrib::Instance & GetBase() const;

	// physicsvehiclesteeringattribs.h:30
	void Modify(Attribute::Key, unsigned int);

	// physicsvehiclesteeringattribs.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// physicsvehiclesteeringattribs.h:32
	void Change(const Attrib::Collection *);

	// physicsvehiclesteeringattribs.h:33
	void Change(const Attrib::RefSpec &);

	// physicsvehiclesteeringattribs.h:34
	void Change(Attribute::Key);

	// physicsvehiclesteeringattribs.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// physicsvehiclesteeringattribs.h:36
	void ChangeWithDefault(Attribute::Key);

	// physicsvehiclesteeringattribs.h:38
	const physicsvehiclesteeringattribs & operator=(const physicsvehiclesteeringattribs &);

	// physicsvehiclesteeringattribs.h:39
	const physicsvehiclesteeringattribs & operator=(const Attrib::Instance &);

	// physicsvehiclesteeringattribs.h:40
	bool operator==(const physicsvehiclesteeringattribs &) const;

	// physicsvehiclesteeringattribs.h:41
	bool operator==(const Attrib::Instance &) const;

	// physicsvehiclesteeringattribs.h:42
	bool operator!=(const physicsvehiclesteeringattribs &) const;

	// physicsvehiclesteeringattribs.h:43
	bool operator!=(const Attrib::Instance &) const;

	// physicsvehiclesteeringattribs.h:73
	bool AiLookAheadTimeForDrift(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:74
	bool AiLookAheadTimeForDrift(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiLookAheadTimeForDrift() const;

	// physicsvehiclesteeringattribs.h:76
	bool Set_AiLookAheadTimeForDrift(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:80
	bool AiMinLookAheadDistanceForDrift(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:81
	bool AiMinLookAheadDistanceForDrift(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiMinLookAheadDistanceForDrift() const;

	// physicsvehiclesteeringattribs.h:83
	bool Set_AiMinLookAheadDistanceForDrift(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:87
	bool AiPidCoefficientD(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:88
	bool AiPidCoefficientD(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiPidCoefficientD() const;

	// physicsvehiclesteeringattribs.h:90
	bool Set_AiPidCoefficientD(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:94
	bool AiPidCoefficientDriftD(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:95
	bool AiPidCoefficientDriftD(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiPidCoefficientDriftD() const;

	// physicsvehiclesteeringattribs.h:97
	bool Set_AiPidCoefficientDriftD(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:101
	bool AiPidCoefficientDriftI(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:102
	bool AiPidCoefficientDriftI(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiPidCoefficientDriftI() const;

	// physicsvehiclesteeringattribs.h:104
	bool Set_AiPidCoefficientDriftI(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:108
	bool AiPidCoefficientDriftP(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:109
	bool AiPidCoefficientDriftP(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiPidCoefficientDriftP() const;

	// physicsvehiclesteeringattribs.h:111
	bool Set_AiPidCoefficientDriftP(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:115
	bool AiPidCoefficientI(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:116
	bool AiPidCoefficientI(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiPidCoefficientI() const;

	// physicsvehiclesteeringattribs.h:118
	bool Set_AiPidCoefficientI(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:122
	bool AiPidCoefficientP(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:123
	bool AiPidCoefficientP(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AiPidCoefficientP() const;

	// physicsvehiclesteeringattribs.h:125
	bool Set_AiPidCoefficientP(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:129
	bool MaxAngle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:130
	bool MaxAngle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxAngle() const;

	// physicsvehiclesteeringattribs.h:132
	bool Set_MaxAngle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:136
	bool MinAngle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:137
	bool MinAngle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MinAngle() const;

	// physicsvehiclesteeringattribs.h:139
	bool Set_MinAngle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:143
	bool SpeedForMaxAngle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:144
	bool SpeedForMaxAngle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:145
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpeedForMaxAngle() const;

	// physicsvehiclesteeringattribs.h:146
	bool Set_SpeedForMaxAngle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:150
	bool SpeedForMinAngle(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:151
	bool SpeedForMinAngle(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:152
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpeedForMinAngle() const;

	// physicsvehiclesteeringattribs.h:153
	bool Set_SpeedForMinAngle(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:157
	bool StraightReactionBias(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:158
	bool StraightReactionBias(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:159
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & StraightReactionBias() const;

	// physicsvehiclesteeringattribs.h:160
	bool Set_StraightReactionBias(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesteeringattribs.h:164
	bool TimeForLock(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesteeringattribs.h:165
	bool TimeForLock(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesteeringattribs.h:166
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & TimeForLock() const;

	// physicsvehiclesteeringattribs.h:167
	bool Set_TimeForLock(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// physicsvehiclesteeringattribs.h:191
	unsigned int GetLayoutSize();

	// physicsvehiclesteeringattribs.h:194
	physicsvehiclesteeringattribs & ConvertFromInstance(Instance &);

	// physicsvehiclesteeringattribs.h:195
	const physicsvehiclesteeringattribs & ConvertFromInstance(const Attrib::Instance &);

}

