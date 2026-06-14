// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// matrix44affinepacked.h:97
		using namespace vpu;

	}

}

// matrix44affinepacked.h:24
struct rw::math::vpu::Matrix44AffinePacked {
	// matrix44affinepacked.h:90
	Vector4 xAxis;

	// matrix44affinepacked.h:91
	Vector4 yAxis;

	// matrix44affinepacked.h:92
	Vector4 zAxis;

public:
	// matrix44affinepacked.h:46
	void Matrix44AffinePacked();

	// matrix44affinepacked.h:47
	void Matrix44AffinePacked(const rw::math::vpu::Matrix44AffinePacked &);

	// matrix44affinepacked.h:48
	void Matrix44AffinePacked(const rw::math::vpu::Matrix44Affine &);

	// matrix44affinepacked.h:49
	void Matrix44AffinePacked(const rw::math::vpu::Matrix44 &);

	// matrix44affinepacked.h:50
	void Matrix44AffinePacked(Vector3, Vector3, Vector3, Vector3);

	// matrix44affinepacked.h:54
	void Matrix44AffinePacked(const float *);

	// matrix44affinepacked.h:58
	void Matrix44AffinePacked(float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44affinepacked.h:61
	void SetZero();

	// matrix44affinepacked.h:65
	void Set(float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44affinepacked.h:67
	void Set(Vector3, Vector3, Vector3, Vector3);

	// matrix44affinepacked.h:69
	VecFloatRefIndex GetElem(int);

	// matrix44affinepacked.h:70
	const rw::math::vpu::VecFloatRefIndex GetElem(int) const;

	// matrix44affinepacked.h:72
	VecFloatRefIndex GetElem(int, int);

	// matrix44affinepacked.h:73
	const rw::math::vpu::VecFloatRefIndex GetElem(int, int) const;

	// matrix44affinepacked.h:75
	VecFloatRefIndex operator()(int, int);

	// matrix44affinepacked.h:76
	const rw::math::vpu::VecFloatRefIndex operator()(int, int) const;

	// matrix44affinepacked.h:80
	void SetElem(int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix44affinepacked.h:81
	void SetElem(int, VecFloat);

	// matrix44affinepacked.h:85
	void SetElem(int, int, VecFloat);

	// matrix44affinepacked.h:86
	void SetElem(int, int, const rw::math::vpu::VecFloatRefIndex &);

}

