// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ScrollBar {
	public:
		// BrnScrollBar.cpp:67
		void SetValue(float32_t);

		// BrnScrollBar.cpp:46
		void Construct(const char *, StateInterface *, float32_t, float32_t);

	private:
		// BrnScrollBar.cpp:23
		extern const char[10] macValue;

	}

}

