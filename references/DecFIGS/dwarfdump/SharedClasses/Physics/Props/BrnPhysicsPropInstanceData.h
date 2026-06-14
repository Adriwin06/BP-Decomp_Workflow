// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPhysicsPropInstanceData.h:37
		const uint32_t KI_PROP_FLAG_SHIFT = 26;

		// BrnPhysicsPropInstanceData.h:38
		const uint32_t KI_PROP_TYPEID_MASK = 67108863;

		// BrnPhysicsPropInstanceData.h:39
		const uint32_t KI_PROP_FLAG_MASK = 4227858432;

		// BrnPhysicsPropInstanceData.h:41
		const int32_t KI_PROP_FLAG_DISABLEPHYSICS = 1;

		// BrnPhysicsPropInstanceData.h:44
		const float32_t KI_PROP_ANIM_MINSPEED;

		// BrnPhysicsPropInstanceData.h:45
		const float32_t KI_PROP_ANIM_MAXSPEED;

		// BrnPhysicsPropInstanceData.h:48
		const float32_t KI_PROP_MAX_ANGULARCONSTRAINT;

		// BrnPhysicsPropInstanceData.h:49
		const float32_t KI_PROP_MIN_ANGULARCONSTRAINT;

		// BrnPhysicsPropInstanceData.h:52
		const uint8_t knXAngularRotation;

		// BrnPhysicsPropInstanceData.h:53
		const uint8_t knYAngularRotation = 64;

		// BrnPhysicsPropInstanceData.h:54
		const uint8_t knZAngularRotation = 128;

		// BrnPhysicsPropInstanceData.h:55
		const uint8_t knNoAngularRotation = 192;

		// BrnPhysicsPropInstanceData.h:56
		const uint8_t knAngularRotationBits = 192;

	}

}

// BrnPhysicsPropInstanceData.h:74
struct BrnPhysics::Props::PropInstanceData {
private:
	// BrnPhysicsPropInstanceData.h:160
	Matrix44Affine mWorldTransform;

	// BrnPhysicsPropInstanceData.h:161
	uint32_t muTypeIdAndFlags;

	// BrnPhysicsPropInstanceData.h:162
	uint32_t muInstanceID;

	// BrnPhysicsPropInstanceData.h:163
	uint16_t muAlternativeType;

	// BrnPhysicsPropInstanceData.h:166
	int8_t mn8RotSpeed;

	// BrnPhysicsPropInstanceData.h:167
	uint8_t mn8MaxAngle;

	// BrnPhysicsPropInstanceData.h:168
	uint8_t mn8MinAngle;

	// BrnPhysicsPropInstanceData.h:170
	uint8_t[3] mau8Padding;

public:
	// BrnPhysicsPropInstanceData.h:78
	void Construct();

	// BrnPhysicsPropInstanceData.h:82
	bool Prepare();

	// BrnPhysicsPropInstanceData.h:86
	bool Release();

	// BrnPhysicsPropInstanceData.h:90
	void Destruct();

	// BrnPhysicsPropInstanceData.h:94
	void FixUp();

	// BrnPhysicsPropInstanceData.h:98
	void FixDown();

	// BrnPhysicsPropInstanceData.h:101
	uint32_t GetTypeID() const;

	// BrnPhysicsPropInstanceData.h:104
	void SetTypeID(uint32_t);

	// BrnPhysicsPropInstanceData.h:107
	uint32_t GetFlags() const;

	// BrnPhysicsPropInstanceData.h:110
	void SetFlags(uint32_t);

	// BrnPhysicsPropInstanceData.h:114
	void SetRotVelocity(SmoothStep::Vector3);

	// BrnPhysicsPropInstanceData.h:119
	void SetMaxAngle(float32_t);

	// BrnPhysicsPropInstanceData.h:123
	void SetMinAngle(float32_t);

	// BrnPhysicsPropInstanceData.h:126
	uint8_t GetMinAngle() const;

	// BrnPhysicsPropInstanceData.h:129
	uint8_t GetMaxAngle() const;

	// BrnPhysicsPropInstanceData.h:132
	int8_t GetRotVelocity() const;

	// BrnPhysicsPropInstanceData.h:136
	void SetWorldTransform(Matrix44Affine);

	// BrnPhysicsPropInstanceData.h:140
	void SetRespawnType(int32_t);

	// BrnPhysicsPropInstanceData.h:143
	const rw::math::vpu::Matrix44Affine & GetWorldTransform() const;

	// BrnPhysicsPropInstanceData.h:147
	void SetInstanceID(uint32_t);

	// BrnPhysicsPropInstanceData.h:150
	uint32_t GetInstanceID() const;

	// BrnPhysicsPropInstanceData.h:153
	uint32_t GetAlternativeType() const;

