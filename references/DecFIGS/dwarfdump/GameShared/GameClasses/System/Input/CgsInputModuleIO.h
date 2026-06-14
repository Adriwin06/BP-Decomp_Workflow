// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
		struct BaseInputEvent;

		struct BindResult;

		struct UnBindResult;

		struct ActionInfo;

		struct AnalogueAxisInformation;

		struct PadOutputInformation;

		struct ActionMapping;

		struct PadMapping;

		struct PostWorldInputBuffer;

		struct OutputBuffer;

	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputModuleIO.h:86
struct CgsInput::InputIO::BaseInputEvent : public Event {
private:
	// CgsInputModuleIO.h:105
	int32_t miPlayer;

	// CgsInputModuleIO.h:106
	int32_t miPort;

public:
	// CgsInputModuleIO.h:94
	void Construct(int32_t, int32_t);

	// CgsInputModuleIO.h:98
	int32_t GetPlayer() const;

	// CgsInputModuleIO.h:102
	int32_t GetPort() const;

}

// CgsInputModuleIO.h:138
struct CgsInput::InputIO::BindResult : public BaseInputEvent {
private:
	// CgsInputModuleIO.h:154
	CgsInput::EBindResult meResultCode;

public:
	// CgsInputModuleIO.h:147
	void Construct(int32_t, int32_t, CgsInput::EBindResult);

	// CgsInputModuleIO.h:151
	CgsInput::EBindResult GetResultCode() const;

}

// CgsInputModuleIO.h:180
struct CgsInput::InputIO::UnBindResult : public BaseInputEvent {
private:
	// CgsInputModuleIO.h:196
	CgsInput::EUnbindResult meResultCode;

public:
	// CgsInputModuleIO.h:189
	void Construct(int32_t, int32_t, CgsInput::EUnbindResult);

	// CgsInputModuleIO.h:193
	CgsInput::EUnbindResult GetResultCode() const;

}

// CgsInputModuleIO.h:238
struct CgsInput::InputIO::ActionInfo {
private:
	// CgsInputModuleIO.h:301
	float32_t mfRawValue;

	// CgsInputModuleIO.h:302
	uint32_t mxEventDetails;

public:
	// CgsInputModuleIO.h:249
	void Construct();

	// CgsInputModuleIO.h:253
	void SetAsUp();

	// CgsInputModuleIO.h:257
	void SetAsDown();

	// CgsInputModuleIO.h:261
	void SetAsPressed();

	// CgsInputModuleIO.h:265
	void SetAsNotPressed();

	// CgsInputModuleIO.h:269
	void SetAsReleased();

	// CgsInputModuleIO.h:273
	void SetAsNotReleased();

	// CgsInputModuleIO.h:277
	void SetValue(float32_t);

	// CgsInputModuleIO.h:281
	bool IsUp() const;

	// CgsInputModuleIO.h:285
	bool IsDown() const;

	// CgsInputModuleIO.h:289
	bool IsPressed() const;

	// CgsInputModuleIO.h:293
	bool IsReleased() const;

	// CgsInputModuleIO.h:297
	float32_t GetValue() const;

}

// CgsInputModuleIO.h:315
struct CgsInput::InputIO::AnalogueAxisInformation {
private:
	// CgsInputModuleIO.h:333
	float32_t[10] mafAxisValue;

public:
	// CgsInputModuleIO.h:319
	void Construct();

	// CgsInputModuleIO.h:324
	float32_t GetValue(CgsInput::EPadAxis) const;

	// CgsInputModuleIO.h:329
	void SetValue(CgsInput::EPadAxis, float32_t);

}

// CgsInputModuleIO.h:345
struct CgsInput::InputIO::PadOutputInformation {
private:
	// CgsInputModuleIO.h:391
	AnalogueAxisInformation mAxisInfo;

	// CgsInputModuleIO.h:392
	ActionInfo[136] maActions;

	// CgsInputModuleIO.h:393
	int32_t miPlayerId;

	// CgsInputModuleIO.h:394
	CgsInput::Device::EType meControllerType;

