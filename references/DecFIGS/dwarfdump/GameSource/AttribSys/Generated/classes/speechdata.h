// attribuserinclude.h:119
namespace Attrib {
	// streammappings.h:105
	namespace Hash {
		// speechdata.h:200
		namespace speechdata {
			// speechdata.h:202
			const Attribute::Key AtomikaFreeburn = [0, 0, 0, 0, 148, 214, 0, 45];

			// speechdata.h:203
			const Attribute::Key FirstTimeTips = [0, 0, 0, 0, 86, 79, 201, 102];

			// speechdata.h:204
			const Attribute::Key LicenseUpgradeVoiceOvers = [0, 0, 0, 0, 50, 22, 205, 204];

			// speechdata.h:205
			const Attribute::Key LoseBurningRoute = [0, 0, 0, 0, 126, 128, 155, 142];

			// speechdata.h:206
			const Attribute::Key LoseMarkedMan = [0, 0, 0, 0, 116, 134, 69, 251];

			// speechdata.h:207
			const Attribute::Key LoseRace = 1453767675;

			// speechdata.h:208
			const Attribute::Key LoseRoadRage = 1414335687;

			// speechdata.h:209
			const Attribute::Key LoseStuntRun = [0, 0, 0, 0, 42, 26, 183, 73];

			// speechdata.h:210
			const Attribute::Key OnlineVoiceOvers = [0, 0, 0, 0, 255, 57, 226, 222];

			// speechdata.h:211
			const Attribute::Key RoadRageIntros = 1042661986;

			// speechdata.h:212
			const Attribute::Key RoadRageIntrosShort = [0, 0, 0, 0, 241, 200, 206, 188];

			// speechdata.h:213
			const Attribute::Key StuntRunIntros = 3160781819;

			// speechdata.h:214
			const Attribute::Key StuntRunIntrosShort = 4271214187;

		}

	}

	// streammappings.h:101
	namespace ClassName {
		// speechdata.h:196
		const Attribute::Key speechdata = 4164553320;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		// Declaration
		struct speechdata {
			// speechdata.h:174
			struct _LayoutStruct {
				// speechdata.h:175
				Private _Array_OnlineVoiceOvers;

				// speechdata.h:176
				RefSpec[10] OnlineVoiceOvers;

				// speechdata.h:177
				RefSpec LoseStuntRun;

				// speechdata.h:178
				RefSpec LoseRoadRage;

				// speechdata.h:179
				RefSpec LoseRace;

				// speechdata.h:180
				RefSpec LoseMarkedMan;

				// speechdata.h:181
				RefSpec LoseBurningRoute;

				// speechdata.h:182
				RefSpec AtomikaFreeburn;

			}

		}

	}

	// physicsvehiclebaseattribs.h:613
	namespace Hash {
		// speechdata.h:200
		namespace speechdata {
			// speechdata.h:202
			const Attribute::Key AtomikaFreeburn = [0, 0, 0, 0, 148, 214, 0, 45];

			// speechdata.h:203
			const Attribute::Key FirstTimeTips = [0, 0, 0, 0, 86, 79, 201, 102];

			// speechdata.h:204
			const Attribute::Key LicenseUpgradeVoiceOvers = [0, 0, 0, 0, 50, 22, 205, 204];

			// speechdata.h:205
			const Attribute::Key LoseBurningRoute = [0, 0, 0, 0, 126, 128, 155, 142];

			// speechdata.h:206
			const Attribute::Key LoseMarkedMan = [0, 0, 0, 0, 116, 134, 69, 251];

			// speechdata.h:207
			const Attribute::Key LoseRace = 1453767675;

			// speechdata.h:208
			const Attribute::Key LoseRoadRage = 1414335687;

			// speechdata.h:209
			const Attribute::Key LoseStuntRun = [0, 0, 0, 0, 42, 26, 183, 73];

			// speechdata.h:210
			const Attribute::Key OnlineVoiceOvers = [0, 0, 0, 0, 255, 57, 226, 222];

			// speechdata.h:211
			const Attribute::Key RoadRageIntros = 1042661986;

