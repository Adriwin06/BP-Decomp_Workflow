// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// CgsTypes.h:39
		enum InputEvent {
			E_INPUTEVENT_NONE = 0,
			E_INPUTEVENT_SELECT = 1,
			E_INPUTEVENT_BACK = 2,
			E_INPUTEVENT_CLOSE = 3,
			E_INPUTEVENT_CURSORUP = 4,
			E_INPUTEVENT_CURSORDOWN = 5,
			E_INPUTEVENT_CURSORLEFT = 6,
			E_INPUTEVENT_CURSORRIGHT = 7,
			E_INPUTEVENT_TOGGLEPIN = 8,
			E_INPUTEVENT_TOGGLECONSOLE = 9,
			E_INPUTEVENT_MAINMENU = 10,
			E_INPUTEVENT_NEXTWINDOW = 11,
			E_INPUTEVENT_PREVWINDOW = 12,
			E_INPUTEVENT_TOGGLEUI = 13,
			E_INPUTEVENT_DOCKTOP = 14,
			E_INPUTEVENT_DOCKBOTTOM = 15,
			E_INPUTEVENT_DOCKLEFT = 16,
			E_INPUTEVENT_DOCKRIGHT = 17,
			E_INPUTEVENT_COUNT = 18,
		}

		// Declaration
		struct Variant {
			// CgsTypes.h:169
			enum Type {
				E_TYPE_NONE = 0,
				E_TYPE_FLOAT = 1,
				E_TYPE_INT32 = 2,
				E_TYPE_UINT32 = 3,
				E_TYPE_BOOL = 4,
				E_TYPE_PTR_FLOAT = 5,
				E_TYPE_PTR_INT32 = 6,
				E_TYPE_PTR_UINT32 = 7,
				E_TYPE_PTR_BOOL = 8,
				E_TYPE_PTR_VOID = 9,
				E_TYPE_UI_STRINGLISTINT32 = 10,
				E_TYPE_UI_VARIABLECALLBACK = 11,
				E_TYPE_COUNT = 12,
			}

			// CgsTypes.h:193
			union UValue {
				// CgsTypes.h:194
				float32_t mfFloat;

				// CgsTypes.h:195
				int32_t miInt32;

				// CgsTypes.h:196
				uint32_t muUInt32;

				// CgsTypes.h:197
				bool mbBool;

				// CgsTypes.h:199
				float32_t * mpfFloat;

				// CgsTypes.h:200
				int32_t * mpiInt32;

				// CgsTypes.h:201
				uint32_t * mpuUInt32;

				// CgsTypes.h:202
				bool * mpbBool;

				// CgsTypes.h:204
				const CgsDev::DebugUI::StringList * mpInt32StringList;

				// CgsTypes.h:78
				typedef void (*)(void *, void *) VariableCallbackFunction;

				// CgsTypes.h:205
				CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction mpVariableCallbackFunction;

				// CgsTypes.h:208
				void * mpValue;

			}
		}

	}

}

// CgsTypes.h:89
struct CgsDev::DebugUI::Palette {
	// CgsTypes.h:92
	RGBA mColourText;

	// CgsTypes.h:93
	RGBA mColourWindow;

	// CgsTypes.h:94
	RGBA mColourBorder;

	// CgsTypes.h:95
	RGBA mColourCaption;

	// CgsTypes.h:96
	RGBA mColourCaptionText;

	// CgsTypes.h:97
	RGBA mColourActiveCaption;

	// CgsTypes.h:98
	RGBA mColourHighlight;

	// CgsTypes.h:99
	RGBA mColourHighlightText;

	// CgsTypes.h:100
	RGBA mColourDisabled;

	// CgsTypes.h:101
	RGBA mColourDisabledText;

	// CgsTypes.h:102
	RGBA mColourPinned;

	// CgsTypes.h:103
	RGBA mColourPinnedText;

	// CgsTypes.h:104
	RGBA mColourBar;

	// CgsTypes.h:105
	RGBA mColourBarBackground;

	// CgsTypes.h:106
	RGBA mColourErrorText;

	// CgsTypes.h:107
	RGBA mColourErrorWindow;

	// CgsTypes.h:108
	RGBA mColourTextScreen;

	// CgsTypes.h:111
	extern const Palette DEFAULT;

}

// CgsTypes.h:124
struct CgsDev::DebugUI::Metrics {
	// CgsTypes.h:128
	float32_t mfTextSize;

	// CgsTypes.h:129
	float32_t mfWindowBorderSize;

	// CgsTypes.h:130
	float32_t mfWindowMoveSpeed;

	// CgsTypes.h:131
	float32_t mfScreenWidth;

	// CgsTypes.h:132
	float32_t mfScreenHeight;

	// CgsTypes.h:133
	float32_t mfScreenBorderLeft;

	// CgsTypes.h:134
	float32_t mfScreenBorderTop;

	// CgsTypes.h:135
	float32_t mfScreenBorderRight;

	// CgsTypes.h:136
	float32_t mfScreenBorderBottom;

	// CgsTypes.h:137
	float32_t mfCascadeStep;