	// CgsInputModuleIO.h:395
	bool mbPadIdle;

public:
	// CgsInputModuleIO.h:350
	void Construct();

	// CgsInputModuleIO.h:354
	void SetPlayerId(int32_t);

	// CgsInputModuleIO.h:358
	int32_t GetPlayerId() const;

	// CgsInputModuleIO.h:362
	AnalogueAxisInformation * GetAxisInfo();

	// CgsInputModuleIO.h:366
	const AnalogueAxisInformation * GetAxisInfo() const;

	// CgsInputModuleIO.h:370
	ActionInfo * GetActionInfo();

	// CgsInputModuleIO.h:374
	const ActionInfo * GetActionInfo() const;

	// CgsInputModuleIO.h:378
	void SetPadIdle(bool);

	// CgsInputModuleIO.h:381
	bool IsPadIdle() const;

	// CgsInputModuleIO.h:385
	void SetType(CgsInput::Device::EType);

	// CgsInputModuleIO.h:388
	CgsInput::Device::EType GetType() const;

}

// CgsInputModuleIO.h:408
struct CgsInput::InputIO::ActionMapping {
	// CgsInputModuleIO.h:416
	int8_t[4] maiGameIds;

public:
	// CgsInputModuleIO.h:413
	void Construct();

}

// CgsInputModuleIO.h:429
struct CgsInput::InputIO::PadMapping : public Event {
	// CgsInputModuleIO.h:436
	int32_t miPortId;

	// CgsInputModuleIO.h:437
	ActionMapping[34] maMapping;

public:
	// CgsInputModuleIO.h:434
	void Construct(int32_t, const ActionMapping *);

}

// CgsInputModuleIO.h:776
struct CgsInput::InputIO::PostWorldInputBuffer : public IOBuffer {
	// CgsInputModuleIO.h:127
	typedef EventQueue<CgsInput::InputIO::BaseInputEvent,8> BindRequestQueue;

private:
	// CgsInputModuleIO.h:830
	PostWorldInputBuffer::BindRequestQueue mBindRequestQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:169
	typedef EventQueue<CgsInput::InputIO::BaseInputEvent,8> UnBindRequestQueue;

	// CgsInputModuleIO.h:831
	PostWorldInputBuffer::UnBindRequestQueue mUnBindRequestQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:441
	typedef EventQueue<CgsInput::InputIO::PadMapping,7> PadMappingQueue;

	// CgsInputModuleIO.h:832
	PostWorldInputBuffer::PadMappingQueue mPadMappingQueue;

	// CgsInputModuleIO.h:833
	CgsInput::Device::WheelFFSpring mWheelFFSpring;

public:
	// CgsInputModuleIO.h:781
	void Construct();

	// CgsInputModuleIO.h:785
	void Destruct();

	// CgsInputModuleIO.h:791
	void PostBindRequest(int32_t, int32_t);

	// CgsInputModuleIO.h:796
	void PostBindNextRequest(int32_t);

	// CgsInputModuleIO.h:801
	void PostUnbindRequest(int32_t);

	// CgsInputModuleIO.h:807
	void PostMappingRequest(ActionMapping *, int32_t);

	// CgsInputModuleIO.h:811
	const PostWorldInputBuffer::BindRequestQueue * GetBindRequestQueue() const;

	// CgsInputModuleIO.h:815
	const PostWorldInputBuffer::UnBindRequestQueue * GetUnBindRequestQueue() const;

	// CgsInputModuleIO.h:819
	const PostWorldInputBuffer::PadMappingQueue * GetPadMappingQueue() const;

	// CgsInputModuleIO.h:823
	void SetWheelFFSpring(const CgsInput::Device::WheelFFSpring &);

	// CgsInputModuleIO.h:826
	const CgsInput::Device::WheelFFSpring & GetWheelFFSpring() const;

}

