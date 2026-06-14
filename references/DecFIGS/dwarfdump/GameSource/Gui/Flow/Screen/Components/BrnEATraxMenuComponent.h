// BrnEATraxMenuComponent.h:128
extern const int32_t KI_NUM_VISIBLE_TRACKS = 5;

// BrnEATraxMenuComponent.h:129
extern const float32_t KF_NUM_VISIBLE_TRACKS;

// BrnEATraxMenuComponent.h:237
extern const uint32_t KU_MAX_APT_COMMS_STRING_ID_SIZE = 16;

// BrnEATraxMenuComponent.h:251
extern char[] KAC_PLAY_ORDER_MODE_NAME;

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

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct EATraxMenuComponent {
	public:
		// BrnEATraxMenuComponent.h:348
		void ResetSettingsChanged();

		// BrnEATraxMenuComponent.h:261
		const GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxEnabledInFreeBurnBitfieldPtr();

		// BrnEATraxMenuComponent.h:267
		const GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxEnabledInEventsBitfieldPtr();

		// BrnEATraxMenuComponent.h:273
		int32_t GetHighlightedTrackIndex();

		// BrnEATraxMenuComponent.h:356
		bool SettingsChanged() const;

		// Unknown accessibility
		// BrnEATraxMenuComponent.h:128
		extern const int32_t KI_NUM_VISIBLE_TRACKS = 5;

		// Unknown accessibility
		// BrnEATraxMenuComponent.h:129
		extern const float32_t KF_NUM_VISIBLE_TRACKS;

	private:
		// BrnEATraxMenuComponent.h:237
		extern const uint32_t KU_MAX_APT_COMMS_STRING_ID_SIZE = 16;

		// BrnEATraxMenuComponent.h:251
		extern char[] KAC_PLAY_ORDER_MODE_NAME;

	}

}

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

	}

}

// BrnEATraxMenuComponent.h:125
struct BrnGui::EATraxMenuComponent : public CgsGui::GuiComponent {
	// BrnEATraxMenuComponent.h:128
	extern const int32_t KI_NUM_VISIBLE_TRACKS = 5;

	// BrnEATraxMenuComponent.h:129
	extern const float32_t KF_NUM_VISIBLE_TRACKS;

private:
	// BrnEATraxMenuComponent.h:225
	EaTraxHelper mEATraxHelper;

	// BrnEATraxMenuComponent.h:228
	int32_t mTotalNumberTracks;

	// BrnEATraxMenuComponent.h:229
	int32_t mCurrentHighlightedIndex;

	// BrnEATraxMenuComponent.h:230
	int32_t mCurrentTopIndex;

	// BrnEATraxMenuComponent.h:232
	GuiEventAudioTraxUpdate::EATraxArrayType mEATraxEnabledInFreeBurnBitfield;

	// BrnEATraxMenuComponent.h:233
	GuiEventAudioTraxUpdate::EATraxArrayType mEATraxEnabledInEventsBitfield;

	// BrnEATraxMenuComponent.h:234
	bool mbDrawSendPending;

	// BrnEATraxMenuComponent.h:235
	bool mbSettingsChanged;

	// BrnEATraxMenuComponent.h:237
	extern const uint32_t KU_MAX_APT_COMMS_STRING_ID_SIZE = 16;

	// BrnEATraxMenuComponent.h:240
	extern char[5][16] msaacVisibleIDs;

	// BrnEATraxMenuComponent.h:241
	extern char[5][16] msaacSongIndexIDs;

	// BrnEATraxMenuComponent.h:242
	extern char[5][16] msaacNameIDs;

	// BrnEATraxMenuComponent.h:243
	extern char[5][16] msaacArtistIDs;

	// BrnEATraxMenuComponent.h:244
	extern char[5][16] msaacAlbumIDs;

	// BrnEATraxMenuComponent.h:245
	extern char[5][16] msaacEnabledIDs;

	// BrnEATraxMenuComponent.h:247
	extern const char * mspacBarStartID;

	// BrnEATraxMenuComponent.h:248
	extern const char * mspacBarEndID;

	// BrnEATraxMenuComponent.h:251
	extern char[] KAC_PLAY_ORDER_MODE_NAME;

	// BrnEATraxMenuComponent.h:252
	BrnGui::TextField mPlayMode;

	// BrnEATraxMenuComponent.h:253
	extern const char *[] KAPC_PLAY_ORDER_MODES;

	// BrnEATraxMenuComponent.h:254
	extern const char *[] KAPC_TRAX_PLAY_STATE;

public:
	void EATraxMenuComponent(const EATraxMenuComponent &);

	void EATraxMenuComponent();

	// BrnEATraxMenuComponent.h:157
	void Construct(const char *, StateInterface *, const char *, int32_t);

	// BrnEATraxMenuComponent.h:163
	void Initialize(const GuiEventAudioTraxUpdate::EATraxArrayType *, const GuiEventAudioTraxUpdate::EATraxArrayType *);

	// BrnEATraxMenuComponent.h:261
	const GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxEnabledInFreeBurnBitfieldPtr();

	// BrnEATraxMenuComponent.h:267
	const GuiEventAudioTraxUpdate::EATraxArrayType * GetTraxEnabledInEventsBitfieldPtr();

	// BrnEATraxMenuComponent.h:273
	int32_t GetHighlightedTrackIndex();

	// BrnEATraxMenuComponent.h:180
	void HandleInput(BrnGui::EATraxMenuComponent::InputCommand);

	// BrnEATraxMenuComponent.h:184
	void Update();

	// BrnEATraxMenuComponent.h:188
	void UpdatePlayOrderMode(BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode);

	// BrnEATraxMenuComponent.h:348
	void ResetSettingsChanged();

	// BrnEATraxMenuComponent.h:356
	bool SettingsChanged() const;

private:
	// BrnEATraxMenuComponent.h:202
	void BuildStringIDs();

	// BrnEATraxMenuComponent.h:206
	bool IsDrawRequestPending();

	// BrnEATraxMenuComponent.h:210
	void SetSendDrawInformationPending(bool);

	// BrnEATraxMenuComponent.h:214
	void SendDrawInformationToApt();

	// BrnEATraxMenuComponent.h:279
	BrnGui::EATraxMenuComponent::ETraxPlayState GetTrackMode(int32_t);

	// BrnEATraxMenuComponent.h:307
	void SetTrackMode(int32_t, BrnGui::EATraxMenuComponent::ETraxPlayState);

}

// BrnEATraxMenuComponent.h:125
void BrnGui::EATraxMenuComponent::EATraxMenuComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

