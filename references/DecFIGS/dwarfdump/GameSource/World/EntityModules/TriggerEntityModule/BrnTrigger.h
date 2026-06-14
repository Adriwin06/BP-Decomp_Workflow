// BrnTrigger.h:44
struct BrnWorld::Trigger {
	// BrnTrigger.h:46
	VolumeInstanceId mVolumeInstanceID;

	// BrnTrigger.h:47
	TriggerId mID;

	// BrnTrigger.h:48
	BrnWorld::ETriggerTypeID meType;

	// BrnTrigger.h:49
	bool mbEnabled;

	// BrnTrigger.h:50
	int8_t miTriggerRegionType;

	// BrnTrigger.h:51
	int8_t miGenericRegionType;

	// BrnTrigger.h:55
	Matrix44Affine mTransform;

	// BrnTrigger.h:56
	Vector3 mDimensions;

	// BrnTrigger.h:57
	float32_t mfRadius;

}