// CgsInputModuleIO.h:844
struct CgsInput::InputIO::OutputBuffer : public IOBuffer {
	// CgsInputModuleIO.h:157
	typedef EventQueue<CgsInput::InputIO::BindResult,8> BindResultQueue;

private:
	// CgsInputModuleIO.h:893
	OutputBuffer::BindResultQueue mBindResultQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:199
	typedef EventQueue<CgsInput::InputIO::UnBindResult,8> UnBindResultQueue;

	// CgsInputModuleIO.h:894
	OutputBuffer::UnBindResultQueue mUnBindResultQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:219
	typedef EventQueue<CgsInput::InputIO::BaseInputEvent,8> PadDisconnectedQueue;

	// CgsInputModuleIO.h:895
	OutputBuffer::PadDisconnectedQueue mPadDisconnectedQueue;

	// CgsInputModuleIO.h:897
	PadOutputInformation[7] maPadOutputInformation;

public:
	// CgsInputModuleIO.h:849
	void Construct();

	// CgsInputModuleIO.h:853
	void Destruct();

	// CgsInputModuleIO.h:857
	const OutputBuffer::BindResultQueue * GetBindResultQueue() const;

	// CgsInputModuleIO.h:861
	const OutputBuffer::UnBindResultQueue * GetUnbindResultQueue() const;

	// CgsInputModuleIO.h:865
	const OutputBuffer::PadDisconnectedQueue * GetPadDisconnectedQueue() const;

	// CgsInputModuleIO.h:871
	const PadOutputInformation * GetPadInfo(int32_t) const;

	// CgsInputModuleIO.h:875
	OutputBuffer::BindResultQueue * GetBindResultQueue();

	// CgsInputModuleIO.h:879
	OutputBuffer::UnBindResultQueue * GetUnbindResultQueue();

	// CgsInputModuleIO.h:883
	OutputBuffer::PadDisconnectedQueue * GetPadDisconnectedQueue();

	// CgsInputModuleIO.h:889
	PadOutputInformation * GetPadInfo(int32_t);

}

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
		struct BaseInputEvent;

		struct BindResult;

		struct UnBindResult;

		struct ActionInfo;

		struct AnalogueAxisInformation;

		struct PadOutputInformation;

		struct ActionMapping;

		struct PadMapping;

		struct BaseRumbleEvent;

		struct JoltEnvelope;

		struct JoltEffect;

		struct PlayJoltEffectEvent;

		struct PlayRumbleEffectEvent;

		struct ChangeVolumeRumbleEffectEvent;

		struct StopRumbleEffectEvent;

		struct PreWorldInputBuffer;

		struct PostWorldInputBuffer;

		struct OutputBuffer;

	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputModuleIO.h:460
struct CgsInput::InputIO::BaseRumbleEvent : public BaseInputEvent {
private:
	// CgsInputModuleIO.h:473
	int32_t miRumblePriority;

public:
	// CgsInputModuleIO.h:465
	void Construct(int32_t, int32_t, int32_t);

	// CgsInputModuleIO.h:469
	int32_t GetRumblePriority() const;

}

// CgsInputModuleIO.h:485
struct CgsInput::InputIO::JoltEnvelope {
	// CgsInputModuleIO.h:487
	float32_t mfAttackTime;

	// CgsInputModuleIO.h:488
	float32_t mfDecayTime;

	// CgsInputModuleIO.h:489
	float32_t mfSustainTime;

	// CgsInputModuleIO.h:490
	float32_t mfReleaseTime;

	// CgsInputModuleIO.h:491
	float32_t mfPeakSpeedValue;

	// CgsInputModuleIO.h:492
	float32_t mfSustainSpeedValue;

}

// CgsInputModuleIO.h:504
struct CgsInput::InputIO::JoltEffect {
	// CgsInputModuleIO.h:506
	JoltEnvelope mLowFreqJoltData;

	// CgsInputModuleIO.h:507
	JoltEnvelope mHighFreqJoltData;

}

// CgsInputModuleIO.h:519
struct CgsInput::InputIO::PlayJoltEffectEvent : public BaseRumbleEvent {
private:
	// CgsInputModuleIO.h:530
	JoltEffect mJoltEffect;

public:
	// CgsInputModuleIO.h:523
	void Construct(int32_t, int32_t, int32_t, const JoltEffect &);

