// BrnTextField.h:48
extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

// BrnTextField.h:49
extern const uint32_t KU_MAX_COLOUR_LEN = 16;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		// BrnTextField.h:200
		const char * GetText() const;

		// BrnTextField.h:215
		void RefreshText();

		// BrnTextField.h:230
		void ClearText();

		// BrnTextField.h:310
		void SetAutoSize(bool);

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		BrnGui::TextField & operator=(const BrnGui::TextField &);

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnTextField.h:45
void BrnGui::TextField::operator=(const const BrnGui::TextField &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		// BrnTextField.h:310
		void SetAutoSize(bool);

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		// BrnTextField.h:310
		void SetAutoSize(bool);

		// BrnTextField.h:215
		void RefreshText();

		// BrnTextField.h:230
		void ClearText();

		// BrnTextField.h:200
		const char * GetText() const;

		// BrnTextField.h:295
		void ResetScroll();

		// BrnTextField.h:281
		void ScrollDown();

		// BrnTextField.h:267
		void ScrollUp();

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		// BrnTextField.h:295
		void ResetScroll();

		// BrnTextField.h:215
		void RefreshText();

		// BrnTextField.h:230
		void ClearText();

		// BrnTextField.h:281
		void ScrollDown();

		// BrnTextField.h:267
		void ScrollUp();

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnTextField.h:45
struct BrnGui::TextField : public CgsGui::GuiComponent {
	// BrnTextField.h:48
	extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

	// BrnTextField.h:49
	extern const uint32_t KU_MAX_COLOUR_LEN = 16;

private:
	// BrnTextField.h:175
	uint32_t muTextColour;

	// BrnTextField.h:176
	int32_t miScroll;

	// BrnTextField.h:177
	char[16] macColour;

	// BrnTextField.h:178
	char[128] macText;

	// BrnTextField.h:179
	bool mbUseColour;

	// BrnTextField.h:180
	bool mbResetScroll;

	// BrnTextField.h:181
	bool mbAutosize;

public:
	// BrnTextField.cpp:56
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnTextField.h:200
	const char * GetText() const;

	// BrnTextField.cpp:84
	void SetText(const char *);

	// BrnTextField.cpp:100
	void SetDatabaseText(const char *);

	// BrnTextField.cpp:154
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:192
	bool SetLocalisedText(float, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:218
	bool SetLocalisedText(int, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:262
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, ...);

	// BrnTextField.cpp:312
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, const char *const*, CgsLanguage::LanguageManager::ParameterFormatType *);

	// BrnTextField.cpp:354
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:384
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:416
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:448
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType, float32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.cpp:483
	bool SetLocalisedText(const char *, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType, int32_t, CgsLanguage::LanguageManager::ParameterFormatType);

	// BrnTextField.h:215
	void RefreshText();

	// BrnTextField.h:230
	void ClearText();

	// BrnTextField.h:247
	void SetColour(uint32_t);

	// BrnTextField.h:267
	void ScrollUp();

	// BrnTextField.h:281
	void ScrollDown();

	// BrnTextField.h:295
	void ResetScroll();

	// BrnTextField.h:310
	void SetAutoSize(bool);

private:
	// BrnTextField.cpp:511
	void OutputAptData();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		TextField();

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnTextField.h:45
void BrnGui::TextField::TextField() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct TextField {
	public:
		TextField();

		// Unknown accessibility
		// BrnTextField.h:48
		extern const uint32_t KU_MAX_TEXTFIELD_LEN = 128;

		// Unknown accessibility
		// BrnTextField.h:49
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

