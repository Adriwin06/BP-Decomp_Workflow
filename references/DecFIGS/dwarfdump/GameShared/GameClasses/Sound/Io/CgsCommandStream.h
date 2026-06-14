// CgsCommon.h:25
namespace CgsSound {
	// CgsCommandStream.h:35
	namespace Io {
		// CgsCommandStream.h:70
		enum ECommandType {
			E_COMMAND_INVALID = 0,
			E_COMMAND_VOICE_CREATE = 1,
			E_COMMAND_VOICE_RELEASE = 2,
			E_COMMAND_VOICE_CONNECT = 3,
			E_COMMAND_VOICE_DISCONNECT = 4,
			E_COMMAND_VOICE_ATTACH = 5,
			E_COMMAND_VOICE_DETACH = 6,
			E_COMMAND_VOICE_PLAY = 7,
			E_COMMAND_VOICE_STOP = 8,
			E_COMMAND_VOICE_SET_GAIN = 9,
			E_COMMAND_VOICE_SET_PARAMETER = 10,
			E_COMMAND_CONTENT_CREATE = 11,
			E_COMMAND_CONTENT_RELEASE = 12,
			E_COMMAND_APPLY_REVERB = 13,
			E_COMMAND_COUNT = 14,
		}

		struct Command;

	}

}

// CgsCommandStream.h:100
struct CgsSound::Io::Command {
	// CgsCommandStream.h:57
	typedef uint32_t QueueElement;

private:
	// CgsCommandStream.h:115
	Command::QueueElement mType;

public:
	// CgsCommandStream.h:103
	CgsSound::Io::ECommandType GetType() const;

	// CgsCommandStream.h:106
	const Command::QueueElement * GetFirstElement() const;

protected:
	// CgsCommandStream.h:110
	void Command(CgsSound::Io::ECommandType);

	// CgsCommandStream.h:112
	void ~Command();

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsEffectBase.h:44
	namespace Io {
		// CgsCommandStream.h:70
		enum ECommandType {
			E_COMMAND_INVALID = 0,
			E_COMMAND_VOICE_CREATE = 1,
			E_COMMAND_VOICE_RELEASE = 2,
			E_COMMAND_VOICE_CONNECT = 3,
			E_COMMAND_VOICE_DISCONNECT = 4,
			E_COMMAND_VOICE_ATTACH = 5,
			E_COMMAND_VOICE_DETACH = 6,
			E_COMMAND_VOICE_PLAY = 7,
			E_COMMAND_VOICE_STOP = 8,
			E_COMMAND_VOICE_SET_GAIN = 9,
			E_COMMAND_VOICE_SET_PARAMETER = 10,
			E_COMMAND_CONTENT_CREATE = 11,
			E_COMMAND_CONTENT_RELEASE = 12,
			E_COMMAND_APPLY_REVERB = 13,
			E_COMMAND_COUNT = 14,
		}

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommandStream.h:35
	namespace Io {
		// CgsCommandStream.h:70
		enum ECommandType {
			E_COMMAND_INVALID = 0,
			E_COMMAND_VOICE_CREATE = 1,
			E_COMMAND_VOICE_RELEASE = 2,
			E_COMMAND_VOICE_CONNECT = 3,
			E_COMMAND_VOICE_DISCONNECT = 4,
			E_COMMAND_VOICE_ATTACH = 5,
			E_COMMAND_VOICE_DETACH = 6,
			E_COMMAND_VOICE_PLAY = 7,
			E_COMMAND_VOICE_STOP = 8,
			E_COMMAND_VOICE_SET_GAIN = 9,
			E_COMMAND_VOICE_SET_PARAMETER = 10,
			E_COMMAND_CONTENT_CREATE = 11,
			E_COMMAND_CONTENT_RELEASE = 12,
			E_COMMAND_APPLY_REVERB = 13,
			E_COMMAND_COUNT = 14,
		}

