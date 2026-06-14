// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsDataStructures.h:85
		enum EVoiceType {
			E_PLAYER_VOICE = 0,
			E_SUBMIX_VOICE = 1,
			E_MASTER_VOICE = 2,
			E_VOICE_TYPE_COUNT = 3,
		}

		// CgsDataStructures.h:96
		enum EContentLoadTime {
			E_CONTENT_LOAD_JUST_IN_TIME = 0,
			E_CONTENT_LOAD_IMMEDIATE = 1,
		}

		// CgsDataStructures.h:601
		enum EParameterDirection {
			E_PARAMETER_INPUT = 0,
			E_PARAMETER_OUTPUT = 1,
		}

		// CgsDataStructures.h:1773
		enum EContentLoadMethod {
			E_CONTENT_LOAD_INVALID = 0,
			E_CONTENT_LOAD_RESOURCE_MODULE = 1,
		}

	}

}

// CgsDataStructures.h:106
struct CgsSound::Playback::Entity {
private:
	// CgsDataStructures.h:201
	Name mName;

	// CgsDataStructures.h:202
	Name mTypeName;

public:
	// CgsDataStructures.h:109
	void Entity(Name);

	// CgsDataStructures.h:114
	void Entity(Name, Name);

	// CgsDataStructures.h:119
	void Entity(const Entity &);

	// CgsDataStructures.h:123
	void ~Entity();

	// CgsDataStructures.h:127
	Entity & operator=(const Entity &);

	// CgsDataStructures.h:137
	bool operator==(const Entity &) const;

	// CgsDataStructures.h:145
	Name GetName() const;

	// CgsDataStructures.h:152
	void SetName(Name);

	// CgsDataStructures.h:158
	Name GetTypeName() const;

	// CgsDataStructures.h:164
	void EndianSwap();

}

// CgsDataStructures.h:382
struct CgsSound::Playback::ContentClass : public Entity {
	// CgsDataStructures.h:384
	extern const Name SK_TYPE_NAME;

public:
	// CgsDataStructures.h:387
	size_t GetAllocationSize();

	// CgsDataStructures.h:393
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:398
	void ContentClass();

	// CgsDataStructures.h:401
	void ContentClass(Name);

	// CgsDataStructures.h:405
	void ContentClass(const ContentClass &);

	// CgsDataStructures.h:410
	ContentClass & operator=(const ContentClass &);

	// CgsDataStructures.h:419
	bool operator==(const ContentClass &) const;

	// CgsDataStructures.h:426
	bool operator!=(const ContentClass &) const;

}

// CgsDataStructures.h:440
struct CgsSound::Playback::ContentType : public Entity {
	// CgsDataStructures.h:443
	extern const Name SK_TYPE_NAME;

private:
	// CgsDataStructures.h:531
	const ContentClass * mpContentClass;

public:
	// CgsDataStructures.h:446
	size_t GetAllocationSize();

	// CgsDataStructures.h:452
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:457
	void ContentType();

	// CgsDataStructures.h:461
	void ContentType(Name, const ContentClass &);

	// CgsDataStructures.h:466
	void ContentType(const ContentType &);

	// CgsDataStructures.h:472
	ContentType & operator=(const ContentType &);

	// CgsDataStructures.h:482
	bool operator==(const ContentType &) const;

	// CgsDataStructures.h:491
	bool operator!=(const ContentType &) const;

	// CgsDataStructures.h:497
	const ContentClass & GetContentClass() const;

	// CgsDataStructures.h:506
	void SetContentClass(const ContentClass &);

}

// CgsDataStructures.h:612
struct CgsSound::Playback::ParameterSchema : public Entity {
	// CgsDataStructures.h:615
	extern const Name SK_TYPE_NAME;

private:
	// CgsDataStructures.h:698
	float mf32Minimum;

	// CgsDataStructures.h:699
	float mf32Maximum;

	// CgsDataStructures.h:700
	uint32_t mu32Direction;

public:
	// CgsDataStructures.h:618
	size_t GetAllocationSize();

	// CgsDataStructures.h:624
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:632
	void ParameterSchema();

