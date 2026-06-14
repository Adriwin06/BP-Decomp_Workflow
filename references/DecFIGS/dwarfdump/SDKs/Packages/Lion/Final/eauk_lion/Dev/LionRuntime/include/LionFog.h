// LionFog.h:17
struct cLionFog {
private:
	// LionFog.h:46
	extern cLionFog mSingleton;

	// LionFog.h:47
	U32 mEnabledFlag;

	// LionFog.h:48
	U32 mPlaneCount;

	// LionFog.h:49
	FP32 mFogTableMul;

	// LionFog.h:50
	FP32 mNearZ;

	// LionFog.h:51
	FP32 mFarZ;

	// LionFog.h:52
	FP32[256] mPlaneZs;

	// LionFog.h:53
	U32[256] mPlaneRGBAs;

public:
	// LionFog.h:24
	cLionFog();

	// LionFog.h:30
	~cLionFog();

	// LionFog.h:32
	void Enable();

	// LionFog.h:33
	void Disable();

	// LionFog.h:34
	U32 IsEnabled() const;

	// LionFog.h:36
	void SetNearZ(FP32);

	// LionFog.h:37
	void SetFarZ(FP32);

	// LionFog.h:38
	void SetPlaneCount(U32);

	// LionFog.h:39
	void SetPlaneZ(U32, FP32);

	// LionFog.h:40
	void SetPlaneRGBA(U32, U32);

	// LionFog.h:41
	U32 GetFoggedRGBA(FP32, U32) const;

	// LionFog.h:42
	void BuildTable();

	// LionFog.h:44
	cLionFog * GetMe();

}

