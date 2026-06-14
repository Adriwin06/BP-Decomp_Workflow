// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// physicsvehiclesuspensionattribs.h:198
		namespace physicsvehiclesuspensionattribs {
			// physicsvehiclesuspensionattribs.h:200
			const Attribute::Key Dampening = 3057363228;

			// physicsvehiclesuspensionattribs.h:201
			const Attribute::Key DownwardMovement = 1989790433;

			// physicsvehiclesuspensionattribs.h:202
			const Attribute::Key FrontHeight = 979253639;

			// physicsvehiclesuspensionattribs.h:203
			const Attribute::Key InAirDamping = [0, 0, 0, 0, 68, 151, 195, 57];

			// physicsvehiclesuspensionattribs.h:204
			const Attribute::Key MaxPitchDampingOnLanding = [0, 0, 0, 0, 237, 244, 188, 42];

			// physicsvehiclesuspensionattribs.h:205
			const Attribute::Key MaxRollDampingOnLanding = [0, 0, 0, 0, 156, 203, 50, 177];

			// physicsvehiclesuspensionattribs.h:206
			const Attribute::Key MaxVertVelocityDampingOnLanding = [0, 0, 0, 0, 76, 138, 230, 64];

			// physicsvehiclesuspensionattribs.h:207
			const Attribute::Key MaxYawDampingOnLanding = [0, 0, 0, 0, 151, 208, 138, 182];

			// physicsvehiclesuspensionattribs.h:208
			const Attribute::Key RearHeight = 3452877842;

			// physicsvehiclesuspensionattribs.h:209
			const Attribute::Key SpringLength = 2326262281;

			// physicsvehiclesuspensionattribs.h:210
			const Attribute::Key Strength = 2030465863;

			// physicsvehiclesuspensionattribs.h:211
			const Attribute::Key TimeToDampAfterLanding = 4029398480;

			// physicsvehiclesuspensionattribs.h:212
			const Attribute::Key UpwardMovement = 2380822749;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// physicsvehiclesuspensionattribs.h:194
		const Attribute::Key physicsvehiclesuspensionattribs = 525480399;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// physicsvehiclesuspensionattribs.h:198
		namespace physicsvehiclesuspensionattribs {
			// physicsvehiclesuspensionattribs.h:200
			const Attribute::Key Dampening = 3057363228;

			// physicsvehiclesuspensionattribs.h:201
			const Attribute::Key DownwardMovement = 1989790433;

			// physicsvehiclesuspensionattribs.h:202
			const Attribute::Key FrontHeight = 979253639;

			// physicsvehiclesuspensionattribs.h:203
			const Attribute::Key InAirDamping = [0, 0, 0, 0, 68, 151, 195, 57];

			// physicsvehiclesuspensionattribs.h:204
			const Attribute::Key MaxPitchDampingOnLanding = [0, 0, 0, 0, 237, 244, 188, 42];

			// physicsvehiclesuspensionattribs.h:205
			const Attribute::Key MaxRollDampingOnLanding = [0, 0, 0, 0, 156, 203, 50, 177];

			// physicsvehiclesuspensionattribs.h:206
			const Attribute::Key MaxVertVelocityDampingOnLanding = [0, 0, 0, 0, 76, 138, 230, 64];

			// physicsvehiclesuspensionattribs.h:207
			const Attribute::Key MaxYawDampingOnLanding = [0, 0, 0, 0, 151, 208, 138, 182];

			// physicsvehiclesuspensionattribs.h:208
			const Attribute::Key RearHeight = 3452877842;

			// physicsvehiclesuspensionattribs.h:209
			const Attribute::Key SpringLength = 2326262281;

			// physicsvehiclesuspensionattribs.h:210
			const Attribute::Key Strength = 2030465863;

			// physicsvehiclesuspensionattribs.h:211
			const Attribute::Key TimeToDampAfterLanding = 4029398480;

			// physicsvehiclesuspensionattribs.h:212
			const Attribute::Key UpwardMovement = 2380822749;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// physicsvehiclesuspensionattribs.h:194
		const Attribute::Key physicsvehiclesuspensionattribs = 525480399;

	}

}

// physicsvehiclesuspensionattribs.h:13
struct Attrib::Gen::physicsvehiclesuspensionattribs : Instance {
public:
	// physicsvehiclesuspensionattribs.h:15
	Attribute::Key ClassKey();

	// physicsvehiclesuspensionattribs.h:17
	void * operator new(size_t);

	// physicsvehiclesuspensionattribs.h:17
	void operator delete(void *, size_t);

	// physicsvehiclesuspensionattribs.h:17
	void * operator new(size_t, void *);

	// physicsvehiclesuspensionattribs.h:17
	void operator delete(void *, void *);

	// physicsvehiclesuspensionattribs.h:18
	void physicsvehiclesuspensionattribs(const Attrib::Collection *, uint32_t);

	// physicsvehiclesuspensionattribs.h:19
	void physicsvehiclesuspensionattribs(const physicsvehiclesuspensionattribs &);

	// physicsvehiclesuspensionattribs.h:20
	void physicsvehiclesuspensionattribs(const Attrib::Instance &);

	// physicsvehiclesuspensionattribs.h:21
	void physicsvehiclesuspensionattribs(const Attrib::RefSpec &, uint32_t);

