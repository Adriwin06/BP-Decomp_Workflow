// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct Voice {
			// CgsVoice.h:957
			enum EProfileVoiceType {
				E_VOICETYPE_AEMS = 0,
				E_VOICETYPE_SPLICER = 1,
				E_VOICETYPE_GENERICRWACMASTER = 2,
				E_VOICETYPE_GENERICRWACSUBMIX = 3,
				E_VOICETYPE_GENERICRWACPLAYER = 4,
				E_VOICETYPE_COUNT = 5,
			}

			// CgsVoice.h:685
			extern const Name SK_REVERB_IR_SLOT_NAME;

			// CgsVoice.h:686
			extern const Name SK_REVERB_IR_FEATURE;

			// CgsVoice.h:690
			extern const Name SK_LOWPASS_IIR2_FEATURE;

			// CgsVoice.h:691
			extern const Name SK_LOWSHELF_IIR2_FEATURE;

			// CgsVoice.h:695
			extern const Name SK_LOWPASS_BUTTERWORTH_FEATURE;

			// CgsVoice.h:699
			extern const Name SK_DISTORTION_FEATURE;

			// CgsVoice.h:700
			extern const Name SK_FREQUENCYANALYSER_FEATURE;

			// CgsVoice.h:701
			extern const Name SK_AMBISONICSDECODER_FEATURE;

			// CgsVoice.h:702
			extern const Name SK_PANNING2D1_FEATURE;

		}

	}

}

// CgsVoice.h:195
struct CgsSound::Playback::Slot {
private:
	// CgsVoice.h:350
	Name mName;

	// CgsVoice.h:351
	const ContentClass * mpContentClass;

	// CgsVoice.h:352
	Handle<CgsSound::Playback::Content> mhContent;

	// CgsVoice.h:353
	CgsSound::Playback::ISlotImplementation * mpImpl;

	// CgsVoice.h:354
	uint8_t mu8Attach;

	// CgsVoice.h:355
	uint8_t mu8Playing;

	// CgsVoice.h:356
	uint16_t mu16PluginOffset;

public:
	// CgsVoice.h:209
	void Slot(const SlotSchema &);

	// CgsVoice.h:216
	void Release(CgsSound::Playback::Voice &);

	// CgsVoice.h:223
	bool Attach(CgsSound::Playback::Voice &, Handle<CgsSound::Playback::Content>);

	// CgsVoice.h:229
	void Detach(CgsSound::Playback::Voice &);

	// CgsVoice.h:234
	Name GetName() const;

	// CgsVoice.h:237
	Handle<CgsSound::Playback::Content> GetContent();

	// CgsVoice.h:247
	void Update(System *, CgsSound::Playback::Voice &, CgsSound::Playback::PlayerVoice *, float);

	// CgsVoice.h:252
	bool Play(CgsSound::Playback::PlayerVoice &, uint32_t);

	// CgsVoice.h:266
	bool Stop(CgsSound::Playback::PlayerVoice &);

	// CgsVoice.h:280
	void HandleAttach(CgsSound::Playback::Voice &);

	// CgsVoice.h:294
	void PendingAttach();

	// CgsVoice.h:302
	void HandleDetach(CgsSound::Playback::Voice &);

	// CgsVoice.h:316
	void SetImplementation(CgsSound::Playback::ISlotImplementation *);

	// CgsVoice.h:322
	CgsSound::Playback::ISlotImplementation * GetImplementation() const;

	// CgsVoice.h:328
	bool IsPlaying() const;

	// CgsVoice.h:334
	uint32_t GetPluginOffset() const;

	// CgsVoice.h:341
	void SetPluginOffset(uint32_t);

private:
	// CgsVoice.h:348
	void ~Slot();

}

// CgsVoice.h:141
struct CgsSound::Playback::ISlotFactory {
	int (*)(...) * _vptr.ISlotFactory;

private:
	// CgsVoice.h:183
	Name mName;

	// CgsVoice.h:184
	const ISlotFactory * mpNext;

	// CgsVoice.h:185
	extern const ISlotFactory * spHead;

public:
	// CgsVoice.h:144
	void ISlotFactory(Name);

	// CgsVoice.h:153
	const ISlotFactory * GetFactory(Name);

	// CgsVoice.h:174
	Name GetName() const;

