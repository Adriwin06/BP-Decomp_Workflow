// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// presentationcomponent.h:152
		namespace presentationcomponent {
			// presentationcomponent.h:154
			const Attribute::Key ChokeGroups = [0, 0, 0, 0, 186, 137, 191, 38];

			// presentationcomponent.h:155
			const Attribute::Key LastSpliceIndices = [0, 0, 0, 0, 35, 73, 143, 122];

			// presentationcomponent.h:156
			const Attribute::Key MessageIds = 558413907;

			// presentationcomponent.h:157
			const Attribute::Key MixerOutputs = [0, 0, 0, 0, 54, 182, 76, 238];

			// presentationcomponent.h:158
			const Attribute::Key NumMappings = [0, 0, 0, 0, 79, 254, 102, 208];

			// presentationcomponent.h:159
			const Attribute::Key SpliceIndices = 3685132844;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// presentationcomponent.h:148
		const Attribute::Key presentationcomponent = [0, 0, 0, 0, 208, 40, 169, 116];

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct presentationcomponent {
			// presentationcomponent.h:123
			struct _LayoutStruct {
				// presentationcomponent.h:124
				Private _Array_MessageIds;

				// presentationcomponent.h:125
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64[256] MessageIds;

				// presentationcomponent.h:126
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 NumMappings;

				// presentationcomponent.h:127
				Private _Array_SpliceIndices;

				// attribsys.h:876
				typedef uint16_t UInt16;

				// presentationcomponent.h:128
				Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16[256] SpliceIndices;

				// presentationcomponent.h:129
				Private _Array_LastSpliceIndices;

				// presentationcomponent.h:130
				Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16[256] LastSpliceIndices;

				// presentationcomponent.h:131
				Private _Array_MixerOutputs;

				// presentationcomponent.h:132
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] MixerOutputs;

				// presentationcomponent.h:133
				Private _Array_ChokeGroups;

				// presentationcomponent.h:134
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] ChokeGroups;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// presentationcomponent.h:152
		namespace presentationcomponent {
			// presentationcomponent.h:154
			const Attribute::Key ChokeGroups = [0, 0, 0, 0, 186, 137, 191, 38];

			// presentationcomponent.h:155
			const Attribute::Key LastSpliceIndices = [0, 0, 0, 0, 35, 73, 143, 122];

			// presentationcomponent.h:156
			const Attribute::Key MessageIds = 558413907;

			// presentationcomponent.h:157
			const Attribute::Key MixerOutputs = [0, 0, 0, 0, 54, 182, 76, 238];

			// presentationcomponent.h:158
			const Attribute::Key NumMappings = [0, 0, 0, 0, 79, 254, 102, 208];

			// presentationcomponent.h:159
			const Attribute::Key SpliceIndices = 3685132844;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// presentationcomponent.h:148
		const Attribute::Key presentationcomponent = [0, 0, 0, 0, 208, 40, 169, 116];

	}

}

// presentationcomponent.h:13
struct Attrib::Gen::presentationcomponent : Instance {
public:
	// presentationcomponent.h:15
	Attribute::Key ClassKey();

	// presentationcomponent.h:17
	void * operator new(size_t);

	// presentationcomponent.h:17
	void operator delete(void *, size_t);

	// presentationcomponent.h:17
	void * operator new(size_t, void *);

	// presentationcomponent.h:17
	void operator delete(void *, void *);

	// presentationcomponent.h:18
	void presentationcomponent(const Attrib::Collection *, uint32_t);

	// presentationcomponent.h:19
	void presentationcomponent(const presentationcomponent &);

	// presentationcomponent.h:20
	void presentationcomponent(const Attrib::Instance &);

	// presentationcomponent.h:21
	void presentationcomponent(const Attrib::RefSpec &, uint32_t);

	// presentationcomponent.h:22
	void presentationcomponent(Attribute::Key, uint32_t);

	// presentationcomponent.h:23
	void ~presentationcomponent();

	// presentationcomponent.h:25
	Attribute::Key GetClass() const;

	// presentationcomponent.h:27
	Instance & GetBase();