			// speechdata.h:212
			const Attribute::Key RoadRageIntrosShort = [0, 0, 0, 0, 241, 200, 206, 188];

			// speechdata.h:213
			const Attribute::Key StuntRunIntros = 3160781819;

			// speechdata.h:214
			const Attribute::Key StuntRunIntrosShort = 4271214187;

		}

	}

	// physicsvehiclebaseattribs.h:609
	namespace ClassName {
		// speechdata.h:196
		const Attribute::Key speechdata = 4164553320;

	}

}

// speechdata.h:13
struct Attrib::Gen::speechdata : Instance {
public:
	// speechdata.h:15
	Attribute::Key ClassKey();

	// speechdata.h:17
	void * operator new(size_t);

	// speechdata.h:17
	void operator delete(void *, size_t);

	// speechdata.h:17
	void * operator new(size_t, void *);

	// speechdata.h:17
	void operator delete(void *, void *);

	// speechdata.h:18
	void speechdata(const Attrib::Collection *, uint32_t);

	// speechdata.h:19
	void speechdata(const speechdata &);

	// speechdata.h:20
	void speechdata(const Attrib::Instance &);

	// speechdata.h:21
	void speechdata(const Attrib::RefSpec &, uint32_t);

	// speechdata.h:22
	void speechdata(Attribute::Key, uint32_t);

	// speechdata.h:23
	void ~speechdata();

	// speechdata.h:25
	Attribute::Key GetClass() const;

	// speechdata.h:27
	Instance & GetBase();

	// speechdata.h:28
	const Attrib::Instance & GetBase() const;

	// speechdata.h:30
	void Modify(Attribute::Key, unsigned int);

	// speechdata.h:31
	Attribute::Key GenerateUniqueKey(const char *) const;

	// speechdata.h:32
	void Change(const Attrib::Collection *);

	// speechdata.h:33
	void Change(const Attrib::RefSpec &);

	// speechdata.h:34
	void Change(Attribute::Key);

	// speechdata.h:35
	void ChangeWithDefault(const Attrib::RefSpec &);

	// speechdata.h:36
	void ChangeWithDefault(Attribute::Key);

	// speechdata.h:38
	const speechdata & operator=(const speechdata &);

	// speechdata.h:39
	const speechdata & operator=(const Attrib::Instance &);

	// speechdata.h:40
	bool operator==(const speechdata &) const;

	// speechdata.h:41
	bool operator==(const Attrib::Instance &) const;

	// speechdata.h:42
	bool operator!=(const speechdata &) const;

	// speechdata.h:43
	bool operator!=(const Attrib::Instance &) const;

