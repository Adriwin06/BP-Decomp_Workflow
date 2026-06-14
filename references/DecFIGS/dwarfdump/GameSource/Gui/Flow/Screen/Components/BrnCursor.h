// BrnCursor.h:65
extern const uint32_t KI_INVALID_LOCK_INDEX = 4294967295;

// BrnCursor.h:165
extern const float32_t KF_SNAPDIRECTION_MIN_DOT;

// BrnCursor.h:166
extern const float32_t KF_SNAPDIRECTION_DOTWEIGHT;

// BrnCursor.h:168
extern const float32_t KF_SNAP_DEADZONE;

// BrnCursor.h:169
extern const float32_t KF_AUTOREPEAT_WAIT_DELAY;

// BrnCursor.h:170
extern const float32_t KF_AUTOREPEAT_REPEAT_DELAY;

// BrnCursor.h:172
extern char[] mXAxisName;

// BrnCursor.h:173
extern char[] mYAxisName;

// BrnCursor.h:174
extern char[] macTransitionVar;

// BrnCursor.h:175
extern char[] macShouldTransition;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiCursor {
		// BrnCursor.h:64
		struct SnapResults {
			// BrnCursor.h:65
			extern const uint32_t KI_INVALID_LOCK_INDEX = 4294967295;

			// BrnCursor.h:66
			Vector2 lv2Offset;

			// BrnCursor.h:67
			uint32_t luLockedIndex;

		}

	public:
		// BrnCursor.cpp:367
		void SetActive();

		// BrnCursor.cpp:389
		void SetInactive();

		// BrnCursor.cpp:410
		void SetAlwaysSnap(bool);

		// BrnCursor.cpp:57
		void Construct(const char *, StateInterface *, float32_t, float32_t, float32_t, const char *);

		// BrnCursor.cpp:310
		uint32_t FindClosestSnapIndexInDirection(Vector2 *, uint32_t, Vector2);

		// BrnCursor.cpp:108
		bool ClampPosition();

		// BrnCursor.h:268
		void SetDelta(Vector2, float32_t);

		// BrnCursor.cpp:92
		void SetDelta(float32_t, float32_t, float32_t);

		// BrnCursor.cpp:269
		uint32_t FindClosestSnapIndex(Vector2 *, uint32_t);

		// BrnCursor.h:230
		void SetPosition(Vector2, bool);

		// BrnCursor.cpp:138
		BrnGui::GuiCursor::SnapResults UpdateToSnapLocations(Vector2 *, uint32_t, bool);

	private:
		// BrnCursor.h:163
		extern const uint32_t KU_INVALID_SNAP_INDEX = 4294967295;

		// BrnCursor.cpp:23
		extern const float32_t KF_SNAPDIRECTION_MIN_DOT;

		// BrnCursor.cpp:24
		extern const float32_t KF_SNAPDIRECTION_DOTWEIGHT;

		// BrnCursor.cpp:25
		extern const float32_t KF_SNAP_DEADZONE;

		// BrnCursor.cpp:26
		extern const float32_t KF_AUTOREPEAT_WAIT_DELAY;

		// BrnCursor.cpp:27
		extern const float32_t KF_AUTOREPEAT_REPEAT_DELAY;

		// BrnCursor.cpp:29
		extern const char[3] mXAxisName;

		// BrnCursor.cpp:30
		extern const char[3] mYAxisName;

		// BrnCursor.cpp:31
		extern const char[15] macTransitionVar;

		// BrnCursor.cpp:32
		extern const char[21] macShouldTransition;

	}

}

