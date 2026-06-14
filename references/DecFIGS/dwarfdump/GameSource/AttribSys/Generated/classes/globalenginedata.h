// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// globalenginedata.h:134
		namespace globalenginedata {
			// globalenginedata.h:136
			const Attribute::Key FrontRotationMatrix = 996959333;

			// globalenginedata.h:137
			const Attribute::Key Max_Rpm_Before_InfiniteGears_Shift = 2393121760;

			// globalenginedata.h:138
			const Attribute::Key Max_Rpm_Before_InfiniteGears_Start = 588697229;

			// globalenginedata.h:139
			const Attribute::Key RearRotationMatrix = [0, 0, 0, 0, 173, 247, 151, 41];

			// globalenginedata.h:140
			const Attribute::Key Time_Before_ReachingMaxSpeed = 3135326216;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// globalenginedata.h:130
		const Attribute::Key globalenginedata = 2189157727;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// globalenginedata.h:134
		namespace globalenginedata {
			// globalenginedata.h:136
			const Attribute::Key FrontRotationMatrix = 996959333;

			// globalenginedata.h:137
			const Attribute::Key Max_Rpm_Before_InfiniteGears_Shift = 2393121760;

			// globalenginedata.h:138
			const Attribute::Key Max_Rpm_Before_InfiniteGears_Start = 588697229;

			// globalenginedata.h:139
			const Attribute::Key RearRotationMatrix = [0, 0, 0, 0, 173, 247, 151, 41];

			// globalenginedata.h:140
			const Attribute::Key Time_Before_ReachingMaxSpeed = 3135326216;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// globalenginedata.h:130
		const Attribute::Key globalenginedata = 2189157727;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct globalenginedata {
			// globalenginedata.h:111
			struct _LayoutStruct {
				// attribuserinclude.h:131
				typedef Matrix44 Matrix;

				// attribuserinclude.h:126
				typedef Vector2 RwVector2;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// globalenginedata.h:134
		namespace globalenginedata {
			// globalenginedata.h:136
			const Attribute::Key FrontRotationMatrix = 996959333;

			// globalenginedata.h:137
			const Attribute::Key Max_Rpm_Before_InfiniteGears_Shift = 2393121760;

			// globalenginedata.h:138
			const Attribute::Key Max_Rpm_Before_InfiniteGears_Start = 588697229;

			// globalenginedata.h:139
			const Attribute::Key RearRotationMatrix = [0, 0, 0, 0, 173, 247, 151, 41];

			// globalenginedata.h:140
			const Attribute::Key Time_Before_ReachingMaxSpeed = 3135326216;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// globalenginedata.h:130
		const Attribute::Key globalenginedata = 2189157727;

	}

}

// globalenginedata.h:13
struct Attrib::Gen::globalenginedata : Instance {
public:
	// globalenginedata.h:15
	Attribute::Key ClassKey();

	// globalenginedata.h:17
	void * operator new(size_t);

	// globalenginedata.h:17
	void operator delete(void *, size_t);

	// globalenginedata.h:17
	void * operator new(size_t, void *);

	// globalenginedata.h:17
	void operator delete(void *, void *);

	// globalenginedata.h:18
	void globalenginedata(const Attrib::Collection *, uint32_t);

	// globalenginedata.h:19
	void globalenginedata(const globalenginedata &);

	// globalenginedata.h:20
	void globalenginedata(const Attrib::Instance &);

	// globalenginedata.h:21
	void globalenginedata(const Attrib::RefSpec &, uint32_t);

	// globalenginedata.h:22
	void globalenginedata(Attribute::Key, uint32_t);

	// globalenginedata.h:23
	void ~globalenginedata();

	// globalenginedata.h:25
	Attribute::Key GetClass() const;

	// globalenginedata.h:27
	Instance & GetBase();

	// globalenginedata.h:28
	const Attrib::Instance & GetBase() const;

	// globalenginedata.h:30
	void Modify(Attribute::Key, unsigned int);

	// globalenginedata.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// globalenginedata.h:32
	void Change(const Attrib::Collection *);

	// globalenginedata.h:33
	void Change(const Attrib::RefSpec &);

	// globalenginedata.h:34
	void Change(Attribute::Key);

	// globalenginedata.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// globalenginedata.h:36
	void ChangeWithDefault(Attribute::Key);

	// globalenginedata.h:38
	const globalenginedata & operator=(const globalenginedata &);

	// globalenginedata.h:39
	const globalenginedata & operator=(const Attrib::Instance &);

	// globalenginedata.h:40
	bool operator==(const globalenginedata &) const;

	// globalenginedata.h:41
	bool operator==(const Attrib::Instance &) const;

	// globalenginedata.h:42
	bool operator!=(const globalenginedata &) const;

	// globalenginedata.h:43
	bool operator!=(const Attrib::Instance &) const;

	// globalenginedata.h:73
	bool FrontRotationMatrix(Attrib::TAttrib<rw::math::vpu::Matrix44> &) const;

	// globalenginedata.h:74
	bool FrontRotationMatrix(Attrib::Gen::globalenginedata::_LayoutStruct::Matrix &) const;

	// globalenginedata.h:75
	const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix & FrontRotationMatrix() const;

	// globalenginedata.h:76
	bool Set_FrontRotationMatrix(const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix &);

	// globalenginedata.h:80
	bool Max_Rpm_Before_InfiniteGears_Shift(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// globalenginedata.h:81
	bool Max_Rpm_Before_InfiniteGears_Shift(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// globalenginedata.h:82
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & Max_Rpm_Before_InfiniteGears_Shift() const;

	// globalenginedata.h:83
	bool Set_Max_Rpm_Before_InfiniteGears_Shift(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

	// globalenginedata.h:87
	bool Max_Rpm_Before_InfiniteGears_Start(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// globalenginedata.h:88
	bool Max_Rpm_Before_InfiniteGears_Start(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// globalenginedata.h:89
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & Max_Rpm_Before_InfiniteGears_Start() const;

	// globalenginedata.h:90
	bool Set_Max_Rpm_Before_InfiniteGears_Start(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

	// globalenginedata.h:94
	bool RearRotationMatrix(Attrib::TAttrib<rw::math::vpu::Matrix44> &) const;

	// globalenginedata.h:95
	bool RearRotationMatrix(Attrib::Gen::globalenginedata::_LayoutStruct::Matrix &) const;

	// globalenginedata.h:96
	const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix & RearRotationMatrix() const;

	// globalenginedata.h:97
	bool Set_RearRotationMatrix(const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix &);

	// globalenginedata.h:101
	bool Time_Before_ReachingMaxSpeed(Attrib::TAttrib<rw::math::vpu::Vector2> &) const;

	// globalenginedata.h:102
	bool Time_Before_ReachingMaxSpeed(Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// globalenginedata.h:103
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & Time_Before_ReachingMaxSpeed() const;

	// globalenginedata.h:104
	bool Set_Time_Before_ReachingMaxSpeed(const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

private:
	// globalenginedata.h:119
	unsigned int GetLayoutSize();

	// globalenginedata.h:122
	globalenginedata & ConvertFromInstance(Instance &);

	// globalenginedata.h:123
	const globalenginedata & ConvertFromInstance(const Attrib::Instance &);

}

