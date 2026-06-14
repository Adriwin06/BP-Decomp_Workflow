// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// Declaration
	struct CubicSpline {
		// CgsCubicSpline.h:61
		struct Node {
			// CgsCubicSpline.h:63
			Vector3 mPosition;

			// CgsCubicSpline.h:64
			Vector3 mTangent;

			// CgsCubicSpline.h:65
			float32_t mfLength;

		}

	}

}

// CgsCubicSpline.h:56
struct CgsGeometric::CubicSpline {
private:
	// CgsCubicSpline.h:131
	extern const int32_t mknSegmentCacheSize = 20;

	// CgsCubicSpline.h:133
	HermiteSpline mCurrentSpline;

	// CgsCubicSpline.h:135
	CgsGeometric::CubicSpline::Node * mpaNodes;

	// CgsCubicSpline.h:137
	int32_t miMaxNodes;

	// CgsCubicSpline.h:138
	int32_t miNodeCount;

	// CgsCubicSpline.h:139
	int32_t miCurrentSegmentIndex;

	// CgsCubicSpline.h:141
	float32_t[20] mfaSegmentCache;

	// CgsCubicSpline.h:142
	float32_t mfTotalLength;

	// CgsCubicSpline.h:144
	bool mbBuilt;

public:
	// CgsCubicSpline.h:72
	void Construct(CgsGeometric::CubicSpline::Node *, int32_t);

	// CgsCubicSpline.h:76
	void BuildCatmullRom();

	// CgsCubicSpline.h:80
	void BuildRounded();

	// CgsCubicSpline.h:84
	void BuildNatural();

	// CgsCubicSpline.h:89
	void AddNode(Vector3);

	// CgsCubicSpline.h:93
	int32_t GetNodeCount() const;

	// CgsCubicSpline.h:98
	const rw::math::vpu::Vector3 & GetNodePosition(int32_t) const;

	// CgsCubicSpline.h:103
	const rw::math::vpu::Vector3 & GetNodeTangent(int32_t) const;

	// CgsCubicSpline.h:108
	float32_t GetNodeLength(int32_t) const;

	// CgsCubicSpline.h:112
	float32_t GetTotalLength() const;

	// CgsCubicSpline.h:117
	Vector3 GetPosition(float32_t);

	// CgsCubicSpline.h:122
	Vector3 GetTangent(float32_t);

	// CgsCubicSpline.h:128
	Vector3 GetRawPosition(int32_t, float32_t);

private:
	// CgsCubicSpline.h:148
	void BuildLengths();

	// CgsCubicSpline.h:153
	void RefreshSegmentCache(int32_t);

	// CgsCubicSpline.h:158
	float32_t ComputeT(float32_t);

	// CgsCubicSpline.h:164
	int32_t FindSegment(float32_t, float32_t *);

}

// CgsCubicSpline.h:131
extern const int32_t mknSegmentCacheSize = 20;

