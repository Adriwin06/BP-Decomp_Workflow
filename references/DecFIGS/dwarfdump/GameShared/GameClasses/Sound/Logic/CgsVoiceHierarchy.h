// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct VoiceHierarchyNode {
			// CgsVoiceHierarchy.h:97
			enum eVoiceType {
				E_VOICE_TYPE_INVALID = 0,
				E_VOICE_TYPE_UNKNOWN = 1,
				E_VOICE_TYPE_PLAYER = 2,
				E_VOICE_TYPE_SUBMIX = 3,
				E_VOICE_TYPE_COUNT = 4,
			}

		}

	}

}

// CgsVoiceHierarchy.h:88
struct CgsSound::Logic::VoiceHierarchyNode {
private:
	// CgsVoiceHierarchy.h:283
	const char8_t * mpcDebugName;

	// Unknown accessibility
	// CgsVoiceHierarchy.h:62
	typedef Command::QueueElement VoiceId;

	// CgsVoiceHierarchy.h:284
	VoiceHierarchyNode::VoiceId mId;

	// CgsVoiceHierarchy.h:287
	VoiceHierarchyNode::VoiceId mParentId;

	// Unknown accessibility
	// CgsVoiceHierarchy.h:70
	typedef Command::QueueElement QueueElement;

	// CgsVoiceHierarchy.h:288
	VoiceHierarchyNode::QueueElement mDefaultSendName;

	// CgsVoiceHierarchy.h:290
	const CgsSound::Logic::SendDescriptor * mpOtherSends;

	// CgsVoiceHierarchy.h:291
	int32_t miNumOtherSends;

	// CgsVoiceHierarchy.h:293
	VoiceHierarchyNode::QueueElement mVoiceSpec;

	// CgsVoiceHierarchy.h:294
	CgsSound::Logic::VoiceHierarchyNode::eVoiceType meVoiceType;

	// CgsVoiceHierarchy.h:296
	bool8_t mb8IsGlobal;

public:
	// CgsVoiceHierarchy.h:113
	void VoiceHierarchyNode();

	// CgsVoiceHierarchy.h:120
	void ~VoiceHierarchyNode();

	// CgsVoiceHierarchy.h:124
	bool operator==(const VoiceHierarchyNode &);

	// CgsVoiceHierarchy.h:131
	VoiceHierarchyNode::VoiceId GetId() const;

	// CgsVoiceHierarchy.h:138
	VoiceHierarchyNode::VoiceId GetParentId() const;

	// CgsVoiceHierarchy.h:145
	VoiceHierarchyNode::QueueElement GetVoiceSpec() const;

	// CgsVoiceHierarchy.h:153
	const char8_t * GetDebugName() const;

	// CgsVoiceHierarchy.h:161
	int32_t GetNumOtherSends() const;

	// CgsVoiceHierarchy.h:169
	const CgsSound::Logic::SendDescriptor * GetOtherSend(int32_t) const;

	// CgsVoiceHierarchy.h:176
	VoiceHierarchyNode::QueueElement GetDefaultSendName() const;

	// CgsVoiceHierarchy.h:183
	bool GetIsGlobal() const;

	// CgsVoiceHierarchy.h:190
	CgsSound::Logic::VoiceHierarchyNode::eVoiceType GetVoiceType() const;

	// CgsVoiceHierarchy.h:198
	void SetId(VoiceHierarchyNode::VoiceId);

	// CgsVoiceHierarchy.h:206
	void SetParentId(VoiceHierarchyNode::VoiceId);

	// CgsVoiceHierarchy.h:214
	void SetVoiceSpec(VoiceHierarchyNode::QueueElement);

	// CgsVoiceHierarchy.h:222
	void SetDebugName(const char8_t *);

	// CgsVoiceHierarchy.h:235
	void SetOtherSends(const CgsSound::Logic::SendDescriptor *, int32_t);

	// CgsVoiceHierarchy.h:243
	void SetDefaultSendName(VoiceHierarchyNode::QueueElement);

	// CgsVoiceHierarchy.h:251
	void SetIsGlobal(bool);

	// CgsVoiceHierarchy.h:259
	void SetVoiceType(CgsSound::Logic::VoiceHierarchyNode::eVoiceType);

	// CgsVoiceHierarchy.h:267
	void FixUp(const Resource &);

}

