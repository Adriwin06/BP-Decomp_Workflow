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