	// CgsTypes.h:138
	float32_t mfBarHeightScale;

	// CgsTypes.h:139
	float32_t mfBarHeightScaleBig;

	// CgsTypes.h:140
	float32_t mfSubItemIndent;

	// CgsTypes.h:141
	float32_t mfMenuGap;

	// CgsTypes.h:142
	float32_t mfErrorWindowBorder;

	// CgsTypes.h:145
	float32_t mfAutoRepeatDelay;

	// CgsTypes.h:146
	float32_t mfButtonDelay;

	// CgsTypes.h:147
	float32_t mfButtonDelayDelta;

	// CgsTypes.h:150
	extern const Metrics DEFAULT;

}

// CgsTypes.h:165
struct CgsDev::DebugUI::Variant {
	// CgsTypes.h:246
	CgsDev::DebugUI::Variant::Type meType;

	// CgsTypes.h:247
	CgsDev::DebugUI::Variant::UValue mValue;

private:
	// CgsTypes.h:252
	extern const char * KPC_TRUE;

	// CgsTypes.h:253
	extern const char * KPC_FALSE;

	// CgsTypes.h:254
	extern const char * KPC_NONE;

	// CgsTypes.h:255
	extern const char * KPC_INTERNAL;

	// CgsTypes.h:256
	extern const char * KPC_UNKNOWN;

	// CgsTypes.h:257
	extern const char * KPC_FORMAT_FLOAT;

	// CgsTypes.h:258
	extern const char * KPC_FORMAT_INT;

public:
	// CgsTypes.h:212
	void Variant();

	// CgsTypes.h:213
	void Variant(const Variant &);

	// CgsTypes.h:214
	void Variant(float32_t);

	// CgsTypes.h:215
	void Variant(int32_t);

	// CgsTypes.h:216
	void Variant(uint32_t);

	// CgsTypes.h:217
	void Variant(bool);

	// CgsTypes.h:218
	void Variant(float32_t *);

	// CgsTypes.h:219
	void Variant(int32_t *);

	// CgsTypes.h:220
	void Variant(uint32_t *);

	// CgsTypes.h:221
	void Variant(bool *);

	// CgsTypes.h:222
	void Variant(const CgsDev::DebugUI::StringList *);

	// CgsTypes.h:223
	void Variant(CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction);

	// CgsTypes.h:227
	void Copy(const Variant &);

	// CgsTypes.h:230
	void Clear();

	// CgsTypes.h:235
	void ConvertToString(char *, int32_t);

	// CgsTypes.h:237
	void ConvertFromString(const char *);

	// CgsTypes.h:238
	float32_t ConvertToFloat(const CgsDev::DebugUI::Variant::UValue &, CgsDev::DebugUI::Variant::Type);

	// CgsTypes.h:239
	void SetVoidPointerType(void *);

	// CgsTypes.h:242
	bool Dereference(const Variant &);

	// CgsTypes.h:243
	CgsDev::DebugUI::Variant::Type GetDereferenceType() const;

}

// CgsTypes.h:271
struct CgsDev::DebugUI::StringList {
	// CgsTypes.h:273
	int32_t miValue;

	// CgsTypes.h:274
	const char * mpcName;

}

// CgsTypes.h:111
extern const Palette DEFAULT;

