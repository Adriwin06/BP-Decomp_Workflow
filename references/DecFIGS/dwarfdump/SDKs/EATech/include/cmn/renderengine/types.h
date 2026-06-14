// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// CgsCore.h:151
		namespace core {
			// types.h:333
			using namespace renderengine;

		}

	}

}

// types.h:76
struct renderengine::RGBA8 {
	// types.h:79
	extern const uint32_t RedShift = 24;

	// types.h:80
	extern const uint32_t GreenShift = 16;

	// types.h:81
	extern const uint32_t BlueShift = 8;

	// types.h:82
	extern const uint32_t AlphaShift;

private:
	// types.h:198
	uint32_t m_rgba;

public:
	// types.h:92
	void RGBA8();

	// types.h:98
	void RGBA8(uint8_t, uint8_t, uint8_t, uint8_t);

	// types.h:107
	void RGBA8(const RGBA &);

	// types.h:116
	void RGBA8(Vector4);

	// types.h:126
	void RGBA8(Vector3);

	// types.h:136
	uint8_t GetRed() const;

	// types.h:142
	void SetRed(uint8_t);

	// types.h:149
	uint8_t GetGreen() const;

	// types.h:155
	void SetGreen(uint8_t);

	// types.h:162
	uint8_t GetBlue() const;

	// types.h:168
	void SetBlue(uint8_t);

	// types.h:175
	uint8_t GetAlpha() const;

	// types.h:181
	void SetAlpha(uint8_t);

	// types.h:187
	bool operator==(const RGBA8 &) const;

	// types.h:192
	uint32_t GetValue() const;

}

// types.h:207
struct renderengine::RGBA32 : public Vector4 {
public:
	// types.h:209
	void RGBA32(float32_t, float32_t, float32_t, float32_t);

	// types.h:215
	Vector2::VecFloatRefX Red();

	// types.h:221
	Vector2::VecFloatRefY Green();

	// types.h:227
	Vector3::VecFloatRefZ Blue();

	// types.h:233
	Vector3Plus::VecFloatRefW Alpha();

	// types.h:239
	const Vector2::VecFloatRefX Red() const;

	// types.h:245
	const Vector2::VecFloatRefY Green() const;

	// types.h:251
	const Vector3::VecFloatRefZ Blue() const;

	// types.h:257
	const Vector3Plus::VecFloatRefW Alpha() const;

}

// types.h:79
extern const uint32_t RedShift = 24;

// types.h:80
extern const uint32_t GreenShift = 16;

// types.h:81
extern const uint32_t BlueShift = 8;

// types.h:82
extern const uint32_t AlphaShift;

