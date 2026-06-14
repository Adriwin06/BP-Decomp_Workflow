// CgsCommon.h:25
namespace CgsSound {
	// CgsCommandStream.h:35
	namespace Io {
		// Declaration
		struct MessageHeader {
			// CgsMessage.h:85
			extern const uint16_t KU16_NO_DESTINATION = 65535;

		}

	}

}

// CgsMessage.h:85
extern const uint16_t KU16_NO_DESTINATION = 65535;

// CgsCommon.h:25
namespace CgsSound {
	// CgsEffectBase.h:44
	namespace Io {
		// Declaration
		struct MessageHeader {
			// CgsMessage.h:85
			extern const uint16_t KU16_NO_DESTINATION = 65535;

		}

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommandStream.h:35
	namespace Io {
		// CgsMessage.h:48
		enum eEffectTypes {
			E_SOUND_EFFECT_TYPE_INVALID = 0,
			E_SOUND_EFFECT_TYPE_OBJECT = 1,
			E_SOUND_EFFECT_TYPE_CONTROL = 2,
			E_SOUND_EFFECT_TYPE_COUNT = 3,
		}

	}

}

// CgsMessage.h:82
struct CgsSound::Io::MessageHeader : public Event {
	int (*)(...) * _vptr.MessageHeader;

	// CgsMessage.h:85
	extern const uint16_t KU16_NO_DESTINATION = 65535;

	// CgsMessage.h:86
	extern const uint16_t KU16_ALL_DESTINATIONS = 65534;

private:
	// CgsMessage.h:250
	CgsSound::Io::eEffectTypes meEffectType;

	// CgsMessage.h:252
	int16_t mi16EventId;

	// CgsMessage.h:254
	uint16_t mu16StateManagerId;

	// CgsMessage.h:255
	uint16_t mu16InstanceID;

	// CgsMessage.h:256
	uint16_t mu16EffectId;

public:
	void MessageHeader(const CgsSound::Io::MessageHeader &);

	void MessageHeader();

	// CgsMessage.cpp:52
	void Construct(int16_t);

	// CgsMessage.cpp:74
	void Construct(int16_t, uint16_t);

	// CgsMessage.cpp:99
	void Construct(int16_t, uint16_t, uint16_t, uint16_t, CgsSound::Io::eEffectTypes);

	// CgsMessage.cpp:119
	virtual void Destruct();

	// CgsMessage.cpp:142
	void SetDestination(uint16_t, uint16_t, uint16_t, CgsSound::Io::eEffectTypes);

	// CgsMessage.h:298
	int16_t GetEventId() const;

	// CgsMessage.h:315
	uint16_t GetStateManagerId() const;

	// CgsMessage.h:332
	uint16_t GetInstanceID() const;

	// CgsMessage.h:349
	CgsSound::Io::eEffectTypes GetEffectType() const;

	// CgsMessage.h:366
	uint16_t GetEffectId() const;

	// CgsMessage.h:383
	bool IsStateManagerIdSet() const;

	// CgsMessage.h:400
	bool IsInstanceIDSet() const;

	// CgsMessage.h:417
	bool IsEffectIdSet() const;

private:
	// CgsMessage.h:435
	void SetEventId(int16_t);

	// CgsMessage.h:453
	void SetStateManagerId(uint16_t);

	// CgsMessage.h:471
	void SetInstanceID(uint16_t);

