// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// proceduralshake.h:151
		namespace proceduralshake {
			// proceduralshake.h:153
			const Attribute::Key PitchFrequency = 1495681921;

			// proceduralshake.h:154
			const Attribute::Key PitchScale = [0, 0, 0, 0, 220, 191, 144, 89];

			// proceduralshake.h:155
			const Attribute::Key RollFrequency = [0, 0, 0, 0, 232, 193, 108, 60];

			// proceduralshake.h:156
			const Attribute::Key RollScale = 360732879;

			// proceduralshake.h:157
			const Attribute::Key ShakeMethod = [0, 0, 0, 0, 15, 11, 140, 132];

			// proceduralshake.h:158
			const Attribute::Key YawFrequency = [0, 0, 0, 0, 242, 238, 248, 251];

			// proceduralshake.h:159
			const Attribute::Key YawScale = [0, 0, 0, 0, 254, 68, 105, 202];

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// proceduralshake.h:147
		const Attribute::Key proceduralshake = [0, 0, 0, 0, 184, 253, 255, 255];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// proceduralshake.h:151
		namespace proceduralshake {
			// proceduralshake.h:153
			const Attribute::Key PitchFrequency = 1495681921;

			// proceduralshake.h:154
			const Attribute::Key PitchScale = [0, 0, 0, 0, 220, 191, 144, 89];

			// proceduralshake.h:155
			const Attribute::Key RollFrequency = [0, 0, 0, 0, 232, 193, 108, 60];

			// proceduralshake.h:156
			const Attribute::Key RollScale = 360732879;

			// proceduralshake.h:157
			const Attribute::Key ShakeMethod = [0, 0, 0, 0, 15, 11, 140, 132];

			// proceduralshake.h:158
			const Attribute::Key YawFrequency = [0, 0, 0, 0, 242, 238, 248, 251];

			// proceduralshake.h:159
			const Attribute::Key YawScale = [0, 0, 0, 0, 254, 68, 105, 202];

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// proceduralshake.h:147
		const Attribute::Key proceduralshake = [0, 0, 0, 0, 184, 253, 255, 255];

	}

}

// proceduralshake.h:14
struct Attrib::Gen::proceduralshake : Instance {
public:
	// proceduralshake.h:16
	Attribute::Key ClassKey();

	// proceduralshake.h:18
	void * operator new(size_t);

	// proceduralshake.h:18
	void operator delete(void *, size_t);

	// proceduralshake.h:18
	void * operator new(size_t, void *);

	// proceduralshake.h:18
	void operator delete(void *, void *);

	// proceduralshake.h:19
	void proceduralshake(const Attrib::Collection *, uint32_t);

	// proceduralshake.h:20
	void proceduralshake(const proceduralshake &);

	// proceduralshake.h:21
	void proceduralshake(const Attrib::Instance &);

	// proceduralshake.h:22
	void proceduralshake(const Attrib::RefSpec &, uint32_t);

	// proceduralshake.h:23
	void proceduralshake(Attribute::Key, uint32_t);

	// proceduralshake.h:24
	void ~proceduralshake();

	// proceduralshake.h:26
	Attribute::Key GetClass() const;

	// proceduralshake.h:28
	Instance & GetBase();

	// proceduralshake.h:29
	const Attrib::Instance & GetBase() const;

	// proceduralshake.h:31
	void Modify(Attribute::Key, unsigned int);

	// proceduralshake.h:32
	Attribute::Key GenerateUniqueKey(const char *) const;

	// proceduralshake.h:33
	void Change(const Attrib::Collection *);

	// proceduralshake.h:34
	void Change(const Attrib::RefSpec &);

	// proceduralshake.h:35
	void Change(Attribute::Key);

	// proceduralshake.h:36
	void ChangeWithDefault(const Attrib::RefSpec &);

	// proceduralshake.h:37
	void ChangeWithDefault(Attribute::Key);

	// proceduralshake.h:39
	const proceduralshake & operator=(const proceduralshake &);

	// proceduralshake.h:40
	const proceduralshake & operator=(const Attrib::Instance &);

	// proceduralshake.h:41
	bool operator==(const proceduralshake &) const;

	// proceduralshake.h:42
	bool operator==(const Attrib::Instance &) const;

	// proceduralshake.h:43
	bool operator!=(const proceduralshake &) const;

	// proceduralshake.h:44
	bool operator!=(const Attrib::Instance &) const;

	// proceduralshake.h:74
	bool PitchFrequency(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// proceduralshake.h:75
	bool PitchFrequency(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// proceduralshake.h:76
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PitchFrequency() const;

	// proceduralshake.h:77
	bool Set_PitchFrequency(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// proceduralshake.h:81
	bool PitchScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// proceduralshake.h:82
	bool PitchScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// proceduralshake.h:83
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & PitchScale() const;

	// proceduralshake.h:84
	bool Set_PitchScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// proceduralshake.h:88
	bool RollFrequency(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// proceduralshake.h:89
	bool RollFrequency(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// proceduralshake.h:90
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RollFrequency() const;

	// proceduralshake.h:91
	bool Set_RollFrequency(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// proceduralshake.h:95
	bool RollScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// proceduralshake.h:96
	bool RollScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// proceduralshake.h:97
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & RollScale() const;

	// proceduralshake.h:98
	bool Set_RollScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// proceduralshake.h:102
	bool ShakeMethod(Attrib::TAttrib<AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod> &) const;

	// proceduralshake.h:103
	bool ShakeMethod(AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod &) const;

	// proceduralshake.h:104
	const AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod & ShakeMethod() const;

	// proceduralshake.h:105
	bool Set_ShakeMethod(const AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod &);

	// proceduralshake.h:109
	bool YawFrequency(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// proceduralshake.h:110
	bool YawFrequency(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// proceduralshake.h:111
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & YawFrequency() const;

	// proceduralshake.h:112
	bool Set_YawFrequency(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// proceduralshake.h:116
	bool YawScale(Attrib::TAttrib<EA::Reflection::Float> &) const;

	// proceduralshake.h:117
	bool YawScale(Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// proceduralshake.h:118
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & YawScale() const;

	// proceduralshake.h:119
	bool Set_YawScale(const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

private:
	// proceduralshake.h:136
	unsigned int GetLayoutSize();

	// proceduralshake.h:139
	proceduralshake & ConvertFromInstance(Instance &);

	// proceduralshake.h:140
	const proceduralshake & ConvertFromInstance(const Attrib::Instance &);

}

