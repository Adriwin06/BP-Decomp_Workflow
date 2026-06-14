// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavMapIcon {
	private:
		// BrnSatNavIcon.h:292
		extern char[] macAptPosX;

		// BrnSatNavIcon.h:293
		extern char[] macAptPosY;

		// BrnSatNavIcon.h:294
		extern char[] macAptRotation;

		// BrnSatNavIcon.h:295
		extern char[] macAptAlpha;

		// BrnSatNavIcon.h:296
		extern char[] macAptLabel;

	}

	// Declaration
	struct MapIconBrnBase {
		// BrnSatNavIcon.h:63
		enum IconState {
			E_ICONSTATE_INVISIBLE = 0,
			E_ICONSTATE_PLAYER_OFFLINE = 1,
			E_ICONSTATE_PLAYER_ONLINE = 2,
			E_ICONSTATE_PLAYER_YELLOW = 3,
			E_ICONSTATE_PLAYER_RED = 4,
			E_ICONSTATE_PLAYER_BLUE = 5,
			E_ICONSTATE_PLAYER_PINK = 6,
			E_ICONSTATE_PLAYER_GREEN = 7,
			E_ICONSTATE_PLAYER_ORANGE = 8,
			E_ICONSTATE_PLAYER_PURPLE = 9,
			E_ICONSTATE_PLAYER_CYAN = 10,
			E_ICONSTATE_PLAYER_WHITE = 11,
			E_ICONSTATE_PLAYER_GRAY = 12,
			E_ICONSTATE_PLAYER_BLACK = 13,
			E_ICONSTATE_RIVAL = 14,
			E_ICONSTATE_RIVAL_YELLOW = 15,
			E_ICONSTATE_RIVAL_RED = 16,
			E_ICONSTATE_RIVAL_BLUE = 17,
			E_ICONSTATE_RIVAL_PINK = 18,
			E_ICONSTATE_RIVAL_GREEN = 19,
			E_ICONSTATE_RIVAL_ORANGE = 20,
			E_ICONSTATE_RIVAL_PURPLE = 21,
			E_ICONSTATE_RIVAL_CYAN = 22,
			E_ICONSTATE_RIVAL_WHITE = 23,
			E_ICONSTATE_RIVAL_GRAY = 24,
			E_ICONSTATE_RIVAL_BLACK = 25,
			E_ICONSTATE_SATNAV_LANDMARK = 26,
			E_ICONSTATE_SATNAV_LANDMARKBEATEN = 27,
			E_ICONSTATE_SATNAV_LANDMARKTRACKED = 28,
			E_ICONSTATE_SATNAV_LANDMARKTRACKEDBEATEN = 29,
			E_ICONSTATE_SATNAV_LANDMARKFINISH = 30,
			E_ICONSTATE_SATNAV_LANDMARKFINISH_PENDING = 31,
			E_ICONSTATE_SATNAV_LANDMARKSTART = 32,
			E_ICONSTATE_SATNAV_LANDMARK_PENDING = 33,
			E_ICONSTATE_CRASHNAV_LANDMARKFINISH = 34,
			E_ICONSTATE_CRASHNAV_LANDMARKSTART = 35,
			E_ICONSTATE_CRASHNAV_JUNKYARD = 36,
			E_ICONSTATE_CRASHNAV_BODYSHOP = 37,
			E_ICONSTATE_CRASHNAV_GAS_STATION = 38,
			E_ICONSTATE_CRASHNAV_PAINT_SHOP = 39,
			E_ICONSTATE_SATNAV_FREEBURN_CHALLENGE = 40,
			E_ICONSTATE_SATNAV_JUNKYARD = 41,
			E_ICONSTATE_SATNAV_CAR_PARK = 42,
			E_ICONSTATE_SATNAV_BODYSHOP = 43,
			E_ICONSTATE_SATNAV_GAS_STATION = 44,
			E_ICONSTATE_SATNAV_PAINT_SHOP = 45,
			E_ICONSTATE_CRASHNAV_ONLINE_START_POINT = 46,
			E_ICONSTATE_CRASHNAV_ONLINE_FINISH_POINT = 47,
			E_ICONSTATE_CRASHNAV_ONLINE_CHECKPOINT = 48,
			E_ICONSTATE_CRASHNAV_PRERACE_START_POINT = 49,
			E_ICONSTATE_CRASHNAV_PRERACE_FINISH_POINT = 50,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_START_POINT = 51,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_FINISH_POINT = 52,
			E_ICONSTATE_COUNT = 53,
		}

	}

}

