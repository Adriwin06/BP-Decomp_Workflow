// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// physicsvehiclebodyrollattribs.h:174
		namespace physicsvehiclebodyrollattribs {
			// physicsvehiclebodyrollattribs.h:176
			const Attribute::Key FactorOfWeightX = [0, 0, 0, 0, 97, 7, 47, 10];

			// physicsvehiclebodyrollattribs.h:177
			const Attribute::Key FactorOfWeightZ = [0, 0, 0, 0, 55, 106, 42, 108];

			// physicsvehiclebodyrollattribs.h:178
			const Attribute::Key PitchSpringDampening = [0, 0, 0, 0, 80, 204, 79, 98];

			// physicsvehiclebodyrollattribs.h:179
			const Attribute::Key PitchSpringStiffness = 2347482460;

			// physicsvehiclebodyrollattribs.h:180
			const Attribute::Key RollSpringDampening = [0, 0, 0, 0, 153, 220, 200, 195];

			// physicsvehiclebodyrollattribs.h:181
			const Attribute::Key RollSpringStiffness = 3080154556;

			// physicsvehiclebodyrollattribs.h:182
			const Attribute::Key WeightTransferDecayX = 2528821326;

			// physicsvehiclebodyrollattribs.h:183
			const Attribute::Key WeightTransferDecayZ = [0, 0, 0, 0, 81, 194, 126, 129];

			// physicsvehiclebodyrollattribs.h:184
			const Attribute::Key WheelLatForceHeightOffset = 546846859;

			// physicsvehiclebodyrollattribs.h:185
			const Attribute::Key WheelLongForceHeightOffset = 1468972489;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// physicsvehiclebodyrollattribs.h:170
		const Attribute::Key physicsvehiclebodyrollattribs = 3527951454;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// physicsvehiclebodyrollattribs.h:174
		namespace physicsvehiclebodyrollattribs {
			// physicsvehiclebodyrollattribs.h:176
			const Attribute::Key FactorOfWeightX = [0, 0, 0, 0, 97, 7, 47, 10];

			// physicsvehiclebodyrollattribs.h:177
			const Attribute::Key FactorOfWeightZ = [0, 0, 0, 0, 55, 106, 42, 108];

			// physicsvehiclebodyrollattribs.h:178
			const Attribute::Key PitchSpringDampening = [0, 0, 0, 0, 80, 204, 79, 98];

			// physicsvehiclebodyrollattribs.h:179
			const Attribute::Key PitchSpringStiffness = 2347482460;

			// physicsvehiclebodyrollattribs.h:180
			const Attribute::Key RollSpringDampening = [0, 0, 0, 0, 153, 220, 200, 195];

			// physicsvehiclebodyrollattribs.h:181
			const Attribute::Key RollSpringStiffness = 3080154556;

			// physicsvehiclebodyrollattribs.h:182
			const Attribute::Key WeightTransferDecayX = 2528821326;

			// physicsvehiclebodyrollattribs.h:183
			const Attribute::Key WeightTransferDecayZ = [0, 0, 0, 0, 81, 194, 126, 129];

			// physicsvehiclebodyrollattribs.h:184
			const Attribute::Key WheelLatForceHeightOffset = 546846859;

			// physicsvehiclebodyrollattribs.h:185
			const Attribute::Key WheelLongForceHeightOffset = 1468972489;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// physicsvehiclebodyrollattribs.h:170
		const Attribute::Key physicsvehiclebodyrollattribs = 3527951454;

	}

}

// physicsvehiclebodyrollattribs.h:13
struct Attrib::Gen::physicsvehiclebodyrollattribs : Instance {
public:
	// physicsvehiclebodyrollattribs.h:15
	Attribute::Key ClassKey();

	// physicsvehiclebodyrollattribs.h:17
	void * operator new(size_t);

	// physicsvehiclebodyrollattribs.h:17
	void operator delete(void *, size_t);

	// physicsvehiclebodyrollattribs.h:17
	void * operator new(size_t, void *);

	// physicsvehiclebodyrollattribs.h:17
	void operator delete(void *, void *);

	// physicsvehiclebodyrollattribs.h:18
	void physicsvehiclebodyrollattribs(const Attrib::Collection *, uint32_t);

	// physicsvehiclebodyrollattribs.h:19
	void physicsvehiclebodyrollattribs(const physicsvehiclebodyrollattribs &);

	// physicsvehiclebodyrollattribs.h:20
	void physicsvehiclebodyrollattribs(const Attrib::Instance &);

	// physicsvehiclebodyrollattribs.h:21
	void physicsvehiclebodyrollattribs(const Attrib::RefSpec &, uint32_t);

