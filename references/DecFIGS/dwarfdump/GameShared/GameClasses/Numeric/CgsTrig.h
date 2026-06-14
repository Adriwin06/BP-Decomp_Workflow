// CgsTrig.h:28
namespace CgsNumeric {
	struct TrigBaseFunctions5;

	struct TrigFunctions<CgsNumeric::TrigBaseFunctions5>;

	struct Random;

	// CgsTrig.h:32
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONEOVERTWOPI;

	// CgsTrig.h:33
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_TWOPI;

	// CgsTrig.h:34
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_HALF_PI;

	// CgsTrig.h:35
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONE;

	// CgsTrig.h:36
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER;

	// CgsTrig.h:37
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER_IN_XZ;

	// CgsTrig.h:38
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_FOUR;

	// CgsTrig.h:39
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_ONE;

	// CgsTrig.h:41
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:42
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:43
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5;

	// CgsTrig.h:44
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7;

	// CgsTrig.h:45
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9;

	// CgsTrig.h:46
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11;

	// CgsTrig.h:48
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_B;

	// CgsTrig.h:49
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_B;

	// CgsTrig.h:50
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_B;

	// CgsTrig.h:51
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_B;

	// CgsTrig.h:52
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_B;

	// CgsTrig.h:53
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_B;

	// CgsTrig.h:55
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TAYLOR;

	// CgsTrig.h:56
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TAYLOR;

	// CgsTrig.h:57
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TAYLOR;

	// CgsTrig.h:58
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TAYLOR;

	// CgsTrig.h:59
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TAYLOR;

	// CgsTrig.h:60
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TAYLOR;

	// CgsTrig.h:62
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TOBY;

	// CgsTrig.h:63
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TOBY;

	// CgsTrig.h:64
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TOBY;

	// CgsTrig.h:65
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TOBY;

	// CgsTrig.h:66
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TOBY;

	// CgsTrig.h:67
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TOBY;

	// CgsTrig.h:69
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_CEDRICK;

	// CgsTrig.h:70
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_CEDRICK;

	// CgsTrig.h:71
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_CEDRICK;

	// CgsTrig.h:72
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_CEDRICK;

	// CgsTrig.h:73
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_CEDRICK;

	// CgsTrig.h:74
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_CEDRICK;

	// CgsTrig.h:76
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:77
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:78
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF5;

}

// CgsTrig.h:362
struct CgsNumeric::TrigBaseFunctions5 {
public:
	// CgsTrig.h:379
	Vector4 Cos4_UnitCycles(Vector4);

}

// CgsTrig.h:399
struct CgsNumeric::TrigFunctions<CgsNumeric::TrigBaseFunctions5> {
public:
	// CgsTrig.h:414
	VecFloat Cos(VecFloat);

	// CgsTrig.h:434
	Vector2 Cos(Vector2);

	// CgsTrig.h:454
	Vector3 Cos(Vector3);

	// CgsTrig.h:474
	Vector4 Cos(Vector4);

	// CgsTrig.h:494
	VecFloat Sin(VecFloat);

	// CgsTrig.h:514
	Vector2 Sin(Vector2);

	// CgsTrig.h:534
	Vector3 Sin(Vector3);

	// CgsTrig.h:554
	Vector4 Sin(Vector4);

	// CgsTrig.h:574
	Vector4 SinCos(VecFloat);

	// CgsTrig.h:594
	Vector4 SinCos2(Vector2);

	// CgsTrig.h:617
	Vector4 SinCos2(VecFloat, VecFloat);

}

// CgsTrig.h:32
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONEOVERTWOPI;

// CgsTrig.h:33
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_TWOPI;

// CgsTrig.h:34
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_HALF_PI;

// CgsTrig.h:35
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONE;

// CgsTrig.h:36
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER;

// CgsTrig.h:37
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER_IN_XZ;

// CgsTrig.h:38
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_FOUR;

// CgsTrig.h:39
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_ONE;

// CgsTrig.h:41
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1;

