// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:31
	namespace physics {
		// drivedynamics.h:66
		enum DriveType {
			NO_DRIVE = 0,
			SOFT_DRIVE = 1,
			HARD_DRIVE = 2,
			DRIVE_FORCE_ENUM_SIZE = 2147483647,
		}

		// Declaration
		struct DriveDynamics {
			// drivedynamics.h:112
			struct Params {
			private:
				// drivedynamics.h:204
				float32_t mSpring;

				// drivedynamics.h:205
				float32_t mDamping;

				// drivedynamics.h:206
				float32_t mStrength;

				// drivedynamics.h:207
				rw::physics::DriveType mType;

			public:
				// drivedynamics.h:122
				Params();

				// drivedynamics.h:126
				~Params();

				// drivedynamics.h:130
				void EndianSwap();

				// drivedynamics.h:142
				const float32_t & GetSpring() const;

				// drivedynamics.h:146
				const float32_t & GetMaxVelocity() const;

				// drivedynamics.h:150
				const float32_t & GetDamping() const;

				// drivedynamics.h:154
				const float32_t & GetMaxStrength() const;

				// drivedynamics.h:158
				rw::physics::DriveType GetDriveType() const;

				// drivedynamics.h:170
				void SetInactive();

				// drivedynamics.h:174
				void SetHard(float32_t, float32_t, float32_t);

				// drivedynamics.h:178
				void SetSoft(float32_t, float32_t, float32_t);

				// drivedynamics.h:182
				void SetSpring(float32_t);

				// drivedynamics.h:186
				void SetMaxVelocity(float32_t);

				// drivedynamics.h:190
				void SetDamping(float32_t);

				// drivedynamics.h:194
				void SetMaxStrength(float32_t);

			}

		}

	}

}

// drivedynamics.h:95
struct rw::physics::DriveDynamics {
private:
	// drivedynamics.h:261
	rw::physics::DriveDynamics::Params mLinear;

	// drivedynamics.h:262
	rw::physics::DriveDynamics::Params mAngular;

public:
	// drivedynamics.h:223
	void DriveDynamics();

	// drivedynamics.h:227
	void ~DriveDynamics();

	// drivedynamics.h:231
	ResourceDescriptor GetResourceDescriptor();

	// drivedynamics.h:235
	void EndianSwap();

	// drivedynamics.h:247
	rw::physics::DriveDynamics::Params & LinearParams();

	// drivedynamics.h:251
	rw::physics::DriveDynamics::Params & AngularParams();

}

