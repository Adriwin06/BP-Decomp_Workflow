// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:31
	namespace physics {
		// ps3constants.h:174
		unsigned int[4] Select_1000;

		// ps3constants.h:175
		unsigned int[4] Select_1110;

		// ps3constants.h:176
		unsigned int[4] Swizzle_YZXW;

		// ps3constants.h:177
		unsigned int[4] Swizzle_ZXYW;

		// ps3constants.h:178
		unsigned int[4] Swizzle_XYZX;

		// ps3constants.h:179
		unsigned int[4] Swizzle_Z0Z1X1W0;

		// ps3constants.h:180
		unsigned int[4] Swizzle_Y0Y1Z1W0;

		// ps3constants.h:181
		unsigned int[4] Swizzle_Z0W0Y1X1;

		// ps3constants.h:182
		unsigned int[4] Swizzle_X0Y0Z1X1;

		// ps3constants.h:183
		unsigned int[4] Permute_0X0Y1X1Y;

		// ps3constants.h:184
		unsigned int[4] Combine_X0X0X0X1;

		// ps3constants.h:185
		unsigned int[4] Combine_Y0Y0Y0Y1;

		// ps3constants.h:186
		unsigned int[4] Combine_Z0Z0Z0Z1;

		// ps3constants.h:187
		unsigned int[4] Combine_X1X0X0X1;

		// ps3constants.h:188
		unsigned int[4] Combine_X0Y0Z0X1;

		// ps3constants.h:189
		unsigned int[4] Combine_X0Y0Z0Y1;

		// ps3constants.h:190
		unsigned int[4] Combine_X0Y0Z0Z1;

		// ps3constants.h:191
		unsigned int[4] Transpo_Z0W0W1W1;

		// ps3constants.h:192
		float[4] Identity_R0;

		// ps3constants.h:193
		float[4] Identity_R1;

		// ps3constants.h:194
		float[4] Identity_R2;

		// ps3constants.h:195
		float[4] Identity_R3;

		// ps3constants.h:196
		unsigned int[4] NegativeZero;

		// ps3constants.h:197
		unsigned int[4] Friction_Filters;

		// ps3constants.h:198
		float[4] Tolerance_Normal;

		// ps3constants.h:199
		float[4] OneHalf;

	}

}

// ps3constants.h:145
union rw::physics::AddrVoidPtrUnion {
	// ostypes.h:145
	typedef uint32_t GlobalAddress;

	// ps3constants.h:146
	AddrVoidPtrUnion::GlobalAddress addr;

	// ps3constants.h:147
	void * ptr;

	// ps3constants.h:150
	extern void * operator=(void *);

	// ps3constants.h:151
	extern bool operator==(const AddrVoidPtrUnion &);

	// ps3constants.h:152
	extern void * operator->() const;

	// ps3constants.h:153
	extern void * operator void*() const;

	// ps3constants.h:154
	extern float *[4] operator float __vector__*() const;

	// ps3constants.h:155
	extern rw::physics::ContactJacobian * operator rw::physics::ContactJacobian*() const;

	// ps3constants.h:156
	extern rw::physics::ContactSpy * operator rw::physics::ContactSpy*() const;

	// ps3constants.h:157
	extern rw::physics::JointJacobian * operator rw::physics::JointJacobian*() const;

	// ps3constants.h:158
	extern rw::physics::JointSpy * operator rw::physics::JointSpy*() const;

	// ps3constants.h:159
	extern rw::physics::DriveJacobian * operator rw::physics::DriveJacobian*() const;

	// ps3constants.h:160
	extern rw::physics::DriveSpy * operator rw::physics::DriveSpy*() const;

	// ps3constants.h:161
	extern SPU::HostPtr operator rw::HostPtr() const;

}
// ps3constants.h:166
union rw::physics::vector_union {
	// ps3constants.h:167
	uint32_t[4] u;

	// ps3constants.h:168
	int32_t[4] i;

	// ps3constants.h:169
	float32_t[4] f;

	// ps3constants.h:170
	unsigned int[4] vecu;

	// ps3constants.h:171
	float[4] vecf;

}
