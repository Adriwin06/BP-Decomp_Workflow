// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// presentationactionlist.h:183
		namespace presentationactionlist {
			// presentationactionlist.h:185
			const Attribute::Key Actions = [0, 0, 0, 0, 101, 53, 167, 15];

			// presentationactionlist.h:186
			const Attribute::Key Behaviours = [0, 0, 0, 0, 78, 68, 60, 162];

			// presentationactionlist.h:187
			const Attribute::Key ChokeGroups = [0, 0, 0, 0, 186, 137, 191, 38];

			// presentationactionlist.h:188
			const Attribute::Key ContentSpecNames = [0, 0, 0, 0, 241, 252, 164, 70];

			// presentationactionlist.h:189
			const Attribute::Key CustomStringIds = 2524072165;

			// presentationactionlist.h:190
			const Attribute::Key MixerOutputs = [0, 0, 0, 0, 54, 182, 76, 238];

			// presentationactionlist.h:191
			const Attribute::Key NumOfActions = [0, 0, 0, 0, 173, 184, 173, 192];

			// presentationactionlist.h:192
			const Attribute::Key ScreenIds = 4009562393;

			// presentationactionlist.h:193
			const Attribute::Key SpliceIndicies = 3420824212;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// presentationactionlist.h:179
		const Attribute::Key presentationactionlist = 2334989871;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct presentationactionlist {
			// presentationactionlist.h:148
			struct _LayoutStruct {
				// presentationactionlist.h:149
				Private _Array_ScreenIds;

				// presentationactionlist.h:150
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64[256] ScreenIds;

				// presentationactionlist.h:151
				Private _Array_CustomStringIds;

				// presentationactionlist.h:152
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64[256] CustomStringIds;

				// presentationactionlist.h:153
				Private _Array_ContentSpecNames;

				// presentationactionlist.h:154
				Attrib::Gen::iceanim::_LayoutStruct::UInt32[256] ContentSpecNames;

				// presentationactionlist.h:155
				Private _Array_Actions;

				// presentationactionlist.h:156
				AttribSys::Enums::PresentationAction::PresentationAction[256] Actions;

				// presentationactionlist.h:157
				Private _Array_SpliceIndicies;

				// presentationactionlist.h:158
				Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16[256] SpliceIndicies;

				// presentationactionlist.h:159
				Private _Array_MixerOutputs;

				// presentationactionlist.h:160
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] MixerOutputs;

				// presentationactionlist.h:161
				Private _Array_ChokeGroups;

				// presentationactionlist.h:162
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] ChokeGroups;

				// presentationactionlist.h:163
				Private _Array_Behaviours;

				// presentationactionlist.h:164
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] Behaviours;

				// presentationactionlist.h:165
				Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 NumOfActions;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// presentationactionlist.h:183
		namespace presentationactionlist {
			// presentationactionlist.h:185
			const Attribute::Key Actions = [0, 0, 0, 0, 101, 53, 167, 15];

			// presentationactionlist.h:186
			const Attribute::Key Behaviours = [0, 0, 0, 0, 78, 68, 60, 162];

			// presentationactionlist.h:187
			const Attribute::Key ChokeGroups = [0, 0, 0, 0, 186, 137, 191, 38];

			// presentationactionlist.h:188
			const Attribute::Key ContentSpecNames = [0, 0, 0, 0, 241, 252, 164, 70];

			// presentationactionlist.h:189
			const Attribute::Key CustomStringIds = 2524072165;

			// presentationactionlist.h:190
			const Attribute::Key MixerOutputs = [0, 0, 0, 0, 54, 182, 76, 238];

			// presentationactionlist.h:191
			const Attribute::Key NumOfActions = [0, 0, 0, 0, 173, 184, 173, 192];

			// presentationactionlist.h:192
			const Attribute::Key ScreenIds = 4009562393;

			// presentationactionlist.h:193
			const Attribute::Key SpliceIndicies = 3420824212;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// presentationactionlist.h:179
		const Attribute::Key presentationactionlist = 2334989871;

	}

}

// presentationactionlist.h:14
struct Attrib::Gen::presentationactionlist : Instance {
public:
	// presentationactionlist.h:16
	Attribute::Key ClassKey();

	// presentationactionlist.h:18
	void * operator new(size_t);

	// presentationactionlist.h:18
	void operator delete(void *, size_t);

	// presentationactionlist.h:18
	void * operator new(size_t, void *);

	// presentationactionlist.h:18
	void operator delete(void *, void *);

	// presentationactionlist.h:19
	void presentationactionlist(const Attrib::Collection *, uint32_t);

	// presentationactionlist.h:20
	void presentationactionlist(const presentationactionlist &);

	// presentationactionlist.h:21
	void presentationactionlist(const Attrib::Instance &);

	// presentationactionlist.h:22
	void presentationactionlist(const Attrib::RefSpec &, uint32_t);

	// presentationactionlist.h:23
	void presentationactionlist(Attribute::Key, uint32_t);

	// presentationactionlist.h:24
	void ~presentationactionlist();

	// presentationactionlist.h:26
	Attribute::Key GetClass() const;

	// presentationactionlist.h:28
	Instance & GetBase();

	// presentationactionlist.h:29
	const Attrib::Instance & GetBase() const;

	// presentationactionlist.h:31
	void Modify(Attribute::Key, unsigned int);

	// presentationactionlist.h:32
	Attribute::Key GenerateUniqueKey(const char *) const;

	// presentationactionlist.h:33
	void Change(const Attrib::Collection *);

