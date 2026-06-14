// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SettingComponent {
	public:
		// BrnSetting.cpp:49
		void Construct(const char *, StateInterface *, uint32_t, float32_t, const char *const*);

		// BrnSetting.cpp:67
		void SetValue(float32_t);

	private:
		// BrnSetting.cpp:25
		extern const char[10] macState;

	}

}

