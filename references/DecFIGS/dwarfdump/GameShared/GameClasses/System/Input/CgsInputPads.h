// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputPads.h:39
	const uint32_t KU_INPUT_MEMORY_BUFFER_SIZE = 4096;

	// CgsInputPads.h:40
	const uint32_t KU_INPUT_MEMORY_EXTENDED_BUFFER_SIZE = 8192;

	// CgsInputPads.h:41
	const uint32_t KU_MAX_NUMBER_OF_JOLT_EFFECTS = 2;

	// CgsInputPads.h:42
	const uint32_t KU_MAX_NUMBER_OF_RUMBLE_EFFECTS = 2;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputPads.h:39
	const uint32_t KU_INPUT_MEMORY_BUFFER_SIZE = 4096;

	// CgsInputPads.h:40
	const uint32_t KU_INPUT_MEMORY_EXTENDED_BUFFER_SIZE = 8192;

	// CgsInputPads.h:41
	const uint32_t KU_MAX_NUMBER_OF_JOLT_EFFECTS = 2;

	// CgsInputPads.h:42
	const uint32_t KU_MAX_NUMBER_OF_RUMBLE_EFFECTS = 2;

}

// CgsInputPads.h:58
struct CgsInput::InputPads {
private:
	// CgsInputPads.h:146
	ManagerPS3 mInputManager;

	// CgsInputPads.h:147
	CgsInput::DevicePS3Pad[7] maInputPads;

	// CgsInputPads.h:152
	InputPlayer[7] maPlayers;

	// CgsInputPads.h:153
	InputPort[7] maPorts;

	// CgsInputPads.h:154
	ActionMapping[7][34] maaMapping;

	// CgsInputPads.h:155
	int32_t miCurrentSetOfStates;

	// CgsInputPads.h:156
	bool[2][7][136] maaabActionsDown;

	// CgsInputPads.h:157
	bool mbPrepared;

	// CgsInputPads.h:159
	const rw::core::controller::DeviceState *[7] mapOverrideDeviceState;

	// CgsInputPads.h:162
	JoltEffect[7][2] maJoltEffects;

	// CgsInputPads.h:163
	RwInt32[7][2] maiJoltEffectPriorities;

	// CgsInputPads.h:164
	float32_t[7][2] mafJoltTime;

	// CgsInputPads.h:166
	JoltEffect[7][2] maRumbleEffects;

	// CgsInputPads.h:167
	float32_t[7][2] mafRumbleTime;

	// CgsInputPads.h:168
	float32_t[7][2] mafRumbleVolume;

	// CgsInputPads.h:169
	int32_t[7][2] maiRumbleIds;

	// CgsInputPads.h:170
	RwInt32[7][2] maiRumbleEffectPriorities;

	// CgsInputPads.h:172
	bool mbRumblePaused;

	// CgsInputPads.h:173
	bool mbRumbleEnabled;

	// CgsInputPads.h:174
	bool mbWheelFFEnabled;

	// CgsInputPads.h:176
	CgsInput::Device::WheelFFSpring mWheelFFSpring;

public:
	// CgsInputPads.h:63
	void Construct();

	// CgsInputPads.h:67
	bool Prepare(rw::IResourceAllocator *);

	// CgsInputPads.h:71
	bool Release();

	// CgsInputPads.h:75
	void Destruct();

	// CgsInputPads.h:81
	void Update(OutputBuffer *);

	// CgsInputPads.h:88
	CgsInput::EBindResult BindPlayerToPort(int32_t, int32_t);

	// CgsInputPads.h:94
	CgsInput::EUnbindResult UnBindPlayer(int32_t);

	// CgsInputPads.h:101
	void UpdateMapping(const ActionMapping *, int32_t);

	// CgsInputPads.h:105
	void PlayJoltEvent(const PlayJoltEffectEvent &);

	// CgsInputPads.h:109
	void PlayRumbleEvent(const PlayRumbleEffectEvent &);

	// CgsInputPads.h:113
	void ChangeVolumeRumbleEvent(const ChangeVolumeRumbleEffectEvent &);

	// CgsInputPads.h:117
	void StopRumbleEvent(const StopRumbleEffectEvent &);

	// CgsInputPads.h:125
	void UpdateRumble(float32_t, bool, bool, bool);

	// CgsInputPads.h:129
	void SetWheelSpring(const CgsInput::Device::WheelFFSpring &);

	// CgsInputPads.h:132
	void OverrideDeviceState(int32_t, const rw::core::controller::DeviceState *);

	// CgsInputPads.h:137
	DebugManagerPad * GetDebugGamePad(int32_t);

private:
	// CgsInputPads.h:183
	void FillRawData(float32_t *, AnalogueAxisInformation *, int32_t);

	// CgsInputPads.h:186
	void UpdatePadRumble(int32_t, int32_t, float32_t);

	// CgsInputPads.h:191
	float32_t UpdateJoltEnvelope(const JoltEnvelope &, float32_t);

	// CgsInputPads.h:195
	float32_t GetTotalJoltDuration(const JoltEffect &);

	// CgsInputPads.h:199
	float32_t GetTotalJoltEnvelopeDuration(const JoltEnvelope &);

	// CgsInputPads.h:203
	void InitializePads();

}