	// presentationcomponent.h:28
	const Attrib::Instance & GetBase() const;

	// presentationcomponent.h:30
	void Modify(Attribute::Key, unsigned int);

	// presentationcomponent.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// presentationcomponent.h:32
	void Change(const Attrib::Collection *);

	// presentationcomponent.h:33
	void Change(const Attrib::RefSpec &);

	// presentationcomponent.h:34
	void Change(Attribute::Key);

	// presentationcomponent.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// presentationcomponent.h:36
	void ChangeWithDefault(Attribute::Key);

	// presentationcomponent.h:38
	const presentationcomponent & operator=(const presentationcomponent &);

	// presentationcomponent.h:39
	const presentationcomponent & operator=(const Attrib::Instance &);

	// presentationcomponent.h:40
	bool operator==(const presentationcomponent &) const;

	// presentationcomponent.h:41
	bool operator==(const Attrib::Instance &) const;

	// presentationcomponent.h:42
	bool operator!=(const presentationcomponent &) const;

	// presentationcomponent.h:43
	bool operator!=(const Attrib::Instance &) const;

	// presentationcomponent.h:73
	bool ChokeGroups(Attrib::TAttrib<EA::Reflection::UInt8> &) const;

	// presentationcomponent.h:74
	bool ChokeGroups(Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int) const;

	// presentationcomponent.h:75
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & ChokeGroups(unsigned int) const;

	// presentationcomponent.h:76
	unsigned int Num_ChokeGroups() const;

	// presentationcomponent.h:77
	bool Set_ChokeGroups(const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int);

	// presentationcomponent.h:81
	bool LastSpliceIndices(Attrib::TAttrib<EA::Reflection::UInt16> &) const;

	// presentationcomponent.h:82
	bool LastSpliceIndices(Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &, unsigned int) const;

	// presentationcomponent.h:83
	const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 & LastSpliceIndices(unsigned int) const;

	// presentationcomponent.h:84
	unsigned int Num_LastSpliceIndices() const;

	// presentationcomponent.h:85
	bool Set_LastSpliceIndices(const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &, unsigned int);

	// presentationcomponent.h:89
	bool MessageIds(Attrib::TAttrib<EA::Reflection::Int64> &) const;

	// presentationcomponent.h:90
	bool MessageIds(Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int) const;

	// presentationcomponent.h:91
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 & MessageIds(unsigned int) const;

	// presentationcomponent.h:92
	unsigned int Num_MessageIds() const;

	// presentationcomponent.h:93
	bool Set_MessageIds(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int);

	// presentationcomponent.h:97
	bool MixerOutputs(Attrib::TAttrib<EA::Reflection::UInt8> &) const;

	// presentationcomponent.h:98
	bool MixerOutputs(Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int) const;

	// presentationcomponent.h:99
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & MixerOutputs(unsigned int) const;

	// presentationcomponent.h:100
	unsigned int Num_MixerOutputs() const;

	// presentationcomponent.h:101
	bool Set_MixerOutputs(const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int);

	// presentationcomponent.h:105
	bool NumMappings(Attrib::TAttrib<EA::Reflection::Int32> &) const;

	// presentationcomponent.h:106
	bool NumMappings(Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// presentationcomponent.h:107
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & NumMappings() const;

	// presentationcomponent.h:108
	bool Set_NumMappings(const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// presentationcomponent.h:112
	bool SpliceIndices(Attrib::TAttrib<EA::Reflection::UInt16> &) const;

	// presentationcomponent.h:113
	bool SpliceIndices(Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &, unsigned int) const;

	// presentationcomponent.h:114
	const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 & SpliceIndices(unsigned int) const;

	// presentationcomponent.h:115
	unsigned int Num_SpliceIndices() const;

	// presentationcomponent.h:116
	bool Set_SpliceIndices(const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &, unsigned int);

private:
	// presentationcomponent.h:137
	unsigned int GetLayoutSize();

	// presentationcomponent.h:140
	presentationcomponent & ConvertFromInstance(Instance &);

	// presentationcomponent.h:141
	const presentationcomponent & ConvertFromInstance(const Attrib::Instance &);

}