		struct Command;

		struct CommandStream;

		struct CommandStreamReader;

		struct DataStream;

		struct MessageHeader;

		struct Message<BrnSound::Logic::FxMessage>;

		struct Message<BrnSound::Logic::FxMessage_ResetOnTrack>;

		struct Message<BrnSound::Logic::FxMessage_CameraPhoto>;

		struct Message<BrnSound::Logic::FxMessage_CameraCut>;

		struct Message<BrnSound::FxVolumes>;

		struct Message<BrnSound::RaceCarIsNowActive>;

		struct Message<int32_t>;

		struct Message<CgsLanguage::ELanguage>;

		struct Message<BrnGui::GuiEventAudioEventIntros>;

		struct Message<BrnGui::GuiEventAudioSettings>;

		struct Message<Attrib::Key>;

		struct Message<BrnGui::GuiEventAudioTraxPlayOrder>;

		struct Message<BrnGui::GuiEventAudioTraxPreview>;

		struct Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes>;

		struct Message<BrnGui::GuiEventAudioTraxUpdate>;

		struct Message<BrnGui::GuiAudioEvent>;

		struct Message<CgsGui::GuiEventPlayMusicOnMenuStream>;

		struct Message<BrnGameState::GameStateModuleIO::EGameModeType>;

		struct Message<BrnSound::Logic::FxMessage_OnlineRivalSweep>;

		struct Message<BrnGui::GuiAudioTriggerEvent>;

		struct Message<BrnProgression::TrophyUnlockData::UnlockType>;

		struct Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver>;

		struct Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType>;

		struct Message<BrnSound::Logic::FxMessage_QuitEvent>;

		struct Message<BrnProgression::ETrainingType>;

		struct Message<CgsSound::Playback::Name>;

		struct Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience>;

		struct Message<BrnSound::GameModeLostResults>;

		struct Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction>;

		struct Message<BrnSound::Logic::FxMessage_StruntJump>;

		struct Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction>;

		struct Message<BrnSound::ESoundMessages>;

		struct Message<BrnSound::Logic::FxMessage_StuntStunt>;

		struct Message<BrnSound::Logic::FxMessage_StuntSmash>;

		struct Message<BrnGameState::GameStateModuleIO::EGameActionType>;

		struct Message<float32_t>;

		struct Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent>;

		struct Message<CgsSound::Io::QueueElement>;

		struct Message<bool>;

		struct Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere>;

		struct Message<CgsSound::Logic::Cgs3dEffectControl::DebugRendererMessage>;

		struct Message<BrnSound::Logic::FxMessage_WindowSmash>;

		struct Message<const BrnGameState::GameStateModuleIO::VehicleImpactEvent>;

		struct Message<const CgsGui::GuiEventPlayMusicOnMenuStream>;

	}

}

// CgsCommandStream.h:156
struct CgsSound::Io::CommandStream : public EventQueue<CgsSound::Io::QueueElement,4096> {
public:
	// CgsCommandStream.h:158
	void CommandStream();

	// CgsCommandStream.h:159
	void ~CommandStream();

}

// CgsCommandStream.h:204
struct CgsSound::Io::CommandStreamReader {
private:
	// CgsCommandStream.h:232
	uint32_t mu32Index;

	// CgsCommandStream.h:233
	uint32_t mu32Length;

	// CgsCommandStream.h:234
	const const CommandStream & mCommandStream;

public:
	// CgsCommandStream.h:209
	void CommandStreamReader(const CommandStream &, uint32_t);

	// CgsCommandStream.h:216
	CommandStreamReader & operator=(const CommandStreamReader &);

	// CgsCommandStream.h:220
	Command::QueueElement Read();

	// CgsCommandStream.h:223
	float32_t ReadAsFloat();

	// CgsCommandStream.h:226
	Command::QueueElement Peek();

	// CgsCommandStream.h:229
	bool IsDataRemaining();

}

