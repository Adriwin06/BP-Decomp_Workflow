// BrnReplayOrthonormalMatrix.h:43
struct BrnReplays::OrthonormalMatrix {
	// BrnReplayOrthonormalMatrix.h:46
	extern const uint8_t KU_KEYFLAG_POSTITION_CHANGED = 1;

	// BrnReplayOrthonormalMatrix.h:47
	extern const uint8_t KU_KEYFLAG_ORIENTATION_CHANGED = 2;

private:
	// BrnReplayOrthonormalMatrix.h:59
	float32_t mfKeyPositionTime;

	// BrnReplayOrthonormalMatrix.h:60
	float32_t mfKeyOrientationTime;

	// BrnReplayOrthonormalMatrix.h:61
	QuatPos mKeyTransform;

	// BrnReplayOrthonormalMatrix.h:62
	QuatPos mKeyVelocity;

public:
	// BrnReplayOrthonormalMatrix.h:50
	void Clear();

	// BrnReplayOrthonormalMatrix.h:53
	void Write(BaseSerialiser *, Matrix44Affine);

	// BrnReplayOrthonormalMatrix.h:56
	void Read(BaseSerialiser *, Matrix44Affine &);

}

// BrnReplayOrthonormalMatrix.h:46
extern const uint8_t KU_KEYFLAG_POSTITION_CHANGED = 1;

// BrnReplayOrthonormalMatrix.h:47
extern const uint8_t KU_KEYFLAG_ORIENTATION_CHANGED = 2;