	// CgsMessage.h:490
	void SetEffectId(uint16_t, CgsSound::Io::eEffectTypes);

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_ResetOnTrack> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_ResetOnTrack mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_ResetOnTrack> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_CameraPhoto> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_CameraPhoto mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_CameraPhoto> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_CameraCut> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_CameraCut mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_CameraCut> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::FxVolumes> : public MessageHeader {
	// CgsMessage.h:274
	FxVolumes mData;

public:
	void Message(const Message<BrnSound::FxVolumes> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::RaceCarIsNowActive> : public MessageHeader {
	// CgsMessage.h:274
	RaceCarIsNowActive mData;

public:
	void Message(const Message<BrnSound::RaceCarIsNowActive> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<int32_t> : public MessageHeader {
	// CgsMessage.h:274
	int32_t mData;

public:
	void Message(const Message<int32_t> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<CgsLanguage::ELanguage> : public MessageHeader {
	// CgsMessage.h:274
	CgsLanguage::ELanguage mData;

public:
	void Message(const Message<CgsLanguage::ELanguage> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiEventAudioEventIntros> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventAudioEventIntros mData;

public:
	void Message(const Message<BrnGui::GuiEventAudioEventIntros> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiEventAudioSettings> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventAudioSettings mData;

public:
	void Message(const Message<BrnGui::GuiEventAudioSettings> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<Attrib::Key> : public MessageHeader {
	// CgsMessage.h:274
	Attribute::Key mData;

public:
	void Message(const Message<Attrib::Key> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiEventAudioTraxPlayOrder> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventAudioTraxPlayOrder mData;

public:
	void Message(const Message<BrnGui::GuiEventAudioTraxPlayOrder> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiEventAudioTraxPreview> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventAudioTraxPreview mData;

public:
	void Message(const Message<BrnGui::GuiEventAudioTraxPreview> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventAudioTraxLastPlayedIndexes mData;

public:
	void Message(const Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiEventAudioTraxUpdate> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventAudioTraxUpdate mData;

public:
	void Message(const Message<BrnGui::GuiEventAudioTraxUpdate> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiAudioEvent> : public MessageHeader {
	// CgsMessage.h:274
	GuiAudioEvent mData;

public:
	void Message(const Message<BrnGui::GuiAudioEvent> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<CgsGui::GuiEventPlayMusicOnMenuStream> : public MessageHeader {
	// CgsMessage.h:274
	GuiEventPlayMusicOnMenuStream mData;

public:
	void Message(const Message<CgsGui::GuiEventPlayMusicOnMenuStream> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGameState::GameStateModuleIO::EGameModeType> : public MessageHeader {
	// CgsMessage.h:274
	BrnGameState::GameStateModuleIO::EGameModeType mData;

public:
	void Message(const Message<BrnGameState::GameStateModuleIO::EGameModeType> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_OnlineRivalSweep> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_OnlineRivalSweep mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_OnlineRivalSweep> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGui::GuiAudioTriggerEvent> : public MessageHeader {
	// CgsMessage.h:274
	GuiAudioTriggerEvent mData;

public:
	void Message(const Message<BrnGui::GuiAudioTriggerEvent> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnProgression::TrophyUnlockData::UnlockType> : public MessageHeader {
	// CgsMessage.h:274
	BrnProgression::TrophyUnlockData::UnlockType mData;

public:
	void Message(const Message<BrnProgression::TrophyUnlockData::UnlockType> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver> : public MessageHeader {
	// OnlineVoiceOver.h:30
	typedef AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver EOnlineVoiceOver;

	// CgsMessage.h:274
	Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver>::EOnlineVoiceOver mData;

public:
	void Message(const Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType> : public MessageHeader {
	// CgsMessage.h:274
	BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType mData;

public:
	void Message(const Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_QuitEvent> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_QuitEvent mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_QuitEvent> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnProgression::ETrainingType> : public MessageHeader {
	// CgsMessage.h:274
	BrnProgression::ETrainingType mData;

public:
	void Message(const Message<BrnProgression::ETrainingType> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<CgsSound::Playback::Name> : public MessageHeader {
	// CgsMessage.h:274
	Name mData;

public:
	void Message(const Message<CgsSound::Playback::Name> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience> : public MessageHeader {
	// CgsMessage.h:274
	BrnSound::Logic::MusicEffect::EJunkyardAmbience mData;

public:
	void Message(const Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::GameModeLostResults> : public MessageHeader {
	// CgsMessage.h:274
	GameModeLostResults mData;

public:
	void Message(const Message<BrnSound::GameModeLostResults> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction> : public MessageHeader {
	// CgsMessage.h:274
	ShowModeResultsAction mData;

public:
	void Message(const Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_StruntJump> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_StruntJump mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_StruntJump> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction> : public MessageHeader {
	// CgsMessage.h:274
	RoadRagePlayerDamageAction mData;

public:
	void Message(const Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::ESoundMessages> : public MessageHeader {
	// CgsMessage.h:274
	BrnSound::ESoundMessages mData;

public:
	void Message(const Message<BrnSound::ESoundMessages> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_StuntStunt> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_StuntStunt mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_StuntStunt> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::FxMessage_StuntSmash> : public MessageHeader {
	// CgsMessage.h:274
	FxMessage_StuntSmash mData;

public:
	void Message(const Message<BrnSound::Logic::FxMessage_StuntSmash> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGameState::GameStateModuleIO::EGameActionType> : public MessageHeader {
	// CgsMessage.h:274
	BrnGameState::GameStateModuleIO::EGameActionType mData;

public:
	void Message(const Message<BrnGameState::GameStateModuleIO::EGameActionType> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<float32_t> : public MessageHeader {
	// CgsMessage.h:274
	float32_t mData;

public:
	void Message(const Message<float32_t> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent> : public MessageHeader {
	// CgsMessage.h:274
	VehicleImpactEvent mData;

public:
	void Message(const Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<CgsSound::Io::QueueElement> : public MessageHeader {
	// CgsMessage.h:274
	Command::QueueElement mData;

public:
	void Message(const Message<CgsSound::Io::QueueElement> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<bool> : public MessageHeader {
	// CgsMessage.h:274
	bool mData;

public:
	void Message(const Message<bool> &);

	void Message();

}

// CgsMessage.h:272
struct CgsSound::Io::Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere> : public MessageHeader {
	// CgsMessage.h:274
	BrnSound::Logic::Brn3DEffectControl::DrawSphere mData;

public:
	void Message(const Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere> &);

	void Message();

}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::FxVolumes>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:82
void CgsSound::Io::MessageHeader::MessageHeader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<bool>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<CgsGui::GuiEventPlayMusicOnMenuStream>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiAudioEvent>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiAudioTriggerEvent>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiEventAudioTraxUpdate>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiEventAudioTraxPreview>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiEventAudioTraxPlayOrder>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<CgsSound::Playback::Name>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<Attrib::Key>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiEventAudioSettings>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGui::GuiEventAudioEventIntros>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<CgsLanguage::ELanguage>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<int32_t>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<CgsSound::Io::QueueElement>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<float32_t>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGameState::GameStateModuleIO::EGameActionType>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_StuntSmash>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_StuntStunt>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::ESoundMessages>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_StruntJump>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::GameModeLostResults>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnProgression::ETrainingType>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_QuitEvent>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnProgression::TrophyUnlockData::UnlockType>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_OnlineRivalSweep>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnGameState::GameStateModuleIO::EGameModeType>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_CameraCut>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_CameraPhoto>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage_ResetOnTrack>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::RaceCarIsNowActive>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:272
void CgsSound::Io::Message<BrnSound::Logic::FxMessage>::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessage.h:86
extern const uint16_t KU16_ALL_DESTINATIONS = 65534;

