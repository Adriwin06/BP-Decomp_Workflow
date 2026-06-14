// pluginregistry.h:70
struct rw::audio::core::PlugInRegistry {
private:
	// pluginregistry.h:594
	ListQueue mPlugInDescRunTimeList;

	// pluginregistry.h:595
	ListNode * mpEnumerator;

	// pluginregistry.h:596
	System * mpSystem;

	// pluginregistry.h:599
	PlugInRegistryEntry[48] mPlugInRegistryEntry;

	// pluginregistry.h:601
	unsigned char mNumPlugInsRegistered;

	// pluginregistry.h:608
	unsigned char mCurrentRegistryIndex;

	// Unknown accessibility
	// plugin.h:1548
	typedef PlugInDescRunTime * PlugInHandle;

public:
	// pluginregistry.h:117
	void RegisterStandardRunTimePlugIns();

	// pluginregistry.h:157
	PlugInRegistry::PlugInHandle GetPlugInHandle(DecoderDesc::Guid) const;

	// pluginregistry.h:195
	PlugInRegistry::PlugInHandle RegisterPlugInRunTime(PlugInDescRunTime *);

	// pluginregistry.h:214
	void RegisterAllPlugIns();

	// pluginregistry.h:250
	void EnumerateReset();

	// pluginregistry.h:267
	bool EnumerateGuid(DecoderDesc::Guid *);

	// pluginregistry.h:283
	const char * GetPlugInName(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:289
	const char * GetPlugInHelp(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:292
	const ChannelMapPair * GetSupportedChannelMaps(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:298
	bool IsChannelMapSupported(const ChannelMapPair *, int, int);

	// pluginregistry.h:301
	bool IsVariableInputChannelsSupported(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:304
	bool IsVariableOutputChannelsSupported(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:319
	bool AreMultiplePlugInsOfThisTypeLegal(rw::audio::core::PlugInType);

	// pluginregistry.h:322
	int GetNumConstructorParameters(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:326
	ParameterDescRunTime * GetConstructorParameter(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:343
	int GetNumAttributes(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:351
	ParameterDescRunTime * GetAttribute(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:376
	int GetNumEvents(PlugInRegistry::PlugInHandle) const;

	// pluginregistry.h:404
	const char * GetEventNameSaf(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:407
	const char * GetEventNameCppEnum(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:410
	const char * GetEventNameCppStruct(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:413
	const char * GetEventHelp(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:431
	int GetNumParameters(PlugInRegistry::PlugInHandle, int) const;

	// pluginregistry.h:435
	ParameterDescRunTime * GetEventParameter(PlugInRegistry::PlugInHandle, int, int) const;

	// pluginregistry.h:455
	const char * GetParameterNameSaf(ParameterDescRunTime *);

	// pluginregistry.h:458
	const char * GetParameterNameCpp(ParameterDescRunTime *) const;

	// pluginregistry.h:468
	const char * GetParameterHelp(ParameterDescRunTime *);

	// pluginregistry.h:471
	rw::audio::core::ParameterType GetParameterType(ParameterDescRunTime *) const;

	// pluginregistry.h:480
	const char * GetParameterUnits(ParameterDescRunTime *);

	// pluginregistry.h:483
	rw::audio::core::ParameterDirection GetParameterDirection(ParameterDescRunTime *);

	// pluginregistry.h:486
	double GetParameterMinValue(ParameterDescRunTime *);

	// pluginregistry.h:489
	double GetParameterMaxValue(ParameterDescRunTime *);

	// pluginregistry.h:492
	double GetParameterMinExtremeValue(ParameterDescRunTime *);

	// pluginregistry.h:495
	double GetParameterMaxExtremeValue(ParameterDescRunTime *);

	// pluginregistry.h:498
	double GetParameterDefaultValue(ParameterDescRunTime *);

	// pluginregistry.h:501
	EnumDesc * GetParameterEnum(ParameterDescRunTime *) const;

	// pluginregistry.h:511
	int GetEnumNumMembers(EnumDesc *) const;

	// pluginregistry.h:520
	const char * GetEnumName(EnumDesc *);

	// pluginregistry.h:523
	const char * GetEnumHelp(EnumDesc *);

	// pluginregistry.h:526
	const char * GetEnumMemberNameSaf(EnumDesc *, int);

	// pluginregistry.h:529
	const char * GetEnumMemberNameCpp(EnumDesc *, int) const;

	// pluginregistry.h:538
	const char * GetEnumMemberHelp(EnumDesc *, int);

	// pluginregistry.h:541
	int GetEnumMemberValue(EnumDesc *, int) const;

	// pluginregistry.h:551
	void RegisterParameterDescToolSide(PlugInDescRunTime *, ParameterDescToolSide *, EventDescToolSide *);

	// pluginregistry.h:555
	PlugInRegistryEntry * GetPlugInRegistryEntries();

	// pluginregistry.h:561
	unsigned int GetNumPlugInsRegistered();

private:
	// pluginregistry.h:578
	void PlugInRegistry();

	// pluginregistry.h:579
	void ~PlugInRegistry();

	// pluginregistry.h:582
	rw::audio::core::PlugInRegistry * CreateInstance(System *);

	// pluginregistry.h:584
	void Release();

	// pluginregistry.h:586
	PlugInDescRunTime * GetPlugInDescRunTimeFromNode(ListNode *) const;

	// pluginregistry.h:592
	int RegisterPlugInRunTimeHandler(Command *);

}

// pluginregistry.h:632
struct rw::audio::core::PlugInConfig {
	// pluginregistry.h:654
	void * pConstructorParams;

	// pluginregistry.h:663
	PlugInRegistry::PlugInHandle plugInHandle;

	// pluginregistry.h:688
	unsigned char outputChannels;

}