// BrnSatNavIcon.h:197
extern char[] KAC_TEXTFIELD_NAME;

// BrnSatNavIcon.h:198
extern const char *[] KAC_STATE_NAMES;

// BrnSatNavIcon.h:292
extern char[] macAptPosX;

// BrnSatNavIcon.h:293
extern char[] macAptPosY;

// BrnSatNavIcon.h:294
extern char[] macAptRotation;

// BrnSatNavIcon.h:295
extern char[] macAptAlpha;

// BrnSatNavIcon.h:296
extern char[] macAptLabel;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavMapIcon {
	private:
		// BrnSatNavIcon.h:292
		extern char[] macAptPosX;

		// BrnSatNavIcon.h:293
		extern char[] macAptPosY;

		// BrnSatNavIcon.h:294
		extern char[] macAptRotation;

		// BrnSatNavIcon.h:295
		extern char[] macAptAlpha;

		// BrnSatNavIcon.h:296
		extern char[] macAptLabel;

	}

	// Declaration
	struct MapIconBrnBase {
		// BrnSatNavIcon.h:63
		enum IconState {
			E_ICONSTATE_INVISIBLE = 0,
			E_ICONSTATE_PLAYER_OFFLINE = 1,
			E_ICONSTATE_PLAYER_ONLINE = 2,
			E_ICONSTATE_PLAYER_YELLOW = 3,
			E_ICONSTATE_PLAYER_RED = 4,
			E_ICONSTATE_PLAYER_BLUE = 5,
			E_ICONSTATE_PLAYER_PINK = 6,
			E_ICONSTATE_PLAYER_GREEN = 7,
			E_ICONSTATE_PLAYER_ORANGE = 8,
			E_ICONSTATE_PLAYER_PURPLE = 9,
			E_ICONSTATE_PLAYER_CYAN = 10,
			E_ICONSTATE_PLAYER_WHITE = 11,
			E_ICONSTATE_PLAYER_GRAY = 12,
			E_ICONSTATE_PLAYER_BLACK = 13,
			E_ICONSTATE_RIVAL = 14,
			E_ICONSTATE_RIVAL_YELLOW = 15,
			E_ICONSTATE_RIVAL_RED = 16,
			E_ICONSTATE_RIVAL_BLUE = 17,
			E_ICONSTATE_RIVAL_PINK = 18,
			E_ICONSTATE_RIVAL_GREEN = 19,
			E_ICONSTATE_RIVAL_ORANGE = 20,
			E_ICONSTATE_RIVAL_PURPLE = 21,
			E_ICONSTATE_RIVAL_CYAN = 22,
			E_ICONSTATE_RIVAL_WHITE = 23,
			E_ICONSTATE_RIVAL_GRAY = 24,
			E_ICONSTATE_RIVAL_BLACK = 25,
			E_ICONSTATE_SATNAV_LANDMARK = 26,
			E_ICONSTATE_SATNAV_LANDMARKBEATEN = 27,
			E_ICONSTATE_SATNAV_LANDMARKTRACKED = 28,
			E_ICONSTATE_SATNAV_LANDMARKTRACKEDBEATEN = 29,
			E_ICONSTATE_SATNAV_LANDMARKFINISH = 30,
			E_ICONSTATE_SATNAV_LANDMARKFINISH_PENDING = 31,
			E_ICONSTATE_SATNAV_LANDMARKSTART = 32,
			E_ICONSTATE_SATNAV_LANDMARK_PENDING = 33,
			E_ICONSTATE_CRASHNAV_LANDMARKFINISH = 34,
			E_ICONSTATE_CRASHNAV_LANDMARKSTART = 35,
			E_ICONSTATE_CRASHNAV_JUNKYARD = 36,
			E_ICONSTATE_CRASHNAV_BODYSHOP = 37,
			E_ICONSTATE_CRASHNAV_GAS_STATION = 38,
			E_ICONSTATE_CRASHNAV_PAINT_SHOP = 39,
			E_ICONSTATE_SATNAV_FREEBURN_CHALLENGE = 40,
			E_ICONSTATE_SATNAV_JUNKYARD = 41,
			E_ICONSTATE_SATNAV_CAR_PARK = 42,
			E_ICONSTATE_SATNAV_BODYSHOP = 43,
			E_ICONSTATE_SATNAV_GAS_STATION = 44,
			E_ICONSTATE_SATNAV_PAINT_SHOP = 45,
			E_ICONSTATE_CRASHNAV_ONLINE_START_POINT = 46,
			E_ICONSTATE_CRASHNAV_ONLINE_FINISH_POINT = 47,
			E_ICONSTATE_CRASHNAV_ONLINE_CHECKPOINT = 48,
			E_ICONSTATE_CRASHNAV_PRERACE_START_POINT = 49,
			E_ICONSTATE_CRASHNAV_PRERACE_FINISH_POINT = 50,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_START_POINT = 51,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_FINISH_POINT = 52,
			E_ICONSTATE_COUNT = 53,
		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MapIconBrnBase {
		// BrnSatNavIcon.h:63
		enum IconState {
			E_ICONSTATE_INVISIBLE = 0,
			E_ICONSTATE_PLAYER_OFFLINE = 1,
			E_ICONSTATE_PLAYER_ONLINE = 2,
			E_ICONSTATE_PLAYER_YELLOW = 3,
			E_ICONSTATE_PLAYER_RED = 4,
			E_ICONSTATE_PLAYER_BLUE = 5,
			E_ICONSTATE_PLAYER_PINK = 6,
			E_ICONSTATE_PLAYER_GREEN = 7,
			E_ICONSTATE_PLAYER_ORANGE = 8,
			E_ICONSTATE_PLAYER_PURPLE = 9,
			E_ICONSTATE_PLAYER_CYAN = 10,
			E_ICONSTATE_PLAYER_WHITE = 11,
			E_ICONSTATE_PLAYER_GRAY = 12,
			E_ICONSTATE_PLAYER_BLACK = 13,
			E_ICONSTATE_RIVAL = 14,
			E_ICONSTATE_RIVAL_YELLOW = 15,
			E_ICONSTATE_RIVAL_RED = 16,
			E_ICONSTATE_RIVAL_BLUE = 17,
			E_ICONSTATE_RIVAL_PINK = 18,
			E_ICONSTATE_RIVAL_GREEN = 19,
			E_ICONSTATE_RIVAL_ORANGE = 20,
			E_ICONSTATE_RIVAL_PURPLE = 21,
			E_ICONSTATE_RIVAL_CYAN = 22,
			E_ICONSTATE_RIVAL_WHITE = 23,
			E_ICONSTATE_RIVAL_GRAY = 24,
			E_ICONSTATE_RIVAL_BLACK = 25,
			E_ICONSTATE_SATNAV_LANDMARK = 26,
			E_ICONSTATE_SATNAV_LANDMARKBEATEN = 27,
			E_ICONSTATE_SATNAV_LANDMARKTRACKED = 28,
			E_ICONSTATE_SATNAV_LANDMARKTRACKEDBEATEN = 29,
			E_ICONSTATE_SATNAV_LANDMARKFINISH = 30,
			E_ICONSTATE_SATNAV_LANDMARKFINISH_PENDING = 31,
			E_ICONSTATE_SATNAV_LANDMARKSTART = 32,
			E_ICONSTATE_SATNAV_LANDMARK_PENDING = 33,
			E_ICONSTATE_CRASHNAV_LANDMARKFINISH = 34,
			E_ICONSTATE_CRASHNAV_LANDMARKSTART = 35,
			E_ICONSTATE_CRASHNAV_JUNKYARD = 36,
			E_ICONSTATE_CRASHNAV_BODYSHOP = 37,
			E_ICONSTATE_CRASHNAV_GAS_STATION = 38,
			E_ICONSTATE_CRASHNAV_PAINT_SHOP = 39,
			E_ICONSTATE_SATNAV_FREEBURN_CHALLENGE = 40,
			E_ICONSTATE_SATNAV_JUNKYARD = 41,
			E_ICONSTATE_SATNAV_CAR_PARK = 42,
			E_ICONSTATE_SATNAV_BODYSHOP = 43,
			E_ICONSTATE_SATNAV_GAS_STATION = 44,
			E_ICONSTATE_SATNAV_PAINT_SHOP = 45,
			E_ICONSTATE_CRASHNAV_ONLINE_START_POINT = 46,
			E_ICONSTATE_CRASHNAV_ONLINE_FINISH_POINT = 47,
			E_ICONSTATE_CRASHNAV_ONLINE_CHECKPOINT = 48,
			E_ICONSTATE_CRASHNAV_PRERACE_START_POINT = 49,
			E_ICONSTATE_CRASHNAV_PRERACE_FINISH_POINT = 50,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_START_POINT = 51,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_FINISH_POINT = 52,
			E_ICONSTATE_COUNT = 53,
		}

	}

}

// BrnSatNavIcon.h:315
struct BrnGui::SatNavMapIcon : public BrnGui::MapIconBrnBase {
private:
	// BrnSatNavIcon.h:378
	TextFieldRef mIconText;

public:
	// BrnSatNavIcon.cpp:287
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSatNavIcon.cpp:323
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnSatNavIcon.h:572
	virtual void SetPosition(Vector2);

	// BrnSatNavIcon.h:594
	virtual void SetRotation(float32_t);

	// BrnSatNavIcon.h:616
	virtual void SetAlpha(float32_t);

	// BrnSatNavIcon.h:638
	virtual void SetState(BrnGui::MapIconBrnBase::IconState);

	// BrnSatNavIcon.cpp:395
	virtual void SetIconText(const char *, bool);

	// BrnSatNavIcon.h:662
	virtual Vector2 GetPosition() const;

	// BrnSatNavIcon.h:676
	virtual BrnGui::MapIconBrnBase::IconState GetState() const;

	// BrnSatNavIcon.cpp:350
	virtual void Update();

}

// BrnSatNavIcon.h:212
struct BrnGui::CrashNavMapIcon : public BrnGui::MapIconBrnBase {
	// BrnSatNavIcon.h:278
	uint32_t muId;

private:
	// BrnSatNavIcon.h:283
	BrnGui::TextField mIconText;

	// BrnSatNavIcon.h:289
	bool mbIsDirty;

	// BrnSatNavIcon.h:290
	bool mbDirtyIconState;

	// BrnSatNavIcon.cpp:24
	extern const char[3] macAptPosX;

	// BrnSatNavIcon.cpp:25
	extern const char[3] macAptPosY;

	// BrnSatNavIcon.cpp:26
	extern const char[10] macAptRotation;

	// BrnSatNavIcon.cpp:27
	extern const char[7] macAptAlpha;

	// BrnSatNavIcon.cpp:28
	extern const char[10] macAptLabel;

public:
	CrashNavMapIcon & operator=(const CrashNavMapIcon &);

	// BrnSatNavIcon.cpp:142
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSatNavIcon.h:406
	virtual void SetPosition(Vector2);

	// BrnSatNavIcon.h:428
	virtual void SetRotation(float32_t);

	// BrnSatNavIcon.h:450
	virtual void SetAlpha(float32_t);

	// BrnSatNavIcon.h:472
	virtual void SetState(BrnGui::MapIconBrnBase::IconState);

	// BrnSatNavIcon.cpp:251
	virtual void SetIconText(const char *, bool);

	// BrnSatNavIcon.h:496
	virtual Vector2 GetPosition() const;

	// BrnSatNavIcon.h:511
	float32_t GetAlpha() const;

	// BrnSatNavIcon.h:526
	float32_t GetRotation() const;

	// BrnSatNavIcon.h:540
	virtual BrnGui::MapIconBrnBase::IconState GetState() const;

	// BrnSatNavIcon.cpp:193
	virtual void Update();

	// BrnSatNavIcon.h:554
	void SetDirty();

}

// BrnSatNavIcon.h:60
struct BrnGui::MapIconBrnBase {
	int (*)(...) * _vptr.MapIconBrnBase;

protected:
	// BrnSatNavIcon.h:191
	Vector2 mv2Position;

	// BrnSatNavIcon.h:192
	float32_t mfRotationInRadians;

	// BrnSatNavIcon.h:193
	float32_t mfAlpha;

	// BrnSatNavIcon.h:194
	BrnGui::MapIconBrnBase::IconState meState;

	// BrnSatNavIcon.cpp:40
	extern const char[5] KAC_TEXTFIELD_NAME;

	// BrnSatNavIcon.cpp:42
	extern const char *[53] KAC_STATE_NAMES;

public:
	MapIconBrnBase & operator=(const MapIconBrnBase &);

	// BrnSatNavIcon.h:152
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSatNavIcon.h:157
	virtual void SetPosition(Vector2);

	// BrnSatNavIcon.h:161
	virtual void SetRotation(float32_t);

	// BrnSatNavIcon.h:165
	virtual void SetAlpha(float32_t);

	// BrnSatNavIcon.h:169
	virtual void SetState(BrnGui::MapIconBrnBase::IconState);

	// BrnSatNavIcon.h:175
	virtual void SetIconText(const char *, bool);

	// BrnSatNavIcon.h:179
	virtual Vector2 GetPosition() const;

	// BrnSatNavIcon.h:183
	virtual BrnGui::MapIconBrnBase::IconState GetState() const;

	// BrnSatNavIcon.h:187
	virtual void Update();

}

// BrnSatNavIcon.h:212
void BrnGui::CrashNavMapIcon::operator=(const const CrashNavMapIcon &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSatNavIcon.h:60
void BrnGui::MapIconBrnBase::operator=(const const MapIconBrnBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavMapIcon {
	public:
		// BrnSatNavIcon.h:554
		void SetDirty();

	private:
		// BrnSatNavIcon.h:292
		extern char[] macAptPosX;

		// BrnSatNavIcon.h:293
		extern char[] macAptPosY;

		// BrnSatNavIcon.h:294
		extern char[] macAptRotation;

		// BrnSatNavIcon.h:295
		extern char[] macAptAlpha;

		// BrnSatNavIcon.h:296
		extern char[] macAptLabel;

	}

	// Declaration
	struct MapIconBrnBase {
		// BrnSatNavIcon.h:63
		enum IconState {
			E_ICONSTATE_INVISIBLE = 0,
			E_ICONSTATE_PLAYER_OFFLINE = 1,
			E_ICONSTATE_PLAYER_ONLINE = 2,
			E_ICONSTATE_PLAYER_YELLOW = 3,
			E_ICONSTATE_PLAYER_RED = 4,
			E_ICONSTATE_PLAYER_BLUE = 5,
			E_ICONSTATE_PLAYER_PINK = 6,
			E_ICONSTATE_PLAYER_GREEN = 7,
			E_ICONSTATE_PLAYER_ORANGE = 8,
			E_ICONSTATE_PLAYER_PURPLE = 9,
			E_ICONSTATE_PLAYER_CYAN = 10,
			E_ICONSTATE_PLAYER_WHITE = 11,
			E_ICONSTATE_PLAYER_GRAY = 12,
			E_ICONSTATE_PLAYER_BLACK = 13,
			E_ICONSTATE_RIVAL = 14,
			E_ICONSTATE_RIVAL_YELLOW = 15,
			E_ICONSTATE_RIVAL_RED = 16,
			E_ICONSTATE_RIVAL_BLUE = 17,
			E_ICONSTATE_RIVAL_PINK = 18,
			E_ICONSTATE_RIVAL_GREEN = 19,
			E_ICONSTATE_RIVAL_ORANGE = 20,
			E_ICONSTATE_RIVAL_PURPLE = 21,
			E_ICONSTATE_RIVAL_CYAN = 22,
			E_ICONSTATE_RIVAL_WHITE = 23,
			E_ICONSTATE_RIVAL_GRAY = 24,
			E_ICONSTATE_RIVAL_BLACK = 25,
			E_ICONSTATE_SATNAV_LANDMARK = 26,
			E_ICONSTATE_SATNAV_LANDMARKBEATEN = 27,
			E_ICONSTATE_SATNAV_LANDMARKTRACKED = 28,
			E_ICONSTATE_SATNAV_LANDMARKTRACKEDBEATEN = 29,
			E_ICONSTATE_SATNAV_LANDMARKFINISH = 30,
			E_ICONSTATE_SATNAV_LANDMARKFINISH_PENDING = 31,
			E_ICONSTATE_SATNAV_LANDMARKSTART = 32,
			E_ICONSTATE_SATNAV_LANDMARK_PENDING = 33,
			E_ICONSTATE_CRASHNAV_LANDMARKFINISH = 34,
			E_ICONSTATE_CRASHNAV_LANDMARKSTART = 35,
			E_ICONSTATE_CRASHNAV_JUNKYARD = 36,
			E_ICONSTATE_CRASHNAV_BODYSHOP = 37,
			E_ICONSTATE_CRASHNAV_GAS_STATION = 38,
			E_ICONSTATE_CRASHNAV_PAINT_SHOP = 39,
			E_ICONSTATE_SATNAV_FREEBURN_CHALLENGE = 40,
			E_ICONSTATE_SATNAV_JUNKYARD = 41,
			E_ICONSTATE_SATNAV_CAR_PARK = 42,
			E_ICONSTATE_SATNAV_BODYSHOP = 43,
			E_ICONSTATE_SATNAV_GAS_STATION = 44,
			E_ICONSTATE_SATNAV_PAINT_SHOP = 45,
			E_ICONSTATE_CRASHNAV_ONLINE_START_POINT = 46,
			E_ICONSTATE_CRASHNAV_ONLINE_FINISH_POINT = 47,
			E_ICONSTATE_CRASHNAV_ONLINE_CHECKPOINT = 48,
			E_ICONSTATE_CRASHNAV_PRERACE_START_POINT = 49,
			E_ICONSTATE_CRASHNAV_PRERACE_FINISH_POINT = 50,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_START_POINT = 51,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_FINISH_POINT = 52,
			E_ICONSTATE_COUNT = 53,
		}

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MapIconBrnBase {
		// BrnSatNavIcon.h:63
		enum IconState {
			E_ICONSTATE_INVISIBLE = 0,
			E_ICONSTATE_PLAYER_OFFLINE = 1,
			E_ICONSTATE_PLAYER_ONLINE = 2,
			E_ICONSTATE_PLAYER_YELLOW = 3,
			E_ICONSTATE_PLAYER_RED = 4,
			E_ICONSTATE_PLAYER_BLUE = 5,
			E_ICONSTATE_PLAYER_PINK = 6,
			E_ICONSTATE_PLAYER_GREEN = 7,
			E_ICONSTATE_PLAYER_ORANGE = 8,
			E_ICONSTATE_PLAYER_PURPLE = 9,
			E_ICONSTATE_PLAYER_CYAN = 10,
			E_ICONSTATE_PLAYER_WHITE = 11,
			E_ICONSTATE_PLAYER_GRAY = 12,
			E_ICONSTATE_PLAYER_BLACK = 13,
			E_ICONSTATE_RIVAL = 14,
			E_ICONSTATE_RIVAL_YELLOW = 15,
			E_ICONSTATE_RIVAL_RED = 16,
			E_ICONSTATE_RIVAL_BLUE = 17,
			E_ICONSTATE_RIVAL_PINK = 18,
			E_ICONSTATE_RIVAL_GREEN = 19,
			E_ICONSTATE_RIVAL_ORANGE = 20,
			E_ICONSTATE_RIVAL_PURPLE = 21,
			E_ICONSTATE_RIVAL_CYAN = 22,
			E_ICONSTATE_RIVAL_WHITE = 23,
			E_ICONSTATE_RIVAL_GRAY = 24,
			E_ICONSTATE_RIVAL_BLACK = 25,
			E_ICONSTATE_SATNAV_LANDMARK = 26,
			E_ICONSTATE_SATNAV_LANDMARKBEATEN = 27,
			E_ICONSTATE_SATNAV_LANDMARKTRACKED = 28,
			E_ICONSTATE_SATNAV_LANDMARKTRACKEDBEATEN = 29,
			E_ICONSTATE_SATNAV_LANDMARKFINISH = 30,
			E_ICONSTATE_SATNAV_LANDMARKFINISH_PENDING = 31,
			E_ICONSTATE_SATNAV_LANDMARKSTART = 32,
			E_ICONSTATE_SATNAV_LANDMARK_PENDING = 33,
			E_ICONSTATE_CRASHNAV_LANDMARKFINISH = 34,
			E_ICONSTATE_CRASHNAV_LANDMARKSTART = 35,
			E_ICONSTATE_CRASHNAV_JUNKYARD = 36,
			E_ICONSTATE_CRASHNAV_BODYSHOP = 37,
			E_ICONSTATE_CRASHNAV_GAS_STATION = 38,
			E_ICONSTATE_CRASHNAV_PAINT_SHOP = 39,
			E_ICONSTATE_SATNAV_FREEBURN_CHALLENGE = 40,
			E_ICONSTATE_SATNAV_JUNKYARD = 41,
			E_ICONSTATE_SATNAV_CAR_PARK = 42,
			E_ICONSTATE_SATNAV_BODYSHOP = 43,
			E_ICONSTATE_SATNAV_GAS_STATION = 44,
			E_ICONSTATE_SATNAV_PAINT_SHOP = 45,
			E_ICONSTATE_CRASHNAV_ONLINE_START_POINT = 46,
			E_ICONSTATE_CRASHNAV_ONLINE_FINISH_POINT = 47,
			E_ICONSTATE_CRASHNAV_ONLINE_CHECKPOINT = 48,
			E_ICONSTATE_CRASHNAV_PRERACE_START_POINT = 49,
			E_ICONSTATE_CRASHNAV_PRERACE_FINISH_POINT = 50,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_START_POINT = 51,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_FINISH_POINT = 52,
			E_ICONSTATE_COUNT = 53,
		}

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavMapIcon {
	public:
		CrashNavMapIcon();

	private:
		// BrnSatNavIcon.h:292
		extern char[] macAptPosX;

		// BrnSatNavIcon.h:293
		extern char[] macAptPosY;

		// BrnSatNavIcon.h:294
		extern char[] macAptRotation;

		// BrnSatNavIcon.h:295
		extern char[] macAptAlpha;

		// BrnSatNavIcon.h:296
		extern char[] macAptLabel;

	}

	// Declaration
	struct MapIconBrnBase {
		// BrnSatNavIcon.h:63
		enum IconState {
			E_ICONSTATE_INVISIBLE = 0,
			E_ICONSTATE_PLAYER_OFFLINE = 1,
			E_ICONSTATE_PLAYER_ONLINE = 2,
			E_ICONSTATE_PLAYER_YELLOW = 3,
			E_ICONSTATE_PLAYER_RED = 4,
			E_ICONSTATE_PLAYER_BLUE = 5,
			E_ICONSTATE_PLAYER_PINK = 6,
			E_ICONSTATE_PLAYER_GREEN = 7,
			E_ICONSTATE_PLAYER_ORANGE = 8,
			E_ICONSTATE_PLAYER_PURPLE = 9,
			E_ICONSTATE_PLAYER_CYAN = 10,
			E_ICONSTATE_PLAYER_WHITE = 11,
			E_ICONSTATE_PLAYER_GRAY = 12,
			E_ICONSTATE_PLAYER_BLACK = 13,
			E_ICONSTATE_RIVAL = 14,
			E_ICONSTATE_RIVAL_YELLOW = 15,
			E_ICONSTATE_RIVAL_RED = 16,
			E_ICONSTATE_RIVAL_BLUE = 17,
			E_ICONSTATE_RIVAL_PINK = 18,
			E_ICONSTATE_RIVAL_GREEN = 19,
			E_ICONSTATE_RIVAL_ORANGE = 20,
			E_ICONSTATE_RIVAL_PURPLE = 21,
			E_ICONSTATE_RIVAL_CYAN = 22,
			E_ICONSTATE_RIVAL_WHITE = 23,
			E_ICONSTATE_RIVAL_GRAY = 24,
			E_ICONSTATE_RIVAL_BLACK = 25,
			E_ICONSTATE_SATNAV_LANDMARK = 26,
			E_ICONSTATE_SATNAV_LANDMARKBEATEN = 27,
			E_ICONSTATE_SATNAV_LANDMARKTRACKED = 28,
			E_ICONSTATE_SATNAV_LANDMARKTRACKEDBEATEN = 29,
			E_ICONSTATE_SATNAV_LANDMARKFINISH = 30,
			E_ICONSTATE_SATNAV_LANDMARKFINISH_PENDING = 31,
			E_ICONSTATE_SATNAV_LANDMARKSTART = 32,
			E_ICONSTATE_SATNAV_LANDMARK_PENDING = 33,
			E_ICONSTATE_CRASHNAV_LANDMARKFINISH = 34,
			E_ICONSTATE_CRASHNAV_LANDMARKSTART = 35,
			E_ICONSTATE_CRASHNAV_JUNKYARD = 36,
			E_ICONSTATE_CRASHNAV_BODYSHOP = 37,
			E_ICONSTATE_CRASHNAV_GAS_STATION = 38,
			E_ICONSTATE_CRASHNAV_PAINT_SHOP = 39,
			E_ICONSTATE_SATNAV_FREEBURN_CHALLENGE = 40,
			E_ICONSTATE_SATNAV_JUNKYARD = 41,
			E_ICONSTATE_SATNAV_CAR_PARK = 42,
			E_ICONSTATE_SATNAV_BODYSHOP = 43,
			E_ICONSTATE_SATNAV_GAS_STATION = 44,
			E_ICONSTATE_SATNAV_PAINT_SHOP = 45,
			E_ICONSTATE_CRASHNAV_ONLINE_START_POINT = 46,
			E_ICONSTATE_CRASHNAV_ONLINE_FINISH_POINT = 47,
			E_ICONSTATE_CRASHNAV_ONLINE_CHECKPOINT = 48,
			E_ICONSTATE_CRASHNAV_PRERACE_START_POINT = 49,
			E_ICONSTATE_CRASHNAV_PRERACE_FINISH_POINT = 50,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_START_POINT = 51,
			E_ICONSTATE_CRASHNAV_CUSTOMRENDERED_FINISH_POINT = 52,
			E_ICONSTATE_COUNT = 53,
		}

	}

}

// BrnSatNavIcon.h:60
struct BrnGui::MapIconBrnBase {
	int (*)(...) * _vptr.MapIconBrnBase;

protected:
	// BrnSatNavIcon.h:191
	Vector2 mv2Position;

	// BrnSatNavIcon.h:192
	float32_t mfRotationInRadians;

	// BrnSatNavIcon.h:193
	float32_t mfAlpha;

	// BrnSatNavIcon.h:194
	BrnGui::MapIconBrnBase::IconState meState;

	// BrnSatNavIcon.h:197
	extern char[] KAC_TEXTFIELD_NAME;

	// BrnSatNavIcon.h:198
	extern const char *[] KAC_STATE_NAMES;

public:
	void MapIconBrnBase(const MapIconBrnBase &);

	void MapIconBrnBase();

	// BrnSatNavIcon.h:152
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSatNavIcon.h:157
	virtual void SetPosition(Vector2);

	// BrnSatNavIcon.h:161
	virtual void SetRotation(float32_t);

	// BrnSatNavIcon.h:165
	virtual void SetAlpha(float32_t);

	// BrnSatNavIcon.h:169
	virtual void SetState(BrnGui::MapIconBrnBase::IconState);

	// BrnSatNavIcon.h:175
	virtual void SetIconText(const char *, bool);

	// BrnSatNavIcon.h:179
	virtual Vector2 GetPosition() const;

	// BrnSatNavIcon.h:183
	virtual BrnGui::MapIconBrnBase::IconState GetState() const;

	// BrnSatNavIcon.h:187
	virtual void Update();

}

// BrnSatNavIcon.h:212
void BrnGui::CrashNavMapIcon::CrashNavMapIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSatNavIcon.h:60
void BrnGui::MapIconBrnBase::MapIconBrnBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSatNavIcon.h:315
void BrnGui::SatNavMapIcon::SatNavMapIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

