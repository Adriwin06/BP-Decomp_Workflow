// BrnPhotoBoothComponent.h:187
extern char[] KAC_HELPITEM_LEFT_NAME;

// BrnPhotoBoothComponent.h:188
extern char[] KAC_HELPITEM_CENTRE_NAME;

// BrnPhotoBoothComponent.h:192
extern char[] KAC_CONTINUE_STRINGID;

// BrnPhotoBoothComponent.h:195
extern char[] KAC_TAKEPHOTO_STRINGID;

// BrnPhotoBoothComponent.h:197
extern char[] KAC_RETAKEPHOTO_STRINGID;

// BrnPhotoBoothComponent.h:198
extern char[] KAC_CONFIRM_STRINGID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PhotoBoothComponent {
		// BrnPhotoBoothComponent.h:57
		enum ETakePhotoStringType {
			E_TAKEPHOTOSTRING_NONE = 0,
			E_TAKEPHOTOSTRING_TAKEPHOTO = 1,
			E_TAKEPHOTOSTRING_CONTINUE = 2,
			E_TAKEPHOTOSTRING_COUNT = 3,
		}

		// BrnPhotoBoothComponent.h:66
		enum EBackStringType {
			E_BACKSTRING_NONE = 0,
			E_BACKSTRING_BACK = 1,
			E_BACKSTRING_USEOLDPHOTO = 2,
			E_BACKSTRING_CANCEL = 3,
			E_BACKSTRING_COUNT = 4,
		}

	public:
		// BrnPhotoBoothComponent.cpp:484
		// Declaration
		void HandleCompressedStillImageEvent(const GuiEventCamPicCompressed *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnPhotoBoothComponent.cpp:489
			using namespace CgsDev::Message;

			// BrnPhotoBoothComponent.cpp:490
			using namespace CgsDev::Message;

			// BrnPhotoBoothComponent.cpp:491
			using namespace CgsDev::Message;

		}

		// BrnPhotoBoothComponent.cpp:290
		void HideComponent(bool);

		// BrnPhotoBoothComponent.cpp:83
		void Construct(const char *, StateInterface *, BrnGui::ButtonIconComponent::EPadButton, BrnGui::ButtonIconComponent::EPadButton, BrnGui::PhotoBoothComponent::ETakePhotoStringType, BrnGui::PhotoBoothComponent::EBackStringType, const char *);

		// BrnPhotoBoothComponent.cpp:133
		void AppendExpectedAptComponents(BrnGui::GuiFlow);

	private:
		// BrnPhotoBoothComponent.cpp:619
		const char * GetTakePhotoStringID() const;

	public:
		// BrnPhotoBoothComponent.cpp:316
		void SetButtonPromptVisible(bool);

		// BrnPhotoBoothComponent.cpp:353
		bool Select();

		// BrnPhotoBoothComponent.cpp:155
		void OnLoad();

		// BrnPhotoBoothComponent.cpp:204
		void ReleaseResources();

		// BrnPhotoBoothComponent.cpp:234
		void ShowComponent(bool);

		// BrnPhotoBoothComponent.cpp:422
		bool Cancel();

		// BrnPhotoBoothComponent.cpp:531
		void SendPlayerPictureEvent();

	private:
		// BrnPhotoBoothComponent.cpp:29
		extern const char[14] KAC_HELPITEM_LEFT_NAME;

		// BrnPhotoBoothComponent.cpp:30
		extern const char[14] KAC_HELPITEM_CENTRE_NAME;

		// BrnPhotoBoothComponent.cpp:32
		extern const char *[5] KAPC_ANIMATION_FRAMES;

		// BrnPhotoBoothComponent.cpp:49
		extern const char[22] KAC_CONTINUE_STRINGID;

		// BrnPhotoBoothComponent.cpp:41
		extern const char *[4] KAPC_BACK_STRINGIDS;

		// BrnPhotoBoothComponent.cpp:51
		extern const char[26] KAC_TAKEPHOTO_STRINGID;

		// BrnPhotoBoothComponent.cpp:53
		extern const char[22] KAC_RETAKEPHOTO_STRINGID;

		// BrnPhotoBoothComponent.cpp:54
		extern const char[24] KAC_CONFIRM_STRINGID;

		// BrnPhotoBoothComponent.cpp:27
		extern char[9600] sacCachedPictureData;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PhotoBoothComponent {
		// BrnPhotoBoothComponent.h:48
		enum EPhotoBoothStyle {
			E_PHOTOBOOTH_STYLE_BASIC = 0,
			E_PHOTOBOOTH_STYLE_DMV_FULL_PAGE = 1,
			E_PHOTOBOOTH_STYLE_DMV_UPGRADE = 2,
			E_PHOTOBOOTH_STYLE_COUNT = 3,
		}

	public:
		// BrnPhotoBoothComponent.h:242
		bool IsActive();

		// BrnPhotoBoothComponent.h:339
		bool EnsureResourcesAreLoaded();

		// BrnPhotoBoothComponent.h:359
		bool EnsureResourcesAreUnloaded();

		// BrnPhotoBoothComponent.h:260
		void SetCachePointer(BrnGui::GuiCache *);

		// BrnPhotoBoothComponent.h:278
		void SetProfilePointer(Profile *);

		// BrnPhotoBoothComponent.h:296
		void SetVisualStyle(BrnGui::PhotoBoothComponent::EPhotoBoothStyle);

	private:
		// BrnPhotoBoothComponent.h:187
		extern char[] KAC_HELPITEM_LEFT_NAME;

		// BrnPhotoBoothComponent.h:188
		extern char[] KAC_HELPITEM_CENTRE_NAME;

		// BrnPhotoBoothComponent.h:192
		extern char[] KAC_CONTINUE_STRINGID;

		// BrnPhotoBoothComponent.h:195
		extern char[] KAC_TAKEPHOTO_STRINGID;

		// BrnPhotoBoothComponent.h:197
		extern char[] KAC_RETAKEPHOTO_STRINGID;

		// BrnPhotoBoothComponent.h:198
		extern char[] KAC_CONFIRM_STRINGID;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PhotoBoothComponent {
		// BrnPhotoBoothComponent.h:48
		enum EPhotoBoothStyle {
			E_PHOTOBOOTH_STYLE_BASIC = 0,
			E_PHOTOBOOTH_STYLE_DMV_FULL_PAGE = 1,
			E_PHOTOBOOTH_STYLE_DMV_UPGRADE = 2,
			E_PHOTOBOOTH_STYLE_COUNT = 3,
		}

		// BrnPhotoBoothComponent.h:57
		enum ETakePhotoStringType {
			E_TAKEPHOTOSTRING_NONE = 0,
			E_TAKEPHOTOSTRING_TAKEPHOTO = 1,
			E_TAKEPHOTOSTRING_CONTINUE = 2,
			E_TAKEPHOTOSTRING_COUNT = 3,
		}

		// BrnPhotoBoothComponent.h:66
		enum EBackStringType {
			E_BACKSTRING_NONE = 0,
			E_BACKSTRING_BACK = 1,
			E_BACKSTRING_USEOLDPHOTO = 2,
			E_BACKSTRING_CANCEL = 3,
			E_BACKSTRING_COUNT = 4,
		}

		// BrnPhotoBoothComponent.h:176
		enum EPhotoState {
			E_PHOTOSTATE_NONE = 0,
			E_PHOTOSTATE_GAMERPIC = 1,
			E_PHOTOSTATE_VIDEOFEED = 2,
			E_PHOTOSTATE_WAITINGFORSTILL = 3,
			E_PHOTOSTATE_CACHEDSTILLIMAGE = 4,
			E_PHOTOSTATE_COUNT = 5,
		}

	}

}

// BrnPhotoBoothComponent.h:45
struct BrnGui::PhotoBoothComponent : public BrnGui::IconComponent {
private:
	// BrnPhotoBoothComponent.h:187
	extern char[] KAC_HELPITEM_LEFT_NAME;

	// BrnPhotoBoothComponent.h:188
	extern char[] KAC_HELPITEM_CENTRE_NAME;

	// BrnPhotoBoothComponent.h:190
	extern const char *[] KAPC_ANIMATION_FRAMES;

	// BrnPhotoBoothComponent.h:192
	extern char[] KAC_CONTINUE_STRINGID;

	// BrnPhotoBoothComponent.h:194
	extern const char *[] KAPC_BACK_STRINGIDS;

	// BrnPhotoBoothComponent.h:195
	extern char[] KAC_TAKEPHOTO_STRINGID;

	// BrnPhotoBoothComponent.h:197
	extern char[] KAC_RETAKEPHOTO_STRINGID;

	// BrnPhotoBoothComponent.h:198
	extern char[] KAC_CONFIRM_STRINGID;

	// BrnPhotoBoothComponent.h:200
	sResourceTuple mPhotoResourceToLoad;

	// BrnPhotoBoothComponent.h:201
	bool mbResourceLoaded;

	// BrnPhotoBoothComponent.h:203
	BrnGui::HelpItem mHelpItemLeft;

	// BrnPhotoBoothComponent.h:204
	BrnGui::HelpItem mHelpItemCentral;

	// BrnPhotoBoothComponent.h:206
	BrnGui::ButtonIconComponent::EPadButton meBackButton;

	// BrnPhotoBoothComponent.h:207
	BrnGui::ButtonIconComponent::EPadButton meConfirmButton;

	// BrnPhotoBoothComponent.h:209
	BrnGui::PhotoBoothComponent::EPhotoState mePhotoState;

	// BrnPhotoBoothComponent.h:211
	BrnGui::GuiCache * mpGuiCache;

	// BrnPhotoBoothComponent.h:213
	Profile * mpProfile;

	// BrnPhotoBoothComponent.h:216
	NetworkTexture mCachedPicture;

	// BrnPhotoBoothComponent.h:221
	extern char[9600] sacCachedPictureData;

	// BrnPhotoBoothComponent.h:223
	BrnGui::PhotoBoothComponent::ETakePhotoStringType meTakePhotoStringType;

	// BrnPhotoBoothComponent.h:224
	BrnGui::PhotoBoothComponent::EBackStringType meBackStringType;

	// BrnPhotoBoothComponent.h:226
	bool mbVisible;

public:
	void PhotoBoothComponent(const PhotoBoothComponent &);

	void PhotoBoothComponent();

	// BrnPhotoBoothComponent.h:85
	void Construct(const char *, StateInterface *, BrnGui::ButtonIconComponent::EPadButton, BrnGui::ButtonIconComponent::EPadButton, BrnGui::PhotoBoothComponent::ETakePhotoStringType, BrnGui::PhotoBoothComponent::EBackStringType, const char *);

	// BrnPhotoBoothComponent.h:90
	void AppendExpectedAptComponents(BrnGui::GuiFlow);

	// BrnPhotoBoothComponent.h:94
	void OnLoad();

	// BrnPhotoBoothComponent.h:98
	void ReleaseResources();

	// BrnPhotoBoothComponent.h:103
	void ShowComponent(bool);

	// BrnPhotoBoothComponent.h:108
	void HideComponent(bool);

	// BrnPhotoBoothComponent.h:113
	void SetButtonPromptVisible(bool);

	// BrnPhotoBoothComponent.h:242
	bool IsActive();

	// BrnPhotoBoothComponent.h:121
	bool Select();

	// BrnPhotoBoothComponent.h:125
	bool Cancel();

	// BrnPhotoBoothComponent.h:260
	void SetCachePointer(BrnGui::GuiCache *);

	// BrnPhotoBoothComponent.h:278
	void SetProfilePointer(Profile *);

	// BrnPhotoBoothComponent.h:296
	void SetVisualStyle(BrnGui::PhotoBoothComponent::EPhotoBoothStyle);

	// BrnPhotoBoothComponent.h:339
	bool EnsureResourcesAreLoaded();

	// BrnPhotoBoothComponent.h:359
	bool EnsureResourcesAreUnloaded();

	// BrnPhotoBoothComponent.h:153
	void HandleCompressedStillImageEvent(const GuiEventCamPicCompressed *);

	// BrnPhotoBoothComponent.h:157
	void SendPlayerPictureEvent();

private:
	// BrnPhotoBoothComponent.h:163
	const char * GetTakePhotoStringID() const;

}

// BrnPhotoBoothComponent.h:45
void BrnGui::PhotoBoothComponent::PhotoBoothComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

