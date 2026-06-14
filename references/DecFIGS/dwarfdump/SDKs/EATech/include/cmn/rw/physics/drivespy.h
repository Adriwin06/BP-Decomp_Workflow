// drivespy.h:76
struct rw::physics::DriveSpy {
private:
	// drivespy.h:188
	Vector3 mLstress;

	// drivespy.h:189
	Vector3 mAstress;

	// drivespy.h:190
	float32_t mLindst;

	// drivespy.h:191
	float32_t mAngdst;

	// drivespy.h:192
	int32_t mDrive;

	// drivespy.h:193
	uint32_t mTag;

public:
	// drivespy.h:88
	void DriveSpy();

	// drivespy.h:92
	void ~DriveSpy();

	// drivespy.h:96
	ResourceDescriptor GetResourceDescriptor();

	// drivespy.h:100
	uint32_t GetSize();

	// drivespy.h:104
	uint32_t GetAlignment();

	// drivespy.h:116
	Drive * GetDrive(rw::physics::Simulation *) const;

	// drivespy.h:120
	uint32_t GetTag() const;

	// drivespy.h:124
	float32_t GetLinearDistanceToKey() const;

	// drivespy.h:128
	float32_t GetAngularDistanceToKey() const;

	// drivespy.h:132
	Vector3 GetLinearStress() const;

	// drivespy.h:136
	Vector3 GetAngularStress() const;

private:
	// drivespy.h:148
	void SetDrive(int32_t);

	// drivespy.h:152
	void SetTag(uint32_t);

	// drivespy.h:156
	void SetLinearDistanceToKey(float32_t);

	// drivespy.h:160
	void SetAngularDistanceToKey(float32_t);

	// drivespy.h:164
	void SetLinearStress(const rw::math::vpu::Vector3 &);

	// drivespy.h:168
	void SetAngularStress(const rw::math::vpu::Vector3 &);

}

