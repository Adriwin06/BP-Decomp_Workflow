// jointhelper.h:56
struct rw::physics::JointHelper {
	// jointhelper.h:132
	Matrix44Affine mParentBodyFrame;

	// jointhelper.h:133
	Matrix44Affine mChildBodyFrame;

public:
	// jointhelper.h:59
	RwBool IsValid() const;

	// jointhelper.h:66
	void SetReferenceFrame(const rw::math::vpu::Matrix44Affine &, const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:70
	void SetReferenceFrame(const RigidBody &, const RigidBody &);

	// jointhelper.h:74
	void SetReferenceFrame(const Part &, const Part &);

	// jointhelper.h:80
	void SetReferenceFrame(const rw::physics::PartDefinition &, const rw::math::vpu::Matrix44Affine &, const rw::physics::PartDefinition &, const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:87
	void SetupPosition(JointFrames *, Vector3) const;

	// jointhelper.h:92
	void SetupAngularConstraintFrame(JointFrames *, Vector3, Vector3) const;

	// jointhelper.h:96
	void SetupLinearConstraintFrame(JointFrames *, const rw::math::vpu::Matrix33 &) const;

	// jointhelper.h:101
	void SetupLinearConstraintFrame(JointFrames *, Vector3, Vector3) const;

	// jointhelper.h:107
	Matrix44Affine BodyTMFromPartDef(const rw::physics::PartDefinition &, const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:110
	RwBool IsOrthonormal(const rw::math::vpu::Matrix33 &, float32_t);

	// jointhelper.h:113
	Matrix33 ConvertTo3x3(const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:116
	Matrix44Affine ConvertTo4x3(const rw::math::vpu::Matrix33 &, Vector3);

	// jointhelper.h:119
	Matrix44Affine Inverse(const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:123
	Matrix33 CreateOrthonormal(Vector3, Vector3);

	// jointhelper.h:126
	Vector3 Perpendicular(Vector3);

}

// jointhelper.h:56
struct rw::physics::JointHelper {
	// jointhelper.h:132
	Matrix44Affine mParentBodyFrame;

	// jointhelper.h:133
	Matrix44Affine mChildBodyFrame;

public:
	// jointhelper.h:59
	RwBool IsValid() const;

	// jointhelper.h:66
	void SetReferenceFrame(const rw::math::vpu::Matrix44Affine &, const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:70
	void SetReferenceFrame(const RigidBody &, const RigidBody &);

	// jointhelper.h:74
	void SetReferenceFrame(const Part &, const Part &);

	// jointhelper.h:80
	void SetReferenceFrame(const PartDefinition &, const rw::math::vpu::Matrix44Affine &, const PartDefinition &, const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:87
	void SetupPosition(JointFrames *, Vector3) const;

	// jointhelper.h:92
	void SetupAngularConstraintFrame(JointFrames *, Vector3, Vector3) const;

	// jointhelper.h:96
	void SetupLinearConstraintFrame(JointFrames *, const rw::math::vpu::Matrix33 &) const;

	// jointhelper.h:101
	void SetupLinearConstraintFrame(JointFrames *, Vector3, Vector3) const;

	// jointhelper.h:107
	Matrix44Affine BodyTMFromPartDef(const PartDefinition &, const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:110
	RwBool IsOrthonormal(const rw::math::vpu::Matrix33 &, float32_t);

	// jointhelper.h:113
	Matrix33 ConvertTo3x3(const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:116
	Matrix44Affine ConvertTo4x3(const rw::math::vpu::Matrix33 &, Vector3);

	// jointhelper.h:119
	Matrix44Affine Inverse(const rw::math::vpu::Matrix44Affine &);

	// jointhelper.h:123
	Matrix33 CreateOrthonormal(Vector3, Vector3);

	// jointhelper.h:126
	Vector3 Perpendicular(Vector3);

}