	// speechdata.h:73
	bool AtomikaFreeburn(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:74
	bool AtomikaFreeburn(RefSpec &) const;

	// speechdata.h:75
	const Attrib::RefSpec & AtomikaFreeburn() const;

	// speechdata.h:76
	bool Set_AtomikaFreeburn(const Attrib::RefSpec &);

	// speechdata.h:80
	bool FirstTimeTips(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:81
	bool FirstTimeTips(RefSpec &, unsigned int) const;

	// speechdata.h:82
	const Attrib::RefSpec & FirstTimeTips(unsigned int) const;

	// speechdata.h:83
	unsigned int Num_FirstTimeTips() const;

	// speechdata.h:84
	bool Set_FirstTimeTips(const Attrib::RefSpec &, unsigned int);

	// speechdata.h:88
	bool LicenseUpgradeVoiceOvers(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:89
	bool LicenseUpgradeVoiceOvers(RefSpec &, unsigned int) const;

	// speechdata.h:90
	const Attrib::RefSpec & LicenseUpgradeVoiceOvers(unsigned int) const;

	// speechdata.h:91
	unsigned int Num_LicenseUpgradeVoiceOvers() const;

	// speechdata.h:92
	bool Set_LicenseUpgradeVoiceOvers(const Attrib::RefSpec &, unsigned int);

	// speechdata.h:96
	bool LoseBurningRoute(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:97
	bool LoseBurningRoute(RefSpec &) const;

	// speechdata.h:98
	const Attrib::RefSpec & LoseBurningRoute() const;

	// speechdata.h:99
	bool Set_LoseBurningRoute(const Attrib::RefSpec &);

	// speechdata.h:103
	bool LoseMarkedMan(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:104
	bool LoseMarkedMan(RefSpec &) const;

	// speechdata.h:105
	const Attrib::RefSpec & LoseMarkedMan() const;

	// speechdata.h:106
	bool Set_LoseMarkedMan(const Attrib::RefSpec &);

	// speechdata.h:110
	bool LoseRace(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:111
	bool LoseRace(RefSpec &) const;

	// speechdata.h:112
	const Attrib::RefSpec & LoseRace() const;

	// speechdata.h:113
	bool Set_LoseRace(const Attrib::RefSpec &);

	// speechdata.h:117
	bool LoseRoadRage(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:118
	bool LoseRoadRage(RefSpec &) const;

	// speechdata.h:119
	const Attrib::RefSpec & LoseRoadRage() const;

	// speechdata.h:120
	bool Set_LoseRoadRage(const Attrib::RefSpec &);

	// speechdata.h:124
	bool LoseStuntRun(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:125
	bool LoseStuntRun(RefSpec &) const;

	// speechdata.h:126
	const Attrib::RefSpec & LoseStuntRun() const;

	// speechdata.h:127
	bool Set_LoseStuntRun(const Attrib::RefSpec &);

	// speechdata.h:131
	bool OnlineVoiceOvers(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:132
	bool OnlineVoiceOvers(RefSpec &, unsigned int) const;

	// speechdata.h:133
	const Attrib::RefSpec & OnlineVoiceOvers(unsigned int) const;

	// speechdata.h:134
	unsigned int Num_OnlineVoiceOvers() const;

	// speechdata.h:135
	bool Set_OnlineVoiceOvers(const Attrib::RefSpec &, unsigned int);

	// speechdata.h:139
	bool RoadRageIntros(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:140
	bool RoadRageIntros(RefSpec &, unsigned int) const;

	// speechdata.h:141
	const Attrib::RefSpec & RoadRageIntros(unsigned int) const;

	// speechdata.h:142
	unsigned int Num_RoadRageIntros() const;

	// speechdata.h:143
	bool Set_RoadRageIntros(const Attrib::RefSpec &, unsigned int);

	// speechdata.h:147
	bool RoadRageIntrosShort(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:148
	bool RoadRageIntrosShort(RefSpec &, unsigned int) const;

	// speechdata.h:149
	const Attrib::RefSpec & RoadRageIntrosShort(unsigned int) const;

	// speechdata.h:150
	unsigned int Num_RoadRageIntrosShort() const;

	// speechdata.h:151
	bool Set_RoadRageIntrosShort(const Attrib::RefSpec &, unsigned int);

	// speechdata.h:155
	bool StuntRunIntros(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:156
	bool StuntRunIntros(RefSpec &, unsigned int) const;

	// speechdata.h:157
	const Attrib::RefSpec & StuntRunIntros(unsigned int) const;

	// speechdata.h:158
	unsigned int Num_StuntRunIntros() const;

	// speechdata.h:159
	bool Set_StuntRunIntros(const Attrib::RefSpec &, unsigned int);

	// speechdata.h:163
	bool StuntRunIntrosShort(Attrib::TAttrib<Attrib::RefSpec> &) const;

	// speechdata.h:164
	bool StuntRunIntrosShort(RefSpec &, unsigned int) const;

	// speechdata.h:165
	const Attrib::RefSpec & StuntRunIntrosShort(unsigned int) const;

	// speechdata.h:166
	unsigned int Num_StuntRunIntrosShort() const;

	// speechdata.h:167
	bool Set_StuntRunIntrosShort(const Attrib::RefSpec &, unsigned int);

private:
	// speechdata.h:185
	unsigned int GetLayoutSize();

	// speechdata.h:188
	speechdata & ConvertFromInstance(Instance &);

	// speechdata.h:189
	const speechdata & ConvertFromInstance(const Attrib::Instance &);

}