	// CgsDataStructures.h:640
	void ParameterSchema(const ParameterSchema &);

	// CgsDataStructures.h:649
	ParameterSchema & operator=(const ParameterSchema &);

	// CgsDataStructures.h:659
	float GetMinimum() const;

	// CgsDataStructures.h:666
	void SetMinimum(float);

	// CgsDataStructures.h:672
	float GetMaximum() const;

	// CgsDataStructures.h:679
	void SetMaximum(float);

	// CgsDataStructures.h:685
	CgsSound::Playback::EParameterDirection GetDirection() const;

	// CgsDataStructures.h:692
	void SetDirection(CgsSound::Playback::EParameterDirection);

}

// CgsDataStructures.h:741
struct CgsSound::Playback::SlotSchema : public Entity {
	// CgsDataStructures.h:744
	extern const Name SK_TYPE_NAME;

private:
	// CgsDataStructures.h:812
	const ContentClass * mpContentClass;

public:
	// CgsDataStructures.h:747
	size_t GetAllocationSize();

	// CgsDataStructures.h:753
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:759
	void SlotSchema();

	// CgsDataStructures.h:763
	void SlotSchema(const SlotSchema &);

	// CgsDataStructures.h:769
	SlotSchema & operator=(const SlotSchema &);

	// CgsDataStructures.h:778
	const ContentClass & GetContentClass() const;

	// CgsDataStructures.h:787
	void SetContentClass(const ContentClass &);

}

// CgsDataStructures.h:887
struct CgsSound::Playback::FeatureSchema : public Entity {
	// CgsDataStructures.h:890
	extern const Name SK_TYPE_NAME;

private:
	// CgsDataStructures.h:1075
	uint32_t mu32ParameterSchemaCount;

	// CgsDataStructures.h:1076
	uint32_t mu32SlotSchemaCount;

	// CgsDataStructures.h:1077
	uint32_t mu32OutputParamCount;

public:
	// CgsDataStructures.h:895
	size_t GetAllocationSize(uint32_t, uint32_t);

	// CgsDataStructures.h:903
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:915
	void FeatureSchema(uint32_t, uint32_t);

	// CgsDataStructures.h:936
	uint32_t GetParameterSchemaCount() const;

	// CgsDataStructures.h:943
	const ParameterSchema & GetParameterSchema(uint32_t) const;

	// CgsDataStructures.h:954
	void SetParameterSchema(uint32_t, const ParameterSchema &);

	// CgsDataStructures.h:997
	uint32_t GetSlotSchemaCount() const;

	// CgsDataStructures.h:1004
	const SlotSchema & GetSlotSchema(uint32_t) const;

	// CgsDataStructures.h:1015
	void SetSlotSchema(uint32_t, const SlotSchema &);

	// CgsDataStructures.h:1043
	uint32_t GetOutputParamCount() const;

private:
	// CgsDataStructures.h:1051
	const ParameterSchema ** GetParameterSchemaAddress(uint32_t) const;

	// CgsDataStructures.h:1064
	const SlotSchema ** GetSlotSchemaAddress(uint32_t) const;

}

// CgsDataStructures.h:1233
struct CgsSound::Playback::VoiceSchema : public Entity {
	// CgsDataStructures.h:1236
	extern const Name SK_TYPE_NAME;

private:
	// CgsDataStructures.h:1373
	uint32_t mu32FeatureSchemaCount;

	// CgsDataStructures.h:1374
	uint32_t mu32SlotCount;

	// CgsDataStructures.h:1375
	uint32_t mu32ParameterCount;

	// CgsDataStructures.h:1376
	uint32_t mu32OutputParamCount;

public:
	// CgsDataStructures.h:1240
	size_t GetAllocationSize(uint32_t);

	// CgsDataStructures.h:1247
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:1257
	void VoiceSchema(uint32_t);

	// CgsDataStructures.h:1271
	uint32_t GetFeatureSchemaCount() const;

	// CgsDataStructures.h:1278
	const FeatureSchema & GetFeatureSchema(uint32_t) const;

