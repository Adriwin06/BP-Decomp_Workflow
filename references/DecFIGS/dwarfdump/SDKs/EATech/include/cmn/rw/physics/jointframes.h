// jointframes.h:67
struct rw::physics::JointFrames {
private:
	// jointframes.h:166
	Quaternion mQuatA;

	// jointframes.h:167
	Vector3 mPosA;

	// jointframes.h:168
	Quaternion mQuatB;

	// jointframes.h:169
	Vector3 mPosB;

	// jointframes.h:170
	Quaternion mQuatL;

public:
	// jointframes.h:76
	void JointFrames();

	// jointframes.h:80
	void ~JointFrames();

	// jointframes.h:84
	ResourceDescriptor GetResourceDescriptor();

	// jointframes.h:88
	void EndianSwap();

	// jointframes.h:100
	Vector3 GetChildPosition() const;

	// jointframes.h:104
	Vector3 GetParentPosition() const;

	// jointframes.h:108
	Quaternion GetChildAngularFrame() const;

	// jointframes.h:112
	Quaternion GetParentAngularFrame() const;

	// jointframes.h:116
	Quaternion GetParentLinearFrame() const;

	// jointframes.h:128
	void SetChildPosition(const rw::math::vpu::Vector3 &);

	// jointframes.h:132
	void SetParentPosition(const rw::math::vpu::Vector3 &);

	// jointframes.h:136
	void SetChildAngularFrame(const rw::math::vpu::Matrix33 &);

	// jointframes.h:140
	void SetChildAngularFrame(const rw::math::vpu::Quaternion &);

	// jointframes.h:144
	void SetParentAngularFrame(const rw::math::vpu::Matrix33 &);

	// jointframes.h:148
	void SetParentAngularFrame(const rw::math::vpu::Quaternion &);

	// jointframes.h:152
	void SetParentLinearFrame(const rw::math::vpu::Matrix33 &);

	// jointframes.h:156
	void SetParentLinearFrame(const rw::math::vpu::Quaternion &);

}

