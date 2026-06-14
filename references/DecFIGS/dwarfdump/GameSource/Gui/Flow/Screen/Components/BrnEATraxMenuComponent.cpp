// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct EATraxMenuComponent {
		// BrnEATraxMenuComponent.h:131
		enum InputCommand {
			E_INPUTCOMMAND_HIGHLIGHT_PREVIOUS_TRACK = 0,
			E_INPUTCOMMAND_HIGHLIGHT_NEXT_TRACK = 1,
			E_INPUTCOMMAND_CHANGE_CURRENT_TRACK_STATE_TO_PREVIOUS = 2,
			E_INPUTCOMMAND_CHANGE_CURRENT_TRACK_STATE_TO_NEXT = 3,
			E_INPUTCOMMAND_CHANGE_ALL_TRACKS_TO_NEXT = 4,
		}

		// BrnEATraxMenuComponent.h:141
		enum ETraxPlayState {
			E_TRAX_PLAY_STATE_ENABLED = 0,
			E_TRAX_PLAY_STATE_EVENTONLY = 1,
			E_TRAX_PLAY_STATE_FREEBURNONLY = 2,
			E_TRAX_PLAY_STATE_DISABLED = 3,
			E_TRAX_PLAY_STATE_COUNT = 4,
		}

	public:
		// BrnEATraxMenuComponent.cpp:70
		void Construct(const char *, StateInterface *, const char *, int32_t);

	private:
		// BrnEATraxMenuComponent.cpp:86
		void BuildStringIDs();

		// BrnEATraxMenuComponent.cpp:253
		void SetSendDrawInformationPending(bool);

		// BrnEATraxMenuComponent.cpp:241
		bool IsDrawRequestPending();

	public:
		// BrnEATraxMenuComponent.cpp:319
		void UpdatePlayOrderMode(BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode);

		// BrnEATraxMenuComponent.cpp:197
		void Initialize(const GuiEventAudioTraxUpdate::EATraxArrayType *, const GuiEventAudioTraxUpdate::EATraxArrayType *);

	private:
		// BrnEATraxMenuComponent.h:279
		BrnGui::EATraxMenuComponent::ETraxPlayState GetTrackMode(int32_t);

		// BrnEATraxMenuComponent.cpp:265
		void SendDrawInformationToApt();

	public:
		// BrnEATraxMenuComponent.cpp:225
		void Update();

	private:
		// BrnEATraxMenuComponent.h:307
		void SetTrackMode(int32_t, BrnGui::EATraxMenuComponent::ETraxPlayState);

	public:
		// BrnEATraxMenuComponent.cpp:107
		void HandleInput(BrnGui::EATraxMenuComponent::InputCommand);

		// Unknown accessibility
		// BrnEATraxMenuComponent.h:128
		extern const int32_t KI_NUM_VISIBLE_TRACKS = 5;

		// Unknown accessibility
		// BrnEATraxMenuComponent.cpp:23
		extern const float32_t KF_NUM_VISIBLE_TRACKS;

	private:
		// BrnEATraxMenuComponent.h:237
		extern const uint32_t KU_MAX_APT_COMMS_STRING_ID_SIZE = 16;

		// BrnEATraxMenuComponent.cpp:25
		extern char[5][16] msaacVisibleIDs;

		// BrnEATraxMenuComponent.cpp:26
		extern char[5][16] msaacSongIndexIDs;

		// BrnEATraxMenuComponent.cpp:27
		extern char[5][16] msaacNameIDs;

		// BrnEATraxMenuComponent.cpp:28
		extern char[5][16] msaacArtistIDs;

		// BrnEATraxMenuComponent.cpp:29
		extern char[5][16] msaacAlbumIDs;

		// BrnEATraxMenuComponent.cpp:30
		extern char[5][16] msaacEnabledIDs;

		// BrnEATraxMenuComponent.cpp:31
		extern const char * mspacBarStartID;

		// BrnEATraxMenuComponent.cpp:32
		extern const char * mspacBarEndID;

		// BrnEATraxMenuComponent.cpp:33
		extern const char[12] KAC_PLAY_ORDER_MODE_NAME;

		// BrnEATraxMenuComponent.cpp:35
		extern const char *[2] KAPC_PLAY_ORDER_MODES;

		// BrnEATraxMenuComponent.cpp:41
		extern const char *[4] KAPC_TRAX_PLAY_STATE;

	}

}

