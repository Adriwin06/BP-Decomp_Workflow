// BrnReplayVector3.h:68
struct BrnReplays::Vector3Plus {
private:
	// BrnReplayVector3.h:81
	Vector4 mKeyPos;

public:
	// BrnReplayVector3.h:72
	void Clear();

	// BrnReplayVector3.h:75
	void Write(BaseSerialiser *, Vector3Plus, float32_t);

	// BrnReplayVector3.h:78
	void Read(BaseSerialiser *, Vector3Plus &);

}

