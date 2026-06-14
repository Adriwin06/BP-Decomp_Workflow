// Behaviour.h:50
namespace ICE {
	// ICEMath.hpp:123
	namespace ICEMath {
		// ICEMath.hpp:166
		namespace Angles {
			// ICEMath.hpp:195
			extern float32_t RevToRad(float32_t);

		}

		// ICEMath.hpp:496
		extern int32_t SignedMod(int32_t, int32_t);

		// ICEMath.hpp:376
		const float32_t ASPECT_X;

		// ICEMath.hpp:377
		const float32_t LENS_BASE;

	}

	// ICEMath.hpp:51
	const float32_t TWO_PI_ANGLE;

	// ICEMath.hpp:52
	const float32_t TWO_PI_DEG;

	// ICEMath.hpp:53
	const float32_t TWO_PI;

	// ICEMath.hpp:54
	const int32_t ICE_FPS = 30;

	// ICEMath.hpp:55
	const float32_t MILE;

}

// ICEMath.hpp:72
struct ICE::Angle {
private:
	// ICEMath.hpp:119
	uint16_t mu16Angle;

public:
	// ICEMath.hpp:74
	short unsigned int operator short unsigned int() const;

	// ICEMath.hpp:76
	void Angle();

	// ICEMath.hpp:78
	void Angle(uint16_t);

	// ICEMath.hpp:80
	void Angle(float32_t);

	// ICEMath.hpp:82
	Angle operator-();

	// ICEMath.hpp:83
	uint16_t operator=(short unsigned int);

	// ICEMath.hpp:86
	float32_t ConvertToFloatRad();

	// ICEMath.hpp:101
	void SetFromVecFloat(VecFloat);

}

// Behaviour.h:50
namespace ICE {
	// ICEMath.hpp:51
	const float32_t TWO_PI_ANGLE;

	// ICEMath.hpp:52
	const float32_t TWO_PI_DEG;

	// ICEMath.hpp:53
	const float32_t TWO_PI;

	// ICEMath.hpp:54
	const int32_t ICE_FPS = 30;

	// ICEMath.hpp:55
	const float32_t MILE;

	// ICEMath.hpp:123
	namespace ICEMath {
		// ICEMath.hpp:376
		const float32_t ASPECT_X;

		// ICEMath.hpp:377
		const float32_t LENS_BASE;

	}

}

// ICEActionQueue.hpp:21
namespace ICE {
	// ICEMath.hpp:123
	namespace ICEMath {
		// ICEMath.hpp:361
		extern int32_t StrLen(const char *);

		// ICEMath.hpp:142
		extern float32_t Abs(float32_t);

		// ICEMath.hpp:154
		extern float32_t IntToFloat(int32_t);

		// ICEMath.hpp:143
		extern int32_t FloatToInt(float32_t);

		// ICEMath.hpp:264
		extern float32_t Clamp(float32_t, float32_t, float32_t);

		// ICEMath.hpp:144
		extern uint32_t FloatToUInt(float32_t);

		// ICEMath.hpp:258
		extern int32_t Clamp(int32_t, int32_t, int32_t);

		// ICEMath.hpp:141
		extern int32_t Abs(int32_t);

		// ICEMath.hpp:149
		extern void Vector3ToVector4(Vector3, Vector4 &, float32_t);

		// ICEMath.hpp:290
		extern void Copy(Vector3 *, const Vector3 *);

		// ICEMath.hpp:162
		extern float32_t Max(float32_t, float32_t);

		// ICEMath.hpp:163
		extern float32_t Min(float32_t, float32_t);

		// ICEMath.hpp:160
		extern int32_t Max(int32_t, int32_t);

		// ICEMath.hpp:281
		extern int32_t MemCmp(const void *, const void *, uint32_t);

		// ICEMath.hpp:271
		extern float32_t Floor(float32_t);

		// ICEMath.hpp:270
		extern float32_t Truncate(float32_t);

		// ICEMath.hpp:273
		extern float32_t Round(float32_t);

		// ICEMath.hpp:274
		extern int32_t RoundFloatToInt(float32_t);

		// ICEMath.hpp:297
		extern float32_t Dot(const Vector3 *, const Vector3 *);

		// ICEMath.hpp:319
		extern void ScaleAdd(Vector3 *, const Vector3 *, const Vector3 *, float32_t);

