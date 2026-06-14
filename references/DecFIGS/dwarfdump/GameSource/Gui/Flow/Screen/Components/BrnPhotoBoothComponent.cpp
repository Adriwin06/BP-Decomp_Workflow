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

