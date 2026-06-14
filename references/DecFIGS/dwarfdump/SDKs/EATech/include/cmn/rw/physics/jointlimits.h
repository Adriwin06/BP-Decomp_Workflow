// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:31
	namespace physics {
		// jointlimits.h:74
		enum SwingType {
			SWING_LOCKED = 0,
			SWING_CONE = 1,
			SWING_HINGE = 2,
			SWING_AXLE = 3,
			SWING_FREE = 4,
			SWING_FORCE_ENUM_SIZE = 2147483647,
		}

		// jointlimits.h:98
		enum TwistType {
			TWIST_LOCKED = 0,
			TWIST_ARC = 1,
			TWIST_FREE = 2,
			TWIST_FORCE_ENUM_SIZE = 2147483647,
		}

	}

}

// jointlimits.h:129
struct rw::physics::JointLimits {
private:
	// jointlimits.h:244
	Vector3 mPprism;

	// jointlimits.h:245
	Vector3 mVprism;

	// jointlimits.h:246
	float32_t mVtwist;

	// jointlimits.h:247
	float32_t mVswing;

	// jointlimits.h:248
	float32_t mSwinga;

	// jointlimits.h:249
	float32_t mTwista;

	// jointlimits.h:250
	float32_t mSwingc;

	// jointlimits.h:251
	float32_t mTwistc;

	// jointlimits.h:252
	rw::physics::SwingType mSwingf;

	// jointlimits.h:253
	rw::physics::TwistType mTwistf;

public:
	// jointlimits.h:138
	void JointLimits();

	// jointlimits.h:142
	void ~JointLimits();

	// jointlimits.h:146
	ResourceDescriptor GetResourceDescriptor();

	// jointlimits.h:150
	void EndianSwap();

	// jointlimits.h:162
	Vector3 GetPositionLimit() const;

	// jointlimits.h:166
	Vector3 GetLinearVelocityLimit() const;

	// jointlimits.h:170
	rw::physics::SwingType GetSwingType() const;

	// jointlimits.h:174
	rw::physics::TwistType GetTwistType() const;

	// jointlimits.h:178
	const float32_t & GetSwingAngle() const;

	// jointlimits.h:182
	const float32_t & GetTwistAngle() const;

	// jointlimits.h:186
	const float32_t & GetSwingLimit() const;

	// jointlimits.h:190
	const float32_t & GetTwistLimit() const;

	// jointlimits.h:194
	Vector3 GetAngularVelocityLimit() const;

	// jointlimits.h:206
	void SetSwingType(rw::physics::SwingType);

	// jointlimits.h:210
	void SetTwistType(rw::physics::TwistType);

	// jointlimits.h:214
	void SetSwingAngle(float32_t);

	// jointlimits.h:218
	void SetTwistAngle(float32_t);

	// jointlimits.h:222
	void SetPositionLimit(const rw::math::vpu::Vector3 &);

	// jointlimits.h:226
	void SetLinearVelocityLimit(const rw::math::vpu::Vector3 &);

	// jointlimits.h:230
	void SetTwistVelocityLimit(float32_t);

	// jointlimits.h:234
	void SetSwingVelocityLimit(float32_t);

}

