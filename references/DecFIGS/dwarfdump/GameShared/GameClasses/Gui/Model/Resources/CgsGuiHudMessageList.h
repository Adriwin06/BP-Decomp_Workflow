// CgsGuiHudMessageList.h:42
struct CgsGui::GuiHudMessageListResource {
	// CgsGuiHudMessageList.h:45
	int32_t miResourceSize;

	// CgsGuiHudMessageList.h:46
	int32_t miMessageCount;

	// CgsGuiHudMessageList.h:47
	char ** mppcResources;

public:
	// CgsGuiHudMessageList.h:51
	void FixUp(uint32_t);

	// CgsGuiHudMessageList.h:55
	void FixDown(uint32_t, bool);

}