// CgsTypes.h:150
extern const Metrics DEFAULT;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// CgsTypes.h:39
		enum InputEvent {
			E_INPUTEVENT_NONE = 0,
			E_INPUTEVENT_SELECT = 1,
			E_INPUTEVENT_BACK = 2,
			E_INPUTEVENT_CLOSE = 3,
			E_INPUTEVENT_CURSORUP = 4,
			E_INPUTEVENT_CURSORDOWN = 5,
			E_INPUTEVENT_CURSORLEFT = 6,
			E_INPUTEVENT_CURSORRIGHT = 7,
			E_INPUTEVENT_TOGGLEPIN = 8,
			E_INPUTEVENT_TOGGLECONSOLE = 9,
			E_INPUTEVENT_MAINMENU = 10,
			E_INPUTEVENT_NEXTWINDOW = 11,
			E_INPUTEVENT_PREVWINDOW = 12,
			E_INPUTEVENT_TOGGLEUI = 13,
			E_INPUTEVENT_DOCKTOP = 14,
			E_INPUTEVENT_DOCKBOTTOM = 15,
			E_INPUTEVENT_DOCKLEFT = 16,
			E_INPUTEVENT_DOCKRIGHT = 17,
			E_INPUTEVENT_COUNT = 18,
		}

		struct Palette;

		struct Metrics;

		// Declaration
		struct Variant {
			// CgsTypes.h:169
			enum Type {
				E_TYPE_NONE = 0,
				E_TYPE_FLOAT = 1,
				E_TYPE_INT32 = 2,
				E_TYPE_UINT32 = 3,
				E_TYPE_BOOL = 4,
				E_TYPE_PTR_FLOAT = 5,
				E_TYPE_PTR_INT32 = 6,
				E_TYPE_PTR_UINT32 = 7,
				E_TYPE_PTR_BOOL = 8,
				E_TYPE_PTR_VOID = 9,
				E_TYPE_UI_STRINGLISTINT32 = 10,
				E_TYPE_UI_VARIABLECALLBACK = 11,
				E_TYPE_COUNT = 12,
			}

			// CgsTypes.h:193
			union UValue {
				// CgsTypes.h:194
				float32_t mfFloat;

				// CgsTypes.h:195
				int32_t miInt32;

				// CgsTypes.h:196
				uint32_t muUInt32;

				// CgsTypes.h:197
				bool mbBool;

				// CgsTypes.h:199
				float32_t * mpfFloat;

				// CgsTypes.h:200
				int32_t * mpiInt32;

				// CgsTypes.h:201
				uint32_t * mpuUInt32;

				// CgsTypes.h:202
				bool * mpbBool;

				// CgsTypes.h:204
				const CgsDev::DebugUI::StringList * mpInt32StringList;

				// CgsTypes.h:78
				typedef void (*)(void *, void *) VariableCallbackFunction;

				// CgsTypes.h:205
				CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction mpVariableCallbackFunction;

				// CgsTypes.h:208
				void * mpValue;

			}
		}

		struct StringList;

		struct DebugUI;

		struct LogWindowStrStream;

		struct MenuItemVariable;

		struct Menu;

		struct MenuWindow;

		struct MenuManager;

		struct MenuItem;

		struct Variable;

		struct VariableManager;

		struct Function;

		struct MenuItemFunction;

		struct FunctionManager;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		struct Palette;

		struct Metrics;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		struct Palette;

		struct Metrics;

		struct StringList;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// CgsTypes.h:39
		enum InputEvent {
			E_INPUTEVENT_NONE = 0,
			E_INPUTEVENT_SELECT = 1,
			E_INPUTEVENT_BACK = 2,
			E_INPUTEVENT_CLOSE = 3,
			E_INPUTEVENT_CURSORUP = 4,
			E_INPUTEVENT_CURSORDOWN = 5,
			E_INPUTEVENT_CURSORLEFT = 6,
			E_INPUTEVENT_CURSORRIGHT = 7,
			E_INPUTEVENT_TOGGLEPIN = 8,
			E_INPUTEVENT_TOGGLECONSOLE = 9,
			E_INPUTEVENT_MAINMENU = 10,
			E_INPUTEVENT_NEXTWINDOW = 11,
			E_INPUTEVENT_PREVWINDOW = 12,
			E_INPUTEVENT_TOGGLEUI = 13,
			E_INPUTEVENT_DOCKTOP = 14,
			E_INPUTEVENT_DOCKBOTTOM = 15,
			E_INPUTEVENT_DOCKLEFT = 16,
			E_INPUTEVENT_DOCKRIGHT = 17,
			E_INPUTEVENT_COUNT = 18,
		}

		struct Palette;

		struct Metrics;

		// Declaration
		struct Variant {
			// CgsTypes.h:169
			enum Type {
				E_TYPE_NONE = 0,
				E_TYPE_FLOAT = 1,
				E_TYPE_INT32 = 2,
				E_TYPE_UINT32 = 3,
				E_TYPE_BOOL = 4,
				E_TYPE_PTR_FLOAT = 5,
				E_TYPE_PTR_INT32 = 6,
				E_TYPE_PTR_UINT32 = 7,
				E_TYPE_PTR_BOOL = 8,
				E_TYPE_PTR_VOID = 9,
				E_TYPE_UI_STRINGLISTINT32 = 10,
				E_TYPE_UI_VARIABLECALLBACK = 11,
				E_TYPE_COUNT = 12,
			}

			// CgsTypes.h:193
			union UValue {
				// CgsTypes.h:194
				float32_t mfFloat;

				// CgsTypes.h:195
				int32_t miInt32;

				// CgsTypes.h:196
				uint32_t muUInt32;

				// CgsTypes.h:197
				bool mbBool;

				// CgsTypes.h:199
				float32_t * mpfFloat;

				// CgsTypes.h:200
				int32_t * mpiInt32;

				// CgsTypes.h:201
				uint32_t * mpuUInt32;

				// CgsTypes.h:202
				bool * mpbBool;

				// CgsTypes.h:204
				const CgsDev::DebugUI::StringList * mpInt32StringList;

				// CgsTypes.h:78
				typedef void (*)(void *, void *) VariableCallbackFunction;

				// CgsTypes.h:205
				CgsDev::DebugUI::Variant::UValue::VariableCallbackFunction mpVariableCallbackFunction;

				// CgsTypes.h:208
				void * mpValue;

			}
		}

		struct StringList;

		struct DebugUI;

		struct LogWindowStrStream;

		struct MenuItemVariable;

		struct Menu;

		struct MenuWindow;

		struct MenuManager;

		// Declaration
		struct MenuItem {
		public:
			MenuItem();

		}

		struct Variable;

		struct VariableManager;

		struct Function;

		struct MenuItemFunction;

		struct FunctionManager;

		// Declaration
		struct Widget {
		public:
			Widget();

		}

	}

}