// CgsTrig.h:42
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3;

// CgsTrig.h:43
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5;

// CgsTrig.h:44
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7;

// CgsTrig.h:45
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9;

// CgsTrig.h:46
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11;

// CgsTrig.h:48
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_B;

// CgsTrig.h:49
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_B;

// CgsTrig.h:50
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_B;

// CgsTrig.h:51
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_B;

// CgsTrig.h:52
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_B;

// CgsTrig.h:53
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_B;

// CgsTrig.h:55
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TAYLOR;

// CgsTrig.h:56
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TAYLOR;

// CgsTrig.h:57
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TAYLOR;

// CgsTrig.h:58
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TAYLOR;

// CgsTrig.h:59
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TAYLOR;

// CgsTrig.h:60
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TAYLOR;

// CgsTrig.h:62
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TOBY;

// CgsTrig.h:63
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TOBY;

// CgsTrig.h:64
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TOBY;

// CgsTrig.h:65
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TOBY;

// CgsTrig.h:66
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TOBY;

// CgsTrig.h:67
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TOBY;

// CgsTrig.h:69
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_CEDRICK;

// CgsTrig.h:70
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_CEDRICK;

// CgsTrig.h:71
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_CEDRICK;

// CgsTrig.h:72
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_CEDRICK;

// CgsTrig.h:73
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_CEDRICK;

// CgsTrig.h:74
extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_CEDRICK;

// CgsTrig.h:76
extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF1;

// CgsTrig.h:77
extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF3;

// CgsTrig.h:78
extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF5;

// CgsReciprocal.h:32
namespace CgsNumeric {
	// CgsTrig.h:32
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONEOVERTWOPI;

	// CgsTrig.h:33
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_TWOPI;

	// CgsTrig.h:34
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_HALF_PI;

	// CgsTrig.h:35
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONE;

	// CgsTrig.h:36
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER;

	// CgsTrig.h:37
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER_IN_XZ;

	// CgsTrig.h:38
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_FOUR;

	// CgsTrig.h:39
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_ONE;

	// CgsTrig.h:41
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:42
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:43
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5;

	// CgsTrig.h:44
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7;

	// CgsTrig.h:45
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9;

	// CgsTrig.h:46
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11;

	// CgsTrig.h:48
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_B;

	// CgsTrig.h:49
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_B;

	// CgsTrig.h:50
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_B;

	// CgsTrig.h:51
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_B;

	// CgsTrig.h:52
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_B;

	// CgsTrig.h:53
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_B;

	// CgsTrig.h:55
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TAYLOR;

	// CgsTrig.h:56
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TAYLOR;

	// CgsTrig.h:57
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TAYLOR;

	// CgsTrig.h:58
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TAYLOR;

	// CgsTrig.h:59
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TAYLOR;

	// CgsTrig.h:60
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TAYLOR;

	// CgsTrig.h:62
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TOBY;

	// CgsTrig.h:63
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TOBY;

	// CgsTrig.h:64
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TOBY;

	// CgsTrig.h:65
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TOBY;

	// CgsTrig.h:66
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TOBY;

	// CgsTrig.h:67
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TOBY;

	// CgsTrig.h:69
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_CEDRICK;

	// CgsTrig.h:70
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_CEDRICK;

	// CgsTrig.h:71
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_CEDRICK;

	// CgsTrig.h:72
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_CEDRICK;

	// CgsTrig.h:73
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_CEDRICK;

	// CgsTrig.h:74
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_CEDRICK;

	// CgsTrig.h:76
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:77
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:78
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF5;

}

// CgsRandom.h:30
namespace CgsNumeric {
	// CgsTrig.h:32
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONEOVERTWOPI;

	// CgsTrig.h:33
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_TWOPI;

	// CgsTrig.h:34
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_HALF_PI;

	// CgsTrig.h:35
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONE;

	// CgsTrig.h:36
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER;

	// CgsTrig.h:37
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER_IN_XZ;

