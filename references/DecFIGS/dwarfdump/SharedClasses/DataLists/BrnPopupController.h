// BrnPopupController.h:43
struct BrnResource::PopupController {
private:
	// BrnPopupController.h:62
	ResourcePtr<CgsGui::GuiPopupResource> mPopupsPtr;

	// BrnPopupController.h:63
	bool mbIsPopupLoaded;

public:
	// BrnPopupController.h:48
	void Construct();

	// BrnPopupController.h:53
	bool GetPopup(GuiOverlayFullInfoResponse *) const;

	// BrnPopupController.h:58
	void AddPopupResource(const AcquireResourceResponse *);

private:
	// BrnPopupController.h:68
	int32_t GetIndexFromPopupHash(CgsID) const;

}

// BrnPopupController.h:43
struct BrnResource::PopupController {
private:
	// BrnPopupController.h:62
	ResourcePtr<CgsGui::GuiPopupResource> mPopupsPtr;

	// BrnPopupController.h:63
	bool mbIsPopupLoaded;

public:
	// BrnPopupController.h:48
	void Construct();

	// BrnPopupController.h:53
	// Declaration
	bool GetPopup(GuiOverlayFullInfoResponse *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPopupController.cpp:67
		using namespace CgsDev::Message;

	}

	// BrnPopupController.h:58
	void AddPopupResource(const AcquireResourceResponse *);

private:
	// BrnPopupController.h:68
	int32_t GetIndexFromPopupHash(CgsID) const;

}

