// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// camerabumperbehaviour.h:182
		namespace camerabumperbehaviour {
			// camerabumperbehaviour.h:184
			const Attribute::Key AccelerationDampening = 4137833119;

			// camerabumperbehaviour.h:185
			const Attribute::Key AccelerationResponse = [0, 0, 0, 0, 233, 203, 173, 142];

			// camerabumperbehaviour.h:186
			const Attribute::Key BodyPitchScale = [0, 0, 0, 0, 181, 61, 160, 62];

			// camerabumperbehaviour.h:187
			const Attribute::Key BodyRollScale = 3397851252;

			// camerabumperbehaviour.h:188
			const Attribute::Key BoostFieldOfView = [0, 0, 0, 0, 38, 140, 225, 30];

			// camerabumperbehaviour.h:189
			const Attribute::Key FieldOfView = 1247677273;

			// camerabumperbehaviour.h:190
			const Attribute::Key PitchSpring = 2017167387;

			// camerabumperbehaviour.h:191
			const Attribute::Key RollSpring = [0, 0, 0, 0, 241, 41, 37, 172];

			// camerabumperbehaviour.h:192
			const Attribute::Key YawSpring = 2535560350;

			// camerabumperbehaviour.h:193
			const Attribute::Key YOffset = 835153040;

			// camerabumperbehaviour.h:194
			const Attribute::Key ZOffset = [0, 0, 0, 0, 154, 132, 193, 83];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// camerabumperbehaviour.h:178
		const Attribute::Key camerabumperbehaviour = [0, 0, 0, 0, 133, 95, 79, 153];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// camerabumperbehaviour.h:182
		namespace camerabumperbehaviour {
			// camerabumperbehaviour.h:184
			const Attribute::Key AccelerationDampening = 4137833119;

			// camerabumperbehaviour.h:185
			const Attribute::Key AccelerationResponse = [0, 0, 0, 0, 233, 203, 173, 142];

			// camerabumperbehaviour.h:186
			const Attribute::Key BodyPitchScale = [0, 0, 0, 0, 181, 61, 160, 62];

			// camerabumperbehaviour.h:187
			const Attribute::Key BodyRollScale = 3397851252;

			// camerabumperbehaviour.h:188
			const Attribute::Key BoostFieldOfView = [0, 0, 0, 0, 38, 140, 225, 30];

			// camerabumperbehaviour.h:189
			const Attribute::Key FieldOfView = 1247677273;

			// camerabumperbehaviour.h:190
			const Attribute::Key PitchSpring = 2017167387;

			// camerabumperbehaviour.h:191
			const Attribute::Key RollSpring = [0, 0, 0, 0, 241, 41, 37, 172];

			// camerabumperbehaviour.h:192
			const Attribute::Key YawSpring = 2535560350;

			// camerabumperbehaviour.h:193
			const Attribute::Key YOffset = 835153040;

			// camerabumperbehaviour.h:194
			const Attribute::Key ZOffset = [0, 0, 0, 0, 154, 132, 193, 83];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// camerabumperbehaviour.h:178
		const Attribute::Key camerabumperbehaviour = [0, 0, 0, 0, 133, 95, 79, 153];

	}

}

// camerabumperbehaviour.h:13
struct Attrib::Gen::camerabumperbehaviour : Instance {
public:
	// camerabumperbehaviour.h:15
	Attribute::Key ClassKey();

	// camerabumperbehaviour.h:17
	void * operator new(size_t);

	// camerabumperbehaviour.h:17
	void operator delete(void *, size_t);

	// camerabumperbehaviour.h:17
	void * operator new(size_t, void *);

	// camerabumperbehaviour.h:17
	void operator delete(void *, void *);

	// camerabumperbehaviour.h:18
	void camerabumperbehaviour(const Attrib::Collection *, uint32_t);

	// camerabumperbehaviour.h:19
	void camerabumperbehaviour(const camerabumperbehaviour &);

	// camerabumperbehaviour.h:20
	void camerabumperbehaviour(const Attrib::Instance &);