// BrnCursor.h:163
extern const uint32_t KU_INVALID_SNAP_INDEX = 4294967295;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiCursor {
		// BrnCursor.h:64
		struct SnapResults {
			// BrnCursor.h:65
			extern const uint32_t KI_INVALID_LOCK_INDEX = 4294967295;

			// BrnCursor.h:66
			Vector2 lv2Offset;

			// BrnCursor.h:67
			uint32_t luLockedIndex;

		}

	public:
		// BrnCursor.h:212
		void SetBounds(Vector4);

		// BrnCursor.h:230
		void SetPosition(Vector2, bool);

		// BrnCursor.h:378
		void Update();

	private:
		// BrnCursor.h:165
		extern const float32_t KF_SNAPDIRECTION_MIN_DOT;

		// BrnCursor.h:166
		extern const float32_t KF_SNAPDIRECTION_DOTWEIGHT;

		// BrnCursor.h:168
		extern const float32_t KF_SNAP_DEADZONE;

		// BrnCursor.h:169
		extern const float32_t KF_AUTOREPEAT_WAIT_DELAY;

		// BrnCursor.h:170
		extern const float32_t KF_AUTOREPEAT_REPEAT_DELAY;

		// BrnCursor.h:172
		extern char[] mXAxisName;

		// BrnCursor.h:173
		extern char[] mYAxisName;

		// BrnCursor.h:174
		extern char[] macTransitionVar;

		// BrnCursor.h:175
		extern char[] macShouldTransition;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiCursor {
		// BrnCursor.h:64
		struct SnapResults {
			// BrnCursor.h:65
			extern const uint32_t KI_INVALID_LOCK_INDEX = 4294967295;

			// BrnCursor.h:66
			Vector2 lv2Offset;

			// BrnCursor.h:67
			uint32_t luLockedIndex;

		}

	public:
		// BrnCursor.h:230
		void SetPosition(Vector2, bool);

		// BrnCursor.h:334
		Vector2 GetPosition() const;

		// BrnCursor.h:362
		void ClearSelection();

		// BrnCursor.h:378
		void Update();

		// BrnCursor.h:212
		void SetBounds(Vector4);

		// BrnCursor.h:348
		bool GetAlwaysSnap();

	private:
		// BrnCursor.h:165
		extern const float32_t KF_SNAPDIRECTION_MIN_DOT;

		// BrnCursor.h:166
		extern const float32_t KF_SNAPDIRECTION_DOTWEIGHT;

		// BrnCursor.h:168
		extern const float32_t KF_SNAP_DEADZONE;

		// BrnCursor.h:169
		extern const float32_t KF_AUTOREPEAT_WAIT_DELAY;

		// BrnCursor.h:170
		extern const float32_t KF_AUTOREPEAT_REPEAT_DELAY;

		// BrnCursor.h:172
		extern char[] mXAxisName;

		// BrnCursor.h:173
		extern char[] mYAxisName;

		// BrnCursor.h:174
		extern char[] macTransitionVar;

		// BrnCursor.h:175
		extern char[] macShouldTransition;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiCursor {
	public:
		// BrnCursor.h:212
		void SetBounds(Vector4);

		// BrnCursor.h:334
		Vector2 GetPosition() const;

		// BrnCursor.h:320
		Vector4 GetBounds() const;

		// BrnCursor.h:230
		void SetPosition(Vector2, bool);

		// BrnCursor.h:378
		void Update();

	private:
		// BrnCursor.h:165
		extern const float32_t KF_SNAPDIRECTION_MIN_DOT;

		// BrnCursor.h:166
		extern const float32_t KF_SNAPDIRECTION_DOTWEIGHT;

		// BrnCursor.h:168
		extern const float32_t KF_SNAP_DEADZONE;

		// BrnCursor.h:169
		extern const float32_t KF_AUTOREPEAT_WAIT_DELAY;

		// BrnCursor.h:170
		extern const float32_t KF_AUTOREPEAT_REPEAT_DELAY;

		// BrnCursor.h:172
		extern char[] mXAxisName;

		// BrnCursor.h:173
		extern char[] mYAxisName;

		// BrnCursor.h:174
		extern char[] macTransitionVar;

		// BrnCursor.h:175
		extern char[] macShouldTransition;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiCursor {
		// BrnCursor.h:47
		enum DisplayState {
			E_DISPLAY_ACTIVE_SNAP = 0,
			E_DISPLAY_ACTIVE_UNSNAP = 1,
			E_DISPLAY_INACTIVE = 2,
		}

		// BrnCursor.h:54
		enum AnimationState {
			E_ANIM_TRANS_IN = 0,
			E_ANIM_TRANS_OUT = 1,
			E_ANIM_TRANS_SNAP_IN = 2,
			E_ANIM_TRANS_SNAP_OUT = 3,
			E_ANIM_IDLE = 4,
		}

		// BrnCursor.h:64
		struct SnapResults {
			// BrnCursor.h:65
			extern const uint32_t KI_INVALID_LOCK_INDEX = 4294967295;

			// BrnCursor.h:66
			Vector2 lv2Offset;

			// BrnCursor.h:67
			uint32_t luLockedIndex;

		}

	}

}

// BrnCursor.h:44
struct BrnGui::GuiCursor : public CgsGui::GuiComponent {
private:
	// BrnCursor.h:163
	extern const uint32_t KU_INVALID_SNAP_INDEX = 4294967295;

	// BrnCursor.h:165
	extern const float32_t KF_SNAPDIRECTION_MIN_DOT;

	// BrnCursor.h:166
	extern const float32_t KF_SNAPDIRECTION_DOTWEIGHT;

	// BrnCursor.h:168
	extern const float32_t KF_SNAP_DEADZONE;

	// BrnCursor.h:169
	extern const float32_t KF_AUTOREPEAT_WAIT_DELAY;

	// BrnCursor.h:170
	extern const float32_t KF_AUTOREPEAT_REPEAT_DELAY;

	// BrnCursor.h:172
	extern char[] mXAxisName;

	// BrnCursor.h:173
	extern char[] mYAxisName;

	// BrnCursor.h:174
	extern char[] macTransitionVar;

	// BrnCursor.h:175
	extern char[] macShouldTransition;

	// BrnCursor.h:177
	float32_t mfMovementScalar;

	// BrnCursor.h:179
	float32_t mfFirstInputTime;

	// BrnCursor.h:180
	float32_t mfLastInputTime;

	// BrnCursor.h:182
	Vector2 mv2Position;

	// BrnCursor.h:183
	Vector2 mv2LastDelta;

	// BrnCursor.h:184
	Vector2 mv2LastOutputPosition;

	// BrnCursor.h:186
	Vector4 mv4BoundsRect;

	// BrnCursor.h:188
	uint32_t muLockedToIndex;

	// BrnCursor.h:190
	BrnGui::GuiCursor::DisplayState meDisplayState;

	// BrnCursor.h:191
	BrnGui::GuiCursor::AnimationState meAnimationState;

	// BrnCursor.h:193
	bool mbAlwaysSnap;

public:
	void GuiCursor(const GuiCursor &);

	void GuiCursor();

	// BrnCursor.h:78
	void Construct(const char *, StateInterface *, float32_t, float32_t, float32_t, const char *);

	// BrnCursor.h:212
	void SetBounds(Vector4);

	// BrnCursor.h:230
	void SetPosition(Vector2, bool);

	// BrnCursor.h:93
	bool ClampPosition();

	// BrnCursor.h:100
	void SetDelta(float32_t, float32_t, float32_t);

	// BrnCursor.h:268
	void SetDelta(Vector2, float32_t);

	// BrnCursor.h:113
	BrnGui::GuiCursor::SnapResults UpdateToSnapLocations(Vector2 *, uint32_t, bool);

	// BrnCursor.h:119
	uint32_t FindClosestSnapIndex(Vector2 *, uint32_t);

	// BrnCursor.h:126
	uint32_t FindClosestSnapIndexInDirection(Vector2 *, uint32_t, Vector2);

	// BrnCursor.h:130
	void SetActive();

	// BrnCursor.h:134
	void SetInactive();

	// BrnCursor.h:320
	Vector4 GetBounds() const;

	// BrnCursor.h:334
	Vector2 GetPosition() const;

	// BrnCursor.h:147
	void SetAlwaysSnap(bool);

	// BrnCursor.h:348
	bool GetAlwaysSnap();

	// BrnCursor.h:362
	void ClearSelection();

	// BrnCursor.h:378
	void Update();

}

// BrnCursor.h:44
void BrnGui::GuiCursor::GuiCursor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

