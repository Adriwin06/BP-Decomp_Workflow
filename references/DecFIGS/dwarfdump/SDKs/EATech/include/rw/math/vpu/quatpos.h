// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// quatpos.h:91
		using namespace vpu;

	}

}

// quatpos.h:28
struct rw::math::vpu::QuatPos {
	// quatpos.h:85
	Quaternion quat;

	// quatpos.h:86
	Vector3 pos;

public:
	// quatpos.h:49
	void QuatPos();

	// quatpos.h:50
	void QuatPos(const rw::math::vpu::QuatPos &);

	// quatpos.h:51
	void QuatPos(Quaternion, Vector3);

	// quatpos.h:52
	void QuatPos(VectorIntrinsicInParam, VectorIntrinsicInParam);

	// quatpos.h:53
	void QuatPos(float, float, float, float, float, float, float);

	// quatpos.h:57
	void QuatPos(const float *);

	// quatpos.h:58
	void QuatPos(VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, VecFloat);

	// quatpos.h:59
	void QuatPos(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// quatpos.h:64
	QuatPos & operator=(QuatPos);

	// quatpos.h:66
	void Set(float, float, float, float, float, float, float);

	// quatpos.h:67
	void Set(VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, VecFloat, VecFloat);

	// quatpos.h:68
	void Set(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// quatpos.h:72
	void SetQuaternion(Quaternion);

	// quatpos.h:73
	void SetPos(Vector3);

	// quatpos.h:74
	void SetZero();

	// quatpos.h:75
	void SetIdentity();

	// quatpos.h:77
	Quaternion & GetQuaternion();

	// quatpos.h:78
	const rw::math::vpu::Quaternion & GetQuaternion() const;

	// quatpos.h:80
	Vector3 & GetPos();

	// quatpos.h:81
	const rw::math::vpu::Vector3 & GetPos() const;

}

