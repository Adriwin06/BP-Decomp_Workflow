// jointspy.h:79
struct rw::physics::JointSpy {
private:
	// jointspy.h:173
	Vector3 mLstress;

	// jointspy.h:174
	Vector3 mAstress;

	// jointspy.h:175
	int32_t mJoint;

	// jointspy.h:176
	uint32_t mTag;

public:
	// jointspy.h:91
	void JointSpy();

	// jointspy.h:95
	void ~JointSpy();

	// jointspy.h:99
	ResourceDescriptor GetResourceDescriptor();

	// jointspy.h:103
	uint32_t GetSize();

	// jointspy.h:107
	uint32_t GetAlignment();

	// jointspy.h:119
	Joint * GetJoint(rw::physics::Simulation *) const;

	// jointspy.h:123
	uint32_t GetTag() const;

	// jointspy.h:127
	Vector3 GetLinearStress() const;

	// jointspy.h:131
	Vector3 GetAngularStress() const;

private:
	// jointspy.h:143
	void SetJoint(int32_t);

	// jointspy.h:147
	void SetTag(uint32_t);

	// jointspy.h:151
	void SetLinearStress(const rw::math::vpu::Vector3 &);

	// jointspy.h:155
	void SetAngularStress(const rw::math::vpu::Vector3 &);

}

