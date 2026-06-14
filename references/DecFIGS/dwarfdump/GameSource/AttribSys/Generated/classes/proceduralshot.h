// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// proceduralshot.h:127
		namespace proceduralshot {
			// proceduralshot.h:129
			const Attribute::Key LastTimeUsed = 2975997252;

			// proceduralshot.h:130
			const Attribute::Key ShotProperties = 1399762165;

			// proceduralshot.h:131
			const Attribute::Key ShotType = [0, 0, 0, 0, 147, 36, 130, 254];

			// proceduralshot.h:132
			const Attribute::Key SuitableFor = 2603760207;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// proceduralshot.h:123
		const Attribute::Key proceduralshot = [0, 0, 0, 0, 224, 39, 55, 176];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// proceduralshot.h:127
		namespace proceduralshot {
			// proceduralshot.h:129
			const Attribute::Key LastTimeUsed = 2975997252;

			// proceduralshot.h:130
			const Attribute::Key ShotProperties = 1399762165;

			// proceduralshot.h:131
			const Attribute::Key ShotType = [0, 0, 0, 0, 147, 36, 130, 254];

			// proceduralshot.h:132
			const Attribute::Key SuitableFor = 2603760207;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// proceduralshot.h:123
		const Attribute::Key proceduralshot = [0, 0, 0, 0, 224, 39, 55, 176];

	}

}

// proceduralshot.h:14
struct Attrib::Gen::proceduralshot : Instance {
public:
	// proceduralshot.h:16
	Attribute::Key ClassKey();

	// proceduralshot.h:18
	void * operator new(size_t);

	// proceduralshot.h:18
	void operator delete(void *, size_t);

	// proceduralshot.h:18
	void * operator new(size_t, void *);

	// proceduralshot.h:18
	void operator delete(void *, void *);

	// proceduralshot.h:19
	void proceduralshot(const Attrib::Collection *, uint32_t);

	// proceduralshot.h:20
	void proceduralshot(const proceduralshot &);

	// proceduralshot.h:21
	void proceduralshot(const Attrib::Instance &);

	// proceduralshot.h:22
	void proceduralshot(const Attrib::RefSpec &, uint32_t);

	// proceduralshot.h:23
	void proceduralshot(Attribute::Key, uint32_t);

	// proceduralshot.h:24
	void ~proceduralshot();

	// proceduralshot.h:26
	Attribute::Key GetClass() const;

	// proceduralshot.h:28
	Instance & GetBase();

	// proceduralshot.h:29
	const Attrib::Instance & GetBase() const;

	// proceduralshot.h:31
	void Modify(Attribute::Key, unsigned int);

	// proceduralshot.h:32
	Attribute::Key GenerateUniqueKey(const char *) const;

	// proceduralshot.h:33
	void Change(const Attrib::Collection *);

	// proceduralshot.h:34
	void Change(const Attrib::RefSpec &);

	// proceduralshot.h:35
	void Change(Attribute::Key);

	// proceduralshot.h:36
	void ChangeWithDefault(const Attrib::RefSpec &);

	// proceduralshot.h:37
	void ChangeWithDefault(Attribute::Key);

	// proceduralshot.h:39
	const proceduralshot & operator=(const proceduralshot &);

	// proceduralshot.h:40
	const proceduralshot & operator=(const Attrib::Instance &);

	// proceduralshot.h:41
	bool operator==(const proceduralshot &) const;

	// proceduralshot.h:42
	bool operator==(const Attrib::Instance &) const;

	// proceduralshot.h:43
	bool operator!=(const proceduralshot &) const;

	// proceduralshot.h:44
	bool operator!=(const Attrib::Instance &) const;

	// proceduralshot.h:74
	bool LastTimeUsed(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// proceduralshot.h:75
	bool LastTimeUsed(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// proceduralshot.h:76
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & LastTimeUsed() const;

	// proceduralshot.h:77
	bool Set_LastTimeUsed(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// proceduralshot.h:81
	bool ShotProperties(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// proceduralshot.h:82
	bool ShotProperties(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// proceduralshot.h:83
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & ShotProperties() const;

	// proceduralshot.h:84
	bool Set_ShotProperties(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// proceduralshot.h:88
	bool ShotType(Attrib::TAttrib<AttribSys::Enums::ProceduralShotType::ProceduralShotType> &) const;

	// proceduralshot.h:89
	bool ShotType(AttribSys::Enums::ProceduralShotType::ProceduralShotType &) const;

	// proceduralshot.h:90
	const AttribSys::Enums::ProceduralShotType::ProceduralShotType & ShotType() const;

	// proceduralshot.h:91
	bool Set_ShotType(const AttribSys::Enums::ProceduralShotType::ProceduralShotType &);

	// proceduralshot.h:95
	bool SuitableFor(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// proceduralshot.h:96
	bool SuitableFor(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// proceduralshot.h:97
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & SuitableFor() const;

	// proceduralshot.h:98
	bool Set_SuitableFor(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

private:
	// proceduralshot.h:112
	unsigned int GetLayoutSize();

	// proceduralshot.h:115
	proceduralshot & ConvertFromInstance(Instance &);

	// proceduralshot.h:116
	const proceduralshot & ConvertFromInstance(const Attrib::Instance &);

}

