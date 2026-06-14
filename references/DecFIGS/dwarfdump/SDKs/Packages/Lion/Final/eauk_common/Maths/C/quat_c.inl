// quat_c.inl:448
void cQuat::FromMatrix(const const cMatrix &  aMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:450
		FP32 lMax;

		// quat_c.inl:452
		FP32 lD0;

		// quat_c.inl:453
		FP32 lD1;

		// quat_c.inl:454
		FP32 lD2;

		// quat_c.inl:456
		FP32 lXx;

		// quat_c.inl:457
		FP32 lYy;

		// quat_c.inl:458
		FP32 lZz;

		// quat_c.inl:459
		FP32 lWw;

		{
			// quat_c.inl:477
			FP32 lW4;

		}
		{
			// quat_c.inl:485
			FP32 lX4;

		}
		{
			// quat_c.inl:493
			FP32 lY4;

		}
		{
			// quat_c.inl:501
			FP32 lZ4;

		}
	}
}

// quat_c.inl:36
void cQuat::SetX(const FP32  aX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:38
		FP32 * lpQ;

	}
}

// quat_c.inl:66
void cQuat::SetY(const FP32  aY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:68
		FP32 * lpQ;

	}
}

// quat_c.inl:96
void cQuat::SetZ(const FP32  aZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:99
		FP32 * lpQ;

	}
}

// quat_c.inl:127
void cQuat::SetW(const FP32  aW) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:129
		FP32 * lpQ;

	}
}

// quat_c.inl:143
void cQuat::Set(const FP32  aX, const FP32  aY, const FP32  aZ, const FP32  aW) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// quat_c.inl:212
void cQuat::BuildIdentity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// quat_c.inl:516
void cQuat::ToMatrix(const cMatrix &  aMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:518
		FP32 lx2;

		// quat_c.inl:518
		FP32 ly2;

		// quat_c.inl:518
		FP32 lz2;

		// quat_c.inl:519
		FP32 lxx;

		// quat_c.inl:519
		FP32 lyy;

		// quat_c.inl:519
		FP32 lzz;

		// quat_c.inl:519
		FP32 lwx;

		// quat_c.inl:519
		FP32 lwy;

		// quat_c.inl:519
		FP32 lwz;

		// quat_c.inl:519
		FP32 lxy;

		// quat_c.inl:519
		FP32 lxz;

		// quat_c.inl:519
		FP32 lyz;

	}
}

// quat_c.inl:21
void cQuat::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:23
		FP32 * lpQ;

	}
}

// quat_c.inl:51
void cQuat::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:53
		FP32 * lpQ;

	}
}

// quat_c.inl:81
void cQuat::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:83
		FP32 * lpQ;

	}
}

// quat_c.inl:112
void cQuat::GetW() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:114
		FP32 * lpQ;

	}
}

// quat_c.inl:394
void cQuat::Slerp(const cQuat  aQuat0, const cQuat  aQuat1, FP32  aWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quat_c.inl:396
		FP32 lCosT;

		// quat_c.inl:397
		FP32 lT0;

		// quat_c.inl:397
		FP32 lT1;

		// quat_c.inl:398
		U8 lFlip;

		{
			// quat_c.inl:423
			FP32 lTheta;

			// quat_c.inl:424
			FP32 lSinT;

		}
	}
}

