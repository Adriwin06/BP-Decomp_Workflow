// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ObjectController {
	private:
		// CgsAptObjectController.h:199
		extern const int32_t KI_NUM_HASHTABLE_ENTRIES;

	}

}

// CgsAptObjectController.h:199
extern const int32_t KI_NUM_HASHTABLE_ENTRIES;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ObjectController {
	public:
		// CgsAptObjectController.h:470
		void SetVisible(bool);

		// CgsAptObjectController.h:398
		void SetPosX(float32_t);

		// CgsAptObjectController.h:427
		void SetPos(float32_t, float32_t);

		// CgsAptObjectController.h:269
		float32_t GetObjectVariableFloat(const char *);

	private:
		// CgsAptObjectController.h:199
		extern const int32_t KI_NUM_HASHTABLE_ENTRIES;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct ObjectController {
	public:
		// CgsAptObjectController.h:470
		void SetVisible(bool);

		// CgsAptObjectController.h:216
		ObjectController();

		// CgsAptObjectController.h:233
		void SetControlledObject(CgsGui::GuiComponent *);

	private:
		// CgsAptObjectController.h:199
		extern const int32_t KI_NUM_HASHTABLE_ENTRIES;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ObjectController {
		// CgsAptObjectController.h:41
		struct ObjectInfo {
			// CgsAptObjectController.h:43
			float32_t mfPosX;

			// CgsAptObjectController.h:44
			float32_t mfPosY;

			// CgsAptObjectController.h:45
			float32_t mfWidth;

			// CgsAptObjectController.h:46
			float32_t mfHeight;

			// CgsAptObjectController.h:47
			float32_t mfAlpha;

			// CgsAptObjectController.h:48
			float32_t mfRotation;

			// CgsAptObjectController.h:49
			bool mbVisible;

		}

	}

}

// CgsAptObjectController.h:37
struct CgsGui::ObjectController : public AptExtObject {
private:
	// CgsAptObjectController.h:199
	extern const int32_t KI_NUM_HASHTABLE_ENTRIES;

	// CgsAptObjectController.h:201
	bool mbRegistered;

	// CgsAptObjectController.h:202
	CgsGui::GuiComponent * mpControlledObject;

	// CgsAptObjectController.h:203
	AptValue * mpComponentReference;

public:
	void ObjectController(const ObjectController &);

	// CgsAptObjectController.h:216
	void ObjectController();

	// CgsAptObjectController.cpp:53
	virtual void Initialize();

	// CgsAptObjectController.cpp:65
	void Register();

	// CgsAptObjectController.cpp:82
	void UnRegister();

	// CgsAptObjectController.cpp:102
	virtual const char * GetName();

	// CgsAptObjectController.cpp:117
	void AttachController(AptValue *);

	// CgsAptObjectController.h:233
	void SetControlledObject(CgsGui::GuiComponent *);

	// CgsAptObjectController.cpp:136
	AptValue * GetObjectValue(const char *);

	// CgsAptObjectController.h:250
	int32_t GetObjectValueInteger(const char *);

	// CgsAptObjectController.h:269
	float32_t GetObjectVariableFloat(const char *);

	// CgsAptObjectController.h:288
	bool GetObjectVariableBoolean(const char *);

	// CgsAptObjectController.cpp:171
	void SetObjectVariableFloat(const char *, float32_t);

	// CgsAptObjectController.cpp:192
	void SetObjectVariableBoolean(const char *, bool);

	// CgsAptObjectController.cpp:213
	void SetObjectVariableString(const char *, const char *);

	// CgsAptObjectController.cpp:233
	void GetObjectInfo(CgsGui::ObjectController::ObjectInfo *);

	// CgsAptObjectController.h:306
	float32_t GetPosX();

	// CgsAptObjectController.h:319
	float32_t GetPosY();

	// CgsAptObjectController.cpp:253
	Vector2 GetPos();

	// CgsAptObjectController.h:332
	float32_t GetWidth();

	// CgsAptObjectController.h:345
	float32_t GetHeight();

	// CgsAptObjectController.h:358
	float32_t GetAlpha();

	// CgsAptObjectController.h:371
	float32_t GetRotation();

	// CgsAptObjectController.h:384
	bool IsVisible();

	// CgsAptObjectController.h:398
	void SetPosX(float32_t);

	// CgsAptObjectController.h:412
	void SetPosY(float32_t);

	// CgsAptObjectController.h:427
	void SetPos(float32_t, float32_t);

	// CgsAptObjectController.h:442
	void SetAlpha(float32_t);

	// CgsAptObjectController.h:456
	void SetRotation(float32_t);

	// CgsAptObjectController.h:470
	void SetVisible(bool);

protected:
	// CgsAptObjectController.cpp:38
	virtual void ~ObjectController();

}