	// CgsVoice.h:180
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:185
extern const ISlotFactory * spHead;

// CgsVoice.h:685
extern const Name SK_REVERB_IR_SLOT_NAME;

// CgsVoice.h:686
extern const Name SK_REVERB_IR_FEATURE;

// CgsVoice.h:690
extern const Name SK_LOWPASS_IIR2_FEATURE;

// CgsVoice.h:691
extern const Name SK_LOWSHELF_IIR2_FEATURE;

// CgsVoice.h:695
extern const Name SK_LOWPASS_BUTTERWORTH_FEATURE;

// CgsVoice.h:699
extern const Name SK_DISTORTION_FEATURE;

// CgsVoice.h:700
extern const Name SK_FREQUENCYANALYSER_FEATURE;

// CgsVoice.h:701
extern const Name SK_AMBISONICSDECODER_FEATURE;

// CgsVoice.h:702
extern const Name SK_PANNING2D1_FEATURE;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsVoice.h:43
		enum EPlaybackState {
			E_PLAYBACK_STATE_INVALID = 0,
			E_PLAYBACK_STATE_STOPPED = 1,
			E_PLAYBACK_STATE_PLAYING = 2,
			E_PLAYBACK_STATE_COUNT = 3,
			E_PLAYBACK_STATE_CHANGED = 128,
		}

		// CgsVoice.h:60
		enum EVoiceRemoveState {
			E_VOICE_REMOVE_INVALID = 0,
			E_VOICE_REMOVE_ALIVE = 1,
			E_VOICE_REMOVE_REMOVING = 2,
			E_VOICE_REMOVE_REMOVED = 3,
		}

		// Declaration
		struct Voice {
			// CgsVoice.h:957
			enum EProfileVoiceType {
				E_VOICETYPE_AEMS = 0,
				E_VOICETYPE_SPLICER = 1,
				E_VOICETYPE_GENERICRWACMASTER = 2,
				E_VOICETYPE_GENERICRWACSUBMIX = 3,
				E_VOICETYPE_GENERICRWACPLAYER = 4,
				E_VOICETYPE_COUNT = 5,
			}

			// CgsVoice.h:1139
			struct Offsets {
				// CgsVoice.h:1141
				uint16_t muSlotOffset;

				// CgsVoice.h:1142
				uint16_t muSendOffset;

				// CgsVoice.h:1143
				uint16_t muInputParameterOffset;

				// CgsVoice.h:1144
				uint16_t muOutputParameterOffset;

			}

		}

	}

}

// CgsVoice.h:435
struct CgsSound::Playback::Send {
private:
	// CgsVoice.h:457
	Name mName;

	// CgsVoice.h:459
	float32_t mf32Gain;

	// CgsVoice.h:460
	bool mbHasChanged;

public:
	// CgsVoice.h:439
	void Send(Name);

	// CgsVoice.h:444
	Name GetName() const;

	// CgsVoice.h:448
	void Set(float32_t);

	// CgsVoice.h:451
	float32_t Get() const;

	// CgsVoice.h:454
	bool HasChanged() const;

}

// CgsVoice.h:515
struct CgsSound::Playback::InputParameter {
private:
	// CgsVoice.h:545
	Name mName;

	// CgsVoice.h:546
	float32_t mf32Min;

	// CgsVoice.h:547
	float32_t mf32Max;

	// CgsVoice.h:548
	float32_t mf32Value;

	// CgsVoice.h:550
	bool mbHasChanged;

public:
	// CgsVoice.h:520
	void InputParameter();

	// CgsVoice.h:527
	void InputParameter(const ParameterSchema &);

	// CgsVoice.h:532
	Name GetName() const;

	// CgsVoice.h:535
	float32_t Get() const;

	// CgsVoice.h:539
	void Set(float32_t);

	// CgsVoice.h:542
	bool HasChanged() const;

}

// CgsVoice.h:608
struct CgsSound::Playback::OutputParameter {
private:
	// CgsVoice.h:664
	Name mName;

	// CgsVoice.h:665
	float mf32Value;

	// CgsVoice.h:666
	float mf32OldValue;

public:
	// CgsVoice.h:614
	void OutputParameter();

	// CgsVoice.h:623
	void OutputParameter(const ParameterSchema &);

	// CgsVoice.h:628
	Name GetName() const;

	// CgsVoice.h:634
	float Get() const;

	// CgsVoice.h:640
	bool IsChanging() const;

	// CgsVoice.h:653
	float * GetAddress();

	// CgsVoice.h:658
	void Update();

}

// CgsVoice.h:1555
struct CgsSound::Playback::SlotFactory<CgsSound::Playback::Plugins::GinsuSlot> : CgsSound::Playback::ISlotFactory {
public:
	void SlotFactory(const SlotFactory<CgsSound::Playback::Plugins::GinsuSlot> &);

	// CgsVoice.h:1558
	void SlotFactory(Name);

	// CgsVoice.h:1562
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:1555
struct CgsSound::Playback::SlotFactory<CgsSound::Playback::SplicerContentSlot> : CgsSound::Playback::ISlotFactory {
public:
	void SlotFactory(const SlotFactory<CgsSound::Playback::SplicerContentSlot> &);

	// CgsVoice.h:1558
	void SlotFactory(Name);