	// physicsvehiclebodyrollattribs.h:22
	void physicsvehiclebodyrollattribs(Attribute::Key, uint32_t);

	// physicsvehiclebodyrollattribs.h:23
	void ~physicsvehiclebodyrollattribs();

	// physicsvehiclebodyrollattribs.h:25
	Attribute::Key GetClass() const;

	// physicsvehiclebodyrollattribs.h:27
	Instance & GetBase();

	// physicsvehiclebodyrollattribs.h:28
	const Attrib::Instance & GetBase() const;

	// physicsvehiclebodyrollattribs.h:30
	void Modify(Attribute::Key, unsigned int);

	// physicsvehiclebodyrollattribs.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// physicsvehiclebodyrollattribs.h:32
	void Change(const Attrib::Collection *);

	// physicsvehiclebodyrollattribs.h:33
	void Change(const Attrib::RefSpec &);

	// physicsvehiclebodyrollattribs.h:34
	void Change(Attribute::Key);

	// physicsvehiclebodyrollattribs.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// physicsvehiclebodyrollattribs.h:36
	void ChangeWithDefault(Attribute::Key);

	// physicsvehiclebodyrollattribs.h:38
	const physicsvehiclebodyrollattribs & operator=(const physicsvehiclebodyrollattribs &);

	// physicsvehiclebodyrollattribs.h:39
	const physicsvehiclebodyrollattribs & operator=(const Attrib::Instance &);

	// physicsvehiclebodyrollattribs.h:40
	bool operator==(const physicsvehiclebodyrollattribs &) const;

	// physicsvehiclebodyrollattribs.h:41
	bool operator==(const Attrib::Instance &) const;

	// physicsvehiclebodyrollattribs.h:42
	bool operator!=(const physicsvehiclebodyrollattribs &) const;

	// physicsvehiclebodyrollattribs.h:43
	bool operator!=(const Attrib::Instance &) const;

	// physicsvehiclebodyrollattribs.h:73
	bool FactorOfWeightX(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:74
	bool FactorOfWeightX(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & FactorOfWeightX() const;

	// physicsvehiclebodyrollattribs.h:76
	bool Set_FactorOfWeightX(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:80
	bool FactorOfWeightZ(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:81
	bool FactorOfWeightZ(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & FactorOfWeightZ() const;

	// physicsvehiclebodyrollattribs.h:83
	bool Set_FactorOfWeightZ(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:87
	bool PitchSpringDampening(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:88
	bool PitchSpringDampening(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PitchSpringDampening() const;

	// physicsvehiclebodyrollattribs.h:90
	bool Set_PitchSpringDampening(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:94
	bool PitchSpringStiffness(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:95
	bool PitchSpringStiffness(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PitchSpringStiffness() const;

	// physicsvehiclebodyrollattribs.h:97
	bool Set_PitchSpringStiffness(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:101
	bool RollSpringDampening(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:102
	bool RollSpringDampening(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RollSpringDampening() const;

	// physicsvehiclebodyrollattribs.h:104
	bool Set_RollSpringDampening(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:108
	bool RollSpringStiffness(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:109
	bool RollSpringStiffness(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RollSpringStiffness() const;

	// physicsvehiclebodyrollattribs.h:111
	bool Set_RollSpringStiffness(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:115
	bool WeightTransferDecayX(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:116
	bool WeightTransferDecayX(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & WeightTransferDecayX() const;

	// physicsvehiclebodyrollattribs.h:118
	bool Set_WeightTransferDecayX(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:122
	bool WeightTransferDecayZ(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:123
	bool WeightTransferDecayZ(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & WeightTransferDecayZ() const;

	// physicsvehiclebodyrollattribs.h:125
	bool Set_WeightTransferDecayZ(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:129
	bool WheelLatForceHeightOffset(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:130
	bool WheelLatForceHeightOffset(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & WheelLatForceHeightOffset() const;

	// physicsvehiclebodyrollattribs.h:132
	bool Set_WheelLatForceHeightOffset(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclebodyrollattribs.h:136
	bool WheelLongForceHeightOffset(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclebodyrollattribs.h:137
	bool WheelLongForceHeightOffset(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclebodyrollattribs.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & WheelLongForceHeightOffset() const;

	// physicsvehiclebodyrollattribs.h:139
	bool Set_WheelLongForceHeightOffset(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// physicsvehiclebodyrollattribs.h:159
	unsigned int GetLayoutSize();

	// physicsvehiclebodyrollattribs.h:162
	physicsvehiclebodyrollattribs & ConvertFromInstance(Instance &);

	// physicsvehiclebodyrollattribs.h:163
	const physicsvehiclebodyrollattribs & ConvertFromInstance(const Attrib::Instance &);

}

