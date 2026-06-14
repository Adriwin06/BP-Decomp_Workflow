// vec_float.h:40
struct rw::math::vpu::VecFloat {
	// vec_float.h:79
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// vec_float.h:56
	void VecFloat(rw::math::vpu::VecFloatRefIndex);

	// vec_float.h:57
	void VecFloat();

	// vec_float.h:59
	void VecFloat(VectorIntrinsicInParam);

	// vec_float.h:60
	void VecFloat(VectorIntrinsicInParam, int);

	// vec_float.h:61
	void VecFloat(const float &);

	// vec_float.h:63
	float GetFloat() const;

	// vec_float.h:64
	void SetFloat(float);

	// vec_float.h:65
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vec_float.h:66
	float operator float() const;

	// vec_float.h:71
	VecFloat & operator=(const float &);

	// vec_float.h:72
	VecFloat & operator=(const rw::math::vpu::VecFloatRefIndex &);

}

// vec_float.h:170
struct rw::math::vpu::VecFloatRefIndex {
	// vec_float.h:223
	const VectorIntrinsicUnion::VectorIntrinsic & mV;

	// vec_float.h:224
	rw::math::vpu::VectorAxis mIndex;

public:
	// vec_float.h:180
	void VecFloatRefIndex(VectorIntrinsicUnion::VectorIntrinsic &, int);

	// vec_float.h:182
	void VecFloatRefIndex(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:184
	float GetFloat() const;

	// vec_float.h:185
	void SetFloat(float);

	// vec_float.h:186
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vec_float.h:187
	int GetIndex() const;

	// vec_float.h:191
	VecFloatRefIndex & operator=(VecFloatRefIndex);

	// vec_float.h:192
	VecFloatRefIndex & operator=(VecFloat);

	// vec_float.h:193
	VecFloatRefIndex & operator=(float);

	// vec_float.h:195
	float operator float() const;

	// vec_float.h:199
	VecFloatRefIndex & operator+=(VecFloat);

	// vec_float.h:200
	VecFloatRefIndex & operator+=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:201
	VecFloatRefIndex & operator+=(const float &);

	// vec_float.h:205
	VecFloatRefIndex & operator-=(VecFloat);

	// vec_float.h:206
	VecFloatRefIndex & operator-=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:207
	VecFloatRefIndex & operator-=(const float &);

	// vec_float.h:211
	VecFloatRefIndex & operator*=(VecFloat);

	// vec_float.h:212
	VecFloatRefIndex & operator*=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:213
	VecFloatRefIndex & operator*=(const float &);

	// vec_float.h:217
	VecFloatRefIndex & operator/=(VecFloat);

	// vec_float.h:218
	VecFloatRefIndex & operator/=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:219
	VecFloatRefIndex & operator/=(const float &);

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector_intrinsic.h:11
		namespace vpu {
			// vec_float.h:236
			extern float GetFloat(const VecFloat &);

		}

	}

}