	// presentationactionlist.h:34
	void Change(const Attrib::RefSpec &);

	// presentationactionlist.h:35
	void Change(Attribute::Key);

	// presentationactionlist.h:36
	void ChangeWithDefault(const Attrib::RefSpec &);

	// presentationactionlist.h:37
	void ChangeWithDefault(Attribute::Key);

	// presentationactionlist.h:39
	const presentationactionlist & operator=(const presentationactionlist &);

	// presentationactionlist.h:40
	const presentationactionlist & operator=(const Attrib::Instance &);

	// presentationactionlist.h:41
	bool operator==(const presentationactionlist &) const;

	// presentationactionlist.h:42
	bool operator==(const Attrib::Instance &) const;

	// presentationactionlist.h:43
	bool operator!=(const presentationactionlist &) const;

	// presentationactionlist.h:44
	bool operator!=(const Attrib::Instance &) const;

	// presentationactionlist.h:74
	bool Actions(Attrib::TAttrib<AttribSys::Enums::PresentationAction::PresentationAction> &) const;

	// presentationactionlist.h:75
	bool Actions(AttribSys::Enums::PresentationAction::PresentationAction &, unsigned int) const;

	// presentationactionlist.h:76
	const AttribSys::Enums::PresentationAction::PresentationAction & Actions(unsigned int) const;

	// presentationactionlist.h:77
	unsigned int Num_Actions() const;

	// presentationactionlist.h:78
	bool Set_Actions(const AttribSys::Enums::PresentationAction::PresentationAction &, unsigned int);

	// presentationactionlist.h:82
	bool Behaviours(Attrib::TAttrib<EA::Reflection::UInt8> &) const;

	// presentationactionlist.h:83
	bool Behaviours(Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int) const;

	// presentationactionlist.h:84
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & Behaviours(unsigned int) const;

	// presentationactionlist.h:85
	unsigned int Num_Behaviours() const;

	// presentationactionlist.h:86
	bool Set_Behaviours(const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int);

	// presentationactionlist.h:90
	bool ChokeGroups(Attrib::TAttrib<EA::Reflection::UInt8> &) const;

	// presentationactionlist.h:91
	bool ChokeGroups(Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int) const;

	// presentationactionlist.h:92
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & ChokeGroups(unsigned int) const;

	// presentationactionlist.h:93
	unsigned int Num_ChokeGroups() const;

	// presentationactionlist.h:94
	bool Set_ChokeGroups(const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int);

	// presentationactionlist.h:98
	bool ContentSpecNames(Attrib::TAttrib<EA::Reflection::UInt32> &) const;

	// presentationactionlist.h:99
	bool ContentSpecNames(Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int) const;

	// presentationactionlist.h:100
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & ContentSpecNames(unsigned int) const;

	// presentationactionlist.h:101
	unsigned int Num_ContentSpecNames() const;

	// presentationactionlist.h:102
	bool Set_ContentSpecNames(const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &, unsigned int);

	// presentationactionlist.h:106
	bool CustomStringIds(Attrib::TAttrib<EA::Reflection::Int64> &) const;

	// presentationactionlist.h:107
	bool CustomStringIds(Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int) const;

	// presentationactionlist.h:108
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 & CustomStringIds(unsigned int) const;

	// presentationactionlist.h:109
	unsigned int Num_CustomStringIds() const;

	// presentationactionlist.h:110
	bool Set_CustomStringIds(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int);

	// presentationactionlist.h:114
	bool MixerOutputs(Attrib::TAttrib<EA::Reflection::UInt8> &) const;

	// presentationactionlist.h:115
	bool MixerOutputs(Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int) const;

	// presentationactionlist.h:116
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & MixerOutputs(unsigned int) const;

	// presentationactionlist.h:117
	unsigned int Num_MixerOutputs() const;

	// presentationactionlist.h:118
	bool Set_MixerOutputs(const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &, unsigned int);

	// presentationactionlist.h:122
	bool NumOfActions(Attrib::TAttrib<EA::Reflection::UInt16> &) const;

	// presentationactionlist.h:123
	bool NumOfActions(Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &) const;

	// presentationactionlist.h:124
	const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 & NumOfActions() const;

	// presentationactionlist.h:125
	bool Set_NumOfActions(const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &);

	// presentationactionlist.h:129
	bool ScreenIds(Attrib::TAttrib<EA::Reflection::Int64> &) const;

	// presentationactionlist.h:130
	bool ScreenIds(Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int) const;

	// presentationactionlist.h:131
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 & ScreenIds(unsigned int) const;

	// presentationactionlist.h:132
	unsigned int Num_ScreenIds() const;

	// presentationactionlist.h:133
	bool Set_ScreenIds(const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &, unsigned int);

	// presentationactionlist.h:137
	bool SpliceIndicies(Attrib::TAttrib<EA::Reflection::UInt16> &) const;

	// presentationactionlist.h:138
	bool SpliceIndicies(Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &, unsigned int) const;

	// presentationactionlist.h:139
	const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 & SpliceIndicies(unsigned int) const;

	// presentationactionlist.h:140
	unsigned int Num_SpliceIndicies() const;

	// presentationactionlist.h:141
	bool Set_SpliceIndicies(const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &, unsigned int);

private:
	// presentationactionlist.h:168
	unsigned int GetLayoutSize();

	// presentationactionlist.h:171
	presentationactionlist & ConvertFromInstance(Instance &);

	// presentationactionlist.h:172
	const presentationactionlist & ConvertFromInstance(const Attrib::Instance &);

}

