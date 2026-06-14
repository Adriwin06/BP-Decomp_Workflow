// BrnGuiKeyboard.h:42
struct BrnGui::BrnGuiKeyboard {
private:
	// BrnGuiKeyboard.h:87
	GuiKeyboard mKeyboard;

	// BrnGuiKeyboard.h:88
	SystemUserProfile * mpSystemUserProfile;

public:
	// BrnGuiKeyboard.h:47
	void Construct();

	// BrnGuiKeyboard.h:54
	bool Prepare(SystemUserProfile *, sys_memory_container_t);

	// BrnGuiKeyboard.h:63
	bool Release();

	// BrnGuiKeyboard.h:67
	void Destruct();

	// BrnGuiKeyboard.h:71
	void Update();

	// BrnGuiKeyboard.h:79
	bool Show(UTF16String, UTF16String, UTF16String, CgsGui::GuiKeyboardListener &);

	// BrnGuiKeyboard.h:83
	bool IsShown() const;

}