	// physicsvehiclesuspensionattribs.h:22
	void physicsvehiclesuspensionattribs(Attribute::Key, uint32_t);

	// physicsvehiclesuspensionattribs.h:23
	void ~physicsvehiclesuspensionattribs();

	// physicsvehiclesuspensionattribs.h:25
	Attribute::Key GetClass() const;

	// physicsvehiclesuspensionattribs.h:27
	Instance & GetBase();

	// physicsvehiclesuspensionattribs.h:28
	const Attrib::Instance & GetBase() const;

	// physicsvehiclesuspensionattribs.h:30
	void Modify(Attribute::Key, unsigned int);

	// physicsvehiclesuspensionattribs.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// physicsvehiclesuspensionattribs.h:32
	void Change(const Attrib::Collection *);

	// physicsvehiclesuspensionattribs.h:33
	void Change(const Attrib::RefSpec &);

	// physicsvehiclesuspensionattribs.h:34
	void Change(Attribute::Key);

	// physicsvehiclesuspensionattribs.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// physicsvehiclesuspensionattribs.h:36
	void ChangeWithDefault(Attribute::Key);

	// physicsvehiclesuspensionattribs.h:38
	const physicsvehiclesuspensionattribs & operator=(const physicsvehiclesuspensionattribs &);

	// physicsvehiclesuspensionattribs.h:39
	const physicsvehiclesuspensionattribs & operator=(const Attrib::Instance &);

	// physicsvehiclesuspensionattribs.h:40
	bool operator==(const physicsvehiclesuspensionattribs &) const;

	// physicsvehiclesuspensionattribs.h:41
	bool operator==(const Attrib::Instance &) const;

	// physicsvehiclesuspensionattribs.h:42
	bool operator!=(const physicsvehiclesuspensionattribs &) const;

	// physicsvehiclesuspensionattribs.h:43
	bool operator!=(const Attrib::Instance &) const;

	// physicsvehiclesuspensionattribs.h:73
	bool Dampening(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:74
	bool Dampening(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:75
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Dampening() const;

	// physicsvehiclesuspensionattribs.h:76
	bool Set_Dampening(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:80
	bool DownwardMovement(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:81
	bool DownwardMovement(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:82
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & DownwardMovement() const;

	// physicsvehiclesuspensionattribs.h:83
	bool Set_DownwardMovement(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:87
	bool FrontHeight(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:88
	bool FrontHeight(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:89
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & FrontHeight() const;

	// physicsvehiclesuspensionattribs.h:90
	bool Set_FrontHeight(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:94
	bool InAirDamping(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:95
	bool InAirDamping(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:96
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & InAirDamping() const;

	// physicsvehiclesuspensionattribs.h:97
	bool Set_InAirDamping(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:101
	bool MaxPitchDampingOnLanding(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:102
	bool MaxPitchDampingOnLanding(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:103
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxPitchDampingOnLanding() const;

	// physicsvehiclesuspensionattribs.h:104
	bool Set_MaxPitchDampingOnLanding(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:108
	bool MaxRollDampingOnLanding(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:109
	bool MaxRollDampingOnLanding(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:110
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxRollDampingOnLanding() const;

	// physicsvehiclesuspensionattribs.h:111
	bool Set_MaxRollDampingOnLanding(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:115
	bool MaxVertVelocityDampingOnLanding(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:116
	bool MaxVertVelocityDampingOnLanding(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:117
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxVertVelocityDampingOnLanding() const;

	// physicsvehiclesuspensionattribs.h:118
	bool Set_MaxVertVelocityDampingOnLanding(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:122
	bool MaxYawDampingOnLanding(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:123
	bool MaxYawDampingOnLanding(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:124
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & MaxYawDampingOnLanding() const;

	// physicsvehiclesuspensionattribs.h:125
	bool Set_MaxYawDampingOnLanding(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:129
	bool RearHeight(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:130
	bool RearHeight(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:131
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RearHeight() const;

	// physicsvehiclesuspensionattribs.h:132
	bool Set_RearHeight(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:136
	bool SpringLength(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:137
	bool SpringLength(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:138
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & SpringLength() const;

	// physicsvehiclesuspensionattribs.h:139
	bool Set_SpringLength(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:143
	bool Strength(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:144
	bool Strength(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:145
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Strength() const;

	// physicsvehiclesuspensionattribs.h:146
	bool Set_Strength(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:150
	bool TimeToDampAfterLanding(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:151
	bool TimeToDampAfterLanding(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:152
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & TimeToDampAfterLanding() const;

	// physicsvehiclesuspensionattribs.h:153
	bool Set_TimeToDampAfterLanding(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// physicsvehiclesuspensionattribs.h:157
	bool UpwardMovement(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// physicsvehiclesuspensionattribs.h:158
	bool UpwardMovement(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// physicsvehiclesuspensionattribs.h:159
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & UpwardMovement() const;

	// physicsvehiclesuspensionattribs.h:160
	bool Set_UpwardMovement(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// physicsvehiclesuspensionattribs.h:183
	unsigned int GetLayoutSize();

	// physicsvehiclesuspensionattribs.h:186
	physicsvehiclesuspensionattribs & ConvertFromInstance(Instance &);

	// physicsvehiclesuspensionattribs.h:187
	const physicsvehiclesuspensionattribs & ConvertFromInstance(const Attrib::Instance &);

}