	// CgsInputModuleIO.h:527
	const JoltEffect & GetJoltEffect() const;

}

// CgsInputModuleIO.h:545
struct CgsInput::InputIO::PlayRumbleEffectEvent : public PlayJoltEffectEvent {
private:
	// CgsInputModuleIO.h:558
	int32_t miRumbleId;

	// CgsInputModuleIO.h:559
	float32_t mfRumbleVolume;

public:
	// CgsInputModuleIO.h:549
	void Construct(int32_t, int32_t, int32_t, const JoltEffect &, int32_t, float);

	// CgsInputModuleIO.h:552
	int32_t GetRumbleId() const;

	// CgsInputModuleIO.h:555
	float32_t GetRumbleVolume() const;

}

// CgsInputModuleIO.h:571
struct CgsInput::InputIO::ChangeVolumeRumbleEffectEvent : public BaseInputEvent {
private:
	// CgsInputModuleIO.h:588
	JoltEffect mJoltEffect;

	// CgsInputModuleIO.h:589
	int32_t miRumbleId;

	// CgsInputModuleIO.h:590
	float32_t mfRumbleVolume;

public:
	// CgsInputModuleIO.h:575
	void Construct(int32_t, int32_t, const JoltEffect &, int32_t, float);

	// CgsInputModuleIO.h:578
	int32_t GetRumbleId() const;

	// CgsInputModuleIO.h:581
	float32_t GetRumbleVolume() const;

	// CgsInputModuleIO.h:585
	const JoltEffect & GetJoltEffect() const;

}

// CgsInputModuleIO.h:602
struct CgsInput::InputIO::StopRumbleEffectEvent : public BaseInputEvent {
private:
	// CgsInputModuleIO.h:612
	int32_t miRumbleId;

public:
	// CgsInputModuleIO.h:606
	void Construct(int32_t, int32_t, int32_t);

	// CgsInputModuleIO.h:609
	int32_t GetRumbleId() const;

}

// CgsInputModuleIO.h:638
struct CgsInput::InputIO::PreWorldInputBuffer : public IOBuffer {
	// CgsInputModuleIO.h:534
	typedef EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4> PlayJoltEffectEventQueue;

private:
	// CgsInputModuleIO.h:754
	PreWorldInputBuffer::PlayJoltEffectEventQueue mPlayJoltEffectEventQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:617
	typedef EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4> PlayRumbleEffectEventQueue;

	// CgsInputModuleIO.h:755
	PreWorldInputBuffer::PlayRumbleEffectEventQueue mPlayRumbleEffectEventQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:618
	typedef EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4> ChangeVolumeRumbleEffectEventQueue;

	// CgsInputModuleIO.h:756
	PreWorldInputBuffer::ChangeVolumeRumbleEffectEventQueue mChangeVolumeRumbleEffectEventQueue;

	// Unknown accessibility
	// CgsInputModuleIO.h:619
	typedef EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4> StopRumbleEffectEventQueue;

	// CgsInputModuleIO.h:757
	PreWorldInputBuffer::StopRumbleEffectEventQueue mStopRumbleEffectEventQueue;

	// CgsInputModuleIO.h:760
	TimerStatusInterface mTimerInterface;

	// CgsInputModuleIO.h:762
	bool mbPauseRumble;

	// CgsInputModuleIO.h:763
	bool mbEnableRumble;

	// CgsInputModuleIO.h:764
	bool mbForceFeedback;

public:
	// CgsInputModuleIO.h:643
	void Construct();

	// CgsInputModuleIO.h:647
	void Destruct();

	// CgsInputModuleIO.h:654
	void PostPlayJoltEffectByPort(int32_t, int32_t, const JoltEffect &);

	// CgsInputModuleIO.h:661
	void PostPlayJoltEffectByPlayer(int32_t, int32_t, const JoltEffect &);

