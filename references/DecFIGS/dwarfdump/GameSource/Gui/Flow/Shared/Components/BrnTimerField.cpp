// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TimerField {
		// BrnTimerField.h:49
		enum ETimerMode {
			E_TIMER_MODE_COUNTING_UP = 0,
			E_TIMER_MODE_COUNTING_DOWN = 1,
			E_TIMER_MODE_COUNTING_NOT_COUNTING = 2,
			E_TIMER_MODE_COUNTING_COUNT = 3,
		}

	public:
		// BrnTimerField.cpp:90
		bool CheckLoad(const char *);

		// BrnTimerField.h:210
		void SetSafeColours(uint8_t, uint8_t, uint8_t);

		// BrnTimerField.h:230
		void SetDangerColours(uint8_t, uint8_t, uint8_t);

		// BrnTimerField.h:176
		void SetBoundaries(float32_t, float32_t);

		// BrnTimerField.cpp:46
		void Construct(const char *, StateInterface *, BrnGui::TimerField::ETimerMode, const char *);

	private:
		// BrnTimerField.cpp:133
		void CalculateColour();

	public:
		// BrnTimerField.cpp:113
		void SetTime(float32_t);

	private:
		// BrnTimerField.cpp:24
		extern const char[13] macTimerTextFieldName;

	}

}