// CgsVoiceHierarchy.h:315
struct CgsSound::Logic::VoiceHierarchy {
private:
	// CgsVoiceHierarchy.h:430
	const VoiceHierarchyNode * mpNodes;

	// CgsVoiceHierarchy.h:431
	int32_t miNumNodes;

	// CgsVoiceHierarchy.h:436
	const CgsSound::Logic::ExternalConnectionDescriptor * mpExternalConnections;

	// CgsVoiceHierarchy.h:437
	int32_t miNumExternalConnections;

	// CgsVoiceHierarchy.h:439
	int32_t miMapState;

	// CgsVoiceHierarchy.h:440
	uint8_t mu8DebugDataPresent;

public:
	// CgsVoiceHierarchy.h:325
	void VoiceHierarchy(const VoiceHierarchyNode *, int32_t, int32_t);

	// CgsVoiceHierarchy.h:333
	const VoiceHierarchyNode * GetHierarchyNode(int32_t) const;

	// CgsVoiceHierarchy.h:340
	int32_t GetNumNodes() const;

	// CgsVoiceHierarchy.h:347
	int32_t GetMapState() const;

	// CgsVoiceHierarchy.h:355
	int32_t GetNumExternalConnections() const;

	// CgsVoiceHierarchy.h:363
	const CgsSound::Logic::ExternalConnectionDescriptor * GetExternalConnection(int32_t) const;

	// CgsVoiceHierarchy.h:374
	const VoiceHierarchyNode * GetNodeById(VoiceHierarchyNode::VoiceId) const;

	// CgsVoiceHierarchy.h:381
	bool IsDebugDataPresent() const;

	// CgsVoiceHierarchy.h:389
	void SetDebugDataPresent(bool);

	// CgsVoiceHierarchy.h:402
	void SetExternalConnections(const CgsSound::Logic::ExternalConnectionDescriptor *, int32_t);

}

// CgsVoiceHierarchy.h:455
struct CgsSound::Logic::SendDescriptor {
private:
	// CgsVoiceHierarchy.h:539
	VoiceHierarchyNode::QueueElement mSendName;

	// CgsVoiceHierarchy.h:540
	VoiceHierarchyNode::VoiceId mVoiceId;

	// CgsVoiceHierarchy.h:541
	int32_t miTargetMapState;

	// CgsVoiceHierarchy.h:542
	bool8_t mb8IsExternal;

public:
	// CgsVoiceHierarchy.h:464
	void FixUp();

	// CgsVoiceHierarchy.h:480
	VoiceHierarchyNode::QueueElement GetSendName() const;

	// CgsVoiceHierarchy.h:487
	VoiceHierarchyNode::VoiceId GetVoiceId() const;

	// CgsVoiceHierarchy.h:494
	bool GetIsExternal() const;

	// CgsVoiceHierarchy.h:501
	int32_t GetTargetMapState() const;

	// CgsVoiceHierarchy.h:509
	void SetSendName(VoiceHierarchyNode::QueueElement);

	// CgsVoiceHierarchy.h:517
	void SetVoiceId(VoiceHierarchyNode::VoiceId);

	// CgsVoiceHierarchy.h:525
	void SetIsExternal(bool);

	// CgsVoiceHierarchy.h:533
	void SetTargetMapState(int32_t);

}

// CgsVoiceHierarchy.h:558
struct CgsSound::Logic::ExternalConnectionDescriptor {
private:
	// CgsVoiceHierarchy.h:612
	int32_t miMapState;

	// CgsVoiceHierarchy.h:613
	int32_t miNodeIndex;

public:
	// CgsVoiceHierarchy.h:567
	int32_t GetMapState() const;

	// CgsVoiceHierarchy.h:574
	int32_t GetNodeIndex() const;

	// CgsVoiceHierarchy.h:582
	void SetMapState(int32_t);

	// CgsVoiceHierarchy.h:590
	void SetNodeIndex(int32_t);

	// CgsVoiceHierarchy.h:597
	void FixUp();

}

// CgsVoiceHierarchy.h:998
extern char8_t * FixUpPointer<char8_t>(const char8_t *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchy.h:998
extern SendDescriptor * FixUpPointer<CgsSound::Logic::SendDescriptor>(const CgsSound::Logic::SendDescriptor *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

