// BrnSatNavDistance.h:44
struct BrnGui::SatNavDistance : public CgsGui::GuiComponent {
private:
	// BrnSatNavDistance.h:69
	extern const uint32_t KU_DISTANCE_TEXT_LENGTH = 64;

	// BrnSatNavDistance.h:71
	BrnGui::TextField mDistanceField;

	// BrnSatNavDistance.cpp:24
	extern const char[13] macDistanceFieldName;

	// BrnSatNavDistance.h:74
	float32_t mfDistanceLeft;

	// BrnSatNavDistance.h:75
	char[64] macDistanceLeft;

	// BrnSatNavDistance.h:77
	bool mbVisible;

	// BrnSatNavDistance.h:79
	bool mbAllowed;

public:
	// BrnSatNavDistance.cpp:45
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSatNavDistance.h:96
	void UpdateDistanceLeft(float32_t);

	// BrnSatNavDistance.cpp:69
	void Show();

	// BrnSatNavDistance.cpp:100
	void Hide();

}

// BrnSatNavDistance.h:69
extern const uint32_t KU_DISTANCE_TEXT_LENGTH = 64;

