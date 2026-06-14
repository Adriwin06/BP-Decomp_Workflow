// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FlaptRoadSignIconComponent {
		// BrnGuiFlaptRoadSignIconComponent.h:65
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	}

}

// BrnGuiFlaptRoadSignIconComponent.h:163
extern Vector4[4] KAV4_SIGN_TEXT_COLOURS;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptRoadSignIconComponent {
		// BrnGuiFlaptRoadSignIconComponent.h:52
		enum EIconType {
			E_ICON_TYPE_A = 0,
			E_ICON_TYPE_B = 1,
			E_ICON_TYPE_C = 2,
			E_ICON_TYPE_D = 3,
			E_ICON_TYPE_E = 4,
			E_ICON_TYPE_F = 5,
			E_ICON_TYPE_G = 6,
			E_ICON_TYPE_COUNT = 7,
		}

		// BrnGuiFlaptRoadSignIconComponent.h:65
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	}

}

// BrnGuiFlaptRoadSignIconComponent.h:49
struct BrnGui::FlaptRoadSignIconComponent : public BrnFlaptComponent {
	int (*)(...) * _vptr.FlaptRoadSignIconComponent;

	// BrnGuiFlaptRoadSignIconComponent.h:153
	Vector2 mv2WorldPos;

	// BrnGuiFlaptRoadSignIconComponent.h:154
	CgsID mRoadId;

	// BrnGuiFlaptRoadSignIconComponent.h:155
	BrnGui::FlaptRoadSignIconComponent::EIconType meIconType;

	// BrnGuiFlaptRoadSignIconComponent.h:156
	BrnGui::FlaptRoadSignIconComponent::ESignColour meSignColour;

	// BrnGuiFlaptRoadSignIconComponent.h:157
	bool mbTimeRuled;

	// BrnGuiFlaptRoadSignIconComponent.h:158
	bool mbCrashRuled;

	// BrnGuiFlaptRoadSignIconComponent.h:159
	bool mbShowPost;

private:
	// BrnGuiFlaptRoadSignIconComponent.cpp:31
	extern const char *[4] KAPC_SIGN_COLOURS;

	// BrnGuiFlaptRoadSignIconComponent.cpp:39
	extern Vector4[4] KAV4_SIGN_TEXT_COLOURS;

	// BrnGuiFlaptRoadSignIconComponent.cpp:48
	extern const char * mpRoadPrefix;

	// BrnGuiFlaptRoadSignIconComponent.cpp:49
	extern const char * mpShowSign;

	// BrnGuiFlaptRoadSignIconComponent.cpp:50
	extern const char * mpTrue;

	// BrnGuiFlaptRoadSignIconComponent.cpp:51
	extern const char * mpFalse;

	// BrnGuiFlaptRoadSignIconComponent.cpp:47
	extern const char * mpacRoadFrameName;

	// BrnGuiFlaptRoadSignIconComponent.cpp:52
	extern const char * mpacRoadColour;

	// BrnGuiFlaptRoadSignIconComponent.h:172
	bool mbSignVisible;

	// BrnGuiFlaptRoadSignIconComponent.h:174
	MovieClipRef mPostMovieClip;

public:
	// BrnGuiFlaptRoadSignIconComponent.cpp:70
	virtual void Construct(const void *, StateInterface *, const void *);

	// BrnGuiFlaptRoadSignIconComponent.cpp:97
	virtual void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnGuiFlaptRoadSignIconComponent.cpp:154
	void SetIcon(BrnGui::ERoadIcon, const rw::math::vpu::Vector2 *, BrnGui::FlaptRoadSignIconComponent::EIconType, CgsID);

	// BrnGuiFlaptRoadSignIconComponent.cpp:115
	void SetVisible(bool);

	// BrnGuiFlaptRoadSignIconComponent.cpp:175
	void DisplayRoad(BrnGui::ERoadIcon, bool);

	// BrnGuiFlaptRoadSignIconComponent.cpp:196
	void DisplayRoad(const char *, bool);

	// BrnGuiFlaptRoadSignIconComponent.cpp:220
	void DisplayRoadFromCgsID(CgsID, bool);

	// BrnGuiFlaptRoadSignIconComponent.cpp:252
	void DisplayColouredRoadFromCgsID(CgsID, bool, BrnGui::FlaptRoadSignIconComponent::ESignColour);

	// BrnGuiFlaptRoadSignIconComponent.cpp:268
	void DisplayPost(bool);

	// BrnGuiFlaptRoadSignIconComponent.cpp:312
	BrnGui::ERoadIcon FindRoadFromName(const char *);

	// BrnGuiFlaptRoadSignIconComponent.cpp:134
	void SetScreenPosition(Vector2);

	// BrnGuiFlaptRoadSignIconComponent.cpp:285
	void SetColour(BrnGui::FlaptRoadSignIconComponent::ESignColour);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptRoadSignIconComponent {
		// BrnGuiFlaptRoadSignIconComponent.h:65
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptRoadSignIconComponent {
		// BrnGuiFlaptRoadSignIconComponent.h:65
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	public:
		FlaptRoadSignIconComponent();

	private:
		// BrnGuiFlaptRoadSignIconComponent.h:163
		extern Vector4[4] KAV4_SIGN_TEXT_COLOURS;

	}

}

// BrnGuiFlaptRoadSignIconComponent.h:49
void BrnGui::FlaptRoadSignIconComponent::FlaptRoadSignIconComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

