// driveframes.h:66
struct rw::physics::DriveFrames {
private:
	// driveframes.h:169
	Quaternion mQuatA;

	// driveframes.h:170
	Vector3 mPosA;

	// driveframes.h:171
	Quaternion mQuatB;

	// driveframes.h:172
	Vector3 mPosB;

public:
	// driveframes.h:75
	void DriveFrames();

	// driveframes.h:79
	void ~DriveFrames();

	// driveframes.h:83
	ResourceDescriptor GetResourceDescriptor();

	// driveframes.h:87
	void EndianSwap();

	// driveframes.h:99
	Vector3 GetChildPosition() const;

	// driveframes.h:103
	Vector3 GetParentPosition() const;

	// driveframes.h:107
	Quaternion GetChildOrientation() const;

	// driveframes.h:111
	Quaternion GetParentOrientation() const;

	// driveframes.h:123
	void SetChildPosition(const rw::math::vpu::Vector3 &);

	// driveframes.h:127
	void SetParentPosition(const rw::math::vpu::Vector3 &);

	// driveframes.h:131
	void SetChildOrientation(const rw::math::vpu::Matrix33 &);

	// driveframes.h:135
	void SetChildOrientation(const rw::math::vpu::Quaternion &);

	// driveframes.h:139
	void SetParentOrientation(const rw::math::vpu::Matrix33 &);

	// driveframes.h:143
	void SetParentOrientation(const rw::math::vpu::Quaternion &);

	// driveframes.h:147
	void SetChildFrame(const rw::math::vpu::Matrix44Affine &);

	// driveframes.h:151
	void SetChildFrame(const rw::math::vpu::QuatPos &);

	// driveframes.h:155
	void SetParentFrame(const rw::math::vpu::Matrix44Affine &);

	// driveframes.h:159
	void SetParentFrame(const rw::math::vpu::QuatPos &);

}

