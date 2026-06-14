// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct EATraxInGameComponent {
		// BrnEATraxInGameComponent.h:111
		enum ComponentState {
			E_CS_INVISIBLE = 0,
			E_CS_VISIBLE = 1,
		}

	}

}

// BrnEATraxInGameComponent.h:47
struct BrnGui::BaseEATraxInGameComponent : public BrnFlaptComponent {
}

// BrnEATraxInGameComponent.h:65
struct BrnGui::EATraxInGameComponent : public BaseEATraxInGameComponent {
private:
	// BrnEATraxInGameComponent.h:106
	extern const char * KAPC_ANIM_IN_FRAME;

	// BrnEATraxInGameComponent.h:107
	extern const char * KAPC_ANIM_OUT_FRAME;

	// BrnEATraxInGameComponent.h:108
	extern const char * KAPC_BLANK_FRAME;

	// BrnEATraxInGameComponent.h:117
	BrnGui::EATraxInGameComponent::ComponentState meComponentState;

	// BrnEATraxInGameComponent.h:118
	float32_t mfCurrentGameTime_Seconds;

	// BrnEATraxInGameComponent.h:119
	float32_t mfAnimOutTime_Seconds;

	// BrnEATraxInGameComponent.h:122
	TextFieldRef mArtistNameRef;

	// BrnEATraxInGameComponent.h:123
	TextFieldRef mSongNameRef;

	// BrnEATraxInGameComponent.h:124
	TextFieldRef mAlbumNameRef;

public:
	// BrnEATraxInGameComponent.h:74
	void Construct(const void *, StateInterface *, const void *);

	// BrnEATraxInGameComponent.h:80
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnEATraxInGameComponent.h:84
	void Initialize();

	// BrnEATraxInGameComponent.h:87
	void Update();

	// BrnEATraxInGameComponent.h:91
	void SetTime(float32_t);

	// BrnEATraxInGameComponent.h:99
	void DisplayNewTrackNotification(const char *, const char *, const char *, bool);

	// BrnEATraxInGameComponent.h:102
	void BecomeInvisible();

}