	// camerabumperbehaviour.h:21
	void camerabumperbehaviour(const Attrib::RefSpec &, uint32_t);

	// camerabumperbehaviour.h:22
	void camerabumperbehaviour(Attribute::Key, uint32_t);

	// camerabumperbehaviour.h:23
	void ~camerabumperbehaviour();

	// camerabumperbehaviour.h:25
	Attribute::Key GetClass() const;

	// camerabumperbehaviour.h:27
	Instance & GetBase();

	// camerabumperbehaviour.h:28
	const Attrib::Instance & GetBase() const;

	// camerabumperbehaviour.h:30
	void Modify(Attribute::Key, unsigned int);

	// camerabumperbehaviour.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// camerabumperbehaviour.h:32
	void Change(const Attrib::Collection *);

	// camerabumperbehaviour.h:33
	void Change(const Attrib::RefSpec &);

	// camerabumperbehaviour.h:34
	void Change(Attribute::Key);

	// camerabumperbehaviour.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// camerabumperbehaviour.h:36
	void ChangeWithDefault(Attribute::Key);

	// camerabumperbehaviour.h:38
	const camerabumperbehaviour & operator=(const camerabumperbehaviour &);

	// camerabumperbehaviour.h:39
	const camerabumperbehaviour & operator=(const Attrib::Instance &);

	// camerabumperbehaviour.h:40
	bool operator==(const camerabumperbehaviour &) const;

	// camerabumperbehaviour.h:41
	bool operator==(const Attrib::Instance &) const;

	// camerabumperbehaviour.h:42
	bool operator!=(const camerabumperbehaviour &) const;

	// camerabumperbehaviour.h:43
	bool operator!=(const Attrib::Instance &) const;

	// camerabumperbehaviour.h:73
	bool AccelerationDampening(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:74
	bool AccelerationDampening(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AccelerationDampening() const;

	// camerabumperbehaviour.h:76
	bool Set_AccelerationDampening(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:80
	bool AccelerationResponse(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:81
	bool AccelerationResponse(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & AccelerationResponse() const;

	// camerabumperbehaviour.h:83
	bool Set_AccelerationResponse(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:87
	bool BodyPitchScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:88
	bool BodyPitchScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BodyPitchScale() const;

	// camerabumperbehaviour.h:90
	bool Set_BodyPitchScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:94
	bool BodyRollScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:95
	bool BodyRollScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BodyRollScale() const;

	// camerabumperbehaviour.h:97
	bool Set_BodyRollScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:101
	bool BoostFieldOfView(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:102
	bool BoostFieldOfView(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & BoostFieldOfView() const;

	// camerabumperbehaviour.h:104
	bool Set_BoostFieldOfView(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:108
	bool FieldOfView(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:109
	bool FieldOfView(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & FieldOfView() const;

	// camerabumperbehaviour.h:111
	bool Set_FieldOfView(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:115
	bool PitchSpring(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:116
	bool PitchSpring(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PitchSpring() const;

	// camerabumperbehaviour.h:118
	bool Set_PitchSpring(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:122
	bool RollSpring(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:123
	bool RollSpring(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RollSpring() const;

	// camerabumperbehaviour.h:125
	bool Set_RollSpring(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:129
	bool YawSpring(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:130
	bool YawSpring(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & YawSpring() const;

	// camerabumperbehaviour.h:132
	bool Set_YawSpring(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:136
	bool YOffset(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:137
	bool YOffset(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & YOffset() const;

	// camerabumperbehaviour.h:139
	bool Set_YOffset(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// camerabumperbehaviour.h:143
	bool ZOffset(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// camerabumperbehaviour.h:144
	bool ZOffset(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// camerabumperbehaviour.h:145
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & ZOffset() const;

	// camerabumperbehaviour.h:146
	bool Set_ZOffset(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// camerabumperbehaviour.h:167
	unsigned int GetLayoutSize();

	// camerabumperbehaviour.h:170
	camerabumperbehaviour & ConvertFromInstance(Instance &);

	// camerabumperbehaviour.h:171
	const camerabumperbehaviour & ConvertFromInstance(const Attrib::Instance &);

}