	// CgsVoice.h:1562
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:1555
struct CgsSound::Playback::SlotFactory<CgsSound::Playback::AemsContentSlot> : CgsSound::Playback::ISlotFactory {
public:
	void SlotFactory(const SlotFactory<CgsSound::Playback::AemsContentSlot> &);

	// CgsVoice.h:1558
	void SlotFactory(Name);

	// CgsVoice.h:1562
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:1555
struct CgsSound::Playback::SlotFactory<CgsSound::Playback::GenericRwacContentSlot> : CgsSound::Playback::ISlotFactory {
public:
	void SlotFactory(const SlotFactory<CgsSound::Playback::GenericRwacContentSlot> &);

	// CgsVoice.h:1558
	void SlotFactory(Name);

	// CgsVoice.h:1562
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:1555
struct CgsSound::Playback::SlotFactory<CgsSound::Playback::GenericRwacReverbIRSlot> : CgsSound::Playback::ISlotFactory {
public:
	void SlotFactory(const SlotFactory<CgsSound::Playback::GenericRwacReverbIRSlot> &);

	// CgsVoice.h:1558
	void SlotFactory(Name);

	// CgsVoice.h:1562
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:676
struct CgsSound::Playback::Voice : public CgsSound::Playback::Object {
	// CgsVoice.cpp:40
	extern const Name SK_REVERB_IR_SLOT_NAME;

	// CgsVoice.cpp:43
	extern const Name SK_REVERB_IR_FEATURE;

	// CgsVoice.cpp:46
	extern const Name SK_LOWPASS_IIR2_FEATURE;

	// CgsVoice.cpp:49
	extern const Name SK_LOWSHELF_IIR2_FEATURE;

	// CgsVoice.cpp:52
	extern const Name SK_LOWPASS_BUTTERWORTH_FEATURE;

	// CgsVoice.cpp:55
	extern const Name SK_DISTORTION_FEATURE;

	// CgsVoice.cpp:58
	extern const Name SK_FREQUENCYANALYSER_FEATURE;

	// CgsVoice.cpp:61
	extern const Name SK_AMBISONICSDECODER_FEATURE;

	// CgsVoice.cpp:64
	extern const Name SK_PANNING2D1_FEATURE;

private:
	// CgsVoice.h:1146
	const CgsSound::Playback::Factory & mFactory;

	// CgsVoice.h:1147
	CgsSound::Playback::Module::Module::StreamBuffer::Ident mIdent;

	// CgsVoice.h:1148
	uint8_t mu8PlaybackState;

	// CgsVoice.h:1149
	uint8_t mu8RemoveState;

	// CgsVoice.h:1150
	uint32_t mu32SlotCount;

	// CgsVoice.h:1151
	uint32_t mu32SendCount;

	// CgsVoice.h:1152
	uint32_t mu32InputParameterCount;

	// CgsVoice.h:1153
	uint32_t mu32OutputParameterCount;

	// CgsVoice.h:1154
	CgsSound::Playback::Voice::Offsets mOffsets;

public:
	void Voice(const CgsSound::Playback::Voice &);

	// CgsVoice.h:1177
	size_t GetAllocationSize(const VoiceSpec &);

	// CgsVoice.h:710
	size_t GetAllocatedSize();