	// CgsDataStructures.h:1289
	void SetFeatureSchema(uint32_t, const FeatureSchema &);

	// CgsDataStructures.h:1342
	uint32_t GetSlotCount() const;

	// CgsDataStructures.h:1348
	uint32_t GetParameterCount() const;

	// CgsDataStructures.h:1354
	uint32_t GetOutputParamCount() const;

private:
	// CgsDataStructures.h:1362
	const FeatureSchema ** GetFeatureSchemaAddress(uint32_t) const;

}

// CgsDataStructures.h:1503
struct CgsSound::Playback::VoiceSpec : public Entity {
	// CgsDataStructures.h:1506
	extern const Name SK_TYPE_NAME;

private:
	// CgsDataStructures.h:1674
	const VoiceSchema * mpVoiceSchema;

	// CgsDataStructures.h:1675
	uint8_t mu8SendCount;

	// CgsDataStructures.h:1676
	uint8_t mu8ProcessingStage;

	// CgsDataStructures.h:1677
	uint8_t mu8ChannelCount;

	// CgsDataStructures.h:1678
	uint8_t mu8VoiceType;

public:
	// CgsDataStructures.h:1510
	size_t GetAllocationSize(uint32_t);

	// CgsDataStructures.h:1517
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:1525
	void VoiceSpec(uint32_t);

	// CgsDataStructures.h:1533
	CgsSound::Playback::EVoiceType GetVoiceType() const;

	// CgsDataStructures.h:1540
	void SetVoiceType(CgsSound::Playback::EVoiceType);

	// CgsDataStructures.h:1546
	const VoiceSchema & GetVoiceSchema() const;

	// CgsDataStructures.h:1555
	void SetVoiceSchema(const VoiceSchema &);

	// CgsDataStructures.h:1580
	uint32_t GetSendCount() const;

	// CgsDataStructures.h:1586
	uint32_t GetProcessingStage() const;

	// CgsDataStructures.h:1593
	void SetProcessingStage(uint32_t);

	// CgsDataStructures.h:1600
	uint32_t GetChannelCount() const;

	// CgsDataStructures.h:1607
	void SetChannelCount(uint32_t);

	// CgsDataStructures.h:1615
	Name GetSendName(uint32_t) const;

	// CgsDataStructures.h:1623
	void SetSendName(uint32_t, Name);

	// CgsDataStructures.h:1629
	uint32_t GetSlotCount() const;

	// CgsDataStructures.h:1637
	uint32_t GetParameterCount() const;

	// CgsDataStructures.h:1645
	uint32_t GetOutputParameterCount() const;

	// CgsDataStructures.h:1653
	uint32_t GetInputParameterCount() const;

private:
	// CgsDataStructures.h:1664
	Name * GetSendNameAddress(uint32_t) const;

}

// CgsDataStructures.h:1784
struct CgsSound::Playback::ContentSpec : public Entity {
	// CgsDataStructures.h:1787
	extern const Name SK_TYPE_NAME;

	// CgsDataStructures.h:1792
	extern const char SK_PATH_SEPERATOR = 124;

private:
	// CgsDataStructures.h:1959
	const ContentType * mpContentType;

	// CgsDataStructures.h:1960
	uint16_t mu16PathLength;

	// CgsDataStructures.h:1961
	uint8_t mu8LoadMethod;

	// CgsDataStructures.h:1962
	uint8_t mu8LoadTime;

public:
	// CgsDataStructures.h:1796
	size_t GetAllocationSize(size_t);

	// CgsDataStructures.h:1803
	size_t GetAllocatedSize() const;

	// CgsDataStructures.h:1811
	void ContentSpec(size_t);

	// CgsDataStructures.h:1822
	const ContentType & GetContentType() const;

	// CgsDataStructures.h:1831
	void SetContentType(const ContentType &);

	// CgsDataStructures.h:1856
	const char * GetPath() const;

	// CgsDataStructures.h:1867
	void SetPath(const char *);

	// CgsDataStructures.h:1874
	size_t GetPathLength() const;