		// ICEMath.hpp:304
		extern void Add(Vector3 *, const Vector3 *, const Vector3 *);

		// ICEMath.hpp:313
		extern void Scale(Vector3 *, const Vector3 *, float32_t);

		// ICEMath.hpp:287
		extern void Normalize(Vector3 *, const Vector3 *);

		// ICEMath.hpp:379
		extern Angle ConvertLensLengthToFovAngle(float32_t);

		// ICEMath.hpp:461
		extern Angle ATan(float32_t, float32_t);

		// ICEMath.hpp:166
		namespace Angles {
			// ICEMath.hpp:231
			extern float32_t AngToDeg(Angle);

			// ICEMath.hpp:176
			extern float32_t RadToDeg(float32_t);

			// ICEMath.hpp:207
			extern Angle RevToAng(float32_t);

			// ICEMath.hpp:195
			extern float32_t RevToRad(float32_t);

			// ICEMath.hpp:188
			extern float32_t AngToFloat(Angle);

		}

		// ICEMath.hpp:130
		extern float32_t Sin(Angle);

		// ICEMath.hpp:131
		extern float32_t Cos(Angle);

		// ICEMath.hpp:373
		extern void Identity(Matrix4 *);

		// ICEMath.hpp:431
		extern void RotateZ(Matrix4 *, const Matrix4 *, Angle);

		// ICEMath.hpp:430
		extern void RotateY(Matrix4 *, const Matrix4 *, Angle);

		// ICEMath.hpp:429
		extern void RotateX(Matrix4 *, const Matrix4 *, Angle);

		// ICEMath.hpp:254
		extern float32_t FixToFloat(Angle);

		// ICEMath.hpp:138
		extern float32_t Sqrt(float32_t);

		// ICEMath.hpp:308
		extern void Sub(Vector3 *, const Vector3 *, const Vector3 *);

		// ICEMath.hpp:558
		extern float32_t Length(const Vector3 *);

		// ICEMath.hpp:299
		extern void Cross(Vector3 *, const Vector3 *, const Vector3 *);

		// ICEMath.hpp:535
		extern float32_t DistBetween(const Vector3 *, const Vector3 *);

		// ICEMath.hpp:376
		const float32_t ASPECT_X;

		// ICEMath.hpp:377
		const float32_t LENS_BASE;

	}

	// ICEMath.hpp:51
	const float32_t TWO_PI_ANGLE;

	// ICEMath.hpp:52
	const float32_t TWO_PI_DEG;

	// ICEMath.hpp:53
	const float32_t TWO_PI;

	// ICEMath.hpp:54
	const int32_t ICE_FPS = 30;

	// ICEMath.hpp:55
	const float32_t MILE;

}

// ICEMath.hpp:43
namespace ICE {
	struct ICEMemory;

	// ICEMath.hpp:51
	const float32_t TWO_PI_ANGLE;

	// ICEMath.hpp:52
	const float32_t TWO_PI_DEG;

	// ICEMath.hpp:53
	const float32_t TWO_PI;

	// ICEMath.hpp:54
	const int32_t ICE_FPS = 30;

	// ICEMath.hpp:55
	const float32_t MILE;

	// ICEMath.hpp:123
	namespace ICEMath {
		// ICEMath.hpp:376
		const float32_t ASPECT_X;

		// ICEMath.hpp:377
		const float32_t LENS_BASE;

	}

}

// ICEMath.hpp:43
namespace ICE {
	struct ICEMemory;

	struct bNode;

	struct ICEElementCount;

	struct bTNode<ICE::ICETakeData>;

	struct ICETakeData;

	// ICEMath.hpp:51
	const float32_t TWO_PI_ANGLE;

	// ICEMath.hpp:52
	const float32_t TWO_PI_DEG;

	// ICEMath.hpp:53
	const float32_t TWO_PI;

	// ICEMath.hpp:54
	const int32_t ICE_FPS = 30;

	// ICEMath.hpp:55
	const float32_t MILE;

	// ICEMath.hpp:123
	namespace ICEMath {
		// ICEMath.hpp:376
		const float32_t ASPECT_X;

		// ICEMath.hpp:377
		const float32_t LENS_BASE;

	}

}