	// BrnPhysicsPropInstanceData.h:156
	bool IsAnimated() const;

private:
	// BrnPhysicsPropInstanceData.h:173
	uint8_t AngleToFixed(float32_t);

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPhysicsPropInstanceData.h:37
		const uint32_t KI_PROP_FLAG_SHIFT = 26;

		// BrnPhysicsPropInstanceData.h:38
		const uint32_t KI_PROP_TYPEID_MASK = 67108863;

		// BrnPhysicsPropInstanceData.h:39
		const uint32_t KI_PROP_FLAG_MASK = 4227858432;

		// BrnPhysicsPropInstanceData.h:41
		const int32_t KI_PROP_FLAG_DISABLEPHYSICS = 1;

		// BrnPhysicsPropInstanceData.h:44
		const float32_t KI_PROP_ANIM_MINSPEED;

		// BrnPhysicsPropInstanceData.h:45
		const float32_t KI_PROP_ANIM_MAXSPEED;

		// BrnPhysicsPropInstanceData.h:48
		const float32_t KI_PROP_MAX_ANGULARCONSTRAINT;

		// BrnPhysicsPropInstanceData.h:49
		const float32_t KI_PROP_MIN_ANGULARCONSTRAINT;

		// BrnPhysicsPropInstanceData.h:52
		const uint8_t knXAngularRotation;

		// BrnPhysicsPropInstanceData.h:53
		const uint8_t knYAngularRotation = 64;

		// BrnPhysicsPropInstanceData.h:54
		const uint8_t knZAngularRotation = 128;

		// BrnPhysicsPropInstanceData.h:55
		const uint8_t knNoAngularRotation = 192;

		// BrnPhysicsPropInstanceData.h:56
		const uint8_t knAngularRotationBits = 192;

	}

}

// BrnPhysicsPropInstanceData.h:74
struct BrnPhysics::Props::PropInstanceData {
private:
	// BrnPhysicsPropInstanceData.h:160
	Matrix44Affine mWorldTransform;

	// BrnPhysicsPropInstanceData.h:161
	uint32_t muTypeIdAndFlags;

	// BrnPhysicsPropInstanceData.h:162
	uint32_t muInstanceID;

	// BrnPhysicsPropInstanceData.h:163
	uint16_t muAlternativeType;

	// BrnPhysicsPropInstanceData.h:166
	int8_t mn8RotSpeed;

	// BrnPhysicsPropInstanceData.h:167
	uint8_t mn8MaxAngle;

	// BrnPhysicsPropInstanceData.h:168
	uint8_t mn8MinAngle;

	// BrnPhysicsPropInstanceData.h:170
	uint8_t[3] mau8Padding;

public:
	// BrnPhysicsPropInstanceData.h:78
	void Construct();

	// BrnPhysicsPropInstanceData.h:82
	bool Prepare();

	// BrnPhysicsPropInstanceData.h:86
	bool Release();

	// BrnPhysicsPropInstanceData.h:90
	void Destruct();

	// BrnPhysicsPropInstanceData.h:94
	void FixUp();

	// BrnPhysicsPropInstanceData.h:98
	void FixDown();

	// BrnPhysicsPropInstanceData.h:101
	uint32_t GetTypeID() const;

	// BrnPhysicsPropInstanceData.h:104
	void SetTypeID(uint32_t);

	// BrnPhysicsPropInstanceData.h:107
	uint32_t GetFlags() const;

	// BrnPhysicsPropInstanceData.h:110
	void SetFlags(uint32_t);

	// BrnPhysicsPropInstanceData.h:114
	void SetRotVelocity(Road::Vector3);

	// BrnPhysicsPropInstanceData.h:119
	void SetMaxAngle(float32_t);

	// BrnPhysicsPropInstanceData.h:123
	void SetMinAngle(float32_t);

	// BrnPhysicsPropInstanceData.h:126
	uint8_t GetMinAngle() const;

	// BrnPhysicsPropInstanceData.h:129
	uint8_t GetMaxAngle() const;

	// BrnPhysicsPropInstanceData.h:132
	int8_t GetRotVelocity() const;

	// BrnPhysicsPropInstanceData.h:136
	void SetWorldTransform(Matrix44Affine);

	// BrnPhysicsPropInstanceData.h:140
	void SetRespawnType(int32_t);

	// BrnPhysicsPropInstanceData.h:143
	const rw::math::vpu::Matrix44Affine & GetWorldTransform() const;

	// BrnPhysicsPropInstanceData.h:147
	void SetInstanceID(uint32_t);

	// BrnPhysicsPropInstanceData.h:150
	uint32_t GetInstanceID() const;

	// BrnPhysicsPropInstanceData.h:153
	uint32_t GetAlternativeType() const;

	// BrnPhysicsPropInstanceData.h:156
	bool IsAnimated() const;

private:
	// BrnPhysicsPropInstanceData.h:173
	uint8_t AngleToFixed(float32_t);

}

