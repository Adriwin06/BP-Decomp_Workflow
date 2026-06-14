// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// iceanim.h:126
		namespace iceanim {
			// iceanim.h:128
			const Attribute::Key Guid = [0, 0, 0, 0, 85, 8, 136, 189];

			// iceanim.h:129
			const Attribute::Key LastTimeUsed = 2975997252;

			// iceanim.h:130
			const Attribute::Key ShotProperties = 1399762165;

			// iceanim.h:131
			const Attribute::Key SuitableFor = 2603760207;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// iceanim.h:122
		const Attribute::Key iceanim = 2845295086;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct iceanim {
			// iceanim.h:104
			struct _LayoutStruct {
				// attribsys.h:875
				typedef uint32_t UInt32;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// iceanim.h:126
		namespace iceanim {
			// iceanim.h:128
			const Attribute::Key Guid = [0, 0, 0, 0, 85, 8, 136, 189];

			// iceanim.h:129
			const Attribute::Key LastTimeUsed = 2975997252;

			// iceanim.h:130
			const Attribute::Key ShotProperties = 1399762165;

			// iceanim.h:131
			const Attribute::Key SuitableFor = 2603760207;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// iceanim.h:122
		const Attribute::Key iceanim = 2845295086;

	}

}

// iceanim.h:13
struct Attrib::Gen::iceanim : Instance {
public:
	// iceanim.h:15
	Attribute::Key ClassKey();

	// iceanim.h:17
	void * operator new(size_t);

	// iceanim.h:17
	void operator delete(void *, size_t);

	// iceanim.h:17
	void * operator new(size_t, void *);

	// iceanim.h:17
	void operator delete(void *, void *);

	// iceanim.h:18
	void iceanim(const Attrib::Collection *, uint32_t);

	// iceanim.h:19
	void iceanim(const iceanim &);

	// iceanim.h:20
	void iceanim(const Attrib::Instance &);

	// iceanim.h:21
	void iceanim(const Attrib::RefSpec &, uint32_t);

	// iceanim.h:22
	void iceanim(Attribute::Key, uint32_t);

	// iceanim.h:23
	void ~iceanim();

	// iceanim.h:25
	Attribute::Key GetClass() const;

	// iceanim.h:27
	Instance & GetBase();

	// iceanim.h:28
	const Attrib::Instance & GetBase() const;

	// iceanim.h:30
	void Modify(Attribute::Key, unsigned int);

	// iceanim.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// iceanim.h:32
	void Change(const Attrib::Collection *);

	// iceanim.h:33
	void Change(const Attrib::RefSpec &);

	// iceanim.h:34
	void Change(Attribute::Key);

	// iceanim.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// iceanim.h:36
	void ChangeWithDefault(Attribute::Key);

	// iceanim.h:38
	const iceanim & operator=(const iceanim &);

	// iceanim.h:39
	const iceanim & operator=(const Attrib::Instance &);

	// iceanim.h:40
	bool operator==(const iceanim &) const;

	// iceanim.h:41
	bool operator==(const Attrib::Instance &) const;

	// iceanim.h:42
	bool operator!=(const iceanim &) const;

	// iceanim.h:43
	bool operator!=(const Attrib::Instance &) const;

	// iceanim.h:73
	bool Guid(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// iceanim.h:74
	bool Guid(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// iceanim.h:75
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & Guid() const;

	// iceanim.h:76
	bool Set_Guid(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// iceanim.h:80
	bool LastTimeUsed(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// iceanim.h:81
	bool LastTimeUsed(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// iceanim.h:82
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & LastTimeUsed() const;

	// iceanim.h:83
	bool Set_LastTimeUsed(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// iceanim.h:87
	bool ShotProperties(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// iceanim.h:88
	bool ShotProperties(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// iceanim.h:89
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & ShotProperties() const;

	// iceanim.h:90
	bool Set_ShotProperties(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// iceanim.h:94
	bool SuitableFor(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// iceanim.h:95
	bool SuitableFor(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// iceanim.h:96
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & SuitableFor() const;

	// iceanim.h:97
	bool Set_SuitableFor(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

private:
	// iceanim.h:111
	unsigned int GetLayoutSize();

	// iceanim.h:114
	iceanim & ConvertFromInstance(Instance &);

	// iceanim.h:115
	const iceanim & ConvertFromInstance(const Attrib::Instance &);

}

// attribuserinclude.h:119
namespace Attrib {
	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// iceanim.h:126
		namespace iceanim {
			// iceanim.h:128
			const Attribute::Key Guid = [0, 0, 0, 0, 85, 8, 136, 189];

			// iceanim.h:129
			const Attribute::Key LastTimeUsed = 2975997252;

			// iceanim.h:130
			const Attribute::Key ShotProperties = 1399762165;

			// iceanim.h:131
			const Attribute::Key SuitableFor = 2603760207;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// iceanim.h:122
		const Attribute::Key iceanim = 2845295086;

	}

}