	// CgsInputModuleIO.h:665
	const PreWorldInputBuffer::PlayJoltEffectEventQueue * GetPlayJoltEffectEventQueue() const;

	// CgsInputModuleIO.h:674
	void PostPlayRumbleEffectByPort(int32_t, int32_t, const JoltEffect &, int32_t, float32_t);

	// CgsInputModuleIO.h:683
	void PostPlayRumbleEffectByPlayer(int32_t, int32_t, const JoltEffect &, int32_t, float32_t);

	// CgsInputModuleIO.h:687
	const PreWorldInputBuffer::PlayRumbleEffectEventQueue * GetPlayRumbleEffectEventQueue() const;

	// CgsInputModuleIO.h:695
	void PostChangeVolumeRumbleEffectByPort(int32_t, const JoltEffect &, int32_t, float32_t);

	// CgsInputModuleIO.h:703
	void PostChangeVolumeRumbleEffectByPlayer(int32_t, const JoltEffect &, int32_t, float32_t);

	// CgsInputModuleIO.h:707
	const PreWorldInputBuffer::ChangeVolumeRumbleEffectEventQueue * GetChangeVolumeRumbleEffectEventQueue() const;

	// CgsInputModuleIO.h:713
	void PostStopRumbleEffectByPort(int32_t, int32_t);

	// CgsInputModuleIO.h:719
	void PostStopRumbleEffectByPlayer(int32_t, int32_t);

	// CgsInputModuleIO.h:722
	const PreWorldInputBuffer::StopRumbleEffectEventQueue * GetStopRumbleEffectEventQueue() const;

	// CgsInputModuleIO.h:725
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// CgsInputModuleIO.h:729
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// CgsInputModuleIO.h:732
	bool GetRumblePaused() const;

	// CgsInputModuleIO.h:736
	void SetRumblePaused(bool);

	// CgsInputModuleIO.h:739
	bool GetRumbleEnabled() const;

	// CgsInputModuleIO.h:743
	void SetRumbleEnabled(bool);

	// CgsInputModuleIO.h:747
	void SetWheelForceFeedbackEnabled(bool);

	// CgsInputModuleIO.h:750
	const bool GetWheelForceFeedbackEnabled() const;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
		struct BaseInputEvent;

		struct BindResult;

		struct UnBindResult;

		struct ActionInfo;

		struct AnalogueAxisInformation;

		struct PadOutputInformation;

		struct ActionMapping;

		struct PadMapping;

		struct BaseRumbleEvent;

		struct JoltEnvelope;

		struct JoltEffect;

		struct PlayJoltEffectEvent;

		struct PlayRumbleEffectEvent;

		struct ChangeVolumeRumbleEffectEvent;

		struct StopRumbleEffectEvent;

		struct PreWorldInputBuffer;

		struct PostWorldInputBuffer;

		struct OutputBuffer;

	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
		struct BaseInputEvent;

		struct BindResult;

		struct UnBindResult;

		struct ActionInfo;

		struct AnalogueAxisInformation;

		struct PadOutputInformation;

		struct ActionMapping;

		struct PadMapping;

		struct PostWorldInputBuffer;

		struct OutputBuffer;

	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
		struct ActionInfo;

		struct AnalogueAxisInformation;

		struct PadOutputInformation;

	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputModuleIO.h:76
	namespace InputIO {
	}

	// CgsInputModuleIO.h:52
	const uint32_t KU_NUMBER_OF_PADS = 7;

	// CgsInputModuleIO.h:59
	const uint32_t KU_MAX_RUMBLE_EVENTS_PER_PAD = 4;

	// CgsInputModuleIO.h:60
	const uint32_t KU_MAX_GAME_EVENTS_PER_BUTTON = 4;

	// CgsInputModuleIO.h:61
	const uint32_t KU_MAX_NUMBER_OF_GAME_EVENTS_PER_PAD = 136;

	// CgsInputModuleIO.h:66
	const int32_t KI_MAX_RUMBLE = 65535;

	// CgsInputModuleIO.h:69
	const float32_t KF_BUTTONDOWNTHRESHOLD;

}

