// BrnGlassPaneSpec.h:49
struct BrnPhysics::Deformation::GlassPaneSpec {
private:
	// BrnGlassPaneSpec.h:92
	extern const int8_t KI_NUM_POINTS_PER_GLASS_PANE = 4;

	// BrnGlassPaneSpec.h:94
	Vector3 mNormal;

	// BrnGlassPaneSpec.h:95
	Vector3[4] maCornerPositionOffsets;

	// BrnGlassPaneSpec.h:96
	int16_t[4] maiPointIndex;

	// BrnGlassPaneSpec.h:97
	bool[4] mabSkinToControlPoint;

	// BrnGlassPaneSpec.h:98
	int16_t miParentBodyPart;

	// BrnGlassPaneSpec.h:99
	int16_t miCrackSensor;

	// BrnGlassPaneSpec.h:100
	int16_t miSmashSensor;

	// BrnGlassPaneSpec.h:101
	EBodyParts mePartType;

public:
	// BrnGlassPaneSpec.h:53
	void Construct();

	// BrnGlassPaneSpec.h:56
	void FixUp(void *);

	// BrnGlassPaneSpec.h:59
	void FixDown(void *);

	// BrnGlassPaneSpec.h:62
	Vector3 GetNormal() const;

	// BrnGlassPaneSpec.h:66
	Vector3 GetCornerOffset(int32_t) const;

	// BrnGlassPaneSpec.h:70
	int32_t GetPointIndex(int32_t) const;

	// BrnGlassPaneSpec.h:74
	bool GetSkinToControlPoint(int32_t) const;

	// BrnGlassPaneSpec.h:78
	int16_t GetCrackSensor() const;

	// BrnGlassPaneSpec.h:82
	int16_t GetSmashSensor() const;

	// BrnGlassPaneSpec.h:86
	EBodyParts GetBodyPartType() const;

}

// BrnGlassPaneSpec.h:92
extern const int8_t KI_NUM_POINTS_PER_GLASS_PANE = 4;