	// CgsTrig.h:38
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_FOUR;

	// CgsTrig.h:39
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_ONE;

	// CgsTrig.h:41
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:42
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:43
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5;

	// CgsTrig.h:44
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7;

	// CgsTrig.h:45
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9;

	// CgsTrig.h:46
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11;

	// CgsTrig.h:48
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_B;

	// CgsTrig.h:49
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_B;

	// CgsTrig.h:50
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_B;

	// CgsTrig.h:51
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_B;

	// CgsTrig.h:52
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_B;

	// CgsTrig.h:53
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_B;

	// CgsTrig.h:55
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TAYLOR;

	// CgsTrig.h:56
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TAYLOR;

	// CgsTrig.h:57
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TAYLOR;

	// CgsTrig.h:58
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TAYLOR;

	// CgsTrig.h:59
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TAYLOR;

	// CgsTrig.h:60
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TAYLOR;

	// CgsTrig.h:62
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TOBY;

	// CgsTrig.h:63
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TOBY;

	// CgsTrig.h:64
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TOBY;

	// CgsTrig.h:65
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TOBY;

	// CgsTrig.h:66
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TOBY;

	// CgsTrig.h:67
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TOBY;

	// CgsTrig.h:69
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_CEDRICK;

	// CgsTrig.h:70
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_CEDRICK;

	// CgsTrig.h:71
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_CEDRICK;

	// CgsTrig.h:72
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_CEDRICK;

	// CgsTrig.h:73
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_CEDRICK;

	// CgsTrig.h:74
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_CEDRICK;

	// CgsTrig.h:76
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:77
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:78
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF5;

}

// CgsBranchlessOperations.h:32
namespace CgsNumeric {
	// CgsTrig.h:32
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONEOVERTWOPI;

	// CgsTrig.h:33
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_TWOPI;

	// CgsTrig.h:34
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_HALF_PI;

	// CgsTrig.h:35
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_ONE;

	// CgsTrig.h:36
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER;

	// CgsTrig.h:37
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_QUARTER_IN_XZ;

	// CgsTrig.h:38
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_FOUR;

	// CgsTrig.h:39
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_MINUS_ONE;

	// CgsTrig.h:41
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:42
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:43
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5;

	// CgsTrig.h:44
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7;

	// CgsTrig.h:45
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9;

	// CgsTrig.h:46
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11;

	// CgsTrig.h:48
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_B;

	// CgsTrig.h:49
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_B;

	// CgsTrig.h:50
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_B;

	// CgsTrig.h:51
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_B;

	// CgsTrig.h:52
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_B;

	// CgsTrig.h:53
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_B;

	// CgsTrig.h:55
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TAYLOR;

	// CgsTrig.h:56
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TAYLOR;

	// CgsTrig.h:57
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TAYLOR;

	// CgsTrig.h:58
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TAYLOR;

	// CgsTrig.h:59
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TAYLOR;

	// CgsTrig.h:60
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TAYLOR;

	// CgsTrig.h:62
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_TOBY;

	// CgsTrig.h:63
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_TOBY;

	// CgsTrig.h:64
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_TOBY;

	// CgsTrig.h:65
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_TOBY;

	// CgsTrig.h:66
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_TOBY;

	// CgsTrig.h:67
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_TOBY;

	// CgsTrig.h:69
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF1_CEDRICK;

	// CgsTrig.h:70
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF3_CEDRICK;

	// CgsTrig.h:71
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF5_CEDRICK;

	// CgsTrig.h:72
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF7_CEDRICK;

	// CgsTrig.h:73
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF9_CEDRICK;

	// CgsTrig.h:74
	extern const rw::math::vpu::Vector4 K_TRIG_VECTOR4_COS4_COEFF11_CEDRICK;

	// CgsTrig.h:76
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF1;

	// CgsTrig.h:77
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF3;

	// CgsTrig.h:78
	extern const rw::math::vpu::Vector4 K_TRIGFAST_VECTOR4_COS4_COEFF5;

}

