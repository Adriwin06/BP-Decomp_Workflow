// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct DangerousDrivingBox {
		// BrnDangerousDrivingBox.h:49
		enum FieldType {
			E_FIELD_DANGEROUS_DRIVING = 0,
			E_FIELD_SPEED = 1,
			E_FIELD_AGGRESSION = 2,
			E_FIELD_DESTRUCTION = 3,
			E_FIELD_STUNTS = 4,
			E_FIELD_MAX = 5,
		}

		// BrnDangerousDrivingBox.h:61
		struct DangerousDrivingValues {
			// BrnDangerousDrivingBox.h:66
			float32_t mfDangerousDriving;

			// BrnDangerousDrivingBox.h:67
			float32_t mfSpeed;

			// BrnDangerousDrivingBox.h:68
			float32_t mfAggression;

			// BrnDangerousDrivingBox.h:69
			float32_t mfDestruction;

			// BrnDangerousDrivingBox.h:70
			float32_t mfStunts;

		public:
			// BrnDangerousDrivingBox.h:64
			void Construct();

		}

	}

}

// BrnDangerousDrivingBox.h:46
struct BrnGui::DangerousDrivingBox : public CgsGui::GuiComponent {
private:
	// BrnDangerousDrivingBox.cpp:23
	extern const char * mpTitleTextName;

	// BrnDangerousDrivingBox.cpp:25
	extern const char *[5] mpacProgressBarNames;

	// BrnDangerousDrivingBox.cpp:34
	extern const char *[5] mpacTextFieldNames;

	// BrnDangerousDrivingBox.h:111
	BrnGui::DangerousDrivingBox::DangerousDrivingValues mValue;

	// BrnDangerousDrivingBox.h:112
	float32_t mfValueScalar;

	// BrnDangerousDrivingBox.h:114
	BrnGui::TextField mTitleText;

	// BrnDangerousDrivingBox.h:116
	BrnGui::TextField[5] mTextFields;

	// BrnDangerousDrivingBox.h:117
	BrnGui::ProgressBar[5] mProgressBar;

public:
	// BrnDangerousDrivingBox.cpp:78
	virtual void Construct(const char *, StateInterface *, float32_t, const char *);

	// BrnDangerousDrivingBox.cpp:107
	void SetupComponent(const char *);

	// BrnDangerousDrivingBox.cpp:121
	void SetValues(const BrnGui::DangerousDrivingBox::DangerousDrivingValues *);

	// BrnDangerousDrivingBox.h:130
	const BrnGui::DangerousDrivingBox::DangerousDrivingValues * GetValues() const;

private:
	// BrnDangerousDrivingBox.cpp:138
	void UpdateApt();

	// BrnDangerousDrivingBox.cpp:157
	void UpdateAptField(BrnGui::DangerousDrivingBox::FieldType, float32_t);

}