	// CgsDataStructures.h:1881
	bool GetPathZone(uint32_t, char *, size_t) const;

	// CgsDataStructures.h:1926
	CgsSound::Playback::EContentLoadMethod GetLoadMethod() const;

	// CgsDataStructures.h:1933
	void SetLoadMethod(CgsSound::Playback::EContentLoadMethod);

	// CgsDataStructures.h:1939
	CgsSound::Playback::EContentLoadTime GetLoadTime() const;

	// CgsDataStructures.h:1946
	void SetLoadTime(CgsSound::Playback::EContentLoadTime);

private:
	// CgsDataStructures.h:1952
	char * GetPathInternal();

}

// CgsDataStructures.h:210
struct CgsSound::Playback::IEntityFixer {
	int (*)(...) * _vptr.IEntityFixer;

private:
	// CgsDataStructures.h:295
	const IEntityFixer * mpNext;

	// CgsDataStructures.h:296
	extern const IEntityFixer * spHead;

public:
	void IEntityFixer(const IEntityFixer &);

	// CgsDataStructures.h:301
	void IEntityFixer();

	// CgsDataStructures.h:310
	const IEntityFixer * GetFixer(Name);

	// CgsDataStructures.h:220
	Name GetTypeName() const;

	// CgsDataStructures.h:227
	void Unresolve(Entity &) const;

	// CgsDataStructures.h:235
	void Resolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:245
	void Relocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:251
	void FixUp(Entity &) const;

	// CgsDataStructures.h:257
	void FixDown(Entity &) const;

protected:
	// CgsDataStructures.h:264
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:268
	virtual void DoUnresolve(Entity &) const;

	// CgsDataStructures.h:273
	virtual void DoResolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:284
	virtual void DoRelocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:288
	virtual void DoFixUp(Entity &) const;

	// CgsDataStructures.h:292
	virtual void DoFixDown(Entity &) const;

}

// CgsDataStructures.h:296
extern const IEntityFixer * spHead;

// CgsDataStructures.h:384
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:443
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:615
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:744
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:890
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:1236
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:1506
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:1787
extern const Name SK_TYPE_NAME;

// CgsDataStructures.h:1792
extern const char SK_PATH_SEPERATOR = 124;

// CgsDataStructures.h:210
struct CgsSound::Playback::IEntityFixer {
	int (*)(...) * _vptr.IEntityFixer;

private:
	// CgsDataStructures.h:295
	const IEntityFixer * mpNext;

	// CgsDataStructures.cpp:38
	extern const IEntityFixer * spHead;

public:
	void IEntityFixer(const IEntityFixer &);

	// CgsDataStructures.h:301
	void IEntityFixer();

	// CgsDataStructures.h:310
	const IEntityFixer * GetFixer(Name);

	// CgsDataStructures.h:220
	Name GetTypeName() const;

	// CgsDataStructures.h:227
	void Unresolve(Entity &) const;

	// CgsDataStructures.h:235
	void Resolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:245
	void Relocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:251
	void FixUp(Entity &) const;

	// CgsDataStructures.h:257
	void FixDown(Entity &) const;

protected:
	// CgsDataStructures.h:264
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:268
	virtual void DoUnresolve(Entity &) const;

	// CgsDataStructures.h:273
	virtual void DoResolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:284
	virtual void DoRelocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:288
	virtual void DoFixUp(Entity &) const;