	// CgsVoice.cpp:84
	void * operator new(size_t, CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsVoice.cpp:99
	void operator delete(void *, CgsSound::Playback::Factory &);

	// CgsVoice.h:741
	void operator delete(void *, CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsVoice.h:745
	void operator delete(void *);

	// CgsVoice.cpp:111
	void Voice(size_t, CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsVoice.cpp:184
	virtual void ~Voice();

	// CgsVoice.h:1191
	bool Attach(Name, Handle<CgsSound::Playback::Content> &);

	// CgsVoice.h:1205
	bool Detach(Name);

	// CgsVoice.h:1222
	bool Connect(Name, Handle<CgsSound::Playback::SubmixVoice> &);

	// CgsVoice.h:1238
	bool Disconnect(Name);

	// CgsVoice.h:1255
	void SetGain(uint32_t, float32_t, Name);

	// CgsVoice.h:1268
	float GetGain(Name);

	// CgsVoice.h:1284
	void SetParameter(int32_t, float32_t, Name);

	// CgsVoice.h:1296
	float GetParameter(Name);

	// CgsVoice.h:1316
	uint32_t GetSlotCount() const;

	// CgsVoice.h:1323
	uint32_t GetSendCount() const;

	// CgsVoice.h:1330
	uint32_t GetInputParameterCount() const;

	// CgsVoice.h:1337
	uint32_t GetOutputParameterCount() const;

	// CgsVoice.h:1345
	uint32_t GetIndexOfSlot(Name) const;

	// CgsVoice.h:1361
	uint32_t GetIndexOfInputParameter(Name) const;

	// CgsVoice.h:1377
	uint32_t GetIndexOfOutputParameter(Name) const;

	// CgsVoice.h:1393
	uint32_t GetIndexOfSend(Name) const;

	// CgsVoice.h:883
	void Pause();

	// CgsVoice.h:888
	void Unpause();

	// CgsVoice.cpp:213
	void Update(System *, float32_t);

	// CgsVoice.cpp:242
	void UpdateOutput();

	// CgsVoice.h:1409
	bool IsCompatible(CgsSound::Playback::EVoiceType);

	// CgsVoice.h:1417
	CgsSound::Playback::Module::Module::StreamBuffer::Ident GetIdent() const;

	// CgsVoice.h:1425
	void SetIdent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsVoice.h:1432
	bool IsMasterVoice();

	// CgsVoice.h:1440
	CgsSound::Playback::EPlaybackState GetPlaybackState() const;

	// CgsVoice.h:1447
	CgsSound::Playback::EVoiceRemoveState GetRemoveState() const;

	// CgsVoice.h:1454
	bool HasPlaybackStateChanged() const;

	// CgsVoice.h:1461
	void AcknowledgePlaybackStateChange();

	// CgsVoice.h:1546
	void BeginRemove();

	// CgsVoice.h:948
	virtual float GetCpuTicks();

	// CgsVoice.h:955
	virtual void DisplayVoiceCpu(float *, float *, float, bool);

	// CgsVoice.h:969
	virtual CgsSound::Playback::Voice::EProfileVoiceType GetProfileVoiceType();

	// CgsVoice.h:1469
	void SetPlaybackState(CgsSound::Playback::EPlaybackState);

	// CgsVoice.h:985
	Slot * FindNamedSlot(Name);

	// CgsVoice.h:1005
	Send * FindNamedSend(Name);

	// CgsVoice.h:1025
	InputParameter * FindNamedInputParameter(Name);

	// CgsVoice.h:1040
	OutputParameter * FindNamedOutputParameter(Name);

	// CgsVoice.h:1482
	virtual void DoDispose();

	// CgsVoice.h:1070
	virtual void DoUpdate(System *, float);

	// CgsVoice.h:1075
	virtual bool DoConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

	// CgsVoice.h:1082
	virtual bool DoRemove();

	// CgsVoice.h:1507
	Slot & GetSlot(uint32_t) const;

	// CgsVoice.h:1517
	Send & GetSend(uint32_t) const;

	// CgsVoice.h:1527
	InputParameter & GetInputParameter(uint32_t) const;

	// CgsVoice.h:1537
	OutputParameter & GetOutputParameter(uint32_t) const;

	// CgsVoice.h:1121
	CgsSound::Playback::Factory & GetFactory();

private:
	// CgsVoice.h:1157
	CgsSound::Playback::Voice & operator=(const CgsSound::Playback::Voice &);

}

// CgsVoice.h:141
struct CgsSound::Playback::ISlotFactory {
	int (*)(...) * _vptr.ISlotFactory;

private:
	// CgsVoice.h:183
	Name mName;

	// CgsVoice.h:184
	const ISlotFactory * mpNext;

	// CgsGenericRwacVoice.cpp:48
	extern const ISlotFactory * spHead;

public:
	void ISlotFactory(const ISlotFactory &);

	// CgsVoice.h:144
	void ISlotFactory(Name);

	// CgsVoice.h:153
	const ISlotFactory * GetFactory(Name);

	// CgsVoice.h:174
	Name GetName() const;

	// CgsVoice.h:180
	virtual CgsSound::Playback::ISlotImplementation * DoCreateSlot(CgsSound::Playback::Voice &) const;

}

// CgsVoice.h:94
struct CgsSound::Playback::ISlotImplementation {
	int (*)(...) * _vptr.ISlotImplementation;

public:
	// CgsVoice.h:101
	virtual bool DoPlay(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, uint32_t);

	// CgsVoice.h:110
	virtual bool DoStop(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &);

	// CgsVoice.h:121
	virtual bool DoUpdatePlaying(System *, const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, float);

	// CgsVoice.h:130
	virtual void DoPostAttach(const Slot &, CgsSound::Playback::Voice &, CgsSound::Playback::Content &);

	// CgsVoice.h:136
	virtual void DoPreDetach(const Slot &, CgsSound::Playback::Voice &, CgsSound::Playback::Content &);

}

// CgsVoice.h:1496
extern Send & GetOffsetObject<CgsSound::Playback::Send>(uintptr_t  luOffset, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:1496
extern InputParameter & GetOffsetObject<CgsSound::Playback::InputParameter>(uintptr_t  luOffset, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:1496
extern Slot & GetOffsetObject<CgsSound::Playback::Slot>(uintptr_t  luOffset, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoice.h:1496
extern OutputParameter & GetOffsetObject<CgsSound::Playback::OutputParameter>(uintptr_t  luOffset, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