	// CgsDataStructures.h:292
	virtual void DoFixDown(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::AemsVoiceCsisClass> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::AemsVoiceCsisClass> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:341
	virtual void DoUnresolve(Entity &) const;

	// CgsDataStructures.h:346
	virtual void DoResolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:357
	virtual void DoRelocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsAemsDataStructures.h:153
	virtual void DoFixUp<CgsSound::Playback::AemsVoiceCsisClass>(Entity &) const;

	// CgsAemsDataStructures.h:170
	virtual void DoFixDown<CgsSound::Playback::AemsVoiceCsisClass>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::ContentClass> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::ContentClass> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:341
	virtual void DoUnresolve(Entity &) const;

	// CgsDataStructures.h:346
	virtual void DoResolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:357
	virtual void DoRelocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:361
	virtual void DoFixUp(Entity &) const;

	// CgsDataStructures.h:368
	virtual void DoFixDown(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::GenericRwacFeatureImplementation> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::GenericRwacFeatureImplementation> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsGenericRwacDataStructures.h:416
	virtual void DoUnresolve<CgsSound::Playback::GenericRwacFeatureImplementation>(Entity &) const;

	// CgsDataStructures.h:346
	virtual void DoResolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:357
	virtual void DoRelocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsGenericRwacDataStructures.h:431
	virtual void DoFixUp<CgsSound::Playback::GenericRwacFeatureImplementation>(Entity &) const;

	// CgsGenericRwacDataStructures.h:463
	virtual void DoFixDown<CgsSound::Playback::GenericRwacFeatureImplementation>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::ContentSpec> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::ContentSpec> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:1981
	virtual void DoUnresolve<CgsSound::Playback::ContentSpec>(Entity &) const;

	// CgsDataStructures.h:1970
	virtual void DoResolve<CgsSound::Playback::ContentSpec>(Entity &, const Registry &) const;

	// CgsDataStructures.h:1996
	virtual void DoRelocate<CgsSound::Playback::ContentSpec>(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:2008
	virtual void DoFixUp<CgsSound::Playback::ContentSpec>(Entity &) const;

	// CgsDataStructures.h:2022
	virtual void DoFixDown<CgsSound::Playback::ContentSpec>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::VoiceSpec> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::VoiceSpec> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:1697
	virtual void DoUnresolve<CgsSound::Playback::VoiceSpec>(Entity &) const;

	// CgsDataStructures.h:1686
	virtual void DoResolve<CgsSound::Playback::VoiceSpec>(Entity &, const Registry &) const;

	// CgsDataStructures.h:1712
	virtual void DoRelocate<CgsSound::Playback::VoiceSpec>(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:1724
	virtual void DoFixUp<CgsSound::Playback::VoiceSpec>(Entity &) const;

	// CgsDataStructures.h:1747
	virtual void DoFixDown<CgsSound::Playback::VoiceSpec>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::VoiceSchema> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::VoiceSchema> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:1411
	virtual void DoUnresolve<CgsSound::Playback::VoiceSchema>(Entity &) const;

	// CgsDataStructures.h:1384
	virtual void DoResolve<CgsSound::Playback::VoiceSchema>(Entity &, const Registry &) const;

	// CgsDataStructures.h:1435
	virtual void DoRelocate<CgsSound::Playback::VoiceSchema>(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:1452
	virtual void DoFixUp<CgsSound::Playback::VoiceSchema>(Entity &) const;

	// CgsDataStructures.h:1475
	virtual void DoFixDown<CgsSound::Playback::VoiceSchema>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::FeatureSchema> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::FeatureSchema> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:1119
	virtual void DoUnresolve<CgsSound::Playback::FeatureSchema>(Entity &) const;

	// CgsDataStructures.h:1085
	virtual void DoResolve<CgsSound::Playback::FeatureSchema>(Entity &, const Registry &) const;

	// CgsDataStructures.h:1148
	virtual void DoRelocate<CgsSound::Playback::FeatureSchema>(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:1172
	virtual void DoFixUp<CgsSound::Playback::FeatureSchema>(Entity &) const;

	// CgsDataStructures.h:1201
	virtual void DoFixDown<CgsSound::Playback::FeatureSchema>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::SlotSchema> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::SlotSchema> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:831
	virtual void DoUnresolve<CgsSound::Playback::SlotSchema>(Entity &) const;

	// CgsDataStructures.h:820
	virtual void DoResolve<CgsSound::Playback::SlotSchema>(Entity &, const Registry &) const;

	// CgsDataStructures.h:846
	virtual void DoRelocate<CgsSound::Playback::SlotSchema>(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:858
	virtual void DoFixUp<CgsSound::Playback::SlotSchema>(Entity &) const;

	// CgsDataStructures.h:871
	virtual void DoFixDown<CgsSound::Playback::SlotSchema>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::ParameterSchema> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::ParameterSchema> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:341
	virtual void DoUnresolve(Entity &) const;

	// CgsDataStructures.h:346
	virtual void DoResolve(Entity &, const Registry &) const;

	// CgsDataStructures.h:357
	virtual void DoRelocate(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:707
	virtual void DoFixUp<CgsSound::Playback::ParameterSchema>(Entity &) const;

	// CgsDataStructures.h:723
	virtual void DoFixDown<CgsSound::Playback::ParameterSchema>(Entity &) const;

}

// CgsDataStructures.h:333
struct CgsSound::Playback::EntityFixer<CgsSound::Playback::ContentType> : public IEntityFixer {
public:
	void EntityFixer(const EntityFixer<CgsSound::Playback::ContentType> &);

	void EntityFixer();

protected:
	// CgsDataStructures.h:337
	virtual Name DoGetTypeName() const;

	// CgsDataStructures.h:550
	virtual void DoUnresolve<CgsSound::Playback::ContentType>(Entity &) const;

	// CgsDataStructures.h:539
	virtual void DoResolve<CgsSound::Playback::ContentType>(Entity &, const Registry &) const;

	// CgsDataStructures.h:565
	virtual void DoRelocate<CgsSound::Playback::ContentType>(Entity &, uint8_t *, const Registry &, const Registry &) const;

	// CgsDataStructures.h:577
	virtual void DoFixUp<CgsSound::Playback::ContentType>(Entity &) const;

	// CgsDataStructures.h:590
	virtual void DoFixDown<CgsSound::Playback::ContentType>(Entity &) const;

}

// CgsDataStructures.h:178
extern void UnresolveMemberPointer<CgsSound::Playback::ContentType>(const ContentType **  lppEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:740
		Name lName;

	}
}

// CgsDataStructures.h:178
extern void UnresolveMemberPointer<CgsSound::Playback::VoiceSchema>(const VoiceSchema **  lppEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:740
		Name lName;

	}
}

// CgsDataStructures.h:178
extern void UnresolveMemberPointer<CgsSound::Playback::FeatureSchema>(const FeatureSchema **  lppEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:740
		Name lName;

	}
}

// CgsDataStructures.h:178
extern void UnresolveMemberPointer<CgsSound::Playback::SlotSchema>(const SlotSchema **  lppEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:740
		Name lName;

	}
}

// CgsDataStructures.h:178
extern void UnresolveMemberPointer<CgsSound::Playback::ParameterSchema>(const ParameterSchema **  lppEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:740
		Name lName;

	}
}

// CgsDataStructures.h:178
extern void UnresolveMemberPointer<CgsSound::Playback::ContentClass>(const ContentClass **  lppEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:740
		Name lName;

	}
}

// CgsDataStructures.h:198
extern void RelocateMemberPointer<CgsSound::Playback::ContentClass>(const ContentClass **  lppEntity, uint8_t *  lpu8BaseAddress, const const Registry &  lRegistryTo, const const Registry &  lRegistryFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Registry::Contains(/* parameters */);
	CgsSound::Playback::Registry::Contains(/* parameters */);
}

// CgsDataStructures.h:198
extern void RelocateMemberPointer<CgsSound::Playback::ParameterSchema>(const ParameterSchema **  lppEntity, uint8_t *  lpu8BaseAddress, const const Registry &  lRegistryTo, const const Registry &  lRegistryFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Registry::Contains(/* parameters */);
	CgsSound::Playback::Registry::Contains(/* parameters */);
}

// CgsDataStructures.h:198
extern void RelocateMemberPointer<CgsSound::Playback::SlotSchema>(const SlotSchema **  lppEntity, uint8_t *  lpu8BaseAddress, const const Registry &  lRegistryTo, const const Registry &  lRegistryFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Registry::Contains(/* parameters */);
	CgsSound::Playback::Registry::Contains(/* parameters */);
}

// CgsDataStructures.h:198
extern void RelocateMemberPointer<CgsSound::Playback::FeatureSchema>(const FeatureSchema **  lppEntity, uint8_t *  lpu8BaseAddress, const const Registry &  lRegistryTo, const const Registry &  lRegistryFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Registry::Contains(/* parameters */);
	CgsSound::Playback::Registry::Contains(/* parameters */);
}

// CgsDataStructures.h:198
extern void RelocateMemberPointer<CgsSound::Playback::VoiceSchema>(const VoiceSchema **  lppEntity, uint8_t *  lpu8BaseAddress, const const Registry &  lRegistryTo, const const Registry &  lRegistryFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Registry::Contains(/* parameters */);
	CgsSound::Playback::Registry::Contains(/* parameters */);
}

// CgsDataStructures.h:198
extern void RelocateMemberPointer<CgsSound::Playback::ContentType>(const ContentType **  lppEntity, uint8_t *  lpu8BaseAddress, const const Registry &  lRegistryTo, const const Registry &  lRegistryFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Registry::Contains(/* parameters */);
	CgsSound::Playback::Registry::Contains(/* parameters */);
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::ContentClass>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::ContentType>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::ParameterSchema>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::SlotSchema>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::FeatureSchema>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::VoiceSchema>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::VoiceSpec>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::ContentSpec>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::GenericRwacFeatureImplementation>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:333
void CgsSound::Playback::EntityFixer<CgsSound::Playback::AemsVoiceCsisClass>::EntityFixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStructures.h:187
extern void ResolveMemberPointer<CgsSound::Playback::ContentType>(const ContentType **  lppEntity, const const Registry &  lRegistry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:760
		Name lName;

	}
	CgsSound::Playback::Name::PointerToName(/* parameters */);
	{
		// CgsRegistry.h:764
		const ContentType * lpEntity;

	}
	CgsSound::Playback::Name::Name(/* parameters */);
}

// CgsDataStructures.h:187
extern void ResolveMemberPointer<CgsSound::Playback::VoiceSchema>(const VoiceSchema **  lppEntity, const const Registry &  lRegistry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:760
		Name lName;

	}
	CgsSound::Playback::Name::PointerToName(/* parameters */);
	{
		// CgsRegistry.h:764
		const VoiceSchema * lpEntity;

	}
	CgsSound::Playback::Name::Name(/* parameters */);
}

// CgsDataStructures.h:187
extern void ResolveMemberPointer<CgsSound::Playback::FeatureSchema>(const FeatureSchema **  lppEntity, const const Registry &  lRegistry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:760
		Name lName;

	}
	CgsSound::Playback::Name::PointerToName(/* parameters */);
	{
		// CgsRegistry.h:764
		const FeatureSchema * lpEntity;

	}
	CgsSound::Playback::Name::Name(/* parameters */);
}

// CgsDataStructures.h:187
extern void ResolveMemberPointer<CgsSound::Playback::SlotSchema>(const SlotSchema **  lppEntity, const const Registry &  lRegistry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:760
		Name lName;

	}
	CgsSound::Playback::Name::PointerToName(/* parameters */);
	{
		// CgsRegistry.h:764
		const SlotSchema * lpEntity;

	}
	CgsSound::Playback::Name::Name(/* parameters */);
}

// CgsDataStructures.h:187
extern void ResolveMemberPointer<CgsSound::Playback::ParameterSchema>(const ParameterSchema **  lppEntity, const const Registry &  lRegistry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:760
		Name lName;

	}
	CgsSound::Playback::Name::PointerToName(/* parameters */);
	{
		// CgsRegistry.h:764
		const ParameterSchema * lpEntity;

	}
	CgsSound::Playback::Name::Name(/* parameters */);
}

// CgsDataStructures.h:187
extern void ResolveMemberPointer<CgsSound::Playback::ContentClass>(const ContentClass **  lppEntity, const const Registry &  lRegistry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:760
		Name lName;

	}
	CgsSound::Playback::Name::PointerToName(/* parameters */);
	{
		// CgsRegistry.h:764
		const ContentClass * lpEntity;

	}
	CgsSound::Playback::Name::Name(/* parameters */);
}

